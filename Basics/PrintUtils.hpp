#ifndef PRINT_UTILS_HPP
#define PRINT_UTILS_HPP

#include <iostream>
#include <vector>
#include <filesystem>
#include <string>
#include <map>
#include <set>

namespace print_utils {
    void printVector(const std::vector<int>& args);
    void print2DVector(const std::vector<std::vector<int>>& args);
    void printDirectoryTree(const std::filesystem::path& path, int depth = 0);
    void printSet(const std::set<int>& s);
    void printMap(const std::map<std::string, int>& m);
}

#endif // PRINT_UTILS_HPP