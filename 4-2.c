#include <stdio.h>

int main() {
  int input, year;
    printf("운년이면 1, 평년이면 0 출력 \n");
    printf("연도입력 : _____\b\b\b\b\b");
    scanf("%d", &input);
    year = ((input % 4==0)&&!(input % 100==0))||(input% 400 ==0);
    printf("입력한 년도는 %d %d",input, year);
}
#include <stdio.h>

int main() {
  int num1, num2, max, min;
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        max = num1;
        min = num2;
    }
    else{
        max = num2;
        min = num1;
    }
    
    //max= (num1>num2) ? num1 : num2;
    //min = (num1< num2) ? num1 : num2;
    printf("큰 수는 %d 작은 수는 %d",max, min);
}
#include <stdio.h>

int main() {
    int num1;
    char g;
    scanf("%d", &num1);
    if(num1>=90){
        g= 'A';
    }
    else if(num1>=80){
        g= 'B';}
    else if(num1>=70){
        g= 'C';}
    else if(num1>=60){
        g= 'D';}
    else if(num1>=50){
        g= 'E';}
    else 
        g = 'F';
    printf("당신의 성적은 %c입니다", g);
}
#include <stdio.h>

int main() {
    int num1, num2;
    char g;
    scanf("%d %c %d", &num1, &g, &num2);
    if(g=='+')
        printf("%d %c %d= %d\n", num1, g, num2, num1 + num2);
    else if(g=='-')
        printf("%d %c %d= %d\n", num1, g, num2, num1 - num2);
    else if(g=='*')
        printf("%d %c %d= %d\n", num1, g, num2, num1 * num2);
    else if(g=='/')
        printf("%d %c %d= %d", num1, g, num2, num1 / num2);
}
