#include <iostream>

using namespace std;
char* Strcat(char*, char*);   //�r��걵��ƭ쫬�ŧi 

int main( void )
{
    char str1[80];
    char str2[80];

    printf( "�п�J�@�^��r��G" );
    cin>>str1;
    printf( "�п�J�@�걵�r��G" );
    cin>>str2;
    printf( "�r��걵�G%s\n", Strcat(str1, str2) );
    

    return 0;
}
//�޼ơGstr1�Pstr2�걵      
//�Ǧ^�ȡG�Ǧ^�걵���Gstr1   
char* Strcat(char* str1, char* str2)//�Ǧ^�Ȭ��r����� 
{
    int i = 0;
    int j = 0;

    while ( *(str1+i) != '\0' )  //�M��str1�������r��'\0'��m 
        i++;
    while ( *(str2+j) != '\0' )
    {
        *(str1+i+j) = *(str2+j);//str1�r��}�v�l�v�r���걵 
        j++;
    }

    *(str1+i+j) = '\0';    //�O�o�[�W�Ŧr�� 

    return str1;
}
