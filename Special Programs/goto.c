#include<stdio.h>
int main()
{
    int h,e,m,c,total,per;
   //  float per;
    hindi:printf("\nEnter marks of hindi:-");
          scanf("%d",&h);
          if (h>100)
            {
               printf("\nInvalid marks enter again.....");
               goto hindi;
            }
    english:printf("\nEnter marks of english:-");
            scanf("%d",&e);
            if(e>100)
            {
                printf("\nInvalid marks enter again.......");
                goto english;
            }
    math:printf("\nEnter marks of math:-");
         scanf("%d",&m);
         if(m>100)
         {
            printf("\nInvalid marks enter again.......");
            goto math;
         }        
    computer:printf("\nEnter marks of computer:-");
             scanf("%d",&c);
             if(c>100)
             {
                printf("\nInvalid marks enter again........");
                goto computer;
             }     
    total=h+e+m+c;
       printf("Total marks --> %d",total);
    per=total/4;
       printf("\nPercentage --> %d ",per);         
    if (per<35) 
        printf("\n Try Again.....");
    if (per>=35 && per<45)
        printf("\nBhai tu pass hogaya...");
    if (per>=45 && per<100)
        printf("\n\nCongratulations..... Bsss tu akele mat milanaa");      
    return 0;
}
