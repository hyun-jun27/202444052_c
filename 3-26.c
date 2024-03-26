#include <stdio.h>
int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int divde(int a, int b);
int main(){
    int a=30, b=20;
    int result;
    result = plus(a,b);
    printf("%d \n", result);
    result = minus(a,b);
    printf("%d \n", result);
    result = multi(a,b);
    printf("%d \n", result);
    result = divde(a,b);
    printf("%d \n", result);
    
}
int plus(int a, int b){
    return a+b;

}
int minus(int a, int b){
    return a-b;
}
int multi(int a, int b){
    return a*b;
}
int divde(int a, int b){
    return a/b;
}
