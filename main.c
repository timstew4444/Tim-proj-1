#include <stdio.h>

int main() {
char str[] = "Hello world!";

 // NB: Passing array pointer to function
 // just uses the array name as argument
 printf("%s\n", str);
 }

    

    /*  Encryption performed on a message letter, m, by defining the encryption function, e(m), as: e(x) = (m + k)(mod 26)
        where “mod” means the modulus operator (% symbol in C).
        The decryption of a cipher text letter, c, can be defined by a decryption function, d(c), as follows: d(c) = (c − k)(mod 26)
        
        There can be 25 different substitutions to choose from
    */

 

    /*  Your task is to write a C program which performs the following broad tasks:
        1. Encryption of a message with a rotation cipher given the message text and rotation amount
        2. Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount
        3. Encryption of a message with a substitution cipher given message text and alphabet substitution
        4. Decryption of a message encrypted with a substitution cipher given cipher text and substitutions
        5. Decryption of a message encrypted with a rotation cipher given cipher text only
        6. Decryption of a message encrypted with a substitution cipher given cipher text only 
    */