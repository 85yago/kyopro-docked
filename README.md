# 85's kyopro environment

85が書いた競プロ環境です。

## 使い方

    git clone https://github.com/85yago/kyopro-docked.git

gitはなくてもいいですが（zipで落として展開すれば良い）、dockerはOSの合わせたものを導入してください。

dockerをvscodeから使うための適切な拡張機能を入れてください。`Remote Development`を落とせば良いです。

その後vscodeでファイルを開いてから、出てきたポップアップか`F1`→`Remote-Containers`からファイルをコンテナで開かせれば良いです。

## 編集すべき場所
- `.devcontainer/devcontainer.json`

`"settings"`でvscodeの`settings.json`を、`"extensions"`でコンテナににインストールする拡張機能をそれぞれ編集できます。

C++のformatterの設定は85が好きな設定にしているので、適宜変更してください。

- `Dockerfile`

よしなにしてください。

## 参考資料

- [Developing inside a Container using Visual Studio Code Remote Development](https://code.visualstudio.com/docs/remote/containers)
- [Dockerfileを改善するためのBest Practice 2019年版](https://www.slideshare.net/zembutsu/dockerfile-bestpractices-19-and-advice)
- [軽量Dockerイメージに安易にAlpineを使うのはやめたほうがいいという話 - inductor's blog](https://blog.inductor.me/entry/alpine-not-recommended)
- [コンテナイメージを軽くする方法と、その原理原則を考える](https://blog.mosuke.tech/entry/2020/07/09/container-image-size/)