//công thức dài nhưng chỉ quan tâm đến số hạng cuối((-1)^n) / 2n + 1 = pi / 4
#include <stdio.h>
#include <math.h>

int main (){
    int n;
    double sum = 0;

    printf("Nhap n:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        sum += (pow(-1, i) / ((2 * i) + 1)); 
    }
        sum *= 4;
    printf("ket qua la %.10lf", sum);

    return 0;
    
}