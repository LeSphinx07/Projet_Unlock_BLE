// 4.24.1 0x9c598419
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_normal[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID = 0, Size: 240x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID = 1, Size: 240x50 pixels
extern const unsigned char image_loccck[]; // BITMAP_LOCCCK_ID = 2, Size: 150x150 pixels
extern const unsigned char image_unloccck[]; // BITMAP_UNLOCCCK_ID = 3, Size: 150x150 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_normal, 0, 240, 50, 5, 0, 230, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed, 0, 240, 50, 5, 0, 230, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_loccck, 0, 150, 150, 24, 65, 40, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 77, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_unloccck, 0, 150, 150, 49, 69, 38, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 78, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
