#include <stdio.h>

void bubbleSort(int arr[], int n) { //perform Bubble Sort on the array
    int i, j, temp;
    int swaps_total = 0; //track total number of swaps

    for (i = 0; i < n-1; i++) { //loop through each element in the array
        int swaps_current = 0; //track swaps for current element
        
        for (j = 0; j < n-i-1; j++) { //iterate through the unsorted part of the array
            if (arr[j] > arr[j+1]) { //if the current element is greater than the next element, swap them
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps_current++; //swap count for current element
                printf("%d: # of times %d is swapped\n", arr[j+1], arr[j+1]);
            }
        }
        swaps_total += swaps_current; //add swaps for current element to total swaps
    }

    printf("Total number of swaps in bubble sort: %d\n", swaps_total); //total number of swaps for Bubble Sort
}

void selectionSort(int arr[], int n) { //function to perform Selection Sort on the array
    int i, j, min_idx, temp;
    int swaps_total = 0; //track total number of swaps

    for (i = 0; i < n-1; i++) { //loop through each element in the array
        int swaps_current = 0; //track swaps for current element
        min_idx = i;
        
        for (j = i+1; j < n; j++) { //find the index of the minimum element in the unsorted part of the array
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx]; //swap the found minimum element with the first element
        arr[min_idx] = arr[i];
        arr[i] = temp;
        swaps_current++; //increment swap count for current element
        printf("%d: # of times %d is swapped\n", arr[i], arr[i]);
        swaps_total += swaps_current; //add swaps for current element to total swaps
    }
    printf("Total number of swaps in selection sort: %d\n", swaps_total); //total number of swaps for Selection Sort
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; //define the arrays
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]); //calculate array size
    int n2 = sizeof(array2) / sizeof(array2[0]); //calculate array size

    printf("array1:\n"); //bubble Sort on array1
    bubbleSort(array1, n1);
    printf("\n");

    printf("array2:\n"); //selection Sort on array2
    selectionSort(array2, n2);

    return 0;
}
