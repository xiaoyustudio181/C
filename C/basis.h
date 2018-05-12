

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void basis2_variable_types(){
	printf("char 类型数据的存储大小 : %lu \n", sizeof(char));
	printf("int 类型数据的存储大小 : %lu \n", sizeof(int));
	printf("float 类型数据的存储大小 : %lu \n", sizeof(float));
	printf("double 类型数据的存储大小 : %lu \n\n", sizeof(double));

	printf("float 存储最大字节数 : %lu \n", sizeof(float));
	printf("float 最小值: %E\n", FLT_MIN);
	printf("float 最大值: %E\n", FLT_MAX);
	printf("精度值: %d\n", FLT_DIG);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int max(int num1, int num2){
	int result;
	if (num1 > num2)
		result = num1;
	else result = num2;
	return result;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#define CONST1 1.2345//常量
void basis1_output_input_const(){
	int a = 1, b = 2;
	printf("%d+%d=%d\n", a, b, a + b);//输出
	printf("max(a,b)=%d\n", max(a, b));

	const float CONST2 = 2.3456;//常量
	printf("CONST1=%f\n", CONST1);
	printf("CONST2=%f\n", CONST2);

	int c, d;
	printf("Give me the value of c,d seperated with whitespaces:\n");
	scanf("%d%d", &c, &d);//输入
	printf("c=%d,d=%d\n", c, d);
	getchar();
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++