#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    unordered_map<char,int> nums;
    int n;
    cin >> n;
    while (n--)
    {
        string order,detail;
        char x;
        cin >> order;
        if(order=="get"){
            cin >> detail;
            if(detail.size()==1){// get a,get b 
                if(nums.find(detail[0])!=nums.end()&&nums[detail[0]]!=-128){
                    cout << nums[detail[0]];
                }else{
                    cout << "?";
                }
            }else{// get a+b ,geta*b ,...
                if(nums.find(detail[0])!=nums.end()&&nums.find(detail[2])!=nums.end()){

                    if(detail[1]=='+'&&nums[detail[0]]!=-128&&nums[detail[2]]!=-128){
                        cout << nums[detail[0]]+nums[detail[2]];
                    }else if(detail[1]=='-'&&nums[detail[0]]!=-128&&nums[detail[2]]!=-128){
                        cout << nums[detail[0]]-nums[detail[2]];
                    }else if(detail[1]=='*'&&nums[detail[0]]!=-128&&nums[detail[2]]!=-128){
                        cout << nums[detail[0]]*nums[detail[2]];
                    }else if(detail[1]=='<'&&nums[detail[0]]!=-128&&nums[detail[2]]!=-128){
                        string b = nums[detail[0]]<nums[detail[2]] ? "YES":"NO";
                        cout << b;
                    }else if(detail[1]=='>'&&nums[detail[0]]!=-128&&nums[detail[2]]!=-128){
                        string b = nums[detail[0]]>nums[detail[2]] ? "YES":"NO";
                        cout << b;
                    }else if(detail[1]=='='&&nums[detail[0]]!=-128&&nums[detail[2]]!=-128){
                        string b = nums[detail[0]]==nums[detail[2]] ? "YES":"NO";
                        cout << b;
                    }else if(detail[1]==','&&nums[detail[0]]!=-128&&nums[detail[2]]!=-128){
                        cout << nums[detail[0]] << nums[detail[2]];
                    }
                }else{
                    cout << "?";
                }
            }
        cout << "\n";
        }else{
            char de;
            int nms;
            cin >> de >> nms;
            nums[de]=nms;
        }
    }
    
    return 0;
}