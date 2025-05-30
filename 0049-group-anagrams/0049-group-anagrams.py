class Solution(object):
    def groupAnagrams(self, strs):
        result = defaultdict(list) #mapping charcount to list of anagram
        for s in strs:
            count = [0]*26

            for c in s:
                count[ord(c)-ord('a')] +=1
            result[tuple(count)].append(s)
        return list(result.values())

       