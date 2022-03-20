/* 4)*/
#include<stdio.h>
#include<conio.h>
int marks_avg();
void main()
{
    int m[10],i,avg,abv=0,blw=0;
    printf("enter the marks of students");
    for(i=0;i<10;i++)
    {
    scanf("%d",&m[i]);
    }
    avg=marks_avg();

    for(i=0;i<10;i++)
    {
       if(m[i]>=avg)
       {
        abv++;
       }
       printf("students who scored above average=%d\n",abv);
    }

    for(i=0;i<10;i++)
    {
       if (m[i]<avg)
      {
          blw++;
      }
      printf("students who scored below average=%d\n",blw);
    }
}

int marks_avg()
{
  float a[100], sum=0, avg;
 int i, n;

 /* Finding sum */
 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }

 /* Calculating average */
 avg = sum/n;

return avg;

}
