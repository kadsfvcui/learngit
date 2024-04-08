/*C语言关键字（32个）：
1.数据类型关键字（12个）：

(1) char ：声明字符型变量或函数 
(2) double ：声明双精度变量或函数 
(3) enum ：声明枚举类型 
(4) float：声明浮点型变量或函数 
(5) int： 声明整型变量或函数 
(6) long ：声明长整型变量或函数 
(7) short ：声明短整型变量或函数 
(8) signed：声明有符号类型变量或函数 
(9) struct：声明结构体变量或函数 
(10) union：声明共用体（联合）数据类型 
(11) unsigned：声明无符号类型变量或函数 
(12) void ：声明函数无返回值或无参数，声明无类型指针（基本上就这三个作用）

2.控制语句关键字（12个）：

A循环语句 
(1) for：一种循环语句
(2) do ：循环语句的循环体 
(3) while ：循环语句的循环条件 
(4) break：跳出当前循环 
(5) continue：结束当前循环，开始下一轮循环 
B条件语句 
(1)if: 条件语句 
(2)else ：条件语句否定分支（与 if 连用） 
(3)goto：无条件跳转语句 
C开关语句 
(1)switch :用于开关语句 
(2)case：开关语句分支 
(3)default：开关语句中的“其他”分支 
D返回语句
return ：子程序返回语句（可以带参数，也看不带参数）

3.存储类型关键字（4个）

(1)auto ：声明自动变量 一般不使用 
(2)extern：声明变量是在其他文件正声明（也可以看做是引用变量） 
(3)register：声明积存器变量 
(4)static ：声明静态变量

4.其它关键字（4个）：

(1)const ：声明只读变量 
(2)sizeof：计算数据类型长度 
(3)typedef：用以给数据类型取别名（当然还有其他作用)
(4)volatile：说明变量在程序执行中可被隐含地改变


extern外部声明
应用场景：当要在a.c中使用b.c中的变量m时，需用extern int m在a.h中声明m，m需要是全局变量

auto被解释为一个自动存储变量的关键字，也就是申明一块临时的变量内存。
应用场景：定义局部变量。如 函数中定义变量 int a; 和 auto int a; 是等价的，关键字“auto”是默认省略的，此关键字很少使用。

static指定一局部变量为“静态局部变量”
应用场景：若希望函数中的局部变量的值在函数调用结束后不消失而继续保留原值，即其占用的存储单元不释放，在下一次再调用该函数时，该变量已有值，用关键字static进行声明

register将变量存储在CPU内部寄存器中，而不是单纯地寻址访问
应用场景：将变量声明为寄存器变量，告诉编译器将该变量存储在寄存器中，以便在执行程序过程中更快地访问它。*/


#include<stdio.h>
#include <stdlib.h>

struct A {
    float price;
    char category[20];
    char manufacturer[20];
    char material[100];
};


    void add_strings_to_binary(char* str) {
    char* num1 = strtok(str, ",");
    char* num2 = strtok(NULL, ",");

    int num1_int = atoi(num1);
    int num2_int = atoi(num2);

    int sum = num1_int + num2_int;

    printf("The binary representation of the sum is: ");
    for(int i = 32; i >= 0; i--) {
        putchar((sum >> i) & 1 ? '1' : '0');
    }
    printf("\n");
}

int main() {
    char str[50] = "16,32";
    add_strings_to_binary(str);
    return 0;
}

