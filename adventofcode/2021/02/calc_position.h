#ifndef CALC_POSITION_H
#define CALC_POSITION_H

#include <string>

class position
{
    private:
        std::string m_up;
        std::string m_down;
        std::string m_fward;

    public:
        position(std::string fward = "",
                std::string up = "",
                std::string down = "");
        ~position();
        void set_position(std::string fward = "",
                std::string up = "",
                std::string down = "");
        int get_position();

        std::string get_fward() { return m_fward; }
        std::string get_up() { return m_up; }
        std::string get_down() { return m_down; }
};

#endif // CALC_POSITION_H
