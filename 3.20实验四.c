#define _CRT_SECURE_NO_WARNINGS 1
//4-1
//#include<stdio.h>
//#include<time.h>
//
//int Sum(int a, int n)
//{
//	int i;
//	int t, s;
//	s = t = a;
//	for (i = 2; i <= n; i++)
//	{
//		t = t * 10 + a;
//		s = s + t;
//	}
//	return s;
//}
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int n = 0, a = 0, sum = 0;
//	scanf("%d %d",&a, &n);
//	sum = Sum(a, n);
//	printf("%d", sum);
//
//	return 0;
//}


//4-2�ҵ�����
//#include<stdio.h>
//#include<time.h>
//
//int aaa(int a)
//{
//	if ()
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int a = 0, b = 0, i = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		b = aaa(a);
//		if (b = 0)
//		{
//			printf("%d�ǻ�����");
//		}
//		else
//		{
//			printf("%d���ǻ�����");
//		}
//	}
//	return 0;
//}


//4-2�޺���
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//
//	int i, j, k, n = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		j = i;
//		for (k = 0; j; j /= 10)
//		{
//			k = k * 10 + j % 10;
//		}
//		if (k == i)
//		{
//			printf("%d ", k);
//			if (++n % 10 == 0)printf("\n");
//		}
//	}
//	return 0;
//}


//4-2�ҵ�δ���
//#include<stdio.h>
//#include<time.h>
//int judge(int i)
//{
//	int j, k, n = 0;
//	j = i;
//	for (k = 0; j; j /= 10)
//	{
//		k = k * 10 + j % 10;
//
//	}
//	if (k == i)
//	{
//		return k;
//	}
//
//}
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int i, j, k, n = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		k=judge(i);
//		printf("%d ", k);
//		if (++n % 10 == 0)printf("\n");
//	}
//	return 0;
//}



//4-2����
//#include<stdio.h>
//#include<time.h>
//#include<math.h>
//int judge(int number)
//{
//	int judge, i = 0, middle_number, parity, j;//�������жϱ���������λ��������λ���м����������λ����ż
//	int middle_number2;//ȥ����λ��λʣ����
//	int shouwei, gewei;//��λ����λ
//	middle_number2 = number;//ȫ������ֵ
//	middle_number = number;
//	do//�ж�����λ��
//	{
//		i++;
//		middle_number = middle_number / 10;//�����ֳ���10ֱ��Ϊ0
//	} while (middle_number != 0);
//		parity = i / 2;//�������
//		for (j = 1; j <= parity; j++)
//		{
//			shouwei = middle_number2 / pow(10.0, (double)(i - 2 * j + 1));//��λ����
//			gewei = middle_number2 % 10;//��λ����
//			middle_number2 = (middle_number2 - shouwei * pow(10.0, (double)(i - 2 * j + 1))) / 10;//����λ���λȥ����ʣ�����
//			if ((shouwei == gewei) && j == parity)//��λ����λ����Ҷ��ѱȽ����
//			{
//				judge = 1;//1Ϊ��
//			}
//			else if(shouwei!=gewei)
//			{
//				judge = 0;
//				break;
//			}
//	
//		}
//		if (parity == 0)//���Ϊ��λ��һ��Ϊ������
//			judge = 1;
//		return judge;
//}
//
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		if (judge(i) == 1)
//		{
//			printf("%d\t,i");
//		}
//	}
//	return 0;
//}



//4-2
//#include <stdio.h>
//#include<time.h>
//
//int isPalindrome(int n);
//main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//
//	int i, n = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		if (isPalindrome(i))
//		{
//			printf("%7d", i);
//			if (++n % 10 == 0)
//				printf("\n");
//		}
//
//	}
//	printf("\n");
//}
//
//int isPalindrome(int n)
//{
//	int m = 0, a, b;
//	for (b = n; b > 0; b /= 10)
//	{
//		a = b % 10;
//		m = m * 10 + a;
//	}
//	return(m == n);
//}





//3-3�ҵ�
//#include<stdio.h>
//#include<time.h>
//double aaa(double a, double b, double c)
//{
//	int i = 0;
//	double ÿ�µ����� = b / 12;
//	double �˻��ϵ�Ǯ�� = 0;
//	for (i = 0; i < c; i++)
//	{
//		�˻��ϵ�Ǯ�� = (a + �˻��ϵ�Ǯ��) * (1 + ÿ�µ�����);
//	}
//	return �˻��ϵ�Ǯ��;
//}
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	double ÿ�µĴ���� = 0, ������ = 0, �·��� = 0, ÿ�µ����� = 0, �˻��ϵ�Ǯ�� = 0;
//	printf("������ÿ�µĴ����,������, �·���:");
//	scanf("%lf %lf %lf", &ÿ�µĴ����, &������, &�·���);
//	double d = aaa(ÿ�µĴ����, ������, �·���);
//	printf("%.3lf", d);
//
//	return 0;
//}



//3-4
//#include<stdio.h>
//#include<time.h>
//
//void output(int n)
//{
//	int m;
//	if ((m = n / 10) != 0)
//	{
//		output(m);
//	}
//	putchar(n % 10 + '0');
//}
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int num;
//	printf("Please enter number: ");     
//	scanf("%d", &num);
//	output(num);                           
//	printf("\n");
//	return 0;
//}
	


//3-5����
//#include <stdio.h>
//#include<time.h>
//float p(int n, float x)
//{
//    if (n == 0)
//        return 1;
//    else if (n == 1)
//        return x;
//    else
//        return (2 * n - 1) * x * p(n - 1, x) / (float)n - (n - 1) * p(n - 2, x) / (float)n;
//}
//
//int main()
//{
//    time_t t;
//    time(&t);
//    printf("%s 2020040606 ������\n", ctime(&t));
//
//    int n;
//    float x;
//    printf("�����������xֵ��");
//    scanf("%d %f", &n, &x);                                       
//    printf("%f\n", p(n, x));
//    return 0;
//}




//3-6��
//#include<stdio.h>
//#include<time.h>
//long jiecheng(int n)
//{
//	int i, p = 1;
//	for (i = 1; i <= n; i++)
//	{
//		p = p * i;
//	}
//	return p;
//}
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int m;
//	printf("��������n\n");
//	scanf("%d", &m);
//	printf("%d! =%d\n", m, jiecheng(m));
//
//}


//3-6
//#include<stdio.h>
//#include<time.h>
//long long factorial(int number)
//{
//	static long long y = 1;
//	int i;
//	for (i = 1; i < number; i++)
//	{
//		y = y * (i + 1);
//	}
//	return y;
//}
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	int i = 19;
//	long long x;
//	x = factorial(i);
//	for (i = 19; i > 0; i--)
//	{
//		printf("%d!��%lld\n", i, x);
//		x /= i;
//	}
//	return 0;
//}




//#include<stdio.h>
//#include<time.h>
//double aaa(double a, double b, double c)
//{
//	int i = 0;
//	double mydll = b / 12;//ÿ�µ�����
//	double zhsdqs = 0;//�˻��ϵ�Ǯ��
//	for (i = 0; i < c; i++)
//	{
//		zhsdqs = (a + zhsdqs) * (1 + mydll);
//	}
//	return zhsdqs;
//}
//
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ������\n", ctime(&t));
//
//	double mydcks = 0, nll = 0, yfs = 0, mydll = 0, zhsdqs = 0;
//	//ÿ�µĴ����,������,�·���,ÿ�µ�����,�˻��ϵ�Ǯ��
//	printf("������ÿ�µĴ����,������, �·���:");
//	scanf("%lf %lf %lf", &mydcks, &nll, &yfs);
//	double d = aaa(mydcks, nll, yfs);
//	printf("%.3lf", d);
//
//	return 0;
//}



#include <stdio.h>
#include<time.h>
float p(int n, float x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return (2 * n - 1) * x * p(n - 1, x) / (float)n - (n - 1) * p(n - 2, x) / (float)n;
}

int main()
{
    time_t t;
    time(&t);
    printf("%s 2020040606 ������\n", ctime(&t));

    int n;
    float x;
    printf("�����������xֵ��");
    scanf("%d %f", &n, &x);
    printf("%f\n", p(n, x));
    return 0;
}
