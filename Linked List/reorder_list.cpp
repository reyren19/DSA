#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    void reorderList(ListNode* head) {
        // recursive approach
        if(!head || !head->next || !head->next->next) return; //if list is 0,1 or 2 elements 
        ListNode* secondLast = head;
        while(secondLast->next->next){
            secondLast=secondLast->next; //bring it to the seocnd Last node
        }
        secondLast->next->next = head->next; //pointing the last's next to head's next
        head->next = secondLast->next; //pointing head's next to the last
        secondLast->next = NULL; //making second last node last node 
        reorderList(head->next->next); //calling again

        //two pointer 
    }
};c