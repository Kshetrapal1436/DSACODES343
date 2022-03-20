#include<stdio.h>
struct cell_phone
{
 char name[20];
 int storage;
 int price;
 };
 struct cell_phone c1,c2,c3;

 main()
 {
  float avg;
  struct cell_phone c1={"honor",128,5000},c2={"redmi",120,10000},c3={"moto",64,15000};
  display(c1);
  display(c2);
  display(c3);
  avg=average(c1.price,c2.price,c3.price);
  printf("Average=%f",avg);
  }

  void display(struct cell_phone c)
  {
   printf("%s\n%d\n%d\n",c.name,c.storage,c.price);
   }

   int average(int c1,int c2,int c3)
   {
    int sum; float avg;
    sum=c1+c2+c3;
    avg=sum/3;
    }
