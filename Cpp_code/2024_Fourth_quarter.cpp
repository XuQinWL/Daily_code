#include "util.hpp"
#include<iostream>
#include<string>
#include<vector>
#include <queue>
#include<algorithm>
#include<stdio.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
struct Node* copyRandomList(struct Node* head);
int main() {
    Node a(7);
    Node b(13);
    a.next = &b;
    a.random= &b;
    b.random = &b;
    Node* c = copyRandomList(&a);

    return 0;
}

    struct Node* copyRandomList(struct Node* head) {
        struct Node* cur = head;
        if (cur == NULL) return NULL;
        struct Node* newhead = (struct Node*)malloc(sizeof(struct Node));
        newhead->val = cur->val;
        struct Node* newnode = newhead;
        cur = cur->next;
        while (cur) {
            struct Node* node = (struct Node*)malloc(sizeof(struct Node));
            newnode->next = node;
            node->val = cur->val;
            node->next = NULL;
            newnode = newnode->next;
        }
        cur = head;
        newnode = newhead;
        while (newnode) {
            if (cur->random == NULL) {
                newnode->random = NULL;
                newnode = newnode->next;
                cur = cur->next;
            }
            else {
                int count = 0;
                struct Node* pos = head;
                while (cur->random != pos) {
                    pos = pos->next;
                    count++;
                }
                struct Node* newpos = newhead;
                while (count) {
                    newpos = newpos->next;
                    count--;
                }
                newnode->random = newpos;
                newnode = newnode->next;
                cur = cur->next;
            }
        }
        return newhead;
    }

//int a = 1;
//int* func() {
//	return &a;
//}
//
//void fun(int*) {
//	return;
//}
//template<class T>
//struct A {
//	typedef A<T>* d;
//	d a;
//};
//int* func(int* a) { return nullptr; }
//int main() {
//	int i = 0, k = 1;
//	char a[100000] = { 0 };
//	fgets(a, 100000, stdin);
//	int c = strlen(a);
//	for (i = 0; i < c; i++)
//	{
//		if (a[i] == '@' && a[i + k] > ' ' && a[i + k] != '@')
//		{
//			while (a[i + k] > ' ' && a[i + k] != '@')
//			{
//				if ((a[i + k] >= 'a' && a[i + k] <= 'z') || (a[i + k] >= 'A' && a[i + k] <= 'Z'))
//					printf("%c", a[i + k]);
//				k++;
//			}
//			k = 1;
//			printf("\n");
//		}
//	}
//	return 0;
//	//int* a = func(a);
//	/*fun(func());
//	int* k = func();
//	;*/
//	//int d = 6;
//	//const int* b = &d;
//	//int* h = b;
//	//int* c = &b;
//	//int*& d = c;
//	//a = &c;
//	//*a = 3;
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    int arr[1100][7];
//    cin >> a;
//    int arr2[1][7];
//    int i = 0;
//    int j = 0;
//    int count = 0;
//
//    for (j = 0; j < 7; j++)
//    {
//        cin >> arr2[0][j];
//    }
//    for (i = 0; i < a; i++)
//    {
//        for (j = 0; j < 7; j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//    for (i = 0; i < 7; i++)
//    {
//        count = 0;
//        for (j = 0; j < a; j++)
//        {
//            if (arr[j][i] == arr2[0][i])
//            {
//
//                count++;
//            }
//        }
//        cout << count << " ";
//    }
//
//    return 0;
//}

//using namespace std;
////#define int long long
//const int N = 100 + 10;
//int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
//struct SegmenTree
//{
//    struct node
//    {
//        int l, r;
//        int sum, d;
//    }tr[4 * N];
//    void pushup(int u)
//    {
//        tr[u].sum = tr[u << 1].sum + tr[u << 1 | 1].sum;
//        tr[u].d = gcd(tr[u << 1].d, tr[u << 1 | 1].d);
//    }
//    void build(int u, int l, int r)
//    {
//        if (l == r) tr[u] = { l , r , 0 , 0 };
//        else
//        {
//            tr[u] = { l , r , 0 , 0 };
//            int mid = l + r >> 1;
//            build(u << 1, l, mid);
//            build(u << 1 | 1, mid + 1, r);
//            pushup(u);
//        }
//    }
//    void modify(int u, int l, int r, int val)
//    {
//        if (l <= tr[u].l && tr[u].r <= r) {
//            tr[u].d += val;
//            tr[u].sum += val;
//        }
//        else
//        {
//            int mid = tr[u].l + tr[u].r >> 1;
//            if (l <= mid) modify(u << 1, l, r, val);
//            if (mid < r)modify(u << 1 | 1, l, r, val);
//            pushup(u);
//        }
//    }
//    int query(int u, int l, int r)
//    {
//        if (l <= tr[u].l && tr[u].r <= r)return tr[u].d;
//        int mid = tr[u].l + tr[u].r >> 1;
//        int ans = 0;
//        if (l <= mid) ans = gcd(ans, query(u << 1, l, r));
//        if (mid < r) ans = gcd(ans, query(u << 1 | 1, l, r));
//        return ans;
//    }
//    int query2(int u, int l, int r)
//    {
//        if (l <= tr[u].l && tr[u].r <= r)return tr[u].sum;
//        int mid = tr[u].l + tr[u].r >> 1;
//        int ans = 0;
//        if (l <= mid) ans += query(u << 1, l, r);
//        if (mid < r) ans = query(u << 1 | 1, l, r);
//        return ans;
//    }
//};
//
//int main(){
//    int n, q; cin >> n >> q;
//    SegmenTree seg;
//    seg.build(1, 1, n);
//    vector<int> a(n + 1), b(n + 1);
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    for (int i = 1; i <= n; i++) b[i] = a[i] - a[i - 1];
//    for (int i = 1; i <= n; i++) seg.modify(1, i, i, b[i]);
//    while (q--)
//    {
//        char op; int l, r, d;
//        cin >> op >> l >> r;
//        if (op == 'C')
//        {
//            cin >> d;
//            seg.modify(1, l, l, d);
//            seg.modify(1, r + 1, r + 1, -d);
//        }
//        else {
//            int res = seg.query2(1, 1, l);
//            cout << gcd(res, seg.query(1, l + 1, r)) << endl;
//        }
//    }
//    return 0;
//}

//void mergeSort(int* arr, int n) { //非递归的归并排序
//    int* num = (int*)malloc(sizeof(int) * n);
//    if (num == NULL) {
//        perror("mergeSort malloc::>");
//        return;
//    }
//    int left = 0;
//    int right = n - 1;
//    int gap = 1;
//    while (gap < n) {
//        int i = 0;// 注意i
//        for (int j = 0; j < n; j += gap * 2) {
//            int on1 = j, end1 = on1 + gap - 1;
//            int on2 = on1 + gap, end2 = on2 + gap - 1;
//
//            if (on2 > right || end1 > right) {
//                break;
//            }
//            if (end2 > right) {
//                end2 = right;
//            }
//            printf("[%d %d][%d %d] j=%d  ", on1, end1, on2, end2, j);
//
//            while (on1 <= end1 && on2 <= end2) {
//                if (arr[on1] < arr[on2]) {
//                    num[i++] = arr[on1++];
//                }
//                else {
//                    num[i++] = arr[on2++];
//                }
//            }
//            while (on1 <= end1) {
//                num[i++] = arr[on1++];
//            }
//            while (on2 <= end2) {
//                num[i++] = arr[on2++];
//            }
//            memcpy(arr + j, num + j, sizeof(int) * gap * 2);
//
//        }
//        printf("\n");
//        gap *= 2;
//    }
//    free(num);
//}
//int main() {
//    int arr[] = { 2,3,0};
//    mergeSort(arr,3);
//    for (int i = 0; i < 3; i++) {
//        cout << arr[i] << " ";
//    }
//}
//int main()
//{
//    char ch[1050][100];
//    int i = 1;
//    while (1)
//    {
//        scanf("%s", ch[i]);
//        if (strcmp(ch[i], "1")==0) break;
//        i++;
//    }
//    int left = 1, right = i;
//    while (left < right)
//    {
//        strcpy(ch[0], ch[right]);
//        strcpy(ch[right], ch[left]);
//        strcpy(ch[left], ch[0]);
//        left++;
//        right--;
//    }
//
//    for (int j = 2; j <= i; j++)
//    {
//        if (j == 1)
//            printf("%s ", ch[j]);
//        else
//            printf("%s ", ch[j]);
//    }
//    return 0;
//}
//int main()
//{
//    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
//    char ch[200];
//
//    printf("请输入一串字符：\n");
//    fgets(ch, sizeof(ch), stdin);
//    if (ch[strlen(ch) - 1] == '\n')
//        ch[strlen(ch) - 1] = '\0';
//    for (int i = 0; ch[i] != '\0'; i++)
//    {
//        if (isdigit(ch[i]))
//            sum1 += 1;
//        else if (isalpha(ch[i]))
//            sum2 += 1;
//        else if (ch[i] == ' ')
//            sum3 += 1;
//        else
//            sum4 += 1;
//    }
//    printf("数字有%d个，英文字符有%d个，空格有%d个，其他字符有%d个\n", sum1, sum2, sum3, sum4);
//    return 0;
//}
//int N;
//vector<vector<int>> num;
//vector<bool> dy;
//int ret;
//int sum;
//
//void dfs(int i)
//{
//    if (i == N)
//    {
//        ret = max(ret, sum);
//        return;
//    }
//
//    for (int j = 0; j < N; j++)
//    {
//        if (!dy[j])
//        {
//            dy[j] = true;
//            sum += num[i][j];
//            dfs(i + 1);
//            //
//            dy[j] = false;
//            sum -= num[i][j];
//        }
//    }
//}
//
//int main()
//{
//    cin >> N;
//        num.resize(N, vector<int>(N));
//        dy.resize(N, false);
//        ret = 0;
//        sum = 0;
//
//        for (int i = 0; i < N; i++)
//        {
//            for (int j = 0; j < N; j++)
//            {
//                cin >> num[i][j];
//            }
//        }
//
//        dfs(0);
//        cout << ret << endl;
//}

//int main() {}
//#include<stdio.h>
//#include<string.h>
//void func(vector<int>::iterator) {
//
//}
//int main()
//{
//    char n = 'e';
//    switch (n--) {
//    default:
//        printf("error");
//    case 'b':
//        printf("good"); 
//        break;
//    }
//        //int s = 1.0; // 使用double类型以获得更高精度
//        //int n = 1.0;
//        //double pi = 0.0;
//        //double t = 1.0;
//        //while (fabs(t) > 10e-8) // 确保循环条件正确
//        //{
//        //    pi = pi + t;
//        //    n = n + 2.0;
//        //    s = -s;
//        //    t = s / n; // 使用浮点数进行除法
//        //}
//        //pi = pi * 4;
//        //printf("pi=%f\n", pi);
//    /*int n;
//    char strings[4][100];
//    for (int i = 0; i < 4; i++)
//    {
//        fgets(strings[i], 100, stdin);
//    }
//        for (int j = 0; j < 4; j++)
//        {
//            if (strcmp(strings[j], strings[j + 1]) > 0)
//            {
//                char temp[100];
//                strcpy(temp, strings[j]);
//                strcpy(strings[j], strings[j + 1]);
//                strcpy(strings[j + 1], temp);
//            }
//        }
//    for (int i = 0; i < 4; i++)
//    {
//        printf("%s\n", strings[i]);
//    }*/
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//char* insert(char* string, char c)
//{
//    int len = strlen(string);
//    int i;
//    for (i = 0; i < len; i++) {//这里实在找要插入的位置对吧
//        if (c <= string[i]) 
//            break;
//    }
//    for (int j = len; j > i; j--) {
//        string[j] = string[j - 1];
//    }
//    string[i] = c;
//    string[len + 1] = '\0';
//    return string;
//}
//int main()
//{
//    char string[100];
//    char  c;
//    scanf("%s", string);
//    getchar();
//    scanf("%c", &c);
//
//    char* result = insert(string, c);
//    printf("%s", result);
//    return 0;
//}


//int main() {
//	char* str[10]{};
//	string 
//	return 0;
//}
//#define MAXSIZE 5
//#define ERROR -1
//typedef int ElementType;
//typedef int Position;
//typedef struct LNode* List;
//struct LNode {
//    ElementType Data[MAXSIZE];
//    Position Last; /* 保存线性表中最后一个元素的位置 */
//};
//
//List MakeEmpty()
//{
//    List p = (List)malloc(sizeof(struct LNode));
//    p->Last = -1;
//    return p;
//}
//Position Find(List L, ElementType X)
//{
//    int i = 0;
//    int N = L->Last;
//    do {
//        if (X == L->Data[i])
//        {
//            return i;
//        }
//        else
//        {
//            i++;
//        }
//    } while (N--);
//    return ERROR;
//}
//bool Insert(List L, ElementType X, Position P)
//{
//    if (L->Last == MAXSIZE - 1)
//    {
//        printf("FULL\n");
//        return false;
//    }
//    if (P >= MAXSIZE || P < 0)
//    {
//        printf("ILLEGAL POSITION\n");
//        return false;
//    }
//    int M = L->Last;
//    while (L->Last - P)
//    {
//        L->Data[M + 1] = L->Data[M];
//        M--;
//    }
//    L->Data[P] = X;
//    L->Last++;
//    return true;
//}
//bool Delete(List L, Position P)
//{
//    if (P > L->Last || P < 0)
//    {
//        printf("POSITION %d EMPTY\n", P);
//        return false;
//    }
//    else
//    {
//        int pr = P;
//        while (pr < L->Last)
//        {
//            L->Data[pr] = L->Data[pr + 1];
//            pr++;
//        }
//        L->Last--;
//        return true;
//    }
//}
//int main()
//{
//    List L;
//    ElementType X;
//    Position P;
//    int N;
//
//    L = MakeEmpty();
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &X);
//        if (Insert(L, X, 0) == false)
//            printf(" Insertion Error: %d is not in.\n", X);
//    }
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &X);
//        P = Find(L, X);
//        if (P == ERROR)
//            printf("Finding Error: %d is not in.\n", X);
//        else
//            printf("%d is at position %d.\n", X, P);
//    }
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &P);
//        if (Delete(L, P) == false)
//            printf(" Deletion Error.\n");
//        if (Insert(L, 0, P) == false)
//            printf(" Insertion Error: 0 is not in.\n");
//    }
//    return 0;
//}
// 

//void change(int arr[], int n)
//{
//    int left = 0, right = n - 1; // 双指针
//    while (left < right)
//    {
//        // 如果左侧是奇数，直接跳过
//        if (arr[left] % 2 != 0)
//        {
//            left++;
//        }
//        // 如果右侧是偶数，直接跳过
//        else if (arr[right] % 2 == 0)
//        {
//            right--;
//        }
//        // 左边是偶数，右边是奇数，交换
//        else
//        {
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//            left++;
//            right--;
//        }
//    }
//}
// 
//int main()
//{
//    int v = 0, w = 0; scanf("%d %d", &v, &w);
//    char s[256] = { -1 };
//    scanf("%s", s); int len = strlen(s);
//}
//int main()
//{
//    int arr[10][10] = { 0 };
//    int n = 0, m = 0;
//    int x = 0, y = 0;
//    scanf("%d %d", &n, &m);
//    printf("\n");//输入n和m
//
//    for (x = 0; x < n; x++)
//    {//用x和y来表示角标                                                           
//        for (y = 0; y < m; y++)
//        {
//            scanf("%d ", &arr[x][y]);
//        }//输入二维数组；
//    }
//    int temp = 1;
//    int e[50][50] = { 0 };
//    for (y = 0; y < m; y++)
//    {
//        temp = arr[0][y];
//        for (x = 1; x < n; x++)
//        {
//            if (arr[x][y] > temp)                                 //先一行一行的比较
//                for (int i = 1; i <= m; i++)
//                {
//                    e[0][i] = arr[x][y];
//                }
//        }
//    }
//
//    int a = 1;
//    int f[50][50] = { 0 };
//    for (x = 0; x < n; x++)
//    {
//        a = arr[x][0];
//        for (y = 1; y < m; y++)
//        {
//            if (arr[x][y] > a)                                 //先一行一行的比较
//                for (int j = 1; j <= m; j++)
//                {
//
//                    f[0][j] = arr[x][y];
//                }
//        }
//    }
//
//    for (int i = 1; i <= m; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            if (e[0][i] == f[0][j])
//            {
//                printf("%d %d %d", arr, n, m);
//            }
//
//        }
//    }
//    return 0;
//}
//
// 
// #include <stdio.h>
//
//int main() {
//    int arr[10][10] = { 0 };
//    int n = 0, m = 0;
//    int x = 0, y = 0;
//
//    // 输入二维数组的行数和列数
//    scanf("%d %d", &n, &m);
//    printf("\n");
//
//    // 输入二维数组
//    for (x = 0; x < n; x++) {
//        for (y = 0; y < m; y++) {
//            scanf("%d", &arr[x][y]);
//        }
//    }
//
//    // 用于存储每行的最大值
//    int rowMax[10];
//    for (x = 0; x < n; x++) {
//        rowMax[x] = arr[x][0];
//        for (y = 1; y < m; y++) {
//            if (arr[x][y] > rowMax[x]) {
//                rowMax[x] = arr[x][y];
//            }
//        }
//    }
//
//    // 用于存储每列的最大值
//    int colMax[10];
//    for (y = 0; y < m; y++) {
//        colMax[y] = arr[0][y];
//        for (x = 1; x < n; x++) {
//            if (arr[x][y] > colMax[y]) {
//                colMax[y] = arr[x][y];
//            }
//        }
//    }
//
//    // 遍历二维数组，判断并输出最大点
//    for (x = 0; x < n; x++) {
//        for (y = 0; y < m; y++) {
//            if (arr[x][y] == rowMax[x] && arr[x][y] == colMax[y]) {
//                printf("%d %d %d\n", arr[x][y],x+1, y+1);
//            }
//        }
//    }
//
//    return 0;
//}
//#include<string.h>
////将删除的元素置0，其他元素前移
//char* str_delete(char* s, int v, int w)
//{
//    char* ps = s;
//    int sz = strlen(s);
//    for (int i = 0; i < w; i++)
//    {
//        char* ps = s + v - 1;
//        *ps = 0;
//        *ps = *(ps + 1);
//    }
//    ps = s;
//    return s;
//
//
//}
//
//int main()
//{
//    int v = 0, w = 0; scanf("%d %d", &v, &w);
//    char s[256];
//    fgets(s, sizeof(s), stdin);
//    int len = strlen(s);
//
//    char* pa = str_delete(s, v, w);
//    for (int i = 0; i < len; i++)
//    {
//        printf("%c", *pa);
//        pa++;
//    }
//    return 0;
//}

//int SumSolution(int n) {
//    n && (n += SumSolution(n - 1));  // 通过与运算判断n是否为正数
//    return n;
//}
//int main() {
//
//    return 0;
//}

//double Divide(int a, int b) noexcept
//{
//    // 当b == 0时抛出异常
//    if (b == 0)
//    {
//        throw "Divide by zero conditon!";
//    }
//    return ((double)a / (double)b);
//}
//
//int main()
//{
//    try
//    {
//        int len, time;
//        cin >> len >> time;
//        cout << Divide(len, time) << endl;
//    }
//    catch (const char* errmsg)
//    {
//        cout << errmsg << endl;
//    }
//    catch (...)
//    {
//        cout << "Unkown Exception" << endl;
//    }
//
//    int i = 0;
//    cout << noexcept(Divide(1, 2)) << endl;
//    cout << noexcept(Divide(1, 0)) << endl;
//    cout << noexcept(0) << endl;
//
//    return 0;
//}

//#define bookmax 10
//struct Bookshelf {
//    char name[100];
//    double price;
//};

//
//int j = 0;
//int i = 0;
//int n = 0;
//int m = 0;
//
//void behind(int* arr, int n, int m)
//{
//    int arr1[10000] = { 0 };
//    for (i = n-m; i < n; i++)
//    {
//        arr1[j] = arr[i];
//        j++;
//    }
//    for (i = 0; i < m; i++)
//    {
//        printf("%d", arr1[i]);
//    }
//    for (i = 0; i < n - m; i++)
//    {
//        printf("%d", arr[i]);
//    }
//}
//int main() {
//
//    printf("输入n和m");
//    scanf_s("%d %d", &n, &m);
//    int arr[10000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf_s("%d", &arr[i]);
//    }
//    behind(arr, n, m);
//    return 0;
//}
//int C(int m, int n) {
//    int x;
//    if (n < 0) return 0;
//    else if (n == 0) return 1;
//    else if (n == 1) return m;
//    if (m < 2 * n)  x = C(m, m - n);
//    else if (m >= 2 * n) x = C(m - 1, n - 1) + C(m - 1, n);
//    return x;
//}
//int main() {
//    int m, n;
//    scanf("%d%d", &m, &n);
//    int t = C(m, n);
//    printf("%d", t);
//    return 0;
//}

//double funcos(double e, double x)
//{
//    int i = 0;
//    double sum = 1;  // 初始化sum为x的0次方除以0!的值，即1
//    double item;
//    double factorial;
//    do
//    {
//        i += 2;
//        factorial = 1;
//        for (int j = 1; j <= i; j++){
//            factorial *= j;
//        }
//        item = pow(-1, (i / 2)) * pow(x, i) / factorial;
//        sum += item;
//    } while (fabs(item) >= e);
//
//    return sum;
//}
//int main() {
//    cout<<funcos(0.01, -3.14);
//   /* int n;
//    scanf("%d", &n);
//    struct Bookshelf book[bookmax];
//    for (int i = 0; i < n; i++) {
//        scanf("%s", book[i].name);
//        scanf("%lf", &book[i].price);
//    }
//    struct Bookshelf max = book[0];
//    struct Bookshelf min = book[0];
//    for (int i = 1; i < n; i++) {
//        if (book[i].price > max.price) {
//            max = book[i];
//        }
//        if (book[i].price < min.price) {
//            min = book[i];
//        }
//
//    }
//    printf("%.2lf,%s\n", max.price, max.name);
//    printf("%.2lf,%s\n", min.price, min.name);*/
//    /*int a[] = { 1,2,3,4 };
//    cout << sizeof(*&a);*/
//    return 0;
//}
//// 函数声明
//void findMaxPoints(int** array, int rows, int cols);
//
//int main() {
//    int rows, cols;
//
//    // 获取二维数组的行数和列数
//    scanf("%d", &rows);
//    scanf("%d", &cols);
//
//    // 动态分配二维数组内存
//    int** array = (int**)malloc(rows * sizeof(int*));
//    for (int i = 0; i < rows; i++) {
//        array[i] = (int*)malloc(cols * sizeof(int));
//    }
//
//    // 输入二维数组元素
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            scanf("%d", &array[i][j]);
//        }
//    }
//
//    // 调用函数查找最大点
//    findMaxPoints(array, rows, cols);
//
//    // 释放二维数组内存
//    for (int i = 0; i < rows; i++) {
//        free(array[i]);
//    }
//    free(array);
//
//    return 0;
//}
//
//// 查找最大点的函数实现
//void findMaxPoints(int** array, int rows, int cols) {
//    int maxInRow, maxInCol;
//
//    // 遍历二维数组的每一个元素
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            maxInRow = array[i][j];
//            maxInCol = array[i][j];
//
//            // 查找当前元素所在行的最大值
//            for (int k = 0; k < cols; k++) {
//                if (array[i][k] > maxInRow) {
//                    maxInRow = array[i][k];
//                }
//            }
//
//            // 查找当前元素所在列的最大值
//            for (int k = 0; k < rows; k++) {
//                if (array[k][j] > maxInCol) {
//                    maxInCol = array[k][j];
//                }
//            }
//
//            // 判断当前元素是否为所在行和列的最大值
//            if (array[i][j] == maxInRow && array[i][j] == maxInCol) {
//                printf("%d %d %d\n", array[i][j], i+1, j+1);
//            }
//        }
//    }
//}
//int main() {
//    int N;
//    std::string inputString;
//
//    // 获取每列的字符数N
//    std::cout << "请输入每一列的字符数N(<100): ";
//    std::cin >> N;
//
//    // 获取输入字符串
//    std::cout << "请输入一个长度不超过1000的非空字符串: ";
//    std::cin.ignore();  // 忽略之前输入N时留下的换行符
//    std::getline(std::cin, inputString);
//
//    int length = inputString.length();
//    int numColumns = length / N;
//    if (length % N != 0) {
//        numColumns++;
//    }
//
//    // 从右往左，从上到下输出
//    for (int row = 0; row < N; ++row) {
//        for (int col = numColumns - 1; col >= 0; --col) {
//            int index = col * N + row;
//            if (index < length) {
//                std::cout << inputString[index];
//            }
//            else {
//                std::cout << " ";
//            }
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//}
//template<class T>
//struct Less {
//    bool operator()(const T& a, const T& b) {
//        return a > b;
//    }
//};
//
//template<class Iterator, typename Compare =   Less<typename::T>>
//void my_sort(Iterator first, Iterator second, Compare com = Compare())
//{
//    sort(first, second, com);
//}
//int main() {
//    vector<int> v{ 1,2,3,4,5 };
//    my_sort(v.begin(), v.end(),Less<int>());
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    char arr[12];
//    int i = 0;
//    int j = 0;
//    scanf("%d", &n);
//    for (int k = 1; k <= n; k++)
//    {
//        scanf("%s", arr);
//        for (j = 0; j < 11; j++)
//        {
//            printf("%c", arr[j]);
//        }
//        if (arr[5] == '0')
//        {
//            printf(" 9");
//        }
//        else
//        {
//            printf(" 0");
//        }
//        for (i = 6; i < 11; i++)
//        {
//            printf("%c", arr[i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//int main() {
//    int a, b, c;
//    scanf("%d%d%d",&a,&b,&c);
//    if (a + b >= c && a + c >= b && b + c >= a) {
//        if (a == b && b== c)
//            printf("Equilateral triangle!");
//        else if (a == b || b == c || a == c)
//            printf("Isosceles triangle!");
//        else
//            printf("Ordinary triangl");
//    }
//    else
//        printf("Not a triangle!");
//    return 0;
//}
//
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    change(arr, 10);
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int m = 0;
//    int n = 0;
//    printf("please input 2 positive numbers m and n: ");
//    scanf("%d %d", &m, &n);
//
//    int i = 0;
//    int j = 1;
//    int factorial = 1;
//    int sum = 0;
//
//    for (i = 0; i <= m; i++)
//    {
//        j = 1;
//        while (j <= n)
//        {
//            factorial = factorial * (i + j);     //calculate the factorial first
//            j++;
//        }
//
//        sum = sum + (i * factorial);     //calculate the sum last
//
//    }
//
//    printf("the result is %d\n", sum);
//
//    return 0;
//}

//class a {
//	char* b;
//	a(char* k) {
//		b = k;
//	}
//};
//int main() {
//	int n = 2;
//	char* str = new char[10];
//	char* tmp = new char[10];
//	str = tmp;
//	return 0;
//}
//int main()
//{
//	int choice = 0;
//	while (1)
//	{
//		cout << "请输入你的选择:" << endl;
//		cin >> choice;
//		cin.clear();
//
//		cin.ignore(10000, '\n');
//		switch (choice)
//		{
//		case 0://退出系统
//			break;
//		case 1://增加职工
//			break;
//		case 2://显示职工
//			break;
//		case 3://删除职工
//			break;
//		case 4://修改职工
//			break;
//		case 5://查找职工
//			break;
//		case 6://排序职工
//			break;
//		case 7://清空文档
//			break;
//		default: 
//			cout << "请选择正确的选项" << endl;
//			break; 
//		}
//	}
//}
//#include<iostream>
//using namespace std;
//void Secection_sort(int* p, int n)
//{
//    int i, j, k, t;
//    for (i = 0; i < n - 1; i++)
//    {
//        k = i;
//        for (j = i + 1; j < n; j++)
//        {
//            if (*(p + j) < *(p + k))
//                k = j;
//        }
//        t = *(p + k);
//        *(p + k) = *(p + i);
//        *(p + i) = t;
//
//    }
//}
//int main()
//{
//    //void Selection_sort(int* p, int n);
//
//    int a[10], i;
//    cout << "input 10 nums:";
//    for (i = 0; i < 10; i++)
//    {
//        cin >> a[i];
//    }
//    cout << endl;
//    Secection_sort(a, 10);
//    for (i = 0; i < 10; i++)
//    {
//        cout << a[i] << endl;
//    }
//    return 0;
//}
//void func(void** ret) {
//	*ret = (void*)199;
//}
//int main() {
//	/*void* ret = nullptr;
//	func(&ret);
//	cout << ret<<endl;
//	cout << (int)ret;*/
//	int a = 1;
//	int* p = &a;
//	cout << (int)p<<endl;
//	cout << p;
//
//	//printf(" %d", *p++);
//	return 0;
//}
//int main() {
//	int a = 3, b = 2;
//	cout<<double(double(a) + double((b - a)) / 2);
//	return 0;
//}
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//    void* ret = dest;
//    assert(dest && src);
//    if (dest < src)
//    {
//        while (num--)
//        {
//            *(char*)dest = *(char*)src;
//            dest = (char*)dest + 1;
//            src = (char*)src + 1;
//        }
//    }
//    else
//    {
//        while (num--)
//        {
//            //*((char*)dest + num)=*((char*)src  + num);
//           dest = (char*)dest + num;
//            src = (char*)src + num;
//            *(char*)dest = *(char*)src;
//        }
//    }
//    return ret;
//}
//int main()
//{
//    int arr[6] = { 1,2,3,4,5,6 };
//    my_memmove(arr + 2, arr, 12);
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    //my_memmove();
//    return 0;
//}
//class Solution {
//public:
//    string addBinary(string a, string b)
//    {
//        string s;
//        int cur1 = a.size() - 1, cur2 = b.size() - 1;
//        int t = 0;
//        while (cur1 || cur2)
//        {
//            if (cur1 >= 0)
//                t += a[cur1--] - '0';
//            if (cur2 >= 0)
//                t += b[cur2--] - '0';
//            t = t % 2;
//            s += to_string(t);
//            t = t / 2;
//        }
//        reverse(s.begin(), s.end());
//        return s;
//    }
//};
//int main()
//{
//    cout << std::string::npos;
//    /*Solution t;
//    auto e = t.addBinary("1010", "1011");
//    cout << e;*/
//    return 0;
//}
