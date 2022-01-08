#include <stdio.h>

int main()
{
	int arr[20],i,n,x;
	printf("Enetr the num of elemets you wnt to put in the array \n");
	scanf("%d",&n);
	
	printf("Enter what you want put in the array \n");
	for (i=0; i<n;i++)
	scanf("%d", &arr[i]);
	
	printf("enter the element you want to search \n");
	scanf("%d", &x);
	
	for (i =0; i<n; ++i)
	if (arr[i]==x)
	break;
	
	if (i<n)
	printf("Elements found at index %d \n", i);
	else
	printf("element not found \n");
	
	return 0;
}
