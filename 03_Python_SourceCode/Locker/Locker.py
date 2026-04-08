class Locker:
    def __init__(self,
              lc_brand:str,
              lc_product_dimensions:str,
              lc_lock_type:str,
              lc_colour:str,
              lc_capacity:str,
              lc_material:str,
              lc_special_feature:str,
              lc_mounting_type:str,
              lc_included_components:str,
              lc_item_weight:str,
              lc_alarm:str,
              lc_water_resistance_level:str,
              lc_chamber_height:str,
              lc_manufatcurer:str,
              lc_countrey_of_origin:str,
              lc_item_model_number:str
             ): 

            self.brand                = lc_brand
            self.product_dimensions   = lc_product_dimensions
            self.lock_type            = lc_lock_type
            self.colour               = lc_colour
            self.capacity             = lc_capacity
            self.material             = lc_material
            self.special_feature      = lc_special_feature
            self.mounting_type        = lc_mounting_type
            self.included_components  = lc_included_components
            self.item_weight          = lc_item_weight
            self.alarm                = lc_alarm
            self.water_resistance_level = lc_water_resistance_level
            self.chamber_height         = lc_chamber_height
            self.manufatcurer           = lc_manufatcurer
            self.countrey_of_origin     = lc_countrey_of_origin
            self.item_model_number      = lc_item_model_number
    
    def show (self):
          print(f'Brand:  {self.brand}')
          print(f'Product Dimensions:  {self.product_dimensions}')
          print(f'Lock Type:  {self.lock_type}')
          print(f'Colour:  {self.colour}')
          print(f'Capacity:  {self.capacity}')
          print(f'Material:  {self.material}')
          print(f'Special Feature:  {self.special_feature}')
          print(f'Mounting Type:  {self.mounting_type}')
          print(f'Included Components:  {self.included_components}')
          print(f'Item Weight:  {self.item_weight}')
          print(f'Alarm: {self.alarm}')
          print(f'Water Resistance Level: {self.water_resistance_level}')
          print(f'Chamber Height: {self.chamber_height}')
          print(f'Manufacturer: {self.manufatcurer}')
          print(f'Country of Origin: {self.countrey_of_origin}')
          print(f'Item model number: {self.item_model_number}')

myLocker = Locker(
           'Godrej Security Solutions',
           '30D x 20W x 20H Centimeters',
           'Electronic Combination Lock',
           'Grey',
           '10 litres',
           'Alloy Steel',
           'Electronic Lock',
           'Floor Mount',
           '1 Safe, 4 Grouting/Anchoring fasteners , 1 Mechanical override Key, 1 User Manual, 1 Warranty Card',
           '5000 Grams',
           'Vibration',
           'Not Water Resistant',
           '200 Centimetres',
           'Godrej & Boyce Mfg. Co Ltd',
           'India',
           'Forte Pro Digital'
)
myLocker.show()
    