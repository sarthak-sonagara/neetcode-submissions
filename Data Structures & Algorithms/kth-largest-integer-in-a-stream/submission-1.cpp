class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
    int kt;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int i : nums)
            pq.push(i);
        while(pq.size()>k)
            pq.pop();
        kt = k;
    }
    
    int add(int val) {
        if(pq.size()) {
            int t = pq.top();
            if(val < t)
                return t;
        }
        pq.push(val);
        if(pq.size()>kt)
            pq.pop();
        return pq.top();
    }
};
