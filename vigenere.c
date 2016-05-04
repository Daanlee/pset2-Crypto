#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])

{
    //Check number of arguments
    if ((argc<2)||(argc>2))
    {
        printf("Include one word as key in command-line as argument \n");
        return 1;
    }
    else
    {       
        string key = argv[1];
        int keyLen = strlen(key);
        int keyVal;
        int ascii;
        int keyIndex =0;   
        //check key is valid
        for (int x = 0; x<keyLen; x++)
        {
            if (!isalpha(key[x]))
            {
                printf("Numbers or whitespace in key. \n");
                return 1;
                break;
            }
        }
    //main program
    string message = GetString();
    
    for (int i=0 ; i < strlen(message) ; i++)
        {
            if (isalpha(message[i]))
            {
                if isupper(key[keyIndex])
                {
                    keyVal = ((int) key[keyIndex] - (int) 'A');
                }
                else if islower(key[keyIndex])
                {
                    keyVal = ((int) key[keyIndex] - (int) 'a');
                }
                else
                {
                    keyVal = 0;
                }
                keyIndex++;
                if (keyIndex==keyLen)
                {
                    keyIndex=0;
                }
            }
            ascii = (int) message[i];//Value of character in ascii
            if (ascii >= (int) 'a' && ascii <= (int) 'z')
            {
                if ((ascii+keyVal) > (int) 'z') 
            {
                printf("%c", (char) (ascii+keyVal-26));
            }
            else
            {
                printf("%c", (char) (ascii+keyVal));
            }
            }
        //Capital Letters
            else if(ascii>= (int) 'A' && ascii <= (int) 'Z')
            {
                if ((ascii+keyVal) > (int) 'Z')
                {
                    printf("%c", (char) (ascii+keyVal-26));
                }
                else
                {
                    printf("%c", (char) (ascii+keyVal));
                }
        //Special Characters
            }
            else
            {
                printf("%c", (char) (ascii));
            }
        
        }
        printf("\n");
        return 0; //success
    }
}