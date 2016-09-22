#include <iostream>
#include "shapes.h"

using namespace std;


int main(void)
{
    Triangle Tri;

    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;

Rectangle Rect;
   Rect.setWidth(2);
   Rect.setHeight(6);
   cout << "Total Rectangle Area:"<< Rect.getArea()<<endl;

    return 0;
}

