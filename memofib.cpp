#include <iostream>
using namespace std;

int main() 
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	int a=0,b=1;
	while(a<n){
		int c=a+b;
		a=b;
		b=c;
	}
	if(a==n) {
			cout<<"True"<<endl;
			return 0;
		}
	else
		cout<<"False"<<endl;
}
