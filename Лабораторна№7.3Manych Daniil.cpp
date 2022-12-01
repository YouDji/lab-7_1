#include<time.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
using namespace std;
int main()
{
	system ("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, m, i , j ;
	double sum;
	srand (time(NULL));
	cout<<"Введите количество строчек   n =";
	cin>>n;
	cout<<"Введите количество столбцов m =";
	cin>>m;
	int mat[n][m];
	printf("Матрица mat(%d, %d): \n",n,m);
	for(i=0; i<n; i++)
	{
		for(j=0; j<m ; j++)
		{
			mat[i][j]= rand()%100;
			printf("%4d",mat[i][j]);
		}
		cout<<endl;
	}
	
		
			for(i=(i/2) ;i<m; i++)
	{
		for (j=(j/2); j<n; j++)
		{
			
	
					
			
			 mat[i][j]=0;
		}
	
}

      printf(" новая Матрица mat(%d, %d): \n",n,m);
		for(i=0; i<n; i++)
	{
		for(j=0; j<m ; j++)
		{
			printf("%4d",mat[i][j]);
		}
		cout<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;	
}
