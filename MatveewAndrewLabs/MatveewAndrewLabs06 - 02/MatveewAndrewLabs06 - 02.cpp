/*  2. Дан массив, состоящий из n целых чисел (n<=10). Необходимо:
    г) упорядочить массив по возрастанию элементов методом "пузырька"
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> BubbleSort(vector<int> arr)
{
    int temp;

    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = { 5,4,2,1,3,9,8,7,6,10 };
    arr = BubbleSort(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }
}
