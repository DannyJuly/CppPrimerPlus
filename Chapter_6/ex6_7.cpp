#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
    using namespace std;
    cout << "Enter words (q to stop): ";
    int other = 0, vowel = 0, consonant = 0;
    char ch;
    string word;
    cin >> word;
    //cout << sizeof(word);
    while(word != "q"){
        ch = char(tolower(word[0]));
        if(!isalpha(word[0]))
            other++;
        else{
            switch(ch)
            {
                case 'a':
                    vowel++;
                    break;
                case 'e':
                    vowel++;
                    break;
                case 'i':
                    vowel++;
                    break;
                case 'o':
                    vowel++;
                    break;
                case 'u':
                    vowel++;
                    break; 
                default:
                    consonant++;
            }
        }
        cin >> word;

    }
    // output
    cout << vowel << " words beginning with vowels" << endl;
    cout << consonant << " words beginning with consonants" << endl;
    cout << other << " others" << endl;

    return 0;


}
