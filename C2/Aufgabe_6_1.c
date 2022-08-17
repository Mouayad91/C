#include <stdio.h>
#include <limits.h>

void findMax(int nums[], int n, int **pMax) {
	int max = INT_MIN;
	int *p = nums;
	int i = 0;
	for(i=0; i<n; i++) {
		if(nums[i] > max) {
			max = nums[i];
			p = &nums[i];
		}
	}
	*pMax = p;
}

int main() {
	int numbers[] = { 23, 54, 17, 69, 42 };
	int *pMax;
	int count = sizeof(numbers)/sizeof(numbers[0]);
	findMax(numbers, count, &pMax);
	printf("*max: %d\n", *pMax);
	return 0;
}







