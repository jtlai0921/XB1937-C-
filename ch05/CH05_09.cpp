#include <iostream>
#include <iomanip>

using namespace std;
int main( )
{
	int data[6]={6,5,9,7,2,8};	// ��l��� 
	cout<<"��w�ƧǪk�G\n��l��Ƭ��G";
	for (int i=0;i<6;i++)
		cout<<setw(3)<<data[i];
	cout<<endl;

	for (int i=5;i>0;i--)// ���˦��� 
	{
		for (int j=0;j<i;j++)//����B�洫����
		{
			if (data[j]>data[j+1])// ����۾F��ơA�p�Ĥ@�Ƹ��j�h�洫 
			{
				int tmp;
				tmp=data[j];
				data[j]=data[j+1];
				data[j+1]=tmp;
			}
		}
		cout<<"�� "<<6-i<<" ���Ƨǫ᪺���G�O�G"; //��U�����y�᪺���G�L�X
		for (int j=0;j<6;j++)
			cout<<setw(3)<<data[j];
		cout<<endl;
	}
	cout<<"�Ƨǫᵲ�G���G";
	
	for (int i=0;i<6;i++)
		cout<<setw(3)<<data[i];
	cout<<endl;
	
	return 0;
}
