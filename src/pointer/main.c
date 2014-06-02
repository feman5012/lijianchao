#if 0
#include <stdio.h>

int j, k;
int *ptr;

int main (int argc, char* argv[]) 
{
    j = 1;
    k = 2;
    ptr = &k;
    printf("\n");

    printf("j has the value %d and is stored at %p\n", j, (void *)&j);
    printf("k has the value %d and is stored at %p\n", k, (void *)&k);
    printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);	

	return 0;
}
#endif

#if 0
#include <stdio.h>

int my_array[] = {1,23,17,4,-5,100};
int *ptr;

int main(void)
{
    int i;
    ptr = &my_array[0];     /* point our pointer to the first
                                      element of the array */
    printf("\n\n");
    for (i = 0; i < (sizeof(my_array)/sizeof(int)); i++)
    {
      printf("my_array[%d] = %d   ",i, my_array[i]);   /*<-- A */
      printf("ptr + %d = %d\n",i, *(ptr+i));        /*<-- B */
    }
    return 0;
}
#endif

#if 0
/* Program 3.1 from PTRTUT10.HTM   6/13/97 */

#include <stdio.h>

char strA[80] = "A string to be used for demonstration purposes";
char strB[80];


char *my_strcpy(char *destination, const char *source)
{
	// *source = ''X; /* assignment of read-only location ‘*source’ */
   
   char *p = destination;
   while (*source != '\0')
   {
       *p++ = *source++;
   }
   *p = '\0';
   return destination;
}   

int main(void)
{
	puts(my_strcpy(strB, strA));
#if 0
    char *pA;     /* a pointer to type character */
    char *pB;     /* another pointer to type character */
    puts(strA);   /* show string A */
    pA = strA;    /* point pA at string A */
    puts(pA);     /* show what pA is pointing to */
    pB = strB;    /* point pB at string B */
    putchar('\n');       /* move down one line on the screen */
    while(*pA != '\0')   /* line A (see text) */
    {
        *pB++ = *pA++;       /* line B (see text) */
    }
    *pB = '\0';      /* line C (see text) */
    puts(strB);          /* show strB on screen */
#endif
    return 0;
}
#endif

#if 0
/* Program 5.1 from PTRTUT10.HTM     6/13/97 */


#include <stdio.h>
#include <string.h>

struct tag {
    char lname[20];      /* last name */
    char fname[20];      /* first name */
    int age;             /* age */
    float rate;          /* e.g. 12.75 per hour */
};

struct tag my_struct;       /* declare the structure my_struct */

int main(void)
{
    strcpy(my_struct.lname,"Jensen");
    strcpy(my_struct.fname,"Ted");
    printf("\n%s ",my_struct.fname);
    printf("%s\n",my_struct.lname);
    return 0;
}
#endif

#if 0
/* Program 5.2 from PTRTUT10.HTM   6/13/97 */

#include <stdio.h>
#include <string.h>

typedef struct tag{                     /* the structure type */
    char lname[20];             /* last name */
    char fname[20];             /* first name */
    int age;                    /* age */
    float rate;                 /* e.g. 12.75 per hour */
} tag_T;

tag_T my_struct;           /* define the structure */
void show_name(tag_T* p);  /* function prototype */

int main(void)
{
    tag_T *st_ptr;         /* a pointer to a structure */
    st_ptr = &my_struct;        /* point the pointer to my_struct */
    strcpy(st_ptr->lname,"Jensen");
    strcpy(st_ptr->fname,"Ted");
    printf("\n%s ",st_ptr->lname);
    printf("%s\n",st_ptr->fname);
    st_ptr->age = 63;
    show_name(st_ptr);          /* pass the pointer */
    return 0;
}

void show_name(struct tag *p)
{
    printf("\n%s ", p->fname);  /* p points to a structure */
    printf("%s ", p->lname);
    printf("%d\n", p->age);
}
#endif


#if 0
/* Program 6.1 from PTRTUT10.HTM   6/13/97*/

#include <stdio.h>
#define ROWS 5
#define COLS 10

int multi[ROWS][COLS];

int main(void)
{
    int row, col;
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            *(*(multi+row)+col) = row * col;
        }
    }

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            printf("\n%d  ",multi[row][col]);
            printf("%d ",*(*(multi + row) + col));
        }
    }

    return 0;
}
#endif

#if 0
/* Program 9.1 from PTRTUT10.HTM  6/13/97 */

#include <stdio.h>
#include <stdlib.h>

#define COLS 5

int (*rptr)[COLS];

int main(void)
{
    int nrows = 10;
    int row, col;
    rptr = malloc(nrows * COLS * sizeof(int));
    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            rptr[row][col] = 17;
        }
    }

    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            printf("%d  ", rptr[row][col]);
        }
    }

	free(rptr);

    return 0;
}
#endif

#include <stdio.h>
#include <stdlib.h>

typedef void (*pfn_void)(void);

void printhw (void) 
{
	printf("hello world\n");
}

int main(void)
{
	pfn_void pfn_hw;
	pfn_hw = printhw;

	pfn_hw();

    return 0;
}






