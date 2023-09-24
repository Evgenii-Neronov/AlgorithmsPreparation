
#include <iostream>
#include <vector>
#include <optional>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode* result = 0;
        ListNode* root = 0;

        int length = lists.size();

        while (true)
        {
            std::optional<int> min;

            for (int i = 0; i < length; i++)
            {
                if (lists[i] == nullptr)
                    continue;

                if (!min.has_value() 
                    || lists[min.value()] != nullptr 
                    && lists[i]->val < lists[min.value()]->val)
                {
                    min = i;
                }
            }

            if (!min.has_value())
                return root;

            if (result == 0)
            {
                result = new ListNode(lists[min.value()]->val);
                root = result;
            }
            else
            {
                result->next = new ListNode(lists[min.value()]->val);
                result = result->next;
            }

            lists[min.value()] = lists[min.value()]->next;
        }
    }
};

int main()
{
    ListNode* l1 = new ListNode(1, new ListNode(4, new ListNode(5)));
    ListNode* l2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* l3 = new ListNode(2, new ListNode(6));

    vector<ListNode*> lists;
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);

    Solution sol;

    auto res = sol.mergeKLists(lists);

    
    std::cout << "Hello World!\n";
}