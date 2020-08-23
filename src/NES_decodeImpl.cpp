//
// Created by protobit on 22/08/2020.
//

#include "NES_CPU.hpp"

NES_CPU::m_InstructionStruct NES_CPU::getInstruction(uint8_t instructionOpCode) {
    switch (instructionOpCode) {
        case 0:
            return m_InstructionStruct{BRK,noAddress};
        case 1:
            return m_InstructionStruct{ORA,zpgX};
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
            return m_InstructionStruct{ORA,zpgY};
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
            return m_InstructionStruct{AND,zpgY};
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
            return m_InstructionStruct{EOR,zpgX};
        case 66:
            break;
        case 67:
            break;
        case 68:
            break;
        case 69:
            break;
        case 70:
            break;
        case 71:
            break;
        case 72:
            break;
        case 73:
            break;
        case 74:
            break;
        case 75:
            break;
        case 76:
            break;
        case 77:
            break;
        case 78:
            break;
        case 79:
            break;
        case 80:
            break;
        case 81:
            break;
        case 82:
            break;
        case 83:
            break;
        case 84:
            break;
        case 85:
            break;
        case 86:
            break;
        case 87:
            break;
        case 88:
            break;
        case 89:
            break;
        case 90:
            break;
        case 91:
            break;
        case 92:
            break;
        case 93:
            break;
        case 94:
            break;
        case 95:
            break;
        case 96:
            break;
        case 97:
            break;
        case 98:
            break;
        case 99:
            break;
        case 100:
            break;
        case 101:
            break;
        case 102:
            break;
        case 103:
            break;
        case 104:
            break;
        case 105:
            break;
        case 106:
            break;
        case 107:
            break;
        case 108:
            break;
        case 109:
            break;
        case 110:
            break;
        case 111:
            break;
        case 112:
            break;
        case 113:
            break;
        case 114:
            break;
        case 115:
            break;
        case 116:
            break;
        case 117:
            break;
        case 118:
            break;
        case 119:
            break;
        case 120:
            break;
        case 121:
            break;
        case 122:
            break;
        case 123:
            break;
        case 124:
            break;
        case 125:
            break;
        case 126:
            break;
        case 127:
            break;
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