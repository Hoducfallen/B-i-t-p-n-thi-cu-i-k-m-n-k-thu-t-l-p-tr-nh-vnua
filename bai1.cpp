//nhập 3 cạnh của 1 tam giác, có đk sai nhập lại, tính diện tích chu vi
#include <stdio.h>
#include <math.h>

void nhap(float *a, float *b, float *c);
float chuvi(float, float, float);
float dientich(float, float, float);


int main (){
    float x, y, z;

    nhap(&x, &y, &z);
    chuvi(x, y, z);
    dientich(x, y, z);



}

void nhap(float *a, float *b, float *c){
    int hople = 0;

    while (!hople){
        printf("nhap 3 canh vao:");
        scanf("%f %f %f", a, b, c);

        if (*a > 0 && *b > 0 && *c > 0 && *a + *b > *c && *a + *c > *b && *b + *c > *a){
            printf("3 canh hop le\n\n");
            hople = 1;
        }
        else {
            printf("3 canh khong hop le, vui long nhap lai\n\n");
        }
        
    }
}

float chuvi (float a, float b, float c){
    float cv = a + b + c;

    printf("chu vi tam giac la: %.2f\n\n", cv);

    return cv;
}

float dientich(float a, float b, float c){
    float p = (a + b + c) / 2;
    float S = p * (p - a) * (p - b) * (p - c);

    printf("Dien tich la: %.2f", S);

    return S;

}