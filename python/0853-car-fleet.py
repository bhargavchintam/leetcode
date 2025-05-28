from typing import List


class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        cars = sorted(zip(position, speed), reverse=True)
        fleets = 0
        cur_time = 0.0
        for pos, spd in cars:
            t = (target - pos) / spd
            if t > cur_time:
                fleets += 1
                cur_time = t
        return fleets


if __name__ == "__main__":
    position = [10, 8, 0, 5, 3]
    speed = [2, 4, 1, 1, 3]
    print(Solution().carFleet(12, position, speed))
