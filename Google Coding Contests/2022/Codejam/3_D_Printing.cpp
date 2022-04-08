#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

std::vector<int> minss(std::vector<int> &p1, std::vector<int> &p2, std::vector<int> &p3){
    vector<int> ans;
    int min1  = min( {p1[0], p2[0], p3[0]});
    ans.push_back(min1);
    int min2  = min( {p1[1], p2[1], p3[1]});
    ans.push_back(min2);
    int min3  = min( {p1[2], p2[2], p3[2]});
    ans.push_back(min3);
    int min4  = min( {p1[3], p2[3], p3[3]});
    ans.push_back(min4);

    return ans;

}
bool isValid(std::vector<int> &p1, std::vector<int> &p2, std::vector<int> &p3){
    
    vector<int> mins = minss(p1,p2,p3);
    int sumColor = 0;
    if(accumulate(mins.begin(), mins.end(), sumColor) >= 1000000)
        return true;
    return false;

}

void printResult(std::vector<int> &res){
      cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<" "<<res[3]<<endl;
}

vector<int> makeColor(std::vector<int> &mins,std::vector<int> result){
    
    int sum = 0;

    for(int i = 0; i < 4; i++){
        if(sum + mins[i] <= 1000000){
            sum+=mins[i];
            result[i] = mins[i];
        }
        else if(sum<1000000 && sum + mins[i] > 1000000){
            int remaining_color = 1000000 - sum;
            if(remaining_color < mins[i]){ // Handling case: 10 5 0 6 and target = 16
                sum+=remaining_color;
                result[i] = remaining_color;
                break;
            }
        }
        else{
            break;
        }
    }
    return result;
}
void solve(){
    vector<int> p1(4), p2(4), p3(4), result(4);
    cin>>p1[0]>>p1[1]>>p1[2]>>p1[3];
    cin>>p2[0]>>p2[1]>>p2[2]>>p2[3];
    cin>>p3[0]>>p3[1]>>p3[2]>>p3[3];

    if(isValid(p1, p2, p3)){
        vector<int> minAmountofColors = minss(p1,p2,p3);
        result = makeColor(minAmountofColors, result);
        printResult(result);
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}

int main(){
    boost;
    int c=1;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<c++<<": ";
    solve();
    }
    return 0;
}