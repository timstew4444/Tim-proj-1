#include <stdio.h>

char messageletter[1024]; //used for each encrypted/decrypted letter
float key; // do we know key or have to find it
float x; // where x will be the encrypted function in formula in loop
int task;

int main() {
printf("Select task 1, 2, 3, 4, 5, 6:");
scanf("%d", &task);
switch(task){
    case 1: task == 1;
            printf("Enter a code to encrypt:");
            scanf(%s, )// scan the code and implement key/ equation to encrypt code by printing back to user
            break;
    case 2: task == 2;
            printf(""); // with decrypting the user input message needs to work for key so how do you do that?
            break;
    case 3: task == 3;
            printf("");
            break;
    case 4: task == 3;
            printf("");
            break;
    case 5: task == 3;
            printf("");
            break;
    case 6: task == 3;
            printf("");
            break;
    default: printf("Task does not exist");
            //reselect task?
            
    
}

    
}
/*      for each scanf in order to make the user decide whether they want to encryot or decrypt. Then they in put the key required(between 0 and 26) 
        for the shift in cipher. Than use if/ for , while?? with conditions to find the encrypted/ decrypt code. Use equation to make it shift using 
        user input and print to screen the encrypted of decrypted code. If this isnt what the user put in break sequence and go to the new function and
        continue in this order Note use switch case statemt? to decide what task to perform
 */
/*      Encryption performed on a message letter, m, by defining the encryption function, e(m), as: e(x) = (m + k)(%26)
        where % is the remainder
        The decryption of a cipher text letter, c, can be defined by a decryption function, d(c), as follows: d(c) = (c − k)(% 26)
        
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