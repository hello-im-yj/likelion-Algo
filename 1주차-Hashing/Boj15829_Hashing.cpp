#include <iostream>		//c++ ǥ������� �Լ� ���
#include <string>

//cin = console input (>>(������ ����)�� Shift�� ���� ä�� .(��)�� ������ �˴ϴ�.)
//cout = console output (<< (���� ����)�� Shift�� ���� ä��, (��ǥ)�� ������ �˴ϴ�.)

#define M 1234567891
#define r 31

using namespace std;
using ll = long long;

ll mod(int num, int count);

int main() {
	int length;
	cin >> length;

	string input;
	cin >> input;

	ll hash = 0;

	for (int i = 0; i < length; i++) {
		hash = (hash + mod(input[i]-'a' + 1, i)) % M;
	}

	cout << hash;
}

ll mod(int num, int count) {
	ll res = num;
	for (int i = 0; i < count; i++) {
		res = (res * r) % M;
	}

	return res;
}

/*
���� �Լ� �⺻��

int hash_function(int key) {
	int hash_index = key % M;
	if (hash_index < 0) {
		hash_index += M;
	}
	return hash_index;
}
*/

/*
��ⷯ ���� �⺻ �Ӽ�
1. (a + b) mod n = {(a mod n) + (b mod n)} mod n
2. (a - b) mod n = {(a mod n) - (b mod n)} mod n
3. (a * b) mod n = {(a mod n) * (b mod n)} mod n

*/