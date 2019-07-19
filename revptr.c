#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[]){
	int i=0,c=0,j=1;
	int arr[argc-1];
	for(i=0;i<argc-1;i++){
		arr[i]=atoi(argv[j]);
		j++;
	}

	int *ptr=&arr[argc-2];
	for(i=0;i<5;i++){
		printf("%d \n",*(ptr-i));
	}
return 0;
}
