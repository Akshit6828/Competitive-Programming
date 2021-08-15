#include<iostream>
using namespace std;
#define ll long long 
 
 int main(){
     ios::sync_with_stdio(0); 
     cin.tie(0);


    #ifndef ONLINE_JUDGE
    freopen("a.txt","r",stdin);
    freopen("out1.txt","w",stdout);
    #endif
   int sim,inter,street,cars,points;
    cin>>sim>>inter>>street>>cars>>points;
    //vector<string> s;
    //vector<string> c;
    string s[street];
    string c[cars];
    int num=0;
    for(int i=0;i<street;i++)
    {
        string str;
        getline(cin,str);

        s[i]=str;
    }
    for(int i=0;i<cars;i++)
    {
        string str;
        getline(cin,str);

        c[i]=str;
    }
    for(int i=0;i<cars;i++)
    {
     int count=0;
     string cmp=c[i];
     for(char a:cmp){
         if(a==' ')
         break;
         count++;
     }
     
     string int_str=cmp.substr(0,count+1);
     //cout<<"int _Str"<<int_str<<endl;
        num=max(num,stoi(int_str)-1);
    }
    cout<<num<<"\n";
    for(int i=0;i<street;i++){
        int c=0;
        int i_ind=0;
        int fin_ind=0;
        string ans_str=s[i];
        for(int i=0;i<ans_str.length();i++){
            if(ans_str[i]==' '){
                 c++;
                 i_ind=i;
                 if(c==2){
                     fin_ind=i;
                     break;
                 }
            }
            break;
        }
    string str_ans=ans_str.substr(i_ind,fin_ind+1);
    cout<<str_ans;
    }
    



    
     return 0;
 }