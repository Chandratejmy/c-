#include<iostream>
using namespace std;
class student
{
    protected:
    int rollno;
    string name;
    public:
    void read()
    {
        cout<<"enter the student name \n"<<endl;
        cin>>name;
        cout<<"enter the student rollno\n"<<endl;
        cin>>rollno;
    }
    void show()
    {
        cout<<"NAME :"<<name<<endl;
        cout<<"Roll No :"<<rollno<<endl;
    }
};
class test:public student
{
    protected:
    int sub1,sub2;
    public:
    void readt()
    {
    cout<<"enter the subject marks :";
    cin>>sub1>>sub2;
    }
    void showt()
    {
        cout<<"SUB 1="<<sub1<<endl;
        cout<<"SUB 2="<<sub2<<endl;
        
    }
};
class sports
{
    protected:
    int spmarks;
    public:
    void reads()
    {
        cout<<"enter your sports marks :"<<endl;
        cin>>spmarks;
    }
    void shows()
    {
        cout<<"SPorts  marks ="<<spmarks<<endl;
    }
};
class result:public test,public sports
{
    protected:
    int total;
    public:
    void display()
    {
        total=spmarks+sub1+sub2;
        cout<<"TOTAl Marks of"<<name<<" is "<<total<<endl;
        show();
        showt();
        shows();
    }
};
int main()
{
    result re;
    re.read();
    re.readt();
    re.reads();
    re.display();
    return 0;
}
