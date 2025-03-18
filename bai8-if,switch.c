#include<stdio.h>
#include<math.h>
void timtamgiac(){
    printf("Nhap vao 3 canh cua tam giac : ");
    float a,b,c;
    scanf("%f%f%f", &a,&b,&c);
    if ( (a + b > c) && (b + c > a) && (a + c > b) ){
        if ( a == b && a == c && b == c) {
            printf("Day la tam giac deu");
        }else if ( a==b || b==c || a==c){
            if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("Day la tam giac vuong can");
            }else{
                    printf("Day la tam giac can");
            }

        }else if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("Day la tam giac vuong");
        }else {
            printf("Day la tam giac thuong");
        }


    }else {
        printf("Day khong phai la tam giac");
    }

}
int main (){
    timtamgiac();
return 0;
}
