class Solution(object):
    def groupAnagrams(self, strs):
        grouped = []
        used = [False] * len(strs)

        def get_count_map(word):
            count = {}
            for c in word:
                count[c] = count.get(c, 0) + 1
            return count

        count_maps = [get_count_map(word) for word in strs]

        for i in range(len(strs)):
            if used[i]:
                continue
            temp_group = [strs[i]]
            used[i] = True
            for j in range(i + 1, len(strs)):
                if not used[j] and count_maps[i] == count_maps[j]:
                    temp_group.append(strs[j])
                    used[j] = True
            grouped.append(temp_group)

        return grouped
