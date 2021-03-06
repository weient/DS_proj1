## 資料結構 project1
### 俄羅斯方塊

此project可以模擬俄羅斯方塊遊戲的最終情況，有以下幾個變因：
* game matrix共有幾個row、幾個column
* 一序列的各種不同方塊，以及落在哪裡（row, col）

一共有19種不同方塊，如下圖所示：
![image](https://github.com/weient/DS_proj1/blob/c4a859b8415152c227b70bbaabcb9cf1d52018e1/image.png)

給予一測資，第一行輸入總row及column數；接下來幾行依序為要落下的blocks種類及其落下的位子，以END結尾。
```
4 2
I1 1 0
L3 1 0
End
```
程式會生成最終全部消完的結果：
```
0 0
0 0
1 0
1 0
```
其中0代表該位子沒有方塊，1代表該位子有方塊。
