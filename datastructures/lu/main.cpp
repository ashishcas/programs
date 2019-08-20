#include<iostream>
using namespace std;
int main()
{
float a[3][3],l[3][3],u[3][3];
float b[3],x[3],y[3];
int i,j,k,m;
float sum;
a[0][0]=2;
a[0][1]=1;
a[0][2]=0;
a[1][0]=1;
a[1][1]=2;
a[1][2]=1;
a[2][0]=0;
a[2][1]=1;
a[2][2]=1;
b[0]=1;
b[1]=2;
b[2]=4;
		for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	{
		u[i][j]=a[i][j];
		if(i==j)
		l[i][j]=1;
		else
		l[i][j]=0;

	}
	}
for(k=1;k<3;k++)
	{
	for(i=k;i<3;i++)
	{
	for(j=k;j<3;j++)
	{
		u[i][j]=u[i][j]-((u[i][k-1])/(u[k-1][k-1])*u[k-1][j]);
	}
	l[i][k-1]=u[i][k-1]/u[k-1][k-1];
 	}
	}
	for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	{
		cout<<u[i][j]<<" ";

	}cout<<endl;
	}cout<<endl;
		for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	{
		cout<<l[i][j]<<" ";

	}cout<<endl;
	}cout<<endl;
		for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	{
		cout<<a[i][j];

	}cout<<endl;
	}
	y[0]=b[0]/l[0][0];

	for (i=1;i<3;i++)
	{ sum=0;
		for(j=0;j<3;j++)
		{
		sum=sum+(l[i][j]*y[j]);
			}	y[i]=b[i]-sum;
		}	cout<<endl;
		cout<<y[0]<<y[1]<<y[2]<<endl;
x[2]=y[2]/u[2][2];
for (i=2;i>=0;i--)
	{ sum=0;
		for(j=i+1;j<3;j++)
		{
		sum=sum+u[i][j]*x[j];
		x[i]=(y[i]-sum)/u[i][i];
		cout<<endl;

			}
			}cout<<x[0]<<x[1]<<x[2]<<endl;

}


