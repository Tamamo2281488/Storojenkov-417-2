#include<iostream>
#include<locale.h>
#include<iomanip>
#include<bitset>


int main()
{
	setlocale(LC_ALL, "Russian");

	int binary_int01 = 0b1011;
	int binary_int02 = 0b1100;
	std::cout << "������� �������� �������� " << std::endl;
	std::cout << "�������� ����� 01 = " << std::hex << std::bitset<4>(binary_int01) << std::endl;
	std::cout << "�������� ����� 02 = " << std::hex << std::bitset<4>(binary_int02) << std::endl;
	std::cout << " �----" << std::hex << std::endl;
	std::cout << "��������� " << std::hex << std::bitset <4>(binary_int01 ^ binary_int02) << std::endl;

	int binary_int03 = 0b1011;
	int binary_int04 = 0b1100;
	std::cout << "������� �������� �������� " << std::endl;
	std::cout << "�������� ����� 01 = " << std::hex << std::bitset<4>(binary_int03) << std::endl;
	std::cout << "�������� ����� 02 = " << std::hex << std::bitset<4>(binary_int04) << std::endl;
	std::cout << " �----" << std::hex << std::endl;
	std::cout << "��������� " << std::hex << std::bitset <4>(binary_int03 & binary_int04) << std::endl;

	int binary_int05 = 0b1011;
	int binary_int06 = 0b1100;
	std::cout << "������� �������� �������� " << std::endl;
	std::cout << "�������� ����� 01 = " << std::hex << std::bitset<4>(binary_int05) << std::endl;
	std::cout << "�������� ����� 02 = " << std::hex << std::bitset<4>(binary_int06) << std::endl;
	std::cout << " �----" << std::hex << std::endl;
	std::cout << "��������� " << std::hex << std::bitset <4>(binary_int05 | binary_int06) << std::endl;

	std::cout << "������������ ��������� << " << std::hex << std::bitset <4>(binary_int01 << binary_int02) << std::endl;

	std::cout << "������������ ��������� >> " << std::hex << std::bitset <4>(binary_int03 >> binary_int04) << std::endl;

	std::cout << "������������ ��������� ~ " << std::hex << std::bitset <4>(~binary_int05) << std::endl;

	int c = 2;
	int a = 3;
	int d = 4;
	int b = 1;

	/* 2. �������, �������� � ���� ���������
	������� - ���������� � ������������ ��������� ( ������ - !, ~, ++, �)
	�������� - �������� � ����� ���������� (������� +, -, >>, <<, &&, ||, &, |, ^, /, *, %)
	��������� - �������� � ����� ���������� (����������_�������?�����_����_true:�����_����_false )
	������� - ������, � ������� ����������� ��������

	�-----------------------------------------------------------------�

	������������ ������ ��������� ����������
	*/
	std::cout << "a = " << std::bitset<8>(a) << "; b =" << b
		<< "; a >> b = " << std::bitset<8>(a >> b) << std::endl;

	std::cout << "a = " << std::bitset<8>(a) << "; b = " << b
		<< "; a >> b = " << std::bitset<8>(a << b) << std::endl;

	std::cout << "a = " << std::bitset<8>(a) << "; ~a = " << std::bitset<8>(~a) << std::endl;

	//���� �������� ++ ����� ����� �����, �� ����� ������� ��������� �� ������, � ����� �������������
	//���� �������� ++ ����� ����� ������, �� ����� ������� ������������� � ����� ��������� �� ������




	//���� ������ ����� �/�++

	//2.1 ������������� ���� ������������ ��� �������� ����� ����� ��������������, ������������� � �����������

	char uchar_var; //�������� ����� | �������� ������ 8 ��� (����) ����� ������� ����� �� -128 �� 127
	short short_var; // �������� � ������ 16 ��� ( 2 �����) ������ ����� �� 32 767 �� -32 768
	int int_var; // �������� � ������ 32 ���� ( 4 �����) ������ ����� �� int32_min �� int32_max
	long long_var; // ���������� int
	long int li_var; // �������� 64 ��� (8 ����) ������ �� llong_min �� llong_max
	long long uli_var; // ������ long int


	//���� ��������� � ������ ������ ��������� ���� ����������� unsign, ��
	// ������������� �������� (�.� ����������� ������������� ����� ������������� � 2 ����
	// � ����� � ������ unsign ������ ����� �������� ������������� �����

	unsigned char char_var; //������ ��� �� ��� � � ���� char �� �������� ���������� � 0 �� 255 (127*2+1)
	unsigned short ushort_var; // ����������
	unsigned int uint_var; // ����������
	unsigned long ulong_var; // ����������
	unsigned long int uuli_var; // ����������
	unsigned long

		long uuuli_var; // ����������

		//2.2 �������������� ���� � ��������� �������/������
	float float_var; // ����� ����� 4 ����� (32 ����) � ����� ������������ ����� �� flt_min �� flt_max
	double dbl_var; // ����� ����� 8 ���� ( 64 ����) ����� ������������ �� dbl_min �� dbl_max

	//2.3 ���������� ���� ������

	bool bool_var; //����� ������������ ����� 2 �������� true � false �� ����� �����
	std::cout << std::endl << "����� ���� bool(� 64 ��������� ����������) sizeif(bool) = "
		<< sizeof(bool) << std::endl;
	//2.4 ���������� ���� ������
	char chr_var; //��������� ��������������� ���� char ����� ������ ������� �� ����������� ������� ��������
	//������� ���� ��� char ������������ ������ ��� �������� �������� � ����� ��� ��� ����������

	wchar_t wchr_var; //����� ����� 16 ��� (2 �����) � ������ ��� �������� �������� �������
	//��� ������ ����������� ���������

	//2.5 ������������� ��� ������ ��� void
	//���������� ������������� void ������ ��� ������ � ��������������� �������
	//��������� ��� ������ ����� �������������� ��� �������� ���� ������� �� ���������� � �� ��������� �������� ���� � ������� ������������







	std::system("pause"); // ����� ������� system() �� ����������� ����������

	return 0;
}
