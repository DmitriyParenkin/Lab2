#include <stdlib.h>
#include <stdio.h>

int main()
{
int sum, time, pers;
 printf("Введите сумму вклада "" ");
 scanf("%d", &sum);
while(sum < 10000)
{
printf("Неверная сумма \n Повторите ввод "" ");
scanf("%d", &sum);
}
 printf("Введите срок вклада "" ");
 scanf("%d", &time);
while(time < 1 || time > 365)
{
printf("Срок вклада не может быть больше 365 дней и меньше 1 дня \n Повторите ввод "" ");
scanf("%d", &time);
}
  
}
