#ifndef CALC_POSITION_H
#define CALC_POSITION_H

#include <string>

class position
{
    private:
        std::string m_up;
        std::string m_down;
        std::string m_fward;
        std::string m_list_input_substr;
        int m_result;
        int m_pos;
        int m_depth;
        int m_horizontal_pos;
        int m_str_split_pos;
        int m_number_substr;
        

    public:
        position(std::string fward = "",
                std::string up = "",
                std::string down = "",
                std::string list_input_substr = "",
                int result = 0,
                int pos = 0,
                int depth = 0,
                int horizontal_pos = 0,
                int str_split_pos = 0,
                int number_substr = 0);
        ~position();
        void set_position(std::string fward = "",
                std::string up = "",
                std::string down = "",
                std::string list_input_substr = "",
                int result = 0,
                int pos = 0,
                int depth = 0,
                int horizontal_pos = 0,
                int str_split_pos = 0,
                int number_substr = 0);
        int get_position();
};

#endif // CALC_POSITION_H
