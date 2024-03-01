bool isValidBST(vector<int> &order){
    // Write your code here.
    for(int i=0;i<order.size()-1;i++)
    {
        if(order[i]>=order[i+1])
        return false;
    }
    return true;
}
