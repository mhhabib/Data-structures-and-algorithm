#include<bits/stdc++.h>
using namespace std;
class student
{
public:
   void display()
   {
       cout<<"I am a student"<<endl;
   }

};
class person : public student
{
public:
    void display(){
        cout<<"I am a person"<<endl;
    }
};
class teacher:public person
{
public:
   void display(){
        cout<<"I am a teacher"<<endl;
    }
};
int main()
{

    student s;s.display();
    teacher t;t.display();
}
