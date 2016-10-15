#include <stdio.h>
#include <math.h>
void main(){
    int a,b,c,chuVi;
    float nuaChuVi,dienTich;
    printf("Nhap 3 canh cua tam giac:\n");
    scanf("%d%d%d",&a,&b,&c);
    chuVi=a+b+c;
    nuaChuVi=chuVi/2;
    dienTich=sqrt(nuaChuVi*(nuaChuVi-a)*(nuaChuVi-b)*(nuaChuVi-c));
    printf("Chu vi: %d\nDien tich: %f",chuVi,dienTich);
}
