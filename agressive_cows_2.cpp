#include<iostream>
#include<algorithm>

using namespace std;

int F(int x){

    int cowsplaced=1,lastpos = pos[0];
    
    for(int i ; i < n ; i++){
        if(pos[i]-lastpos>=x){

        if(++cowsplaced==c) {return 1; }
        
        lastpos=pos[i];
        }
    return 0;
    }
}





int main(){
    int n,c,i;
    cin>>n>>c;
    int pos[n];
    for(i=0;i<n;i++){
        cin>>pos[i];
    }
    sort(pos[0],pos[0]+n);
    int start=0,end=pos[N-1]-pos[0]+1,mid;
    while(end-start>1)
    {
    mid=(end+start)>>1;
    (F(mid)?start:end)=mid;
}
return start;


}