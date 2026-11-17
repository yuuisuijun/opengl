# idk what im doing

i wanna end everyone who thought of not allowing model imports  
#### this is so stupid fml

![mococo](resources/textures/moc.png)

also yeah most of the code is from [LearnOpenGL](https://learnopengl.com/), they're goated  
the high-res textures are from [AmbientCG](https://ambientcg.com)

## How to run this (at least how I did it):  
* install GLFW in your system (pacman or apt-get probably);  
* `git clone https://github.com/yuuisuijun/opengl.git`;  
* `cd opengl` (this project);  
* you should probably change the `opengl/include/glm` or `opengl/include/glad` to fit your system if the ones here dont work (im using this git just for my own setup tbh);  
* `make`;  
* `./engine`;  

---
#### TODO:
* Fix Sun's positioning (they're a bit silly rn);
* Fix the light passing through the planes (maybe make them thicker? or backcull?); << THIS!!
  * peter panning probably
* Find better textures for the walls and ceiling;
* Fine tune the lighting values (diffusion, specular, etc);
* Add normal mapping and stuff for the textures;
  * did NOT work!! maybe too much of a hassle; do it later.
* Figure out how to do the furniture (fuck that);
* tv colors and lighting;
  * tv's gif will have to be all frames changed by hand :sob: