// SafeArray.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
class SafeArray{
public:
	int MAX;
	bool error;
	int data[];
		int& operator [](int index){
			if(index<0||index>MAX){
				this->error=true;
			    return data[0];
			}
			else
			{
				this->error=false;
				return data[index];
			}
	}
};
void main(){}
