class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        unordered_map<int, vector<pair<int, int>>> graph;
        vector<int> result;
        for(int i=0;i<n-1;i++)
        {
            graph[i].push_back({i + 1, 1});
        }
        auto dijkstra = [&](int n) -> vector<int>
        {
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            vector<int> distances(n, numeric_limits<int>::max());
            distances[0] = 0;
            pq.push({0, 0});
            
            while(!pq.empty())
            {
                int dist = pq.top().first;
                int node = pq.top().second;
                pq.pop();
                
                if (dist > distances[node]) continue;
                
                for(auto& neighbor : graph[node])
                {
                    int nextNode = neighbor.first;
                    int weight = neighbor.second;
                    
                    int newDist = dist + weight;
                    if(newDist < distances[nextNode])
                    {
                        distances[nextNode] = newDist;
                        pq.push({newDist, nextNode});
                    }
                }
            }
            return distances;
        };
        for(auto& query : queries)
        {
            int u = query[0], v = query[1];
            graph[u].push_back({v, 1});

            auto distances = dijkstra(n);
            result.push_back(distances[n - 1]);
        }
        return result;
    }
};