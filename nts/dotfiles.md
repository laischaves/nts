# Dot Files

Dot files are, as the name implies, usually hidden files named with a dot at the beggining: _.vim,  .git_

Dot files are used mostly for setting up the configuration of applications, such as _.gitconfig_,
that carries user credentials and other possible configurations.


## Working with dot files
A way to keep your dot files in a repository, without having to keep a manually updated copy
of them, where you need them to be, is to use _symlink_ (symbolic link):

```bash
ln -s ~/repository/.vim ~/expectedtobe/.vim
```








