bool isMajorityElement(int* nums, int numsSize, int target) {
	int i, temp = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] == target)
			temp++;
		if (temp > numsSize / 2)
			return true;
	}
	return false;
}

/*
2019/8/11
�ܼ򵥵�һ����...������⼴��
*/