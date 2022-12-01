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
	int n, m, i , j, sum1, sum2 , sum3  ;
	int n2, m2;
	double sum;
	srand (time(NULL));
	cout<<"Введите количество строчек   n =";
	cin>>n;
	cout<<"Введите количество столбцов m =";
	cin>>m;
	n2=n/2;
	m2=m/2;
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
	sum1=1;
	sum2=1;
	if 	(n%2!=0) n2++;
	if 	(m%2!=0) m2++;
	for(i=0;i<n2; i++)
	{
		for (j=0; j<m2; j++)
		if (i%2==1);
        if (j%2==1);
		{
			sum1 +=j+i;
		}
	}	
	if 	(n%2!=0) n2--;
	if 	(m%2!=0) m2--;
	for(i=n2 ;i<n; i++)
	{
		for (j=m2; j<m; j++)
		if (i%2==1);
        if (j%2==1);
		{
		sum2 +=j+i;
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
	sum3= sum1+sum2 ;
	cout<<" Sum ="<<sum3<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
