#include <stdio.h>
int main(){
    int n;
    printf("Введіть номер кварталу:\n");
    scanf("%d", &n);
    switch(n){
        case 1: printf("І квартал (січень, лютий, березень)"); break;
        case 2: printf("ІІ квартал (квітень, травень, червень)"); break;
        case 3: printf("ІІІ квартал (липень, серпень, вересень)"); break;
        case 4: printf("ІV квартал (жовтень, листопад, грудень)"); break;
        default:printf("Такого кварталу не існує");
    }
    return 0;
}