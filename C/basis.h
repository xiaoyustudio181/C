

void str(){
	char str1[27] = { "Hello world" };
	char str2[] = { "China" };
	printf("%s\n", str1);
	printf("%s\n", strcpy(str1, "People's Republic of "));//�ַ�������
	printf("%s\n", strcat(str1, str2));//�ַ�������
	printf("%d, %d, %d, %d\n",
		strcmp("a","b"),
		strcmp("b","a"),
		strcmp("a","a"),
		strcmp("ab","ba")
	);//�ַ����Ƚ�
}

//puts, gets
void puts_gets(){
	char str[] = "hello\nworld";
	puts(str);
	puts("������һ���ַ�����");
	gets(str);
	puts("��������ַ����ǣ�");
	puts(str);
}

//putchar, getchar
void putchar_getchar(){
	putchar('a');
	putchar('\n');

	putchar('b');
	putchar('\n');

	putchar('\101');//�˽�������ʮ���Ƶ�65����A��ASCII��
	putchar('\n');

	putchar(66);
	putchar('\n');

	putchar('\\');
	putchar('\n');

	printf("����һ���ַ���");
	char a=getchar();
	printf("��������ַ��ǣ�");
	putchar(a);

	getchar();
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//scanf
void scanf1(){
	printf("�����������֣��Կհ׷���س����ָ�����\n");
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d, b=%d", a, b);
	printf("\n");

	printf("�����������֣���Ӣ�Ķ��ŷָ�����\n");
	scanf("%d,%d", &a, &b);//����ʱ��Ҫ����ȫһ���ĸ�ʽ����
	printf("a=%d, b=%d",a,b);
	getchar();
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//������������������
#define PI2 1.2345//�����⣬���峣��
#define DECIMAL float//�����⣬����int����
void variables(){
	int int1 = 10, int2 = 20;
	typedef int INTEGER;//�����ڣ�����int����
	INTEGER int3 = 30;
	printf("int1 = %d \n", int1);
	printf("int2 = %d \n", int2);
	printf("int3 = %d \n", int3);
	printf("\n");

	const float PI = 3.1415f;//�����ڣ����峣��
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

//����վ
void bin(){
	int int1 = (int)malloc(sizeof(int));//�����ڴ�ռ�

	printf("\n�������͵Ĵ洢��С���ֽڣ���\n");
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
	printf("float����ֵ %d\n", FLT_DIG);

	printf("double %lu\n", sizeof(double));
	printf("long double %lu\n", sizeof(long double));
	printf("double-min %e\n", DBL_MIN);
	printf("double-max %e\n", DBL_MAX);
	printf("double����ֵ %d\n", DBL_DIG);
}