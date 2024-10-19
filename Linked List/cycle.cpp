#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
           fast= fast->next->next;
           slow=slow->next;
            if(fast==slow){ //if fast and slow are same at some point they will meet in a cycle 
                return true;
            }
        }
            return false;
    }
};