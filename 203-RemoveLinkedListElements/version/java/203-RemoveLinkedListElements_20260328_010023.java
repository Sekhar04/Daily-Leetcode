// Last updated: 3/28/2026, 1:00:23 AM
1/**
2 * Definition for singly-linked list.
3 * public class ListNode {
4 *     int val;
5 *     ListNode next;
6 *     ListNode() {}
7 *     ListNode(int val) { this.val = val; }
8 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
9 * }
10 */
11
12class Solution {
13    public ListNode removeElements(ListNode head, int val) {
14        if(head==null) return null;
15        // while(head!=null && head.val == val){
16        //     head=head.next;
17        // }
18        // ListNode temp =head;
19        // while(temp !=null && temp.next!=null){
20        //     if(temp.next.val == val){
21        //         temp.next = temp.next.next;
22        //     }else{
23        //         temp=temp.next;
24        //     }
25        // }
26        // return head;
27
28// Recursive Solution
29
30        head.next = removeElements(head.next,val);
31        if(head.val==val){
32            return head.next;
33        }else
34            return head;
35
36
37    }
38}