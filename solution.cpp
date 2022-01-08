//Prime num from 2 to n
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	for(int i =2;i<=n;i++){
		int chk=0;
		for (int j=1;j<=n;j++){
			if (i%j==0){
				chk++;
			}
		}
		if (chk==2){
			cout<<i<<" "<<endl;
		}
	}
	return 0;
}
