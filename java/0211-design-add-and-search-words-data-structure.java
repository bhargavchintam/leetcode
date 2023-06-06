import java.util.*;

class Solution {
    public static void main(String[] a) {
        WordDictionary wd = new WordDictionary();
        wd.addWord("bad");
        wd.addWord("dad");
        wd.addWord("mad");
        System.out.println(wd.search("pad"));
        System.out.println(wd.search("bad"));
        System.out.println(wd.search(".ad"));
        System.out.println(wd.search("b.."));
    }
}

class WordDictionary {
    static class Node {
        Node[] kids = new Node[26];
        boolean end;
    }

    Node root;

    public WordDictionary() {
        root = new Node();
    }

    public void addWord(String word) {
        Node cur = root;
        for (char c : word.toCharArray()) {
            int idx = c - 'a';
            if (cur.kids[idx] == null) cur.kids[idx] = new Node();
            cur = cur.kids[idx];
        }
        cur.end = true;
    }

    public boolean search(String word) {
        return dfs(word, 0, root);
    }

    private boolean dfs(String word, int pos, Node node) {
        if (node == null) return false;
        if (pos == word.length()) return node.end;
        char c = word.charAt(pos);
        if (c == '.') {
            for (Node kid : node.kids) {
                if (dfs(word, pos + 1, kid)) return true;
            }
            return false;
        }
        return dfs(word, pos + 1, node.kids[c - 'a']);
    }
}
