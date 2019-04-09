#include <stdio.h>

    char messageletter[1024]; //used for each encrypted/decrypted letter
    float x; // where x will be the encrypted function in formula in loop
    int task;
    int c = 0;
    int key = 3; // do we know key or have to find it
    char str[100];

int main() {

    /* printf("Select task 1, 2, 3, 4, 5, 6:");

    scanf("%d", &task);

    switch(task){

        case 1: task == 1;

break;

        case 2: task == 2;  


break;

        case 3: task == 3;


break;

        case 4: task == 3;


break;

        case 5: task == 3;



break;

        case 6: task == 3;


break;

default: printf("Task does not exist");

//This is needed for end result for user to pick the task

*/
printf("Enter a message to encrypt: "); //user adds message

    scanf("%[^\n]s", str); //helps get rid of whitespace

    for(c = 0;(c < 100 && str[c] != '\0'); c++) { 
        if(str[c] >= 97 && str[c] <= 122) { // if the string is between a and z then do as follows
			str[c] = (str[c] + key);
			
			if(str[c] > 122){               // if the key is high then z will need to be shifted back to the beginning hence formula will allow this
				str[c] = str[c] - 122 + 97 - 1; // the numbers are a representation of the ascii chrter it represents
			}
		}
		else if(str[c] >= 65 && str[c] <= 90) {
			str[c] = str[c] + key;
			
			if(str[c] > 90){
				str[c] = str[c] - 90 + 65 - 1;
			}       //str[c] = (str[c] + key); //the string than uses letter and adds key(3) to encrypt
		}
    }
    printf("Encrypted message: %s\n", str); // scan the code and implement key/ equation to encrypt code by printing back to user
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