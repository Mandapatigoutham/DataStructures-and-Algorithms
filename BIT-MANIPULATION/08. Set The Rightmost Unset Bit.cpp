int setBits(int N){
    // Write your code here.
    if(N&(N+1))
    return N|(N+1);
    else
    return N;
}
