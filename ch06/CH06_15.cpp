#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
void Swap(int*,int*);
void push(int statck[],int MAX,int val);
int pop(int stack[]);
int top=-1;
int main(void)
{  
	int card[52],stack[52]={0};
	int i,j,k=0;
	char ascVal;
	int style;
	srand((unsigned)time(NULL));
	for (i=0;i<52;i++)
		card[i]=i+1;
	cout<<"[�~�P��...�еy��!]"<<endl;
	while(k<30)
	{
		for(i=0;i<51;i++)
			for(j=i+1;j<52;j++)
				if(rand()%52==2)
					Swap(&card[i],&card[j]);//�~�P
		k++;
	}
	i=0;
	while(i!=52)
	{
		push(stack,52,card[i]);//�N52�i�P���J���|
		i++;
	}
	cout<<"[�f�ɰw�o�P]"<<endl;
	cout<<"[��ܦU�a�P�l]"<<endl;
 	cout<<" �F�a\t �_�a\t ��a\t �n�a"<<endl;
	cout<<"================================="<<endl;
	while (top >=0)
	{  
		style = stack[top]/13;//�p��P�l���
		switch(style)		//�P�l���ϥܹ���
		{
			case 0:			//����
				ascVal=5;
				break;
			case 1:			//���
				ascVal=4;
				break;
			case 2:			//����
				ascVal=3;
				break;
			case 3:			//�®�
				ascVal=6;
				break;
		}
		cout<<"["<<ascVal<<setw(3)<<stack[top]%13+1<<"] \t";
		if(top%4==0)
			cout<<endl;
		top--;
	}
	      
    return 0;
}
void push(int stack[],int MAX,int val)
{
    if(top>=MAX-1)
        cout<<"[���|�w�g���F]"<<endl;
    else
    {
        top++;
        stack[top]=val;
    }
}
int pop(int stack[])
{
    if(top<0)
        cout<<"[���|�w�g�ŤF]"<<endl;
    else
        top--;
    return stack[top];
}
void Swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
