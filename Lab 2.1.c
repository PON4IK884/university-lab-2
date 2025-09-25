#include <stdio.h>
int main(){
    float x, y, z;
    printf("Введіть значення x,y,z:\n");
    scanf("%f%f%f", &x, &y, &z);
    if(x <= y && y <= z){
        printf("Послідовність не є спадаючою\n");
    }
    else{
        printf("Послідовність спадна\n");
    }
    float max=x;
    if(y > max) max=y;
    if(z > max) max=z;
    x = y = z = max;
    printf("Тепер: x=%g y=%g z=%g", x, y, z);
    return 0;
}