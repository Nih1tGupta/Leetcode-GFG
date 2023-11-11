<h2><a href="https://www.geeksforgeeks.org/problems/countries-at-war2936/1?page=2&category=Arrays&difficulty=Basic&status=unsolved&sortBy=submissions">Countries at war</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">The two countries of <strong>A</strong> and <strong>B</strong> are at war against each other. Both countries have <strong>N</strong> number of soldiers. The power of these soldiers are given by <strong>A[i]...A[N] and B[i]....B[N]</strong>.<br>
These soldiers have a peculiarity. They can only attack their counterpart enemies, like A[i] can attack only B[i] and not anyone else. A soldier with higher power can kill the enemy soldier. If both soldiers have the same power, they both die. You need to find&nbsp;the winner country.</span></p>

<p><span style="font-size:20px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:20px"><strong>â€‹</strong><strong>Input :</strong> a[ ] = {2, 2}, b[ ] = {5, 5}
<strong>Output :</strong> B
<strong>Explanation:
</strong>Both countries have 2 soldiers.
B[0] kills A[0], B[1] kills A[1]. 
A has 0 soldiers alive at the end. 
B has both soldiers alive at the end.
Return "B" as a winner.
</span></pre>

<p><br>
<span style="font-size:20px"><strong>â€‹Example 2:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input :</strong> a[ ] = {9}, b[ ] = {8}  <strong>
Output :</strong>  A


</span></pre>

<p><span style="font-size:20px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>Country_at_war()</strong> that takes an array <strong>(a)</strong>, another array <strong>(b),</strong>&nbsp;sizeOfArray <strong>(n)</strong>, and return the string "A" if A is the winner, "B" if B is the winner and "DRAW" if it draws. The driver code takes care of the printing.</span></p>

<p><span style="font-size:20px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><span style="font-size:20px"><strong>Constraints:</strong></span></span><br>
<span style="font-size:20px">1 </span><span style="font-size:18px">≤</span><span style="font-size:20px"> N </span><span style="font-size:18px">≤</span><span style="font-size:20px"> 10<sup>5</sup><br>
0 </span><span style="font-size:18px">≤</span><span style="font-size:20px"> A<sub>i</sub> </span><span style="font-size:18px">≤</span><span style="font-size:20px"> 10<sup>7</sup></span><br>
<span style="font-size:20px">0 </span><span style="font-size:18px">≤</span><span style="font-size:20px"> B<sub>i</sub>&nbsp;</span><span style="font-size:18px">≤</span><span style="font-size:20px"> 10<sup>7</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;