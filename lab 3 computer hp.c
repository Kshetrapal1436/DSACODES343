#include <stdio.h>
struct student {
    char brandName[50],hp;
    int ram,num,count;

} s[10];

int main() {
    int i;
    printf("Enter information of computers:\n");


    for (i = 0; i < 5; ++i) {
        s[i].num = i + 1;
        printf("\nFor num%d,\n", s[i].num);
        printf("Enter brand name: ");
        scanf("%s", s[i].brandName);
        printf("Enter ram: ");
        scanf("%f", &s[i].ram);
    }
    printf("Displaying Information:\n\n");


    for (i = 0; i < 5; ++i) {
        printf("\n num: %d\n", i + 1);
        printf("brandname: ");
        puts(s[i].brandName);
        printf("ram: %.1f", s[i].ram);
        printf("\n");
    }
    int count;
    count=0;
    for (i = 0; i < 5; ++i)
    {
    if(strcmp(s[i].brandName,"hp")==0)
    count++;
    }
    printf("count=%d\t",count);
    return 0;
}
