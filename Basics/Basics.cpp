#include <iostream>
#include <vector>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

static void printVector(const vector<int>& args) {
    cout << "{";
    for (int i = 0; i < args.size(); ++i) {
        cout << args[i];
        if (i != args.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}\n" << endl;
}

static void print2DVector(const vector<vector<int>>& args) {
    cout << "{";
    for (int i = 0; i < args.size(); ++i) {
        cout << "{";
        for (int j = 0; j < args[i].size(); ++j) {
            cout << args[i][j];
            if (j != args[i].size() - 1)
                cout << ", ";
        }
        cout << "}";
        if (i != args.size() - 1)
            cout << ",\n ";
    }
    cout << "}\n" << endl;
}

void printDirectoryTree(const fs::path& path, int depth = 0) {
    if (!fs::exists(path) || !fs::is_directory(path)) return;

    for (const auto& entry : fs::directory_iterator(path)) {
        for (int i = 0; i < depth; ++i) std::cout << "|   "; // Einrückung

        std::cout << "|-- " << entry.path().filename().string() << "\n";

        if (fs::is_directory(entry)) {
            printDirectoryTree(entry.path(), depth + 1);
        }
    }
}

int main()
{
    vector<int> one = { 9,5,7,2,3,1,6,4,7,3,8};
    vector<vector<int>> two = {{1, 2, 3}, {9, 8, 7}, {5, 4, 6}};

    // some tests
    printVector(one);
    print2DVector(two);

    string rootPath = "../";
    printDirectoryTree(fs::path(rootPath));
    return 0;
}
