#include <iostream>
using namespace std;
class Student
{
    private:
        string name;
        int mark;
    public:
        //constructor
        Student(string n , int m)
        {
            name=n;
            mark=m;
        }
        //default constructor
        Student()
        {
            cout<<"enter your name :"<<name<<endl;
            cout<<"enter your mark :"<<mark<<endl;
        }
        //frined function
        friend void sum(Student ob1 , Student ob2 , Student ob3);
        //checkMarks function
        void checkMarks(Student ob1 , Student ob2 , Student ob3)
        {
          if(ob1.mark>ob2.mark && ob1.mark>ob3.mark )
          {
            cout<<ob1.name<<" congratulation your are the first"<<endl;
          }     
          else if(ob2.mark>ob1.mark && ob2.mark>ob3.mark)
          {
            cout<<ob2.name<<" congratulation your are the first"<<endl;
          }    
          else if(ob3.mark>ob1.mark && ob3.mark>ob2.mark)
          {
            cout<<ob3.name<<" congratulation your are the first"<<endl;
          }
          else
          {
              cout<<"all the marks are equal"<<endl;
          }
        }
};
void sum(Student ob1 , Student ob2 , Student ob3)
{
    cout<<"the sum of the marks ="<<ob1.mark+ob2.mark+ob3.mark<<endl;
}


int main()
{
    Student ob1("ahmed",80);
    Student ob2("ali",70);
    Student ob3("nour",60);
    sum(ob1,ob2,ob3);
    ob1.checkMarks(ob1,ob2,ob3);
    return 0;
}











