class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();

        priority_queue<int> pq;

        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        
        while(pq.size()>1){
            int it1 = pq.top();
            pq.pop();
            int it2 = pq.top();
            pq.pop();

            if(it1==it2) continue;

            else if(it1<it2) pq.push(it2-it1); 

            else pq.push(it1-it2);
        }

       if(pq.empty()) return 0;

       return pq.top();
    }
};
