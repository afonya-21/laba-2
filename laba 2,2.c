#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
int main()
{
	int* mas = 0;
	int i, j;
	int min, max, N;
	int choice;
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	FILE* file = 0;
	fopen_s(&file, "C:\\Users\\ikiri\\source\\repos\\laba 2,2\\laba 2,2\\numbers.txt", "w");
	printf(" ������� ���������� �����: ");
	scanf_s("%d", &N);
	printf(" ������� ����������� �������� �������: ");
	scanf_s("%d", &min);
	printf(" ������� ������������ �������� �������: ");
	scanf_s("%d", &max);
	if ((N <= 0) || (max <= min))
	{
		printf(" ������! ������� ���������� ������");
		return 0;
	}
	mas = malloc(N * sizeof(int));
	for (i = 0; i < N; i++)
	{
		mas[i] = (min + (max - min) * rand() / RAND_MAX);
	}
	printf(" ������ ������� ������������");
	fprintf(file, "n = %d\n", N);
	for (i = 0; i < N; i++)
	{
		fprintf(file, "%d\n", mas[i]);
	}
	fclose(file);
return 0;
}