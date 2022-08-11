#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "read_input.hpp"

reader::reader(std::vector <std::string> list_numbers,
        std::string file_name,
        std::string line,
        int linenumbers)
{
    set_reader(list_numbers, file_name, line, linenumbers);
}

reader::~reader() {}

void reader::set_reader(std::vector <std::string> list_numbers,
        std::string file_name,
        std::string line,
        int linenumbers)
{
    m_list_numbers = list_numbers;
    m_line = line;
    m_file_name = file_name;
    m_linenumbers = linenumbers;
}

std::vector <std::string> reader::file_reader()
{
    m_file_name = "./input.txt";
    m_line = "";

    std::ifstream input_file(m_file_name);

    while(getline(input_file, m_line))
    {
        m_list_numbers.push_back(m_line);
    }

    return m_list_numbers;
}
