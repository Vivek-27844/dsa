//Recursive function in c to solve tower of hanoi problem

#include <stdio.h>

//creating a function tower of hanoi(toh)
void toh(int n, char *from_rod, char *to_rod, char *aux_rod);
//the n represents number of disks.
//from_rod is the rod where all the rings stay initially.
//to_rod is the rod where all the rings end up staying.
//aux_rod is used for ring movements during process.

int main(void)
{
	int n;
	printf("enter number of rings: \n");
	scanf("%d", &n);
	toh(n,"A", "B", "C"); // A,B,C are rods and this moves all rings from rod A to rod B
	return 0;
}

void toh(int n, char *from_rod, char *to_rod, char *aux_rod)
{
	if (n == 0)
	{
		return;
	}
	toh(n-1, from_rod ,aux_rod, to_rod);
	printf("move ring %i from %s to %s \n",n,from_rod, to_rod);
	toh(n-1, aux_rod, to_rod, from_rod);
}


