
//分配内存空间
void basis3(){
	int int1 = (int)malloc(sizeof(int));//分配内存空间
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//输入
void basis2(){
	printf("输入两个数字，程序将求和（以回车或空格分开）\n");
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	printf("%d+%d=%d\n",num1,num2,num1+num2);
	getchar();
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//基本变量类型、定义、输出
#define PI2 1.2345//常量
#define NEWTYPE float
void basis1(){
	const float PI = 3.1415f;//常量
	int int1 = 10, int2 = 20;
	float float1 = 1.23456f;
	double double1 = 2.34567;
	char char1 = 'c';
	char string1[4] = "abc", string2[] = "hello world";
	strcpy(string1, "zxy");//重新给字符串赋值
	bool bool1 = true, bool2 = false;

	typedef int INTEGER;//类型别名
	INTEGER int3 = 30;
	NEWTYPE float2 = 3.45678;

	printf("int1=%d, int2=%d, int3=%d \n", int1, int2, int3);
	printf("float1=%f, float2=%f, double1=%f, PI=%f, PI2=%f \n", float1, float2, double1, PI, PI2);
	printf("char1=%c (%d), string1=%s (%d), string2=%s \n", char1, char1, string1, string1, string2);
	printf("bool1=%d, bool2=%d \n",bool1,bool2);

	printf("\n数据类型的存储大小（字节）：\n");
	printf("char %lu\n", sizeof(char));
	printf("signed char %lu\n", sizeof(signed char));
	printf("unsigned char %lu\n", sizeof(unsigned char));

	printf("int %lu\n", sizeof(int));
	printf("unsigned int %lu\n", sizeof(unsigned int));

	printf("short %lu\n", sizeof(short));
	printf("unsigned short %lu\n", sizeof(unsigned short));

	printf("long %lu\n", sizeof(long));
	printf("unsigned long %lu\n", sizeof(unsigned long));
	
	printf("float %lu\n", sizeof(float));
	printf("float-min %e\n", FLT_MIN);
	printf("float-max %e\n", FLT_MAX);
	printf("float精度值 %d\n", FLT_DIG);

	printf("double %lu\n", sizeof(double));
	printf("long double %lu\n", sizeof(long double));
	printf("double-min %e\n", DBL_MIN);
	printf("double-max %e\n", DBL_MAX);
	printf("double精度值 %d\n", DBL_DIG);
}