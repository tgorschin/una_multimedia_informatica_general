// Obtenemos los elementos con los ID 'boton' y 'titulo'
const boton = document.getElementById("boton");
const titulo = document.getElementById("titulo");

function random(number) {
  return Math.floor(Math.random() * (number + 1)); // Math random es nativo de JS.
}

// Escuchamos el evento del mouse 'click', para el elemento del botón
boton.addEventListener("click", () => {
  const colorRandom = `rgb(${random(255)}, ${random(255)}, ${random(255)})`;
  document.body.style.backgroundColor = colorRandom;
});

// Escuchamos el evento del teclado luego de oprimirse, para el elemento del título h1 con id 'titulo'
titulo.addEventListener("keyup", () => {
	const colorRandom = `rgb(${random(200)}, ${random(255)}, ${random(255)})`;
  titulo.style.color = colorRandom;
})