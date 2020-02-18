#include <iostream>

using namespace std;

int main()
{ 
    enum animal{
        tiger,
        monkey,
		dog,
		cat};//定義列舉型態 animal 
       
    enum animal zoo1,zoo2; // 宣告列舉型態animal的變數 zoo1與zoo2 
    zoo1=tiger;// 將zoo1的值設定為tiger  
    zoo2=dog;// 將zoo2的值設定為dog 
     
    cout<<"tiger="<<tiger<<" monkey="<<monkey<<" dog="<<dog<<" cat="<<cat<<endl;
    cout<<"zoo1="<<zoo1<<" zoo2="<<zoo2<<endl;
     
    return 0;
}
