
void pointer7(){
	int  var = 3000, *pointer, **ppointer;
	pointer = &var;
	ppointer = &pointer;
	printf("var = %d\n", var);
	printf("*ptr = %d, %x, %p\n", *pointer,pointer,*pointer);
	printf("**pptr = %d %x, %p\n", **ppointer,ppointer,**ppointer);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pointer6(){
	char *names[] = {
		"Zara Ali",
		"Hina Ali",
		"Nuha Ali",
		"Sara Ali",
	};
	for (int i = 0; i < 4; i++)
	{
		printf("names[%d] = %s\n", i, names[i]);
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pointer5(){
	int  arr[] = { 10, 100, 200 };
	int *pointer[3];

	for (int i = 0; i < 3; i++)
	{
		pointer[i] = &arr[i];
		printf("var[%d] = %d\n", i, *pointer[i]);
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pointer4(){
	int  arr[] = { 10, 100, 200 };
	int  *pointer;
	pointer = arr;
	while (pointer <= &arr[2])
	{
		printf("%x ==> %d\n", pointer, *pointer);
		pointer++;
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pointer3(){
	int  arr[] = { 10, 100, 200 };
	int  *pointer;
	pointer = &arr[2];
	
	for (int i = 0; i < 3; i++)
	{
		printf("%x ==> %d\n", pointer, *pointer);
		pointer--;
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pointer2(){
	int  arr[] = { 10, 100, 200 };
	int  *pointer;
	pointer = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("%x ==> %d\n", pointer, *pointer);
		pointer++;
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pointer1(){
	int var1;
	char var2[10];
	printf("var1 �����ĵ�ַ�� %p\n", &var1);
	printf("var2 �����ĵ�ַ�� %p\n", &var2);

	//������ʱ���û��ȷ�еĵ�ַ���Ը�ֵ��Ϊָ�������һ�� NULL ֵ��һ�����õı��ϰ�ߡ���Ϊ NULL ֵ��ָ�뱻��Ϊ��ָ�롣
	//NULL ָ����һ�������ڱ�׼���е�ֵΪ��ĳ�����
	int    *ip = NULL;    //һ�����͵�ָ��
	double *dp = NULL;    //һ�� double �͵�ָ��
	float  *fp = NULL;    //һ�������͵�ָ��
	char   *chp = NULL;     //һ���ַ��͵�ָ��
	//�ڴ��ַ 0 ���ر���Ҫ�����壬��������ָ�벻ָ��һ���ɷ��ʵ��ڴ�λ�á������չ��������ָ�������ֵ����ֵ������ٶ�����ָ���κζ�����

	int  var = 20;
	int  *ip1 = &var;  //��ָ������д洢 var �ĵ�ַ
	printf("%p \n", &var);
	printf("%p \n", ip1);
	printf("%d \n", *ip1);//ʹ��ָ�����ֵ
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++