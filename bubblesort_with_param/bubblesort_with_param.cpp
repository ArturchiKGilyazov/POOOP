#include <iostream>

using namespace std;
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
template< class Stype> void bubble(Stype* a, int N) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N - 1; j++) {
			if (a[j] > a[j + 1]) swap(a[j], a[j+1]);
		}
}
int main()
{
	const int N = 10;
	int a[N];
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 20;
	}
	bubble(a, N);
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}
