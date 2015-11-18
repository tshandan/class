//
//  main.cpp
//  class
//
//  Created by shandan on 15/11/18.
//  Copyright (c) 2015年 shandan. All rights reserved.
//

#include <iostream>
using namespace std;
class Student
{
public:
    Student(int num,string name,string sex);
    {
        num=n;
        name=nam;
        sex=s;
    }
    void display();
    {cout<<"num:"<<num<<"name:"<<name<<"sex"<<sex<<endl;}
        
    protected:
        int num;
        string name;
        string sex;
    
        };
        class Teacher:public Student
        {
        public:
            Teacher(int n,string nam,string s,int n1,string nam1,string addr,int p)
            :Student(n,nam),monitor(n1,nam1);
            {
                address=addr;
                phone=p;
            }
            void show()
            {
                cout<<"This student is:"<<endl;
                display();
                cout<<"addr"<<addr<<"phone number"<<p<<endl;
            }
            void show_monitor();
            {
                cout<<"class monitor is"<<endl;
                monitor.display();
            }
        private:
            Teacher monitor;
            string addr;
            int p;
        };
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Teacher teach(1,k)
    return 0;
}
