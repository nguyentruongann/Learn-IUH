#include <stdio.h>
#include <string.h>
void biendoi(char a[]);
int main(){
	char a[100];
	printf("nhap chuoi a:"); gets(a);
	biendoi(a);
	puts(a);
	//printf("%s", a);
	return 0;
}
void biendoi(char a[]){
	size_t log=strlen(a);
	for(int i=0;i<log;i++){
		if(a[i]<=122&&a[i]>=97){
			a[i]=a[i]-32;
		}
	}
	
}
