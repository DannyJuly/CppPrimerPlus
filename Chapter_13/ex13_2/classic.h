#ifndef CLASSIC_H_
#define CLASSIC_H_

//base class
class Cd{
    private:
        char * performers;
        char * label;
        int selections;
        double playtime;
    public:
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & cd);
        Cd();
        Cd & operator=(const Cd & cd);
        virtual ~Cd();
        virtual void Report() const;
};

class Classic : public Cd{
    private:
        char * works;
    public:
        Classic(const char * w, const char *s1, const char * s2, int n, double x);
        Classic(const Classic & cd);       
        Classic();
        
        Classic & operator=(const Classic & cd);   
        virtual ~Classic();
        virtual void Report() const;
};



#endif