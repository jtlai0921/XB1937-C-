#include <iostream>

using namespace std;

int main()
{
	int i,j;
	int A[3][3] = {{1,3,5},{7,9,11},{13,15,17}};//二維陣列的宣告 
	int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};//二維陣列的宣告 
	int C[3][3] = {0};
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	    C[i][j]=A[i][j]+B[i][j];// 矩陣C=矩陣A+矩陣B 
	
    cout<<"矩陣A內容"<<endl; 
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<A[i][j]<<'\t';
		cout<<endl;
	}
    cout<<"矩陣B內容"<<endl; 
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<B[i][j]<<'\t';
		cout<<endl;
	}
	cout<<"[矩陣A和矩陣B相加的結果]"<<endl;	//印出A+B的內容
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<C[i][j]<<'\t';
		cout<<endl;
	}
	
	return 0;
}
