//������ԡ�
void arrays(){
	//double a1[10];
	//double a1[5] = { 1000.0, 2.0, 3.4, 7.0, 50.0 };
	double a1[] = { 1000.0, 2.0, 3.4, 7.0, 50.0 };
	a1[4] = 40.0;

	int n[10];

	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	for (int j = 0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}
}