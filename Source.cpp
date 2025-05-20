#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <iostream>

void draw_pixel_house();

int main() {
	if (!al_init()) {
		std::cerr << "Allegro did not initialize!" << std::endl;
	}

	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	if (!display) {
		std::cerr << "Display did not initialize!" << std::endl;
	}
	al_init_primitives_addon();

	ALLEGRO_COLOR color_red = al_map_rgb(255, 50, 50);
	ALLEGRO_COLOR color_blue = al_map_rgb(50, 50, 255);

	while (true)
	{
		al_clear_to_color(al_map_rgb(0, 0, 0));

		/* red horizontal line */
		al_draw_line(50, 50, 300, 300, color_red, 5);

		al_flip_display();
	}


	al_destroy_display(display);

}
