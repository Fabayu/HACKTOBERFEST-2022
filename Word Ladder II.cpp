class Solution {
    public List<List<String>> ans;
    public List<List<String>> findLadders(String beginWord, String endWord, List<String> wordList) {
        ans=new ArrayList<>();
        
        Map<String, List<String>> graph = new HashMap<>();
        for(String s: wordList) {
            graph.put(s, new ArrayList<>());
        }
        //if beginword is not in graph then add it
        if(!graph.containsKey(beginWord)) {
            wordList.add(beginWord);
            graph.put(beginWord, new ArrayList<>());
        }
        
        for(String s: wordList) {
            for(int i=0;i<s.length();i++) {
                for(char ch='a';ch<='z';ch++) {
                    String checkWord=s.substring(0, i)+ch+s.substring(i+1);
                    if(graph.containsKey(checkWord) && !s.equals(checkWord)) {
                        List<String> l=graph.get(s);
                        l.add(checkWord);
                        graph.put(s, l);
                    }
                }
            }
        }
        
        Set<String> visited=new HashSet<>(wordList.size());
        Map<String, Integer> distFromStarting = new HashMap<>(); //distance from begin node
        //will use it to calculate dfs in reverse order from endWord to beginWord
        
        
        int shortestLength = bfs(beginWord, endWord, graph, visited, distFromStarting); //for shortest path using bfs
        if(shortestLength==0) return ans;
        
        reverseDFS(endWord, beginWord, new ArrayList<>(), graph, distFromStarting);
        return ans;
    }
    
    //from source to destination bfs
    public int bfs(String src, String des, Map<String, List<String>> graph, Set<String> visited, Map<String, Integer> distFromStarting) {
        List<List<String>> ans=new ArrayList<>();
        
        Queue<String> queue=new LinkedList<>();
        queue.add(src);
        visited.add(src);
        int level=0;
        distFromStarting.put(src, 0);
        
        while(!queue.isEmpty()) {
            int size=queue.size();
                
            for(int i=0;i<size;i++) {
                String cur=queue.remove();
                if(cur.equals(des)) {
                    return level;
                }
                for(String n: graph.get(cur)) {
                    if(!visited.contains(n)) {
                        visited.add(n);
                        queue.add(n);
                        distFromStarting.put(n, distFromStarting.get(cur)+1);
                    }
                }
            }
            
            level++;
        }
        return 0;
    }
    
    public void reverseDFS(String src, String des, List<String> path, Map<String, List<String>> graph, Map<String , Integer> distFromStarting) {
        if(src.equals(des)) {
            path.add(des);
            List<String> list=new ArrayList<>(path);
            Collections.reverse(list);
            
            ans.add(list);
            path.remove(path.size()-1);
            return;
        }
        
        path.add(src);
        
            
        for(String next: graph.get(src)) {
            if(distFromStarting.containsKey(next) && distFromStarting.get(next)+1==distFromStarting.get(src)) {
                reverseDFS(next, des, path, graph, distFromStarting);
            }
        }
        
        path.remove(path.size()-1);
    }
}
