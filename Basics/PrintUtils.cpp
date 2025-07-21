#include "PrintUtils.hpp"

namespace print_utils {

    void printVector(const std::vector<int>& args) {
        std::cout << "{";
        for (int i = 0; i < args.size(); ++i) {
            std::cout << args[i];
            if (i != args.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "}\n" << std::endl;
    }

    void print2DVector(const std::vector<std::vector<int>>& args) {
        std::cout << "{";
        for (int i = 0; i < args.size(); ++i) {
            std::cout << "{";
            for (int j = 0; j < args[i].size(); ++j) {
                std::cout << args[i][j];
                if (j != args[i].size() - 1)
                    std::cout << ", ";
            }
            std::cout << "}";
            if (i != args.size() - 1)
                std::cout << ",\n ";
        }
        std::cout << "}\n" << std::endl;
    }

    void printDirectoryTree(const std::filesystem::path& path, int depth) {
        if (!std::filesystem::exists(path) || !std::filesystem::is_directory(path)) return;

        for (const auto& entry : std::filesystem::directory_iterator(path)) {
            for (int i = 0; i < depth; ++i) std::cout << "|   ";
            std::cout << "|-- " << entry.path().filename().string() << "\n";

            if (std::filesystem::is_directory(entry)) {
                printDirectoryTree(entry.path(), depth + 1);
            }
        }
    }

    void printSet(const std::set<int>& s) {
        std::cout << "{";
        for (auto it = s.begin(); it != s.end(); ++it) {
            std::cout << *it;
            if (std::next(it) != s.end())
                std::cout << ", ";
        }
        std::cout << "}\n" << std::endl;
    }

    void printMap(const std::map<std::string, int>& m) {
        std::cout << "{\n";
        for (const auto& [key, value] : m) {
            std::cout << "  \"" << key << "\": " << value << "\n";
        }
        std::cout << "}\n" << std::endl;
    }

}
