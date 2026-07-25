class StockSpanner {
private:
    int span;
    stack<pair<int, int>> st;
public:
    StockSpanner() {
        span = 1;
        st;
    }
    
    int next(int price) {
        span = 1;
        while(!st.empty() && st.top().first <= price){
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */