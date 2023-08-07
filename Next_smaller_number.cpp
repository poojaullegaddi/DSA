/* next smaller number
(replace each numberof array with nearest smaller numberon its right in the way 
*return  null if array is null
*replace number with -1 if no number is present on its right)*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void helper(int n,int a[])
{
	stack<int> s;
	s.push(a[n-1]);
	a[n-1]=-1;
	for(int i=n-2;i>=0;i--)
	{
		int x=a[i];
		while(s.size()==0 && x<s.top())
		{
			s.pop();
		}
		if(s.size()==0)
		  a[i]=s.top();
		s.push(x);
	}
	return;
}
int main()
{
	int a[20];
	int n;
	cout<<"enter array size "<<endl;
	cin>>n;
	cout<<"enter array elements "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
  int b[]=helper(n,a);
  
  for(int i=0;i<n;i++)
  {
	  cout<<b[i];
  }
	return 0;
	
	
}
