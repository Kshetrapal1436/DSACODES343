#include<stdio.h>
#include<math.h>
struct cell_phone
{
char company_name[10];
char model_name[10];
float price;
int ram;
};
struct cell_phone read(struct cell_phone);
void display(struct cell_phone);
main()
{
struct cell_phone c1,c2,c3;
int A;
printf("enter the first phone information");
c1=read(c1);
display(c1);
printf("enter the second phone information");
c2=read(c2);
display(c2);
printf("enter the third phone information");
c3=read(c3);
display(c3);
A=avg(c1.price,c2.price,c3.price);
printf("avg=%d",avg);

}
struct cell_phone read (struct cell_phone c)
{
printf("enter the company_name");
scanf("%s",c.company_name);
printf("enter the model_name");
scanf("%s",c.model_name);
printf("enter the price");
scanf("%f",&c.price);
printf("enter the ram ");
scanf("%d",&c.ram);
return c;
}
void display(struct cell_phone c)
{
printf("details of members|n");
printf("company_name=%s\n",c.company_name);
printf("model_name=%s\n",c.model_name);
printf("price=%f\n",c.price);
printf("ram=%d\n",c.ram);
}
int avg(int c1.price,int c2.price,int c3.price)
{
int sum;
int avg;
sum=c1.price+c2.price+c3.price;
avg=sum/3;
return avg ;
}

