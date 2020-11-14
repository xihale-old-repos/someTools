//自动执行
open_close();
function open_close(){
	var image;
  if(image==undefined)image=new Array("https://pic.gejiba.com/image/Mosl","https://pic.gejiba.com/image/ML6m","https://pic.gejiba.com/image/MXlX","https://pic.gejiba.com/image/MFFT","https://pic.gejiba.com/image/MD9A","https://pic.gejiba.com/image/Mznq","https://pic.gejiba.com/image/M7O5","https://pic.gejiba.com/image/MyPp","https://pic.gejiba.com/image/MsxR","https://pic.gejiba.com/image/Meux","https://pic.gejiba.com/image/Mcsc","https://pic.gejiba.com/image/MW3u","https://pic.gejiba.com/image/MPlV","https://pic.gejiba.com/image/MpFy","https://pic.gejiba.com/image/Mfv8","https://pic.gejiba.com/image/MMna","https://pic.gejiba.com/image/MA4D","https://pic.gejiba.com/image/M9pJ","https://pic.gejiba.com/image/Mvxv","https://pic.gejiba.com/image/MmtL","https://pic.gejiba.com/image/Mdgn","https://pic.gejiba.com/image/Ma3N","https://pic.gejiba.com/image/vyPZ","https://pic.gejiba.com/image/3VrL","https://pic.gejiba.com/image/3ZTn","https://pic.gejiba.com/image/3IqN","https://pic.gejiba.com/image/3xfO","https://pic.gejiba.com/image/3hhK","https://pic.gejiba.com/image/3EYU","https://pic.gejiba.com/image/35eY","https://pic.gejiba.com/image/0w0Z","https://pic.gejiba.com/image/028g","https://pic.gejiba.com/image/0T1i","https://pic.gejiba.com/image/0Qr3","https://pic.gejiba.com/image/0HTz","https://pic.gejiba.com/image/0lol","https://pic.gejiba.com/image/0Bfm","https://pic.gejiba.com/image/08KX","https://pic.gejiba.com/image/0iST","https://pic.gejiba.com/image/0beA");
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
