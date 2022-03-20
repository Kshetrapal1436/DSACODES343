#include<stdio.h>
struct Books
{
    char book_name[20];
    char author_name[20];
    int price;
    int isbn;

};
struct Books read(struct Books *p,int n)
{
    int i;
    for(i=0; i<n; i++)
        {
            printf("Enter details of %d book\n",i+1);

            printf("enter BOOK NAME\n");
            scanf("%s",(p+i)->book_name);
            printf("AUTHOR NAME name\n");
            scanf("%s",(p+i)->author_name);
            printf("enter ISBN NO\n");
            scanf("%d",&(p+i)->isbn);
            printf("enter COST\n");
            scanf("%d",&(p+i)->price);
        }

}
void display(struct Books *p,int n)
{
    int i;
    for(i=0; i<n; i++)
        {
            printf("Details of %d book entered are\n",i+1);

            printf("%s BOOK NAME\n",(p+i)->book_name);
            printf("%s AUTHOR NAME\n",(p+i)->author_name);
            printf("%d ISBN\n",(p+i)->isbn);
            printf("%d COST\n",(p+i)->price);
        }
}
void search(struct Books *p,int n)
{
    int i,a;
    printf("Enter ISBN NO\n");
    scanf("%d",&a);


    for(i=0; i<n; i++)
        {
            if((p+i)->isbn==a)
                {


                    printf("Book found and details are:\n");

                    printf("%s BOOK NAME\n",(p+i)->book_name);
                    printf("%s AUTHOR NAME\n",(p+i)->author_name);
                    printf("%d ISBN\n",(p+i)->isbn);
                    printf("%d PRICE\n",(p+i)->price);
                }
            else
                printf("Book not GOT\n");
        }

}
void average(struct Books *p,int n)
{
    float a=0,d;
    int i;
    for(i=0; i<n; i++)
        {
            a=a+(p+i)->price;
        }
        d=a/n;
    printf("Average=%0.2f\n",d);


        for(i=0; i<n; i++)
        {
            if((p+i)->price>d)
                {


                    printf("Book details above avg :\n");

                    printf("%s book name\n",(p+i)->book_name);
                    printf("%s author name\n",(p+i)->author_name);
                    printf("%d isbn\n",(p+i)->isbn);
                    printf("%d price\n",(p+i)->price);
                }
}
}
main()
{
    float avg;
    int n;
    struct Books *p, p1[100];
    p=&p1[100];
    printf("Enter no.of books\n");
    scanf("%d",&n);
    read(p,n);
    display(p,n);
    search(p,n);
    average(p,n);


}
