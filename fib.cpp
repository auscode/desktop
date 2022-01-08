#include <iostream>
using namespace std;

int main() 
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	cout<<"Fibonacci sequence"<<endl;
	int a=0,b=1;
	while(a<n){
		cout<<a<<endl;
		int c=a+b;
		a=b;
		b=c;
	}	
}
