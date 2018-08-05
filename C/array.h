

void arr_element_as_param(){
	int max(int x, int y);//如果不写这句，max函数必须在此函数定义前定义
	int a[10], m, n, i;
	printf("Enter 10 integer numbers:");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (i = 1, m = a[0], n = 0; i < 10; i++){
		if (max(m, a[i])>m){
			m = max(m, a[i]);
			n = i;
		}
	}
	printf("The largest number is %d\nit is the %dth number.\n", m, n + 1);
}
int max(int x, int y){
	return (x > y ? x : y);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void define_arr(){
	int ints0[4];
	int ints1[3] = { 1, 2, 3 };
	int ints2[3] = { 1, 2 };
	int ints3[] = { 1, 2, 3, 4, 5 };
	ints3[4] = 50;

	for (int i = 0; i < 5; i++)
	{
		printf("ints3[%d] => %d\n", i, ints3[i]);
	}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++