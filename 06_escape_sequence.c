// escape_sequence woh hota hai jab hum kisi character ko directly print nahi kar sakte hai to uske liye hum escape sequence ka use karte hai.
// escape sequence ke liye hum backslash (\) ka use karte hai.
// escape sequence ke baad hum ek character likhte hai jo ki us escape sequence ko represent karta hai.
// kuch common escape sequence hai:
// \n - new line
// \t - tab
// \\ - backslash
// \" - double quote
// \' - single quote
#include <stdio.h>
int main()
{
    printf("Hello\nWorld\n");   // yaha \n ka use karke hum new line print kar rahe hai.
    printf("Hello\tWorld\n");   // yaha \t ka use karke hum tab print kar rahe hai.
    printf("Hello\\World\n");   // yaha \\ ka use karke hum backslash print kar rahe hai.
    printf("Hello\"World\"\n"); // yaha \" ka use karke hum double quote print kar rahe hai.
    printf("Hello\'World\'\n"); // yaha \' ka use karke hum single quote print kar rahe hai.
    return 0;
}

// output:
// Hello
// World

// Hello    World

// Hello\World

// Hello"World"

// Hello'World'