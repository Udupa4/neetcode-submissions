class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_groups: Dict[str, List[str]] = defaultdict(list)
        result = []

        for s in strs:
            # print("".join(sorted(s)))
            anagram_groups["".join(sorted(s))].append(s)

        for key, value in anagram_groups.items():
            result.append(value)

        return result
