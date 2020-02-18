#include <iostream>
 
using namespace std;

int main()
{
    struct member
    {
        char name[20];
        int age;
    };
 
    struct member m1,m2;
    struct member *ptr;    //宣告結構指標 
     
    cout<<"第一位會員姓名：";
    cin>>m1.name;
    cout<<"會員年齡：";
    cin>>m1.age;
     
    cout<<"第二位會員姓名：";
    cin>>m2.name;
    cout<<"會員年齡：";
    cin>>m2.age;
    cout<<"---------------------------------"<<endl;
    ptr = &m1; // 初始化指標 
    cout<<"指標指向第一位會員姓名：";
    cout<<ptr->name;//第一種結構指標存取方式 
    cout<<"\t會員年齡：";
    cout<<ptr->age;

    ptr = &m2; // 初始化指標 
    cout<<endl<<"指標指向第二位會員姓名：";
    cout<<(*ptr).name;//第二種結構指標存取方式 
    cout<<"\t會員年齡：";
    cout<<(*ptr).age;
    cout<<endl;

    return 0;
}
