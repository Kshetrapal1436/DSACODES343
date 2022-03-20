#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
    char name[20],author[20],company[20];
    int ISBN,price,edition;

};
typedef struct book bid;
void read(bid[],int);
void display(bid[],int);
void search(bid[],int);
void sorting(bid[],int);

void main()
{
    int n;
    bid b[30];
    printf("Enter total number of books:");
    scanf("%d",&n);
    read(b,n);



    sorting(b,n);
       printf("\n\n-After sorting according to isbn");
    display(b,n);
     search(b,n);
 average(b,n);




}

void read(bid b[],int n)
{
    printf("Enter book details:\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter  book name:");
        scanf("%s",b[i].name);
        printf("Enter the Author name:");
        scanf("%s",b[i].author);
        printf("Enter the publication company:");
        scanf("%s",b[i].company);
        printf("Enter the ISBN:");
        scanf("%d",&b[i].ISBN);
        printf("Enter the price:");
        scanf("%d",&b[i].price);

    }
}

void display(bid b[],int n)
{
    printf("\nBook details:\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\nBook name:%s",b[i].name);
        printf("\nAuthor name:%s",b[i].author);
        printf("\npublication company:%s",b[i].company);
        printf("\nISBN:%d",b[i].ISBN);
        printf("\n price:%d",b[i].price);

    }
}




void sorting(bid b[],int n)
{
    bid swap;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(b[j].ISBN>b[j+1].ISBN)
            {
                swap=b[j];
                b[j]=b[j+1];
                b[j+1]=swap;
            }
        }
    }
}
void search(bid b[],int n)
{
    int i,key;
    int c=0;
    printf("\nEnter the ISBN number to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==b[i].ISBN)
        {
        printf("\n\nBook name:%s",b[i].name);
        printf("\nAuthor name:%s",b[i].author);
        printf("\n publication company:%s",b[i].company);
        printf("\n ISBN:%d",b[i].ISBN);
        printf("\nprice:%d",b[i].price);
c++;
        }

    }
    if(c==n)
        printf("not found");
}


void average(bid b[],int n ){

int s,avg;
int i;
for(i=0;i<n;i++){
    s=s+b[i].price;

}
 avg=s/n;
int c=0;


    for(i=0;i<n;i++)
    {

        if(b[i].price>avg)
        {


        printf("\n\nbook greater than average-- \n\nBook name:%s",b[i].name);
        printf("\nAuthor name:%s",b[i].author);
        printf("\n publication company:%s",b[i].company);
        printf("\nISBN:%d",b[i].ISBN);
        printf("\n price:%d",b[i].price);

        c++;
        }

    }
            if(c==n)
            printf("Not found......");

}
