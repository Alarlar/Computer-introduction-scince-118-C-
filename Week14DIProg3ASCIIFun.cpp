#include <iostream>          // Code and Decode a character

using namespace std;

char CodeLetter(char a);    // prototype for function – code below
char DecodeLetter(char a);  // prototype for function – code below

int main ()
{
    cout <<"Dinar Ibragimov - 07/17/22" <<endl;
   
    char codedLetter;
    char decodedLetter;
    char letter = 'a'; // change me to a different character.
    
    cout << "Letter = " << letter << endl;
    codedLetter =  CodeLetter(letter);
    cout << "Coded Letter = " << codedLetter << endl;
    decodedLetter= DecodeLetter(codedLetter);
    cout << "Decoded Letter = " << decodedLetter << endl;
 
    return 0;
}

char CodeLetter(char c)
{ return c + 1;} // clue .. “you can add 1 to a char”
char DecodeLetter(char c)
{ return c - 1;} // clue .. “you can subtract 1 from a char”
