#include<stdio.h>
void  main()
{
	// variable declaration
	
	int phy, che, mat, eng, tot;
	
	//intialization
	phy=80;
	che=90;
	mat=86;
	eng=92;
	
	//calculations
	tot=phy+che+mat+eng;
	
	//output
	printf("marks in physics: %d\n", phy);
	printf("marks in cheistry: %d\n", che);
	printf("marks in maths: %d\n", mat);
	printf("marks in english: %d\n", eng);
	printf("total marks: %d", tot);
	
}
