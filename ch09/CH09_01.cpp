#include <iostream>
	
using namespace std;
	
	//定義一個Baseball的類別
class Baseball
{
    //定義公用資料及函式成員
    public:
    char player[20];       //打擊者姓名         
    int fires;             //打擊次數
    int safes;             //安打次數
    //宣告公用的函式成員showplayer的原型，用以顯示打擊者資料
    void showplayer()          
    {
        cout<<"===================================="<<endl;
        cout<<"打擊者："<<player<<endl;     //顯示打擊者姓名
        cout<<"打擊次數："<<fires<<endl;    //顯示打擊次數
        cout<<"安打次數："<<safes<<endl;    //顯示安打次數
    }
};
int main()
{
    Baseball b;         //宣告一個Baseball類別的物件b 
    cout<<"打擊者：";
    cin>>b.player;      //輸入打擊者姓名
    cout<<"打擊次數：";
    cin>>b.fires;       //輸入打擊次數
    cout<<"安打次數：";
    cin>>b.safes;       //輸入安打次數
    b.showplayer();     //呼叫物件b的showplayer 函式成員，以顯示所輸
	                    //入的打擊者資料
    return 0;
}
