#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        ListNode* f = NULL;
        ListNode* l = NULL;
        while(temp){
            temp = temp->next;
            count++;
        }
        temp = head;
        for(int i=1;i<k;++i){
            temp = temp->next;
        }
        f = temp;
        temp = head;
        for(int i=1;i<count-k+1;++i){
            temp = temp->next;
        }
        
        l = temp;
        
        
        swap(f->val,l->val);
        
        return head;
        
    }
};