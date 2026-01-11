#ifndef FILE_IO_H
#define FILE_IO_H

#include <vector>
#include <string>

bool read_file(const std::string& filename, std::vector<std::string>& lines);
bool write_file(const std::string& filename, const std::vector<int>& results);

#endif