# Autumn in Spain - Arduino Color Palettes

This project provides a collection of 16-bit RGB565 color palettes for Arduino TFT projects, inspired by the autumn season in Spain. The palettes are organized by autonomous communities and their subregions, reflecting the unique colors of each area.

## Project Goals

*   **Provide a comprehensive collection of color palettes:** Offer a wide range of colors inspired by Spanish autumn landscapes.
*   **Ensure easy integration:** Make the palettes easy to use in any Arduino TFT project.
*   **Promote modularity and maintainability:** Structure the project in a way that is easy to understand, maintain, and extend.

## New Structure

The project will be reorganized into the following structure:

```
.
├── README.md
├── autumn_in_spain.h
├── palettes/
│   ├── andalucia.h
│   ├── aragon.h
│   ├── asturias.h
│   ├── balearic_islands.h
│   ├── basque_country.h
│   ├── canary_islands.h
│   ├── cantabria.h
│   ├── castilla_la_mancha.h
│   ├── castilla_leon.h
│   ├── cataluna.h
│   ├── extremadura.h
│   ├── galicia.h
│   ├── la_rioja.h
│   ├── madrid.h
│   ├── murcia.h
│   ├── navarre.h
│   └── valencia.h
└── examples/
    ├── demo/
    │   └── demo.ino
    └── demo2/
        └── demo2.ino
```

## How to Use

To use the palettes in your project, simply include the `autumn_in_spain.h` file:

```cpp
#include "autumn_in_spain.h"
```

This will give you access to all the color palettes in the collection.

## Contributing

Contributions are welcome! Please feel free to add new palettes or improve existing ones.
