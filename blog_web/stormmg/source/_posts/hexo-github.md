---
title: hexo_github
date: 2016-11-15 15:13:06
tags:
---

steps:

1.local
============
	1.1 download nodejs
		https://nodejs.org/dist/v6.9.1/node-v6.9.1-linux-x64.tar.xz
	1.2 uncompress
		tar -Jxvf
	1.3 sudo cp -ar node... /usr/local/

	1.4 set node and npm PATH
		export NODE="/usr/local/node"
		export PATH="${NODE}/bin:$PATH"

	1.5 npm install hexo --no-optional
		sudo npm install -g hexo-cli

	1.6 mkdir blog_stormmg
	~~~
		cd
		hexo init <folder>
		cd <folder>
		npm install
	~~~

	or !!
	~~~
		mkdir  <folder>
		cd <folder>
		hexo init
		hexo generate (hexo g)
		npm install
		hexo server (hexo s)
	~~~



	browser: http://localhost:4000 //0.0.0.0:4000


	1.7 create new file
		hexo new "new file"
	1.8 generate html js website files
		hexo generate

2.githubpages
============

	2.1 git clone https://github.com/spartacus429496/spartacus429496.github.io
	2.2 cp  public containded files to git repo

	2.3 browser: spartacus429496.github.io

3.deploy
============

	3.1  vim _config.yml
		~~~
		deploy:
		    type: git
		    repository: https://github.com/spartacus429496/spartacus429496.github.io.git
		   branch: master
		~~~
	3.2
		npm install hexo-deployer-git --save
	3.3 new file
		~~~
		hexo new "newfilename" //in ./source/_posts/
		for detailes: markdown
		hexo generate
		hexo deploy (hexo d)
		~~~

	3.4 add theme

		~~~
		view https://hexo.io/themes/
		git clone https://github.com/iissnan/hexo-theme-next themes/next

		vim _config.yml theme
		vim ./themes/next/-config.yml //change attrbutes header etc

		~~~
	3.5 deploy
		hexo clean
		hexo generate
		hexo deploy
