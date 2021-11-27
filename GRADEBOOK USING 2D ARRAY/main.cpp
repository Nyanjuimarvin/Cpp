#include <iostream>
#include <array>
#include "GRADEBOOK.h"

using namespace std;

int main()
{
    array< array<int, Gradebook::tests >, Gradebook::students >grades=
    {
        87,96,70,
        68,87,90,
        94,100,90,
        100,81,82,
        83,65,85,
        78,87,65,
        85,75,83,
        91,94,100,
        76,72,84,
        87,93,73
    };

    Gradebook myGradeBook( "UMBRAL PLAINS 101", grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
     return 0;
}
