#include<iostream>
using namespace std;

double area(double r){
    return 3.14*r*r;
}

double area(double l, double w){
    return l*w;
}

double area(int b, int h){
    return 0.5*b*h;
}


int main(){
    int r, l, b, h, w;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "The area of the circle is: " << area(r) << endl;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> w;
    cout << "The area of the rectangle is: " << area(l, w) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> b >> h;
    cout << "The area of the triangle is: " << area(b, h) << endl;

    return 0;
}