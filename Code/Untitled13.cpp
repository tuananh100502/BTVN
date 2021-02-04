//b13
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x,y,a;
    cout << "Nhap vao 2 so nguyen:";
    cin >> x >> y;
    a=sqrt(x*x+y*y);
    cout << "Khoang cach tu diem (x,y) den diem O(0,0) la :" << a << endl;
}
