#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int score;
        int ID;
    } s1,s2; // 宣告student結構的s1,s2變數  
    float total,average;
     
    strcpy(s1.name, "Justin");// 設定s1.name初始值  
    s1.score = 90;
    s1.ID=10001;
    cout<<"第一個學生的姓名="<<s1.name<<"成績="<<s1.score<<"學號="<<s1.ID<<endl;
    cout<<"請輸入第二個學生的姓名:";
    cin>>s2.name;// 輸入s2.name初始值 
    cout<<"請輸入第二個學生的成績與學號:";
    cin>>s2.score>>s2.ID;// 輸入s2的其他資料成員  
    cout<<"第二個學生的姓名="<<s2.name<<"成績="<<s2.score<<"學號="<<s2.ID<<endl;
    
    total=s1.score+s2.score;// 計算總分 
    average=total/2;  // 計算平均 
    cout<<"================================================="<<endl;
    cout<<"兩位學生總分:"<<total<<"兩位學生平均:"<<average<<endl;
       
    return 0;
}
