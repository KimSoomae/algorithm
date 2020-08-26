#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int N;
int a[1001];
int stunum;
int cnt;
int sum, avg;
float per;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0;j < 1001;j++) {
			cin >> a[j];
		}
		stunum = a[0];
		sum = 0; avg = 0;
		for (int j = 1; j < stunum+1; j++) {
			sum += a[j];
		}
		avg = sum / stunum;
		for (int j = 1; j < stunum + 1;j++) {
			if (a[j] >= avg) {
				cnt++;
			}
			else {
			}
		}
		per = cnt / stunum;
		cout << per<< '\n';
		for (int j = 0; j < stunum+1; j++) {
			a[j] = 0;
		}
	}
	
	return 0;
}
