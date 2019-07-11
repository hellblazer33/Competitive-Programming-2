#include<iostream>

using namespace std;

int main(){
    int n,c,res;
    cin>>n>>c;
    int start = 0 ,end = pos[n-1],n;
    while(end - start>1){
        res = pos[i] - lastpos;
        mid = end - start;
        if(mid == res){
            return mid -1;
        }
        else if (mid>res){
            end = mid - 1 ;
        }
        else if (mid<res){
            start = mid + 1;

        }
    }
}