#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int t;
	float a,b;
	cout<<"�����¶��밴1,�����¶��밴0"<<endl;
	cin>>t;
	cout<<"�������¶�:"<<endl;
	cin>>a;
	if(t==0)
	{
		b=a*9/5+32;
	}
	else
	{
		b=(a-32)*5/9;
	}
	cout<<"ת������¶�Ϊ:"<<b<<endl;
}
