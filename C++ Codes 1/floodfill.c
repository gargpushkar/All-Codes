#include<stdio.h>
#include<stdlib.h>

void fillpixel(int **, int,int,int,int);
void printMatrix(int **, int);

int main()
{
	int i,j,imagesize, fillcolor;
	int ** A;
	printf("Enter the size of the N x N image:\n");
	scanf("%d",&imagesize); 

	printf("Enter the pixel values in the image 0/1\n");
	A = (int **) malloc(imagesize*sizeof(int *));
	for(i=0;i<imagesize;i++)
	{
	A[i] = (int *) malloc(imagesize*sizeof(int ));
	for(j=0;j<imagesize;j++)
	scanf("%d",&A[i][j]);
	}
	//Enter a value greater than 1. The object will be filled with this value. 
	printf("Enter the color/value to be filled for the object\n");
	scanf("%d",&fillcolor);
	printf("Image before filling:\n");
	
	printMatrix(A, imagesize);

	fillpixel(A,imagesize,fillcolor,(imagesize/2),(imagesize/2));

	printf("Image after filling:\n");
	printMatrix(A, imagesize);
	return 0;
}

void fillpixel(int ** A, int imagesize, int fillcolor, int x,int y)
{
    if( x < 0 || y < 0 || x>imagesize-1 || y>imagesize -1 || A[x][y]!=1)
    {
        return;
    }
    else
    {
        A[x][y]=fillcolor;
        fillpixel(A,imagesize,fillcolor,x+1,y);
        fillpixel(A,imagesize,fillcolor,x,y+1);
        fillpixel(A,imagesize,fillcolor,x+1,y-1);
        fillpixel(A,imagesize,fillcolor,x-1,y+1);
        fillpixel(A,imagesize,fillcolor,x+1,y+1);
        fillpixel(A,imagesize,fillcolor,x-1,y-1);
        fillpixel(A,imagesize,fillcolor,x-1,y);
        fillpixel(A,imagesize,fillcolor,x,y-1);
    }
    return;
}

void printMatrix(int ** A, int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("%d ",A[i][j]);
	}
	printf("\n");
	}
}
