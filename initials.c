#include <stdio.h>
#include <cs50.h>
#include <string.h>

char upper(char input);
int main(void)
{
    string userInput = GetString();
    //Always capitalize first letter of the string
    printf("%c", upper(userInput[0]));
    //loop through looking for whitespaces
    for(int i=0 ; i< strlen(userInput) ; i++)
    {
        if (userInput[i]==' ')
        {
            //Letter after the whitespace
            printf("%c", upper(userInput[1+i]));
        }
    }
    //end with a newline
    printf("\n");
}
//To Upper function for all lowercase letters
char upper(char input)
{
    int asciiDistance = ((int) 'a' - (int) 'A');
    if ((int) input >= (int) 'a' && (int) input <= (int) 'z')
    {
        return((char) ((int) input) - asciiDistance);   
    }
    else
    {
        //return input value for upper case values or special characters
        //this includes spaces
        return input;
    }
}