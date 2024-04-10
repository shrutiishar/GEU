//develop a program to define ,assign, read and display book details, bank account information , employee info

#include <stdio.h>

int main(){
	
	struct book{
		int book_id;
		char book_name[300];
		};
	
	struct book s1[100];
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
	scanf("%d",&s1[i].book_id);
	gets(s1[i].book_name);
	}
	
	for(int i = 0;i<n;i++)
	{
		printf("%d %s",s1[i].book_id, s1[i].book_name);
		printf(" \n");
	}
	
	return 0;
	}
