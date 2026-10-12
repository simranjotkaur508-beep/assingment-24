#include<stdio.h>
int  triangle(int i, int j)
{

    for(int i;i<=5;i++)
    {
        for ( int j;j<=5;j++)
        if(j>=5-i && j<=4+1)
        {
            printf("*");
        }

        else
        {
            printf(" ");
        
        }
        printf("\n");
    }
}

int main()

{
   int i=1,j=1;
   return 0;

}