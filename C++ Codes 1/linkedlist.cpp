#include<iostream>
using namespace std;
struct list
{
	int value;
	struct list* next;
};

main()
{
	struct list *head,*temp;
	char ch;
	do
	{
		int n;
		head = (struct list*)malloc(sizeof(struct list));
		cout<<"Enter value : ";
		cin>>n;
		head->value;
		head->next=NULL;
		cin>>ch;
	}while(ch!='n')
}
