#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "calc_position.hpp"
#include "read_input.hpp"

position::~position() {}

position::position(std::string fward,
                std::string up,
                std::string down,
                std::string list_input_substr,
                int result,
                int pos,
                int depth,
                int horizontal_pos,
                int str_split_pos,
                int number_substr)
{
    set_position(fward,
            up,
            down,
            list_input_substr,
            result,
            pos,
            depth,
            horizontal_pos,
            str_split_pos,
            number_substr);
}

void position::set_position(std::string fward,
        std::string up,
        std::string down,
        std::string list_input_substr,
        int result,
        int pos,
        int depth,
        int horizontal_pos,
        int str_split_pos,
        int number_substr)
{
    m_up = up;
    m_down = down;
    m_fward = fward;
    m_list_input_substr = list_input_substr;
    m_result = result;
    m_pos = pos;
    m_depth = depth;
    m_horizontal_pos = horizontal_pos;
    m_str_split_pos = str_split_pos;
    m_number_substr = number_substr;
}

int position::get_position()
{
    reader rd;
    std::vector <std::string>list_input = rd.file_reader();
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
        m_str_split_pos = list_input.at(counter).find(" ");
        m_list_input_substr = list_input.at(counter).substr(m_str_split_pos + 1);
        // stoi(list_input_substr) is not functioning

        if (list_input.at(counter).find(m_fward, m_pos) != std::string::npos)
        {
            std::stringstream scontainer(m_list_input_substr);
            scontainer >> m_number_substr;
            /*std::cout << "TESTING: Match was forward: " << list_input.at(counter) << std::endl
                << "CORESPONDING_NUMBER_AS_STRING: \"" << list_input_substr << "\"" << std::endl
                << "CORESPONDING_NUMBER_AS_INT: " << number_substr << std::endl;*/
            m_horizontal_pos += m_number_substr;
        }
        else if (list_input.at(counter).find(m_down, m_pos) != std::string::npos)
        {
            // std::cout << "TESTING: Match was down: " << list_input.at(counter) << std::endl;
            std::stringstream scontainer(m_list_input_substr);
            scontainer >> m_number_substr;
            m_depth -= m_number_substr;
        }
        else if (list_input.at(counter).find(m_up, m_pos) != std::string::npos)
        {
            // std::cout << "TESTING: Match was up: " << list_input.at(counter) << std::endl;
            std::stringstream scontainer(m_list_input_substr);
            scontainer >> m_number_substr;
            m_depth += m_number_substr;
        }
    }

    // result is unexpectedly negative... quickfix will be * (-1)
    m_result = m_horizontal_pos * m_depth * (-1);

    return m_result;
}
