// Author:          Kevin Voss
// Date created:    04.12.2021
// Date modified:   09.12.2021
// Description:     Get the data of the given input-file and increase a separate
//                  counter only if the current number of the input-file is larger
//                  than the previous one. The first number has to be ignored.
#include <exception>
#include <iostream>

#include "count_increasing_number.h"
#include "count_increase_sum_of_num.h"

int main()
{
    // Task number one
    try
    {
        count_input_file_increments *logic = new count_input_file_increments();
        int result = logic->get_count_input_file_increments();
        std::cout << "Result of task a: " << result << std::endl;
        delete logic;
    }
    catch (std::exception &ex)
    {
        std::cerr << "Exception: unable to create the logic object" << std::endl;
    }

    // Task number two
    try
    {
        calc_input_increase *logic_b = new calc_input_increase();
        unsigned int result = logic_b->get_calc_input_increase();
        std::cout << "Resut of task b: " << result << std::endl;
        delete logic_b;
    }
    catch (std::exception &ex)
    {
        std::cerr << "Exception: unable to create the logic object" << std::endl;
    }

    return EXIT_SUCCESS;
}

