function isAnagram(s: string, t: string): boolean {
	if (s.length != t.length) {
		return false;
	}

	var countS: Object = {}; var countT: Object = {};

	for (var i = 0; i < s.length; i++) {
		countS[s[i]] = 1 + countS[s[i]] ? countS[s[i]] : 0;
		countT[t[i]] = 1 + countT[t[i]] ? countT[t[i]] : 0;
	}
}
