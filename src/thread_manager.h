#ifndef THREAD_MANAGER_H
#define THREAD_MANAGER_H

#include <vector>
#include <string>

void process_lines_multithreaded(const std::vector<std::string>& lines, std::vector<int>& wordCounts);

#endif // THREAD_MANAGER_H