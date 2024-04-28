 int gameOfXor(int N , int A[]) {
        // code here
         int val = 0;
        if (N & 1) {
            for (int i = 0; i < N; i += 2)
                val ^= A[i];
        }
        return val;
    }
