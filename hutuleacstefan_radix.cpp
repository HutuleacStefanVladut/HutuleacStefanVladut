
#include <iostream>

using namespace std;

int getMax(int V[], int n)
{
	int max = V[0];
	for (int i = 1; i < n; i++)
		if (V[i] > max)
			max = V[i];
	return max;
}


void countSort(int V[], int n, int exp)
{

	int output[n], i, count[10] = {0};


	for (i = 0; i < n; i++)
		count[(V[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i-1];

	for (i = n - 1; i >= 0; i--)
	{
		output[count[(V[i] / exp) % 10] - 1] = V[i];
		count[(V[i] / exp) % 10]--;
	}


	for (i = 0; i < n; i++)
		V[i] = output[i];
}

void radixsort(int V[], int n)
{
	int exp, m;
	m = getMax(V, n);


	for (exp = 1; m/exp > 0; exp *= 10)
		countSort(V, n, exp);
}

int main()
{
	int n, i;
	cout<<"\Numarul elementelor: ";
	cin>>n;

	int V[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Afizeaza elementul "<<i+1<<": ";
		cin>>V[i];
	}

	radixsort(V, n);


	cout<<"\nSortatele ";
	for (i = 0; i < n; i++)
		cout<<","<<V[i];
	return 0;}
