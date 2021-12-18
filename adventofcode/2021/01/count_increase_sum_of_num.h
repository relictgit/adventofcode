#ifndef COUNT_INCREASE_SUM_OF_NUM_H
#define COUNT_INCREASE_SUM_OF_NUM_H 

class calc_input_increase
{
    private:
        unsigned int m_linenum;
        unsigned int m_count;
        unsigned int m_sum_of_num;
        unsigned int m_changed_num;
    public:
        calc_input_increase(unsigned int linenum = 0, unsigned int count = 0, unsigned int sum_of_num = 0, unsigned int changed_num = 0);
        void set_calc_input_increase(unsigned int linenum = 0, unsigned int count = 0, unsigned int sum_of_num = 0, unsigned int changed_num = 0);
        unsigned int get_calc_input_increase();

        unsigned int get_linenum()
        {
            return m_linenum;
        }
        unsigned int get_count()
        {
            return m_count;
        }
        unsigned int get_sum_of_num()
        {
            return m_sum_of_num;
        }
        unsigned int get_changed_num()
        {
            return m_changed_num;
        }
};

#endif
