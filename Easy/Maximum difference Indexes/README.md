<h2><a href="https://www.geeksforgeeks.org/problems/maximum-difference-10429/1?page=1&category=Map&difficulty=Easy&status=unsolved&sortBy=submissions">Maximum difference Indexes</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>A[]</strong>of size <strong>N</strong>. Let us call difference between indices of an element's first and last appearance in the array <strong>A[] </strong>a <strong>gap</strong>. Find the maximum possible gap.&nbsp; Note that if any element appears only once, then the gap for that element is 0.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 9
A[] = {2, 1, 3, 4, 2, 1, 5, 1, 7}
<strong>Output:</strong>
6
<strong>Explanation:</strong>
For the above test case (Assuming 0-based indexing): <br>Number 1's first appearance is at index 1 and last appearance is at index 7. This implies gap is 7-1=6
This is the maximum possible in the given test case.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>leftIndex()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N </strong>as inputs and <strong>returns</strong> the Maximum Difference.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N. Log(N))<br><strong>Expected Auxiliary Space:</strong> O(N)</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=N&lt;=10<sup>5</sup><br>-10<sup>5</sup>&lt;=A<sub>i</sub>&lt;=10<sup>5</sup></span></p>
<p>&nbsp;</p>
<p>&nbsp;</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Map</code>&nbsp;<code>Data Structures</code>&nbsp;