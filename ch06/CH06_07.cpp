#include <iostream>

#define Array_size 6
using namespace std;

void Multiple2(int arr[]);	//函數Multiple2()的原型 

int main()
{
    int i,A[Array_size]={ 1,2,3,4,5,6 };
   
    cout<<"呼叫Multiple2()前,陣列的內容為: "<<endl;   
    for(i=0;i<Array_size;i++) //印出陣列內容 
        cout<<A[i]<<" ";
    cout<<endl;
    Multiple2(A); //呼叫函數Multiple2() 
    cout<<"呼叫Multiple2()後,陣列的內容為: "<<endl; 
    for(i=0;i<Array_size;i++)	//印出陣列內容 
        cout<<A[i]<<" ";
    cout<<endl;
       
    return 0;
}

void Multiple2(int arr[])
{
    int i;
    for(i=0;i<Array_size;i++)	
        arr[i]*=2;
}
