#include<stdio.h>
#include<Windows.h>

int partsort(int *arr,int low,int high){
	
	int i = low;
	int j = high;
	int base = arr[i]; //��¼����������ָ���ǵ�һ����163


	if(low<high){
		
		while(i<j){
			//�����ұߵ�����ʼ���ұȻ���С����
			while(arr[j]>=base&&i<j){
				//û���ҵ�һֱ����
				j--;

			}

			if(i<j){
			//���ұ��ҵ��Ȼ���С����,���ұ��Ǹ�����λ�ø�ֵΪ���
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
	printf("����������\n");

	//printf("λ��%d\n",index);
	for(int i=0;i<len;i++){
		
		printf("%d\t",arr[i]);
	
	}
	
	system("pause");
	return 0;
}