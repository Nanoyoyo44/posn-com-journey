#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,size,c,sum;
    cin >> n >> size;
    string str;
    vector<int> nums;
    for(int i=0;i<n;i++){
        c=0;
        cin >> str;
        nums={};
        for(int j=0;j<size;j++){
            nums.push_back(str[j]-'0');
        }
        sort(nums.begin(),nums.end());
        do
        {
            sum=0;
            for(int ii=0;ii<size;ii++){
                sum+=nums[ii]*pow(10,size-ii-1);
            }
            bool ch=1;
            for(int m=2;m<=sqrt(sum);m++){
                if(sum%m==0){
                    ch=0;
                    break;
                }
            }
            if(ch) c++;

        } while (next_permutation(nums.begin(),nums.end()));
        cout << c << '\n';
    }
    return 0;
}