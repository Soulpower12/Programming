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
    ListNode* middleNode(ListNode* head) {
       
       ListNode* Fastptr = head;
       ListNode* Slowptr = head;

       if(head!=NULL)
       {
           while(Fastptr!=NULL && Fastptr->next !=NULL)
           {
               Slowptr = Slowptr->next;
               Fastptr = Fastptr->next->next;
               
           }
       }
       return Slowptr;
    }
};