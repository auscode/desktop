#include <iostream>
using namespace std;

int main()
{
	float num1,num2;
	char op;
	
	cout<<"Enter the operation \n";
	cin>>op;
	
	cout<<"enter the numbers \n";
	cin>>num1 >>num2;
	
	switch (op){
		
		case '+':
			cout<<num1+num2;
			break;
		
		case'-':
			cout<<num1-num2;
			break;
			
		case '*':
			cout<<num1*num2;
			break;
		
		case '/':
			cout<<num1/num2;
			break;
		
		default:
			cout<<"Error operation not found \n";
			break;
	}
	cout<<endl;
	return 0;
}
