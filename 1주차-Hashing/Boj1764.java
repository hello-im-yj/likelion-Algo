package Hashing;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;

public class Boj1764 {
	
	public static void main (String args[]) {
		
		Scanner sc = new Scanner(System.in);
		
		//듣도 못한 사람의 수 N, 보도 못한 사람의 수 M 입력받기.
		int N = sc.nextInt();
		int M = sc.nextInt();
		
		//HashSet에 듣도 못한 사람 저장.
		HashSet<String> unheard = new HashSet<>();
		
		while (N-- >0) {
			String name = sc.next();
			unheard.add(name);
		}
		
		//ArrayList 만들어서 듣도 보도 못한 사람일때만 저장.
		ArrayList<String> res = new ArrayList<>();
		
		while (M-- >0) {
			String name = sc.next();
			if (unheard.contains(name)) {
				res.add(name);
			}
		}
		
		//사전식으로 정렬.
		Collections.sort(res);
		
		//듣보잡의 수와 그 명단을 사전순으로 출력한다.
		int size = res.size();
		System.out.println(size);
		
		Iterator<String> iter = res.iterator();
		while (iter.hasNext()) {
			System.out.println(iter.next());
		}
		
	}
}
