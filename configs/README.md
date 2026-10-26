# FOG source configs

Every `config.cpp` and `model.cfg` from Forward Operator Gear, in readable form, so you don't have to unpack the mod.

The folders mirror the mod's own layout, so a file here matches the model and texture paths used in game. For example, `configs/Helmets/Fast_MT/config.cpp` is the config behind `\FOG_MOD\Helmets\Fast_MT\...`.

- **`config.cpp`**: item classes, stats, slots, armour, textures and the `CfgPatches` name for that folder.
- **`model.cfg`**: skeletons and animated sections for that folder's models.

These are for reading and reference. To change FOG items, make your own mod that loads after FOG. Don't edit or repack FOG's files. The [Modding FOG](https://github.com/AJfortyfive/FOG_MOD/wiki/Modding-FOG) guides on the wiki explain how.

Models (`.p3d`), textures and scripts aren't included.
