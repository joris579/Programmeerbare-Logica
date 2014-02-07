
void print(int a[], int n);
void process(int a[], int n);

int main(void)
{
	int A[] ={1,2,3,4,5,6,7,8,9},
	N = 9;
	printf("Array before processing:\n");print(A,N);
	process(A,N);
	printf("Array after processing\n");print(A,N);
	return 0;
}

void print(int a[], int n)
{
	int i;
	for (i=0;i<n;i++) printf("%3d\n", a[i]);
	printf("\n");
}

void process(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)a[i]=a[i]*a[i];
}