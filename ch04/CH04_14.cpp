#include <iostream>							
using namespace std;
		
int main()
{
    int year=0;	 
    //�ŧi����ܼ�
    cout<<"�п�J�褸�~:";
    cin>>year;  //��J�褸�~ 
	
    if(year % 4 !=0)	 //�p�Gyear���O4������
        cout<<year<<"�~���O��~�C"<<endl; //�h���year���O��~
    else if(year % 100 ==0)  //�p�Gyear�O100������
    {
        if(year % 400 ==0)      //�Byear�O400������
            cout<<year<<"�~�O��~�C"<<endl; 
            //���year�O��~
        else      /*�_�h*/
            cout<<year<<"�~���O��~�C"<<endl; 
            //�h���year���O��~
    }	
    else  //�_�h
    cout<<year<<"�~�O��~�C"<<endl; //�h���year�O��~
    
    return 0;
}
