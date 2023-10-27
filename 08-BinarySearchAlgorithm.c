#include <stdio.h>
// Binary search function
int binarySearch(int array[], int size, int target) {
int left = 0;
int right = size - 1;
while (left <= right) {
int mid = left + (right - left) / 2;
// If the element is found at the middle
if (array[mid] == target)
return mid;
// If the element is greater, ignore the left half
if (array[mid] < target)
left = mid + 1;
// If the element is smaller, ignore the right half
else
right = mid - 1;
}
// Element is not in the array
return -1;
}

int main() {
int size, target;
printf("Enter the number of elements in the array: ");
scanf("%d", &size);
int array[size];
printf("Enter %d sorted integers:\n", size);
for (int i = 0; i < size; i++) {
scanf("%d", &array[i]);
}
printf("Enter the element to search for: ");
scanf("%d", &target);
int result = binarySearch(array, size, target);
if (result != -1) {
printf("Element %d found at index %d.\n", target, result);
} else {
printf("Element %d not found in the array.\n", target);
}
return 0;
}
