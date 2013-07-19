source ~/Rendu/Utils/.zsh/git-prompt/zshrc.sh
alias l="ls -la"
alias p="cd .."
alias f="find . -name "
alias gen="touch file_{0..9}"
PROMPT='$(git_super_status) - %B%m%~%b%# '
