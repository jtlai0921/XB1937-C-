// 功能：將英文字母轉換大小寫
#include <iostream>

using namespace std;
void toUpper(char*);  // 字串轉大寫 
void toLower(char*);  // 字串轉小寫 
int main()
{
    char str[80];
    cout<<"請輸入一英文字串：";
    cin>>str;
    toUpper(str);
    cout<<"字串轉大寫： "<<str<<endl;
    toLower(str);
    cout<<"字串轉小寫： "<<str<<endl; 
	    
    return 0;
}
// 引數：傳遞字串  
// 結果：小寫轉大寫 
void toUpper( char *str )
{
    int i = 0;
    int length;
    while ( str[i] != '\0' )
        i++;
    length = i;
    for( i = 0; i < length; i++ )
        if ( *(str+i) > 96 && *(str+i) < 123 )
            *(str+i) = *(str+i) - 32;
}
// 引數：傳遞字串 
// 結果：大寫轉小寫 
void toLower( char *str )
{
    int i = 0;
    int length;
    // 計算陣列長度 
    while ( str[i] != '\0' )
        i++;
    length = i;
    for( i = 0; i < length; i++ )
        if ( *(str+i) > 64 && *(str+i) < 91 )
            *(str+i) = *(str+i) + 32;
}
