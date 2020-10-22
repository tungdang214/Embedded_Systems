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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add Tung Dange>
 * @date <10/20/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Find a minium value in an array
 *
 * This function takes as integer pointer and value. This will loop
 * through the array and find the minimum value in the array
 * @param array an integer pointer the reference the address of the give array
 * @param size size of the given array
 *
 * @return the smallest value in the given array
 */
 int find_minimum(int* array, int size); //finding the mim of array of interger

/**
 * @brief Find a maximum value in an array
 *
 * This function takes as integer pointer and value. This will loop
 * through the array and find the maximum value in the array
 * @param array an integer pointer the reference the address of the give array
 * @param size size of the given array
 *
 * @return the largest value in the given array
 */
 int find_maximum(int* array, int size);
 
 /**
 * @brief Find a mean of array values
 *
 * This function takes as integer pointer and size. This will loop
 * through the array and add up all element in the array then divide it with
 * the size of the array
 * @param array an integer pointer the reference the address of the give array
 * @param size size of the given array
 *
 * @return the mean value of the given array
 */
 float find_mean(int* array, int size); 
 
 /**
 * @brief Find a median value of the array
 *
 * This function takes as integer pointer and size. This function will call the 
 * sort function to sort the array in ascending order. To get the median value
 * simply return the element at index of size/2
 * @param array an integer pointer the reference the address of the give array
 * @param size size of the given array
 *
 * @return the median value of the given array
 */
 int find_median(int* array, int size); 
 
 /**
 * @brief print the statistics number of the given array
 *
 * This function takes as 3 integer value and 1 floating value: maximum, minimum, mean
 * and median of the array and print such values for display.
 * @param min minimum value of the array
 * @param max maximum value of the array
 * @param mean mean of all value of the array
 * @param median median value of the array
 */
 void print_statistics(int min, int max, float mean,int median);
 
 /**
 * @brief print the contents of the given array
 *
 * This function takes as integer value for the size and pointer array
 * and print the contents the the array
 * @param array integer array pointer
 * @param size integer value represent the size of array
 */
 void print_array(int* array, int size);
 
 /**
 * @brief Sort of the given array using data structure selection sort method
 *
 * This function takes as integer value for the size and pointer array
 * and will perform sorting to the array
 * @param array integer array pointer
 * @param size integer value represent the size of array
 */
 void sort_array(int* array, int size);
 
 /**
 * @brief Swap the contents from the 2 memmory address
 *
 * This function takes 2 pointer that reference the memeory address that
 * we want their content to be swap
 * @param x address of the first item
 * @param y address of the second item
 */
 void swap(int* x, int* y);

 
 
 

#endif /* __STATS_H__ */
