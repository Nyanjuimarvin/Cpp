#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED


class Time
{
public:
    Time();
    void setTime( int, int, int );
    void printUniversal()const;
    void printStandard()const;

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

};


#endif
