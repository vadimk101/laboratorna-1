#include <locale.h>
#include <stdio.h>
#include <math.h>//підключення бібліотек

int main() {
	float r; float h; float S; float V;//ведення зміних
	float p;

	setlocale(LC_CTYPE, "ru");//додаєм кирилицю
	printf("Вед1ть рад1ус r\n");//виведення данних на екран
	scanf("%f",&r); //ведення
	printf("Вед1ть рад1ус h\n");//виведення данних на екран
	scanf("%f",&h);//ведення

	p = 3.14159;//число пи

	S = 2 * p * r * h;
	V = p * pow(r, 2) * h;

	printf("\t S\t \t V\n");//виведення данних на екран
	printf("\t %.2f\t %.2f\n", S, V);//виведення данних на екран


	return 0;
}

