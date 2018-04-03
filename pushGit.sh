#!/bin/sh

if [[ $# != 1 ]]; then
	echo "Please input tag!"
	exit 1;
fi

cd ..
svnlog=`svn log -l 1 | grep Reviewed-by | cut -d " " -f 1`
gittag=$1

echo $svnlog
echo $gittag

cp -rf BLLetBase/build/Release-iphonelipo/BLLetBase.framework BLLet/BLLet/Classes/BLLetBase/
cp -rf BLLetCore/build/Release-iphonelipo/BLLetCore.framework BLLet/BLLet/Classes/BLLetCore/
cp -rf BLLetPlugins/build/Release-iphonelipo/BLLetPlugins.framework BLLet/BLLet/Classes/BLLetPlugins/
cp -rf BLLetCloud/build/Release-iphonelipo/BLLetCloud.framework BLLet/BLLet/Classes/BLLetCloud/
cd BLLet

git commit -a -m $svnlog
git push 
git tag $gittag
git push origin --tags

pod repo push BLLibSpecs BLLet.podspec --allow-warnings
