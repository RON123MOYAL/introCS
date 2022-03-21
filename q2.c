#include <stdio.h>


int find_bits(unsigned long x, unsigned long y);


int main()
{
	unsigned long x,y;
	int res;
	printf("Hi, please enter a number: ");
	scanf("%lu",&x);
	/*scanf("%lo",&x);*/

	
	printf("please enter another number: ");
	scanf("%lu",&y);

	printf("the first number is: %lu\n",x);
	printf("the second number is: %lu\n",y);

	res = find_bits(x,y);
	printf("there are: %d bites that are on in %lu and %lu\n", res,x,y);

	return 0;
}



int find_bits(unsigned long x, unsigned long y)
{
	int i,len = sizeof(int) * 8; /*- multiply by 8 to get the number of bits*/
	int count;
	for (i = 0, count = 0; i< len; ++i, x>>=1, y>>=1)
	{
		if ( (x&01) == 1 && (y&01) == 1)	
		{
			printf("\nboth bits in index: %d is on (2^%d)",i,i);
			count++;
		}
	}
	printf("\nres: ");
	return count;
}


