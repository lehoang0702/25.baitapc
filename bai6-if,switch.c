#include<stdio.h>
#include<math.h>
void giaiheptbacnhathaian(){
    float x,y;
    float a1,b1,c1,a2,b2,c2;
    printf("a1x + b1y = c1\n");
    printf("Nhap vao cac gia tri a1,b1,c1 : \n");
    scanf("%f%f%f", &a1,&b1,&c1);
    printf("a2x + b2y = c2\n");
    printf("Nhap vao cac gia tri a2,b2,c2 : \n");
    scanf("%f%f%f", &a2,&b2,&c2);
    float d = a1*b2 - a2*b1;
    float d1 = c1*b2 - c2*b1;
    float d2 = a1*c2 - a2*c1;
if ( d != 0 ){
    x = d1/d;
    y = d2/d;
    printf("Phuong trinh co 2 nghiem x = %.2f va y = %.2f", x,y);
}if (d == 0) {
    if ( d1 == 0 && d2 == 0){
        printf("Phuong trinh co vo so nghiem");
    }else {
        printf("Phuong trinh vo nghiem");
    }
}
}
int main (){
    giaiheptbacnhathaian();

return 0;
}
