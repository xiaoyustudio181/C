
//�������������������Ǹ�
int max(int num1, int num2){
	int result;
	if (num1 > num2)
		result = num1;
	else result = num2;
	return result;
}
//�������͵Ĵ洢��
void var_types(){
	printf("char �������ݵĴ洢��С : %lu \n", sizeof(char));
	printf("int �������ݵĴ洢��С : %lu \n", sizeof(int));
	printf("float �������ݵĴ洢��С : %lu \n", sizeof(float));
	printf("double �������ݵĴ洢��С : %lu \n\n", sizeof(double));

	printf("float �洢����ֽ��� : %lu \n", sizeof(float));
	printf("float ��Сֵ: %E\n", FLT_MIN);
	printf("float ���ֵ: %E\n", FLT_MAX);
	printf("����ֵ: %d\n", FLT_DIG);
}
#define CONST1 1.2345//����
//�������ԡ�
void first_c_program(){
	int a = 1, b = 2;
	printf("%d+%d=%d\n", a, b, a + b);//���
	printf("max(a,b)=%d\n", max(a, b));

	const float CONST2 = 2.3456;//����
	printf("CONST1=%f\n", CONST1);
	printf("CONST2=%f\n", CONST2);

	int c, d;
	printf("Give me the value of c,d seperated with whitespaces:\n");
	scanf("%d%d", &c, &d);//����
	printf("c=%d,d=%d\n", c, d);
}