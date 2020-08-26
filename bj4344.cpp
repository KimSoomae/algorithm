#include <iostream>
#include <cstdio>

using namespace std;

int N;
double a[1001];
double cnt,stunum,avg,total,per;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> stunum;
		total = 0, cnt = 0;
		for (int j = 0;j < stunum;j++) {
			cin >> a[j];
			total += a[j];
		
		}
		avg = total / stunum;
		for (int j = 0; j < stunum; j++) {
			if (a[j] > avg) {
				cnt++;
			}
		}
		per = (cnt / stunum)*100;
		printf("%.3f%%\n", per);
	}
	
	return 0;
}
