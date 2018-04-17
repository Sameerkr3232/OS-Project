#include<stdio.h>
#define CurrententRequest 143

int abs(int number)
{
    return number>0?number:(number*-1);
}
int main()
{
    int queue[] = {86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130},i,dist=0,last = CurrententRequest;

    for(i=0; i<(sizeof(queue)/sizeof(queue[0]));i++)
    {
    	int Current = queue[i];
    	printf("Last : %4d | Current : %4d | dist : %4d\n",last,Current,abs(last - Current));
    	dist+= abs(last - Current);
    	last = Current;
    }

    printf("\nDistance is  : %d\n",dist);

    return 0
}
