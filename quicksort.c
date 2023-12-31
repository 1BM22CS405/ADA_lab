#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 50
void quickSort(int[],int,int);
int partition(int a[],int low,int high);
void main()
{
    int clock_t,start_t,end_t,t;
    int i,array[MAX],low,size,high;
    double ts;
    printf("Enter the number of elements..\n");
    scanf("%d",&size);
    if(size<0)
    {
        printf("Give only positive number.\n");
        return;
    }
    printf("Enter the numbers.....\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    start_t=clock();
     for(int j=0;j<5000000;j++)
        t=900/900;
    quickSort(array,0,size-1);
    end_t=clock();
    ts=(double)(end_t-start_t)/CLOCKS_PER_SEC;
    printf("\n After sorting array elements are....\n");
    for(i=0;i<size;i++)
    printf("%d\t",array[i]);
    printf("\n Time taken to sort array is %0.2f\n",ts);
}
int partition(int a[],int low,int high)
{
    int i,j,temp,key;
    i=low+1;
    j=high;
    key=a[low];
    while(1)
    {
        while(i<high && key>=a[i])
        i++;
        while(key<a[j])
        j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            temp=a[low];
            a[low]=a[j];
            a[j]=temp;
            return j;
        }
    }
}
void quickSort(int a[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(a,low,high);
        quickSort(a,low,j-1);
        quickSort(a,j+1,high);
    }
}

