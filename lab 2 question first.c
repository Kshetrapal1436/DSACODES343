#include<stdio.h>
#include<math.h>
typedef struct book_details
{
    char name[100];//Name of book
    char a_name[100];//Author's name
    int isbn;
    float price;
}BOOK;

void read(BOOK *b,int n)
{
    printf("Enter Details\n\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter book name\n");
        scanf("%s",(b+i)->name);
        printf("Enter Author's name\n");
        scanf("%s",(b+i)->a_name);
        printf("Enter ISBN \n");
        scanf("%d",&(b+i)->isbn);
        printf("Price of book");
        scanf("%f",&(b+i)->price);
    }
}
void display(BOOK *b,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Name:%s\t\t",(b+i)->name);
        printf("Author:%s\t\t",(b+i)->a_name);
        printf("ISBN:%d\t\t",(b+i)->isbn);
        printf("Price:%f\n",(b+i)->price);
    }
}

void main()
{
    int n;
    printf("Enter number of Books\n");
    scanf("%d",&n);
    BOOK b[n];
    read(b,n);
    int isbnsearch;
    printf("ENTER ISBN TO SEARCH\n");
    scanf("%d",&isbnsearch);
    search(b,isbnsearch,n);
    avg(b,n);
    printf("All book details are:\n");
    display(b,n);
}

void search(BOOK *b,int isbnsearch,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(isbnsearch==(b+i)->isbn)
        {
            printf("Name:%s\tAuthor:%s\tISBN:%d\tPrice:%f\n",(b+i)->name,(b+i)->a_name,(b+i)->isbn,(b+i)->price);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Book with ISBN %d not found\n",isbnsearch);
}
void avg(BOOK *b, int n, float*avg)
{
    int i;
    int num,sum=0;
    for(i=0;i<num;i++)
    {
        sum=sum+(b+i)->price;
    }
     *avg= float(sum)/num;
}
