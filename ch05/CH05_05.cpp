#include <iostream>

using namespace std;

int main()
{
    char Name[5][10]={"John",  
            "Mary",    
            "Wilson",
            "Candy",
            "Allen"};//字串陣列的宣告 
    int i,j;
   
    for(i=0;i<5;i++)	
    {
        j=0;
        while(Name[i][j]!='\0')
            j++;
        cout<<"Name["<<i<<"]="<<Name[i]<<" 長度為:"<<j<<"位元"<<endl;    //印出字串陣列內容 
    }
   
    cout<<endl;
   
    return 0;
}
