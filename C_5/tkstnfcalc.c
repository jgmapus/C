// ������ ��� ���� ���α׷�

#include <stdio.h>

int main()

{

    char op;

    int x,y,result;

    printf("������ �Է��ϼ���(��: 2 + 5>>)");
    scanf("%d %c %d",&x,&op,&y);

    switch (op)
    {
    case '+':
    result = x + y;
    break;
    case '-':
    result = x - y;
    break;
    case '*':
    result = x * y;
    break;
    case '/':
    result = x / y;
    break;
    case '%':
    result = x % y;
    break;
    default:
    printf("�������� �ʴ� �������Դϴ�. \n");
    break;
    }
    printf("%d %c %d = %d \n", x, op, y, result);
    return 0;
}