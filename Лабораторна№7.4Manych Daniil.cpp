#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
void gotoxy(int xpos, int ypos)
{COORD scrn;
HANDLE hOuput= GetStdHandle(STD_OUTPUT_HANDLE);
scrn.X = xpos; scrn.Y= ypos;
SetConsoleCursorPosition(hOuput,scrn);
}
int main()
{

system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
const int N=2 , M=2, H=4, g=7;
int i,j,k,sum , cub[N][M][H];
srand(time(NULL));
printf("Входная cub(%d,%d,%d):\n",N,M,H);
for(i=0;i<N; i++)
for(j=0; j<M; j++)
for(k=0; k<H; k++)
{
	sum=cub[i][j][k]= rand()%100-50;
	gotoxy(((j+k)*g+1),(((1+i)*M)-j));
	printf("%d",cub[i][j][k]);
}
gotoxy(0,N*M);
cout<<endl<<endl;
for(i=0; i<N; i++)
for(j=0; j<M; j++)
for(k=0; k<H; k++)
{
	sum+=cub[i][j][k]/8;
	if(cub[i][j][k]%2==0)
	cub[i][j][k]=0 ;
	
	
}
cout<<"SUM ="<<sum<<endl;
printf("Вихідна cub(%d, %d, %d): ", N,M,H);
for(i=0; i<N; i++)
for(j=0; j<M; j++)
for(k=0; k<H; k++)
{
	gotoxy(((j+k)*g+1),(((1+i)*M)-j)+M*N+2);
	printf("%d", cub[i][j][k]);
}
gotoxy(0,2*N*M+3);
system("pause");
return 0;

}
