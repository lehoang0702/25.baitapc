#include<stdio.h>
#include<math.h>
void giaiptbac2(){
float a,b,c;
float d;
float x1,x2;
printf("ax^2 + bx + c = 0\n");
printf("Nhap vao 3 so a,b,c : ");
scanf("%f%f%f", &a,&b,&c);
d = b*b - 4*a*c;
if ( d > 0 ){
    x1 = (-b + sqrt(d) ) / (2*a);
    x2 = (-b - sqrt(d) ) / (2*a);
    printf("Phuong trinh co 2 nghiem phan biet x1 = %f va x2 = %f", x1,x2);
}if (d == 0 ){
    x1=x2= (-b) / (2*a);
    printf("Phuong trinh co nghiem kep x1 = x2 = %f", x1);
}else {
    printf("Phuong trinh vo nghiem");
}

}
int main (){
    giaiptbac2();
return 0;
}

