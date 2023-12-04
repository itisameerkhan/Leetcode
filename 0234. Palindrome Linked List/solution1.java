class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode temp = head;
        Stack<Integer> s = new Stack<>();
        while(temp != null)
        {
            s.push(temp.val);
            temp = temp.next;
        }
        temp = head;
        while(temp != null)
        {
            if(temp.val != s.peek()) return false;
            temp = temp.next;
            s.pop();
        }
        return true;
    }
}