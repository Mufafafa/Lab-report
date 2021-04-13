#define _CRT_SECURE_NO_WARNINGS 1

//2-1我的问题
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("和：%d\n", a + b);
//	printf("差：%d\n", a - b);
//	printf("积：%d\n", a * b);
//	printf("商：%lf\n", (double)a / b);
//	return 0;
//}


//2-2
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
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
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	int i = 6, j = 12;
//	double x = 3.28,y=90;
//	printf("i=%d\tj=%c\n", i,'c');
//	printf("x=%E\ty=%d\n", x,(int)y);
//	return 0;
//}


//2-4我的错误
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	float a =0;//购买价格
//	float b =0;//使用年限
//	float c =0;//废品价值
//	float d ;//折旧费
//	float e ;//折扣后的价格
//	printf("请分别输入购买价格，使用年限，废品价值：");
//	scanf("%f %f %f", &a, &b, &c);
//	d = (a - c) / b;
//	e = a - d;
//	printf("%.2f", e);
//	return 0;
//}


//2-4问题
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	int limit, year;
//	double price, waste, dep, value;
//	printf("请输入物品的购买价格、使用年限和废品价值：\n");
//	scanf("%lf%d%lf", &price, &limit, &waste);
//	dep = (price - waste) / limit;
//	printf("请输入使用的年数：\n");
//	scanf("%d", & year);
//	value = price - dep * year;
//	printf("%d年后折旧后的价值为：%.2lf", year, value);
//	return 0;
//}




//2-5我的
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	float  loan = 20000.00;//贷款金额
//	float reim = 386.66;//每个月的还款金额
//	float rate = 0.06;//年贷款利率
//	float first = 0, second = 0, third = 0;
//	first = loan - reim + loan*rate / 12;
//	second = first - reim + first * rate / 12;
//	third = second - reim + second * rate / 12;
//	printf("第一个月需要还的金额：%.2f\n ", first);
//	printf("第二个月需要还的金额：%.2f\n ", second);
//	printf("第三个月需要还的金额：%.2f\n ", third);
//	return 0;
//}



//2-5
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	time(&t);
//	printf("%s 2020040606 黄淙昱\n", ctime(&t));
//
//	double debt = 20000.00, rate = 0.06 / 12, payment = 386.66;
//	double month1, month2, month3;
//	month1 = debt * (1 + rate) - payment;
//	month2 = month1 * (1 + rate) - payment;
//	month3 = month2 * (1 + rate) - payment;
//	printf("第一个月剩余的需还款金额为%.2lf\n", month1);
//	printf("第二个月剩余的需还款金额为%.2lf\n", month2);
//	printf("第三个月剩余的需还款金额为%.2lf\n", month3);
//	return 0;
//}


