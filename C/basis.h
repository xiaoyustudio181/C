

void str(){
	char str1[27] = { "Hello world" };
	char str2[] = { "China" };
	printf("%s\n", str1);
	printf("%s\n", strcpy(str1, "People's Republic of "));//字符串复制
	printf("%s\n", strcat(str1, str2));//字符串连接
	printf("%d, %d, %d, %d\n",
		strcmp("a","b"),
		strcmp("b","a"),
		strcmp("a","a"),
		strcmp("ab","ba")
	);//字符串比较
}

//puts, gets
void puts_gets(){
	char str[] = "hello\nworld";
	puts(str);
	puts("请输入一个字符串：");
	gets(str);
	puts("你输入的字符串是：");
	puts(str);
}

//putchar, getchar
void putchar_getchar(){
	putchar('a');
	putchar('\n');

	putchar('b');
	putchar('\n');

	putchar('\101');//八进制数，十进制的65，是A的ASCII码
	putchar('\n');

	putchar(66);
	putchar('\n');

	putchar('\\');
	putchar('\n');

	printf("输入一个字符：");
	char a=getchar();
	printf("你输入的字符是：");
	putchar(a);

	getchar();
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//scanf
void scanf1(){
	printf("输入两个数字，以空白符或回车符分隔开。\n");
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d, b=%d", a, b);
	printf("\n");

	printf("输入两个数字，以英文逗号分隔开。\n");
	scanf("%d,%d", &a, &b);//输入时，要以完全一样的格式输入
	printf("a=%d, b=%d",a,b);
	getchar();
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//定义变量、常量，输出
#define PI2 1.2345//函数外，定义常量
#define DECIMAL float//函数外，定义int别名
void variables(){
	int int1 = 10, int2 = 20;
	typedef int INTEGER;//函数内，定义int别名
	INTEGER int3 = 30;
	printf("int1 = %d \n", int1);
	printf("int2 = %d \n", int2);
	printf("int3 = %d \n", int3);
	printf("\n");

	const float PI = 3.1415f;//函数内，定义常量
	float float1 = 1.23456f;
	DECIMAL float2 = 3.45678;
	double double1 = 2.34567;
	printf("float1 = %f \n", float1);
	printf("float2 = %f \n", float2);
	printf("PI = %f \n", PI);
	printf("PI2 = %f \n", PI2);
	printf("double1 = %f \n", double1);
	printf("\n");

	char char1 = 'c';
	char string1[4] = "abc", string2[] = "hello world";
	printf("char1 = %c _%d \n", char1,char1);
	printf("string1 = %s _%d\n", string1);
	printf("string2 = %s \n", string2);
	printf("\n");

	/*bool bool1 = true, bool2 = false;
	printf("bool1 = %d \n", bool1);
	printf("bool2 = %d \n", bool2);*/
}

//回收站
void bin(){
	int int1 = (int)malloc(sizeof(int));//分配内存空间

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