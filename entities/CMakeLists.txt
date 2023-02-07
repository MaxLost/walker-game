cmake_minimum_required (VERSION 3.8)

#add_library (entity STATIC "Entity.cpp")
#add_library (borders STATIC "Borders.cpp")
#add_library (player STATIC "Player.cpp")
#add_library (zone STATIC "Zone.cpp")


add_library (entities STATIC "src/Entity.cpp" "src/Borders.cpp" "src/Player.cpp" "src/Zone.cpp")