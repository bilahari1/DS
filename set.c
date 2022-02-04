#include<stdio.h>
#include<stdlib.h>
void dif(int [],int [],int,int);
void equality(int [],int [],int,int);
void uni(int [],int [],int,int);
void intersection(int [],int [],int,int);
void main()
{
    int m,n,ch,cho=0;
    printf("Enter the size of two arrays ");
    scanf("%d%d",&m,&n);
    int a[m],b[n],c[m];
    printf("\nEnter first array\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the second array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    do
    {
    printf("\nMENU\n1.Union\n2.Intersection\n3.Difference\n4.Equality\nEnter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: uni(a,b,m,n);
                printf("\nDo you want to continue(0/1) ");
                scanf("%d",&cho);
                break;
        case 2: intersection(a,b,m,n);
                printf("\nDo you want to continue(0/1) ");
                scanf("%d",&cho);
                break;
        case 3: diff(a,b,m,n);
                printf("\nDo you want to continue(0/1) ");
                scanf("%d",&cho);
                break;
        case 4: equality(a,b,m,n);
                printf("\nDo you want to continue(0/1) ");
                scanf("%d",&cho);
                break;
        default: printf("\nWrong choice");
                 break;

    }
    }while(cho!=0);

    return 0;
}

void uni(int ar1[],int ar2[],int m,int n)
{
    int c[m];
    if(m!=n)
    {
        printf("\nArrays are not compatible for union ");
    }
    else
    {
        for(int i=0;i<m;i++)
        {
             c[i] = (ar1[i]||ar2[i]);
        }
        printf("\nResult\n");
        for(int i=0;i<m;i++)
        {
            printf("%d\t",c[i]);
        }
    }
}

void intersection(int ar1[],int ar2[],int m,int n)
{
    int c[m];
    if(m!=n)
    {
        printf("\nArrays are not compatible for intersection ");
    }
    else
    {
        for(int i=0;i<m;i++)
        {
             c[i] = (ar1[i]&&ar2[i]);
        }
        printf("\nResult\n");
        for(int i=0;i<m;i++)
        {
            printf("%d\t",c[i]);
        }
    }
}

void diff(int ar1[],int ar2[],int m,int n)
{
    int c[m],k[m];
    if(m!=n)
    {
        printf("\nSets are not compatible for difference ");
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            k[i]=!ar2[i];
        }
        for(int i=0;i<m;i++)
        {
             c[i] = (ar1[i]&&k[i]);
        }
        printf("\nResult\n");
        for(int i=0;i<m;i++)
        {
            printf("%d\t",c[i]);
        }
    }
}

void equality(int ar1[],int ar2[],int m,int n)
{
    int f=0;
    if(m!=n)
    {
        printf("\nSets are not compatible for equality ");
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            if(ar1[i]!=ar2[i])
            {
                f=1;
            }

        }
        if(f!=1)
        {
            printf("\n\Two sets are equal\n");
        }
        else
        {
            printf("\nTwo sets are not equal\n");
        }
    }
}

