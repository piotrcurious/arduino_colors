// palette_otono.h
// Extended color palette inspired by Spanish autumn, organized by regions, for Arduino TFT projects

#ifndef PALETTE_OTONO_H
#define PALETTE_OTONO_H

// Colors defined in 16-bit RGB565 format
// Each color represents autumn hues inspired by Spanish regions

// --- GENERAL COLORS ---
#define HOJA_SECA        0xBA64  // Dry leaf brown
#define AMBAR            0xFA40  // Amber
#define CENIZA           0xCE79  // Ash gray

// --- ANDALUCIA ---
#define NARANJA_SEVILLA  0xFB60  // Seville orange
#define VERDE_OLIVA      0x8404  // Olive green (Andalusian groves)
#define AZUL_ALHAMBRA    0x4C3F  // Blue of Alhambra tiles
#define OCRE_ALPUJARRAS  0xDA40  // Ochre tones from the Alpujarras hills
#define ROJO_CORDOBA     0xA808  // Crimson inspired by Córdoba patios

// --- CASTILLA Y LEON ---
#define AMARILLO_CAMPOS  0xFEA0  // Golden fields of wheat
#define GRIS_SIERRA      0x8C73  // Gray tones from the Sierra de Gredos
#define CASTANA_AVILA    0x8820  // Chestnut brown (Ávila forests)
#define TIERRA_SEGOVIA   0x8A40  // Earthy tones from Segovia’s landscapes
#define ROJO_ARCE        0xD006  // Maple red from the northern areas

// --- CATALUNA ---
#define ROJO_VERMELL     0xB004  // Vermilion red (Catalonian fall leaves)
#define MARRON_MONTSENY  0x8A62  // Montseny autumn brown
#define GRIS_MONTJUIC    0x8C74  // Stone gray from Montjuïc
#define VERDE_PIRINEOS   0x3C07  // Green from the Pyrenees
#define AZUL_MEDITERRANEO 0x5D3F // Mediterranean blue

// --- GALICIA ---
#define VERDE_MUSGO      0x6406  // Moss green from Galician forests
#define AMARILLO_TOXO    0xFEC0  // Bright yellow from Toxo flowers
#define GRIS_CAMINO      0x94B2  // Gray from the Camino de Santiago
#define NEGRO_TORMENTA   0x4208  // Stormy black (Galician coast)
#define AZUL_FISTERRE    0x4C5F  // Deep blue from Cabo Fisterre seas

// --- PAIS VASCO ---
#define VERDE_BOSQUE     0x3A07  // Forest green
#define OCRE_MONTANAS    0xDA20  // Ochre tones from the Basque mountains
#define ROJO_TINTO       0xB810  // Red wine (Rioja Alavesa)
#define GRIS_CANTABRICO  0x8C75  // Cantabrian gray

// --- EXTREMADURA ---
#define AMARILLO_GIRASOL 0xFEE0  // Sunflower yellow
#define MIEL_EXTREMENA   0xFC80  // Honey yellow
#define MARRON_CORCHO    0x8B20  // Cork tree brown
#define VERDE_JARA       0x4A26  // Green from rockrose plants
#define OCRE_MONFRAGUE   0xDA60  // Ochre cliffs from Monfragüe National Park

// --- MADRID ---
#define ROJO_RETAMA      0xC010  // Red from retama shrubs
#define GRIS_CAPITAL     0xA534  // Urban gray from Madrid architecture
#define AMARILLO_PARQUE  0xFD40  // Golden hues from El Retiro park
#define CASTANA_MANZANARES 0x8A20 // Chestnut tones from the Manzanares River banks

// --- ARAGON ---
#define AMARILLO_EBRO    0xFEC0  // Yellow fields by the Ebro River
#define GRIS_PIRINEOS    0x8C77  // Pyrenees gray
#define VERDE_CINCA      0x4B26  // Green from Cinca River
#define MARRON_MESETA    0x8A42  // Brown plains of Aragon
#define AZUL_JILOCA      0x4C3E  // Jiloca River blue

// --- ISLAS BALEARES ---
#define VERDE_PINO       0x3A07  // Pine green from the Balearic Islands
#define AZUL_CALAS       0x5D1F  // Turquoise blue from Balearic coves
#define MIEL_SOBRASADA   0xFB40  // Honey red from sobrasada sausage
#define OCRE_ARENAL      0xD962  // Ochre sand from Arenal beaches

// --- ISLAS CANARIAS ---
#define NEGRO_VOLCANICO  0x4206  // Volcanic black
#define VERDE_LAURISILVA 0x4A07  // Laurisilva green
#define AMARILLO_PLATANO 0xFEA0  // Banana yellow
#define ROJO_LAVA        0xD000  // Lava red
#define AZUL_OCASO       0x4C5F  // Twilight blue over the Atlantic

// Notes:
// - Each region reflects iconic landscapes, vegetation, or cultural elements from Spain during autumn.
// - Colors are grouped by regions for intuitive reference.
// - All names are in Spanish without diacritical marks for compatibility.
// - Colors remain in 16-bit RGB565 format for Arduino TFT compatibility.

#endif // PALETTE_OTONO_H
