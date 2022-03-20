#include<stdio.h>
#include<string.h>
struct compdetail
{
        char name[20];
        int bit;
          int ram;
};
void sort(struct compdetail v[],int n)
{
    int i,j;
    struct compdetail t[50];
    char s[10];
    int b;
     for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (v[i].ram > v[j].ram )
                {
                    t[i]=v[i];
                    v[i]=v[j];
                    v[j]=t[i];

                }
            }
        }
}
void display(struct compdetail v[],int i)
{
            printf("\nwrite the number of computers.%d\n",i+1);
          printf("\t\tComputer company is=%s \n",v[i].name);
          printf("\t\tComputer BIt is=%d\n",v[i].bit);
        printf("\t\tComputer ram is=%d \n",v[i].ram);
                   printf("\n");
}
void main()
{
          struct compdetail b[50];
          int num,i,v,count=0;
          printf("Enter the No of Computers:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
          {
                   printf("\ Enter Computer %d Detail:\n",i+1);

                   printf("\nEnter the company  Name:\n");
                   scanf("%s",b[i].name);

                   printf("Enter the processor of computer:\n");
                   scanf("%d",&b[i].bit);

                   printf("Enter the ram of computer:\n");
                   scanf("%d",&b[i].ram);
          }
           for(i=0;i<num;i++)
           {
                display(b,i);
           }
          printf("\nAfter sorting:\n");
           sort(b,num);
            for(i=0;i<num;i++)
           {
                display(b,i);
           }
             char str[]="hp";
            for(i=0;i<num;i++)
            {
                v=strcmp(b[i].name,str);
                if(v==0)
                {
                    count++;
                    printf("no. of hp computers = %d",count);
                }
            }

            printf("the 32 bit comps are\n");
             for(i=0;i<num;i++)
             {
                 if(b[i].bit==32)
                   display(b,i);
             }
}
