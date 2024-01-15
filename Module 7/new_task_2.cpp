#include <iostream>
using namespace std;

// this function
    // time complexity O(n log(n))
    // space complexity O(1)

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


// this function
    // time complexity O(n)
    // space complexity O(1)
void mergeArrays(int array1[], int size1, int array2[], int size2) {
    int newSize = size1 + size2;
    for (int i = 0; i < size2; ++i) {
        array1[size1 + i] = array2[i];
    }
}

int main(){

    cout << "nums1 and nums2 array length : ";
    int m, n;
    cin >> m;
    cin >> n;

    int nums1[m];
    int nums2[n];
    cout << "nums1 value separated by space : ";
    for(int i = 0; i<m; i++){
        cin >> nums1[i];
    }

    cout << "nums2 value separated by space : ";
    for(int i = 0; i<n; i++){
        cin >> nums2[i];
    }


    mergeSort(nums1, 0, m-1);
    mergeSort(nums2, 0, n-1);


    mergeArrays(nums1, m, nums2, n);

    cout << endl << "Now nums1 and nums2 in nums1 sorted order: "<< endl << endl;
    m += n;
    mergeSort(nums1, 0, m-1);
    for(int i = 0; i<m; i++){
        cout << nums1[i] << " ";
    }

    cout << endl << endl;
    return 0;
}
