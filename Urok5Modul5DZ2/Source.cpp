#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, exit;
	do
	{
		cout << "number exemple: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			/*1.Написать программу, которая в матрице чисел A(N,M) находит все элементы, превышающие по абсолютной величине заданное число B.
			Подсчитать число таких элементов и записать их в массив C. */
			int a[10][10];
			int i, j;
			int c[100];
			int d;
			int index = 0;
			cout << "введите число: ";
			cin >> d;
			cout << endl;
			for (i = 0;i < 10;i++)
			{
				for (j = 0;j < 10;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
					if (d < a[i][j])
					{
						c[index] = a[i][j];
						index++;
					}
					else 
					{
						c[index] = 0;
						index++;
					}
				}
				cout << endl;
			}
			cout << "------------------------------\n";
			index = 0;
			for (i = 0;i < 10;i++)
			{
				for (j = 0;j < 10;j++)
				{
					//if (c[index] != 0)
						cout << c[index] << "\t";
					index++;
				}
				cout << endl;
			}
		}
		break;
		case 2:
		{
			/*2.Дана целочисленная матрица размера 8х5. Определить: 
				a.сумму всех элементов второго столбца массива; 
				b.сумму всех элементов 3-й строки массива.*/
			int a[8][5];
			int i, j;
			int summ = 0;
			int summ2 = 0;
			int d;
			int index = 0;
			for (i = 0;i < 8;i++)
			{
				for (j = 0;j < 5;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
					if (i == 2)
					{
						summ += a[i][j];
					}
					if (j == 1)
					{
						summ2 += a[i][j];
					}
				}
				cout << endl;
			}
			cout << "------------------------------\n";
			cout << "сумма 3 строки = " << summ << endl;
			cout << "сумма 2 столбца = " << summ2 << endl;
		}
		break;
		case 3:
		{
			/*3.Дана целочисленная прямоугольная матрица размера M·N. 
			Сформировать одномерный массив, состоящий из элементов, лежащих в интервале [1,10].
			Найти произведение елементов полученного одномерного массив*/
		}
		break;
		case 4:
		{
			/*4.Дана целочисленная квадратная матрица. Указать столбец (назвать его номер), где минимальное количество элементов, кратных сумме индексов*/
			int a[5][5];
			int i, j;
			int index = 0;
			int schet = 0;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "-------------------------------\n";
			for (i = 2;i < 5;i++)//столбец
			{
				schet = 0;
				for (j = 0;j < 5;j++)//строка
				{
					if (a[i][j] % i == 0)
					{
						schet++;
						index = i;
					}
						
				}
			}
		}
		break;
		case 5:
		{
			/*5.Дана целочисленная квадратная матрица.Найти сумму элементов матрицы, лежащих выше главной диагонали*/
			int a[5][5];
			int i, j;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					a[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "-------------------------------\n";
			for (i=0;i<4;i++)
			{
				cout << a[i][i + 1] << "\t";
			}
			cout << endl;
		}
		break;

		default:cout << "no exemple" << endl;
			break;
		}
		cout << "continue? 1-Yes 2-No: ";
		cin >> exit;
		cout << endl;
	} while (exit == 1);
}