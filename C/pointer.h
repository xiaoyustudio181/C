
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//ָ���ָ��
void pointer5(){
	int  int1 = 100, *p, **pp;
	p = &int1;
	pp = &p;
	printf("int1 => %d, %p\n", int1);
	printf("*p => %d, %p\n", *p, p);
	printf("**pp => %d, %p\n", **pp, pp);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//�ַ�������
void pointer4(){
	char *strs[] = {"water","food","glass","mouse"};
	for (int i = 0; i < 4; i++)
	{
		printf("strs[%d] = %s\n", i, strs[i]);
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//ָ������
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
//����ָ��
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
	int *int1_p = NULL;//����ָ�룬������ʱ���û��ȷ�еĵ�ַ���Ը�ֵ��Ϊָ�������һ�� NULL ֵ����ָ�룩���ٶ�����ָ���κζ���
	char * str1_p = NULL;
	short* short1_p = NULL;

	int int1 = 100;
	char str1[10] = "hello";

	int1_p = &int1;//��ֵ��ַ
	str1_p = str1;//��ֵ��ַ�����飩

	printf("���� int1 �ĵ�ַ�� %p, %p, %d\n", &int1, int1_p, *int1_p);
	printf("���� char1 �ĵ�ַ�� %p, %p \n", &str1, str1_p);
}