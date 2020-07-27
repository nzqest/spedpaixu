#include<stdio.h>
#include<Windows.h>

int partsort(int *arr,int low,int high){
	
	int i = low;
	int j = high;
	int base = arr[i]; //记录基数，这里指的是第一个数163


	if(low<high){
		
		while(i<j){
			//从最右边的数开始，找比基数小的数
			while(arr[j]>=base&&i<j){
				//没有找到一直遍历
				j--;

			}

			if(i<j){
			//从右边找到比基数小的数,把右边那个数的位置赋值为这个
				arr[i++] = arr[j];
			
			}
		
			while(arr[i]<base&&i<j){
				i++;
			
			}

			if(i<j){
				arr[j--]=arr[i];
			}

			}


		arr [i] = base;
	
	
	}

	return i;

}

void mesort(int *arr,int low,int high){

	if(low<high){
		

		int index = partsort(arr,low,high);
		mesort(arr,low,index-1);
		mesort(arr,index+1,high);

	

	
	}

	}






int main(void){
	int arr[] = {163, 161, 158, 165, 171, 170, 163, 159, 162};

	int len = sizeof(arr)/sizeof(arr[0]);


	//int index = partsort(arr,0,len-1);
	mesort(arr,0,len-1);
	printf("排序后的数组\n");

	//printf("位置%d\n",index);
	for(int i=0;i<len;i++){
		
		printf("%d\t",arr[i]);
	
	}
	
	system("pause");
	return 0;
}