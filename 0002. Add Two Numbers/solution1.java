class Solution {
public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
ListNode ret = new ListNode(0);
ListNode opr = new ListNode(0);
opr = ret;
int sum = 0;

 while(l1 != null || l2 != null || sum != 0){
     if(l1 != null){
         sum = sum + l1.val;
         l1 = l1.next;
     }
     if(l2 != null){
         sum = sum + l2.val;
         l2 = l2.next;
     }
     opr.next = new ListNode(sum%10);
     sum = sum/10;
     opr = opr.next;
 }
 return ret.next;
}
}