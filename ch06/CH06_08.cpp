#include <iostream>

using namespace std;

#define Array_row 2
#define Array_column 6

void Multiple2(int brr[][Array_column]);//函數Multiple2()的原型 

int main()
{
    int i,j,B[][Array_column]={{1,2,3,4,5,6},{7,8,9,10,11,12}};
   
    cout<<"呼叫Multiple2()前,陣列的內容為: ";   
    for(i=0;i<Array_row;i++)	// 印出陣列內容 
        for(j=0;j<Array_column;j++)
            cout<<B[i][j]<<" ";
    cout<<endl;
   
    Multiple2(B); 			//呼叫函數Multiple2() 
    cout<<"呼叫Multiple2()後,陣列的內容為: "; 
   
    for(i=0;i<Array_row;i++)	//印出陣列內容 
        for(j=0;j<Array_column;j++)
            cout<<B[i][j]<<" ";
   
    cout<<endl;
       
    return 0;
}

void Multiple2(int brr[][Array_column])//第二維必須有元素個素
{
    int i,j;
    for(i=0;i<Array_row;i++) // 印出陣列內容 
        for(j=0;j<Array_column;j++)	
            brr[i][j]*=2;
}
