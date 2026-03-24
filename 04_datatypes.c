//  abhi ke liye 3 dataypes ke baare mein padhna hai
// 1. int
// 2. float
// 3. char

#include <stdio.h>
int main()
{
    int a = 10;     // integer data type
    float b = 3.14; // floating point data type
    char c = 'P';   // character data type

    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", c);

    return 0;
}

// output:
// Integer: 10
// Float: 3.140000
// Character: P


// some points to note:
// 1.integer whole number ko store karta hai, jaise 10, -5, 0, etc.
// 2.float decimal number ko store karta hai, jaise 3.14, -0.001, etc.
// 3.char single character ko store karta hai, jaise 'P', 'A', '1', etc. It is enclosed in single quotes.   

// interger ke liye %d format specifier use hota hai, float ke liye %f, aur char ke liye %c.
