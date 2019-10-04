#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
class Account {
    private:
        std::string name_;
        std::string number_;
        double deposit_;
    public:
        Account(std::string name, std::string number,double deposit);
        Account();
        ~Account();
        void show() const;
        void store(double money);
        void draw(double money);

};

#endif