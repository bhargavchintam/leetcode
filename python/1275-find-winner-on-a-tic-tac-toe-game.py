from typing import List


class Solution:
    def tictactoe(self, moves: List[List[int]]) -> str:
        board = [[0] * 3 for _ in range(3)]
        player = 1
        for r, c in moves:
            board[r][c] = player
            if abs(sum(board[r])) == 3 or abs(sum(board[i][c] for i in range(3))) == 3 or \
                    abs(board[0][0] + board[1][1] + board[2][2]) == 3 or \
                    abs(board[0][2] + board[1][1] + board[2][0]) == 3:
                return "A" if player == 1 else "B"
            player = -player
        return "Draw" if len(moves) == 9 else "Pending"


if __name__ == "__main__":
    print(Solution().tictactoe([[0, 0], [2, 0], [1, 1], [2, 1], [2, 2]]))
