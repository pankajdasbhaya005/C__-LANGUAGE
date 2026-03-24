// user se input lene ke liye hum scanf() function ka use karte hain.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a); // %d is used for integer input, &a is the address of variable a
    printf("You entered: %d\n", a);
    return 0;
}
// output:
// jo user enter karega wohi print hoga

