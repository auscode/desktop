#include <iostream>
using namespace std;

int main()
{
	int n,i,j,s;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	for (i=1;i<=n;i++){
		for (s=1;s<=n-i;s++ ){
			cout<<" ";
		}
		for(j=1; j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (i=1;i<=n-1;i++){
		for (s=1;s<=i;s++ ){
			cout<<" ";
		}
		for(j=1; j<=2*(n-i)-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
