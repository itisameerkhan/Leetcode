class Solution {
    public ListNode sortList(ListNode head) {
        ListNode temp = head;
        ArrayList<Integer> l = new ArrayList<>();
        while(temp != null)
        {
            l.add(temp.val);
            temp = temp.next;
        }
        temp = head;
        Collections.sort(l);
        for(Object o: l)
        {
            temp.val = (int)o;
            temp = temp.next;
        }
        return head;
    }
}
