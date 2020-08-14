#include "prime_number.h"
#include <stdbool.h>

bool prime_number(int number)
{
    int iteration, flag = 0;

    for (iteration = 2; iteration <= number / 2; ++iteration) {

        if (number % iteration == 0) {
            flag = 1;
            break;
        }
    }

    if (number == 1) {
        return false;
    }
    else {
        if (flag == 0)
            return true;
        else
            return false;
    }

    return 0 ;
}
