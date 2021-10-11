#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end)
{
	int temp;
	while(start <end)
	{
		temp= arr[start];
		arr[start] = arr[end];
		arr[end]= temp;
		start++;
		end--;
	}
	
}

void rightRotate(int arr[],int n,int d)
{
	reverse(arr,0,n-1);
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
}

void printArray(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d =3;
	rightRotate(arr,n,d);
	printArray(arr,n);
	
}
