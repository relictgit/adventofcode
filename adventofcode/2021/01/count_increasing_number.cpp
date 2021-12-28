#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "count_increasing_number.h"

// count_input_file_increments constructor
count_input_file_increments::count_input_file_increments(unsigned int linenumbers, unsigned int counter, unsigned int changed_numbers)
{
    set_count_input_file_increments(linenumbers, counter, changed_numbers);
}

// count_input_file_increments member function
void count_input_file_increments::set_count_input_file_increments(unsigned int linenumbers, unsigned int counter, unsigned int changed_numbers)
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

    std::string file_name = "/home/kvoss/source/projects/advent_of_code_proj/adventofcode/2021/01/input.txt";
    std::string line;
    m_changed_numbers = 0;
    m_linenumbers = 0;
    // unsigned int linenumbers = 0;
    // unsigned int counter = 1;
    // unsigned int changed_number = 0;
    std::vector <unsigned int> list_numbers;

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
            m_linenumbers = std::stoi(line);
            list_numbers.push_back(m_linenumbers);
        }
    }
    catch (std::exception &ex)
    {
        std::cerr << "Exception: unable to read the lines of the file: "
            << file_name << std::endl;
    }

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
