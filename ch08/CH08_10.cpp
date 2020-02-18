#include <iostream>

using namespace std;

typedef int INTEGER;//把int定義成INTEGER 
typedef char* STRING;// 把char*定義成STRING 

int main()
{    
    INTEGER score=12345;//宣告score是 INTEGER型態 
    STRING s1="我是張大大";// 宣告s1是STRING型態  
      
    cout<<"s1="<<s1<<" score="<<score<<endl;
     
    return 0;
}
