import datetime


class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        d1 = datetime.date(*map(int, date1.split('-')))
        d2 = datetime.date(*map(int, date2.split('-')))
        return abs((d2 - d1).days)


if __name__ == "__main__":
    print(Solution().daysBetweenDates("2019-06-29", "2019-06-30"))
