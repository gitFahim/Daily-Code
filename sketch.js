var r = 0;
var b = 255;
var g = 0;

function setup() {
	createCanvas(600,400);
}


function draw() {

	r = map(mouseX, 0, 600, 0 ,255);
	b = map(mouseX, 0, 600, 255, 0);
	g = map(mouseY, 0, 400, 0, 255);
	background(r, g, b);
	
	noFill();
	if(mouseX>150){
	fill(0,255,0);
	}
	
	if(mouseY>150){
		fill(255,0,0);
	}
	
	if(mouseX>150 && mouseY>150){
		fill(0,0,255);
	}
	
	ellipse(mouseX, mouseY, 70, 64);
	point(35, 34);
	

}