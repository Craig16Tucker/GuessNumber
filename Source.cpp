/*���������� ���������� -> �������� �������� "���� ���������" ( setlocale, system("pause"), return 0 � �.�.) -> �������� ���������� ������������� � ������������ �������� -> �������� ������� ��� �������� ���������� ����� � ��������� �� 0 �� 100 ->  �������� ���������� ������ ������ � ����������� ����� -> �������� ����������, ��� ������, ���������� �� ���� -> 
-> �������� ��������� ����� � ������� � ��������, ����� �� ����� ������ ���� -> ((+) ��������� ���� � ��������(�����) � ��������, ����� �� ����� ���������� ���� � �������. -> (+) ���� ���������� �������) -> (-) �������, ������� ������� � ����� ����. -> ����� ������� � ����� ����� � ��������� ����� ���������� �����. -> ��������� ���. -> (+) ���� ���. -> (-) ���������� ������.
*/
//���������� ����������, ������� ����� ��� � ����.

#include <iostream>
#include <stdlib.h>
#include <time.h>

//������� ��� ���������� ����� � ��������� �� 0 �� 100, ������� ����� ����� ��������.

int randomNumber(int from, int to)
{
	return from + rand() % to;
}

//������� � ����� �����.

void igra(int otv, int m, int ma)
{

	//�������� ������� ��� ���������� ���������� ����� � ����������� ��� � ����������, ������� �� ����� ������������, ��� ���������� �����.

	int randomNumber(int m, int ma);
	int zag = randomNumber(m, ma);
	
	//��������� ����, ������� �������� �������� ������ ����.

	do
	{
		printf("\t\t������� �����: ");
		scanf_s("%i", &otv);

		if (otv > zag)
		{
			printf("\t\t�����������! ���� ����� ������ ���������.\n");
		}
		else if (otv < zag)
		{
			printf("\t\t�����������! ���� ����� ������ ���������.\n");
		}
		else
		{
			printf("\t\t�����! �� ������� �������� �����.\n");
		}
	} while (otv != zag);
}

int main()
{
	//��������� ����������� ������ �� �������.

	setlocale(LC_ALL, "Rus");
	
	//��������� ����������� � ������������ ��������.

	int	MIN = 0;
	int MAX = 100;

	//���������� ��� �����, ������� ����� ������� �����.

	int otvet = 0;

	//���������� ��� ������, ����������/�������� ���� ��� ���.

	int start;

	//��������� �����.

	srand(time(NULL));

	printf("\t\t���� '������ �����'. ����� ������� �����, ������� �������� ���������. ����� �� 0 �� 100.\n\t\t ������ ����?\n\t\t 1 - ��; 0 - ���\n");
	scanf_s("%i", &start);
	
	//���� ���� � �������� � ����������� ���� � � �����.

	if (start == 1)
	{
		do
		{
			igra(otvet, MIN, MAX);

			printf("\t\t������ �� �� ������� �����?\n\t\t 1 - ��; 0 - ��� \n");
			scanf_s("%i", &start);

		} while (start != 0);
	}
	else 
	{
		printf("����� ����...");

		system("pause");
		return 0;
	}
}