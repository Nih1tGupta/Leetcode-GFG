<h2><a href="https://www.geeksforgeeks.org/problems/max-value1205/1?page=3&category=Arrays,Strings&difficulty=Easy&status=unsolved&sortBy=difficulty">Max value</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">In a given array <strong>A[]</strong> find the maximum value of <strong>(A[i] – i) - (A[j] – j)</strong> where <strong>i</strong> is not equal to <strong>j</strong>.&nbsp;<br>
<strong>i</strong> and <strong>j</strong> vary from <strong>0</strong> to <strong>N-1</strong> and <strong>N</strong> is the size of input array <strong>A[]</strong>.&nbsp; The value of <strong>N</strong> is always greater than <strong>1</strong>.</span><br>
<br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>
N = 5
A[] = {9, 15, 4, 12, 13}
<strong>Output</strong>
12</span>
<span style="font-size:18px"><strong>Explanation:</strong>
(a[1]-1) - (a[2]-2) = (15-1)-(4-2) = 12</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>
N = 4
A[] = {3, 1, 2, 4}
<strong>Output</strong>
3
<strong>Explanation:</strong>
(a[1]-1) - (a[2]-2) = (3-1)-(1-2) = 3</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>maxVal()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the maximum value</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i] ≤ 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;