
const canvas = document.getElementById('myCanvas');
const ctx = canvas.getContext('2d');

let x = canvas.width / 2;
let y = canvas.height / 2;
let dx = 2;
let dy = 2;
let radius = 20;
let color = 'blue';


function drawCircle() {
    ctx.clearRect(0, 0, canvas.width, canvas.height); 
    ctx.beginPath();
    ctx.arc(x, y, radius, 0, Math.PI * 2);
    ctx.fillStyle = color;
    ctx.fill();
    ctx.closePath();
}


function updateAnimation() {
    if (x + dx > canvas.width - radius || x + dx < radius) {
        dx = -dx;
        color = getRandomColor(); 
    }
    if (y + dy > canvas.height - radius || y + dy < radius) {
        dy = -dy;
        color = getRandomColor(); 
    }

    x += dx;
    y += dy;

    drawCircle();
    requestAnimationFrame(updateAnimation); 
}


function getRandomColor() {
    const letters = '0123456789ABCDEF';
    let color = '#';
    for (let i = 0; i < 6; i++) {
        color += letters[Math.floor(Math.random() * 16)];
    }
    return color;
}


updateAnimation();
