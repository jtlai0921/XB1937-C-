#include<iostream>


using namespace std;

int main()
{
    int i,j,n,m;  //九九乘法表的雙重迴圈
    cout<<"請輸入要跳出的 n 與 m 值(1<=n,m<=9): ";
    cin>>n>>m;
   
    for(i=1; i<=9; i++)	 
    {    
        for(j=1; j<=9; j++)
        {   
            if(i==n & j==m)   
                goto here; 
            cout<<i<<"*"<<j<<"="<<i*j<<"  ";    
        }
        cout<<endl;
    }
     
    here:cout<<"我從goto跳過來的"<<endl; 
        
    return 0;
}
