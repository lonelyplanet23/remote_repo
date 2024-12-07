## 读写文件
1. 打开文件 `FILE *fp = fopen(const char *filename, const char *mode ` 
    + 注意：同目录下可以不用加路径，可以省去同目录的路径如：`/tmp/test.txt`
    + 几种模式
    + `r`	打开一个已有的文本文件，允许读取文件。
    + `w`	打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
    + `r+` 打开一个文本文件，允许读写文件。
    + `a+`	打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。
2. 关闭文件 `fclose(FILE *fp)`
3. 读写文件：同所有的输入输出函数，函数名前+`f`，第一个参数为`FILE * fp`
   1. `char *fgets( char *buf, int n, FILE *fp );`
   2. `int fputs( const char *s, FILE *fp );`
   3. `int fscanf(FILE *fp, const char *format, ...) `