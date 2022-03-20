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
    int i,j,o;
     for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (v[i].ram > v[j].ram )
                {
                    o =  v[i].ram;
                    v[i].ram =  v[j].ram;
                    v[j].ram = o;
                }
            }
        }
}
void display(struct compdetail v[],int i)
{
            printf("\nComputer No.%d\n",i+1);
          printf("\t\tComputer Name is=%s \n",v[i].name);
          printf("\t\tComputer bit is=%d\n",v[i].bit);
        printf("\t\tComputer ram is=%d \n",v[i].ram);
                   printf("\n");
}
void main()
{
          struct compdetail b[50];
          int num,i,v,count=0;
          printf("Enter the NUMBER of Computers:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
          {
                   printf("\ Enter Computer %d Detail:\n",i+1);

                   printf("\nEnter the COMPANY NAME:\n");
                   scanf("%s",b[i].name);

                   printf("Enter the BIT of computer:\n");
                   scanf("%d",&b[i].bit);

                   printf("Enter the RAM of computer:\n");
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
                    printf("no. of HP computers = %d",count);
                }
            }
             for(i=0;i<num;i++)
             {
                 if(b[i].bit==32)
                   display(b,i);
             }
}
