# itemLoader
implements *some* of the Properties/Items described here; pick one representative class to work with from below, and implement the properties needed for that class in a new class; also add properties/implement any super classes as needed to do this; add a Maker* to Loader.cpp to call to_json on your new or existing class to actually load things.

Following this pattern:

- **In the virtual from_json method in your Item or Item subclass – do the actual reading of the properties from the json. That may need to call a superclass from_json method as appropriate.**
- **In Loader.cpp – add a “Maker” for your classes to enable the from_json code to be called on that class. That’s already done for “Item”, but not for subclasses you may add.**
- **Add instance variables for the properties in the class as needed – these correspond to the description of the properties below.**
- **Add “accessor” or “getter” methods for your added properties – follow the pattern get_propertyname as is done elsewhere.**
- **Add data files to data/items and test that the program actually loads these data files.**
