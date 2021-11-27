#include <iostream>
#include <iomanip>
#include "GRADEBOOK.h"

using namespace std;

Gradebook::Gradebook( const string &name, const array< int, students>&gradesArray )
:courseName( name ),grades( gradesArray )
{
}

void Gradebook::setCourseName( const string &name )
{
    courseName=name;
}

string Gradebook::getCourseName() const
{
    return courseName;
}

void Gradebook::displayMessage() const
{
    cout << "WELCOME TO THE GRADEBOOK FOR\n" <<getCourseName()<< "!"<<endl;
}


//PERFORM VARIOUS CALCULATIONS ON THE GRADES
void Gradebook::processGrades() const
{
    outputGrades();//OUTPUT GRADES ARRAY

//CALL GETAVERAGE TO CALCULATE AVERAGE GRADE
    cout << setprecision(2) << fixed;
    cout << "\nCLASS AVERAGE IS: " <<getAverage() << endl;

    cout << "LOWEST GRADE IS: " << getMinimum() << "\nHIGHEST GRADE IS: " << getMaximum() << endl;

    outputBarChart();//CALL TO PRINT GRADE DISTRIBUTION CHART
}

int Gradebook::getMinimum()const
{
    int lowGrade=100;

    for( int grade : grades )
    {
        if( grade < lowGrade )
            lowGrade = grade;
    }
    return lowGrade;
}

int Gradebook::getMaximum()const
{
    int highGrade=0;

    for( int grade : grades )
    {
        if( grade > highGrade )
            highGrade = grade;
    }
    return highGrade;
}

double Gradebook::getAverage()const
{
    int total = 0;

    for( int grade : grades )//SUM GRADES IN ARRAY
        total+=grade;

        //STATIC CAST CONVERTS INT TO DOUBLE
    return static_cast<double>( total ) / grades.size();//RETURN TOTAL AS DOUBLE
}

void Gradebook::outputBarChart() const
{
    cout << "\nGRADE DISTRIBUTION:" << endl;

    const size_t frequencySize = 11;
    array< unsigned int, frequencySize >frequency = {};

    for( int grade : grades )
        ++frequency[ grade/10 ];

    for( size_t counter =0; counter < frequency.size(); ++counter )
    {
        if( 0 == counter)
            cout << "0-9: ";
        else if ( 100 == counter)
            cout << "100: ";
        else
            cout << counter*10 << "-" << (counter * 10)+9 << ": ";


        for( unsigned int stars; stars <frequency[ counter ]; ++stars )
            cout << "*";
        cout << endl;
    }
}

void Gradebook::outputGrades() const
{
    cout << "\nTHE GRADES ARE:\n\n";
    for( size_t student = 0; student<grades.size(); ++student )
        cout << "STUDENT" << setw( 4 ) << student + 1 << ":" << setw( 6 ) << grades[ student ] << endl;
}
