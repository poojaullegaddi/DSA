// finding maximum element and index of array
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a[20],n;
	cout<<"enter the size of the array" <<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	if(n==0)
	 return 0;
	int maxe,maxi;
	maxe=a[0];
	maxi=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>maxe)
		maxe=a[i];
		maxi=i;
	}
	cout<<"maximum element is "<<maxe <<endl;;
	cout<<"maximum element index is "<<maxi <<endl;
	return 0;
}
