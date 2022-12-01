#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n=20;
	int a[n];
	int i;
	int sum;
	srand(time(NULL));
	for(i=0; i<n; i++)
	{
		a[i]=rand()%100;
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		
	}
	 cout<<"Сформований масив А["<<n<<"] = "<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	 cout<<"Сума парних елементів ="<<sum<<endl;
	 
	system ("pause ");
	return 0 ;
}

