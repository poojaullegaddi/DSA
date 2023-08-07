/* Nearest Integer:
Int nearestInteger(int num, int m)

The function accepts two positive 'num' and 'm' as its argument. Implement the

following function to find the nearest integer to num.
1) Number is divisible by m.
2) Number is nearest to 'num' (Have the least distance from num)
Note: if there are two numbers with the least distance from num, then return the larger
num.

Input 1: Num = 67
         M=8
         o/p:64
         */
         
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	int r;
	cout<<"enter number(n) "<<endl;
	cin>>n;
	cout<<"enter number(m) "<<endl;
	cin>>m;	
     r=n%m;
	if(r<(m+1)/2)
	 cout<<n-r;
	 else
	  cout<< n+(m-r);
}
	
	
