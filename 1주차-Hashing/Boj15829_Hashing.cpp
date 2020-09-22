#include <iostream>		//c++ 표준입출력 함수 사용
#include <string>

//cin = console input (>>(오른쪽 꺽쇠)는 Shift를 누른 채로 .(점)을 누르면 됩니다.)
//cout = console output (<< (왼쪽 꺽쇠)는 Shift를 누른 채로, (쉼표)를 누르면 됩니다.)

#define M 1234567891
#define r 31

using namespace std;
using ll = long long;

ll pow(int num, int count);

int main() {
	int length;
	cin >> length;

	string input;
	cin >> input;

	ll hash = 0;
	
	// 문자열 수열의 값 sum 후 mod 연산
	for (int i = 0; i < length; i++) {
		hash = (hash + pow(input[i]-'a' + 1, i)) % M;
	}

	cout << hash;
}

//문자열의 각 항마다 부여되는 계수의 지수 연산
ll pow(int num, int count) {
	ll res = num;
	for (int i = 0; i < count; i++) {
		res = (res * r) % M;
	}

	return res;
}

/*
제산 함수 기본형

int hash_function(int key) {
	int hash_index = key % M;
	if (hash_index < 0) {
		hash_index += M;
	}
	return hash_index;
}
*/

/*
모듈러 연산 기본 속성
1. (a + b) mod n = {(a mod n) + (b mod n)} mod n
2. (a - b) mod n = {(a mod n) - (b mod n)} mod n
3. (a * b) mod n = {(a mod n) * (b mod n)} mod n

*/
