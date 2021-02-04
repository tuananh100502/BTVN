//B17:


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int x;
   cout << "Nhap vao nam:" << endl;
   cin >> x;
   if(x%400==0) cout << x << " La nam nhuan !";
   if(x%4==0&&x%100!=0) cout << x << " La nam nhuan !";
   else cout << x << " khong la nam nhuan !";
   }

