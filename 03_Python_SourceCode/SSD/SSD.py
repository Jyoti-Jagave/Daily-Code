class SSD:
    def __init__(self,
               sd_brand:str,
               sd_manufacturer:str,
               sd_series:str,
               sd_colour:str,
               sd_form_Factor:str,
               sd_item_Height:str,
               sd_item_Width:str,
               sd_standing_screen_display_size:str,
               sd_product_Dimensions:str,
               sd_item_model_number:str,
               sd_computer_Memory_Type:str,
               sd_hard_Drive_Size:str,
               sd_hard_Disk_Description:str,
               sd_hard_Drive_Interface:str,
               sd_hardware_Platform:str,
               sd_are_Batteries_Included:str,
               sd_lithium_Battery_Energy_Content:str,
               sd_lithium_Battery_Weight:str,
               sd_number_of_Lithium_Metal_Cells:str,
               sd_included_Components:str,
               sd_country_of_Origin:str,
               sd_item_Weight:str
               ):


            self.brand                           = sd_brand
            self.manufacturer                    = sd_manufacturer
            self.series                          = sd_series
            self.colour                          = sd_colour
            self.form_Factor                     = sd_form_Factor
            self.item_Height                     = sd_item_Height
            self.item_Width                      = sd_item_Width
            self.standing_screen_display_size    = sd_standing_screen_display_size
            self.product_Dimensions              = sd_product_Dimensions
            self.item_model_number               = sd_item_model_number
            self.computer_Memory_Type            = sd_computer_Memory_Type
            self.hard_Drive_Size                 = sd_hard_Drive_Size
            self.hard_Disk_Description           = sd_hard_Disk_Description
            self.hard_Drive_Interface            = sd_hard_Drive_Interface
            self.hardware_Platform               = sd_hardware_Platform
            self.are_Batteries_Included          = sd_are_Batteries_Included
            self.lithium_Battery_Energy_Content  = sd_lithium_Battery_Energy_Content
            self.lithium_Battery_Weight          = sd_lithium_Battery_Weight
            self.number_of_Lithium_Metal_Cells   = sd_number_of_Lithium_Metal_Cells
            self.included_Components             = sd_included_Components
            self.country_of_Origin               = sd_country_of_Origin
            self.item_Weight                     = sd_item_Weight

    def show(self):
          print(f'Brand:     {self.brand}')
          print(f'Manufacturer:    {self.manufacturer}')
          print(f'Series:    {self.series}')
          print(f'Colour:   {self.colour}')
          print(f'Form Factor:  {self.form_Factor}')
          print(f'Item Height :  {self.item_Height }')
          print(f'Item Width:   {self.item_Width}')
          print(f'Standing screen display size:  {self.standing_screen_display_size}')
          print(f'Product Dimensions:   {self.product_Dimensions}')
          print(f'Item model number:  {self.item_model_number}')
          print(f'Computer Memory Type :   {self.computer_Memory_Type }')
          print(f'Hard Drive Size:   {self.hard_Drive_Size}')
          print(f'Hard Disk Description:   {self.hard_Disk_Description}')
          print(f'Hard Drive Interface:  {self.hard_Drive_Interface}')
          print(f'Hardware Platform:  {self.hardware_Platform}')
          print(f'Are Batteries Included:  {self.are_Batteries_Included}')
          print(f'Lithium Battery Energy Content:  {self.lithium_Battery_Energy_Content}')
          print(f'Lithium Battery Weight:  {self.lithium_Battery_Weight}')
          print(f'Number of Lithium Metal Cells:  {self.number_of_Lithium_Metal_Cells}')
          print(f'Included Components:  {self.included_Components}')
          print(f'Country of Origin:  {self.country_of_Origin}')
          print(f'Item Weight:  {self.item_Weight}')

mySSD = SSD(
      'Samsung',

      (
          'Samsung, Samsung Electronics Co., Ltd. Semiconductor Business Test & Package Center, #158 Baebang-Ro Baebang-Eup, Asan-city Chungcheongnam-Do, 31489 Republic of Korea'
      ),

      '990 pro 1tb',
      'Black 990 PRO 1TB',
      'M.2',
      '2.3 Millimeters',
      '22 Millimeters',
      '16 Inches',
      '8 x 2.2 x 0.23 cm; 54 g',
      'MZ-V9P1T0BW',
      'DDR5 SDRAM',
      '1 TB',
      'Solid State Drive',
      'Solid State',
      'PC, Mac',
      'No',
      '2.6 Watt Hours',
      '5 g',
      '1',
      'SSD , User manual',
      'Republic of Korea',
      '54 g'
)

mySSD.show()
      