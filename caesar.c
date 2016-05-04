#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])

{
    if ((argc<2)||(argc>2))
    {
        //No command-line 
        printf("Include 1 number as encryption key as command-line argument\n");
        return 1;
    }
    else
    {
    //store input key as %26
    int key = (atoi(argv[1]))%26;
    string rawMessage = GetString();
    int ascii;
    for (int i=0 ; i < strlen(rawMessage) ; i++){
        //used often, convert once
        ascii = (int) rawMessage[i];//Value of character in ascii
        if (ascii >= (int) 'a' && ascii <= (int) 'z')
        {
            if ((ascii+key) > (int) 'z') 
            /*
            Value more than 'z, wrap around'
            this can be better acheived through the % operator,
            but if its not broke, don't fix it.
            Also found the isupper() and islower() functions :(
            */
            {
                printf("%c", (char) (ascii+key-26));
            }
            else
            {
                printf("%c", (char) (ascii+key));
            }
        }
        //Capital Letters
        else if(ascii>= (int) 'A' && ascii <= (int) 'Z')
        {
            if ((ascii+key) > (int) 'Z')
            {
                printf("%c", (char) (ascii+key-26));
            }
            else
            {
                printf("%c", (char) (ascii+key));
            }
        //Special Characters
        }
        else
        {
            printf("%c", (char) (ascii));
        }
        
    }
    printf("\n");
    return 0;//exit success
    }
}