#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"enter the numbers "<<endl;
	cin>>a>>b;
	
	int smaller=a;
	if(a<b){
		if (b%a==0){
			cout<<"your gcd is :";
			cout<<a<<endl;
			return 0;
		}
	}
	smaller=b;
	if (b<a){
		if(a%b==0){
			cout<<"your gcd is :";
			cout<<b<<endl;
			return 0;
		}
	}
	int i,gcd=1;
	for (i=2;i<=smaller;i++){
		if (a%b==0 && b%a==0){
			gcd=i;
		}
	}
	cout<<"your gcd is :";
	cout<<gcd<<endl;
	return 0;
}
	
