#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a, b, c ,s , area;
    cout << "Enter the lengths of the sides of the triangle a: ";
    cin >> a ; 

    cout << "Enter the lengths of the sides of the triangle b: ";
    cin >> b ; 

    cout << "Enter the lengths of the sides of the triangle c: ";
    cin >> c ; 

    if(a <= 0 || b <= 0 || c <= 0){
        cout << "enter the positive number" << endl;
        return 1; 
    }

    if(a + b <= c || b + c <= a || a + c <= b ){
        cout << "Not a valid triangle" << endl;
        return 1;
    }

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "The area of the triangle is: " << area << endl;

    return 0;  
}