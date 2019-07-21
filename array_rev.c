#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int i=0,arr[argc-1],j=1;
	for(i=0;i<argc-1;i++){
		arr[i]=atoi(argv[j]);
		j++;
	}
	int s=argc-2;

	for(i=0;i<s/2;i++){
		int temp=arr[i];
		arr[i]=arr[s-i];
		arr[s-i]=temp;
	}


	for(i=0;i<argc-1;i++)
		printf("%d ",arr[i]);
}
