<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Practica 5</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #e0f2f1; /* Color de fondo verde suave */
            color: #333;
            margin: 0;
            padding: 20px;
        }
        .container {
            max-width: 900px;
            margin: auto;
            background: #ffffff;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
            border-left: 5px solid #009688; /* Color verde oscuro para el borde izquierdo */
        }
        h1 {
            text-align: center;
            color: #009688; /* Color verde oscuro para el título principal */
        }
        .section {
            margin-bottom: 30px;
        }
        .section h2 {
            color: #009688; /* Color verde oscuro para los títulos de sección */
        }
        .section p, .section ul {
            font-size: 1.1em;
        }
        .section ul {
            list-style: none;
            padding: 0;
        }
        .section ul li {
            background: #e0f2f1; /* Color verde suave para los elementos de lista */
            margin: 5px 0;
            padding: 10px;
            border-left: 5px solid #009688; /* Color verde oscuro para el borde izquierdo de lista */
        }
        .video-container {
            position: relative;
            padding-bottom: 56.25%;
            padding-top: 30px;
            height: 0;
            overflow: hidden;
        }
        .video-container iframe, .video-container object, .video-container embed {
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Practica: 5 Captura de Foto con Arduino Tiny Machine Learning Kit</h1>
<div class="section">
            <h2>Equipo de Trabajo</h2>
<h2>Instituto Tecnologico de Tijuana</h2>
		<h2>Lenguaje e Interfaz</h2>
            <ul>
                <li><strong>Yahir Soto</strong> </li>
  		 <li><strong>Juan Flores</strong> </li>
                <li><strong>Rosy Salazar</strong> </li>
                <li><strong>Eddie Reynoso</strong> </li>
                <li><strong>Abraham Aganza</strong></li>
        <div class="section">
            <h2>Objetivos</h2>
            <p><strong>General:</strong> Utilizar el Arduino Tiny Machine Learning Kit para integrar habilidades técnicas y colaborativas, culminando en la captura de una foto del equipo, con C# o Python para captura de la foto.</p>
            <p><strong>Específicos:</strong></p>
            <ul>
                <li>Configurar el Arduino Tiny Machine Learning Kit para control del kit.</li>
                <li>Programar el Arduino para capturar una imagen utilizando un módulo de cámara.</li>
                <li>Demostrar la colaboración y el aprendizaje conjunto a través de una actividad de equipo.</li>
            </ul>
        </div>

        <div class="section">
            <h2>Materiales Necesarios</h2>
            <ul>
                <li>Arduino Tiny Machine Learning Kit.</li>
                <li>Cámara compatible con Arduino (módulo de cámara).</li>
                <li>Botón o sensor para activar la cámara.</li>
                <li>Cables de conexión.</li>
                <li>Computadora con el software de Arduino instalado.</li>
                <li><a href="https://github.com/electroniccats/ml-library" target="_blank">GitRepo de kit con ejemplos</a></li>
            </ul>
        </div>

        <div class="section">
            <h2>Metodología</h2>
            <p><strong>Preparación:</strong></p>
            <ul>
                <li>Revisar la documentación del Arduino Tiny Machine Learning Kit y el módulo de cámara.</li>
                <li>Instalar y configurar el software de Arduino en la computadora.</li>
                <li>Bajar el repositorio con ejemplos desde <a href="https://github.com/electroniccats/ml-library" target="_blank">GitRepo</a>.</li>
            </ul>
            <p><strong>Desarrollo:</strong></p>
            <ul>
                <li>Conectar el módulo de cámara al Arduino.</li>
                <li>Programar el Arduino para que, al activarse mediante un botón o sensor, la cámara tome una foto.</li>
                <li>Probar el sistema asegurándose de que la foto se tome correctamente cuando se active el sensor o botón.</li>
            </ul>
            <p><strong>Implementación:</strong></p>
            <ul>
                <li>Organizar una sesión con el equipo de trabajo.</li>
                <li>Colocar el Arduino en un lugar adecuado donde todos los miembros del equipo puedan ser fotografiados.</li>
                <li>Utilizar el sistema desarrollado para tomar una foto del equipo.</li>
            </ul>
            <p><strong>Documentación y Presentación:</strong></p>
            <ul>
                <li>Preparar una presentación que detalle el proceso de desarrollo, problemas encontrados y cómo se solucionaron en su repositorio de equipo.</li>
                <li>Incluir la foto del equipo como parte de la documentación del proyecto tomada con el UI de Arduino IDE o similar.</li>
                <li>Presentar el proyecto al docente y comentar sobre la experiencia de aprendizaje durante la sesión de cierre del semestre.</li>
            </ul>
        </div>

        <div class="section">
            <h2>Implementacion</h2>
            <ul>
                               <li><strong>Técnica:</strong> Correcta implementación y funcionamiento del sistema para la captura de fotos con el Arduino Tiny Machine Learning Kit.</li>
                <li><strong>Colaborativa:</strong> Participación activa de todos los miembros del equipo en la realización del proyecto, documentado en su repositorio.</li>
                <li><strong>Recursos Adicionales:</strong></li>
                <li><a href="https://www.youtube.com/watch?v=LXgL850p7b0&list=PLUwmiNOPP-7hrRFsplajItGAn5ykUjOgY" target="_blank">Lista de videos en YouTube con más de 6 capítulos paso a paso</a></li>
            </ul>
        </div>

        <div class="section">
            <h2>Resultados Esperados</h2>
            <p>Al finalizar esta práctica, los estudiantes habrán adquirido experiencia en el desarrollo de aplicaciones de IoT utilizando el Arduino Tiny Machine Learning Kit, demostrando habilidades técnicas y colaborativas en el proceso de captura de una foto con C# o Python.</p>
        </div>
    </div>
</body>
</html>
