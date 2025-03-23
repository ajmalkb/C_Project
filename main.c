#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,total,count =0,avg,i=0,arr[100];
    FILE *f,*fh;
    f = fopen("F:\\Project_based_on_C\\Files\\test.csv","r");
    fh = fopen("F:\\Project_based_on_C\\Files\\test1.csv","w");
    if(f == NULL)
        {
       printf("Error! file is not exist");
        }
    printf("content: \n");
            int max;
            int min;

    while(fscanf(f,"%d",&a) == 1)
      {

        printf("%d\n",a);
        total+=a;
        ++count;

        if(a>max)
            {
                max = a;
            }
           if(a<min)
            {
                min = a;
            }

        if(a>95)
            {
        fprintf(fh,"%d\n",a);
            }
       }

       printf("max = %d\n",max);
        printf("min = %d\n",min);

avg = total/count;
printf("Total=%d\n",total);
printf("count=%d\n",count);
printf("Avg=%d\n",avg);

fclose(f);
  return 0;
 }
