#include <iostream>

using namespace std;

int main()
{
    int i;
    int Tel_fee[3][2]={ 2227317,1430,2253227,2850,2232081,4580 };  
     
    cout<<"-------- 電話號碼與費用明細表 -------- "<<endl;
    for(i=0;i<3;i++)
    {
        cout<<Tel_fee[i][0]<<'\t'<<Tel_fee[i][1]<<endl;
        cout<<"-------------------------------------"<<endl;
    }
    //輸出電話號瑪與費用 
      
    return 0;
}
