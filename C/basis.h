
//�����ڴ�ռ�
void basis3(){
	int int1 = (int)malloc(sizeof(int));//�����ڴ�ռ�
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//����
void basis2(){
	printf("�����������֣�������ͣ��Իس���ո�ֿ���\n");
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	printf("%d+%d=%d\n",num1,num2,num1+num2);
	getchar();
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//�����������͡����塢���
#define PI2 1.2345//����
#define NEWTYPE float
void basis1(){
	const float PI = 3.1415f;//����
	int int1 = 10, int2 = 20;
	float float1 = 1.23456f;
	double double1 = 2.34567;
	char char1 = 'c';
	char string1[4] = "abc", string2[] = "hello world";
	strcpy(string1, "zxy");//���¸��ַ�����ֵ
	bool bool1 = true, bool2 = false;

	typedef int INTEGER;//���ͱ���
	INTEGER int3 = 30;
	NEWTYPE float2 = 3.45678;

	printf("int1=%d, int2=%d, int3=%d \n", int1, int2, int3);
	printf("float1=%f, float2=%f, double1=%f, PI=%f, PI2=%f \n", float1, float2, double1, PI, PI2);
	printf("char1=%c (%d), string1=%s (%d), string2=%s \n", char1, char1, string1, string1, string2);
	printf("bool1=%d, bool2=%d \n",bool1,bool2);

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