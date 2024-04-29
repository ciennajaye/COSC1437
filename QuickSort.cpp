#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    //swapping values of two integer pointers
    int t = *a;
    *a = *b;
    *b = t;
}

//partition array
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        //moves current elements to the left side if <=
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

//quicksort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        //getting pivot index
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

//display elements
void displayArray(int arr[], int size)
{
    // To display the elements of the array.
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
}

int main()
{
    //getting size of array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    //gettinf number of elements seprated by spaces
    int arr[n];
    cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Input array" << endl;
    displayArray(arr, n);
    cout << endl;

    //call quickSort function
    quickSort(arr, 0, n - 1);

    cout << "Array sorted with quick sort" << endl;
    displayArray(arr, n);

    return 0; 
}

