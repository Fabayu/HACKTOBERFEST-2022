#include <iostream>
using namespace std;

void merge(int *arr, int start, int end);

void merge_sort(int *arr, int start, int end)
{
  // base case
  if (start >= end)
    return;

  int mid = start + (end - start) / 2;

  // left part sort
  merge_sort(arr, start, mid);

  // right part sort
  merge_sort(arr, mid + 1, end);

  // for merging two sorted arrays
  merge(arr, start, end);
}

void merge(int *arr, int start, int end)
{
  int mid = start + (end - start) / 2;

  // length of both array
  int len1 = mid - start + 1;
  int len2 = end - mid;

  // create new dynamic array
  int *first = new int[len1];
  int *second = new int[len2];

  // copy first array in *first
  int mainArrayIndex = start;
  for (int i = 0; i < len1; i++)
  {
    first[i] = arr[mainArrayIndex++];
  }

  // copy second array in *second
  mainArrayIndex = mid + 1;
  for (int i = 0; i < len2; i++)
  {
    second[i] = arr[mainArrayIndex++];
  }

  // merge 2 sorted array
  int index1 = 0;
  int index2 = 0;
  mainArrayIndex = start;

  // dono index ko compare kar ra , jo chota hai usko arr mai daal ra .
  while (index1 < len1 && index2 < len2)
  {
    if (first[index1] < second[index2])
    {
      arr[mainArrayIndex++] = first[index1++];
    }

    if (first[index1] > second[index2])
    {
      arr[mainArrayIndex++] = second[index2++];
    }
  }

  // agar index 1 ke element bach gaye ho to .
  while (index1 < len1)
  {
    arr[mainArrayIndex++] = first[index1++];
  }

  // agar index 2 ke element bach gaye ho to .
  while (index1 < len2)
  {
    arr[mainArrayIndex++] = second[index2++];
  }
}

int main()
{
  int arr[5] = {82, 924, 91, 5, 29};
  int n = 5;

  merge_sort(arr, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}