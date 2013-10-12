// SelectSubject.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Student{
	char name[20];
	int number;
	int grade;
}students[164];
int StudentCount=0;
void list();
void addStudent();
void deleteStudent();
void recordGrade();
int find(char *name);
void input(struct Student &student);
int main()
{
	cout<<"1)查看名单"<<endl;
	cout<<"2)选课"<<endl;
	cout<<"3)退选"<<endl;
	cout<<"4)录入成绩"<<endl;
	cout<<"5)退出程序"<<endl;
	int action;
	cin>>action;
	do{
		switch(action){
            case 1:list();
				break;
			case 2:addStudent();
				break;
			case 3:deleteStudent();
				break;
			case 4:recordGrade();
				break;
			case 5:return 0;
          defult:
				cout<<"输入菜单有误"<<endl;
		}
	}while(1);
}
void list(){
	cout<<"姓名\t"<<"学号\t"<<"成绩"<<endl;
	for(int i=0;i<StudentCount;i++){
		cout<<students[i].name<<endl;
	    cout<<students[i].number<<endl;
		cout<<students[i].grade<<endl;
	}
}
void addStudent(){
	struct Student student;
	input(student);
	int i=find(student.name);
	if(i==StudentCount){
		students[i+1]=student;
	}
}
void deleteStudent(){
	struct Student student;
	input(student);
	int i=find(student.name);
	for(;i<StudentCount;i++)
	{
		students[i]=students[i+1];
	}
}
void recordGrade(){
	struct Student student;
	input(student);
	int i=find(student.name);
	cout<<"成绩是:"<<endl;
	cin>>students[i].grade;
}
int find(char *name){
	int i;
	for(i=0;i<StudentCount;i++){
		if(strcmp(students[i].name,name) == 0){
			break;
		}
	}
	return i;
}
void input(struct Student &student){ 
	cout<<"姓名：";
	cin>>student.name;
	cout<<"学号：";
	cin>>student.number;
}

