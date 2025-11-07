const s3 = (p) => {
    // Definimos dimensiones que coincidan con el primer sketch
    // const canvasWidth = 600; // ELIMINADO
    // const canvasHeight = 400; // ELIMINADO
    const rectSize = 20;
    
    let container; // NUEVO: Referencia al contenedor

    p.setup = function() {
        // NUEVO: Obtenemos el contenedor y su ancho
        container = p.select('#p5-canvas-container-3');
        const w = container.width;
        const h = w * (2 / 3); // Mantenemos la proporción 3:2

        let canvas = p.createCanvas(w, h); // Usamos dimensiones dinámicas
        // El canvas se adjunta al contenedor del TERCER artículo
        canvas.parent('p5-canvas-container-3'); 
        p.noStroke();
        
        // NUEVO: Función de redimensionamiento
        p.windowResized = function() {
            const newW = container.width;
            const newH = newW * (2 / 3);
            p.resizeCanvas(newW, newH);
        };
    };

    p.draw = function() {
        // Fondo animado con ruido y sinusoides (usando p. en lugar de funciones globales)
        for (let y = 0; y < p.height; y += rectSize) {
            for (let x = 0; x < p.width; x += rectSize) {
                let n = p.noise(x * 0.01, y * 0.01, p.millis() * 0.0005);
                let col = p.color(
                    150 + 105 * p.sin(p.millis() * 0.001 + n * 10),
                    150 + 105 * p.sin(p.millis() * 0.003 + n * 15),
                    150 + 105 * p.sin(p.millis() * 0.006 + n * 20)
                );
                p.fill(col);
                p.rect(x, y, rectSize, rectSize);
            }
        }
    };
    
};

// Inicia la instancia de p5 para el TERCER sketch
let myp5_3 = new p5(s3);