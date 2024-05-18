// Program Name:    Hello World
// Description:     Writes "Hello World" to the console

// Version  Date        Description                     Programmer
// 0.0.0    2024-05-18  Initial version                 Hugo Rust                                

// include libraries (pre-processor directive)
#include <iostream>     // Standard C++ library write tect to screen and read from keyboard

int main()
{
    std::cout << "Hello world!" << std::endl;       // :: = scope resolution operator
                                                    // cout = character output
                                                    // << = left-bound insertion operator
    return(0);
}
