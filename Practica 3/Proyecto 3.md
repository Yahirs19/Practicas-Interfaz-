
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Proyecto 3</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #ffe6e6;
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
            border-left: 5px solid #cc0000;
        }
        h1 {
            text-align: center;
            color: #b30000;
        }
        .section {
            margin-bottom: 30px;
        }
        .section h2 {
            color: #b30000;
        }
        .section p, .section ul {
            font-size: 1.1em;
        }
        .section ul {
            list-style: none;
            padding: 0;
        }
        .section ul li {
            background: #f9f9f9;
            margin: 5px 0;
            padding: 10px;
            border-left: 5px solid #b30000;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Practica: 3 con PicoW con ChatGTP #44</h1>

        <div class="section">
            <h2>Objetivo</h2>
            <p>Implementar un programa en el Raspberry Pi Pico W que establezca una conexión con ChatGPT, envíe un prompt definido, reciba la respuesta y la muestre en un display OLED. Adicionalmente, el LED del Pico W deberá parpadear cada vez que se reciban tokens de la respuesta.</p>
        </div>

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
            <h2>Requisitos del Proyecto</h2>
            <ul>
                <li><strong>Configuración del Pico W:</strong> Conectar el Raspberry Pi Pico W a Internet.</li>
                <li><strong>Conexión con ChatGPT:</strong> Establecer una conexión API para enviar y recibir datos.</li>
                <li><strong>Display OLED:</strong> Mostrar la respuesta en un display OLED.</li>
                <li><strong>LED Interactivo:</strong> Parpadeo del LED en sincronización con la llegada de tokens.</li>
                <li><strong>Interfaz de Usuario:</strong> Crear una interfaz para introducir el prompt.</li>
            </ul>
        </div>

        <div class="section">
            <h2>Descripción Adicional</h2>
            <ul>
                <li>Familiarizarse con la programación en C/C++.</li>
                <li>Entender el manejo de conexiones HTTP/S y APIs web.</li>
                <li>Manipulación de dispositivos periféricos (display OLED y LED interno).</li>
                <li>Comentar adecuadamente el código para explicar las gestiones realizadas.</li>
            </ul>
        </div>

        <div class="section">
            <h2>Introduce tu pregunta para ChatGPT</h2>
            <p>Chistes, recetas, etc.</p>
        </div>

        <div class="section">
            <h2>Detalles del Diseño</h2>
            <ul>
                <li><strong>Claridad:</strong> El texto debe ser claro y simple, fácil de entender.</li>
                <li><strong>Brevedad:</strong> Dado que el espacio en un display OLED suele ser limitado, el prompt debe ser conciso.</li>
                <li><strong
