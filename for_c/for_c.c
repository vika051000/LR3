#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "head.h"


void main(void)
{
	setlocale(LC_ALL, "Rus");
	_Bool close = true;

	for(;close;)
	{
		double sum, eps;
		int n, k;
		
		printf("1. ������� 1\n");
		printf("2. ������� 2\n");
		printf("3. ������� 3\n");
		printf("4. ������� 4\n");
		printf("5. ������� 5\n");
		printf("6. �����\n");

		switch (getch()){
			case '1':
				system("cls");
				printf("������� n = ");
				scanf_s("%d", &n);
				sum = summ(n);
				printf("����� ������ %d ��������� ����� %lf \n", n, sum);
				printf("�������� ����� \n");
				getch();
				break;
			case '2':
				system("cls");
				printf("������� �������� ���������� eps = ");
				scanf_s("%lf", &eps);
				sum = summ2(eps);
				printf("����� ��������� ������������������ = %lf \n", sum);
				printf("�������� ����� \n");
				getch();
				break;
			case '3':
				system("cls");
				printf("n = ");
				scanf_s("%d", &n);
				printf("k = ");
				scanf_s("%d", &k);
				print(n, k);
				printf("�������� ����� \n");
				getch();
				break;
			case '4':
				system("cls");
				printf("eps = ");
				scanf_s("%lf", &eps);
				n = findFirstElement(eps);
				printf("����� ������� �������� ������������������, ��� �������� ����������� ������� : i = %d \n", n);
				printf("�������� ����� \n");
				getch();
				break;
			case '5':
				system("cls");
				printf("������� eps = ");
				scanf_s("%lf", &eps);
				n = findFirstNegativeElement(eps);
				printf("����� ������� �������������� �������� ������������������, ��� �������� ����������� ������� : i = %d \n", n);
				printf("�������� ����� \n");
				getch();
				break;
			case '6':
				close = false;
				break;
		}

	}
	
	
}