#include "file_io.h"
#include <fstream>
#include <iostream>

bool read_file(const std::string& filename, std::vector<std::string>& lines) {
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        return false;
    }
    
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    
    file.close();
    return true;
}

bool write_file(const std::string& filename, const std::vector<int>& results) {
    std::ofstream file(filename);
    
    if (!file.is_open()) {
        return false;
    }
    
    for (size_t i = 0; i < results.size(); ++i) {
        file << "Строка " << (i + 1) << ": " << results[i] << std::endl;
    }
    
    file.close();
    return true;
}