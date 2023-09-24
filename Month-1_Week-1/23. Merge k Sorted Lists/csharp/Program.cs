var s = new Solution();
var a = ListNode.InitializeLists();
var res = s.MergeKLists(a);

Console.WriteLine($"result: {res}");

public class Solution
{
    public ListNode MergeKLists(ListNode[] lists)
    {
        ListNode result = null;
        ListNode root = null;

        while(true)
        {
            int? min = null;

            for (int i = 0; i < lists.Length; i++)
            {
                if (lists[i] == null)
                    continue;

                if (min == null || lists[i].val < lists[min.Value].val)
                {
                    min = i;
                }
            }

            if (min == null)
                return root;

            if (result == null)
            {
                result = new ListNode(lists[min.Value].val);
                root = result;
            }
            else
            {
                result.next = new ListNode(lists[min.Value].val);
                result = result.next;
            }

            lists[min.Value] = lists[min.Value].next;
        }
    }
}

public class ListNode
{
    public int val;
    public ListNode next;

    public ListNode(int val = 0, ListNode next = null)
    {
        this.val = val;
        this.next = next;
    }

    public static ListNode[] InitializeLists()
    {
        var list1 = new ListNode(1);
        list1.next = new ListNode(4);
        list1.next.next = new ListNode(5);

        var list2 = new ListNode(1);
        list2.next = new ListNode(3);
        list2.next.next = new ListNode(4);

        var list3 = new ListNode(2);
        list3.next = new ListNode(6);

        var lists = new ListNode[] { list1, list2, list3 };

        return lists;
    }
}