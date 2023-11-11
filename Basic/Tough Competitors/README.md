<h2><a href="https://www.geeksforgeeks.org/problems/tough-competitors0540/1?page=2&category=Arrays&difficulty=Basic&status=unsolved&sortBy=submissions">Tough Competitors</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are <strong>n</strong> competitors in an exam. Each competitor has his own skill value which is given by the array <strong>arr</strong>&nbsp;where <strong>arr<sub>1</sub></strong>&nbsp;is the skill of the first competitor, <strong>arr<sub>2</sub></strong> is the skill of second competitor and so on. Two competitors are said to be tough competitors&nbsp;if their skill difference is <strong>least</strong> i.e. they are very close in their skill values. Given <strong>n</strong> and an array <strong>arr</strong>&nbsp;as input, find the tough competitors among the <strong>n</strong> competitors and print the absolute of the difference of their&nbsp;skill values.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 4
arr[] = {9,&nbsp;4, 12, 6}
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;As |9-4|=5, |9-12|=3, |9-6|=3,
|4-12|=8, |4-6|=2, |12-6|=6 so, the tough
competitors are competitors having skill
values 4, 6 having their skill difference
as 2.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 5
arr[] = {4, 9, 1, 32, 12}
<strong>Output:</strong> 3
<strong>Explanation:</strong>&nbsp;Tough competitors are
competitors having skill values (4,1)
and (9,12) having their skill difference
as 3.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>toughCompetitor()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr</strong>&nbsp;and&nbsp;<strong>n&nbsp;</strong>as parameters and returns an integer&nbsp;denoting the answer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n*logn)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 &lt;= n &lt;= 10<sup>5</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>6</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;