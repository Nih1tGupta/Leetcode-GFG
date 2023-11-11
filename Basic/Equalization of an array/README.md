<h2><a href="https://www.geeksforgeeks.org/problems/equalization-of-an-array1656/1?page=1&category=Arrays&difficulty=Basic&status=unsolved&sortBy=submissions">Equalization of an array</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of <strong>N</strong> integers <strong>arr[ ]</strong>, the task is to count the minimum number of operations to equalize the array <em>i.e.</em>&nbsp;to make all array elements equal.<br>
In one operation,&nbsp;you can choose two elements <strong>arr[i]</strong> and <strong>arr[j]</strong> such that <strong>arr[i] &gt; arr[j] </strong>and change them to <strong>arr[i] = arr[i] - 1</strong> and <strong>arr[j] = arr[j] +&nbsp;1</strong>.<br>
If it is impossible to equalize the array print "-1".</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
arr[] = {1, 3, 2, 0, 4}
<strong>Output:</strong>  3
<strong>Explanation</strong>: We can equalize the array by 
making value of all elements equal to 2. 
To achieve this we need to do minimum 3 
operations:
1. arr[0]++ and arr[1]--
2. arr[3]++ and arr[4]--
3. arr[3]++ and arr[4]--</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
arr[] = {1, 7, 1}
<strong>Output:</strong>  4
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>minOperations</strong>() that takes <strong>array arr[ ]&nbsp;</strong>and<strong> integer N</strong> as input parameters and returns the required answer.<br>
<strong><u>Note</u> -</strong> return&nbsp;-1, if it is not possible to equalize the array.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;