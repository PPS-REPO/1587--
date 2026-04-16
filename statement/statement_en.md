# Problem
In Geometry Dash, an NLW (Non-Listworthy) level is a level that has never ranked in the top $m$ since its release.
For example, if $m=3$ and the map difficulty levels (in order of release) are 100, 200, 300, 89, 350, 120, 400, and 299, then the NLW levels are those with difficulty levels 89, 120, and 299.
To explain in detail:
1. A level with difficulty 100 is released. The current level list is [100] (in order of difficulty).
2. Levels with difficulties 200 and 300 are released. The level list is [300, 200, 100]. Since these three levels have each placed in the top 3 at least once, they are not NLW levels.
3. A level with a difficulty of 89 is released. The level list is [300, 200, 100, 89].
...
4. A level with a difficulty of 299 is released. The map list is [400, 350, 300, 299, 200, 120, 100, 89].
By the time the map list is complete, the levels that have never ranked in the top 3 (NLW levels) are those with difficulty levels 89, 120, and 299. Therefore, you should output 3.
# Input
The first line contains $n$ and $m$. The second line contains the difficulty levels of $n$ Geometry Dash levels in the order they were released. The difficulty of each level is a natural number less than or equal to $10^9$. No two levels have the same difficulty.
* $1 \le m \le n$
* $1 \le n \le 300000$
# Output
Output the number of NLW levels on the first line.