class Solution {
public:
    int arr[26][26];

    int minc(int a , int d){
        if(a==d)return 0;
        int z = INT_MAX;
        for(int i = a+1 ; i<26 ; ++i){
            if(arr[a][i]==INT_MAX)continue;
            z = min(arr[a][i],minc(i,d));
        }
        return z;
    }

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        memset(arr,INT_MAX,sizeof(arr));
        int n = original.size();
        for(int i = 0; i<n ; ++i){
            arr[original[i]-'a'][changed[i]-'a'] = cost[i];
        }

        for(int i = 0 ; i<26 ; ++i){
            arr[i][i]=0;
        }

        int ans = 0;
        for(int i = 0 ; i<changed.size() ; ++i){
            int t = minc(original[i]-'a',changed[i]-'a');
            ans += arr[original[i]][changed[i]];
        }
        return ans;

    }
};

