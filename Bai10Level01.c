#include<stdio.h>
void main(){
float soThuc;
int soNguyen;
printf("Nhap 1 so thuc:\n");
scanf("%f",&soThuc);
soNguyen=soThuc;
if(soThuc-soNguyen>=0.5)
    printf("So nguyen:%d",soNguyen+1);
else
    printf("So nguyen:%d",soNguyen);
}
