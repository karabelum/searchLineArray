//������������ ������ ������ �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include <algorithm>

using namespace std;
template <typename T> int searchIndex(T array[], int length, T key, int begin = 0) {//����� � ������
	for (int i = begin; i < length; i++)
		if (array[i] == key)
			return i;
	return -1;
}
template <typename T> int searchLastIndex(T array[], int length, T key, int begin = - 1) {//����� � �����
	if (begin == -1)
		begin = length - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}
void subWord(char array[], int length, char sym);
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n;
	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "������� �����: ";
	cin >> n;
	//cout << searchIndex(arr, 10, n, 5) << endl;
	cout << searchLastIndex(arr, 10, n, 5) << endl;*/

	//������1 �������� ��������� ������, ������� ������������ �� ���� ����� ��������. �������� ������� �������() ������� ��������� ���������� ������, 
//��� ����� � ������, ����� ���� ������� ��������, ������� ���������� � ����������� �������� �� ����� �������.
	cout << "����������� ������:\n";
	char word[8] = { 'f','u','n','c','t','i','o','n' };
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;

	cout << "��������:\n";
	subWord(word, 8, 'r');
	cout << endl;

	return 0;
}
void subWord(char array[], int length, char sym) {
	int symIndex = searchIndex(array, length, sym);
	if (symIndex != -1)
		for (int i = symIndex; i < length; i++)
			cout << array[i];
	else
		cout << "error";
}
