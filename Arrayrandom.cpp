#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
void display(int num[5][6]);
void graph(int num[5][6]);


using namespace std;

int main()
{
 srand(time(NULL));
 int num[5][6] ;

 for(int i=0;i<5;i++)
 {

	 for(int j=0;j<6;j++)
	 {

		 num[i][j] = rand()%(9);

	 }
 }
display(num);
graph(num);
return 0;
}

void display(int num[5][6])
{
	for(int i=0;i<5;i++)
	{

		for(int j=0;j<6;j++){
			cout<<num[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

void graph(int num[5][6])
{
	cout<<"-------------- Display Graph  -----------------"<<endl;
	cout<<"      0     1       2       3       4       5"    <<endl;
	cout<<"-----------------------------------------------"<<endl;

	for(int i=0;i<5;i++){
		cout<<i<<"|";
		for(int j=0;j<6;j++){

	if (num[i][j]!=0)
	{
		cout<<"    *"<<"\t";
	}
	else {
	  cout<<"     " <<"\t";
	}
	}
	cout<<endl;
	}
	cout<<endl;
}
