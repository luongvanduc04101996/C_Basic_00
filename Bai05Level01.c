#include<stdio.h>
void main(){
int dayNho,dayLon,canhBenMot,canhBenHai,chieuCao,chuVi;
float dienTich;
printf("Nhap theo thu tu day nho, day lon, 2 canh ben va chieu cao:\n");
scanf("%d%d%d%d%d",&dayNho,&dayLon,&canhBenHai,&canhBenMot,&chieuCao);
chuVi=dayLon+dayNho+canhBenHai+canhBenMot;
dienTich=chieuCao*(dayNho+dayLon)/2;
printf("Chu vi:%d\nDien tich:%f",chuVi,dienTich);

}
