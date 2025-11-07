var nameError = document.getElementById('name-error')
var phoneError = document.getElementById('phone-error')
var emailError = document.getElementById('email-error')
var messageError = document.getElementById('message-error')
var submitError = document.getElementById('submit-error')

const boton = document.getElementById("boton");
const titulo = document.getElementById("titulo");
const btnInscribite = document.getElementById("btn-inscribite");

function random(number) {
    return Math.floor(Math.random() * (number + 1));
}

if (boton) {
    boton.addEventListener("click", () => {
        const colorRandom = `rgb(${random(255)}, ${random(255)}, ${random(255)})`;
        document.body.style.backgroundColor = colorRandom;
    });
}

if (titulo) {
    titulo.addEventListener("keyup", () => {
        const colorRandom = `rgb(${random(200)}, ${random(255)}, ${random(255)})`;
        titulo.style.color = colorRandom;
    })
}


if (btnInscribite) {
    btnInscribite.addEventListener("click", (event) => {
        const randomBgColor = `rgb(${random(255)}, ${random(255)}, ${random(255)})`;
        const originalBgColor = '#377481';

        btnInscribite.style.backgroundColor = randomBgColor;
        btnInscribite.style.color = 'black';
        btnInscribite.style.boxShadow = 'none';

        setTimeout(() => {
            btnInscribite.style.backgroundColor = originalBgColor;
            btnInscribite.style.color = 'white';
            btnInscribite.style.boxShadow = '';
        }, 100);
    });
}

function validateName() {
    var name = document.getElementById('contact-name').value

    if (name.length == 0) {
        nameError.innerHTML = '*';
        return false;
    }
    if (!name.match(/^[A-Za-z\u00C0-\u017F\s]{2,}(\s[A-Za-z\u00C0-\u017F\s]{2,})+$/i)) {
        nameError.innerHTML = 'Write full name';
        return false;
    }
    nameError.innerHTML = '<i class="fas fa-check-circle"></i>';
    return true;
}

function validatePhone() {
    var phone = document.getElementById('contact-phone').value;

    if (phone.length == 0) {
        phoneError.innerHTML = '*'
        return false;
    }

    if (phone.length !== 10) {
        phoneError.innerHTML = 'Phone no should be 10 digits';
        return false;
    }

    if (!phone.match(/^[0-9]{10}$/)) {
        phoneError.innerHTML = 'Only digits please'
        return false;
    }

    phoneError.innerHTML = '<i class="fas fa-check-circle"></i>';
    return true;
}

function validateEmail() {
    var email = document.getElementById('contact-email').value;
    if (email.length == 0) {
        emailError.innerHTML = '*'
        return false;
    }

    if (!email.match(/^[^\s@]+@[^\s@]+\.[^\s@]+$/)) {
        emailError.innerHTML = 'Email invalid'
        return false;
    }

    emailError.innerHTML = '<i class="fas fa-check-circle"></i>';
    return true;
}

function validateMessage() {
    var message = document.getElementById('contact-message').value;
    var required = 30;
    var left = required - message.length;

    if (left > 0) {
        messageError.innerHTML = left + ' caracteres restantes  '
        return false;
    }

    messageError.innerHTML = '<i class="fas fa-check-circle"></i>';
    return true;
}

function validateForm() {
    var isNameValid = validateName();
    var isPhoneValid = validatePhone();
    var isEmailValid = validateEmail();
    var isMessageValid = validateMessage();

    if (isNameValid && isPhoneValid && isEmailValid && isMessageValid) {
        submitError.style.display = 'none';
        return true;
    } else {
        submitError.style.display = 'block';
        submitError.innerHTML = 'Por favor, corrige los errores para enviar.'
        setTimeout(function () {
            submitError.style.display = 'none';
        }, 3000);
        return false;
    }
}

document.addEventListener('DOMContentLoaded', function () {

    const contactNameInput = document.getElementById('contact-name');
    const contactPhoneInput = document.getElementById('contact-phone');
    const contactEmailInput = document.getElementById('contact-email');
    const contactMessageTextarea = document.getElementById('contact-message');
    const contactForm = document.getElementById('contact-form');

    if (contactNameInput) {
        contactNameInput.addEventListener('keyup', validateName);
    }
    if (contactPhoneInput) {
        contactPhoneInput.addEventListener('keyup', validatePhone);
    }
    if (contactEmailInput) {
        contactEmailInput.addEventListener('keyup', validateEmail);
    }
    if (contactMessageTextarea) {
        contactMessageTextarea.addEventListener('keyup', validateMessage);
    }

    if (contactForm) {
        contactForm.addEventListener('submit', function (event) {

            event.preventDefault();

            if (validateForm()) {

                alert('¡Formulario completado correctamente! Gracias por tu mensaje.');

                contactForm.reset();

                document.getElementById('name-error').innerHTML = '';
                document.getElementById('phone-error').innerHTML = '';
                document.getElementById('email-error').innerHTML = '';
                document.getElementById('message-error').innerHTML = '';
            }
        });
    }

});

const sliderContainer = document.getElementById('image-slider');
const slides = document.querySelectorAll('.slide');
let currentIndex = 0;
const totalSlides = slides.length;
const slideDuration = 10000;

function loadSlideBackgrounds() {
    slides.forEach(slide => {
        const imageUrl = slide.getAttribute('data-image');
        if (imageUrl) {
            slide.style.backgroundImage = `url('${imageUrl}')`;
        }
    });
}

function goToNextSlide() {
    currentIndex = (currentIndex + 1) % totalSlides;

    const offset = currentIndex * (-100 / totalSlides);

    document.querySelector('.slider-container').style.transform = `translateX(${offset}%)`;
}

if (document.getElementById('image-slider')) {
    loadSlideBackgrounds();

    setInterval(goToNextSlide, slideDuration);
}