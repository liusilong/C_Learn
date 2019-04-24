//
//  hello.c
//  C_Learn
//
//  Created by Liusilong on 2019/1/26.
//  Copyright © 2019 Liusilong. All rights reserved.
//  YouTube Link: https://youtu.be/KJgsSFOSQv0
//

#include <stdio.h>
int main(){
//    printf
    
     printf("Hello Liusilong\n");
     printf("Hello MaChi\n");
     
    
    /*  variables */
//    一个 char 只能保存一个字符，保存多个需要用char 数组：char[]
    char charaterName[] = "Rose";
//    定义一个整型变量
    int characterAge = 35;
//    引用上面定义的变量 %s 表示 字符串类型， %d 表示整型
    printf("My name is %s, age is %d\n", charaterName, characterAge);
    
//    修改上面定义的变量的值 TODO：不知道怎么修改 charaterName 的值
    characterAge = 36;
    printf("His name is %s, age is %d\n", charaterName, characterAge);
    
    
    
    
    /*  Data type */
    
    int a = 40;
    double gpa = 3.7;
//    只能保存一个字符
    char grade = 'A';
//    字符串
    char phrase[] = "Giraffe Academy";
    
    /*  printf  */
    printf("Hello\n");
    printf("Hello \"world\n");
    
    
    /*
     %d : 整型
     %s : 字符型
     %c : 单个字符
     %f : 浮点型 (float)
     %lf : double
     */
    char name[] = "Liusilong";
    int age = 25;
    float height = 180.0;
    printf("My name is %s, age is %d, height is %f\n", name, age, height);
    char myFavoriteLetter = 'L';
    printf("My favorite letter is %c. \n", myFavoriteLetter);
    
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
    
    const int EIGHT_NUM = 8;
    printf("%d \n", EIGHT_NUM);
    
    
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
    char enterName[20];
    printf("Enter your name:");
//    scanf("%s", enterName); // 注意，这里不需要取地址符
    fgets(enterName, 20, stdin);
    printf("Your name is %s new line \n", enterName);
    
    
    
    
    return 0;
}

