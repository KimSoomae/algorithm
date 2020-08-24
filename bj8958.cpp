#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int N;
char a[80];
int cnt = 0;
int score;
int size;


int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		int size = strlen(a);
		score = 0, cnt = 0;
		for (int j = 0; j < size; j++) {
			if (a[j] == 'O'){
				cnt += 1;
				score+= cnt;
			}
			else if (a[j] == 'X') {
				cnt = 0;
			}
			else{}
		}
		cout << score<< '\n';
		for (int j = 0; j < size; j++) {
			a[j] = 0;
		}
	}
	
	return 0;
}
