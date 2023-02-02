 ListNode* ans=NULL;
        temp=NULL;
        vector<int>v2={6,3,1,8};
        
        for(int i=0;i<v2.size();i++){
            
            if(ans==NULL){
                ListNode* node=new ListNode(v2[i]);
                ans=node;
                temp=node;
            }
            else{
                ListNode* node=new ListNode(v2[i]);
                temp->next=node;
                temp=temp->next;
            }
        }
            