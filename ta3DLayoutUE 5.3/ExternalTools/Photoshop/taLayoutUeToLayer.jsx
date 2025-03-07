//20231020更新　PNGのみ対象に

// 現在のドキュメントを取得
var currentDocument = app.activeDocument;

// ドキュメントのファイルパスを取得
var filePath = currentDocument.fullName;

// ファイルパスからフォルダパスを取得
var folderPath = filePath.parent;

var folderName = folderPath.displayName;


// 現在のドキュメントのファイルパスを取得
var currentFilePath = currentDocument.fullName;

// フォルダパスを取得
var folderPath = currentFilePath.parent;

// 上のフォルダへのパスを取得
var parentFolderPath = folderPath.parent;

// テキストファイルのパスを指定
var textFilePath = parentFolderPath + "/data.txt"; // テキストファイルの実際のパスに置き換えてください


activeDocument.close(SaveOptions.DONOTSAVECHANGES);

 //新規ドキュメント
 var newDoc = documents.add(2338, 1654, 200, folderName, NewDocumentMode.RGB, DocumentFill.TRANSPARENT, 1);

 //フォルダ内のPNGファイル取得
 var fileArray = new Array();
 var docs = folderPath.getFiles(function(file) {
  return file instanceof File && file.name.match(/\.(png)$/i);
});
 var len = docs.length;
 for (var i = 0; i < len; i++) {
     var doc = docs[i];
     fileArray.push(doc);
 }

 for (var i = 0; i < fileArray.length; i++) {
     var doc = open(fileArray[i]);
     //モードをRGBに 
     doc.changeMode(ChangeMode.RGB);
     //新しくドキュメントに読み込み
     doc.artLayers.add();
     //レイヤーを統合（透明のレイヤーと統合するので影響なし）
     doc.mergeVisibleLayers();
     //読み込んだファイル名を取得
     var Flname = doc.name;
     var layname = Flname.replace(/\.[^\.]+$/, '');
     var layer = doc.activeLayer;
     //レイヤー名をドキュメント名に
     layer.name = layname;
     //始めに作った新規ドキュメントへ複製コピー
     layer.duplicate(newDoc, ElementPlacement.PLACEATBEGINNING);
     //読み込んだドキュメントを閉じる
     doc.close(SaveOptions.DONOTSAVECHANGES);
 }

 //一番下のレイヤーの削除
 var layObj = activeDocument.artLayers;
 var bgLayer = layObj[layObj.length - 1];
 bgLayer.remove();

 //すべての領域を表示
 activeDocument.revealAll();
 //透明部分のトリミング
 activeDocument.trim(TrimType.TRANSPARENT, true, true, true, true);

 //フレームの挿入

//レイヤー順のアルファベット順整理　reverseを外すと上から順になりますby田村

var layers = activeDocument.layers;
	var layersArray = [];
	var len = layers.length;
	


	// store all layers in an array
	for (var i = 0; i < len; i++) {
		layersArray.push(layers[i]);
	}

	// sort layer top to bottom
	layersArray.sort();
	layersArray.reverse();

	for (i = 0; i < len; i++) {
		layersArray[i].move(layers[i], ElementPlacement.PLACEBEFORE);
	}



//1020追記、別のPSDファイルとして保存

var file_name = folderName + ".psd";
 
var file_fullname = folderPath.fsName + "/" + file_name;
 
var psd_obj = new File(file_fullname);
var psd_opt = new PhotoshopSaveOptions();
psd_opt.alphaChannels = true;
psd_opt.annotations = true;
psd_opt.embedColorProfile = true;
psd_opt.layers = true;
psd_opt.spotColors = false;
activeDocument.saveAs(psd_obj, psd_opt, true, Extension.LOWERCASE);
//いったん閉じる

activeDocument.close(SaveOptions.DONOTSAVECHANGES);

//再度開く
var genfilename = new File(file_fullname);
open(genfilename);
