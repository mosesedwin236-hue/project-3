#include <stdio.h> 
#include<math.h> 

int main(){


float radius,height ;
float volume,surfacearea;
const float PI= 3.142;


printf("Enter the radius of the cylinder \t");
scanf("%f, & radius");

printf("Enter the height of the cylinder \t");
scanf("%f,& height");

volume= PI *radius * radius * height;

surfacearea = 2 * PI * radius * radius + 2 * PI *radius * height;

printf("\n volume of the cylinder= %f \n,volume");
printf("Surface area of the cyinder=%f \n,surface area");



return 0;

	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

