#include<stdio.h>
void main(){
float r,pi,chuVi,dienTich;
pi=3.14;
printf("Nhap ban kinh duong tron: \n");
scanf("%f",&r);
chuVi=2*pi*r;
dienTich=pi*r*r;
printf("Chu vi: %.2f\nDien tich: %0.2f",chuVi,dienTich);
}
