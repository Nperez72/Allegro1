#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <iostream>

void draw_pixel_house();

int main() {

	// Initialize Allegro and the primitives addon
	if (!al_init()) {
		std::cerr << "Allegro did not initialize!" << std::endl;
	}

	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	if (!display) {
		std::cerr << "Display did not initialize!" << std::endl;
	}
	al_init_primitives_addon();

	// Simple game loop to keep the display open
	while (true)
	{	
		// This code doesn't need it but it's useful when the drawn pixels are not static
		al_clear_to_color(al_map_rgb(0, 0, 0));

		draw_pixel_house();

		// Swap the buffers to display the drawn content
		al_flip_display();
	}


	al_destroy_display(display);

}

/*
* Draw a pixel house using Allegro primitives
* Filled shapes for the base, roof, door, and grass
*/
void draw_pixel_house() {

	// Define colors for easy typing
	ALLEGRO_COLOR color_red = al_map_rgb(255, 50, 50);
	ALLEGRO_COLOR color_blue = al_map_rgb(50, 50, 255);
	ALLEGRO_COLOR color_green = al_map_rgb(50, 255, 50);
	// Draw the base of the house 
	al_draw_filled_rectangle(100, 200, 300, 400, color_red);
	// Draw the roof 
	al_draw_filled_triangle(100, 200, 200, 100, 300, 200, color_blue);
	// Draw the door 
	al_draw_filled_rectangle(150, 300, 250, 400, color_blue);
	// Draw the grass
	al_draw_filled_rectangle(0, 400, 800, 600, color_green);
}
