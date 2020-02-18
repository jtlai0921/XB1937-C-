#include <iostream>
#include <cstring>
using namespace std;
	
class Baseball
{
    private:
        char player[20];    //打擊者姓名   
        int fires;          //打擊次數
	    int safes;          //安打數
	
    public:
        //宣告建構子函數 
        Baseball();
        void showplayer();   //不帶參數之建構子
        Baseball(char *name,int fs,int ss);   //含參數列之建構子
        //宣告解構子
        ~Baseball()
        {
            cout<<"解構:"<<player<<endl;   //顯示被釋放建構子之資料成員player
        }
};
//利用建構子函數指定資料成員初始值
Baseball::Baseball()
{
    strcpy(player,"陳瑞昌");
    fires=68;
    safes=20;
}
//利用傳入之參數指定資料成員初始值
Baseball::Baseball(char *name,int fs,int ss)
{
    strcpy(player,name);
    fires=fs;
    safes=ss;
}
void Baseball::showplayer()          
{
    cout<<"================================"<<endl;
    cout<<"打擊者："<<player<<endl;
    cout<<"打擊次數："<<fires<<endl;
    cout<<"安打次數："<<safes<<endl;
}
void call_object()
{
    Baseball b1;                //宣告時建構子自動指定初始值
    Baseball b("郭一峰",115,20);//宣告物件b並帶入資料成員初始值
    b1.showplayer();
    b.showplayer();	//離開此函數區塊時,會呼叫解構子 
}		
int main()
{
    call_object();
    	
    return 0;
}
