// dma.h  -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

//abstract base class
//can not use this to create a obj
class ABC{
    private:
        char * label;
        int rating;
    public:
        ABC(const char * l = "null", int r = 1);
        ABC(const ABC & a);
        virtual ~ABC() =0; //a pure virtual function
        virtual void View() const;
        ABC & operator=(const ABC & a);
        friend std::ostream & operator<<(std::ostream & os, const ABC & a);

};

//Base class derived from ABC
//implicit copy constructor
//implicit assignment operator

class baseDMA: public ABC{
    private:
    public:
        baseDMA(const char * l = "null", int r = 1);
        friend std::ostream & operator<<(std::ostream & os, const baseDMA & bd);

};

//lacksDMA
//no destructor since no dynamic memory allocations
class lacksDMA : public ABC{
    private:
        enum {COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
        lacksDMA(const char * c, const ABC & a);
        virtual void View() const;
        friend std::ostream & operator<<(std::ostream & os, const lacksDMA & ld);
};

//hasDMA
class hasDMA : public ABC{
    private:
        char * style;
    public:
        hasDMA(const char * s = "none", const char * l = "null", int r = 0);
        hasDMA(const char * s, const ABC & c);
        hasDMA(const hasDMA & hd);
        ~hasDMA();
        virtual void View() const;
        hasDMA & operator=(const hasDMA & hd);
        friend std::ostream & operator<<(std::ostream & os, const hasDMA & hd);
};

#endif

