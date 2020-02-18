#include <iostream>

using namespace std;

struct student1
{
    char name[10];//佔10bytes 空間 
    int score; // 佔 4bytes 空間 
}; //宣告結構型態 
 
union student
{
    char name[10];// 佔10bytes 空間 
    int score;// 佔 4bytes 空間 
}; // 宣告聯合型態  

int main()
{
    struct student1 s1;// s1為結構變數  
    union student s; // s為聯合變數  
     
    cout<<"結構變數s1="<<sizeof(s1)<<"位元組 聯合變數s="<<sizeof(s)<<"位元組"<<endl;
     
	return 0;
}
