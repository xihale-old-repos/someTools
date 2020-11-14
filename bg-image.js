//自动执行
open_close();
function open_close(){
	var image;
  if(!image)image=new Array("https://pic.gejiba.com/images/3b453bc5d530c21fdedcef6fd697cb66.jpg","https://pic.gejiba.com/images/dcc535cd2aa422c8e01e732a20a9214e.jpg","https://pic.gejiba.com/images/9bf8183c1238c0e46814801880650212.jpg","https://pic.gejiba.com/images/64febe38bc076602c12028253ba7cc6e.jpg","https://pic.gejiba.com/images/455baf55065595d962e0eb553810ea48.jpg","https://pic.gejiba.com/images/83c7d533aa7c23f431fba51e61e2cd46.jpg","https://pic.gejiba.com/images/d7beb7043716d20e6f482550abf20a1c.jpg","https://pic.gejiba.com/images/f70a5eaa026733db326d780d9f4d8919.jpg","https://pic.gejiba.com/images/cb3a5d454c21e98e96b6ccb70dae7065.jpg","https://pic.gejiba.com/images/6c6bd72b2f23536eaf070029e448cd2b.jpg","https://pic.gejiba.com/images/b269443144fdc9b057856d49cb86ce83.jpg","https://pic.gejiba.com/images/069c653ca3cb82135b9d30761cec4421.jpg","https://pic.gejiba.com/images/0c4198b0ee769def2da218a46526b939.jpg","https://pic.gejiba.com/images/8adb5e3caf8df4d610d231200627289f.jpg","https://pic.gejiba.com/images/60cc5a491a785c2518d13ab400566664.jpg","https://pic.gejiba.com/images/5d4f5a509de49e9bb6b590bf7bc6b058.jpg","https://pic.gejiba.com/images/a609c48bce4717bdda5634c07ccd211c.jpg","https://pic.gejiba.com/images/5eca90ea1174ea560f3f83383ecb4b59.jpg");
	Randimage(image,image.length-1);
	setInterval(function(){
		Randimage(image,image.length-1);
	},60000);
}
function Randimage(src,n)
{
    var k=Math.floor(Math.random()*10000)%(n+1);
    document.body.style.backgroundImage="url("+src[k]+")";
    document.body.style.backgroundSize="100% 100%";
}
