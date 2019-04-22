 #include <stdio.h>

    void rotationencryption(char str[]); //function prototype for each of the tasks
    void rotationdecryption(char str[]);
    void substitutionencryption(char str[]);
    void substitutiondecryption(char str[]);
    
    int option; //option is the choice between rotation or substitution and encryption or decryption
    int c = 0; // counter used in for loop
    int key; // used for determining the value at which cipher is rotated
    char str[1000]; //used for each encrypted/decrypted letter

int main() {
    printf("Enter a message: \n"); //user adds message that will be either encrypted or decrypted
    scanf("%[^\n]s", str); // it is than read for str and [^\n] will allow for whitespace to be read
    printf("Please select an option: \n"); //menu bar for user to select specific task
    printf("1. Rotation Cipher Encryption\n");
    printf("2. Rotation Cipher Decryption\n");
    printf("3. Substitution Cipher Encryption\n");
    printf("4. Substitution Cipher Decryption\n\n");
    printf("Selection: \n");
    scanf("%d", &option); // the option chosen which will then go into the switch statement

    switch(option){
        case 1: 
            rotationencryption(str); //takes it to the function definition
            break; //breaks once/ if executed
        case 2:
            rotationdecryption(str);
            break;
        case 3: 
            substitutionencryption(str);
            break;
        case 4: 
            substitutiondecryption(str);
            break;
        default: printf("Option does not exist"); // default setting which is displayed if no other options are chosen
    }
}

void rotationencryption(char str[]) { //function definition
            printf("Choose key (0-25): \n"); // the key that the letters are rotated by
            scanf("%d", &key);
            for(c = 0;(c < 100 && str[c] != '\0'); c++) { // the for loop allows each character of the string to be read and incremented until the end
                if(str[c] >= 'a' && str[c] <= 'z') { // the letters are represented by numbers in the ASCII table ie a = 97 ... z = 122. This line is implemented so lower case can be converted to upper case
			        str[c] = (str[c] - 32 + key); // this line assigns the lower case to its equivalent upper case letter and adds the key for rotation
			
			        if(str[c] > 'Z') {               // this if statement runs if after the key rotation, the letter is higher than Z(90) as it needs to be shifted back to to the start ie A(65)
				        str[c] = str[c] - 91 + 65; // ie if key is 1 than Z(90) becomes 91 so make it 0 than add 65 to become A
			        }
		        }
		        else if(str[c] >= 'A' && str[c] <= 'Z') { // same as above by does it for capital letters
			        str[c] = str[c] + key; //the string than uses letter and adds key to encrypt certain amount
			
			        if(str[c] > 'Z') {
				        str[c] = str[c] - 91 + 65;
			        }       
		        }
            }
            printf("Encrypted message: %s\n", str); // prints the encryption back to user
            
}

void rotationdecryption(char str[]) {
        printf("Choose key (0-25): \n"); // decryption has same layout but minuses key rather than adds it
            scanf("%d", &key);
            for(c = 0;(c < 100 && str[c] != '\0'); c++) { 
                if(str[c] >= 'a' && str[c] <= 'z') { 
			        str[c] = (str[c] - 32 - key);
			
			        if(str[c] < 'A'){  //as it goes opposite way than if its A needs to be shifted back to Z              
				        str[c] = str[c] + 91 - 65 ; // gets the string and if < 65 takes it to Z
			        }
		        }
		        else if(str[c] >= 'A' && str[c] <= 'Z') {
			        str[c] = str[c] - key;
			
			        if(str[c] < 'A'){
				        str[c] = str[c] + 91 - 65;
			        }       
		        }
            }
            printf("Decrypted message: %s\n", str); // prints message to user
}

void substitutionencryption(char str[]) {
            for(c = 0;(c < 100 && str[c] != '\0'); c++) { // substitution cipher works similairly to rotation as each character of string is read
                if(str[c] >= 97 && str[c] <= 122) { // takes lower case letters from the ASCII table and makes them upper case
                    str[c] = str[c] - 32;
                }
                printf("Enter alphabetic substitutuion:");
                scanf("%s\n", a, b, c);
                switch(str[c])  {
                    case 'A': str[c] = 'Q'; // the switch case converts a letter to a specific substitution using ASCII characters
                    break;
                    case 'B': str[c] = 'W'; //this is hard coded so each letter is equivalent to a specific letter
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
}

void substitutiondecryption(char str[]) {
    for(c = 0;(c < 100 && str[c] != '\0'); c++) {
                if(str[c] >= 97 && str[c] <= 122) {
                    str[c] = str[c] - 32;
                }
                switch(str[c])  {
                    case 'Q': str[c] = 'A'; // similairly done for decryption but reversal way
                    break;
                    case 'W': str[c] = 'B'; // need to know how to do this none hard coded
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
    
}

           
  /*  Your task is to write a C program which performs the following broad tasks:
        1. Encryption of a message with a rotation cipher given the message text and rotation amount
        2. Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount
        3. Encryption of a message with a substitution cipher given message text and alphabet substitution
        4. Decryption of a message encrypted with a substitution cipher given cipher text and substitutions
        5. Decryption of a message encrypted with a rotation cipher given cipher text only
        6. Decryption of a message encrypted with a substitution cipher given cipher text only 
    */