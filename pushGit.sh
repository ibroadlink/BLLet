#!/bin/sh

if [[ $# != 1 ]]; then
	echo "Please input tag!"
	exit 1;
fi

svnlog=`svn log -l 1 | grep Reviewed-by | cut -d " " -f 1`
gittag=$1

echo $svnlog
echo $gittag


git commit -a -m $svnlog
git push 
git tag $gittag
git push origin --tags

pod repo push BLLibSpecs BLLet.podspec --allow-warnings
