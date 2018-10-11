#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, j, head, item[20];
    int cylinders=0;
    printf("Enter no. of locations:");
    scanf("%d",&n);
    printf("Enter position of head:");
    scanf("%d",&head);
    printf("Enter elements of disk queue:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&item[i]);
    }
    printf("\n\nOrder of disk allocation is as follows:\n");
    for(i=0;i<n;i++)
    {
        printf(" -> %d", item[i]);
        cylinders+= abs(head-item[i]);
        head=item[i];
    }

    printf("\n\nCylinder movement: %d\n\n", cylinders );




}
