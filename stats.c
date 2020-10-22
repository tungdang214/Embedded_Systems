/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.s> 
 * @brief Take an integer array of 40 element and find the min, max, mean and median
 * of array. This file have a sort function to sort the array into ascending array.
 * 
 *
 * @author Tung Dang
 * @date 10/20/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_array(test, SIZE);
  int minimum = find_minimum(test, SIZE);
  int maximum = find_maximum(test, SIZE);
  float mean = find_mean(test, SIZE);
  int median = find_median(test, SIZE);
  print_statistics(minimum, maximum, mean, median);
  sort_array(test, SIZE);
  print_array(test, SIZE);
 



}

int find_minimum(int* array, int size) {
	int min = array[0];
	for(int i =1; i < size; i++) {
		if(array[i] < min) {
		       min = array[i];
		}
	}
	return min;
}

int find_maximum(int* array, int size) {
	int max = array[0];
	for(int i =1; i < size; i++) {
		if(array[i] > max) {
		       max = array[i];
		}
	}
	return max;
}

float find_mean(int* array, int size) {
	int sum = 0;
	
	for(int i =0; i < size; i++) {
		sum += array[i];
	}
	return sum/(float)size;
}

int find_median(int* array, int size) {
	sort_array(array, size);
	return array[size/2];
}

void print_statistics(int min, int max, float mean, int median) {
	printf("minimum value in the array: %d\n", min);
	printf("maximum value in the array: %d\n", max);
	printf("mean value in the array: %f\n", mean);
	printf("median value in the array: %d\n", median);
}
//selection sort
void sort_array(int* array, int size){
	int i, j, min_idx;
	for(int i = 0; i < size-1; i++) {
		min_idx = i;
		for(j = i+1; j < size; j++) {
			if(array[j] < array[min_idx])
				min_idx = j;
		}
		swap(&array[min_idx], &array[i]);
	}
}
//swaping the 2 element 
void swap(int * A, int* B) {
	int temp = *A;
	*A = *B;
	*B = temp;
}
// print the content of the array
void print_array(int* array, int size) {
	printf("Array content: \n");
	for(int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
		
		
		
		

/* Add other Implementation File Code Here */
