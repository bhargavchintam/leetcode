import bisect


class ExamRoom:
    def __init__(self, n: int):
        self.n = n
        self.seats = []

    def seat(self) -> int:
        if not self.seats:
            s = 0
        else:
            best_dist, best_seat = self.seats[0], 0
            for a, b in zip(self.seats, self.seats[1:]):
                d = (b - a) // 2
                if d > best_dist:
                    best_dist, best_seat = d, a + d
            if self.n - 1 - self.seats[-1] > best_dist:
                best_seat = self.n - 1
            s = best_seat
        bisect.insort(self.seats, s)
        return s

    def leave(self, p: int) -> None:
        self.seats.remove(p)


if __name__ == "__main__":
    room = ExamRoom(10)
    print(room.seat())
    print(room.seat())
    print(room.seat())
    print(room.seat())
    room.leave(4)
    print(room.seat())
