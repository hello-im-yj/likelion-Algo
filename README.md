# likelion-ewha Algorithm 스터디

* 알고리즘 스터디 규칙 🦁
  * 매주 화요일 오후 6시반에 !
  * 사용하는 언어는 자유 (c, c++, java 등)
  
  * 목표 : 알고리즘 개념 공부 + 실전 문제 
  @ 부담 보다는 꾸준히 하기! @
  
* 스터디 내용)

  * 프로그래머스 커리큘럼을 기반으로 한 주에 1가지 주제를 공부 (총 16개)
  > https://programmers.co.kr/learn/challenges
  ![image](https://user-images.githubusercontent.com/63237947/93855075-d6d7b480-fcf1-11ea-9a3f-a781bfe74f3c.png)
  * 스터디 시간에 각자 공부한 것을 화면 공유로 발표
  * 수합하고 정리하여 우리 팀 만의 개념 노트 만들기 
  > (구글 드라이브) https://drive.google.com/drive/u/1/folders/1qV5yPNrNbuLotkcj3uVWqJNOdYZYTDtY
  
* 과제)
  * 그 주의 주제를 미리 개인이 본인의 방식대로 블로그/깃 등을 정리하기 (과제)
  * 개념 다음주 까지 난이도 중 정도의 백준 실전 문제 풀이 최소 2개 (과제) (문제는 그날 스터디 끝나기 전에 다같이 지정)

* 문제풀이 피드백)
  * 문제를 푼 뒤에 본인의 깃에 올림 (단, 이때 모두가 알아볼 수 있게 주요 로직에 대해서는 글로 설명 필요)
  * 나머지 팀원들이 git pull request로 코드 리뷰 (궁금한 점, 칭찬, 등등)

* 방학 중으로 이어질 수 있음 시험 기간에도 가장 메인 주간(모두가 느끼는 그 2주..) 이외에는 진행하는게 어떨까...

<hr/>

## 1주차 해싱

> 9월 15일 과제문제 
백준 https://www.acmicpc.net/problem/tag/8

- 1764 듣보잡 (java 구현) 
 - JAVA hashset 메소드
 > https://docs.oracle.com/javase/7/docs/api/java/util/HashSet.html
 
- 15829 Hashing (C++ 구현)
 - 더 간단한 코드 
 	```
	#include <iostream> 
	#include <string> 
	using namespace std; 
	const int MOD = 1234567891; 
	const int MULTIPLY = 31; 

	int main(void) { 
		int L; cin >> L; 
		string s; cin >> s; 

		long long sum = 0; 
		long long R = 1; 

		for (int i = 0; i < s.length(); i++) { 
			sum = (sum + (s[i] - 'a' + 1) * R) % MOD; 
			R = (R*MULTIPLY) % MOD; 
		} 

		cout << sum << "\n";

		return 0; 
	}

	출처: https://jaimemin.tistory.com/1445 [꾸준함]
	```

2주차 정렬
