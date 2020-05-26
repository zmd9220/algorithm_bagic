//#include <cstdio>
//int a[1001];
//int d[1001];
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = n; i >= 1; i--) {
//		d[i] = 1;
//		for (int j = i + 1; j <= n; j++) {
//			if (a[i] > a[j] && d[i] < d[j] + 1) {
//				d[i] = d[j] + 1;
//			}
//		}
//	}
//	int ans = d[1];
//	for (int i = 2; i <= n; i++) {
//		if (ans < d[i]) {
//			ans = d[i];
//		}
//	}
//	printf("%d\n", ans);
//	return 0;
//}