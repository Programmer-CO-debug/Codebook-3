#include <iostream>

int calculateArea(int side) {
 return side * side;
}
int calculateArea(int length, int width) {
 return length * width;
}
double calculateArea(double radius) {
 constexpr double PI = 3.141592;
 return PI * radius * radius;
}
int main() {
    std::cout<<"Square Area:"<<calculateArea(5)<<'\n';
    std::cout<<"Rectangle Area:"<<calculateArea(5.6, 10.9)<<'\n';
    std::cout<<"Circle Area:"<<calculateArea(5.0)<<'\n';
    return 0;
}
