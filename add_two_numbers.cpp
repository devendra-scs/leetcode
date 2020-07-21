//2. Add Two Numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode * resultHead = new ListNode(0);
        ListNode * currHead=resultHead;
        int carry=0,sum=0;
            
           while(l1 || l2){                            
            if(l1){
                sum = l1->val;
                l1=l1->next;
            }
            if(l2){
                 sum+=l2->val;
                 l2=l2->next;
             }            
              sum+=carry;
              if(sum>9){
                  carry=sum/10;
                  sum=sum%10;
              }else{
                  carry=0;
              }
               
            currHead->next=new ListNode(sum);
            currHead=currHead->next;
            sum=0;
        }        
        
        if(carry!=0){
            currHead->next=new ListNode(carry);
        }
            
        return resultHead->next;
    }
    
};
