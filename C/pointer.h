
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//指针的指针
void pointer5(){
	int  int1 = 100, *p, **pp;
	p = &int1;
	pp = &p;
	printf("int1 => %d, %p\n", int1);
	printf("*p => %d, %p\n", *p, p);
	printf("**pp => %d, %p\n", **pp, pp);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//字符串数组
void pointer4(){
	char *strs[] = {"water","food","glass","mouse"};
	for (int i = 0; i < 4; i++)
	{
		printf("strs[%d] = %s\n", i, strs[i]);
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//指针数组
void pointer3(){
	int  ints[] = { 10, 100, 200 };
	int *p[3];

	for (int i = 0; i < 3; i++)
	{
		p[i] = &ints[i];
		printf("ints[%d] => %d, %p\n", i, *p[i], p[i]);
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//数组指针
void pointer2(){
	int  ints[] = { 10, 100, 200 };

	int *p = ints;
	for (int i = 0; i < 3; i++)
	{
		printf("%d, %x, %p, %d\n", p, p, p, *p);
		p++;
	}

	p = &ints[2];
	while (p>=&ints[0]){
		printf("%d, %x, %p, %d\n", p, p, p, *p);
		p--;
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pointer1(){
	int *int1_p = NULL;//整型指针，在声明时如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值（空指针），假定它不指向任何东西
	char * str1_p = NULL;
	short* short1_p = NULL;

	int int1 = 100;
	char str1[10] = "hello";

	int1_p = &int1;//赋值地址
	str1_p = str1;//赋值地址（数组）

	printf("变量 int1 的地址： %p, %p, %d\n", &int1, int1_p, *int1_p);
	printf("变量 char1 的地址： %p, %p \n", &str1, str1_p);
}