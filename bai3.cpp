/*Viết chương trình đưa ra các số nguyên tố trong khoảng từ 1 đến n.*/
#include <stdio.h>
#include <math.h>

int main (){
    int n;
    
    printf("Nhap n:");
    scanf("%d", &n);

    printf("Cac so nguyen to trong khoang tu 1 den %d la:\n", n);
    for (int i = 2; i <= n ; i++){
        int dung = 1;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                dung = 0;
                break;
            }
            else {
                dung = 1;
            }
        }
        if (dung == 1){
            printf("%d ", i);
        }
    }
    return 0;
}