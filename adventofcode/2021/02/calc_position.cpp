#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "calc_position.h"
#include "read_input.h"

position::~position() {}

position::position(std::string fward,
                std::string up,
                std::string down)
{
    set_position(fward, up, down);
}

void position::set_position(std::string fward,
        std::string up,
        std::string down)
{
    m_up = up;
    m_down = down;
    m_fward = fward;
}

int position::get_position()
{
    reader rd;
    std::vector <std::string>list_input = rd.file_reader();
    int result = 0;
    int pos = 0;
    int depth = 0;
    int horizontal_pos = 0;
    m_fward = "forward";
    m_down = "down";
    m_up = "up";

    // ToDo: parse the movement out of the list_input
    // and save it into the variables

    // logic reminder:
    // forward x    =>  horizontal pos + x
    // down x       =>  depth - x
    // up x         =>  depth + x

    for (unsigned long counter = 0; counter < list_input.size(); counter++)
    {
        int str_split_pos = list_input.at(counter).find(" ");
        std::string list_input_substr = list_input.at(counter).substr(str_split_pos + 1);
        int number_substr;
        // stoi(list_input_substr) is not functioning

        if (list_input.at(counter).find(m_fward, pos) != std::string::npos)
        {
            std::stringstream scontainer(list_input_substr);
            scontainer >> number_substr;
            /*std::cout << "TESTING: Match was forward: " << list_input.at(counter) << std::endl
                << "CORESPONDING_NUMBER_AS_STRING: \"" << list_input_substr << "\"" << std::endl
                << "CORESPONDING_NUMBER_AS_INT: " << number_substr << std::endl;*/
            horizontal_pos += number_substr;
        }
        else if (list_input.at(counter).find(m_down, pos) != std::string::npos)
        {
            // std::cout << "TESTING: Match was down: " << list_input.at(counter) << std::endl;
            std::stringstream scontainer(list_input_substr);
            scontainer >> number_substr;
            depth -= number_substr;
        }
        else if (list_input.at(counter).find(m_up, pos) != std::string::npos)
        {
            // std::cout << "TESTING: Match was up: " << list_input.at(counter) << std::endl;
            std::stringstream scontainer(list_input_substr);
            scontainer >> number_substr;
            depth += number_substr;
        }
    }

    // result is unexpectedly negative... quickfix will be * (-1)
    result = horizontal_pos * depth * (-1);

    return result;
}
