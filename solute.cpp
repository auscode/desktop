#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	int c;
	cout<<"Enter your choice * or +"<<endl;
	cin>>c;
	
	int a=1, i=1;
	
	//~ for(int i; i<=n;i++){
		if(c=='*'){
			int t;
			t= a+(n-1)*i;
			cout<<t<<endl;
		} 
	//~ }
}
