#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


// file handling
#define in(s) freopen(s, "r", stdin)
#define out(s) freopen(s, "w", stdout)

struct Project{
    string name;
    int days;
    int score;
    int no_of_contributors;
    vector<pair<string, int>> requirement;
};

int main(){
    boost;
    in("A.txt");
    out("Aout.txt");
    ll contributors, projects;
    cin>>contributors>>projects;

    
    //vector<string, vector < map<string, int>  > > members(contributors);
    
    // Inputs Contributors Data
    map< string , vector < pair<string, int> > > members;
    for(int i = 0; i<contributors; i++){
        string name;
        int totalSkills;
        cin>>name>>totalSkills;
        vector<pair<string, int>> skillVector;
        for(int i = 1; i<=totalSkills;i++){
            string skill;
            int skillLevel;
            cin>>skill>>skillLevel;
            skillVector.push_back({skill, skillLevel});
        }
        members[name] = skillVector;
    }

    // Inputs Projects Data;
    vector<Project> projectData;
    for(int i = 1; i < projects ; i++){
        string name;
        int total_days, score, contributors_required;
        cin>>name>>total_days>>score>>contributors_required;
        vector<pair<string, int>> skillRequired;
        for(int i = 1; i<=contributors_required; i++){
            string skill;
            int requiredSkillLevel;
            cin>>skill>>requiredSkillLevel;
            skillRequired.push_back({skill , requiredSkillLevel});
        }
        struct Project obj = {name,total_days,score, contributors_required, skillRequired};
        projectData.push_back(obj);
    }
    return 0;
}