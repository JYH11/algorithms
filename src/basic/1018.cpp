#include <bits/stdc++.h>

using namespace std;
int chess[51][51];
/*
black = 0
white = 1
*/
int check(int x, int y){
	int cnt1 = 0, cnt2 = 0;
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == chess[i][j]) cnt1++; // Ž���� �����ϴ� ù��° ����� ��� �϶�
			if ((i + j + 1) % 2 == chess[i][j]) cnt2++; // Ž���� �����ϴ� ù��° ����� ������ �϶�
		}
	}
	return min(cnt1, cnt2); // �� �� �ּҰ� ��ȯ
}
int main(){
	int N, M, mini = 2500; // �ּ� ��
	char c;
	cin >> N >> M;
	for (int i = 0; i < N; i++) { // B�� '0', W�� '1'�� ����
		for (int j = 0; j < M; j++) {
			cin >> c;
			if (c == 'B') chess[i][j] = 0;
			else chess[i][j] = 1;
		}
	}
	for (int i = 0; i <= N - 8; i++) { // check(x, y)�Լ��� Ž���� ������ �ε��� ����
		for (int j = 0; j <= M - 8; j++) {
			if (mini > check(i, j)) mini = check(i, j); // ���� ���� ������ �Ǻ�
		}
	}
	cout << mini;
}