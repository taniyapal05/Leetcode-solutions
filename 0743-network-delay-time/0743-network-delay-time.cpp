class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> *l;
        l = new vector<pair<int, int>> [n + 1];

        for(auto it: times){
            l[it[0]].push_back({it[1], it[2]});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> time (n + 1, 999);
        
        pq.push({0, k});
        time[k] = 0;

        while(!pq.empty()){
            int curr_time = pq.top().first;
            int curr_node = pq.top().second;
            pq.pop();
            
            for(auto neigh: l[curr_node]){
                int neigh_node = neigh.first;
                int neigh_time = neigh.second;

                if(time[neigh_node] > neigh_time + curr_time){
                    time[neigh_node] = neigh_time + curr_time;
                    pq.push({time[neigh_node], neigh_node});
                }
            }
        }

        int  min_time = 0;
        for(int i = 1; i <= n; i++){
            if(time[i] == 999) return -1;
            min_time = max(min_time, time[i]);
        }

        return min_time;
    }
};
