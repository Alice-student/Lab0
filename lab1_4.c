#include <locale.h>
#include <stdio.h>
void name()
{
	setlocale(LC_ALL, "RUS");
	puts("******************************************************************************************");
	puts("*                                                                                        *");
	puts("*    ����:��������� � ���������� ����������� ���������� � ����� ���������� MVS 2022      *");
	puts("*                                                                                        *");
	puts("* ���������: ���������� �.�. ����-241                                                   *");
	puts("*                                                                                        *");
	puts("******************************************************************************************");
	return 0;
}
void date()
{
	puts(" __  __    __  __    __  __ ");
	puts("|  ||__   |  ||__   |  ||__ ");
	puts("|__||__|  |__||__|  |__||__|");
}
void main()
{
	name();
	date();
}