<h2><a href="https://www.geeksforgeeks.org/problems/kings-war2448/1?page=2&category=Arrays&difficulty=Basic&status=unsolved&sortBy=submissions">King's War</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">King is getting ready for a war. He know his strengths and weeknesses so he is taking required number of soldiers with him. King can only defeat enemies with strongest and weakest power, and one soldier can only kill one enemy. Your task is to calculate that how many soldiers are required by king to take with him for the war.<br>
<strong>Note: </strong>The array may contain duplicates.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
A[] = {1, 5}
<strong>Output:</strong>
0
<strong>Explanatation:
</strong>The king will itself be able to defeat all the enemies.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
A[] = {1, 2, 5}
<strong>Output:</strong>
1</span>
<span style="font-size:18px"><strong>Explanatation:</strong></span><span style="font-size:18px"><strong>
</strong>The king will defeat enemies with power
1 and 5, and he will need 1 soldier to
defeat the enemy with power 2.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>SoldierRequired()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong> as inputs and returns the number of soldiers, king will need to take with him for the war.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NLogN)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6 </sup><br>
1 ≤ Ai ≤ 10<sup>6</sup><br>
<sup>Array may contain duplicates</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;