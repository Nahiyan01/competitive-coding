
#include <stdio.h>
#define pi 3.14
int main ()
{
      int user,r,l,w,b,h;
      float area;
      printf("Input 1 for area of circle\n");
      printf("Input 2 for area of rectangle\n");
      printf("Input 3 for area of triangle\n");
      printf("Input your catagory: ");
      scanf("%d",&user);
      switch(user)
      {
           case 1:
                 printf("Input radious of the circle : ");
                 scanf("%d",&r);
                 area=pi*r*r;
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  break;
            case 3:
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&b,&h);
                  area=.5*b*h;
                  break;
          }
          printf("The area is : %f\n",area);
return 0;}
