#include<stdio.h>
#include<stdlib.h>
typedef struct employ
{
    char employ name[100];
    int transaction id;
    char department[100];
    struct employ *next;
};
typedef struct employ *NODE;
NODE getnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct employ));
    if(newn==NULL)
    {
        printf("\nLIST NOT CREATED\n");
        return;
    }
    newn->next=NULL;
        return newn;
}
NODE read()
{
    NODE temp;
    temp= getnode();
    printf("ENTER THE NAME, TRANSACTION ID, department\n");
    scanf("%s%d%s", temp->name, &temp->transaction, &temp->department);
    return temp;
}
NODE insert_end(NODE head)
{
    NODE newn,cur;
	newn=read();
		newn ->next = NULL;
	if(head==NULL)
	  return newn;
	cur=head;
	while(cur->next !=NULL)
	{
		cur=cur->next;
	}
	cur->next = newn;
	return head;

}
NODE insert_front(NODE head)
{
    NODE newn;
	newn=read();
	newn->next = NULL;
	if(head==NULL)
	  return newn;
	newn->next = head;
	head=newn;
	return head;
}

void display(NODE head)
{
    NODE cur;
     if(head==NULL)
    {
        printf("\nTHE LIST IS EMPTY!\n");
        return;
    }
    cur=head;
    printf("name\tTRANSACTION ID\tdepartment\n");
    while(cur!=NULL)
	{
		printf("%s\t%d\t\t%s\n",cur->name,cur->transaction,cur->department);
		cur= cur->next;
	}
	printf("\n");

}



}
int main()
{
    int n;
    NODE head=NULL;
    while(1)
    {
        printf("Enter your choice \n1.INSERT FRONT\n2.INSERT END\n3.DISPLAY\n4.SEARCH\n5.STOP\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                head=insert_end(head);
                break;
            case 2:
                head=insert_front(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                search(head);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid option\n");

        }
    }
}
