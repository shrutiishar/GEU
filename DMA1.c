//wapt input n elements in an array using DMA and count the total the even and odd numbers 

#include <stdio.h>
#include <stdlib.h>

void count(int *,int);

int main(){

    int* ptr;
    int n;
 
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    ptr = (int*)malloc(n * sizeof(int)); 
   
    for(int i = 0;i<n;i++)
    	scanf("%d",(ptr + i));
    
    count(ptr,n-1);
    
    return 0;
}

void count(int *p, int n){
	static int o = 0;
	static int e = 0;
	
	if(n<0){
	printf("Number of odd elements are: %d\n",o);
	printf("Number of even elements are: %d\n",e);
	return;
	}
	
	if(*(p+n)%2 == 0)
	e++;
	else
	o++;
	
	count(p,n-1);
}
