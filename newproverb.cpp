// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Last Modified Date: 4/17/2024

#include <iostream>
#include <string>
using namespace std;

// Function prototype for writeProverb with a string parameter.
void writeProverb(const string& word);

int main()
{
    string inputWord;

    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ___" << endl;

    cout << "Please input the word you would like to have finish the proverb" << endl;
    // Get the line of text including spaces if any.
    getline(cin, inputWord);

    writeProverb(inputWord);

    return 0;
}

void writeProverb(const string& word)
{
    cout << "Now is the time for all good men to come to the aid of their " << word << "." << endl;
}