#include "string2.h"
#include <cstring>

//Initialize static class member
int String::num_strings = 0;

//Static method
int String::HowMany(){
    return num_strings;
}
//class member
String::String(){
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const char * s){
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings++;
}

String::String(const String & s){
    len = s.len;
    str = new char[len+1];
    std::strcpy(str, s.str);
    num_strings++;
}

String::~String(){  //destructor
    --num_strings;
    std::cout << str << " has been deleted" <<std::endl;
    delete [] str;
}

//added
void String::stringlow(){
    for(int i = 0; i < len; i++){
        str[i] = std::tolower(str[i]);
    }
}

void String::stringup(){
    for(int i = 0; i < len; i++){
        str[i] = std::toupper(str[i]);
    }
}

int String::has(char ch) const{
    int sum = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == ch)
            sum++;
    }
    return sum;
}

//overloaed operators
String & String::operator=(const String & s){
    if(this == &s)
        return *this;
    delete [] str; //delete old memory
    len = s.len;
    str = new char[len+1];
    std::strcpy(str,s.str);
    return *this;
}

String & String::operator=(const char * s){
    delete [] str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str, s);
    return *this;
}

//read-write char for non-const string
char & String::operator[](int i){
    return str[i];
}

//read-only for const string
const char & String::operator[](int i) const{
    return str[i];
}

//added
String String::operator+(const String & s) const{
    int len = std::strlen(str) + std::strlen(s.str);
    char str_sum[len+1];
    std::strcpy(str_sum, str);
    std::strcat(str_sum, s.str);
    String str_new = str_sum;  //String(const char * s)
   // delete [] str_sum;
    return str_new;

}

String String::operator+(const char * s) const{
    String temp = s;
    String sum = *this + temp;
    return sum;
}

//overloaded operator friends
bool operator<(const String & st1, const String &st2){
    return (std::strcmp(st1.str,st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

std::ostream & operator<<(std::ostream & os, const String & st){
    os << st.str;
    return os;
}

std::istream & operator>>(std::istream & is,String & st){
    char tmp[String::CINLIM];
    is.get(tmp, String::CINLIM);
    if(is)
        st = tmp;
    while(is && is.get()!='\n')
        continue;
    return is;
}

String operator+(const char * s, const String & st){
    return st + s;
}

