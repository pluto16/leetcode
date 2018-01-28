

class solution{

    public:
        int climbStairs(int n) {
            if(n==0)
                return 0;
            if(n==1)
                return 1;
            if(n==2)
                return 2;
            int last = 2, beforeLast = 1;
            for (int i=3; i<=n; i++) {
                int newOne = last + beforeLast;
                beforeLast = last;
                last = newOne;
            }
    
            return last;
    
        };

};
