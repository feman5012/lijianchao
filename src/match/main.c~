#include <stdio.h>

int match_string(const char* str, const char* regex) 
{
	if (NULL == str || NULL == regex) 
	{
		return -1;
	}

	while ('\0' != *regex && '\0' != *str) 
	{
		printf("r:%c, s:%c\n", *regex, *str);
		switch (*regex) 
		{
			case '*':
				if (*(regex+1) == *(str+1)) 
				{
					//printf("1\n");
					regex++;
					str++;
				}
				else 
				{
					str++;
				}
				break;

			case '?':
				{
					//printf("2\n");
					regex++;
					str++;
				} 
				break;

			default:
				{
					if (*regex == *str) 
					{
						//printf("3\n");
						regex++;
						str++;
					}
					else 
					{
						return -1;
					}
				}			
				break;
	
		}
	}
	
	printf("r:%c\n", *regex);

	if ('\0' != *regex) 
	{
		return -1;
	}

	return 0;
}

int main (int argc, char* argv[]) 
{

	//printf("%d\n", match_string("Hello world", "*"));
	printf("%d\n", match_string("", "*"));

	return 0;
}
