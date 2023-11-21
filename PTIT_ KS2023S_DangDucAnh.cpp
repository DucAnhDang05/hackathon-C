	#include<stdio.h>
	#include<stdlib.h>
	int main(){
		int elementNumber=0;
		int number[100];
		do{
			printf("\t\t\tMENU\t\t\n");
			printf("1. Nhap gia tri n phan tu cua mang\n");
			printf("2. In gia tri cac phan tu trong mang\n");
			printf("3. Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
			printf("4. In ra gia tri phan tu lon nhat va nho nhat trong mang\n");
			printf("5. Su dung thuat toan sap xep chen va sap xep mang tang dan\n");
			printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
			printf("7. Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan o sau\n");
			printf("8. Nhap gia tri m (tu ban phim), chen gia tri m vao mang, sap xep tang dan\n");
			printf("9. Thoat\n");
			int choice; 
			printf("Lua chon cua ban la: ");
			scanf("%d",&choice);
			int sum,estimatedNumber;
			int max,min;
			int updateNumber;
			int x=0;
			int n=0;
			int divisibleNumber[100];
			switch (choice){
				case 1:
					printf("Nhap so phan tu muon nhap: ");
					scanf("%d",&n);
					elementNumber+=n;
					for(int i=elementNumber-n;i<elementNumber;i++){
						printf("Nhap gia tri cua phan tu number[%d] = ",i);
						scanf("%d",&number[i]);
					}
					break;
				case 2:
					printf("Gia tri cac phan tu trong mang la:\n");
					for(int i=0;i<elementNumber;i++){
						printf("Number[%d] = %d \n",i,number[i]);
					}
					break;
				case 3:
					sum=0;
					for(int i=0;i<elementNumber;i++){
						if(number[i]%2==0&& number[i]%3==0){
							sum+=number[i];
						}
					}
					printf("Tong cac so chia het cho 2 va 3 la: %d\n",sum);
					break;
				case 4:
					max=number[0];
					min=number[0];
					for(int i=0;i<elementNumber;i++){
						max=(max<number[i])?number[i]:max;
						min=(min>number[i])?number[i]:min;
					}
					printf("Gia tri lon nhat la: %d\n",max);
					printf("Gia tri nho nhat la: %d\n",min);
					break;
				case 5:
					for(int i=0;i<elementNumber;i++){
						int key =number[i];
						int j=i-1;
						while(j>=0 && number[j]>key){
							number[j+1]=number[j];
							j=j-1;
						}
						number[j+1]=key;
					}
					printf("Sap xep mang tang dan: \n");
					for(int i=0;i<elementNumber;i++){
						printf("%d\t",number[i]);
					}
					printf("\n");
					break;
				case 6:
					estimatedNumber=0;
					sum=0;
					for(int i=0;i<elementNumber;i++){
						for(int j=2;j<(number[i]/2);j++){
							if(number[i]%j==0){
								estimatedNumber++;
							}
						}
						if(estimatedNumber==0){
						sum+=number[i];
						}
					}
					printf("Tong cac so nguyen to = %d",sum);
					break;
				case 7:
					n=0;
					for(int i=0;i<elementNumber-1;i++){
						for(int j=i+1;j<elementNumber;j++){
							if(number[i] > number[j]){
								int temp=number[i];
								number[i]=number[j];
								number[j]=temp;
							}
						}
					}
					for(int i=0;i<elementNumber;i++){
						if(number[i]%5==0){
							n++;
							divisibleNumber[i]=number[i];
						}
					}
					for(int i=0;i<n;i++){
						if(divisibleNumber[i]%2!=0){
							printf("%d\t",divisibleNumber[i]);
						}
					}
					printf("\n");
					for(int i=0;i<n;i++){
						if(divisibleNumber[i]%2==0){
							printf("%d\t",divisibleNumber[i]);
						}
					}
					printf("\n");
				break;
				case 8:
					printf("Nhap so can chen: ");
					scanf("%d",&updateNumber);
					number[elementNumber]=updateNumber;
					elementNumber++;
					for(int i=0;i<elementNumber;i++){
						for(int j=i+1;j<elementNumber;j++){
							if(number[i]>number[j]){
								int temp=number[i];
								number[i]=number[j];
								number[j]=temp;
							}
						}
					}
					for(int i=0;i<elementNumber;i++){
						printf("%d\n",number[i]);
					}
				break;
				case 9:
					exit(0);
				default:
					printf("Khong hop le");
			}
		}while(1==1);
	}
