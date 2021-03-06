#include <iostream>
#include "shapes.h"

using namespace std;

   int Circle :: getArea() {
        if(this->width != this->height){
            cerr << "Data corrupted: Circle object has different values for width and height" << endl;
            throw std::exception();
        }

        return width*height*pi;
    }

    void Circle :: setWidth(int width) { this->width = width; this->height = width; }
    void Circle :: setHeight(int height) { this->width = height; this->height = height; }
