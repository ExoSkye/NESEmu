//
// Created by protobit on 22/08/2020.
//

#include "NES_CPU.hpp"

NES_CPU::m_InstructionStruct NES_CPU::getInstruction(uint8_t instructionOpCode) {
    switch (instructionOpCode) {
        case 0:
            return m_InstructionStruct{BRK,noAddress};
        case 1:
            return m_InstructionStruct{ORA,zpgX, all};
        case 2:
            return m_InstructionStruct{noInst,noAddress};
        case 3:
            return m_InstructionStruct{noInst,noAddress};
        case 4:
            return m_InstructionStruct{noInst,noAddress};
        case 5:
            return m_InstructionStruct{ORA,zpg};
        case 6:
            return m_InstructionStruct{ASL,zpg};
        case 7:
            return m_InstructionStruct{noInst,noAddress};
        case 8:
            return m_InstructionStruct{PHP,noAddress};
        case 9:
            return m_InstructionStruct{ORA,imm};
        case 10:
            return m_InstructionStruct{ASL,A};
        case 11:
            return m_InstructionStruct{noInst,noAddress};
        case 12:
            return m_InstructionStruct{noInst,noAddress};
        case 13:
            return m_InstructionStruct{ORA,absolute};
        case 14:
            return m_InstructionStruct{ASL,absolute};
        case 15:
            return m_InstructionStruct{noInst,noAddress};
        case 16:
            return m_InstructionStruct{BPL,rel};
        case 17:
            return m_InstructionStruct{ORA,zpgY,zpgIndirect};
        case 18:
            return m_InstructionStruct{noInst,noAddress};
        case 19:
            return m_InstructionStruct{noInst,noAddress};
        case 20:
            return m_InstructionStruct{noInst,noAddress};
        case 21:
            return m_InstructionStruct{ORA,zpgX};
        case 22:
            return m_InstructionStruct{ASL,zpgX};
        case 23:
            return m_InstructionStruct{noInst,noAddress};
        case 24:
            return m_InstructionStruct{CLC,noAddress};
        case 25:
            return m_InstructionStruct{ORA,absY};
        case 26:
            return m_InstructionStruct{noInst,noAddress};
        case 27:
            return m_InstructionStruct{noInst,noAddress};
        case 28:
            return m_InstructionStruct{noInst,noAddress};
        case 29:
            return m_InstructionStruct{ORA,absX};
        case 30:
            return m_InstructionStruct{ASL,absX};
        case 31:
            return m_InstructionStruct{noInst,noAddress};
        case 32:
            return m_InstructionStruct{JSR,absolute};
        case 33:
            return m_InstructionStruct{AND,zpgX};
        case 34:
            return m_InstructionStruct{noInst,noAddress};
        case 35:
            return m_InstructionStruct{noInst,noAddress};
        case 36:
            return m_InstructionStruct{BIT,zpg};
        case 37:
            return m_InstructionStruct{AND,zpg};
        case 38:
            return m_InstructionStruct{ROL,zpg};
        case 39:
            return m_InstructionStruct{noInst,noAddress};
        case 40:
            return m_InstructionStruct{PLP,noAddress};
        case 41:
            return m_InstructionStruct{AND,imm};
        case 42:
            return m_InstructionStruct{ROL,A};
        case 43:
            return m_InstructionStruct{noInst,noAddress};
        case 44:
            return m_InstructionStruct{BIT,absolute};
        case 45:
            return m_InstructionStruct{AND,absolute};
        case 46:
            return m_InstructionStruct{ROL,absolute};
        case 47:
            return m_InstructionStruct{noInst,noAddress};
        case 48:
            return m_InstructionStruct{BMI,rel};
        case 49:
            return m_InstructionStruct{AND,zpgY,zpgIndirect};
        case 50:
            return m_InstructionStruct{noInst,noAddress};
        case 51:
            return m_InstructionStruct{noInst,noAddress};
        case 52:
            return m_InstructionStruct{noInst,noAddress};
        case 53:
            return m_InstructionStruct{AND,zpgX};
        case 54:
            return m_InstructionStruct{ROL,zpgX};
        case 55:
            return m_InstructionStruct{noInst,noAddress};
        case 56:
            return m_InstructionStruct{SEC,noAddress};
        case 57:
            return m_InstructionStruct{AND,absY};
        case 58:
            return m_InstructionStruct{noInst,noAddress};
        case 59:
            return m_InstructionStruct{noInst,noAddress};
        case 60:
            return m_InstructionStruct{noInst,noAddress};
        case 61:
            return m_InstructionStruct{AND,absX};
        case 62:
            return m_InstructionStruct{ROL,absX};
        case 63:
            return m_InstructionStruct{noInst,noAddress};
        case 64:
            return m_InstructionStruct{RTI, noAddress};
        case 65:
            return m_InstructionStruct{EOR,zpgX,all};
        case 66:
            return m_InstructionStruct{noInst,noAddress};
        case 67:
            return m_InstructionStruct{noInst,noAddress};
        case 68:
            return m_InstructionStruct{noInst,noAddress};
        case 69:
            return m_InstructionStruct{EOR,zpg};
        case 70:
            return m_InstructionStruct{LSR,zpg};
        case 71:
            return m_InstructionStruct{noInst,noAddress};
        case 72:
            return m_InstructionStruct{PHA,noAddress};
        case 73:
            return m_InstructionStruct{EOR,imm};
        case 74:
            return m_InstructionStruct{LSR,A};
        case 75:
            return m_InstructionStruct{noInst,noAddress};
        case 76:
            return m_InstructionStruct{JMP,absolute};
        case 77:
            return m_InstructionStruct{EOR,absolute};
        case 78:
            return m_InstructionStruct{LSR,absolute};
        case 79:
            return m_InstructionStruct{noInst,noAddress};
        case 80:
            return m_InstructionStruct{BVC,rel};
        case 81:
            return m_InstructionStruct{EOR,zpgX,zpgIndirect};
        case 82:
            return m_InstructionStruct{noInst,noAddress};
        case 83:
            return m_InstructionStruct{noInst,noAddress};
        case 84:
            return m_InstructionStruct{noInst,noAddress};
        case 85:
            return m_InstructionStruct{EOR,zpg};
        case 86:
            return m_InstructionStruct{LSR,zpgX};
        case 87:
            return m_InstructionStruct{noInst,noAddress};
        case 88:
            return m_InstructionStruct{PHA,noAddress};
        case 89:
            return m_InstructionStruct{EOR,imm};
        case 90:
            return m_InstructionStruct{LSR,A};
        case 91:
            return m_InstructionStruct{noInst,noAddress};
        case 92:
            return m_InstructionStruct{JMP,absolute};
        case 93:
            return m_InstructionStruct{EOR,absolute};
        case 94:
            return m_InstructionStruct{LSR,absolute};
        case 95:
            return m_InstructionStruct{noInst,noAddress};
        case 96:
            return m_InstructionStruct{RTS,noAddress};
        case 97:
            return m_InstructionStruct{ADC,zpgX,all};
        case 98:
            return m_InstructionStruct{noInst,noAddress};
        case 99:
            return m_InstructionStruct{noInst,noAddress};
        case 100:
            return m_InstructionStruct{noInst,noAddress};
        case 101:
            return m_InstructionStruct{ADC,zpg};
        case 102:
            return m_InstructionStruct{ROR,zpg};
        case 103:
            return m_InstructionStruct{noInst,noAddress};
        case 104:
            return m_InstructionStruct{PLA,noAddress};
        case 105:
            return m_InstructionStruct{ADC,imm};
        case 106:
            return m_InstructionStruct{ROR,A};
        case 107:
            return m_InstructionStruct{noInst,noAddress};
        case 108:
            return m_InstructionStruct{JMP,absolute,all};
        case 109:
            return m_InstructionStruct{ADC,absolute};
        case 110:
            return m_InstructionStruct{ROR,absolute};
        case 111:
            return m_InstructionStruct{noInst,noAddress};
        case 112:
            return m_InstructionStruct{BVS,rel};
        case 113:
            return m_InstructionStruct{ADC,zpgY,zpgIndirect};
        case 114:
            return m_InstructionStruct{noInst,noAddress};
        case 115:
            return m_InstructionStruct{noInst,noAddress};
        case 116:
            return m_InstructionStruct{noInst,noAddress};
        case 117:
            return m_InstructionStruct{ADC,zpgX};
        case 118:
            return m_InstructionStruct{ROR,zpgX};
        case 119:
            return m_InstructionStruct{noInst,noAddress};
        case 120:
            return m_InstructionStruct{SEI};
        case 121:
            return m_InstructionStruct{ADC,absY};
        case 122:
            return m_InstructionStruct{noInst,noAddress};
        case 123:
            return m_InstructionStruct{noInst,noAddress};
        case 124:
            return m_InstructionStruct{noInst,noAddress};
        case 125:
            return m_InstructionStruct{ADC,absX};
        case 126:
            return m_InstructionStruct{ROR,absX};
        case 127:
            return m_InstructionStruct{noInst,noAddress};
        case 128:
            break;
        case 129:
            break;
        case 130:
            break;
        case 131:
            break;
        case 132:
            break;
        case 133:
            break;
        case 134:
            break;
        case 135:
            break;
        case 136:
            break;
        case 137:
            break;
        case 138:
            break;
        case 139:
            break;
        case 140:
            break;
        case 141:
            break;
        case 142:
            break;
        case 143:
            break;
        case 144:
            break;
        case 145:
            break;
        case 146:
            break;
        case 147:
            break;
        case 148:
            break;
        case 149:
            break;
        case 150:
            break;
        case 151:
            break;
        case 152:
            break;
        case 153:
            break;
        case 154:
            break;
        case 155:
            break;
        case 156:
            break;
        case 157:
            break;
        case 158:
            break;
        case 159:
            break;
        case 160:
            break;
        case 161:
            break;
        case 162:
            break;
        case 163:
            break;
        case 164:
            break;
        case 165:
            break;
        case 166:
            break;
        case 167:
            break;
        case 168:
            break;
        case 169:
            break;
        case 170:
            break;
        case 171:
            break;
        case 172:
            break;
        case 173:
            break;
        case 174:
            break;
        case 175:
            break;
        case 176:
            break;
        case 177:
            break;
        case 178:
            break;
        case 179:
            break;
        case 180:
            break;
        case 181:
            break;
        case 182:
            break;
        case 183:
            break;
        case 184:
            break;
        case 185:
            break;
        case 186:
            break;
        case 187:
            break;
        case 188:
            break;
        case 189:
            break;
        case 190:
            break;
        case 191:
            break;
        case 192:
            break;
        case 193:
            break;
        case 194:
            break;
        case 195:
            break;
        case 196:
            break;
        case 197:
            break;
        case 198:
            break;
        case 199:
            break;
        case 200:
            break;
        case 201:
            break;
        case 202:
            break;
        case 203:
            break;
        case 204:
            break;
        case 205:
            break;
        case 206:
            break;
        case 207:
            break;
        case 208:
            break;
        case 209:
            break;
        case 210:
            break;
        case 211:
            break;
        case 212:
            break;
        case 213:
            break;
        case 214:
            break;
        case 215:
            break;
        case 216:
            break;
        case 217:
            break;
        case 218:
            break;
        case 219:
            break;
        case 220:
            break;
        case 221:
            break;
        case 222:
            break;
        case 223:
            break;
        case 224:
            break;
        case 225:
            break;
        case 226:
            break;
        case 227:
            break;
        case 228:
            break;
        case 229:
            break;
        case 230:
            break;
        case 231:
            break;
        case 232:
            break;
        case 233:
            break;
        case 234:
            break;
        case 235:
            break;
        case 236:
            break;
        case 237:
            break;
        case 238:
            break;
        case 239:
            break;
        case 240:
            break;
        case 241:
            break;
        case 242:
            break;
        case 243:
            break;
        case 244:
            break;
        case 245:
            break;
        case 246:
            break;
        case 247:
            break;
        case 248:
            break;
        case 249:
            break;
        case 250:
            break;
        case 251:
            break;
        case 252:
            break;
        case 253:
            break;
        case 254:
            break;
        case 255:
            break;
    }
}