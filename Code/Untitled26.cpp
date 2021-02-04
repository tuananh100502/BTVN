//B26:

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int s=0,n,i,j,temp;
	int max,min,mean;
	cin >>n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}for(i=0;i<n;i++){
		s+=a[i];
		mean=s/3;
	}	cout << "Gia tri TB =" << mean << endl;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		}
	cout << "min=" << a[0] << endl;
	cout << "max=" << a[n-1];
	}


