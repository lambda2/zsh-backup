#!/bin/zsh

cd $1
git checkout master
git merge tests master
rm .*.swp
rm -rf Tests/ test.sh *.notes
tag=`git tag | tail -1 | cut -c 3-`
nexttab=`echo "$tag + 1" | bc`
echo "Master repo is cleaned..."
echo "Ready to publish version $nexttag !"
git add .
git add -u
git commit -m "v$nexttag of project $1 ($2).\nPlease see all commits in [tests] or [devel](if exists) branche(s) for further informations."
git tag 0.$nexttag $2
git push origin master
git checkout tests
echo "Pushed to server. Ciao bello !"
