//Complete Binary Tree ---  Child Sum Property --- The data at each node is the sum of the data in its child nodes.
// 6 ...100...yes...50...50...25....25...50
#include<stdio.h>
#include<stdlib.h>

int * createCompleteBinaryTree(int n);
void printCompleteBinaryTree(int * tree, int n);
int isSumProperty(int * tree, int n);

int main()
{
	int n, * tree;
	printf("Enter the number of elements in the tree\n");
	scanf("%d",&n);
	tree = createCompleteBinaryTree(n);
	printCompleteBinaryTree(tree,n);
	if(isSumProperty(tree,n))
		printf("The tree satisfies the children sum property\n");
	else
		printf("The tree does not satisfy the children sum property\n");
	return 0;
}

int * createCompleteBinaryTree(int n)
{
	int i;
	int * tree = (int *) malloc(n*sizeof(int));
	printf("Enter the elements in the tree\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(tree+i));
	}
	return tree;
}


void printCompleteBinaryTree(int * tree, int n)
{
	int i;
	printf("The elements in the tree in level order are");
	for(i=0;i<n;i++)
		printf(" %d",*(tree+i));
	printf("\n");
}

int isSumProperty(int * tree, int n)
{
	int i;
	for(i=0;i<n/2;i++)
	{
	    if(tree[i] != tree[2*i+1]+tree[2*i+2])
	    {
	        return 0;
	    }
	}
	return 1;
}
