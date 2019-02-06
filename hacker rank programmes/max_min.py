#!/bin/python

import math
import os
import random
import re
import sys


def partition(arr,low,high): 
    
    i = low-1       
    pivot = arr[high]     
    for j in range(low ,high): 
        if   arr[j] <= pivot: 
            i = i+1 
            arr[i],arr[j] = arr[j],arr[i] 
  
    arr[i+1],arr[high] = arr[high],arr[i+1] 
    return  i+1 
def quickSort(arr,low,high): 
    if low < high: 
        pi = partition(arr,low,high) 
  
     
        quickSort(arr, low, pi-1) 
        quickSort(arr, pi+1, high) 
  
arr=[]
totl=input()
k=input()
k-=1
for i in range(totl):
    arr.append(input())
    
n = len(arr) 
quickSort(arr,0,n-1) 
diff=0;
for i in range(0,n-k,1):
  
    x=arr[i+k]-arr[i]
    if(diff==0):
        diff=x;
    elif(diff>x):diff=x;
print(diff)


"""
  ---------------------------------
 |     problem statement :_       |
  ---------------------------------

You will be given a list of integers, arr, and a single integer K. You must create an array of length K from elements of "arr" such that its unfairness is minimized. Call that  array subarray.

. Unfairness of an array is calculated as
   
   max(subarray)-min(subarray)

Where:
- max denotes the largest integer in subarray.

- min denotes the smallest integer in subarray.

 As an example, consider the array with a of [1,24,7,2]. Pick any two elements,test subarr=[4,7] .

 unfairness =max(4,7) -min(4,7)=7-4 =3

Testing for all pairs, the solution [1,2] provides the minimum unfairness.

Note: Integers in arr may not be unique. 


"""