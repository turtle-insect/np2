# PC98 HDD 作成手順

## 前提
* [FreeDOS](http://bauxite.sakura.ne.jp/software/dos/freedos.htm)
* [DiskExplorer](https://hp.vector.co.jp/authors/VA013937/editdisk/index.html)

## 設定ファイル
### AUTOEXEC.BAT
```
@echo off
shsucdx /D:CD_001,Q /Q
```
### CONFIG.SYS
```
DOS=HIGH
BUFFERS=6
FILES=20
LASTDRIVE=Z
device=himemx.exe
devicehigh=patacd.sys /D:CD_001
```

## HDD作成
* Neko -> Emulate -> New disk -> Hard disk image
  * ファイル名は任意
  * HDD sizeは20MB
* Neko -> Harddisk -> IDE #0 -> Open
  * 作成したHard disk image
* Neko -> FDD1 -> Open
  * FreeDosのFDDイメージ
* Neko -> Emulate -> Reset

## HDD初期化
* btnpart
  * DA/UAは画面表示されているID
* Neko -> Emulate -> Reset

## HDD初期設定
* 『sys a: c:』
* 『copy 386\himemx.exe c:』
* Neko -> Emulate -> Exit

## HDD自動実行スクリプト配置
* DiskExplorer -> 作成したHard disk image
  * T98Next HDD
* ファイル追加
  * PATACD.SYS
  * SHSUCDX.COM
  * CONFIG.SYS
  * AUTOEXEC.BAT

## ソフト導入
* Neko -> FDD1 -> Eject
* Neko -> Harddisk -> IDE #2 -> Open
  * ソフトのcue
* 『dir』
  * 対象のインストーラーを確認
* インストーラー実行


## 実行ファイル確認
* 『dir』
  * 対象のソフトを確認
* 『cd ****』
  * 対象のソフトの階層へ移動
* 『dir *bat』
  * 実行ファイルを確認

## 自動実行スクリプト更新
* AUTOEXEC.BATを編集
  * 以下を追記
    * 実行ファイル確認で確認した階層への移動
    * 実行ファイル確認で確認した実行ファイルの実行
