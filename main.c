#include <stdio.h>

    
    int option; //option is the choice between rotation or substitution and encryption or decryption
    int c = 0; // counter used in for loop
    int key; // used for determining the value at which cipher is rotated
    char str[1024]; //used for each encrypted/decrypted letter

int main() {
    printf("Enter a message: \n"); //user adds message that will be either encrypted or decrypted
    scanf("%[^\n]s", str); // it is than read for str and this will allow for whitespace
    printf("Please select an option: \n"); //menu type bar for user to select specific task
    printf("1) RE\n");
    printf("2) RD\n");
    printf("3) SE\n");
    printf("4) SD\n\n");
    printf("Selection: \n");
    scanf("%d", &option); // the option chosen which will then go into the switch statement

    switch(option){
        case 1: 
            printf("Choose key (0-26): \n"); // the key that the letters are rotated by
            scanf("%d", &key);
            for(c = 0;(c < 100 && str[c] != '\0'); c++) { 
                if(str[c] >= 97 && str[c] <= 122) { // the numbers represent the equivalent letter in ASCII table ie a = 97 ... z = 122
			        str[c] = (str[c] - 32 + key); // this line assigns the lower case to its equivalent upper case letter
			
			        if(str[c] > 90) {               // if above is higher than Z(90) then it will need to shift back to the beggining ie get to A(65)
				        str[c] = str[c] - 91 + 65; // ie if key is 1 than Z becomes 91 so make it 0 than add 65 to become A
			        }
		        }
		        else if(str[c] >= 65 && str[c] <= 90) { // same as above by does it for capital letters
			        str[c] = str[c] + key; //the string than uses letter and adds key to encrypt certain amount
			
			        if(str[c] > 90) {
				        str[c] = str[c] - 91 + 65;
			        }       
		        }
            }
            printf("Encrypted message: %s\n", str); // prints the encryption back to user
            break; // if this case is implemented than code ends
        case 2:
            printf("Choose key (0-26): \n"); // decryption has same layout but minuses key rather than adds it
            scanf("%d", &key);
            for(c = 0;(c < 100 && str[c] != '\0'); c++) { 
                if(str[c] >= 97 && str[c] <= 122) { 
			        str[c] = (str[c] - 32 - key);
			
			        if(str[c] < 65){  //as it goes opposite way than if its A needs to be shifted back to Z              
				        str[c] = str[c] + 91 - 65 ; // gets the string and if < 65 takes it to Z
			        }
		        }
		        else if(str[c] >= 65 && str[c] <= 90) {
			        str[c] = str[c] - key;
			
			        if(str[c] < 65){
				        str[c] = str[c] + 91 - 65;
			        }       
		        }
            }
            printf("Decrypted message: %s\n", str);
            break;
        case 3: 
            for(c = 0;(c < 100 && str[c] != '\0'); c++) {
                if(str[c] >= 97 && str[c] <= 122) {
                    str[c] = str[c] - 32;
                }
                switch(str[c])  {
                    case 'A': str[c] = 'Q';
                    break;
                    case 'B': str[c] = 'W';
                    break;
                    case 'C': str[c] = 'E';
                    break;
                    case 'D': str[c] = 'R';
                    break;
                    case 'E': str[c] = 'T';
                    break;
                    case 'F': str[c] = 'Y';
                    break;
                    case 'G': str[c] = 'U';
                    break;
                    case 'H': str[c] = 'I';
                    break;
                    case 'I': str[c] = 'O';
                    break;
                    case 'J': str[c] = 'P';
                    break;
                    case 'K': str[c] = 'A';
                    break;
                    case 'L': str[c] = 'S';
                    break;
                    case 'M': str[c] = 'D';
                    break;
                    case 'N': str[c] = 'F';
                    break;
                    case 'O': str[c] = 'G';
                    break;
                    case 'P': str[c] = 'H';
                    break;
                    case 'Q': str[c] = 'J';
                    break;
                    case 'R': str[c] = 'K';
                    break;
                    case 'S': str[c] = 'L';
                    break;
                    case 'T': str[c] = 'Z';
                    break;
                    case 'U': str[c] = 'X';
                    break;
                    case 'V': str[c] = 'C';
                    break;
                    case 'W': str[c] = 'V';
                    break;
                    case 'X': str[c] = 'B';
                    break;
                    case 'Y': str[c] = 'N';
                    break;
                    case 'Z': str[c] = 'M';
                    break;
                }       
            }
            printf("Encrypted substitutuion: %s\n", str);
            break;
        case 4: 
            for(c = 0;(c < 100 && str[c] != '\0'); c++) {
                if(str[c] >= 97 && str[c] <= 122) {
                    str[c] = str[c] - 32;
                }
                switch(str[c])  {
                    case 'Q': str[c] = 'A';
                    break;
                    case 'W': str[c] = 'B';
                    break;
                    case 'E': str[c] = 'C';
                    break;
                    case 'R': str[c] = 'D';
                    break;
                    case 'T': str[c] = 'E';
                    break;
                    case 'Y': str[c] = 'F';
                    break;
                    case 'U': str[c] = 'G';
                    break;
                    case 'I': str[c] = 'H';
                    break;
                    case 'O': str[c] = 'I';
                    break;
                    case 'P': str[c] = 'J';
                    break;
                    case 'A': str[c] = 'K';
                    break;
                    case 'S': str[c] = 'L';
                    break;
                    case 'D': str[c] = 'M';
                    break;
                    case 'F': str[c] = 'N';
                    break;
                    case 'G': str[c] = 'O';
                    break;
                    case 'H': str[c] = 'P';
                    break;
                    case 'J': str[c] = 'Q';
                    break;
                    case 'K': str[c] = 'R';
                    break;
                    case 'L': str[c] = 'S';
                    break;
                    case 'Z': str[c] = 'T';
                    break;
                    case 'X': str[c] = 'U';
                    break;
                    case 'C': str[c] = 'V';
                    break;
                    case 'V': str[c] = 'W';
                    break;
                    case 'B': str[c] = 'X';
                    break;
                    case 'N': str[c] = 'Y';
                    break;
                    case 'M': str[c] = 'Z';
                    break;
                }       
            }
            printf("Decrypted substitutuion: %s\n", str);
            break;
        default: printf("Option does not exist");
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