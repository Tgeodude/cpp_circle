#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>
# include <string.h>

template<typename T1, typename T2, typename T3>

void iter(T1 *arr, T2 len, T3 (*func)(T1 elem))
{
    for (int i = 0; i < len; i++)
    {
        std::cout<< (*func)(arr[i]);
        i != (len - 1) ? std::cout << ", " : std::cout << std::endl;
    }
}

#endif