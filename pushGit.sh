#!/bin/sh

if [[ $# != 1 ]]; then
	echo "Please input tag!"
	exit 1;
fi

#svnlog=`svn log -l 1 | grep Reviewed-by | cut -d " " -f 1`
#echo $svnlog

#git add BLLet/Classes/
#git commit -a -m $svnlog
#git push 

gittag=$1
echo $gittag

git tag $gittag
git push origin --tags

pod repo push ibroadlink BLLet.podspec --allow-warnings --verbose
