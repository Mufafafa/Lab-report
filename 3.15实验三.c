#define _CRT_SECURE_NO_WARNINGS 1

//3-1Œ“µƒ≥ıº∂
//#include<stdio.h>
//#include<time.h>
//#include<math.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	int i = 0;
//	int sum1 = 0, sum2 = 0;
//	for (i = 10; i <= 100; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			sum1 = sum1 + i;
//		}
//	}
//	//printf("\n%d\n",sum1);
//	for (i = 10; i <= 100; i++)
//	{
//		sum2 = sum2 + i;
//	}
//	//printf("%d\n", sum2);
//	printf("%d\n", sum2 - sum1);
//	return 0;
//}


//3-1Œ“µƒΩ˙º∂
//#include<stdio.h>
//#include<time.h>
//#include<math.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	int a = 0;
//	int i = 0;
//	int sum1 = 0, sum2 = 0;
//	for (i = 11; i <= 100; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			//printf("%d ", i);
//			sum1 = sum1 + i;
//		}
//	}
//	for (i = 10; i <= 100; i++)
//	{
//		sum2 = sum2 + i;
//	}
//	//printf("%d\n%d\n",sum1,sum2);
//	printf("%d\n", sum2-sum1);
//	return 0;
//}






//3-2Œ“µƒ
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	int a = 0, b = 0, c = 0, d = 0, A = 0, i = 0;
//	for (i=0; i <10; i++)
//	{
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		A = (a + b + c + d) / 4;
//		printf("%d\n", A);
//	}
//	return 0;
//}


//3-2Œ“µƒ
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	int arr[8] = { 0 };
//	int i = 0, average = 0;
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 4; i += 2)
//	{
//		if ((arr[i] + arr[i + 1]) % 2 == 0)
//		{
//			average = (arr[i] + arr[i + 1]) / 2;
//			printf("%d ", average);
//		}
//		else
//		{
//			double a = 0;
//			a = (double)(arr[i] + arr[i + 1]) / 2;
//			printf("%.1lf ", a);
//		}
//	}
//	return 0;
//}


//3-2
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//
//	int n = 0, k = 0;
//	float score = 0, sum = 0, ave = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ave = 0, sum = 0;
//		for (k = 1; k <= 4; k++)
//		{
//			scanf("%f", &score);
//			sum += score;
//		}
//		ave = sum / 4;
//		printf("NO%d:%f\n", n, ave);
//	}
//	return 0;
//}



//3-3Œ“µƒ
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	char s[20] = { 'H','e','l','l','o' };
//	char* p;
//	int i, j;
//	for (p = s; *p; p++);
//	j = p - s;
//	for (p = s; *p;)
//	{
//		for (i = 0; i < j; i++)
//		{
//			printf("*");
//		}
//		printf("%c\n", *p++);
//		j--;
//	}
//	return 0;
//}






//3-3
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	char s[20], * p;
//
//	int i, j;
//
//	printf("«Î ‰»Î“ª∏ˆ”¢”Ôµ•¥ £∫\n");
//
//	scanf("%s", s);
//	for (p = s; *p; p++);
//
//	j = p - s;
//
//	for (p = s; *p;)
//
//	{
//		for (i = 0; i < j; i++)
//
//			printf("*");
//
//		printf("%c\n", *p++);
//
//		j--;
//
//	}
//	return 0;
//}








//3-4Œ“µƒŒ Ã‚
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	int i = 0;
//	for (i = 1; i <= 2000; i++)
//	{
//		int j = 0, sum1 = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum1 = sum1 + j + i / j;
//			}
//		}
//		int sum = (sum1 - 1) / 2 + 1;
//		if (i == sum && i != 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//3-4
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//	int i = 0;
//	for (i = 1; i <= 2000; i++)
//	{
//		int j = 0, sum = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum = sum + j;
//			}
//		}
//		if (i == sum && i != 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//3-5Œ“µƒ
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//
//	int i = 0, a = 0, b = 0, c = 0, sum = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		c = i % 10;
//		b = (i % 100 - c)/10;
//		a = (i - c - 10 * b) / 100;
//		sum = c * c * c + b * b * b + a * a * a;
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//3-6
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 ª∆‰»Í≈\n", ctime(&t));
//
//
//	double sum = 0, i = 0, k = 2;
//	int n = 0, num = 0;
//	scanf("%d", &n);
//	for (i = 1; num < n; i = k - i)
//	{
//		sum = sum + k / i;
//		k = k + i;
//		num++;
//	}
//	printf("%lf", sum);
//	return 0;
//}

