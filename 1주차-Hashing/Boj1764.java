package Hashing;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;

public class Boj1764 {
	
	public static void main (String args[]) {
		
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int M = sc.nextInt();
		
		HashSet<String> unheard = new HashSet<>();
		
		while (N-- >0) {
			String name = sc.next();
			unheard.add(name);
		}
		
		ArrayList<String> res = new ArrayList<>();
		
		while (M-- >0) {
			String name = sc.next();
			if (unheard.contains(name)) {
				res.add(name);
			}
		}
		
		Collections.sort(res);
		int size = res.size();
		System.out.println(size);
		
		Iterator<String> iter = res.iterator();
		while (iter.hasNext()) {
			System.out.println(iter.next());
		}
		
	}
}
