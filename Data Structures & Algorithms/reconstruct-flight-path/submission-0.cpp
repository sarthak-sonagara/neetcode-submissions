class Solution {

    void dfs(string s, unordered_map<string,vector<string>> &adj, vector<string> &ans) {
        while(!adj[s].empty()){
            string u = adj[s].back();
            adj[s].pop_back();
            dfs(u,adj,ans);
        }
        ans.push_back(s);
    }

public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        int n = tickets.size();
        unordered_map<string,vector<string>> adj; 
        for(vector<string> &t : tickets){
            adj[t[0]].push_back(t[1]);
        }   
        for(auto &t:adj){
            sort(t.second.begin(),t.second.end());
            reverse(t.second.begin(),t.second.end());
        }
        vector<string> ans;
        dfs("JFK",adj,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
