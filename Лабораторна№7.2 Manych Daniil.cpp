#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main ()
{
	system ("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int  j, n , m, i;
	srand(time(NULL));
	cout<<"Задайте количество строчек в матрице n= ";
	cin>>n;
	cout<<"Задайте количество столбиков в матрице m= ";
	cin>>m;
	int mat[n][m]; 
    int sum;
    sum=0;
	printf("Матрица mat(%d,%d): \n",n,m);
	for(i=0; i<n; i++)
	{
		
		for(j=0; j<m;j++ )
		{
			mat[i][j]=rand()%100-50;
			printf("%4d",mat[i][j]);
		}
		cout<<endl;
	}
	for (i=0; i<n; i++)
	{
		for(j=1+i; j<m ; j++)
		{
			if(i%2==0)
			if(i<=0|| j<=0)
			sum=sum+mat[i][j];
		 
		
		}
	}
	cout<<"Сума"<<sum<<endl;
	system("pause");
	return 0;
}
