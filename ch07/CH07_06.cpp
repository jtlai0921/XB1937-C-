#include <iostream>

using namespace std;

int main()
{
    int *int_ptr,i,no;    // 宣告整數型態指標 
    double *dou_ptr,dno;   // 宣告浮點數型態指標 
     
     
    int_ptr=&no;
    dou_ptr=&dno;//指向變數位址 
     
    for ( i = 1; i <= 5; i++ )
    {
        int_ptr++;
        dou_ptr++;
        cout<<"int_ptr ="<<int_ptr<<endl;
        cout<<"dou_ptr ="<<dou_ptr<<endl;
    }

    return 0;
}
