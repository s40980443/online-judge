/*
問題描述 ：

OX 遊戲是大家小時候的童年記憶，甚至在長大後，無聊時還是會玩一下呢 ! 但當你一個人時，是否也能讓電腦跟你玩呢 ?

輸入說明 ：

輸入一個 3*3 的 2 維矩陣，矩陣內容， 0 代表 O ， 1 代表 X 。註：每列數字之間均有空格隔開。

輸出說明 ：

輸出這場 OX 遊戲是否有勝負之分。註：輸出結尾需換行。

*/

#include <iostream>
using namespace std;
int main()
{
    int T[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> T[i][j];
        }
    }
    bool win = false;
    for (int i = 0; i < 3; i++)
    {

        if (T[i][0] == T[i][1] && T[i][1] == T[i][2])
        { 
            win = true;
        }
        if (T[0][i] == T[1][i] && T[1][i] == T[2][i])
        {
                win = true;
        }
    }
    if(T[0][0] == T[1][1] && T[1][1] == T[2][2]){
        win = true;
    }
    if(T[0][2] == T[1][1] && T[1][1] == T[2][0]){
        win = true;
    }



    if (win == true)
    {
        cout << "True" << endl;
    }
    else if (win == false)
    {
        cout << "False" << endl;
    }

    return 0;
}