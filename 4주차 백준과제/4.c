#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int p, q;
	scanf("%d", &p);
	scanf("%d", &q);
	int total = 0;
	for (int i = 0; i < q; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		total += a * b;

	}
	if (total == p) {
		printf("Yes");
	}
	if (total != p) {
		printf("No");
	}
	return 0;
}