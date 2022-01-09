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
    count_input_file_increments logic_a;
    int result_a = logic_a.get_count_input_file_increments();
    std::cout << "Result of task a: " << result_a << std::endl;

    // Task number two
    calc_input_increase logic_b;
    unsigned int result_b = logic_b.get_calc_input_increase();
    std::cout << "Resut of task b: " << result_b << std::endl;

    return EXIT_SUCCESS;
}

