//
//  hello.c
//  C_Learn
//
//  Created by Liusilong on 2019/1/26.
//  Copyright © 2019 Liusilong. All rights reserved.
//  YouTube Link: https://youtu.be/KJgsSFOSQv0
//

#include <stdio.h>
#include "Header.h"
// 方法签名
int add(int a, int b);

int max(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

double cube(double num){
    double result = num * num * num;
    return result;
}
int main(){
//    printf
    
//     printf("Hello Liusilong\n");
//     printf("Hello MaChi\n");
    
    
    /*  variables */
    /*
//    一个 char 只能保存一个字符，保存多个需要用char 数组：char[]
    char charaterName[] = "Rose";
//    定义一个整型变量
    int characterAge = 35;
//    引用上面定义的变量 %s 表示 字符串类型， %d 表示整型
    printf("My name is %s, age is %d\n", charaterName, characterAge);
    
//    修改上面定义的变量的值 TODO：不知道怎么修改 charaterName 的值
    characterAge = 36;
    printf("His name is %s, age is %d\n", charaterName, characterAge);
    
     */
    
    
    
    /*  Data type */
    
//    int a = 40;
//    double gpa = 3.7;
////    只能保存一个字符
//    char grade = 'A';
////    字符串
//    char phrase[] = "Giraffe Academy";
    
    /*  printf  */
//    printf("Hello\n");
//    printf("Hello \"world\n");
//
    
    /*
     %d : 整型
     %s : 字符型
     %c : 单个字符
     %f : 浮点型 (float)
     %lf : double
     */
//    char name[] = "Liusilong";
//    int age = 25;
//    float height = 180.0;
//    printf("My name is %s, age is %d, height is %f\n", name, age, height);
//    char myFavoriteLetter = 'L';
//    printf("My favorite letter is %c. \n", myFavoriteLetter);
//
    /*  Working with numbers   */
    
    /*
    printf("%f \n", 7 + 9.0);
    // 计算 2 的 3 次方
    printf("%f \n", pow(2.0, 3.0)); // 2^3
    // 开平方
    printf("%f \n", sqrt(36)); // 6
    
    printf("%f \n", ceil(8.1)); // 9
    
    printf("%f \n", floor(8.8)); // 8
    */
    
    /* comments 注释 */
    
    /* Constants 常量 */
    /*
        常量是不能被改变的
     */
//
//    const int EIGHT_NUM = 8;
//    printf("%d \n", EIGHT_NUM);
    
    
    /* Get user input */
    
    /*
    int enterAge;
    printf("Enter your age: ");
    scanf("%d", &enterAge); // 需要取地址符
    printf("Your are %d years old", enterAge);
    
    char enterGrade;
    printf("Enter your grade:");
    scanf("%c", &enterGrade); // 需要取地址符
    printf("Your grade is %c", enterGrade);
    */
    
    /*
    char enterName[20];
    printf("Enter your name:");
//    scanf("%s", enterName); // 注意，这里不需要取地址符
    fgets(enterName, 20, stdin);
    printf("Your name is %s new line \n", enterName);
     
     */
    
    
    
    /* Building a Basic Calculator */
    /*
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    printf("Awaser: %f \n", num1 + num2);
     */
    
    
    /* Building a Mad Libs Game */
    
    /*
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: " );
    scanf("%s%s", celebrityF, celebrityL);
    
    printf("Roses are %s \n", color);
    printf("%s are blur \n", pluralNoun);
    printf("I love %s %s \n", celebrityF, celebrityL);
     
     */
    
    /*  Arrays  */
    
    /*
    // 定义一个数组
    int luckyNumbers[] = {3, 45, 28, 56, 43, 32};
    // 根据下标访问数组中的值
    printf("%d \n", luckyNumbers[2]);
    // 修改对应下标的值
    luckyNumbers[2] = 100;
    printf("%d \n", luckyNumbers[2]);
    // 定义一个指定容量的数组
    int numArr[10];
    numArr[1] = 90;
    printf("%d \n", numArr[1]);
    // 字符串 即 char[]
    char name[] = "Liusilong";
    
     */
    
    /*   Function    */
//    sayHi("Jack", 43);
//    sayHi("Tom", 19);
//    sayHi("Rose", 36);
    
    /* Return Statement */
    printf("Answer: %lf \n", cube(3.0));
    
    printf("3 + 2 = %d \n", add(3, 2));
    
    /* If Statement */
    
    printf("%d \n", max(40, 10));
    
    return 0;
}

/*
 https://stackoverflow.com/questions/15850042/xcode-warning-implicit-declaration-of-function-is-invalid-in-c99
 */
// 这个方法是定义在 Header.h 有文件中，
// 所以可以定义在调用者的下面
// 如果方法没有在头文件中定义，则需要将方法定义在调用者的上面
// 还可以直接在当前文件中定义方法签名，然后实现该方法，如上面的 int add(int a, int b);
void sayHi(char name[], int age){
    printf("Hello %s, you are %d \n", name, age);
}

int add(int a, int b) {
    return a + b;
}
