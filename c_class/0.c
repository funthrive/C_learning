/*任务描述
任务描述
本关任务：编写一个代码程序解决子串删除问题。

相关知识
给定两个字符串s和t，若s是t的子串，将t中的子串s删除，若存在多个子串，则全部删除；若s不是t的子串，对字符串t不做处理。字符串s和t长度不超过1000。

输入描述
第一行，字符串t，文本长度≤1000。

第二行，字符串s，文本长度≤1000。

输出描述
处理后的字符串t

编程要求
根据提示，在右侧编辑器补充代码，编写一个代码程序解决子串删除问题。

测试用例
平台会对你编写的代码进行测试：

测试输入：
Hello World!
Hello
预期输出：World!

测试输入：
No pain, no gain
ain
预期输出：No p, no g
*/
#include <stdio.h>
#include <string.h>

void removeSubstring(char *t, const char *s) {
    int tLen = strlen(t);
    int sLen = strlen(s);
    int i, j;
    char result[1000] = {0}; // 用于存储处理后的字符串
    int resultIndex = 0;

    for (i = 0; i < tLen; i++) {
        // 检查当前子串是否与 s 匹配
        int match = 1;
        for (j = 0; j < sLen; j++) {
            if (i + j >= tLen || t[i + j] != s[j]) {
                match = 0;
                break;
            }
        }

        // 如果匹配，跳过子串长度
        if (match) {
            i += sLen - 1; // 跳过匹配的子串
        } else {
            result[resultIndex++] = t[i]; // 否则将字符加入结果
        }
    }

    result[resultIndex] = '\0'; // 确保字符串以空字符结尾
    strcpy(t, result); // 将结果复制回 t
}

int main() {
    char t[1000] = {0}, s[1000] = {0};

    // 读取输入字符串
    fgets(t, sizeof(t), stdin);
    fgets(s, sizeof(s), stdin);

    // 去掉 fgets 读取的换行符
    t[strcspn(t, "\n")] = '\0';
    s[strcspn(s, "\n")] = '\0';

    removeSubstring(t, s);

    // 输出处理后的字符串
    printf("%s", t);

    return 0;
}