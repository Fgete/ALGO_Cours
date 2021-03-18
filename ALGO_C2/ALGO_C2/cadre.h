#pragma once
#define LENGTH 10

class Cadre {

private:
	float enchor_x;
	float enchor_y;
	float size_x; // width
	float size_y; // height
	float theta; // rotation

	char* s_pattern;
	char* ptrCharNom_Cadre;
protected:

public:
	// BUILDER
	Cadre();
	Cadre(float enchor_x, float enchor_y, float size_x, float size_y, float theta, char *pattern, char *s_nom);

	// COPIER
	Cadre(Cadre& c);

	// WRITER
	void SetCadreEnchor(float enchor_x, float enchor_y);
	void SetCadreSize(float size_x, float size_y);

	// PRINTER
	void PrintCadreEnchor() const;
	void PrintCadreSize() const;
	void PrintCadreSurface() const;
	void PrintCadrePerimeter() const;
	void PrintCadrePattern() const;
	void PrintIsSquare() const;

	// READER
	float GetCadreSizeX() const;
	float GetCadreSizeY() const;
	char* GetCadrePattern() const;

	// FUNCTIONS
	float SurfaceCadre() const;
	float PerimeterCadre() const;
	bool IsSquare() const;
	void RotateCadre(float theta);

	// DESTRUCTER
	~Cadre();
};