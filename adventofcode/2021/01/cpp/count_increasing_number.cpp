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
    // ToDo: Read the Input from a file
    // and increase a counter only if the next number is higher to the
    // previous one
    // example
    // 10       First number -> IGNORE
    // 20       INCREASE
    // 5        decrease
    // 99       INCREASE
    // 20       decrease
    // 45       INCREASE
    // result of example => 3
    
    // variable initialisation

    
    m_changed_numbers = 0;
    m_linenumbers = 0;
    reader rd;      // this is a extra object with a function which reads
                    // the input_file and returns a list of the
                    // type unsigned int
    std::vector <unsigned int> list_numbers = rd.file_reader();

    // count_input_file_increments
    // Here you ignore the first number of your dynamic array
    // while the iteration is ongoing increase a separate counter if
    // the number is higher than the previous one

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
