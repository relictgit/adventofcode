// Author:          Kevin Voss
// Date created:    30.12.2021
// Description:     advent_of_code task 2
// it is Time to dive :)
/**Rules
 * forward x    =>  increase horizontal position of value x
 * down x       =>  increase the depth by x units
 * up x         =>  decrease the depth by x units
 */
#include <iostream>

#include "calc_position.h"


int main()
{
    position ps;
    int result_a = ps.get_position();
    std::cout << "The result of part a: " << result_a << std::endl;
    return 0;
}
