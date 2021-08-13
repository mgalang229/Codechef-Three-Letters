#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int counter[26] = {0};
		// count the frequency of each letter in the string
		int n = sizeof(counter) / sizeof(counter[0]);
		for (int i = 0; i < (int) s.length(); i++) {
			counter[s[i] - 'a']++;
		}
		// count the number of pairs that can form a three-letter
		// palindrome (frequency of a letter divided by 2)
		int p = 0;
		for (int i = 0; i < n; i++) {
			p += (counter[i] / 2);
		}
		// find the minimum value between the counted pairs and the 
		// maximum possible palindromic string that can be created
		cout << min(p, (int) s.length() / 3) << '\n';
	}
	return 0;
}
