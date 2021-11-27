#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED

#include <string>
#include <array>

class Gradebook
{
public:
 //STATIC INDICATES THE DATA MEMBER IS SHARED BY ALL OBJECTS OF THE CLASS
    static const size_t students = 10;//CONS NO OF STUDENTS WHO TOOK TEST

    Gradebook( const std::string &, const std::array< int, students > &);

    void setCourseName( const std::string & );
    std::string getCourseName()const;
    void displayMessage() const;
    void processGrades() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage() const;
    void outputBarChart() const;
    void outputGrades() const;
private:
    std::string courseName;
    std::array< int, students > grades;
};



#endif
