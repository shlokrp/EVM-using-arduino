# Electronic Voting Machine

This project demonstrates an Electronic Voting Machine (EVM) built using Arduino Uno, push buttons, a breadboard, wires, and a small LCD. The EVM offers a cost-effective and simple alternative to traditional paper-based voting, thereby saving manpower.

## Key Features

- **Efficient and Cost-effective:** By eliminating the use of ballot papers, the electronic voting machine (EVM) saves manpower and reduces costs associated with printing and distributing paper ballots.
- **Easy Customization:** The EVM allows for customization of candidate symbols and the number of candidates, making it adaptable to different election scenarios and candidate requirements.
- **User-friendly Interface:** With a simple LCD display, the EVM provides a clear and intuitive interface for voters to cast their votes and view the results, ensuring ease of use for all participants.
## Matariel Required: 
1)  Arduino UNO Board
2)  16x2 LCD Display
3)  Push Button Switch * (no. of candidates +1)
4)  Potentiometer 10k * 1
5)  Connecting wires
6)  Bread Board
   
## Circuit Diagram: 
![image](https://github.com/shlokrp/EVM-using-arduino/assets/94191611/fca2769b-9356-4e5e-9509-31bb38f12201)

## Usage

1. Connect the Arduino Uno, push buttons, breadboard, wires, and small LCD as per the circuit diagram.
2. Upload the provided code to the Arduino Uno.
3. Power on the system.

## How it Works

1. The LCD displays the names of the candidates, along with symbols if added.
2. Voters can press the corresponding push buttons to cast their votes.
3. Each candidate's vote count is incremented accordingly.
4. Upon pressing a specific button (S4 in this code), the voting process ends.
5. The candidate with the highest number of votes is declared the winner.
6. The LCD displays the voting results and the winner's name.

Feel free to modify the code to customize the candidate symbols and the number of candidates.

## Future Scope
- In future, we plan to upgrade the EVM by incorporating the following enhancements:

- **Integration with ESP32 Board or Node MCU**: We will transition from Arduino Uno to the more advanced ESP32 board. This upgrade will provide enhanced processing power, better connectivity by using wifi, and improved compatibility with high storage to manage API.

- **Blockchain Integration with Polygon**: To ensure the security, transparency, and tamperproof nature of the voting process, we will integrate the EVM with Polygon blockchain(Which is **Layer 2 chain of Ethereum, hence it is super fast and cheaper and perfect for such projects.**) Each vote will be recorded as a transaction on the blockchain, providing an immutable and auditable ledger of all voting activities.

- **Tamperproof Records**: Blockchain technology ensures that once a vote is recorded on the blockchain, it cannot be altered or tampered with, thereby enhancing the integrity of the voting process.

- **Transparency and Auditability**: The use of blockchain enables transparent and auditable voting records, allowing stakeholders to verify the authenticity of votes and maintain trust in the system.

-**Enhanced Security**: The decentralized nature of blockchain and the cryptographic techniques employed ensure a high level of security, protecting voting data from unauthorized access or manipulation.

-**Immutable and Verifiable Results**: With the integration of Polygon blockchain, election results become immutable and easily verifiable by all stakeholders, ensuring a fair and trustworthy outcome.


## Working Demo:


https://github.com/shlokrp/EVM-using-arduino/assets/94191611/52831f1c-7532-4032-8405-923d85be49f4



