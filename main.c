#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*ЗАДАНИЕ 1
	1.Объявить вещественные переменные a, b и с и задать их значения. 
	2.Предполагая, что a, b, c есть коэффициенты квадратного уравнения вывести на консоль значения их корней х1, х2. 
	3.Следует подобрать такие значения коэффициентов, при которых корни будут существовать.
	Примечание. Для выполнения задания потребуется функции вычисления квад-ратного корня (возведение в степень), а так же вывод данных на консоль.
	Возведение в степень - подключаем заголовочный файл	 math.h и исполь-зуем функцию pow, первым параметром которого должен быть возводимое значение, а вторым - степень, тип данных double.
	Вывод данных - заголовочный файл stdio.h, функция printf, первым параметром является форматная строка, а последующие - переменные, значения которых необхо-димо вывести.


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
