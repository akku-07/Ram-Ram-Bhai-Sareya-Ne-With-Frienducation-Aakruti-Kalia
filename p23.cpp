/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include<bits/stdc++.h>
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mp;
        ListNode *temp=head;

        while(temp){
            if(mp.find(temp)!=mp.end()){
                break;
            }
            mp[temp]=1;
            temp=temp->next;
            
        }

        return temp;

    }
};