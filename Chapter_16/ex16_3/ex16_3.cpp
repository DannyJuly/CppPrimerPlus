#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include <ctime>
#include <cstdlib>
using std::string;
using std::vector;


void get_wordlist(const char * filename, vector<string> & wordlist);

int main(){
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;

    vector<string> wordlist;
    get_wordlist("words.txt", wordlist);
    int num = wordlist.size();
    cout << num << " words in words.txt" << endl;

    std::srand(std::time(0));
    time_t start, finish;
    start = time(0);
    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    play = tolower(play);
    while(play == 'y'){
        string target = wordlist[std::rand() % num];
        int length = target.size();
        string attempt(length,'-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
            << " letters, and you guess\n"
            << "one letter at a time. You get " << guesses
            << " wrong guesses.\n";
        cout << "Your word: "<< attempt << endl;
        while(guesses > 0 && attempt != target){
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if(badchars.find(letter) != string::npos||attempt.find(letter) != string::npos)
            {
                cout << "You already guessed that. Please try again" <<endl;
                continue;
            }
            int loc = target.find(letter);
            if(loc == string::npos){
                cout << "Oh, bad guess!\n";
                guesses--;
                badchars += letter;
            }
            else{
                cout << "Good guess!\n";
                while(loc != string::npos){
                    attempt[loc] = letter;
                    loc = target.find(letter,loc+1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if(attempt!=target){
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left\n"; 
            }
        }
        if(guesses > 0)
            cout << "That's right"<< endl;
        else
            cout << "Sorry, the word is " << target << endl;
        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }
    finish = time(0);
    //double Times=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "The time you spend: " << finish-start <<endl;
    cout << "Bye";
    return 0;

}


void get_wordlist(const char * filename, vector<string> & wordlist){
    std::ifstream fin;
    fin.open(filename);
    if(!fin.is_open()){
        std::cout << "fail to open the file" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    string word;
    while(std::getline(fin,word,' ')) //while(fin>>word)
        wordlist.push_back(word);
    fin.close();
}