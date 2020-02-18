#include <iostream>

using namespace std;

int main()
{
    struct
    {
        char name[10];
        int score;
        int ID;
    } s1={ "Justin",90,10001};//不定義結構型態,卻宣告結構變數 
    // 設定結構變數成員時,必須以大括號括住 
    cout<<"s1.name = "<<s1.name<<endl;
    cout<<"s1.score = "<<s1.score<<endl;
    cout<<"s1.ID = "<<s1.ID<<endl;
     
    return 0;
}
