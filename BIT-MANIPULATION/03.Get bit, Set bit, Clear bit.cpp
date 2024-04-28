vector<int> bitManipulation(int num, int i){
    // Write your code here.
    int x=(num&(1<<i-1))?1:0;
    int y=num|(1<<i-1);
    int z=num&~(1<<i-1);
    return {x,y,z};
}
