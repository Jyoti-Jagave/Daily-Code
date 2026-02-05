class Refrigerator:
      def __init__(self,
                rf_brand: str,
                rf_model: str,
                rf_capacity: tuple,
                rf_annual_Energy_Consumption: tuple,
                rf_fresh_Food_Capacity: tuple,
                rf_installation_Type: str, 
                rf_part_Number: str, 
                rf_form_Factor: str, 
                rf_special_Features: tuple, 
                rf_colour: str, 
                rf_voltage: tuple, 
                rf_defrost_System: str, 
                rf_door_Orientation: str, 
                rf_shelf_Type: str, 
                rf_number_Of_Shelves: int, 
                rf_certification: str, 
                rf_material: str, 
                rf_included_Components: tuple, 
                rf_are_batteries_Required: bool, 
                rf_manufacturer: str, 
                rf_country_Of_Origin: str
        ):
        self.brand                      = rf_brand
        self.model                      = rf_model 
        self.capacity                   = rf_capacity
        self.annual_Energy_Consumption    = rf_annual_Energy_Consumption 
        self.fresh_Food_Capacity          = rf_fresh_Food_Capacity
        self.installation_Type           = rf_installation_Type
        self.part_Number                 = rf_part_Number
        self.form_Factor                 = rf_form_Factor
        self.special_Features            = rf_special_Features
        self.colour                     = rf_colour
        self.voltage                    = rf_voltage
        self.defrost_System              = rf_defrost_System 
        self.door_Orientation            = rf_door_Orientation
        self.shelf_Type                  = rf_shelf_Type
        self.number_Of_Shelves            = rf_number_Of_Shelves
        self.certification              = rf_certification 
        self.material                   = rf_material
        self.included_Components         = rf_included_Components
        self.are_batteries_Required       = rf_are_batteries_Required
        self.manufacturer               = rf_manufacturer
        self.country_Of_Origin            = rf_country_Of_Origin

      def show(self): 
        print(f'BrandName:{self.brand}')
        print(f'Model:{self.model}')
        print(f'Capacity:{self.capacity[0]} {self.capacity[1]}')
        print(f'Annual Energy Consumption : {self.annual_Energy_Consumption}')
        print(f'Fresh Food Capacity:{self.fresh_Food_Capacity[0]} {self.fresh_Food_Capacity[1]}')
        print(f'Installation Type:{self.installation_Type}')
        print(f'Part Number:{self.part_Number}')
        print(f'Form Factor:{self.form_Factor}')
        print(f'Colour:{self.colour}')
        print(f'Voltage:{self.voltage}')
        print(f'Defrost System:{self.defrost_System}')
        print(f'Door Orientation:{self.door_Orientation}')
        print(f'Shelf Type:{self.shelf_Type}')
        print(f'Number Of Shelves:{self.number_Of_Shelves}')
        print(f'Certification:{self.certification}')
        print(f'Material:{self.material}')
        print(f'Included Components:{self.included_Components}')
        print(f'areBatteries Required:{self.are_batteries_Required}')
        print(f'Manufacturer:{self.manufacturer}')
        print(f'Country Of Origin:{self.country_Of_Origin}')
        print('Special Features:') 
        for feature in self.specialFeatures: 
            print('\t', feature)

myRefrigerator = Refrigerator(
      'Samsung',
      'RR20C1723S8',
      (183, 'litres'),
      (168, 'KW/Hours/Year'),
      (165, 'litres'),
      'freestanding',
      'RR20C1723S8/HL',
      'Direct Cool Refrigerator',
      (
           'Energy Efficient', 
           'Inverter Compressor',
           'Low Noise',
           'Adjustable Shelves',
           'Door Lock'
      ),
      'Grey',
      (230, 'volts'),
      'Manual',
      'Left',
      'Stughened Glass',
       2,
      'Energy Start',
      'stainless-Steel',
      (
           '1 Refrigerator', 
           '1 User Manual', 
           '1 Warranty Card'
      ),
      'No',
      'Samsung India electronic Limited',
      'India'
)

myRefrigerator.show()
