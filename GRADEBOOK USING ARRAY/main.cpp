#include <iostream>
#include <array>
#include "GRADEBOOK.h"

using namespace std;

int main()
{
    const array< int, Gradebook::students > grades =
    {87,68,94,100,83,78,85,91,76,87};
    string courseName = "UMBRAL PLAINS 101";

    Gradebook myGradeBook( courseName, grades );
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
    return 0;
}
