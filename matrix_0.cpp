#include<string.h>
#include<iostream>

using namespace std;

int main()
{
	int mat[3][3] = {{1,2,3,},{4,0,5},{6,7,8}};
	int i,j;
	
	cout<<" original Matrix is : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
	int row[3] = {0,0,0};
	int column[3] = {0,0,0};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[i][j]==0)
			{
				row[i] = 1;
				column[j] = 1;
			}
		}
	}
	
	cout<<"Row is : ";
	for(i=0;i<3;i++)
		cout<<row[i]<<" ";
	cout<<"Column is : ";
	for(i=0;i<3;i++)
		cout<<column[i]<<" ";
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(row[i] || column[j])
				mat[i][j]=0;
		}
	}
	
	cout<<" new Matrix is : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}
