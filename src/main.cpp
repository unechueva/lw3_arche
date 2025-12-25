#include <iostream>
#include <vector>
#include <string>
#include "file_io.h"
#include "word_counter.h"
#include "thread_manager.h"

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        std::cerr << "Использование: " << argv[0] << " <входной файл> <выходной файл>\n";
        return 1;
    }

    std::string inputFile = argv[1];
    std::string outputFile = argv[2];

    std::vector<std::string> lines;
    if (!read_file(inputFile, lines))
    {
        std::cerr << "Ошибка: не удалось открыть или прочитать файл " << inputFile << "\n";
        return 1;
    }

    if (lines.empty())
    {
        std::cerr << "Файл пустой: " << inputFile << "\n";
        return 1;
    }

    std::vector<int> wordCounts(lines.size(), 0);
    process_lines_multithreaded(lines, wordCounts);

    if (!write_file(outputFile, wordCounts))
    {
        std::cerr << "Ошибка: не удалось записать файл " << outputFile << "\n";
        return 1;
    }

    std::cout << "Обработка завершена. Результаты записаны в " << outputFile << "\n";
    return 0;
}
