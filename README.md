# Word Count Project

Проект для лабораторной работы по параллельной обработке текста.

## Структура проекта

- src/ — исходный код (модули: file_io, word_counter, thread_manager)
- input/ — входные файлы для обработки
- output/ — выходные файлы после обработки
- CMakeLists.txt — конфигурация сборки проекта

## Запуск проекта

1. Создать папку сборки:
   mkdir build
   cd build
2. Сборка проекта через cmake:
   cmake ..
   make
3. Запуск:
   ./word_count <input_file> <output_file>

## Задачи участников

- Маша: чтение и запись файлов (file_io.cpp/h)
- Катя: подсчёт слов (word_counter.cpp/h)
- Максим: многопоточность (thread_manager.cpp/h)
- Ульяна: интеграция и архитектура проекта
