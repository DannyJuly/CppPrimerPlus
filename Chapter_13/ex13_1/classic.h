#ifndef CLASSIC_H_
#define CLASSIC_H_

// base class
class Cd
{
private:
    char performers[50];
    char label[20];
    int selections; //number of selections
    double playtime; //playing time in minutes

public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd();
    virtual ~Cd() {};
    virtual void Report() const;
};

//drived class
class Classic : public Cd
{
    private:
        char works[100];

    public:
        Classic(const char * w, const char *s1, const char * s2, int n, double x);
        Classic();
        virtual ~Classic() {};
        virtual void Report() const;
};

#endif