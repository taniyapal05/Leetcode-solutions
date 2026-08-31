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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> result(2, -1);

        if(!head->next->next) return result;

        int pre = head->val;
        head = head->next;
        int count = 2;

        int pri = -1;
        int first = -1;
        result[0] = INT_MAX;

        while(head->next != NULL){
            if((head->val > pre && head->val > head->next->val) || (head->val < pre && head->val < head->next->val)) {
                if(first == -1) {
                    first = count;
                }
                else{
                    result[0] = min(count - pri, result[0]);
                    result[1] = count - first;
                }
                
                pri = count;
            }

            pre = head->val;
            count++;
            head = head->next;
        }
        
        if(result[0] == INT_MAX) result[0] = -1;
        return result;
    }
};