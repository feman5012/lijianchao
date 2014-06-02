#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main (int argc, char* argv[]) 
{
	int i, j, cond;
	int i32_redball[10];

	memset(i32_redball, 0, sizeof(i32_redball));
	srand(time(NULL));

	i32_redball[0] = rand() % 33 + 1;
	
	for (i = 1; i < 10; ) 
	{
		i32_redball[i] = rand() % 33 + 1;
		
		for (cond = 0, j = 0; j < i; j++ ) 
		{
			if (i32_redball[i] == i32_redball[j])
			{
				cond = 1;
				break;	
			}
		}
		
		if (1 == cond) 
		{
			continue;
		}

		printf("  %2d", i32_redball[i]);
		i++;
	}

	printf("\n");

	return 0;
}
