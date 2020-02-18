#include <iostream> 

using namespace std;

int main()
{
    int i,arr[6]={312,16,35,65,52,111};
   
    cout<<"arr="<<arr<<'\t'<<"&arr="<<&arr<<endl;		
    //印出指標常數arr的值與指標常數arr的位址 
   
    for(i=0;i<6;i++)
    cout<<"&arr["<<i<<"]="<<&arr[i]<<'\t'<<"arr+"<<i<<"="<<arr+i<<endl;  
    //印出陣列a每一個元素的位址 
    cout<<"--------------------------------------"<<endl;
    for(i=0;i<6;i++)
        cout<<"*(&arr["<<i<<"])="<<*(&arr[i])<<'\t'<<"*arr(+"<<i<<")="<<*(arr+i)<<endl; 
        // 印出陣列a每一個元素的值 

    return 0;
}
