#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
int Versh; 
int Rebro; 
int p; 
printf("Enter the number of graph vertices: "); 
scanf("%d",&Versh); 
printf("Enter the number of graph edges: "); 
scanf("%d",&Rebro); 
p = 0.5*(Versh-1)*(Versh-2); 
if (Rebro>p) { 
printf ("Graph connected"); 
} 
if (Rebro<=p) { 
printf ("Graph not connected"); 
} 
return 0; 
}
