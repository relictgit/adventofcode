#ifndef READ_INPUT_H
#define READ_INPUT_H

#include <vector>
#include <string>

class reader
{
    private:
        std::vector <std::string> m_list_numbers;
        int m_linenumbers;
        std::string m_file_name;
        std::string m_line;
    public:
        reader(std::vector <std::string> list_numbers = {""},
                std::string file_name = "",
                std::string line = "",
                int linenumbers = 0);
        void set_reader(std::vector <std::string> list_numbers = {""},
                std::string file_name = "",
                std::string line = "",
                int linenumbers = 0);
        ~reader();
        std::vector <std::string> file_reader();

        std::vector <std::string> get_list_numbers() { return m_list_numbers; }
        std::string get_line() { return m_line; }
        std::string get_file_name() { return m_file_name; }
};

#endif // READ_INPUT_H
