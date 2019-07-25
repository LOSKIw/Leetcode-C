int get_str(int n, char** A)
{
	int i, temp = n;
	for (i = 0; temp >= 1; i++)
		temp /= 10;
	temp = i;
	*A = (char*)malloc(sizeof(char)*(i + 1));
	(*A)[i] = '\0';
	for (i = 0; i < temp; i++)
	{
		(*A)[temp - i - 1] = n % 10 + '1' - 1;
		n /= 10;
	}
	return temp;
}

char** fizzBuzz(int n, int* returnSize) {
	int i;
	*returnSize = n;
	char* temp = (char*)malloc(sizeof(char) * 100);
	char**A = (char**)malloc(sizeof(char*)*n);
	for (i = 0; i < n; i++)
	{
		if ((i + 1) % 3 != 0 && (i + 1) % 5 != 0)
		{
			get_str(i + 1, &A[i]);
		}
		else if ((i + 1) % 3 == 0 && (i + 1) % 5 != 0)
		{
			A[i] = (char*)malloc(sizeof(char) * 5);
			A[i] = "Fizz";
		}
		else if ((i + 1) % 3 != 0 && (i + 1) % 5 == 0)
		{
			A[i] = (char*)malloc(sizeof(char) * 5);
			A[i] = "Buzz";
		}
		else if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
		{
			A[i] = (char*)malloc(sizeof(char) * 9);
			A[i] = "FizzBuzz";
		}
	}
	return A;
}
/*
2019/7/25
应该是比较简单的一道题目，但是不知道是不是因为语言的障碍，别的语言的提交好像听起来都很轻松。但是c语言，不知道是不是我孤陋寡闻，整形转化为字符串是有那么一点麻烦。看看题解吧。
*/