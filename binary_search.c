#include<stdio.h>
#include<stdlib.h>


int bin(int arr[],int in,int s,int n){
	int start=in,last=s-1;
	int mid=(start+last)/2;

	while(start<=last){
		int mid=(start+last)/2;
		if(arr[mid]==n){
			return mid;
		}

		if(arr[mid]>n){
			last=mid-1;
		}

		if(arr[mid]<n){
			start=mid+1;
		}
	}
}


int main(int argc,char *argv[]){
	int i,j=1,n;
	int arr[argc-1];
	for(i=0;i<argc-1;i++){
		arr[i]=atoi(argv[j]);
		j++;
	}

	int size=argc-1;
	n=5;

	//scanf("%d",&n);

	int result=bin(arr,0,size,n);
	printf("position  of 5 is %d",result);
	return 0;
}
