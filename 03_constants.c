// variables ka value change ho skta hai par 
// constant ki value change nahi ho skti hai
#include <stdio.h> 
#define PI 3.14 // preprocessor directive, iski value change nahi ho skti hai
int main() {
    const int a = 10; // constant variable, iski value change nahi ho skti hai
    printf("Value of a: %d\n", a);
    printf("Value of PI: %f\n", PI);
    
    // a = 20; // error: assignment of read-only variable 'a'
    // PI = 3.14159; // error: assignment of read-only variable 'PI'
    
    return 0;
}
