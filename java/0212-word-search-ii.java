import java.util.*;

class Solution {
    static class Node {
        Node[] kids = new Node[26];
        String word;
    }

    char[][] board;
    int rows, cols;
    List<String> res = new ArrayList<>();

    public List<String> findWords(char[][] board, String[] words) {
        this.board = board;
        rows = board.length;
        cols = board[0].length;
        Node root = new Node();
        for (String w : words) {
            Node cur = root;
            for (char c : w.toCharArray()) {
                int idx = c - 'a';
                if (cur.kids[idx] == null) cur.kids[idx] = new Node();
                cur = cur.kids[idx];
            }
            cur.word = w;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                dfs(i, j, root);
            }
        }
        return res;
    }

    private void dfs(int i, int j, Node node) {
        if (i < 0 || i >= rows || j < 0 || j >= cols) return;
        char c = board[i][j];
        if (c == '#' || node.kids[c - 'a'] == null) return;
        Node nxt = node.kids[c - 'a'];
        if (nxt.word != null) {
            res.add(nxt.word);
            nxt.word = null;
        }
        board[i][j] = '#';
        dfs(i + 1, j, nxt);
        dfs(i - 1, j, nxt);
        dfs(i, j + 1, nxt);
        dfs(i, j - 1, nxt);
        board[i][j] = c;
    }

    public static void main(String[] a) {
        char[][] board = {
            {'o', 'a', 'a', 'n'},
            {'e', 't', 'a', 'e'},
            {'i', 'h', 'k', 'r'},
            {'i', 'f', 'l', 'v'}
        };
        String[] words = {"oath", "pea", "eat", "rain"};
        System.out.println(new Solution().findWords(board, words));
    }
}
