class MyCalendar {
private:
    vector<pair<int, int>> calendar;
public:    
    bool book(int start, int end) {
        for(auto [st, en] : calendar){
            if(start < en && st < end){
                return false;
            }
        }
        calendar.emplace_back(start,end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */