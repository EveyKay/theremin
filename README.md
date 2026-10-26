# theremin
halflife week 3!!! A pretty cool basic theremin for all who want one but don't want to justify the price to buy a regular one 
## Features/parts
- runs on an arduino uno
- regular cheap arduino speaker
- two ultrasonic sensors
- one ultrasonic sensor controls the pitch and the other controls the volume
- it has a cool case
- powered just by plugging in the Arduino 
## Wireing
- Sensor 1 SIG → D9, Sensor 2 SIG → D10
- Speaker + → D11 through a 100–220Ω resistor, speaker − → GND
- All sensor VCC → 5V, all sensor GND → GND
- Here is a picture of the secmatic:
  <img width="1340" height="1088" alt="20261025_215046" src="https://github.com/user-attachments/assets/b35d4c27-3c7c-4b86-835f-8eb86ae41c71" />
## Cad/ assembly 
I made a cool shell for the theremin to go in! to print the shell put all the settings to the basic ones and turn on supports. After printing place the Arduino Uno so that the wire port is coming out of the square hole on the side. Next take the speaker and place it so it is facing out of the grided hole and glue it in place, next take the two distance sensors and place them so the circle parts are coming out of the circle part of the lid, make sure the wires are facing inwards, and glue them in place. lastly wire acording to the scematic above.
<img width="2000" height="1500" alt="20261025_215446" src="https://github.com/user-attachments/assets/1d23bb73-3b1f-4f90-ab50-5209e1936298" />
Onshape link: https://cad.onshape.com/documents/4ba3b7f47f6c7accf07acdc9/w/f73b4674381c46b6cf9a3e9f/e/5ae37a8600cad3c39466f5c0?renderMode=0&uiState=6adebc58c7fbec0a36948eea 
## code
I coded the theremin with tinkercad, it is a basic prototype code but it is still in the repostory.
## Bill of materials

| Item | Qty | Supplier | Cost/item | Total cost | Link |
|------|-----|----------|-----------|------------|------|
| Arduino Uno | 1 | Hczykya | $8.99 | $8.99 | [Link](https://www.amazon.com/gp/product/B0FMR3NRHH/ref=ox_sc_act_title_3?smid=A39C1MVXPSK2PK&psc=1) |
| Ultrasonic distance sensors | 2 | WWZMDiB Store | $3.00 | $6.00 | [Link](https://www.amazon.com/gp/product/B0B1MJJLJP/ref=ox_sc_act_title_2?smid=A1YZW40LYQY3L1&psc=1) |
| Speaker | 1 | Shutao | $4.99 | $4.99 | [Link](https://www.amazon.com/gp/product/B0FN7CDGVR/ref=ox_sc_act_title_1?smid=A36XZ2DOHZAGBS&psc=1) |
| PLA filament | 1 | Bambu | $2.30 | $2.30 | [Link](https://us.store.bambulab.com/products/pla-basic-filament?id=41078274654344) |
| Estimated total shipping, free shipping | 1 | | | $0.00 | |

**Total: $22.28**
