#include <iostream>
using namespace std;

class Sort
{
public:
	n = 4;
	int arr[] = {10, 7, 8, 9, 1, 5}
};

class BubbleSort : public Sort
{
public:

	void swap(int *xp, int *yp)
	{
	    int temp = *xp;
	    *xp = *yp;
    	*yp = temp;
	}
 
	// A function to implement bubble sort
	void bubbleSort(int arr[], int n)
	{
	   int i, j;
	   for (i = 0; i < n-1; i++)      
	 
	       // Last i elements are already in place   
	       for (j = 0; j < n-i-1; j++) 
	           if (arr[j] > arr[j+1])
	              swap(&arr[j], &arr[j+1]);
	}
	 
	/* Function to print an array */
	void printArray(int arr[], int size)
	{
	    int i;
	    for (i=0; i < size; i++)
	        printf("%d ", arr[i]);
	    printf("n");
	}
};
class InsertionSort : public Sort
{
public:
	void insertionSort(int arr[], int n)
	{
	   int i, key, j;
	   for (i = 1; i < n; i++)
	   {
	       key = arr[i];
	       j = i-1;
	 
	       /* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && arr[j] > key)
	       {
	           arr[j+1] = arr[j];
	           j = j-1;
	       }
	       arr[j+1] = key;
	   }
	}

	// A utility function ot print an array of size n
	void printArray(int arr[], int n)
	{
	   int i;
	   for (i=0; i < n; i++)
	       printf("%d ", arr[i]);
	   printf("\n");
	}
};
class QuickSort : public Sort
{
public:
	void swap(int* a, int* b)
	{
	    int t = *a;
	    *a = *b;
	    *b = t;
	}
	 
	/* This function takes last element as pivot, places
	   the pivot element at its correct position in sorted
	    array, and places all smaller (smaller than pivot)
	   to left of pivot and all greater elements to right
	   of pivot */
	int partition (int arr[], int low, int high)
	{
	    int pivot = arr[high];    // pivot
	    int i = (low - 1);  // Index of smaller element
	 
	    for (int j = low; j <= high- 1; j++)
	    {
	        // If current element is smaller than or
	        // equal to pivot
	        if (arr[j] <= pivot)
	        {
	            i++;    // increment index of smaller element
	            swap(&arr[i], &arr[j]);
	        }
	    }
	    swap(&arr[i + 1], &arr[high]);
	    return (i + 1);
	}
	 
	/* The main function that implements QuickSort
	 arr[] --> Array to be sorted,
	  low  --> Starting index,
	  high  --> Ending index */
	void quickSort(int arr[], int low, int high)
	{
	    if (low < high)
	    {
	        /* pi is partitioning index, arr[p] is now
	           at right place */
	        int pi = partition(arr, low, high);
	 
	        // Separately sort elements before
	        // partition and after partition
	        quickSort(arr, low, pi - 1);
	        quickSort(arr, pi + 1, high);
	    }
	}
	 
	/* Function to print an array */
	void printArray(int arr[], int size)
	{
	    int i;
	    for (i=0; i < size; i++)
	        printf("%d ", arr[i]);
	    printf("n");
	}
};