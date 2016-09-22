#include <iostream>


using namespace std;

// Base class
class Shape
{
    public:
    // pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w){ width = w; }
    void setHeight(int h){ height = h; }

    protected:
    int width;
    int height;
};

class Triangle: public Shape
{
    public:
    int getArea() { return (width * height)/2; }
};

class Circle: public Shape
{
    public:

    int getArea() {
        if(width != height){
            cerr << "Data corrupted: Circle object has different values for width and height" << endl;
            throw std::exception();
        }

        return width*height*pi;
    }

    void  setWidth(int width) { this->width = width; this->height = width; }
    void  setHeight(int height) { this->width = height; this->height = height; }

    private:
        const double pi = 3.141592659;

};

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

