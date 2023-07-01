#include<stdio.h>
void tower(int,int,int,int);

int main()
{
    int n,A=1,B=2,C=3;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    tower(n,A,B,C);
    return 0;
}
void tower(int k,int x,int y,int z)
{
    if (k==1)
    {
        printf("%d->%d\n",x,z);
    }
    else
    {
        tower(k-1,x,z,y);
        printf("%d->%d\n",x,z);
        tower(k-1,y,x,z);
    }    
}