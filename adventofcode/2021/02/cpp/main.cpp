// Author:          Kevin Voss
// Date created:    30.12.2021
// Description:     advent_of_code task 2
// it is Time to dive :)
/**Rules task one
 * forward x    =>  increase horizontal position of value x
 * down x       =>  increase the depth by x units
 * up x         =>  decrease the depth by x units
 */
/**Rules Task two
 * forward x    =>  increase horizontal aim by x
 *              =>  
 * down x       =>  
 * up x         =>  */
#include <iostream>
#include "calc_position.hpp"


int main()
{
    position ps;
    int result_a = ps.get_position();
    std::cout << "The result of part a: " << result_a << std::endl;
    return 0;
}
