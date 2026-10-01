#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 8, 3, 6, 2, 7, 1 };
    int n = sizeof(arr) / sizeof(arr[0]); // 算出数组长度
    // 冒泡排序核心
    for (int i = 0; i < n - 1; i++)        // 总共最多 n‑1 轮
    {
        for (int j = 0; j < n - 1 - i; j++) // -i:每轮少比较已经排好的末尾
        {
            if (arr[j] > arr[j + 1])         // 前一个 >后一个，就交换
            {
                int temp = arr[j]; //用temp存值进行交换
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // 输出结果
    cout << "排序后：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//若从大到小排序，只需将 >改为<即可.






