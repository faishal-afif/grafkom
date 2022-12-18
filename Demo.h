#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>
#include "glm/gtc/type_ptr.hpp"

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, cubeVBO, cubeVAO, cubeEBO, planeVBO, planeVAO, planeEBO, plane_texture,
		tilesVBO, tilesVAO, tilesEBO, tilestex, lampVAO, lampVBO, lampEBO,
		concretetex, boardtex, tabletex;

	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);

	// camera
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

	// build 
	void BuildCube();
	void BuildPlane();
	void BuildTiles();
	void BuildTexture();

	// draw
	void DrawBoard();
	void DrawWall();

	void DrawTable();
	void DrawChair();

	void DrawTable2();
	void DrawChair2();

	void DrawTable3();
	void DrawChair3();
	
	void DrawLamp();
	void DrawFloor();
	void DrawPlane();
};
