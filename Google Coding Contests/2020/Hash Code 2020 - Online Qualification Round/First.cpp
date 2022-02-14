#include<iostream>
using namespace std;
#define ll long long 
 #define deb(x) cout<<#x<<" = "<<x<<endl
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
    cout<<num;
    for(int i=0;i<street;i++){ ////----------1
        int c=0;
        int i_ind=0;
        int fin_ind=0;

        string ans_str=s[i];
        if(i==4)
        cout<<"ans str"<<ans_str<<endl;
        for(int j=0;j<ans_str.length();j++){//--------------------2
            int flag=1;
            if(ans_str[j]==' '){
                
                 c++; //1
                 if(c==1)
                 i_ind=j;

                 if(c==2){
                     fin_ind=j;
                     flag=0;
                     break;
                 }

            }
            if(flag==0)
            break;
        }//2 End..............

    string str_ans=ans_str.substr(i_ind,fin_ind);
    cout<<str_ans<<endl;
    i_ind=0;
    fin_ind=0;
    c=0;
    }
  
     return 0;
 }