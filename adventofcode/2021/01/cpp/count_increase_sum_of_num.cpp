#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "count_increase_sum_of_num.hpp"
#include "read_input.hpp"

calc_input_increase::calc_input_increase(unsigned int linenum,
        unsigned int count,
        unsigned int sum_of_num,
        unsigned int changed_num)
{
    set_calc_input_increase(linenum, count, sum_of_num, changed_num);
}

void calc_input_increase::set_calc_input_increase(unsigned int linenum,
        unsigned int count,
        unsigned int sum_of_num,
        unsigned int changed_num)
{
    m_linenum = linenum;
    m_count = count;
    m_sum_of_num = sum_of_num;
    m_changed_num = changed_num;
}

unsigned int calc_input_increase::get_calc_input_increase()
{
    m_linenum = 0;
    m_sum_of_num = 0;
    m_changed_num = 0;
    reader rd;          // this is a extra object with a function which reads 
                        // the input_file and returns a list of the
                        // type unsigned int
    std::vector <unsigned int> list_numbers = rd.file_reader();
    std::vector <unsigned int> list_sum_num;

    // select the first three numbers and add them together like a + b + c
    // save those numbers in a list and find the increments

    for (m_count = 0; m_count < list_numbers.size()-2; m_count++)
    {
        m_sum_of_num = list_numbers.at(m_count)
            + list_numbers.at(m_count+1)
            + list_numbers.at(m_count+2);
        list_sum_num.push_back(m_sum_of_num);
    }

    for (m_count = 1; m_count < list_sum_num.size(); m_count++)
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
