//B21:

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,s,h;
	cout << "nhap vao 3 canh tam giac :\n";
	cin >> a >> b >> c;
	s=(a+b+c)/2;
	h= sqrt(s*(s-a)*(s-b)*(s-c));
	cout << "dien tich cua tam giac la :" << h;


}
