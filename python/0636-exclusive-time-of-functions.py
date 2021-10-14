from typing import List


class Solution:
    def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        res = [0] * n
        st = []
        prev = 0
        for log in logs:
            fid, typ, ts = log.split(":")
            fid = int(fid)
            ts = int(ts)
            if typ == "start":
                if st:
                    res[st[-1]] += ts - prev
                st.append(fid)
                prev = ts
            else:
                res[st.pop()] += ts - prev + 1
                prev = ts + 1
        return res


if __name__ == "__main__":
    logs = ["0:start:0", "1:start:2", "1:end:5", "0:end:6"]
    print(Solution().exclusiveTime(2, logs))
