#include<stdio.h>

void main()
{  
   int a[]={-1,-2,-3},size,smax=-32768,max=-32768 ;
   size=sizeof(a)/sizeof(a[0]);
   for(int i=0;i<size;i++)
  {
    if(a[i]>max)
      {   smax=max;
          max=a[i];
      }
    else if(a[i]>smax && a[i]!=max)
            smax=a[i];

  }
printf("Max: %d , 2nd max: %d ",max,smax);

}