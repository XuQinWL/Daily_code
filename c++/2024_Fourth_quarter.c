#include"util.h"

//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	
//	char ch[100][100] = { 0 };
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= n; j++) {
//			scanf(" %c", &ch[i][j]);
//		}
//	}
//	char temp[100][100];
//	memcpy(temp, ch, sizeof(temp)); // 初始化临时矩阵
//	for (int i = 0; i < n / 2; i++)
//	{
//		for (int x = 0; x < n; x++)
//		{
//			for (int y = 0; y < n; y++)
//			{
//				if (x >= i && x < n - i && y >= i && y < n - i)
//					temp[y][n + 1 - x] = ch[x][y];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%c", temp[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	char ch[301][301] = { 0 };
//	for (int i = 0; i < n; i++) {
//		getchar(); // 读取换行符
//		for (int j = 0; j < n; j++) {
//			scanf("%c", &ch[i][j]);
//		}
//	}
//
//	char temp[301][301];
//	memcpy(temp, ch, sizeof(temp)); // 初始化临时矩阵
//
//	for (int i = 0; i < n / 2; i++) {
//		for (int x = 0; x < n; x++) {
//			for (int y = 0; y < n; y++) {
//				// 判断是否在当前操作的范围内
//				if (x >= i && x < n - i && y >= i && y < n - i) {
//					temp[y][n - 1 - x] = ch[x][y];
//				}
//			}
//		}
//		memcpy(ch, temp, sizeof(temp));
//	}
//
//	// 输出最终矩阵
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%c", ch[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	char ch[301][301] = { 0 };  // 矩阵从 1 开始
//	for (int i = 1; i <= n; i++) {
//		getchar();  // 吸收换行符
//		for (int j = 1; j <= n; j++) {
//			scanf("%c", &ch[i][j]);
//		}
//	}
//
//	char temp[301][301];
//	memcpy(temp, ch, sizeof(temp)); // 初始化临时矩阵
//
//	for (int i = 1; i <= n / 2; i++) { // 操作次数，逐层旋转
//		for (int x = i; x <= n - i + 1; x++) {
//			for (int y = i; y <= n - i + 1; y++) {
//				temp[y][n + 1 - x] = ch[x][y];  // 按旋转规则替换
//			}
//		}
//		// 更新原矩阵
//		memcpy(ch, temp, sizeof(temp));
//	}
//
//	// 输出最终矩阵
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%c", ch[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//// 自定义的 strlen 函数，用于计算字符串的长度
//int mystrlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main() {
//	char str[257]; // 定义一个长度为 257 的数组，以存储最多 256 个字符和一个空字符 '\0'
//
//	// 使用 fgets 读取一行输入，包括空白字符
//	fgets(str, sizeof(str), stdin);
//
//	// 计算字符串长度
//	int length = mystrlen(str);
//
//	// 打印字符串长度
//	printf("%d", length);
//
//	return 0;
//}

//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int x = 0;
//		scanf("%d", &x);
//		int b = 1;
//		for (b = 1; b <= x; b++)
//		{
//			double a = pow(x / b, 1/3);
//			int tmp = (int)a;
//			if ((double)tmp == a)
//			{
//				printf("%d\n", tmp);
//				break;
//			}
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[10000];
//	int letter = 0, blank = 0, digit = 0, other = 0;
//	int i = 0;
//	getchar();
//	for (i = 0; i < n; i++)
//		arr[i] = getchar();
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//			digit++;
//		else if (arr[i] == ' ')
//			blank++;
//		else if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
//			letter++;
//		else
//			other++;
//	}
//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//	return 0;
//}
//int main()
//{
//	int** p = (int**)malloc(3 * sizeof(int*));//是地址就是4/8
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		*(p + i) = (int*)malloc(5 * sizeof(int));//注意，p是二级指针，解引用后就成一级指针了。
//	p[2][2] = 5;
//	printf("%d", p[2][2]);
//	return 0;
//}
//void exchange(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = '\0';
//}
//int main()
//{
//	char arr1[6], arr2[6];
//	scanf("%5s %5s", arr1, arr2);
//	exchange(arr1, arr2);
//	printf("之前%s 之后%s", arr1, arr2);
//	return 0;
//}
//int main(){
//int i = 0;
//for (i = 100; i <= 200; i++) {
//	int flag = 1;
//	int j = 0;
//	for (j = 2; j < i; j++) {
//		if (i % j == 0)
//			flag = 0;
//		break;
//	}
//	if (flag == 1)
//		printf("%d", i);
//}
//	return 0;
//}
//enum Weekday {
//	MONDAY,
//	TUESDAY,
//	WEDNESDAY,
//	THURSDAY,
//	FRIDAY,
//	SATURDAY,
//	SUNDAY
//};
//int main() {
//	enum Weekday today;
//	today = SUNDAY+2;
//	printf("%d", today);
//	return 0;
//}
//int main() {
//	int a;
//	float b;
//	scanf("%d", &a);
//		printf("%d\n", a);
//		scanf("%f", &b);
//		printf("%f", b);
//			return 0;
//}
//int main() {
//	char arr[1000], b;
//	while (gets(arr)) {
//		scanf("%c", &b);
//		getchar(); 
//
//		// 删除字符
//		int i = 0, j = 0;
//		while (arr[i] != '\0') {
//			if (arr[i] != b) {
//				arr[j++] = arr[i];  // 保留不需要删除的字符
//			}
//			i++;
//		}
//		arr[j] = '\0';  // 添加字符串结束符
//		printf("%s\n", arr);
//	}
//	return 0;
//}
//int main() {
//	int rows = 3, cols = 4;
//
//	// 动态分配内存
//	int* arr = (int*)malloc(rows * cols * sizeof(int));
//	if (arr == NULL) {
//		printf("Memory allocation failed!\n");
//		return 1;
//	}
//
//	// 填充数据并访问二维数组
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			arr[i * cols + j] = i * cols + j; // 填充数据
//			printf("arr[%d][%d] = %d\n", i, j, arr[i * cols + j]);
//		}
//	}
//
//	// 释放内存
//	free(arr);
//
//	return 0;
//}
//
//int main() {
//	int rows = 3, cols = 4;
//
//	// 创建一个指针数组，指向每一行
//	int** arr = (int**)malloc(rows * sizeof(int*));
//	if (arr == NULL) {
//		printf("Memory allocation failed!\n");
//		return 1;
//	}
//
//	// 为每一行分配内存
//	for (int i = 0; i < rows; i++) {
//		arr[i] = (int*)malloc(cols * sizeof(int));
//		if (arr[i] == NULL) {
//			printf("Memory allocation failed!\n");
//			return 1;
//		}
//	}
//
//	// 填充数据并访问二维数组
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			arr[i][j] = i * cols + j;  // 填充数据
//			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
//		}
//	}
//
//	// 释放内存
//	for (int i = 0; i < rows; i++) {
//		free(arr[i]);  // 先释放每行的内存
//	}
//	free(arr);  // 最后释放指向行的指针数组
//
//	return 0;
//}
//void func(int a[]){
//	printf("%d", sizeof a);
//}
//int main() {
//	int a[3] = { 1,2,3 };
//	func(a);
//	//int a = 1;
//	//for (int i = 0; i < 2; i++) {
//	//	int a = 4;
//	//	printf("%d", a);
//	//	a++;
//	//}
//	return 0;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int* p = arr;
//	int count = 0;
//	while (*p)
//	{
//		if ((*p == ' ') && (*(p + 1) != ' '))
//		{
//			count++;
//		}
//		p++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main() {
//	int p[4] = { 1,3,2,4 };
//	int n = 4;
//	for (int i = n; i > 0; i--) {
//		for (int j = 1; j < i; j++) {
//			if (p[j] < p[j - 1]) {
//				int temp = p[j];
//				p[j] = p[j - 1];
//				p[j - 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++) printf("%d", p[i]);
//}
	//int main()
	//{
	//    char a[20][20] = { 0 };
	//    int n = 0;
	//    scanf("%d", &n);
	//    getchar();
	//    for (int i = 0; i < n; i++)
	//    {
	//        gets(a[i]);
	//    }
	//    for (int i = 0; i < n; i++) printf("%s", a[i]);
	//    for (int i = 0; i < n - 1; i++)
	//    {
	//        for (int j = 0; j < n - 1 - i; j++)
	//        {
	//            if (strcmp(a[i], a[i + 1]) > 0)
	//            {
	//                char tmp[20] = { 0 };
	//                strcpy(tmp, a[i]);
	//                strcpy(a[i], a[i + 1]);
	//                strcpy(a[i + 1], tmp);
	//            }
	//        }
	//    }
	//    return 0;
	//}

	//int main() {
	//	int a = 1;
	//	int* p = &a;
	//	void* p1= nullptr;
	//	cout << (long long int)p1;
	//	//printf(" %d", *p++);
	//	return 0;
	//}
	//int main(){
	//	int i = 0;
	//	int count = 0;
	//	for (i = 100; i <= 200; i++) {
	//		int flag = 1;
	//		int j = 0;
	//		for (j = 2; j <= i - 1; j++) {
	//			if (i % j == 0) {
	//				flag = 0;
	//				break;
	//			}
	//		}
	//		if (flag == 1) {
	//			printf("%d", i);
	//			count++;
	//		}
	//	}
	//printf("\ncount = %d", count) ;
	//	return 0;
	//}
	//#include <stdio.h>
	//int DigitSum(int n)
	//{
	//    int num = 0;
	//    while (n)
	//    {
	//        num += n % 10;
	//        n = n / 10;
	//    }
	//    return num;
	//}
	//int main()
	//{
	//    int n;
	//    scanf("%d", &n);
	//    printf("%d", DigitSum(n));
	//    return 0;
	//}

	//#define n 10  //定义宏常量
	//int main()
	//{
	//    int i = 0;
	//    srand((unsigned int)time(NULL));
	//    int arr[n];
	//    for (int i = 0; i < n; i++)
	//    {
	//        arr[i] = rand() % 100 + 1;
	//        printf("%d ", arr[i]);
	//    }
	//    printf("\n");
	//
	//    for (int i = 0; i < n - 1; i++)
	//    {
	//        for (int j = 0; j < n - 1 - i; j++)
	//        {
	//            int temp = arr[j];
	//            arr[j] = arr[j + 1];
	//            arr[j + 1] = temp;
	//        }
	//    }
	//
	//    for (int i = 0; i < n; i++)
	//    {
	//        printf("%d ", arr[i]);
	//    }
	//    return 0;
	//}
	//int main() {
	//	int a = 3, b = 2;
	//	int c = a + (b - a) / 2;
	//	int d = a / 2 + b / 2;
	//	printf("%d %d", c, d);
	//		return 0;
	//}
	//int main() {
	//	int n = 0;
	//	int i = 0;
	//	int sum;
	//	for (n = 1; n <= 9; n++) {
	//		for (i = 1; i <= n; i++) {
	//			sum = n * i;
	//			printf("%d*%d=%2d ", n, i, sum);
	//		}
	//		printf("\n");
	//	}
	//}

	//void func(void* dest, void* src) {
	//	
	//}
	//int main() {
	//	char* a = "abcd";
	//	char* b = "erdf";
	//	func(a,b);
	//}

	//int main() {
	//	int i = 3, k = 1;
	//	while (i--)
	//		k++;
	//	printf("%d, %d", i, k);
	//	return 0;
	//}
	//int common_multiple(int number1, int number2) {
	//    int index = 0;
	//    int max_ = (number1 > number2) ? number1 : number2;
	//    for (int i = max_; i <= number1 * number2; i++) {
	//        if (i % number1 == 0 && i % number2 == 0) {
	//            index = i;
	//            break;
	//
	//        }
	//    }
	//    return index;
	//}
	//
	//int main() {
	//    int multiple, number1 = 24, number2 = 16;
	//    multiple = common_multiple(number1, number2);
	//    printf("%d", multiple);
	//    return 0;
	//}
	//struct Stu {
	//	char name[20];
	//	int age;
	//	char sex[5];
	//};
	//int main() {
	//	struct Stu s1;
	//	s1.name = "zhangsan";
	//	char arr[10] = "1000" ;
	//	s1.age = 20;
	//	printf("%d", s1.age);
	//		return 0;
	//}
	//int main() {
	//	int a = 1;
	//	scanf("%d", &a);
	//	return 0;
	//}
	//void bubble_sort(int arr[], int sz)
	//{
	//    int i, j = 0;
	//    for (i = 0; i < sz - 1; i++) //一趟
	//    {
	//        for (j = 0; j < sz - 1 - i; j++) //一趟中循环次数需要减去已经排好的i个数
	//        {
	//            if (arr[j] < arr[j + 1])//升序排列
	//            {
	//                int tmp = arr[j];
	//                arr[j] = arr[j + 1];
	//                arr[j + 1] = tmp;
	//            }
	//
	//        }
	//    }
	//}
	//int main(){
	//    int n = 0;
	//    scanf("%d", &n);
	//    int arr[] = { 0 };
	//    for (int i = 0; i < n; i++)
	//    {
	//        scanf("%d", &arr[i]);
	//    }
	//    bubble_sort(arr, n);
	//    printf("%d", arr[n - 1]);
	//    return 0;
	//}

	//int Function(unsigned int n) {
	//	n = (n & 0x55555555)
	//		+ ((n >> 1) & 0x55555555);
	//		n = (n & 0x33333333)
	//		+ ((n >> 2) & 0x33333333);
	//	n = (n & 0x0f0f0f0f)
	//		+ ((n >> 4) & 0x0f0f0f0f);
	//	n = (n & 0x00ff00ff)
	//		+ ((n >> 8) & 0x00ff00ff);
	//	n = (n & 0x0000ffff)
	//		+ ((n >> 16) & 0x0000ffff);
	//	return n;
	//}