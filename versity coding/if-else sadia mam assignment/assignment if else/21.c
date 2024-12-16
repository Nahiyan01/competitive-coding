#include <stdio.h>
int main()
{  int phy,che,math,total,map;
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&math);
   printf("Input the marks obtained in Physics :");
   scanf("%d",&phy);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&che);
   total = phy+che+math;
   map = phy+math;
   printf("Total marks of Maths, Physics and Chemistry : %d\n",total);
   printf("Total marks of Maths and  Physics : %d\n",map);

   if (math>=65)
         if(phy>=55)
             if(che>=50)
	        if((total)>=190||(map)>=140)
	           printf("The  candidate is eligible for admission.\n");
	        else
	          printf("The candidate is not eligible.\n");
             else
	    printf("The candidate is not eligible.\n");
         else
	   printf("The candidate is not eligible.\n");
    else
     printf("The candidate is not eligible.\n");
}
