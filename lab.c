#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define max 20

typedef struct farmer
{
    char name[max];
    char type_of_loan[max];
    int amount;
    struct farmer *next;
}*node;


node front1=NULL;
node rear1=NULL;
node front2=NULL;
node rear2=NULL;

node getnode()
{
    node newnode;
    newnode=(node)malloc(sizeof(struct farmer));
    if(newnode==NULL)
    {
        printf("Memory error\n");
        return NULL;
    }

    scanf("%s%s%d",newnode->name,newnode->type_of_loan,&newnode->amount);
    newnode->next=NULL;
    return newnode;
}

void enqueue1(node newnode)
{
    if(rear1==NULL)
    {
        front1=rear1=newnode;
    }

    else
    {
        rear1->next=newnode;
        rear1=newnode;

    }
}

void enqueue2(node newnode)
{
    if(rear2==NULL)
    {
        front2=rear2=newnode;
    }

    else
    {
        rear2->next=newnode;
        rear2=newnode;

    }
}

void display1()
{
    node cur=front1;
    if(front1==NULL)
    {
        printf("Queue empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s\n%s\n%d\n",cur->name,cur->type_of_loan,cur->amount);
        cur=cur->next;
    }

}

void display2()
{
    node cur=front2;
    if(front2==NULL)
    {
        printf("Queue empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s\n%s\n%d\n",cur->name,cur->type_of_loan,cur->amount);
        cur=cur->next;
    }

}

int main(){
    node newnode;
    int n, shorta=0, longa=0,cnt=0;
    scanf("%d",&n);
    while(n--){
        newnode = getnode();
        if (strcmp(newnode->type_of_loan,"short")==0 && (newnode->amount < 50000))
        {
            shorta = newnode->amount + shorta;
            enqueue1(newnode);
            cnt++;
        }
        else if(strcmp(newnode->type_of_loan,"long")==0 && (newnode->amount < 100000)){
            longa = newnode->amount +longa;
            enqueue2(newnode);
            cnt++;
        }

    }
    display1();
    printf("%d",shorta);
    display2();
    printf("%d",longa);
    printf("%d",cnt);

}
