#ifndef READ_INPUT_H
#define READ_INPUT_H

#include <vector>
#include <string>

class reader
{
    private:
        std::vector <unsigned int> m_list_numbers;
        unsigned int m_linenumbers;
        std::string m_file_name;
        std::string m_line;
    public:
        reader(std::vector <unsigned int> list_numbers = {0}, std::string file_name = "", std::string line = "", unsigned int linenumbers = 0);
        void set_reader(std::vector <unsigned int> list_numbers = {0}, std::string file_name = "", std::string line = "", unsigned int linenumbers = 0);
        ~reader();
        std::vector <unsigned int> file_reader();

        std::vector <unsigned int> get_list_numbers() { return m_list_numbers; }
        std::string get_line() { return m_line; }
        std::string get_file_name() { return m_file_name; }
};

#endif // READ_INPUT_H
