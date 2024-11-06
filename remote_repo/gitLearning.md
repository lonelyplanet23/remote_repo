### gitlearning
1. git add 文件名（或者文件夹）
   + 可以将文件提交到暂存区
   + *文件类型 通配符，即添加所有该类型的文件
   + git add .  把当前目录所有文件添加进去
2. git status 查看状态    
3. git commit -m "提交名称"
   1. git commit 无参数，会跳到一个交互式界面 在第一行填写提交信息 输入:wq 保存提交退出。(vscode 中点击对勾)
4. git log 查看提交记录
   1. git log --oneline 查看简洁的提交命令。
5. git config 
   1. --global 全局配置，对所有仓库生效
   2. --system 对所有用户生效
   3. 省略 （local） 只对本地仓库生效
      1. user.name "XXX"
      2. user.email xxxxx@xxx.com
      3. credential.helper store 存储用户名密码，不用多次输入
      4. --list 查看配置信息。
6. 配置SSH协议 密钥
   1. cd 退出仓库后 进入 cd .ssh
   2. 