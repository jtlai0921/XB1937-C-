#include <iostream>

using namespace std;

int main()
{
    
    int i,arr[6]={312,16,35,65,52,111};
    int *ptr;
 
    ptr = arr;// 使用指標變數指向陣列常數 
     
    for ( i = 0; i < 6; i++ )
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<'\t';
        cout<<"arr+"<<i<<"="<<arr+i<<'\t';// 輸出arr+i的值 
        cout<<"*(ptr+"<<i<<")="<<*(ptr+i)<<'\t';
        cout<<"ptr+"<<i<<"="<<ptr+i<<endl;/* 輸出ptr+i的值 */ 
    }

    return 0;
}
