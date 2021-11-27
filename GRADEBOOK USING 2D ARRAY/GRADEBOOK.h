//PROGRAM FOR GRADES OF 10 STUDENTS IN 3 TESTS
#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED

#include <string>
#include <array>

class Gradebook
{
public:
 //STATIC INDICATES THE DATA MEMBER IS SHARED BY ALL OBJECTS OF THE CLASS
    static const size_t students = 10;//CONS NO OF STUDENTS WHO TOOK TEST
    static const size_t tests = 3;

    Gradebook( const std::string &, const std::array< std::array< int, tests >, students > &);

    void setCourseName( const std::string & );
    std::string getCourseName()const;
    void displayMessage() const;
    void processGrades() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage( const std::array< int, tests> &) const;
    void outputBarChart() const;
    void outputGrades() const;
private:
    std::string courseName;
    std::array<std::array< int, tests >, students > grades;
};



#endif
