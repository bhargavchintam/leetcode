class MyCircularQueue:
    def __init__(self, k: int):
        self.q = [0] * k
        self.cap = k
        self.size = 0
        self.head = 0

    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False
        tail = (self.head + self.size) % self.cap
        self.q[tail] = value
        self.size += 1
        return True

    def deQueue(self) -> bool:
        if self.isEmpty():
            return False
        self.head = (self.head + 1) % self.cap
        self.size -= 1
        return True

    def Front(self) -> int:
        if self.isEmpty():
            return -1
        return self.q[self.head]

    def Rear(self) -> int:
        if self.isEmpty():
            return -1
        tail = (self.head + self.size - 1) % self.cap
        return self.q[tail]

    def isEmpty(self) -> bool:
        return self.size == 0

    def isFull(self) -> bool:
        return self.size == self.cap


if __name__ == "__main__":
    q = MyCircularQueue(3)
    print(q.enQueue(1))
    print(q.enQueue(2))
    print(q.enQueue(3))
    print(q.enQueue(4))
    print(q.Rear())
    print(q.isFull())
    print(q.deQueue())
    print(q.enQueue(4))
    print(q.Rear())
