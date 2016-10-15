#include<stdio.h>
void main(){
int ngay,thang,nam;
printf("Nhap so ngay:\n");
scanf("%d",&ngay);
nam=ngay/365;
thang=(ngay-nam*365)/30;
ngay=ngay-nam*365-thang*30;
printf("%d nam %d thang %d ngay",nam,thang,ngay);
}

