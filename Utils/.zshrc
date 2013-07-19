source ~/Rendu/Utils/.zsh/git-prompt/zshrc.sh
alias l="ls -la"
alias p="cd .."
alias pt"cd ..; cd "
alias f="find . -name "
alias gen="touch file_{0..9}"
PROMPT='$(git_super_status) - %B%m%~%b%# '

# ------ Git shortcuts

alias gs="git status"
alias gc="git commit -m "
alias gp="git push"
alias ga="git add"
alias gl="git log --graph"

# ------- Gcc shortcuts

alias cm="gcc -Wall -Wextra -Werror -o bin "
