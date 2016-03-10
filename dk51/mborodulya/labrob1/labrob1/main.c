#define _CRT_SECURE_NO_WARNINGS

#include<locale.h>  
#include <stdio.h>
#include <math.h>
#include "formula.h"

void main() {
	
	setlocale(LC_ALL, "RUS"); //������ �������� ��������
	float B, Q;
	int A = 0;

	printf("\t�� �������� ���� Q<-(A!)/(A*2+B). \n\n");
	printf("����i�� �i�� ����� A(�i���� 0): ");
	scanf("%d", &A);
	
	if (A <= 0) {
		printf("\t�������. � ������� ���� �i��� ������ > 0.\n");
	}
	else {

		printf("����i�� ����� � ��������� �����(,) B: ");
		scanf_s("%f", &B);
		
		if (B > 0) {
			if ((A * 2 + B) == 0) {
				printf("\n\t�������. �i����� = 0\n\n");
			}
			else {
				Q = formula(A, B);
				printf("\n\t��������� Q = %f\n", Q);
			}
		}
		else {
			printf("\n\t�������. B - �� �����\n");
		}
	}
		
	getch(); 
}