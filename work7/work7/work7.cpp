// work7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x,y,i;
	int s=1;
	cout<<"x="<<endl;
	cin>>x;
	cout<<"y="<<endl;
	cin>>y;
	for(i=1;i<=y;i++)
	{
		s=s*x;
	}
	cout<<s<<endl;
}

