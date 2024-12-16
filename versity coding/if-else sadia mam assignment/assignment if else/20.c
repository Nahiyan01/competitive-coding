#include <stdio.h>
int main(){
	int x,y;
	printf("Enter the values for X and Y coordinate : ");
	scanf("%d %d",&x,&y);
	if( x > 0 && y > 0)
	  printf("The coordinate point (%d,%d) lies in the First Quadrant.\n",x,y);
	else if( x < 0 && y > 0)
	  printf("The coordinate point (%d,%d) lies in the Second Quadrant.\n",x,y);
	else if( x < 0 && y < 0)
	  printf("The coordinate point (%d, %d) lies in the Third Quadrant.\n",x,y);
	else if( x > 0 && y < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth Quadrant.\n",x,y);
	else if( x == 0 && y == 0)
	  printf("The coordinate point (%d,%d) lies at the center.\n",x,y);

return 0;}


