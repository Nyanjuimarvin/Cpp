#include <iostream>
#include <iomanip>//PARAMETERIZED STREAM OPERATORS
#include "GRADEBOOK.h"

using namespace std;

Gradebook::Gradebook( const string &name, const array< array< int, tests>,students>&gradesArray )
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

    cout << "LOWEST GRADE IS: " << getMinimum() << "\nHIGHEST GRADE IS: " << getMaximum() << endl;

    outputBarChart();//CALL TO PRINT GRADE DISTRIBUTION CHART
}

int Gradebook::getMinimum()const
{
    int lowGrade = 100;
    for( auto const &students : grades )
    {
        for( auto const &grade : students )
        {
            if( grade < lowGrade )
                lowGrade = grade;
        }
    }
    return lowGrade;
}

int Gradebook::getMaximum()const
{
    int highGrade = 0;
    for( auto const &students : grades )
    {
        for(auto const &grade : students )
        {
            if( grade > highGrade)
                highGrade = grade;
        }
    }
    return highGrade;
}

double Gradebook::getAverage( const array< int, tests > &setsOfGrades )const
{
    int total = 0;

    for( int grade : setsOfGrades )//SUM GRADES IN ARRAY
        total+=grade;

        //STATIC CAST CONVERTS INT TO DOUBLE
    return static_cast<double>( total ) / setsOfGrades.size();//RETURN TOTAL AS DOUBLE
}

void Gradebook::outputBarChart() const
{
    cout << "\nGRADE DISTRIBUTION:" << endl;

    const size_t frequencySize = 11;
    array< unsigned int, frequencySize >frequency = {};

    for( auto const &students : grades )
        for( auto const &tests : students )
        ++frequency[ tests/10 ];

    for( size_t counter =0; counter < frequencySize; ++counter )
    {
        if( 0 == counter )
            cout << " 0-9: ";
        else if ( 100 == counter && 100 <= counter )
            cout << " 100: ";
        else
            cout << counter * 10 << "-" << (counter * 10) + 9 << ": ";



        for( unsigned int stars; stars < frequency[ counter ]; ++stars )
            cout << "*";
        cout << endl;
    }
}

void Gradebook::outputGrades() const
{
    cout << "\nTHE GRADES ARE:\n\n";
    cout << "                 ";
    for( size_t test = 0; test < tests; ++test )
        cout << "TEST" << test + 1 << setw(3) <<" ";
        cout << "AVERAGE" << endl;

        //ROWS AND COLUMNS OF TEXT REPPING ARRAY GRADES

        for( size_t student = 0; student < grades.size(); ++student )
        {
            cout << "STUDENT" << setw( 2 ) << student + 1;

            for( size_t test = 0; test < grades[student].size(); ++test )
                cout << setw(9) << grades[ student ][ test ];




            double average = getAverage( grades[ student ] );
            cout << setw(10) << setprecision(2) << fixed << average << endl;
        }
}
