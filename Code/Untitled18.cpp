//B18:

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   float x1,y1,x2,y2,d;
   cout << "Nhap vao 4 so thuc:";
   cin >> x1 >> y1 >> x2 >> y2;
   d=pow((x1-x2),2) + pow((y1-y2),2);
   cout << "Khoang cach giua 2 diem la :" << d;
}
