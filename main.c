#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*������� 1
	1.�������� ������������ ���������� a, b � � � ������ �� ��������. 
	2.�����������, ��� a, b, c ���� ������������ ����������� ��������� ������� �� ������� �������� �� ������ �1, �2. 
	3.������� ��������� ����� �������� �������������, ��� ������� ����� ����� ������������.
	����������. ��� ���������� ������� ����������� ������� ���������� ����-������� ����� (���������� � �������), � ��� �� ����� ������ �� �������.
	���������� � ������� - ���������� ������������ ����	 math.h � ������-���� ������� pow, ������ ���������� �������� ������ ���� ���������� ��������, � ������ - �������, ��� ������ double.
	����� ������ - ������������ ���� stdio.h, ������� printf, ������ ���������� �������� ��������� ������, � ����������� - ����������, �������� ������� ������-���� �������.


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a, b, c;
	double x1, x2, d;
	
//	a = 1.0;
//	b = -3.0;
//	c = 2.0;
	
	printf("Vvdite a: \n");
	scanf("%lf", &a);
	printf("Vvdite b: \n");
	scanf("%lf", &b);
	printf("Vvdite c: \n");
	scanf("%lf", &c);
	
	
	
	
	d = pow(b, 2) - 4*a*c;
	printf("d = %lf \n",d);
	
	if (d>0){
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		
		printf("x1 = %lf \n",x1);
		printf("x2 = %lf \n",x2);
    }
		
	if (d==0){
		x1= (-b + sqrt(d))/(2*a);
		
		printf("x1 = %lf \n",x1);

	}

    if (d<0)printf("Korney net");
    	
    
	
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	

	printf("x1 = %lf \n",x1);
	printf("x2 = %lf \n",x2);

	
	return 0;
}
