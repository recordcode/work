// work7.cpp : 定义控制台应用程序的入口点。
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

