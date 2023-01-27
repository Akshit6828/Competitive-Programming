Write the most optimal code in C++ for the following problem as mentioned below:

You have a street of length N on the coordinate axis and want to sell as much of it as possible.
You are aware that the sale process is by selling a part of the street that starts at a starting point on the x-axis and ends at the end point on the x-axis between 1 to N.

You receive Q purchase offers where each offer is determined by the buyer's desire with the starting Si, and ending Ei, point. 
A buyer always wants to buy the entire area they desire exclusively and does not agree to buy a part of it.
Assume that you choose a set of these offers so that you can sell the largest possible length of the street. Your task is to find the smallest length of the remaining street.

Note: It is guaranteed that Ei >=Si for all possible i.

Input:
The first line contains an integer, N, denoting the Street length.
The next line contains an integer, Q, denoting the number of offers.
Each line i of the Q subsequent lines (where 0 <= i < Q) contains an integer describing Si.
Each line i of the Q subsequent lines (where 0 <= i < Q) contains an integer describing Ei.

Constraints
1 <= N <= 10^9
1 <= Q <=10^5
1 <= S[i] <= 10^9
1 <= E[i] <= 10^9