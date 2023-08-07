/* checking wheteher password is valid or invalid*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
int min;
getline(cin,s);
int len=s.size();
char *c=&s[0];
cin>>min;
cout<<checkpwd(c,len,min);
}

