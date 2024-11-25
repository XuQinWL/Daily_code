#include "util.hpp"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;

#define MAXSIZE 5
#define ERROR -1
typedef int ElementType;
typedef int Position;
typedef struct LNode* List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List MakeEmpty()
{
    List p = (List)malloc(sizeof(struct LNode));
    p->Last = -1;
    return p;
}
Position Find(List L, ElementType X)
{
    int i = 0;
    int N = L->Last;
    do {
        if (X == L->Data[i])
        {
            return i;
        }
        else
        {
            i++;
        }
    } while (N--);
    return ERROR;
}
bool Insert(List L, ElementType X, Position P)
{
    if (L->Last == MAXSIZE - 1)
    {
        printf("FULL\n");
        return false;
    }
    if (P >= MAXSIZE || P < 0)
    {
        printf("ILLEGAL POSITION\n");
        return false;
    }
    int M = L->Last;
    while (L->Last - P)
    {
        L->Data[M + 1] = L->Data[M];
        M--;
    }
    L->Data[P] = X;
    L->Last++;
    return true;
}
bool Delete(List L, Position P)
{
    if (P > L->Last || P < 0)
    {
        printf("POSITION %d EMPTY\n", P);
        return false;
    }
    else
    {
        int pr = P;
        while (pr < L->Last)
        {
            L->Data[pr] = L->Data[pr + 1];
            pr++;
        }
        L->Last--;
        return true;
    }
}
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

int main() {
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if (a + b >= c && a + c >= b && b + c >= a) {
        if (a == b && b== c)
            printf("Equilateral triangle!");
        else if (a == b || b == c || a == c)
            printf("Isosceles triangle!");
        else
            printf("Ordinary triangl");
    }
    else
        printf("Not a triangle!");
    return 0;
}
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
