#include <iostream>
using namespace std;

// this sort function time complexity O(n log(n))
// I am use merge sort algorithm
// because this algorithm average case O(n log(n))
// space complexity is O(n)


void merge(int array[], int  left, int  mid, int  right){
	int  subArrayOne = mid - left + 1;
	int  subArrayTwo = right - mid;

	int *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	for (int i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (int j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];


	int indexOfSubArrayOne = 0,
		indexOfSubArrayTwo = 0;


	int indexOfMergedArray = left;

	while (indexOfSubArrayOne < subArrayOne &&
		indexOfSubArrayTwo < subArrayTwo)
	{
		if (leftArray[indexOfSubArrayOne] <=
			rightArray[indexOfSubArrayTwo])
		{
			array[indexOfMergedArray] =
			leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else
		{
			array[indexOfMergedArray] =
			rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}


	while (indexOfSubArrayOne < subArrayOne)
	{
		array[indexOfMergedArray] =
		leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}

	while (indexOfSubArrayTwo < subArrayTwo)
	{
		array[indexOfMergedArray] =
		rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
}


void mergeSort(int array[],int  begin,int  end){
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;

	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);

	merge(array, begin, mid, end);
}


int main(){
    int n, k;
    cout << "Array Length :";
    cin >> n ;
    cout << "Kth largest Elements k = ";
    cin >> k;
    cout << "\nDefine array elements separated by space:  ";
    int ar[n];
    for(int i = 0; i<n; i++){
        cin >> ar[i];
    }

    mergeSort(ar, 0, n-1);

    int kth_last = ar[n-1];
    int condition = n-1;
    while(k){
        kth_last = ar[condition];
        k--;
        condition--;
    }

    cout << "\nKth largest Elements: ";
    cout << kth_last << endl;

    return 0;
}
