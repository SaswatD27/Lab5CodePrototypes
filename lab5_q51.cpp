//include the libraries
#include<iostream>
#include<math.h>
using namespace std;
//write the main function
int main()
{
	//declare an int variable to store the no. and input the no., and create a int value to store the input value for future reference
	int n;
	cout<<"Input a number (positive integer) - ";
	cin>>n;
	int nref=n;
	//declare an int array to store the digits of the inputted no. and the no. of digits and using loops, obtain the digits, and no. of digits of the no.
	int A[15],nod=0,div;
	for(div=1;n/div!=0;div*=10)
	{
		nod++;
	}
	cout<<"No. of digits = "<<nod;
	int i;
	for(i=0,div=pow(10,nod);i<nod;i++,div/=10)
	{
		A[i]=n/div;
		n=n%div;
	}
	//check whether the sum of the cubes of the digits of the no. is equal to the no., itself, if yes, then respond in the affirmative, otherwise, in the negative
	int sumn;
	for(sumn=0,i=0;i<nod;i++)
	{
		sumn+=pow(A[i],3);
	}
	if(sumn==nref)
	cout<<nref<<" is an Armstrong no..";
	else
	cout<<nref<<" is not an Armstrong no..";
	//adios
	return 0;
}
