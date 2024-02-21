#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//字符串逆序
//方法一（非递归实现）迭代
//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int right = sz-2;//1./0  2.下标
//	int left = 0;
//	int right = strlen(arr) - 1;//减去下标
//	
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr);
//	return 0;
//
//}


//函数

//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;//减去下标
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int right = sz-2;//1./0  2.下标
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//
//}
//
////方法二
////递归
//void reverse(char* str)
//{
//	
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(strlen(str+1)>=2)
//		reverse(str+1);
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////多个参数
//void reverse(char arr[],int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	
//	if(left<right)
//		reverse(arr, left + 1, right - 1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	reverse(arr,left,right);
//	printf("%s\n", arr);
//	return 0;
//}
//数字每位求和
int DigitSum(unsigned int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}
int main()

{
	unsigned int n = 0;
	scanf("%u", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);


	return 0;

}