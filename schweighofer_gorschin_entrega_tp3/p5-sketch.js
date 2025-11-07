const s = (p) => {
    let x = 0;
    let y = 0;
    let espacio = 100;
    
    // const canvasWidth = 600; // ELIMINADO
    // const canvasHeight = 400; // ELIMINADO
    
    let container; // NUEVO: Referencia al contenedor

    p.setup = function() {
        // NUEVO: Obtenemos el contenedor y su ancho
        container = p.select('#p5-canvas-container'); 
        const w = container.width;
        const h = w * (2 / 3); // Mantenemos la proporción 3:2

        // Creamos el canvas con dimensiones dinámicas
        let canvas = p.createCanvas(w, h);
        
        espacio = p.int(p.random(30, 80)); 
        
        canvas.parent('p5-canvas-container'); 
        p.background(0);
        p.stroke(255);
        p.strokeWeight(2);
        p.frameRate(60);
    };

    // NUEVO: Función de redimensionamiento
    p.windowResized = function() {
        const newW = container.width;
        const newH = newW * (2 / 3);
        p.resizeCanvas(newW, newH);
    };

    p.draw = function() {
        if (y < p.height) {
            if (p.random(1) < 0.25) {
                p.line(x, y, x + espacio, y + espacio);
            } else {
                p.line(x, y + espacio, x + espacio, y);
            }

            x += espacio;

            if (x >= p.width) {
                x = 0;
                y += espacio;
            }
        } else {
            p.background(0);
            espacio = p.int(p.random(30, 80)); 
            x = 0;
            y = 0;
        }
    };
};

let myp5 = new p5(s);