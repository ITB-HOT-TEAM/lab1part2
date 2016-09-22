#include <iostream>

using namespace std;


//Main
int main(void)
{
    Triangle tri;
    Rectangle rect;
    Circle circ;


    rect.setWidth(5);
    rect.setHeight(7);

    circ.setWidth(5);
    circ.setHeight(7);

    tri.setWidth(5);
    tri.setHeight(7);

    // Print the area of the object.
    cout << "Total Rectangle area: " << rect.getArea() << endl;
    cout << "Total Circle area: " << circ.getArea() << endl;
    cout << "Total Triangle area: " << tri.getArea() << endl;
    cout << "Total of all objects area: " << rect.getArea()+circ.getArea()+tri.getArea() << endl;

    return 0;
}

