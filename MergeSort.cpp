#include <iostream>

using namespace std;

//functions
void merge(int arr[], int left, int mid, int right);

void merge_sort(int arr[], int left, int right);

 
void merge_sort(int arr[], int left, int right)
{
    int mid;
    if (left < right) {
        //dividing array
        mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        //merging arrays
        merge(arr, left, mid, right);
    }
}

//merge function
void merge(int arr[], int left, int mid, int right)
{
    int i, j, k, c[50];
    i = left;
    k = left;
    j = mid + 1;
    //merging the two halves
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    //copying elements of left
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    //copying elements of right
    while (j <= right) {
        c[k] = arr[j];
        k++;
        j++;
    }
    //copying sorted elements to original array
    for (i = left; i < k; i++) {
        arr[i] = c[i];
    }
}

int main()
{
    int myarray[30], num;
    
    //getting number of elements to be sorted
    cout << "Enter number of elements to be sorted: ";
    cin >> num;

    //elements to be sorted
    cout << "Enter " << num << " elements to be sorted: ";
    for (int i = 0; i < num; i++) {
        cin >> myarray[i];
    }
    //calling merge function
    merge_sort(myarray, 0, num - 1);

    //output
    cout << "Sorted array:\n";
    for (int i = 0; i < num; i++) {
        cout << myarray[i] << "\t";
    }
    cout << endl;
    return 0;
}


