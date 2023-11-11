<h2><a href="https://www.geeksforgeeks.org/problems/tracks0436/1?page=3&category=Arrays&difficulty=Basic&status=unsolved&sortBy=accuracy">Tracks</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Vishesh, who doesn't like maths, has to certify v-shaped tracks. A track is valid if it satisfies the following conditions :</span></p>

<p><span style="font-size:18px"><strong>1.</strong> There must be a constant difference between the height of pillars (not zero) of a track. For eg., if the heights of first two pillars are 7 and 5, then height of 3rd pillar must be 3. As 7-5=2 &amp; 5-3=2.</span></p>

<p><span style="font-size:18px"><strong>2.</strong> The height of middle pillar must be always 1.</span></p>

<p><span style="font-size:18px"><strong>3.</strong> Number of pillars on the left side must be equal to the number of pillars on the right side of&nbsp;middle pillar. And their heights must be also equal. for example: Track with pillar heights [3 2 1 2 3] is a valid track.&nbsp;<br>
Help him in finding the valid tracks.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
A[] = {2, 1, 2}
<strong>Output:</strong>
Yes
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
A[] = {4, 3, 2, 3, 4}
<strong>Output:</strong>
No</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>answer()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns "<strong>Yes</strong>" if it is a valid v-shaped track. Otherwise, return "<strong>No</strong>".</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
3 &lt;= N &lt;= 10<sup>6</sup><br>
1 &lt;= H[i] &lt;= 10<sup>6</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;