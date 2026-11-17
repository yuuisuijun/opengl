#include <stdio.h>
// fuck it we are making the tangent calculations by HAND

int main() {
// our square
  float floorVertices[] = {
    // positions          // normals    // texture Coords   // tangent
    // 0~7
    12.0f, -0.5f,  6.0f,  0.0f, 1.0f, 0.0f, 2.0f, 0.0f,
    0.0f, -0.5f,  6.0f,  0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f, 2.0f,

    12.0f, -0.5f,  6.0f,  0.0f, 1.0f, 0.0f, 2.0f, 0.0f,
    0.0f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f, 2.0f,
    12.0f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f, 2.0f, 2.0f
  };
//

// setup
  float pos1x = floorVertices[0];
  float pos1y = floorVertices[1];
  float pos1z = floorVertices[2];

  float pos2x = floorVertices[8];
  float pos2y = floorVertices[9];
  float pos2z = floorVertices[10];

  float pos3x = floorVertices[16];
  float pos3y = floorVertices[17];
  float pos3z = floorVertices[18];

  float pos4x = floorVertices[40];
  float pos4y = floorVertices[41];
  float pos4z = floorVertices[42];


  float uv1x = floorVertices[6];
  float uv1y = floorVertices[7];

  float uv2x = floorVertices[14];
  float uv2y = floorVertices[15];

  float uv3x = floorVertices[22]; 
  float uv3y = floorVertices[23];

  float uv4x = floorVertices[46];
  float uv4y = floorVertices[47];
//

// calculations TRIANGLE ONE
  float edge1x = pos2x - pos1x;
  float edge1y = pos2y - pos1y;
  float edge1z = pos2z - pos1z;
  float edge2x = pos3x - pos1x;
  float edge2y = pos3y - pos1y;
  float edge2z = pos3z - pos1z;

  float deltaUV1x = uv2x - uv1x;
  float deltaUV1y = uv2y - uv1y;
  float deltaUV2x = uv3x - uv1x;
  float deltaUV2y = uv3x - uv1x;

  float f = 1.0f / (deltaUV1x * deltaUV2y - deltaUV2x * deltaUV1y);

  float t1x = f * (deltaUV2y * edge1x - deltaUV1y * edge2x);
  float t1y = f * (deltaUV2y * edge1y - deltaUV1y * edge2y);
  float t1z = f * (deltaUV2y * edge1z - deltaUV1y * edge2z);
//

// calculations TRIANGLE TWO
  edge1x = pos3x - pos1x;
  edge1y = pos3y - pos1y;
  edge1z = pos3z - pos1z;
  edge2x = pos4x - pos1x;
  edge2y = pos4y - pos1y;
  edge2z = pos4z - pos1z;

  deltaUV1x = uv3x - uv1x;
  deltaUV1y = uv3y - uv1y;
  deltaUV2x = uv4x - uv1x;
  deltaUV2y = uv4y - uv1y;

  f = 1.0f / (deltaUV1x * deltaUV2y - deltaUV2x * deltaUV1y);

  float t2x = f * (deltaUV2y * edge1x - deltaUV1y * edge2x);
  float t2y = f * (deltaUV2y * edge1y - deltaUV1y * edge2y);
  float t2z = f * (deltaUV2y * edge1z - deltaUV1y * edge2z);
//

// results
  printf("T1x: %f\tT1y: %f\tT1z: %f\n", t1x, t1y, t1z);
  printf("T2x: %f\tT2y: %f\tT2z: %f\n", t2x, t2y, t2z);
//
  return 0;
}