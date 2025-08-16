#include<bits/stdc++.h>
using namespace std;

void src_dest(int src, int dest) {
    cout<<"Point is"<<src <<" and destination is "<<dest<<endl;
    if(dest <= src){ 
    cout<<"PAHUNCH GYA";
    return;}
    src++;
    src_dest(src,dest); 
} 
int main(){
    src_dest(0,5);
    return 0;
}