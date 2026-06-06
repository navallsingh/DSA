class Solution {
public:
    int mySqrt(int x) {
    if(x==0 || x==1) return x;

int ans = 0;
for(long long i=0;i<x;i++){
if(i*i<=x){
ans = i;
}else{
break;
}
}
return ans;
    }
};