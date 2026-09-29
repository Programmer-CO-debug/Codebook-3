//Abstract Class and Pure Virtual Function

#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    Rectangle rectangle(9.0, 4.8);
    std::cout << "Rectangle Area: " << rectangle.area() << '\n';
    return 0;
}
