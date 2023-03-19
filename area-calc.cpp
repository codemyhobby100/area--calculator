#include <iostream>
#include <cmath>
using namespace  std;

int main(){
    cout << "Enter radius ";
    double radius;
    cin >> radius;

    double pi =  3.14;
    double area = pow(radius, 2) * pi;
    cout << "The area = " << area;
    return 0;
}