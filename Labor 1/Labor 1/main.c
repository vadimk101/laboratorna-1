#include <locale.h>
#include <stdio.h>
#include <math.h>//���������� �������

int main() {
	float r; float h; float S; float V;//������� �����
	float p;

	setlocale(LC_CTYPE, "ru");//������ ����
	printf("���1�� ���1�� r\n");//��������� ������ �� �����
	scanf("%f",&r); //�������
	printf("���1�� ���1�� h\n");//��������� ������ �� �����
	scanf("%f",&h);//�������

	p = 3.14159;//����� ��

	S = 2 * p * r * h;
	V = p * pow(r, 2) * h;

	printf("\t S\t V\n");//��������� ������ �� �����
	printf("\t %.2f\t %.2f\n", S, V);//��������� ������ �� �����


	return 0;
}

