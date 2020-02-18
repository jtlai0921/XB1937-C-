#include <iostream> 


using namespace std;

int main()
{
    int a=100;		//宣告整數變數a 
    double b=113.14;	// 宣告浮點數變數a 
    char c[]="apple";   // 宣告字串變數a 
   
    cout<<"a="<<a<<" sizeof(a)="<<sizeof(a)<<" 位址為:"<<&a<<endl;
    cout<<"b="<<b<<" sizeof(b)="<<sizeof(b)<<" 位址為:"<<&b<<endl;
    cout<<"c="<<c<<" sizeof(c)="<<sizeof(c)<<" 位址為:"<<&c<<endl;

    //使用&運算子輸出變數位址  
   
    return 0;
}
