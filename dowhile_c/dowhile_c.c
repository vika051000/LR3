#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "head.h"

void main(void)
{
	setlocale(LC_ALL, "Rus");
	_Bool close = true;

	do
	{
		double sum, eps;
		int n, k;

		printf("1. Задание 1\n");
		printf("2. Задание 2\n");
		printf("3. Задание 3\n");
		printf("4. Задание 4\n");
		printf("5. Задание 5\n");
		printf("6. Выход\n");

		switch (getch()) {
		case '1':
			system("cls");
			printf("Введите n = ");
			scanf_s("%d", &n);
			sum = summ(n);
			printf("Сумма первых %d элементов равна %lf \n", n, sum);
			printf("Ожидание ввода \n");
			getch();
			break;
		case '2':
			system("cls");
			printf("Введите точность вычисления eps = ");
			scanf_s("%lf", &eps);
			sum = summ2(eps);
			printf("Сумма элементов последовательности = %lf \n", sum);
			printf("Ожидание ввода \n");
			getch();
			break;
		case '3':
			system("cls");
			printf("n = ");
			scanf_s("%d", &n);
			printf("k = ");
			scanf_s("%d", &k);
			print(n, k);
			printf("Ожидание ввода \n");
			getch();
			break;
		case '4':
			system("cls");
			printf("eps = ");
			scanf_s("%lf", &eps);
			n = findFirstElement(eps);
			printf("Номер первого элемента последовательности, для которого выполняется условие : i = %d \n", n);
			printf("Ожидание ввода \n");
			getch();
			break;
		case '5':
			system("cls");
			printf("Введите eps = ");
			scanf_s("%lf", &eps);
			n = findFirstNegativeElement(eps);
			printf("Номер первого отрицательного элемента последовательности, для которого выполняется условие : i = %d \n", n);
			printf("Ожидание ввода \n");
			getch();
			break;
		case '6':
			close = false;
			break;
		}

	} while (close);


}