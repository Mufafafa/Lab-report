#define _CRT_SECURE_NO_WARNINGS 1


//2-1我的
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	float a = 0, b = 0;
//	printf("请输入购货金额：");
//	scanf("%f", &a);
//	if (a <= 500)
//	{
//		b = a;
//	}
//	else if (500 < a <= 1000)
//	{
//		b = 0.9 * a;
//	}
//	else
//	{
//		b = 0.8 * a;
//	}
//	printf("%.2f", b);
//	return 0;
//}


//2-1
//#include<stdio.h> 
//int main()
//{
//	float sum, realsum;
//	scanf("%f", &sum);
//	realsum = sum;
//	if (sum <= 1000 && sum > 500)
//		realsum = sum * 0.9;
//	if (sum > 1000) 
//		realsum = sum * 0.8;
//	printf("\nthe real sum is: %8.2f", realsum);
//	return 0;
//}


//2-1我的问题
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	int a = 0, b = 0, i = 0;
//	printf("请输入购货金额：");
//	scanf("%d", &a);
//	if (a <= 500)
//		i = 1;
//	else if (500 < a &&a<= 1000)
//		i = 2;
//	else if (a > 1000)
//		i = 3;
//	else
//		printf("输入错误");
//	switch (i)
//	{
//	case 1:		
//		printf("实际应付金额：%d", a);
//		break;
//	case 2:
//		b = 0.9 * a;
//		printf("实际应付金额：%d", b);
//		break;
//	case 3:
//		b = 0.8 * a;
//		printf("实际应付金额：%d", b);
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}





//2-2我的
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//
//	int a, b, c, d,A,B,sum;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a > b)
//		A = b;
//	else
//		A = a;
//	if (c > d)
//		B = c;
//	else
//		B = d;
//    sum = A + B;
//	printf("%d", sum);
//	return 0;
//}




//2-3我的
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	int arr[8] = {0};
//	int i = 0, sum = 0;
//
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 8; i++)
//	{
//		if (arr[i] % 2 == 0)
//			sum += arr[i];
//	}
//	printf("%d", sum);
//	return 0;
//}



//2-4我的
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n",  ctime(&t));
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < 10; i++)
//	{	
//		if (arr[i] > max)
//			max = arr[i];
//		else
//			min = arr[i];
//	}
//	printf("最大值为%d,最小值为%d", max, min);
//	return 0;
//}



//3-5我的
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	int a = 1;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		a = (a + 1) * 2;
//	}
//	printf("%d", a);
//	return 0;
//}





