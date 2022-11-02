#include "imports.h"

class meetingRoomsProblem {
    public:

    int minMeetingRooms(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> start(n);
        vector<int> end(n);
        for (int i = 0; i < n; i++) {
            start[i] = intervals[i][0];
            end[i] = intervals[i][1];
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int res = 0, e = 0;
        for (int i = 0; i < n; i++) {
            if (start[i] < end[e]) {
                res++;
            } else {
                e++;
            }
        }
        return res;
    }
  
};