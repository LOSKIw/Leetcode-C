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
Ӧ���ǱȽϼ򵥵�һ����Ŀ�����ǲ�֪���ǲ�����Ϊ���Ե��ϰ���������Ե��ύ�����������������ɡ�����c���ԣ���֪���ǲ����ҹ�ª���ţ�����ת��Ϊ�ַ���������ôһ���鷳���������ɡ�
*/