#ifndef COUNT_INCREASING_NUMBER
#define COUNT_INCREASING_NUMBER

class count_input_file_increments
{
    private:
        unsigned int m_linenumbers;
        unsigned int m_counter;
        unsigned int m_changed_numbers;
    public:
        count_input_file_increments(unsigned int linenumbers = 0,
                unsigned int counter = 0,
                unsigned int changed_numbers = 0);
        void set_count_input_file_increments(unsigned int linenumbers = 0,
                unsigned int counter = 0,
                unsigned int changed_numbers = 0);
        int get_count_input_file_increments();

        unsigned int get_linenumbers() { return m_linenumbers; }
        
        unsigned int get_counter() { return m_counter; }
        
        unsigned int get_changed_numbers() { return m_changed_numbers; }
};

#endif
