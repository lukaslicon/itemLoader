# Custom Item Loader and JSON Integration

## Project Overview

This project extends an existing system to implement new item classes with specific properties based on the descriptions provided. The task is to select a representative class, implement the necessary properties, and integrate the new class into the system's JSON-based data loading mechanism.

The project involves working with inheritance, class properties, JSON serialization/deserialization, and adding support for custom items in the loader system.

## Implementation Steps

### 1. **Implement a New Class**
   - **Task**: Pick one representative class from the provided descriptions and implement it in a new class file. This class should include all required properties and methods.
   - **Superclasses**: If your class requires inheritance from a superclass, ensure that the superclass is implemented or extended as needed.
   - **Example**: If implementing a `Weapon` class, you may need to extend from the `Item` superclass, adding properties like `damage`, `range`, etc.

### 2. **JSON Deserialization (from_json)**
   - **Task**: In your new class, implement the `from_json` method to deserialize the class properties from a JSON object. This method reads the JSON data and populates the instance variables of your class.
   - **Superclass Integration**: If your class inherits from a superclass, make sure to call the superclass’s `from_json` method to properly load all inherited properties.
   - **Example**: If your class inherits from `Item`, ensure the `Item` properties are deserialized by calling `Item::from_json()` within your subclass’s `from_json()`.

### 3. **Loader Integration (Maker)**
   - **Task**: In `Loader.cpp`, add a "Maker" for your new class. The Maker pattern enables the system to dynamically call `from_json` on your new class when loading data.
   - **Existing Example**: This pattern has already been implemented for the `Item` class. Use that as a reference to integrate your new class.

### 4. **Class Properties and Accessors**
   - **Task**: Add instance variables in your class for each of the properties described in the class description. These variables will store the data loaded from the JSON files.
   - **Accessor Methods**: Implement getter methods for each property. Follow the naming convention `get_propertyname()` that is used in the rest of the codebase.
   - **Example**: If your class has a property `damage`, you should implement a method `int get_damage() const;` to return the value of `damage`.

### 5. **Test Data Files**
   - **Task**: Create test data files for your new class and place them in the `data/items/` directory. These JSON files should contain the properties and values for your new class.
   - **Testing**: Test that the system correctly loads these data files by running the program and verifying that your class and its properties are loaded from JSON and accessible via the getter methods.

## Example Workflow

1. **Create Class**: Define a new class, `Weapon`, which extends `Item`. Add properties like `damage` and `range`.
2. **Implement from_json**: In `Weapon::from_json`, deserialize the `damage` and `range` properties from the JSON file.
3. **Integrate with Loader**: In `Loader.cpp`, add a Maker for `Weapon` that enables the system to create `Weapon` objects when loading JSON data.
4. **Add Accessors**: Implement `get_damage()` and `get_range()` in the `Weapon` class to allow other parts of the code to access these properties.
5. **Create Test Files**: Write a JSON file, `weapon.json`, in `data/items/` with properties for a `Weapon`. Run the program and verify the data is loaded correctly.

## Conclusion

By following the steps above, you can extend the system to support new item classes with custom properties. Ensure that the classes are integrated into the JSON loading system and properly tested using custom data files.

## License

This project is for educational purposes. All rights reserved.
