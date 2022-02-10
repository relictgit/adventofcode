#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "count_increasing_number.h"
#include "read_input.h"

// count_input_file_increments constructor
count_input_file_increments::count_input_file_increments(unsigned int linenumbers,
        unsigned int counter,
        unsigned int changed_numbers)
{
    set_count_input_file_increments(linenumbers, counter, changed_numbers);
}

// count_input_file_increments member function
void count_input_file_increments::set_count_input_file_increments(unsigned int linenumbers,
        unsigned int counter,
        unsigned int changed_numbers)
{
    m_counter = counter;
    m_linenumbers = linenumbers;
    m_changed_numbers = changed_numbers;
}

int count_input_file_increments::get_count_input_file_increments()
{
    m_changed_numbers = 0;
    m_linenumbers = 0;
    reader rd;

    std::vector <unsigned int> list_numbers = rd.file_reader();


    for (m_counter = 1; m_counter < list_numbers.size(); m_counter++)
    {
        if (list_numbers.at(m_counter-1) < list_numbers.at(m_counter))
        {
            m_changed_numbers += 1;
        }
    }
    list_numbers.clear();

    return m_changed_numbers;
}
