//自动执行
open_close();
function open_close(){
	var image;
  if(image==undefined)image=new Array("https://pic.gejiba.com/images/ef2455edddfc34c9b3215743c1a05b14.jpg","https://pic.gejiba.com/images/27307ddf8b9883e72745df007881e326.jpg","https://pic.gejiba.com/images/1c1a85f40026e2191bdec3dc9bd264ee.jpg","https://pic.gejiba.com/images/29758566c327c560c1cee998c99df375.jpg","https://pic.gejiba.com/images/f47fdd07d7e79b1f1d39e7d22e2de775.jpg","https://pic.gejiba.com/images/a26cb368ce9e111197271f3739bd4740.jpg","https://pic.gejiba.com/images/82df1731b6b48278b1826b2a20685790.jpg","https://pic.gejiba.com/images/c317da5f92df7fb770d4b4847f1c5abc.jpg","https://pic.gejiba.com/images/adb692a032e689b9958d8666bf9df585.jpg","https://pic.gejiba.com/images/01e0554f62b85b8641fb30d5b8abb790.jpg","https://pic.gejiba.com/images/4d21abf6349641fad24fe8fedd82c810.jpg","https://pic.gejiba.com/images/8171709e2ca864748fed5a8a7fd4d894.jpg","https://pic.gejiba.com/images/32446bf275de91a7775646952a382e8b.jpg","https://pic.gejiba.com/images/39908f90b2b99c7436c8c47a39f2c28b.jpg","https://pic.gejiba.com/images/3a9bf000af2727ef8fa2edff76c6764a.jpg","https://pic.gejiba.com/images/ffc21c17ccee6de590ff93ee4bd039da.jpg","https://pic.gejiba.com/images/86c7cb92166dc6645fcb1d51db51d48b.jpg","https://pic.gejiba.com/images/a28c13cf0cf3cfd6e625448753585a9b.jpg","https://pic.gejiba.com/images/d259a097347c7942eda182f4a4d5cc20.jpg","https://pic.gejiba.com/images/3b02b5d3c8556a8dd7e82f6111f33e56.jpg","https://pic.gejiba.com/images/cbf473563f2eb0843662169d74574c67.jpg","https://pic.gejiba.com/images/19c358fb5184d0f2d6f478acd0ec4a7a.jpg","https://pic.gejiba.com/images/8d0a832c26e328ec8690bd19b8656387.jpg","https://pic.gejiba.com/images/3b453bc5d530c21fdedcef6fd697cb66.jpg","https://pic.gejiba.com/images/dcc535cd2aa422c8e01e732a20a9214e.jpg","https://pic.gejiba.com/images/9bf8183c1238c0e46814801880650212.jpg","https://pic.gejiba.com/images/64febe38bc076602c12028253ba7cc6e.jpg","https://pic.gejiba.com/images/455baf55065595d962e0eb553810ea48.jpg","https://pic.gejiba.com/images/83c7d533aa7c23f431fba51e61e2cd46.jpg","https://pic.gejiba.com/images/d7beb7043716d20e6f482550abf20a1c.jpg","https://pic.gejiba.com/images/f70a5eaa026733db326d780d9f4d8919.jpg","https://pic.gejiba.com/images/cb3a5d454c21e98e96b6ccb70dae7065.jpg","https://pic.gejiba.com/images/6c6bd72b2f23536eaf070029e448cd2b.jpg","https://pic.gejiba.com/images/b269443144fdc9b057856d49cb86ce83.jpg","https://pic.gejiba.com/images/069c653ca3cb82135b9d30761cec4421.jpg","https://pic.gejiba.com/images/0c4198b0ee769def2da218a46526b939.jpg","https://pic.gejiba.com/images/8adb5e3caf8df4d610d231200627289f.jpg","https://pic.gejiba.com/images/60cc5a491a785c2518d13ab400566664.jpg","https://pic.gejiba.com/images/5d4f5a509de49e9bb6b590bf7bc6b058.jpg","https://pic.gejiba.com/images/a609c48bce4717bdda5634c07ccd211c.jpg");
	Randimage(image,image.length-1);
	setInterval(function(){
		Randimage(image,image.length-1);
	},60000);
}
function Randimage(src,n)
{
    var k=Math.floor(Math.random()*10000)%(n+1);
    document.body.style.backgroundImage="url(\"+src[k]+\")";
    document.body.style.backgroundSize="100% 100%";
}
