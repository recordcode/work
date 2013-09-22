#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int t;
	float a,b;
	cout<<"华氏温度请按1,摄氏温度请按0"<<endl;
	cin>>t;
	cout<<"请输入温度:"<<endl;
	cin>>a;
	if(t==0)
	{
		b=a*9/5+32;
	}
	else
	{
		b=(a-32)*5/9;
	}
	cout<<"转换后的温度为:"<<b<<endl;
}
