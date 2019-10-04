#ifndef PLORG_H_
#define PLORG_H_

class Plorg{
    private:
        static const int Size = 19;
        char name_[Size];
        int ci_;
    public:
        Plorg();  
        void show() const;  
        void setCi(const int & ci);
        
};

#endif