
#include<stdio.h>
#include<string.h>
    typedef struct radio
{
          char name[20];
        int points;
} R;

void main()
{
          R r[50];
          int num,i,count=0;
          printf("Enter the at least 6 Number of participants:");
          scanf("%d",&num);
          if(num<6)
          {
              printf("Enter the at least 6 Number of participants");
              exit(0);
          }
          printf("\n");
          for(i=0;i<num;i++)
          {
                   printf("\nEnter participant %d Detail:\n",i+1);

                   printf("\nEnter the Name:\n");
                   scanf("%s",r[i].name);

                   printf("Enter the no. of points scored:\n");
                   scanf("%d",&r[i].points);
           }
           for(i=0;i<num;i++)
           {
                display(r,i);
           }
    sort (r,num);
    printf("\n 1st winner: ");
     displayy(r,1);
     printf("\n 2nd winner: ");
     displayy(r,num-1);
    printf("\n 3rd winner: ");
     displayy(r,0);
}
void display( R r[50],int i)
{
            printf("\n participant No.%d\n",i+1);
          printf("\t\t participant Name is=%s \n",r[i].name);
          printf("\t\t points scored is=%d\n",r[i].points);

                   printf("\n");
}
void displayy( R r[50],int i)
{
          printf("\t\t participant Name is=%s \n",r[i].name);
          printf("\t\t points scored is=%d\n",r[i].points);

                   printf("\n");
}
void sort(R r[],int n)
{
    int i,j;
    R o[50];
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (r[i].points < r[j].points )
                {
                    o[i]=r[i];
                    r[i]=r[j];
                    r[j]=o[i];

                }
            }
        }
}
