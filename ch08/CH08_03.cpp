#include <iostream>

using namespace std;

int main()
{
    struct name
    {
        char firstname[10];
        char lastname[10];
    }; //定義結構name 
   
    struct member   	//定義巢狀結構 member 
    {
        struct name member_name;
        char ID[12];
        int salary;
    } m1={ {"Helen","Wang"},"E121654321",35000};
    // 設定結構變數m1的初值 
   
    cout<<"------------------------------------------"<<endl;
    cout<<"會員姓名:"<<m1.member_name.lastname<<m1.member_name.firstname<<endl;  
    cout<<"身份證號碼:"<<m1.ID<<endl;
    cout<<"會員薪資:"<<m1.salary<<endl;
    cout<<"------------------------------------------"<<endl;
   
    return 0;
}
