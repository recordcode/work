// work5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n,m,i,j;
	float s,k;
	cout<<"n="<<endl;
	cin>>n;
	cout<<"m="<<endl;
	cin>>m;
	if(m<n)
	{
		return (0);
	}
	else 
	{
		s=1;
		k=1;
		for(i=m,j=n;j>=1;i--,j--)
		{
			s=s*i;
			k=k*j;
		}
		cout<<s/k<<endl;
	}

}
