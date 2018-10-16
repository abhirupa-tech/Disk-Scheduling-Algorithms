#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, min, j, head, item[20], dst[20];
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

    int count = n;

    printf("\n\nOrder of disk allocation is as follows:\n");
    while(count>0)
    {
        printf("\nDistance array:");
        for(i=0;i<n;i++)
        {
            if(item[i]==-1)
                continue;
            dst[i]=abs(head-item[i]);
            printf("%d ",dst[i]);
        }
        //Selection Sort to sort processes according to the distanes from the current head
        for(i=0;i<n;i++)
        {
            if(item[i]!= -1)
            {
                min=i;
                break;
            }
        }
        for(i=1;i<n;i++)
        {
            if(item[i]== -1)
                continue;
            if(dst[min]>dst[i])
                min=i;
        }
        printf("  min: %d ",min);
        cylinders+=dst[min];
        printf(" -> %d", item[min]);
        head=item[min];
        item[min]=-1;
        count--;
    }
    printf("\n\nCylinder movement: %d\n\n", cylinders );




}

