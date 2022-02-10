#include <iostream>
 
int main()
{
    // double *ptr(0);

    double value = 0.2;
    double *ptr = &value;
 
    if (ptr)
        std::cout << "ptr is pointing to a double value.";
    else
        std::cout << "ptr is a null pointer.";
 
    return 0;
}