class Solution {
public:
    ListNode* reverse(ListNode* head, ListNode* tail) {
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
        if(head==NULL)
            return head;
 if(head==tail)
     return head;
       ListNode* h1=reverse(head->next,tail);
        ListNode* nx=head->next;
        nx->next=head;
        head->next=NULL;
        return h1;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        if(head==NULL)
            return head;
       int sz=1;
        ListNode* temp=head;
        while(temp&&sz<k)
        {
            sz++;
            temp=temp->next;
            
            
        }
        
        if(sz<k||temp==NULL)
            return head;
       
        ListNode* nx=reverseKGroup(temp->next,k);
        ListNode* rev=reverse(head,temp);
        head->next=nx;
        return rev;
        
    }
};
