#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>






//int main()
//{
//	int i = 0x11223344;//ʮ������
//	//����ֽ���0x44Ϊ���ݵĵ�λ�ֽ������ݴ�����ڴ�ĸߵ�ַ����0x11Ϊ���ݵĸ�λ�ֽ������ݴ�����ڴ�ĵ͵�ַ��    ��11 22 33 44
//	//С���ֽ���0x44Ϊ���ݵĵ�λ�ֽ������ݴ�����ڴ�ĵ͵�ַ����0x11Ϊ���ݵĸ�λ�ֽ������ݴ�����ڴ�ĸߵ�ַ��    ��44 33 22 11
//	//x86�ṹ���õ���С���ֽ���
//	return 0;
//}

//int main()//д�����жϵ�ǰ�����ֽ���
//{
//	int a = 1;
//	char* p = (char*)&a;//char* p��ʵ���Ƿ���һ���ֽ�
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//if (*p == 1)
//	//{
//	//	return 1;
//	//}
//	return *p;
//}
//int main()//дһ�����뺯���жϵ�ǰ�����ֽ���
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111   char����һ���ֽ�
//	//11111111111111111111111111111111 ������������λ������λ�����룩
//	signed char b = -1;//ͬ��
//	//11111111
//	unsigned char c = -1;//�޷���λ�������λ���Ƿ���λ
//	//11111111
//	//00000000000000000000000011111111   ��������(�ǰ��ձ������������͵ķ���λ��������)�޷���������������λ��0
//	//255
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//���䣺
//1. char ������signed char ���� unsigned char��C����û�й涨��ȡ���ڱ��������󲿷���signed char
//2. int �� signed int
//3. short �� signed short

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//11111111111111111111111110000000  �������������룩
//	printf("%u\n", a);//%u��ӡ�޷������Σ���ʮ������������ʽ��������λ���Ƿ���λ���������ԭ��
//	printf("%d\n", a);//%d��ӡ�з�������  ��ʮ������������ʽ���
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000
//	//11111111111111111111111110000000
//	printf("%u\n", a);//%u��ӡ�޷������Σ����λ���Ƿ���λ���������ԭ��
//	return 0;
//}
//���䣺char���͵�ȡֵ��ΧΪ -128~127
//   00000000 ->0
//	 00000001 ->1
//	 00000002 ->2
//	 ....
//	 01111111 ->127
//
//	 10000000 ->-128 ֱ�ӽ����-128 
//	 10000001 -> 11111110 -> -127
//	 .....
//	 11111110 -> 10000010 -> -2
//	 11111111 -> 10000001 -> -1

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int j = 10;
//	//00000000000000000000000000001010
//	printf("%d\n", i + j);//%d��ӡ�з�������
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010   -> -10
//	if (i + j > 0)//int �� unsigned ��ӣ�int����Ҫת��Ϊunsigned����,������޷�������
//	{
//		printf("����0\n");
//	}
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//��ѭ��
//		//printf("%d\n", i);//��ѭ�������Ǵ�ӡ�����з��ŵ����֣�unsigned int i һֱ������
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//a[i]= -128 -> 10000000
//	//a[i+1]     -> 01111111  -> 127
//	//-1 -2 -3 ... -128 127 126 ... 3 2 1 0 -1 -2 -3 ... -128 127 126 ... 3 2 1 0 ...
//	printf("%d", strlen(a));//�ҵ�'\0',ASCLL��ֵΪ0
//	//128+127=255
//	//�з��ŵ�charȡֵ��Χ��-128~127
//	//�޷��ŵ�charȡֵ��Χ��0~255
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%d\n", a);
//	//return 0;
//}

//unsigned char i = 0;//��Χ��0~255
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("ddd\n");
//	}
//	return 0;
//}


//���������ڴ��еĴ洢

//1E10 ��ʾ����1.0 X 10��ʮ�η�
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	float* p = (float*)&n;//floatռ�ĸ��ֽڣ�doubleռ�˸��ֽ�
//	//0  00000000  00000000000000000001001
//	//0.00000000000000000001001 * 2^(-126��
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	*p = 9.0;//�Ѹ����������ڴ���
//	//1001.0  --  1.001 * 2^3
//	//0  10000010  00100000000000000000000
//	//01000001000100000000000000000000
//	//��1091567616
//	printf("%d\n", n);//���ڴ���ȡ���������δ�ӡ
//	printf("%f\n", *p);
//	return 0;
//}
//�������Ĵ洢���ڴ�ķ�ʽ��
//���ݹ��ʱ�׼IEEE�������͵��ӹ���Э�ᣩ754������һ�������Ƹ�����V����ת�����������ʽ
//��-1��^S * M * 2^E
//�� - 1�� ^ S  ��ʾ����λ����S=0ʱ��VΪ��������S=1ʱ��VΪ����
//M��ʾ��Ч���֣����ڵ���1��С��2
//2^E ��ʾָ��λ
//������������ 5.5  - ʮ����											0.5 -ʮ����
//    �����ƣ� 101.1 ��С��������1��ʾλ2�ĸ�һ�η���					��-1��^0 * 1.0 * 2^(-1)
//			 101.1  --> 1.011 * 2^2 --> (-1)^0 *1.011 * 2^2
//										��s=0,M=1.011,E=2
//�����ȸ������洢ģ��  float��S��1bit�� E��8bit�� M��23bit��
//˫���ȸ������洢ģ��  double��S��1bit�� E��11bit�� M��52bit��
//��Ϊ1<=M<2,��1.xxxxx��������洢ʱ��Ĭ�ϵ�һλΪ1����˿�����ȥ��ֻ��������xxxxxx����,��ʡ��һλ��Ч���֣�����ȷ
//ָ��E��
//		 ���ȣ� E Ϊһ���޷��������� unsigned int ������ζ�ţ���� E Ϊ8λ������ȡֵ��ΧΪ0~255����� E Ϊ11λ������ȡֵ��ΧΪ0~2047��
//	 ���ǣ�����֪������ѧ�������е� E �ǿ��Գ��ָ����ģ����� IEEE 754�涨�������ڴ�ʱ E ����ʵֵ�����ټ���һ���м�����
//	 ����8λ�� E ������м�����127������11λ�� E ������м�����1023��
//	 ���磬2^10�� E ��10�����Ա����32λ������ʱ�����뱣���10+127=137����10001001
//int main()
//{
//	float a = 5.5f;
//	//(-1)^0 *1.011*2^2
//	//s=0, M=1.011, E=2
//	//���ڴ��д洢���ǣ�s=0, M=011, E=2+127=129
//	//01000000101100000000000000000000	  -- M�������油0
//	//0100 0000 1011 0000 0000 0000 0000 0000  
//	//ʮ�����ƣ�40 b0 00 00   --Ҳ�д�С���ֽ���
//	return 0;
//}
//���������ڴ���ȡ���ķ�ʽ��
//ָ�� E ���ڴ���ȡ���������ٷֳ����������
//1.	E ��ȫΪ0��ȫΪ1
//��ʱ���������Ͳ�������Ĺ����ʾ����ָ�� E �ļ���ֵ��ȥ127����1023)���õ���ʵֵ���ٽ���Ч���� M ǰ���ϵ�һλ��1��
//���磺0.5(1 / 2���Ķ�������ʽΪ0.1�����ڹ涨�������ֱ���Ϊ1������С��������1λ����Ϊ1.0 * 2 ^(- 1)��
//	    �����Ϊ��1 + 127 = 126����ʾΪ01111110����β��1.0ȥ����������Ϊ0������0��23λ00000000000000000000000��
//	    ��������Ʊ�ʾ��ʽΪ��
//	    0  01111110  00000000000000000000000
//2.  E ȫΪ0  
//	  ��ʱ����������ָ�� E ����1 - 127������1 - 1023����Ϊ��ʵֵ����Ч���� M ���ټ��ϵ�һλ��1�����ǻ�ԭΪ0.xxxxxx��С����
//	  ��������Ϊ�˱�ʾ��0���Լ��ӽ���0�ĺ�С�����֡�
//3.  E ȫΪ1 ����ʵ��E=128 �� 1024��
//	   ��ʱ�������Ч����MȫΪ0����ʾ+-���������ȡ���ڷ���λs��
	  

//ָ�����

//int main()
//{
//	//�ַ�ָ����һ�����������ڴ���ַ������׵�ַ��
//	char* ps = "dad";//�������ǰ��ַ��������ַ��ĵ�ַ�洢��ָ����
//	char arr[] = "aaa aa";
//	//�ַ�����ÿ���ַ�����һ���ڴ��ַ�����ַ��������ַ���ַ�ʹ����������ַ�����λ�á�
//	printf("%s\n", ps);//%s��ӡ�ַ����������ַ���ַ���Ϳ��Դ�ӡ�����ַ�����
//	printf("%s\n", arr);
//	printf("%c\n", *ps);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello C";//�����ȿ���һ��ռ䣬�ٴ������
//	char str2[] = "hello C";
//	const char* str3 = "hello C";
//	//*str3 = 'w';//�����ַ��������ݲ��ܸı�
//	char* str4 = "hello C";
//	//*str4 = 'w';
//	if (str1 == str2)
//	{
//		printf("1=2");
//	}
//	if (str3 == str4)
//	{
//		printf("3=4");
//	}
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 0,1,2,3,4,5 };
//	int c[] = { 3,44,5,6,7 };
//	int* arr[3] = { a,b,c };//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);// []��ʾָ�����������������ָ����ϻ��ȥһ����������ָ��ĵ�ַ�����磬p[0]�ȼ���p��p1�ȼ���(p+1)
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��
//int main()
//{
//	//int arr[10] = {2,23,4,5};
//	//int(*parr)[10] = &arr;//����ָ��  (*parr)����ָ��    ָ�������ָ��
//	////���д��int *parr[10],ָ�����飺װ��ָ�������,parr������[]���,[]���ȼ�����*,���ȼ�˳��()>[]>*
//	//printf("%p\n", parr);
//	double* d[5];
//	double* (*pa)[5] = &d;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	printf("%p\n", *p);
//	printf("%p\n", *p + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	return 0;
//}
//��������ʾ��Ԫ�ص�ַ��������������
//1. sizeof��arr������������Ĵ�С����λΪ�ֽ�
//2. &arr  ��������ĵ�ַ

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8 };
//	int(*p)[10] = &arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p) + i));
//	}
//	return 0;
//}

//void print1(int arr[3][5], int a, int b)
//{
//	int i, j;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int a, int b)
//{
//	int i,j;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,1,2}, {1,1,1,1,1}, {2,3,4,2,3} };
//	//print1(arr, 3, 5);
//	//��ά������������������һ��ָ���е�ָ�룬Ҳ����ָ���ά�����һ�еĵ�ַ��
//	print2(arr, 3, 5);
//	return 0;
//}

//int (*parr3[10])[5];
//parr3��һ���洢����ָ������飬�������ܹ����ʮ������ָ�룬ÿ������ָ���ܹ�ָ��һ�����飬�������Ԫ�أ�ÿ��Ԫ��Ϊint����

//һά���鴫��
//void test (int arr[])
//void test(int arr[10])//[]�����ֿ�д�ɲ�д
//void test(int *arr)
//void test2(int *arr[20])
//void test2(int **arr)//arr2����Ԫ�صĵ�ַ����int* �ĵ�ַ��Ҳ����һ������ָ��
//int main()
//{
//	int arr[10];
//	int *arr2[20];//���ָ�������,Ҳ���Ǵ�� int* ������
//	test(arr);
//	test2(arr2);//arr2����Ԫ�صĵ�ַ����int*�ĵ�ַ��Ҳ����һ������ָ��
//	return 0;
//}

//��ά���鴫��
//void test(int arr[3][5])
//void test(int arr[][5])
//void test(int arr[][])//��ģ�����ʡ�Ե��в���ʡ��
//void test(int *arr)//��ģ���ʱ��һά����
//void test(int* arr[5])//��ģ���ʱ��ָ�����飬�Ȳ������ζ�ά���飬Ҳ����ָ��
//void test(int (*arr)[5])
//void test(int** arr)//��ģ�������һ��һά���飬���Ƕ�������
//int main()
//{
//	int arr[3][5];
//	test(arr);//��ά������������������һ��ָ���е�ָ�룬Ҳ����ָ���ά�����һ�еĵ�ַ��
//	return 0;
//}

//һ�����鴫��
//void test(int *p)
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	test(arr);
//	test(p);
// 
//  int a = 1;
//	int* p1 = &a;
//	test(&a);
//	test(p1);
//	return 0;
//}

//�������鴫��
//void test(int **p)
//int main()
//{
//	int a = 1;
//	int* p = &a;
//	int** p1 = &p;//����ָ�룺���һ��ָ������ĵ�ַ
//	test(p1);
//	test(&p);//��һ��ָ��ĵ�ַ
//	int* arr[10];
//	test(arr);//��ָ�������������
//	return 0;
//}

//����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}	
//int main()
//{
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr��ָ�������ָ�룬��ŵĵ�������ĵ�ַ
//	
//	//����ָ�룺��ź�����ַ��ָ��
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//������ != &������
//	//������ == &������ == �����ĵ�ַ
//	int (*pf)(int, int) = &Add;
// 	int (*pf)(int, int) = Add;//Add === pf
//	//pf����һ������ָ�����
//	//����ָ��ĵ��ã�
//	int ret = (*pf)(4, 4);//1
//	int ret = pf(3, 3);//2
//	int ret = Add(2, 2);//3
//	int ret = (********pf)(5, 5);
//	//�������ַ�ʽһ��һ�����ں���ָ�����*pf�����*ֻ��һ�����裬û�����壬д�ɣ�***pf��Ҳһ����ע��ֻ���ں���ָ��������������
//	//������д��int ret= * pf(2,2);�൱�� * 4��err
//	printf("%d\n", ret);
//	return 0;
//}
//void test(char* s)
//{
//
//}
//int main()
//{
//	void (*p)(char*) = &test;
//	return 0;
//}

    //(*(void (*)())0)();
	//()0   ǿ������ת��������()���Ǻ�����ַ���ͣ��ǰѺ�����ַǿ��ת��Ϊ0 ��ַ
	//ʵ�����ǵ���0��ַ���ĺ���
	//�ò����޲Σ���������Ϊvoid
	//void (*)()  - ����ָ������
	//(void (*)())0  - ��0����ǿ������ת����������Ϊһ��������ַ
	//* (void (*)())0  - ��0��ַ�����˽����ò���
	//(*(void (*)())0)()  - ����0��ַ���ĺ���

	//void (*signal(int, void (*)(int)))(int);
	//void(*)(int) signal(int, void (*)(int));//ʵ���ϲ���������д 
	// typedef void(*pfun_t)(int);  - ��void (*)()�ĺ���ָ������������Ϊpfun_t
	// Ҳ�͵ȼ��� pfun_t signal(int,pfun_t);
	//	
	//1. signal����()��� - ˵��signal��һ��������
	//2. signal�����ĵ�һ������������int ���ڶ������������Ǻ���ָ��
	//	�ú���ָ�룬ָ��һ������Ϊint����������Ϊvoid�ĺ���
	//3. signal�����ķ�������Ҳ��һ������ָ��
	//	�ú���ָ�룬ָ��һ������Ϊint����������Ϊvoid�ĺ���
	//signal��һ����������

//����ָ������ - ��ź���ָ�������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfarr[2])(int,int) = { Add,Sub };//pfarr���Ǻ���ָ������ ͬ���͵ĺ���
//	int (*pfarr[2])(int, int) = { pf1,pf2 };
//  int (*pfarr[3])(int,int) = { NULL,Add,Sub };//pfarr[1]==Add;pfarr[2]==Sub;
//	return 0;
//}

//ָ����ָ�������ָ�� - 
//int (*p1)(int, int);//����ָ��
//int (* p2[3])(int, int);//����ָ������
//int (* (*p3)[3])(int, int) = &p2;//ȡ�����Ǻ���ָ������ĵ�ַ
//p3����һ��ָ�򡾺���ָ�����顿��ָ��

//int arr[2];
//�������ͣ�int[2]
//����Ԫ�����ͣ�int

//�ص����� - һ��ͨ������ָ����õĺ���
//int Calc(int (*pf)(int, int))//Calc��������һ���ص�����
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int ret = 0;
//	ret = Calc(Add);
//	printf("%d\n", ret);
//	ret = Calc(Sub);
//	printf("%d\n", ret);
//	return 0;
//}

//qsort  ������ ͷ�ļ���stdlib
//void qsort(void* base,//base�д�ŵĴ����������е�һ������ĵ�ַ
//		size_t num,//��������Ԫ�صĸ���
//		size_t size,//����������һ��Ԫ�صĴ�С����λΪ�ֽ�
//		int (*compare)(const void* e1, const void* e2)//�������Ƚϴ����������е�2��Ԫ�صĺ���
//		);//�����һ��Ԫ�ش��ڵڶ���Ԫ�أ�����ֵ����0����ȣ�����ֵ����0����һ��Ԫ��С�ڵڶ���Ԫ�أ�����ֵС��0

//qsort��ʹ��

//int compare(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	print(arr, sz);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
// //strcmp�������ַ������бȽϴ�С,e1<e2,����ֵС��0����ȣ�����ֵ����0��e1>e2,����ֵ����0
// //�Ƕ�Ӧλ���ϵ�ASCLL��ֵ�ıȽ�
// //����abcd
// //    adc
// //a=a��b<d,����abcd < adc
//int cmp_age(const void* e1, const void* e2)
//{
//	return (-1)* (((struct stu*)e1)->age - ((struct stu*)e2)->age);//����-1�����Խ������򣬻���e1��e2������λ��
//}
//int main()
//{
//	//�Խṹ���������
//	struct stu a[] = { {"zhangsan", 44}, {"lisi",33}, {"wanger",11} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	//������������
//	qsort(a, sz, sizeof(a[0]), cmp_name);
//	//������������
//	qsort(a, sz, sizeof(a[0]), cmp_age);
//	return 0;
//}


//ģ��qsort����ʵ��һ��ð�������ͨ���㷨
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i=0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp;
//		tmp = * buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//void bubble_sort(void* base,
//				int sz,
//				int width,
//				int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//����Ԫ�رȽ�
//			if ((*cmp)((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//����	
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//
//				//int tmp;
//				//tmp = *((char*)base + j * width);
//				//*((char*)base + j * width) = *((char*)base + (j + 1) * width);
//				//*((char*)base + (j + 1) * width) = tmp;
//			}
//		}
//	}
//}
//int  cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *(int*)e2;
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int width = sizeof(arr[0]);
//	bubble_sort(arr, sz, width, cmp_int);
//	print_arr(arr, sz);
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	struct stu a[] = { {"zhangsan", 44}, {"lisi",33}, {"wanger",11} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_name);
//}
//void test3()
//{
//	struct stu a[] = { {"zhangsan", 44}, {"lisi",33}, {"wanger",11} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_age);
//}
//
//int main()
//{
//	test1();
//	//test2();
//	//test3();
//	return 0;
//}

//һ�����ʽ����ֵ���Ժ���������
//sizeof�����ڲ��ı��ʽ�����������м��㣬ֻ��Ҫ֪�����;Ϳ��Լ����С����������Խ��Ҳ���Լ��������������ڣ�����ͨ�����ͽ��м���
//int main()
//{
//	short a = 4;
//	int b = 3;
//	int arr[3][4];
//	printf("%d\n", sizeof(a = 3 + b));//2  ���ʽ������������a����
//	printf("%d\n", a);//4
//	printf("%d\n", sizeof(arr[-1]));//16 
//	return 0;
//}

//struct test			//�ṹ�����ʹ�СΪ32���ֽ�
//{
//	char a[2];
//	short i[4];
//	int arr[4];
//	int* pa = arr;
//}* p;//�ṹ����* ��ʾΪ�ṹ��ָ�룬pΪָ�����
//int main()
//{
//	//ָ�����;�����ָ�������
//	printf("%d\n", sizeof(*p));
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);//p+32
//	printf("%p\n", (unsigned long)p + 0x1);//p+1  (���Σ�
//	printf("%p\n", (unsigned int*)p + 0x1);//p+4
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	int* p1 = (int*)(&arr + 1);
//	int* p2 = (int*)((int)arr + 1);//С���ֽ���01 00 00 00	02 00 00 00		03 00 00 00		04 00 00 00
//	printf("%x\n", p1[-1]);
//	printf("%x\n", *p2);//�����ĸ��ֽڣ�00 00 00 02  ����Ϊ��С���ֽ��������� 02 00 00 00
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(1,2),(3,4) };//���ű��ʽ
//	int* p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4] = (int(*)[4])a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//&p[4][2]-&a[4][2]  ��ַ�����Ϊ֮���Ԫ�ظ���		�͵�ַ���ߵ�ַ ����� -4
//	//10000000000000000000000000000100
//	//11111111111111111111111111111011
//	//11111111111111111111111111111100
//	//%p �Ե�ַ��ӡ��������֮�֣���11111111111111111111111111111100��ӡ��ʮ������ΪFFFFFFFC
//	return 0;
//}

//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)(*(a + 1));
//	printf("%d  %d\n", *(p1 - 1), *(p2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","efwff" };//�������ַ�����Ԫ�ص�ַ����ָ��������
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//%s �贫�ַ�������Ԫ�ص�ַ
//	printf("%c\n", *(*pa));//%s ����������
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}

//�ַ�������

//1.���Ȳ������Ƶĺ���
//�ַ�������
//int main()
//{
//	//strlen����ֵ����Ϊsize_t�޷�����ʼ�մ���0
//  //����ֵ���ַ����С�\0'ǰ����ֵ��ַ�������������'\0'
//	if (strlen("abf") - strlen("afsdfs") < 0)
//		printf("<0");
//	else
//		printf(">0");
//	return 0;
//}

//�ַ�������
//int main()
//{
//	char arr[20] = "#############";
//	//arr = "hello";//err
//	strcpy(arr, "hello");//arr��Ŀ���ַ��hello��copy��ֵ�ĵ�ַ��ԭ�ַ�����С���ܴ���Ŀ��ռ�ĵĴ�С��Ŀ��ռ����ɱ䣬�㹻��
//	char* p = "%%%%%%%%%%%";//�����ַ����Ǹ����������ɱ�,�ַ��������ݿɱ�
//	strcpy(p, "hello");
//	printf("%s\n", arr);
//	char arr2[] = { 'a','b','c' };
//	strcpy(arr, arr2);//strcpy�ὫԴ�ַ����е�'\0'copy��Ŀ��ռ��У�û�С�\0'���������Դ�ַ���������'\0'����
//	printf("%s\n", arr);
//	return 0;
//}

//�ַ���׷�ӣ����ӣ�strcat
//int main()
//{
//	char arr[20] = "hello \0$$$$$$$$$$$";//Ŀ��ռ����ɱ䣬�㹻��
//	char arr2[] = "world";// Դ�ַ���������'\0'����
//	strcat(arr, arr2);//��arr2����׷�ӵ�arr�ڣ�arr2��һ���ַ��Ž�arr�ĵ�һ��\0�ϣ�arr2��\0Ҳ��׷�ӵ�arr��
//	printf("%s\n", arr);//����ֵ��Ŀ���ַ����ĵ�ַ
//	return 0;
//}
//ģ��ʵ��strcat
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret =  dest;
//	assert(dest && src);//����Ϊ��ָ��
//	//���ҵ�Ŀ��ռ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//��ԭ�ַ���׷�ӵ�Ŀ��ռ��У�����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//���ص�Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char arr2[] = "world";
//	//my_strcat(arr, arr2);
//	printf("%s\n", arr);
//	printf("%s\n", my_strcat(arr, arr2));
//	return 0;
//}
//strcat�����Լ�׷���Լ�
//int main()
//{
//	char arr[20] = "abcd";//Ϊʲô���������ַ��Ϳ���׷�ӣ�
//	strcat(arr, arr);
//	printf("%s\n", arr);
//	return 0;
//}

//�ַ����Ƚ�
//int main()
//{
//	char* p = "abf";
//	char* q = "dsffs";
//	//p>q �� ��abf">"dsffs" ���ǱȽ����ַ����ĵ�ַ�����ǱȽ��ַ���
//	int ret = strcmp(p,q);//һһ��Ӧ�Ƚϣ�q�ĵ�һ���ַ���ASCLL��ֵ��p�ĵ�һ���ַ���ASCLL��ֵ�Ƚϣ������ȣ��ͶԵڶ����ַ���ascll��ֵ���бȽϣ�ֱ���ȳ���С
//	//����ֵ����Ϊint������һ���ַ���С�ڵڶ���������ֵС��0����ȣ�����ֵΪ0������ ����ֵ����0		�����ֵ�ɱ�����������VS��+-1
//	printf("%d\n", ret);
//	return 0;
//}
//ģ��ʵ��strcmp
//int my_strcmp(const char* s1,const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	/*if (*s1 > *s2)
//		return 1;
//	else
//		return -1;*/
//	return *s1 - *s2;
//}
//int main()
//{
//	char* p = "agc";
//	char* q = "avc";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//		printf("p>q");
//	else if (ret < 0)
//		printf("p<q");
//	else
//		printf("p==q");
//	return 0;
//}

//2.���������Ƶĺ���
//strncpy
//int main()
//{
//	char arr[20] = "abcdefghhhh";
//	char arr2[] = "qeqr";
//	strncpy(arr, arr2, 6);//ָ������Դ�ַ������ٸ��ַ��������Ĳ��ֻ�copy \0
//	printf("%s\n", arr);
//	return 0;
//}

//strncat
//int main()
//{
//	char arr[20] = "abcdefg\0########";
//	char arr2[] = "qeqr";
//	strncat(arr, arr2,6);//ָ��׷��Դ�ַ������ٸ��ַ�������Ĭ�ϼ�һ��\0,�ͽ����ˣ������Ĳ��ֲ���������\0
//	printf("%s\n", arr);
//	return 0;
//}

//strncmp
//int main()
//{
//	char arr[20] = "abcdefg";
//	char arr2[] = "abqeqr";
//	int ret = strncmp(arr, arr2, 5);//ָ���Ƚ϶��ٸ��ַ�
//	printf("%d\n", ret);
//	return 0;
//}

//strstr   - ��arr1�в����Ƿ����arr2
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	char* cp = (char*)str1;
//	if (*s2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	} 
//	return NULL;
//}
//int main()
//{
//	char arr1[20] = "abbbbbbcd";
//	char arr2[] = "bbc";
//	//��arr1�в����Ƿ����arr2
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return  0;
//}

//strtok - �÷ָ����ָ��ַ���
//cahr* strtok(char* str,const char* sep)  sep�����Ǹ��ַ����������������ָ������ַ�����
// �˺�����ı䱻�������ַ������ѷָ����ĳ�\0)��������ʹ�ô˺���ʱһ�㶼�Ƕ���ʱ���������ݽ����޸�
// ��strtok��һ��������ΪNULL���������ҵ�str�е�һ����ǣ������������ַ����е�λ��
// ��strtok��һ������ΪNULL�� ��������ͬһ���ַ����������λ�ÿ�ʼ��������һ�����
// ����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
// Ҳ����˵��ʹ�ô˺���ֻ�е�һ��ʹ���ַ���������֮����NULL
//int main()
//{
//	char arr[] = "afdfdsf@sf.sf";
//	char* sep = "@.";
//	char tmp[40] = { 0 };
//	strcpy(tmp, arr);
//	//afdfdsf\0sf\0sf
//	char* ret = NULL;
//	for (ret = strtok(tmp, sep); ret != NULL;ret=strtok(NULL,sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror
// char* strerror (int errnum)
// ���ش���������Ӧ�Ĵ�����Ϣ
// 
//���ú���ʧ��ʱ���������ô�����
//ȫ�ֵĴ�����
//int errno
#include <errno.h>  // ͷ�ļ�
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//	FILE* pf = fopen("C���Խ���.c", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	return 0;
//}

//strerror �Ѵ�����ת���ɴ�����Ϣ
//perror ͷ�ļ�Ϊstdio.h
// 1.�ȰѴ�����ת���ɴ�����Ϣ   2.�ٴ�ӡ������Ϣ (�������Զ������Ϣ)
//- ��ӡʱ���ڿ�ͷ���()�ڵ����ݣ���һ��ð�ţ�����һ���ո� ��֮����Ǵ�����Ϣ
//int main()
//{
//	//���ļ�ʧ�ܵ�ʱ�򣬻᷵��NULL
//	FILE* pf = fopen("Cyuyan.c","r");//r ��ʾ��ֻ��
//	if(pf==NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ַ����ຯ��
//isdigit �ж��ַ��Ƿ�Ϊ�����ַ�
#include<ctype.h>
//int isdigit (int c)	cΪASCLL��ֵ
//int main()
//{
//	char ch = '#';
//	int ret = isdigit(ch);
//	//���Ϊ�������ַ�������ֵ0������������ַ�������ֵΪ����
//	printf("%d\n", ret);
//	return 0;
//}

//islower  �ж��ַ��Ƿ�ΪСд��ĸ,
//int main()
//{
//	char ch = 'a';
//	int ret = islower(ch);
//	//���Ϊ��д��ĸ������ֵΪ0����֮Ϊ����
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת������
//tolower  �Ѵ�д�ַ�ת����Сд�ַ�
// int tolower (int c)
//toupper  ��Сд�ַ�ת���ɴ�д�ַ�
// int toupper (int c)
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != 0)
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//			//printf("%c ", arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//�ڴ��������

//�ڴ濽��
//memcpy - �������ص����ڴ�
//memmove - �����ڴ��ص������
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//��ǰ���󿽱�
//		while (num--)
//		{
//			*((char*)dest) = *((char*)src);
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10]= { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, 20);//��arr1�е�20���ֽڵ����ݿ�����arr2���ڴ���
//	//my_memcpy(arr2, arr1, 20);
//	//my_memcpy(arr1 + 2, arr1, 20);//0 1 0 1 0 1 0 7 8 9  -- 
//	//memcpy(arr1 + 2, arr1,20);//memcpyӦ�ÿ������ص����ڴ�	
//  //memcpy - ֻҪʵ���˲��ص����������ˣ���VS�е�ʵ�ּȿ��Կ������ص���Ҳ���Կ����ص��ڴ棬���ǰ�memmove���еģ���������������һ����
//	//memmove(arr1 + 2, arr1, 20);//memmove���Դ����ڴ��ص������
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}

//memcmp - �ڴ�Ƚ�
// int memcmp(const void* s1,const void* s2,size_t num)
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0 };
//	float arr2[] = { 1.0 ,3.0};
//	int ret = memcmp(arr1, arr2, 5);//�Ƚ��ĸ��ֽ�
//	//arr1 == arr2������ֵΪ0��arr1 > arr2 ,����ֵ�����㣬����С����
//	printf("%d\n", ret);
//	return 0;
//}

//memset �ڴ�����
//void* memset(void* ptr, int value,size_t num)
//int main()
//{ 
//	int arr[20] = { 0 };
//	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ� - �����ǰ�arrǰ20���ֽ�����Ϊ1
//	//0x01010101
//	return 0;
//}

//�ṹ��

//�����ṹ�壨������ֻ����һ�Σ�
//struct
//{
//	int age;
//	char arr[20];
//	char a[];
//}s;//������ֻ������һ�Σ��Ժ���ʹ��
//struct
//{
//	int age;
//	char arr[20];
//	char a[];
//}* ps;
//int main()
//{
//	ps = &s;//����������������������ṹ�嵱����ȫ��ͬ���������ͣ������ǷǷ���
//  struct s;//���ܴ���������û�нṹ���ǩ���ܹ���һ������
//	return  0;
//}

//����Ľṹ��������
/*struct N
{
	int a;
	struct N s1;
};*///�ṹ���ڲ����ܰ����Լ�������ܵĻ�����ռ�ڴ������
//�ṹ�����Լ��ҵ��Լ�����һ���ڵ� ��ÿ���ڵ����������ָ����ָ����ָ����һ���ڵ㣩
//��ȷ�Ľṹ�������ã�ͨ��ָ����ʵ�֣�
//struct node
//{
//	int date;
//	struct node* next; //�ҵ��Լ�ͬ���͵���һ�����ݽڵ�
//};

//�ṹ����ڴ����
//�������£�
//1. �ṹ��ĵ�һ����Ա�����ڽṹ��������ڴ��д洢λ�õ�0ƫ�ƴ���ʼ
//2. �ӵڶ�����Ա��������г�Ա��������һ������������Ա�Ĵ�С�ͱ�����Ĭ�϶������Ľ�Сֵ�����������������ĵ�ַ��
//VSĬ�϶�������8       Linux��Ĭ��ֵ
//3. �ṹ����ܴ�С�ǽṹ������г�Ա�Ķ������������Ǹ���������������
//struct S
//{
//	char a;
//	int i;
//	char s2;
//};
//struct n
//{
//	char c1;
//	int i;
//	double c3;
//}n1;
////4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ��ڲ���Ա����������������������
// //   �ṹ��������С����������������(��Ƕ�׽ṹ���ڲ���Ա�Ķ�����)��������
//struct s3
//{
//	char a;
//	struct n s2;//����������8
//	double d;
//}s4;//����������8	
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s)); //12
//	printf("%d\n", sizeof(n1));//16
//	printf("%d\n", sizeof(s4));//32
//	return 0;
//}
// 
//struct n
//{
//	int a;
//	char g;
//}s2;//�ṹ���СΪ8
//struct s3
//{
//	char a;
//	struct n s2;//����������4
//}s4;//����������4  
//int main()
//{
//	printf("%d\n", sizeof(s4));//12
//	return 0;
//}
//Ϊʲô�����ڴ���룿
//�󲿷ֵĲο����϶�������˵�ģ�
//1��ƽ̨ԭ����ֲԭ�򣩣��������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
//2������ԭ�����ݽṹ��������ջ��Ӧ�þ����ܵ�����Ȼ�߽��϶��롣ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�
//������˵��
//�ṹ����ڴ�������ÿռ�����ȡʱ�������
//���ԣ�Ϊ�˽�ʡ�ռ䣬����ƽṹ���ʱ����ռ�ÿռ�С�ĳ�Ա����������һ��

//�޸�Ĭ�϶�����  - �ṹ�ڶ��뷽ʽ�����ʵ�ʱ�����ǿ����Լ�����Ĭ�϶�����
//#pragma pack(2)//����Ĭ�϶�����Ϊ2
//struct n 
//{
//	char a;
//	int i;
//	char b;
//}s1;
// #pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n", sizeof(s1));//8
//	return 0;
//}
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct n
//{
//	char a;
//	int i;
//	char b;
//}s1;
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//struct m
//{
//	char a;
//	int i;
//	char b;
//}s2;
//int main()
//{
//	printf("%d\n", sizeof(s1));//6
//	printf("%d\n", sizeof(s2));//12
//	return 0;
//}

//offsetof - ����ṹ����ĳ����������׵�ַ��ƫ����
//offsetof(type,member)
//ͷ�ļ�Ϊstddef
//#include<stddef.h>
//struct n
//{
//	char c1;
//	int i;
//	char c2;
//}s;
//int main()
//{
//	printf("%d\n", offsetof(s, c1));
//	printf("%d\n", offsetof(s, i ));
//	printf("%d\n", offsetof(s, c2));
//	return 0;
//}

//�ṹ�崫��
//struct S
//{
//	int arr[100];
//	char c;
//}s;
////��ֵ  ����ѹջ��ϵͳ�����ϴ󣬵��������½�
//void print1(struct S s)
//{
//	printf("%d\n", s.arr);
//}
////��ַ ����ʡ�ռ��ʱ�䣩
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->arr);
//}
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}

//λ��  ����ʡ�ռ䣩

//λ�εĳ�Ա���ͱ���Ϊint ,unsigned int ,signed int ,char���������μ��壩,λ�γ�Ա�����һ��ð�ź�һ������
// λ�εĿռ����ǰ�����Ҫ��4���ֽڣ�int����1���ֽڣ�char)�ķ�ʽ�����ٵ�
//λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ��
//struct S
//{
//	//�ȿ���4���ֽ�  - 32��bitλ
//	int _a : 2;//ռ2��bitλ
//	int _b : 5;//ռ5��bitλ
//	int c : 10;//ռ10��bitλ
//	//17
//	//��Ϊ17+30>32������Ҫ�ٿ���4���ֽ� - 32��bitλ
//	//����d��30��bitλ�Ƿ�ռ�õ�һ�ο��ٵ�δʹ�õ�15��bitλ�ǲ�ȷ���ģ�����λ���漰�ܶ಻ȷ�����أ����ܿ�ƽ̨ʹ�ã���ͬƽ̨��ʵ���ǲ�һ����
//	int d : 30;//ռ30��bitλ
//	//int i : 33;//err ���ܳ���32��bitλ
//}s;
//int main()
//{
//	printf("%d\n", sizeof(s));//8
//	return 0;
//}

//λ�ε��ڴ����
//��VS��,һ���ֽ��ڲ��������Ǵӵ�bitλ����bitλʹ�ã�����������ʹ�ã���ʣ�µ�bitλ������һ����Աʹ��ʱ��ʣ�µ�bitλ���˷ѵ���
//�����ı�������һ����������
//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//}s;
//int main()
//{
//	s = { 0 };
//	s.a = 10;//1010  ����aֻ������bitλ�����Է�010
//	//00000010
//	s.b = 12;//1100
//	//01100010
//	s.c = 3;//00011
//	//01100010   00000011
//	s.d = 4;//000100
//	//01100010   00000011   00000100
//	//0x62       0x03       0x04
//	return 0;
//}

//λ�εĿ�ƽ̨����
//1. int λ�α������з����������޷������ǲ�ȷ���ġ�
//2��λ�������λ����Ŀ����ȷ����(16λ�������16, 32λ�������32��д��27����16λ����������⡣
//3��λ���еĳ�Ա���ڴ��д������ҷ��䣬���Ǵ�����������׼��δ���塣
//4. ��һ���ṹ��������λ���ڶ���λ��Ա�Ƚϴ��޷������ڵ�һ��λ��ʣ���λʱ��������ʣ���λ�������ã����ǲ�ȷ���ġ�
//�ܽ᣺
//���ṹ��ȣ�λ�ο��Դﵽͬ����Ч�������ǿ��ԺܺõĽ�ʡ�ռ䣬�����п�ƽ̨��������ڡ�

//ö��  - һһ�о�
//����ö������
//ö�ٵ��ŵ�
//Ϊʲôʹ��ö�٣�
//���ǿ���ʹ�ã� define ���峣����Ϊʲô��Ҫʹ��ö�٣�ö�ٵ��ŵ㣺
//1�����Ӵ���Ŀɶ��ԺͿ�ά����
//2���ͣ� define ����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
//3����ֹ��������Ⱦ����װ��
//4�����ڵ���
//5��ʹ�÷��㣬һ�ο��Զ���������
//enum Color
//{
//	//RED,	//0
//	//GREEN,  //1
//	//BLUE    //2
//	//����1
//	RED=5,	//5
//	GREEN=8,  //8
//	BLUE    //9
//};
//int main()
//{
//	enum Color c = BLUE;
//	printf("%d\n", c);
//	printf("%d\n", sizeof(c));
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

//������
//����Ҳ��һ��������Զ�������
//�������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й����壩
//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ�������ٵ����������������Ǹ���Ա����
//union Un
//{
//	char a;
//	int i;
//}s;
//int main()
//{
//	s = { 10 };//a��i���Ž�10
//	printf("%p\n", &s);
//	printf("%p\n", &(s.a));
//	printf("%p\n", &(s.i));
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//�ж�ϵͳ��С�˴洢��ʽ
//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int check_sys()
//{
//	union un
//	{
//		char a;
//		int i;
//	}s ;
//	s.i = 1;
//	return s.a;
//}
//int main()
//{
//	int ret=check_sys();
//	if (ret = 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//�������С�ļ���
//�����ϵĴ�С����������Ա�Ĵ�С��
//��������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
//union un
//{
//	char a[5];//1  5
//	int i;//4
//}s;//8  ����������4�ı���
//union u
//{
//	short a[5];//2  10
//	int i;//4
//}s2;//10������������4�ı�����������12
//int main()
//{
//	printf("%d\n", sizeof(s));//8
//	printf("%d\n", sizeof(s2));//12
//	return 0;
//}

//����  - ��̬�ڴ濪�٣�malloc  free  realloc  calloc)����Ա�Լ�������ڴ�

//malloc
//void* malloc(size_t size)
//���ٳɹ����ؿ��ٺÿռ�ĵ�ַ������ʧ�ܷ���NULL
//int main()
//{
//	//����10�����οռ� - 10*sizeof��int��
//	int arr[10];//ջ��
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(10 * sizeof(int));//mallocĬ�Ϸ���ֵλvoid*
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", p[i]);//p[i] -> *(p+i)
//	}
//	//���տռ�
//	free(p);//��p��ָ��Ŀռ���Ϊ�գ�����p����������û��
//	//void free(void* ptr) 
//	//�������ptr��ָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ģ��������λNULL����free����ʲô�²���	
//	//malloc �� free ͷ�ļ�����stdlib.h��
//	p = NULL;
//	return 0;
//}

//calloc
//void* calloc(size_t num,size_t size)
//Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ�ÿ���ֽڳ�ʼ��Ϊ0
//int main()
//{
//	//int* p = (int*)malloc(40);
//	int* p = (int*)calloc(40, sizeof(int));
//	if (p == NULL)
//		return 0;
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc - ���¿��ٿռ�
//void* realloc(void* ptr,size_t size)  ����ֵ�ǵ�������ڴ��ʼλ��
//���1 - ԭ�ռ�������㹻�Ŀռ俪���µĿռ�
//�������1��ʱ��Ҫ��չ�ڴ��ֱ��ԭ���ڴ�֮��ֱ��׷�ӿռ䣬ԭ���ռ�����ݲ������仯��
//���2	- ԭ�ռ����û���㹻�Ŀռ俪���µĿռ�
//�������2��ʱ��ԭ�пռ�֮��û���㹻��Ŀռ�ʱ����չ�ķ����ǣ��ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�á������������ص���һ���µ��ڴ��ַ��
//���3 - �ѿռ���û�к��ʵĿռ���ʹ�ã�����ֵΪNULL
//������������������� realloc ������ʹ�þ�Ҫע��һЩ��
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));//mallocĬ�Ϸ���ֵλvoid*
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", p[i]);//p[i] -> *(p+i)
//	}
//	//������Ҫpָ��Ŀռ������Ҫ20�����εĿռ�
//	//realloc�����ռ�
//	int* ptr =(int*) realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//		p = ptr;
//	//���տռ�
//	free(p);
//	return 0;
//}
//int main()
//{
//	int* p =(int*) realloc(NULL, 40);//���﹦��������malloc������ֱ���ڶ�������40���ֽڵĿռ�
//	return 0;
//}

//��̬�ڴ濪�ٳ����Ĵ���
//1.��NULLָ��Ľ����ô��� 
//����һ���ڴ��Ҫ�������NULL�жϣ�Ȼ����ʹ��
//2. �Զ�̬�ڴ��Խ�����
//3. ʹ��free�ͷŷǶ�̬���ٵĿռ�
//4. ʹ��free�ͷŶ�̬�ڴ��һ����
//5. ��ͬһ�鶯̬���ٵĿռ䣬����ͷ�
//	  ������ʹ����free��Ҫ���丳ֵNULL���ٴ��ͷ�Ҳ��������κβ���
//6. ��̬���ٵ��ڴ�ռ������ͷţ��ڴ�й©���Ƚ�����
//	 ��̬���ٵĿռ������ֻ��շ�ʽ������free���������
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	//for (i = 0; i < 40; i++)
//	//{
//	//	*(p + i) = i;//Խ����ʣ�pʵ������40���ֽڵĿռ䣬10�����Σ�������40������ 
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;//p�ڵ���
//	}
//	free(p);//err  -  p�����Ƕ�̬���ٿռ����ʼ��ַ��ָ��̬�����ڴ��һ����
//	p = NULL;
//	return 0;
//}

//��̬�ڴ� �ı�����

 
//void GetMemory(char* ptr)
//{
//	ptr = (char*)malloc(100);
//}
//void test()
//{
//	char* p = NULL;
//	GetMemory(p);
//	strcpy(p, "hello world");
//	printf("%s\n", p);
//}
//int main()
//{
//	test();
//	return 0;
//}
//str ���� GetMemory ������ʱ����ֵ���ݣ�����GetMemory �������β� p �� str ��һ����ʱ������
//�� GetMemory �����ڲ���̬����ռ�ĵ�ַ������� p �У�����Ӱ����� str �����Ե� GetMemory ��������֮�� str ��Ȼ�� NULL ������ strcpy ��ʧ�ܡ�
//�� GetMemory ��������֮���β� p ���٣�ʹ�ö�̬���ٵ�100���ֽڴ����ڴ�й©���޷��ͷš�
//����1��
//char* GetMemory(char* ptr)
//{
//	ptr = (char*)malloc(100);
//	return ptr;
//}
//void test()
//{
//	char* p = NULL;
//	p = GetMemory(p);
//	strcpy(p, "hello world");
//	printf("%s\n", p);
//	printf(p);//printf("hello world") - ʵ�����ǰ����ַ���h'�ĵ�ַ����printf����
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//����2��
//void GetMemory(char** ptr)
//{
//	*ptr = (char*)malloc(100);
//}
//void test()
//{
//	char* p = NULL;
//	GetMemory(&p);
//	strcpy(p, "hello world");
//	printf(p);
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//char* GetMemory()
//{
//	char ptr[] = "hello world";
//	return ptr;//ptrΪ�ֲ���������ջ�����ٵģ�����������p�ͻ����ˣ����ݲ�������
//}
//void test()
//{
//	char* p = NULL;
//	p = GetMemory();
//	printf(p);//���ֵ
//}
//int main()
//{
//	test();
//	return 0;
//}
//GetMempry �����ڲ���������������ջ���ϴ�����
//���˺����� p ����Ŀռ�ͻ����˲���ϵͳ
//���صĵ�ַ��û��ʵ�ʵ����壬���ͨ�����صĵ�ַ��ȥ�����ڴ���ǷǷ������ڴ��

//void test()
//{
//	char* p = (char*)malloc(100);
//	strcpy(p, "hello");
//	free(p);//free����������p��ָ��ռ�ĵ�ַ��ֻ���ͷŴ˿ռ䣬���Ǵ˿ռ��Ѿ��ͷŸ�ϵͳ�ˣ������ٶ�������ˣ���Ȼ���ǷǷ�����
//	if (p != NULL)
//	{
//		strcpy(p, "world");
//		printf(p);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//C / C + �������ڴ����ļ�������
//1��ջ���� stack )����ִ�к���ʱ�������ڲ��ֲ������Ĵ洢��Ԫ��������ջ�ϴ���������ִ�н���ʱЩ�洢��Ԫ�Զ����ͷš�
//	ջ�ڴ�������������ڴ�������ָ��У�Ч�ʺܸߣ����Ƿ�����ڴ��������ޡ�
//	ջ����Ҫ������к���������ľֲ������������������������ݡ����ص�ַ�ȡ�
//2. ������ heap )��һ���ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ������ OS ���ա����䷽ʽ����������
//3�����ݶΣ���̬������static �����ȫ�ֱ�������̬���ݡ������������ϵͳ�ͷš�
//4������Σ���ź����壨���Ա������ȫ�ֺ������Ķ����ƴ��룬��ִ�д���/ֻ������

//��������  - �ṹ������һ����Ա��һ��δ֪��С������

//����������ص㣺
//���ṹ�е����������Աǰ���������һ��������Ա��
//�� sizeof ���ص����ֽṹ��С����������������ڴ档
//���������������Ա�Ľṹ�� malloc(�����������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��

//struct S
//{
//	int n;
//	//int arr[];//δ֪��С
//	int arr[0];//δ֪��С
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4
//
//	//����arr��С��10��int
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	//����
//	struct S* ptr=(struct S*)realloc(p, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//}s;
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	p->n = 10;
//	p->arr = (int*)malloc(10 * sizeof(int));
//	if (p->arr == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	//��������
//	int* ptr = (int*)realloc(p->arr, 20 * sizeof(int));
//	if (ptr == NULL)
//		return 1;
//	p->arr = ptr;
//	//ʹ��
//	//�ͷ�
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}

//�������ִ��붼�������ͬ���Ĺ��ܣ����Ƿ���һ�����ֺô�
//��һ���ô��ǣ������ڴ��ͷ�
//������ǵĴ�������һ���������õĺ����У������������˶����ڴ���䣬���������ṹ�巵�ظ��û���
//�û����� free �����ͷŽṹ�壬�����û�����֪������ṹ���ڳ�ԱҲ��Ҫ free �������㲻��ָ���û�����������¡�
//���ԣ�������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է�����ˣ������ظ��û�һ���ṹ��ָ�룬�û���һ�� free �Ϳ��԰����е��ڴ�Ҳ���ͷŵ���
//�ڶ����ô��ǣ����������ڷ����ٶȣ�
//�������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ��

//�ļ�

//�����ϵ��ļ����ļ���
//�����ڳ�������У�����һ��̸���ļ������֣������ļ��������ļ������ļ����ܵĽǶ�������ģ���
//2.1 �����ļ�
//����Դ�����ļ�����׺Ϊ�� c )��Ŀ���ļ��� windows ������׺Ϊ�� obj )����ִ�г��� windows ������׺Ϊ�� exe )��
//2.2 �����ļ�
//�ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ��������������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ���
//�������۵��������ļ���
//����ǰ�������������ݵ���������������ն�Ϊ����ģ������ն˵ļ����������ݣ����н����ʾ����ʾ���ϡ�
//2.3 �ļ���
//һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ������á��ļ�������3���֣��ļ�·�����ļ������ɣ��ļ���׺
//���磺c:\code\test.txt
//Ϊ�˷���������ļ���ʶ������Ϊ�ļ�����
//3���ļ��Ĵ򿪺͹ر�
//3.1 �ļ�ָ��
//�����ļ�ϵͳ�У��ؼ��ĸ�����"�ļ�����ָ��"�����"�ļ�ָ��"��
//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֣��ļ�״̬���ļ���ǰ��λ�õȣ���
//��Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������ϵͳ�����ģ�ȡ��FILE .
//��ͬ�� C �������� FILE ���Ͱ��������ݲ���ȫ��ͬ�����Ǵ�ͬС�졣
//ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ�� FILE �ṹ�ı�������������е���Ϣ��ʹ���߲��ع���ϸ�ڡ�
//һ�㶼��ͨ��һ�� FILE ��ָ����ά����� FILE �ṹ�ı���������ʹ���������ӷ��㡣
//�������ǿ��Դ���һ�� FILE*��ָ�������
//FILE* pf ;//�ļ�ָ�����
//���� pf ��һ��ָ�� FILE �������ݵ�ָ�������
//����ʹ pf ָ��ĳ���ļ����ļ���Ϣ������һ���ṹ���������
//ͨ�����ļ���Ϣ���е���Ϣ���ܹ����ʸ��ļ���Ҳ����˵��ͨ���ļ�ָ������ܹ��ҵ������ص��ļ���
//3.2�ļ��Ĵ򿪺͹ر�
//�ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ���
//�ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ�� FILE* ��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ��
//ANSIC �涨ʹ�� fopen ���������ļ��� fclose ���ر��ļ���
//���ļ� - ����ʧ���򷵻�һ��NULL��
//FILE * fopen(const char* filename , const char* mode);
//�ر��ļ�
//int fclose(FILE * stream);
//�򿪷�ʽ��
//�ļ�ʹ�÷�ʽ					����													���ָ���ļ�������
//" r "��ֻ����			Ϊ���������ݣ���һ���Ѿ����ڵ��ı��ļ�					����
//" w "��ֻд��			Ϊ��������ݣ���һ���ı��ļ�								����һ���µ��ļ�
//" a "��׷�ӣ�			���ı��ļ�β�������										����һ���µ��ļ�
//" rb "��ֻ����		Ϊ���������ݣ���һ���������ļ�							����
//" wb "��ֻд��		Ϊ��������ݣ���һ���������ļ�							����һ���µ��ļ�
//" ab "��׷�ӣ�		��һ���������ļ�β�������									����
//" r +"����д��		Ϊ�˶���д����һ���ı��ļ�								����
//" w +"����д��		Ϊ�˶���д������һ���µ��ļ�								����һ���µ��ļ�
//" a +"����д��		��һ���ļ������ļ�β���ж�д								����һ���µ��ļ�
//" rb +"����д��		Ϊ�˶���д��һ���������ļ�								����
//" wb +"����д��		Ϊ�˶���д���½�һ���µĶ������ļ�							����һ���µ��ļ�
//" ab +"����д��		��һ���������ļ������ļ�β���ж���д						����һ���µ��ļ�
//������			����				  ������
//fgetc			�ַ����뺯��(һ���ַ�)	����������
//fputc			�ַ��������(һ���ַ�)	���������
//fgets			�ı������뺯��(һ���ַ�)����������
//fputs			�ı����������(һ���ַ�)���������
//fscanf		��ʽ�����뺯��			����������
//fprintf		��ʽ���������			���������
//fread			����������				�ļ�
//fwrite		���������				�ļ�

//int main()
//{
//	FILE* pf = fopen("test.c", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ret=fgetc(pf);//���ļ���ȡ�����߶�ȡ���󣬻᷵��EOF ����-1
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	/*int ret = fgetc(stdin);
//	fputc(ret,stdout);*/
//	
//	return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	FILE* pf = fopen("test.c", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputs("sfsf\n", pf);//�������ֶ�����
//	fputs("fsfaf\n", pf);
//	fputs("ffff\n", stdout);
//	//���ļ�
//	int n = 4;
//	fgets(arr, n, pf);//��pf�ж�ȡ(n-1)���ַ���arr�У�ʵ�����Ƕ�ȡ��n-1�����ַ������һ��������\0��
//	fgets(arr, n, stdin);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int i;
//	char a;
//}s;
//int main()
//{
//	s = { "abvvv",5,'c' };
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf, "%s %d %c",s.arr,s.i,s.a);//��printf���˸�FILE*����arr�ڴ��е����������pf�ļ���
//	//���ļ�
//	fscanf(pf, "%s %d %c", s.arr, &(s.i), &(s.a));//��scanf���˸�FILE*,��pf�ļ����������뵽arr�ڴ���
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�����ƶ�ȡд��
//struct S
//{
//	char arr[10];
//	int i;
//	float f;
//}s = {"anvnsndf",10,3.3f};
//int main()
//{
//	//�����Ƶ���ʽ��д�Ͷ�ȡ
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);//��Buffer�а����Ϊcount����СΪelesize�ֽڵ�����д������
//	//ע�⣺�ַ������������ݺ��ı�����һ�£������ζ��������ݺͶ��������ݲ�һ����������fread����ȡ����������
//	//���ļ�
//	//fread(&s, sizeof(struct S),1,pf);//�����а�����count����СΪelesize�ֽڵ�����д��Buffer��,����ֵ�Ƕ�ȡ�ĸ���
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sscanf  sprintf (���ַ������ԣ�
//struct S
//{
//	char arr[10];
//	int i;
//	float f;
//}s = { "hello",10,2.2f };
//int main()
//{
//	//sprintf ��һ����ʽ�������ݣ�ת�����ַ���
//	char buf[100];
//	sprintf(buf, "%s %d %f", s.arr, s.i, s.f);
//	printf("%s\n", a);
//
//	//sscanf ��buf�ַ����л�ԭ��һ���ṹ������
//	struct S tmp = { 0 };
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.i), &(tmp.f));
//	printf("%s %d %f", tmp.arr, tmp.i, tmp.f);
//	return 0;
//}

//scanf ��Ա�׼����ĸ�ʽ����������䩁 stdin
//fscanf ��������������ĸ�ʽ����������� - stdin /�ļ� 
//sscanf ��һ���ַ����ж�ȡһ����ʽ��������
//printf ��Ա�׼����ĸ�ʽ�������� - stdout
//fprintf �������������ĸ�ʽ�������� - stdout /�ļ�
//sprintf ��һ����ʽ�������ݣ�ת�����ַ���


//�ļ��������д

//fseek  - �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//SEEK_CUR - �ļ�ָ��ĵ�ǰλ��
//SEEK_END - �ļ�ָ��ָ���ļ���β
//SEEK_SET - �ļ�ָ��ָ���ļ���ͷ
// 
//ftell - �����ļ�ָ���������ʼλ�õ�ƫ����
//rewind - �����ļ�ָ�뵽�ļ�����ʼλ��
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//	int ret=ftell(pf);//1
//	printf("%d\n", ret);
//	//�����ļ�ָ��
//	fseek(pf, -1, SEEK_CUR);//���ļ�ָ��ĵ�ǰλ��ƫ��-1���ֽڣ�������ƫ��һ���ֽ�
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ret = ftell(pf);//1
//	printf("%d\n", ret);
//	fseek(pf, 10, SEEK_END);
//	rewind(pf);//�����ļ�ָ�뵽�ļ�����ʼλ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ret=ftell(pf);
//	printf("%d\n", ret);
//	rewind(pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ı��ļ��Ͷ������ļ�
//
//�������ݵ���֯��ʽ�������ļ�����Ϊ�ı��ļ����߶������ļ���
//�������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ���
//���Ҫ����������� ASCII �����ʽ�洢������Ҫ�ڴ洢ǰת������ ASCII �ַ�����ʽ�洢���ļ������ı��ļ���
//һ���������ļ�������ô�洢���أ�
//�ַ�һ���� ASCII ��ʽ�洢����ֵ�����ݼȿ����� ASCII ��ʽ�洢��Ҳ����ʹ�ö�������ʽ�洢��
//��������10000������� ASCII �����ʽ��������̣��������ռ��5���ֽڣ�ÿ���ַ�һ���ֽڣ�������������ʽ��������ڴ�����ֻռ4���ֽڣ�VS2013���ԣ���
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ���ȡ�������ж�

//������ʹ�õ� feof
//�μǣ����ļ���ȡ�����У������� feof �����ķ���ֱֵ�������ж��ļ����Ƿ����������Ӧ���ڵ��ļ���ȡ������ʱ���ж϶�ȡʧ�ܽ��������������ļ�β������
//1���ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�Ϊ EOF(fgetc ) )������ NULL(fgets)
//���磺
//�� fgetc �ж��Ƿ�Ϊ EOF .
//�� fgets �жϷ���ֵ�Ƿ�Ϊ NULL
//2���������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
//���磺
//�� fread �жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����

//fgetc �����ڶ�ȡ������ʱ�򣬻᷵�� EOF
//������ȡ��ʱ�򣬷��ص��Ƕ�ȡ�����ַ��� ASCII ��ֵ
//fgets �����ڶ�ȡ������ʱ�򣬻᷵�� NULL
//������ȡ��ʱ�򣬷��ش���ַ����Ŀռ���ʼ��ַ
//fread �����ڶ�ȡ��ʱ�򣬷��ص���ʵ�ʶ�ȡ��������Ԫ�صĸ���
//������ֶ�ȡ����������Ԫ�صĸ���С��ָ����Ԫ�ظ�������������һ�ζ�ȡ�ˡ�

//д�����test.txt�ļ�����һ�ݣ�����text2.txt
//int main()
//{
//	FILE* pf = fopen("text.txt","r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pf2 = fopen("text2.txt", "w");
//	if (pf2 == NULL)
//	{
//		fclose(pf);
//		perror("fopen2");
//		return 1;
//	}
//	int ch;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		//д�ļ�
//		fputc(ch, pf2);
//	}
//	//�ж���ʲôԭ���ļ�����
//	if (feof(pf))
//		printf("�����ļ�������־���ļ���������\n");
//	else if (ferror(pf))
//		printf("�ļ���ȡʧ�ܽ���\n");
//	fclose(pf);
//	pf = NULL;
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}

//�ļ�������
//ANSIC ��׼����"�����ļ�ϵͳ"����������ļ��ģ���ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊ������ÿһ������ʹ�õ��ļ�����һ��"�ļ�������"��
//���ڴ������������ݻ����͵��ڴ��еĻ�������װ�����������һ���͵������ϡ�
//����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ�������뵽�ڴ滺��������������������Ȼ���ٴӻ���������ؽ������͵����������������������)��
//�������Ĵ�С���� C ����ϵͳ�����ġ�
//#include<windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", " w ");
//	fputs(" abcdef ", pf); //�Ƚ�����������������
//	printf("˯��10�멁�Ѿ�д�����ˣ��� test . txt �ļ��������ļ�û������\n "); 
//	Sleep(10000);
//	printf("ˢ�»�����\n ");
//	fflush(pf); //ˢ�»�����ʱ���Ž����������������д���ļ������̣� 
//	//ע fflush �ڸ߰汾�� vs �ϲ���ʹ����
//	printf("��˯��10�멁��ʱ���ٴδ� test . txt �ļ����ļ���������\n "); 
//	Sleep(10000);
//	fclose(pf);
//	//ע�� fclose �ڹر��ļ���ʱ��Ҳ��ˢ�»����� 
//	pf = NULL;
//	return 0;
//}

//  ����ķ��뻷����ִ�л���
// 
//�� ANSI C ���κ�һ��ʵ���У�����������ͬ�Ļ���
//��1���Ƿ��뻷���������������Դ���뱻ת��Ϊ��ִ�еĻ���ָ�
//��2����ִ�л�����������ʵ��ִ�д���
//���΢��2023.4.8.  21:06�����¼

//Ԥ�������

//Ԥ�������
//int main()
//{
//	printf("%s\n", __FILE__);//���б����Դ�ļ�·��
//	printf("%d\n", __LINE__);//��ǰ���к�
//	printf("%s\n", __DATE__);//�ļ�������ʱ������
//	printf("%s\n", __TIME__);//�ļ�������ʱ��ʱ��
//	printf("%s\n", __FUNCTION__);//��ǰ�������ڵĺ�����
//	//printf("%s\n", __STDC__);//�����������ѭANSI C����ֵΪ1������δ����
//	//��ЩԤ������Ŷ����������õ�
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//fprintf(pf, "%s\n%d\n%s\n%s\n%s\n", __FILE__, __LINE__, __DATE__, __TIME__,__FUNCTION__);
//		fprintf(pf, "%s  %d  %s  %s  %s\n", __FILE__, __LINE__, __DATE__, __TIME__, __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define �Ƕ�����ŵ�

//#define �����ʶ��
//#define M 100;//ע��ֺ�Ҳ���滻��
//#define i int
//#define CASE break;case
//#define do_forever for(;;) //��ѭ��
////Ҳ���Զ���һ�����룬���stuff���������Էֳɼ���д���������һ���⣬ÿ�еĺ��涼����һ����б�ܣ����з���
//#define pt printf("%s  %s %d",__FILE__,\
//							 __TIME__,\
//							__LINE__)
//int main()
//{
//	//i a;
//	//if (a = 1)
//	//	a = M //�ӷֺžͱ�����
//	//else
//	//	printf("%d\n", a);
//	/*switch (1)
//	{
//		case 1:
//			printf("%d\n",1);
//		CASE 2:
//			;
//		CASE 3:
//			;
//	}*/
//	pt;
//	return 0;
//}

//#define �����
//#define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ�꣨macro)����꣨define macro)��
//�����Ǻ��������ʽ��
//#define name(parament-list) stuff 
//���е� parament - 1ist��һ���ɶ��Ÿ����ķ��ű����ǿ��ܳ����� stuff ��
//ע��:
//�����б�������ű����� name ���ڡ�
//�������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊ stuff ��һ����
//#define SQUARE(x) x*x  //SQUARE��(x)���ֿܷ���xΪ����
//#define DOUBLE(X) (X)+(X)
//int main()
//{
//	printf("%d\n", SQUARE(3));//9
//	printf("%d\n", SQUARE(3+1));//7 - 3+1*3+1
//	//��Ĳ�������ȫ�滻�ģ������ǲ������κμ���ģ�ֱ�Ӵ���ȥ�滻���滻���ټ���
//	//���Ҫ�õ�16����������ţ�#define SQUARE(x) ((x)*(x)) 
//	//��ˣ��ڶ�����ʱ�����ź���Ҫ
//	printf("%d\n", 10 * DOUBLE(4));//44 - 10 * 4 + 4
//	//���Ҫ�õ�������80��������������ţ�#define DOUBLE(X) ((X)*(X)) 
//	return 0;
//}

//# define �滻����
//�ڳ�������չ�� define ������źͺ�ʱ����Ҫ�漰�������衣
//1���ڵ��ú�ʱ�����ȶԲ������м�飬�����Ƿ�����κ��ɣ� define ����ķ��š�����ǣ��������ȱ��滻��
//2���滻�ı���󱻲��뵽������ԭ���ı���λ�á����ں꣬�����������ǵ�ֵ�滻��
//3������ٴζԽ���ļ�����ɨ�裬�������Ƿ�����κ��ɣ� define ����ķ��š�����ǣ����ظ�����������̡�
//ע�⣺
//1��������ͣ� define �����п��Գ��������� define ����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//2.��Ԥ������������ define ����ķ��ŵ�ʱ���ַ������������ݲ�����������
//#define M 100
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int max = MAX(101, M);
//	printf("%d\n", max);
//	printf("M==%d\n", M);//�ַ������������ݲ��ᱻ�滻������M�����ᱻ�滻
//	return 0;
//}

//# �� ##  ֻ�����ڶ������  - �Ѳ������뵽�ַ�����

//#����  - ��һ��������������Ӧ���ַ���������Ѳ����滻
//#define PRINT(X,FORMAT) printf("the value of "#X" is "FORMAT"\n",X)
//#X - X����Ӧ���ַ���
//"the value of "   #X�൱��"a"    " is "  FORMAT�൱��"%d"   "\n"
//int main()
//{
//	printf("abc""def""ghi\n");//printf�����п��Դ�ӡ����ַ���
//
//	int a = 10;
//	PRINT(a,"%d");
//	printf("the value of ""a"" is %d\n", a);
//	int b = 20;
//	PRINT(b,"%d");
//	printf("the value of ""b"" is %d\n", b);
//	float f = 5.5f;
//	PRINT(f,"%f");
//	printf("the value of ""f"" is ""%f""\n", f);
//	return 0;
//}

//##  - ��λ�������ߵķ��źϳ�һ������
//������궨��ӷ�����ı�Ƭ�δ�����ʶ��
//#define CAT(X,Y) X##Y
//int main()
//{
//	int class101 = 10000;
//	printf("%d\n", CAT(class, 101));
//	printf("%d\n", class101);
//	return 0;
//}
//ע�����������ӱ������һ���Ϸ��ı�ʶ����������������δ����ġ�

//�������õĺ����
//��������ں�Ķ����г��ֳ���һ�ε�ʱ������������и����ã���ô����ʹ��������ʱ��Ϳ��ܳ���Σ�գ����²���Ԥ��ĺ����
//�����þ��Ǳ��ʽ��ֵ��ʱ����ֵ�������Ч����
// 
//��ͺ����Ա�
//��ͨ����Ӧ����ִ�м򵥵����㡣
//#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
//��Ϊʲô���ú���������������ԭ���ж���
//1�����ڵ��ú����ʹӺ������صĴ�����ܱ�ʵ��ִ�����С�ͼ��㹤������Ҫ��ʱ����ࡣ���Ժ�Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ�
//2����Ϊ��Ҫ���Ǻ����Ĳ�����������Ϊ�ض������ͣ����Ժ���ֻ�������ͺ��ʵı��ʽ��ʹ�á���֮������ǿ������������Ρ������͡������͵ȿ������ڣ����Ƚϵ����ͣ����������޹صġ�
//��Ȼ�ͺ���Ⱥ���Ҳ�����Ƶĵط���
//1��ÿ��ʹ�ú��ʱ��һ�ݺ궨��Ĵ��뽫���뵽�����С����Ǻ�Ƚ϶̣�������ܴ�������ӳ���ĳ��ȡ�
//2������û�����Եġ�
//3�������������޹أ�Ҳ�Ͳ����Ͻ���
//4������ܻ������������ȼ������⣬���³����׳��ִ�
//����ʱ����������������������顣���磺��Ĳ������Գ������ͣ����Ǻ�����������
//1.
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//2.
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	//x+1   �����и�����
//	//x++   ���и�����
//	int a = 5;
//	int b = 8;
//	//1.
//	//int max = MAX(a++, b++);
//	//int max=((a++)>(b++)?(a++):(b++));
//	//printf("%d\n", max);//9
//	//printf("%d %d", a, b);//6  10
//	//2.
//	int max = Max(a++, b++);
//	//int max = (5 > 8 ? 5 : 8);
//	printf("%d\n", max);//8
//	printf("%d %d", a, b);//6  9
//	return 0;
//}
//����Լ��
//һ�����������ĺ��ʹ���﷨�����ơ��������Ա���û�����������ֶ��ߡ�
//������ƽʱ��һ��ϰ���ǣ�
//�Ѻ���ȫ����д , ��������Ҫȫ����д

//#undef  - ����ָ�������Ƴ�һ���궨��
//#define M 100
//int main()
//{
//	int a = M;
////#undef M
//	printf("%d\n", M);
//#undef M
//	return 0;
//}

//�����ж���
//��� C �ı������ṩ��һ���������������������ж�����š���������������̡�
//���磺
//�����Ǹ���ͬһ��Դ�ļ�Ҫ�������ͬ��һ������Ĳ�ͬ�汾��ʱ����������е��ô���
//���ٶ�ĳ��������������һ��ĳ�����ȵ����飬��������ڴ����ޣ�������Ҫ��С�����飬��������һ�������ڴ��Щ��������Ҫһ�������ܹ���Щ��)

//��������

//1. #if �������ʽ   - �������ʽ��Ԥ��������ֵ
//#if 0
//int main()
//{
//#if 1    //if ����ı��ʽΪ��,���������룬���򲻲������
//	printf("hehe\n");
//#endif
//	return 0;
//}
//#endif

//2.�����֧����������  - ֻ����һ��
//int main()
//{
//#if 1==1
//	printf("hehe\n");
//#elif 2==2
//	printf("haha\n");
//#else
//	printf("heihie\n");
//#endif
//	return 0;
//}

//3. �ж��Ƿ���
//#define TEST
//int main()
//{
////���TEST�����ˣ�������������
////1.
//#ifdef TEST
//	printf("test1\n");
//#endif
////2.
//#if defined(TEST)
//	printf("test2\n");
//#endif
//
////���TESTδ���壬������������
////3.
//#ifndef TEST
//	printf("test3\n");
//#endif
////4.
//#if !defined(TEST)
//	printf("test4\n");
//#endif
//
////1==2   3==4   1��3�෴  2��4�෴
//	return 0;
//}

//4. Ƕ��ָ��
//#define TEST
//#define TEST1
//#define TEST2
//int main()
//{
//#if defined(TEST)
//	#ifdef TEST1
//		printf("hehe\n");
//	#endif
//	#ifdef TEST2
//	printf("haha\n");
//	#endif
//
//#elif defined(TEST3)
//	#ifdef TEST4
//	printf("en\n");
//	#endif
//#endif
//
//	return 0;
//}

//�ļ�����

// ""h��<>����ͷ�ļ��ı��������ǣ����ҵĲ�������
//1. �����ļ����� - �Զ���ĺ�����ͷ�ļ�ʹ�� ""
//�������Ҳ���: �����Լ�Դ�ļ�����Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���������������ҿ⺯��ͷ�ļ�һ���ڱ�׼λ�ò���ͷ�ļ���
//����Ҳ�������ʾ�������
//2. �⺯������  - C���Կ����ṩ�ĺ�����ͷ�ļ�ʹ��<>
//<> ���Ҳ��ԣ�ֱ��ȥ�⺯��ͷ�ļ�����Ŀ¼�²��� 

//Ƕ���ļ�����
//��η�ֹ����ظ�����ͷ�ļ�
//ÿ��ͷ�ļ��Ŀ�ͷд
//1. #pragam once  
//2. #ifndef __TEST_H__
//	 #define __TEST_H__
//	��ͷ�ļ����ݣ�
//	 #endif


