/*A C++ program to find the number of vowels, consonants, digits, and white spaces in a string.*/

#include <iostream>
using namespace std;

int main()
{
        char str[100];
        int vowel = 0, cons = 0, digits = 0, ws = 0;
        
        cout << "Enter a string : " << endl;
        gets(str);
        
        for (int i = 0; str[i] != '\0'; ++i)
        {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                        ++vowel;
                else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                        ++cons;
                else if (str[i] >= '0' && str[i] <= '9')
                        ++digits;
                else
                        ++ws;
        }
        
        cout << "Number of vowels: " << vowel << endl;
        cout << "Number of consonants: " << cons << endl;
        cout << "Number of digits: " << digits << endl;
        cout << "Number of white spaces: " << ws<< endl;
        
        return 0;
}
