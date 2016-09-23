#ifndef SHAPES_H_INCLUDED
#define SHAPES_H_INCLUDED

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

class Rectangle: public Shape
{
    public:
    int getArea();
};


class Circle: public Shape
{
    public:
    int getArea();
    void setWidth(int);
    void setHeight(int);

    private:
    const double pi = 3.14159265359;
};

#endif // SHAPES_H_INCLUDED
