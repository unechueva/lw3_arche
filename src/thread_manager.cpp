#include "thread_manager.h"
#include "word_counter.h"
#include <thread>

void process_lines_multithreaded(const std::vector<std::string>& lines, std::vector<int>& wordCounts)
{
    size_t n = lines.size();
    std::vector<std::thread> threads;

    for (size_t i = 0; i < n; ++i)
    {
        threads.emplace_back([&, i]()
        {
            wordCounts[i] = countWords(lines[i]);
        });
    }

    for (auto& t : threads)
    {
        if (t.joinable())
            t.join();
    }
}