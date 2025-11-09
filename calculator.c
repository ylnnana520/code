#include <stdio.h>

int main()
 {
    double
 num1, num2, result;
    char
 op;

    printf("请输入计算表达式（如 3 + 5）：\n");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break
;
        case '-'
:
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n"
, num1, num2, result);
            break
;
        case '*'
:
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n"
, num1, num2, result);
            break
;
        case '/'
:
            if (num2 != 0
) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n"
, num1, num2, result);
            } 
else
 {
                printf("错误：除数不能为0！\n"
);
            }
            break
;
        default
:
            printf("不支持的运算符。\n"
);
    }

    return 0
;
}