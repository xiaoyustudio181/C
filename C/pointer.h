//指针测试。
void pointer(){
	int  var1;
	char var2[10];
	printf("var1 变量的地址： %p\n", &var1);
	printf("var2 变量的地址： %p\n", &var2);

	//在声明时如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为空指针。
	//NULL 指针是一个定义在标准库中的值为零的常量。
	int    *ip = NULL;    /* 一个整型的指针 */
	double *dp = NULL;    /* 一个 double 型的指针 */
	float  *fp = NULL;    /* 一个浮点型的指针 */
	char   *chp = NULL;     /* 一个字符型的指针 */
	//内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。

	int  var = 20;
	int  *ip1 = &var;  /* 在指针变量中存储 var 的地址 */
	printf("%p \n", &var);
	printf("%p \n", ip1);
	printf("%d \n", *ip1);/* 使用指针访问值 */
}