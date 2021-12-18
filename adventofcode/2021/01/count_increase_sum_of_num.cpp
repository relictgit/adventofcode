#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "count_increase_sum_of_num.h"

calc_input_increase::calc_input_increase(unsigned int linenum, unsigned int count, unsigned int sum_of_num, unsigned int changed_num)
{
    set_calc_input_increase(linenum, count, sum_of_num, changed_num);
}

void calc_input_increase::set_calc_input_increase(unsigned int linenum, unsigned int count, unsigned int sum_of_num, unsigned int changed_num)
{
    m_linenum = linenum;
    m_count = count;
    m_sum_of_num = sum_of_num;
    m_changed_num = changed_num;
}

unsigned int calc_input_increase::get_calc_input_increase()
{
    std::string file_name = "/home/kvoss/source/projects/advent_of_code_proj/adventofcode/2021/01/input.txt";
    std::string line;
    m_linenum = 0;
    m_count = 0;
    m_sum_of_num = 0;
    m_changed_num = 0;
    std::vector <unsigned int> list_numbers;
    std::vector <unsigned int> list_sum_num;

    std::ifstream input_file(file_name);

    // get contents of a file
    // read the file line by line and save the line input into string
    // then take the string, cast it into int and save it into a vector
    // iterate until the entire contens of the file is read and save all
    // the data into the vector (dynamic array)

    try
    {
        while (getline(input_file, line))
        {
            m_linenum = std::stoi(line);
            list_numbers.push_back(m_linenum);
        }
    }
    catch (std::exception &ex)
    {
        std::cerr << "Exception: unable to read the lines of the file: "
            << file_name << std::endl;
    }

    // select the first three numbers and add them together like a + b + c
    // save those numbers in a list and find the increments

    for (m_count; m_count < list_numbers.size()-2; m_count++)
    {
        m_sum_of_num = list_numbers.at(m_count) + list_numbers.at(m_count+1) + list_numbers.at(m_count+2);
        list_sum_num.push_back(m_sum_of_num);
    }

    m_count = 1;
    for (m_count; m_count < list_sum_num.size(); m_count++)
    {
        if (list_sum_num.at(m_count-1) < list_sum_num.at(m_count))
        {
            m_changed_num += 1;
        }
    }

    list_sum_num.clear();
    list_numbers.clear();

    return m_changed_num;
}
