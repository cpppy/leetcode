class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<vector<int>> graph(numCourses,vector<int>(0));
        for(vector<pair<int,int>>::iterator it=prerequisites.begin();it!=prerequisites.end();++it){
            graph[it->first].push_back(it->second);
        }
        vector<int> mark(numCourses,0);
        for(int i=0;i<numCourses;++i) {
            if(testLoop(i,mark,graph)) {
                return false;
            }
        }
        return true;
        
    }
    
    
private:
    bool testLoop(int i,vector<int>& mark,vector<vector<int>>& graph) {
        if(mark[i]==1) return true;
        if(mark[i]==-1) return false;
        
        mark[i]=1;
        for(int j=0;j<graph[i].size();++j){
            if(testLoop(graph[i][j],mark,graph)) {
                return true;
            }
        }
        mark[i]=-1;
        return false;
        
    }
};
