#define _CRT_SECURE_NO_WARNINGS 1

//2-1�ҵ�����
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("�ͣ�%d\n", a + b);
//	printf("�%d\n", a - b);
//	printf("����%d\n", a * b);
//	printf("�̣�%lf\n", (double)a / b);
//	return 0;
//}


//2-2
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//
//	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
//	c1 += 4;
//	c2 += 4;
//	c3 += 4;
//	c4 += 4;
//	c5 += 4;
//	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
//	return 0;
//}


//2-3
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int i = 6, j = 12;
//	double x = 3.28,y=90;
//	printf("i=%d\tj=%c\n", i,'c');
//	printf("x=%E\ty=%d\n", x,(int)y);
//	return 0;
//}


//2-4�ҵĴ���
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	float a =0;//����۸�
//	float b =0;//ʹ������
//	float c =0;//��Ʒ��ֵ
//	float d ;//�۾ɷ�
//	float e ;//�ۿۺ�ļ۸�
//	printf("��ֱ����빺��۸�ʹ�����ޣ���Ʒ��ֵ��");
//	scanf("%f %f %f", &a, &b, &c);
//	d = (a - c) / b;
//	e = a - d;
//	printf("%.2f", e);
//	return 0;
//}


//2-4����
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int limit, year;
//	double price, waste, dep, value;
//	printf("��������Ʒ�Ĺ���۸�ʹ�����޺ͷ�Ʒ��ֵ��\n");
//	scanf("%lf%d%lf", &price, &limit, &waste);
//	dep = (price - waste) / limit;
//	printf("������ʹ�õ�������\n");
//	scanf("%d", & year);
//	value = price - dep * year;
//	printf("%d����۾ɺ�ļ�ֵΪ��%.2lf", year, value);
//	return 0;
//}




//2-5�ҵ�
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	float  loan = 20000.00;//������
//	float reim = 386.66;//ÿ���µĻ�����
//	float rate = 0.06;//���������
//	float first = 0, second = 0, third = 0;
//	first = loan - reim + loan*rate / 12;
//	second = first - reim + first * rate / 12;
//	third = second - reim + second * rate / 12;
//	printf("��һ������Ҫ���Ľ�%.2f\n ", first);
//	printf("�ڶ�������Ҫ���Ľ�%.2f\n ", second);
//	printf("����������Ҫ���Ľ�%.2f\n ", third);
//	return 0;
//}



//2-5
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	double debt = 20000.00, rate = 0.06 / 12, payment = 386.66;
//	double month1, month2, month3;
//	month1 = debt * (1 + rate) - payment;
//	month2 = month1 * (1 + rate) - payment;
//	month3 = month2 * (1 + rate) - payment;
//	printf("��һ����ʣ����軹����Ϊ%.2lf\n", month1);
//	printf("�ڶ�����ʣ����軹����Ϊ%.2lf\n", month2);
//	printf("��������ʣ����軹����Ϊ%.2lf\n", month3);
//	return 0;
//}


