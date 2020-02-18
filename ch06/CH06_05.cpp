#include <iostream>  
 
using namespace std;

void add(int *,int *);	//add()函數的原型 

int main()
{
 	
    int a=5,b=10;
    cout<<"呼叫add()之前,a="<<a<<" b="<<b<<endl;
    add(&a,&b);	//呼叫add函數,執行a=a+b; 
    cout<<"呼叫add()之後,a="<<a<<" b="<<b<<endl;
   
    return 0;
}
 
void add(int *p1,int *p2)//傳址呼叫的函數定義 
{
    *p1=*p1+*p2;
}
