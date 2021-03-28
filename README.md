# 85's kyopro environment

85が書いた競プロ環境です。

## 使い方

    git clone https://github.com/85yago/kyopro-docked.git

あとはvscodeでファイルを開いてcontainerで開かせれば良いです。

## 編集すべき場所
- `./.devcontainer/devcontainer.json`

`settings`でvscodeの`settings.json`を、`extensions`でcontainerにインストールする拡張機能をそれぞれ編集できます。

- `./Dockerfile`

よしなにしてください。

## 参考資料


- [Developing inside a Container using Visual Studio Code Remote Development](https://code.visualstudio.com/docs/remote/containers)
- [Dockerfileを改善するためのBest Practice 2019年版](https://www.slideshare.net/zembutsu/dockerfile-bestpractices-19-and-advice)
- [軽量Dockerイメージに安易にAlpineを使うのはやめたほうがいいという話 - inductor's blog](https://blog.inductor.me/entry/alpine-not-recommended)
- [コンテナイメージを軽くする方法と、その原理原則を考える](https://blog.mosuke.tech/entry/2020/07/09/container-image-size/)