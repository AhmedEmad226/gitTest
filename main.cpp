#include <iostream>
#include <string>
#include <exception>
using namespace std;

class Circle{
    double radius = 1;
    string color = "red";

public:
    Circle(){
        radius = 0;
    }

    Circle(double r){
        radius = r;
    }

    Circle(double r, string color){
        radius = r;
        this->color = color;
    }

    double getRadius(){
        return radius;
    }

    string getColor(){
        return color;
    }

    void setRadius(double r){
        radius = r;
    }

    void setColor(string c){
        color = c;
    }

    double getArea(){
     return 3.14 * radius*radius;
    }
};

int main() {
    Circle c(7,"Green");
    cout << c.getColor() << endl;
    cout << c.getArea() << endl;
}
