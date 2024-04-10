//wapt input n elements in an array using DMA find sum of all the elements of the array 

#include <stdio.h>
#include <stdlib.h>

int sum(int *,int);

int main(){

    int* ptr;
    int n;
 
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    ptr = (int*)malloc(n * sizeof(int));
    
    for(int i = 0;i<n;i++)
    	scanf("%d",(ptr + i));
    
    int res = sum(ptr,n);
    
    printf("The sum of the given array is: %d",res);
    
    return 0;
}

int sum(int *p, int n){
	if(n<0)
	return 0;
	
	return *(p + n - 1) + sum(p,n-1);
}
	
	
	
	
