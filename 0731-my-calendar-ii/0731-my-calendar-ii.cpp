class MyCalendar {
    vector<pair<int, int>> books;
public:
    bool book(int start, int end) {
        for (pair<int, int> p : books)
            if (max(p.first, start) < min(end, p.second)) return false;
        books.push_back({start, end});
        return true;
    }
};
class MyCalendarTwo {
private:
    vector<pair<int, int>> books;
public:    
    bool book(int start, int end) {
        MyCalendar overlaps;
        for(auto [st, en] : books){
            if(max(st,start) < min(en,end)){
                pair<int, int> overlapped = getOverlap(st, en, start, end);
                if (!overlaps.book(overlapped.first, overlapped.second)) return false;
            }
        }
        books.emplace_back(start,end);
        return true;
    }
    pair<int, int> getOverlap(int s0, int e0, int s1, int e1) {
        return { max(s0, s1), min(e0, e1)};
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */