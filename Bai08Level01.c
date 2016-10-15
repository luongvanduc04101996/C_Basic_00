#include<stdio.h>
void main(){
int giay,gio,phut;
printf("Nhap giay:\n");
scanf("%d",&giay);
gio=giay/(60*60);
phut=(giay-gio*60*60)/60;
giay=giay-gio*60*60-phut*60;
printf("%d gio %d phut %d giay",gio,phut,giay);
}
