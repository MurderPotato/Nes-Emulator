#pragma once

#include <cstdint>

#include "cpu.h"

namespace ops
{
    struct Opcode
    {
        uint16_t (*fetchAddress)(Cpu&); // Addressing Mode Function
        void (*execute)(Cpu&); // Opcode Function
        AddressingMode mode; // Addressing Mode
        Instruction op; // Opcode
    };

    enum class AddressingMode
    {
        IMP, //Implicit
        ACC, //Accumulator
        IMM, //Immediate
        ZPG, //Zero Page
        ZPX, //Zero Page Indexed X
        ZPY, //Zero Page Indexed Y
        ABS, //Absolute
        ABX, //Absolute Indexed X
        ABY, //Absolute Indexed Y
        IND, //Indirect
        INX, //Indirect Indexed X
        INY, //Indirect Indexed Y
        REL  //Relative
    };

    enum class Instruction {
        ADC, AND, ASL, BCC, BCS, BEQ, BIT, BMI,
        BNE, BPL, BRK, BVC, BVS, CLC, CLD, CLI,
        CLV, CMP, CPX, CPY, DEC, DEX, DEY, EOR,
        INC, INX, INY, JMP, JSR, LDA, LDX, LDY,
        LSR, NOP, ORA, PHA, PHP, PLA, PLP, ROL,
        ROR, RTI, RTS, SBC, SEC, SED, SEI, STA,
        STX, STY, TAX, TAY, TSX, TXA, TXS, TYA
    };

    extern const Opcode pointerTable [256];

    // ADDRESSING MODE FUNCTIONS
    void mode_imp();
    void mode_acc();
    void mode_imm();
    void mode_zpg();
    void mode_zpx();
    void mode_zpy();
    void mode_abs();
    void mode_abx();
    void mode_aby();
    void mode_ind();
    void mode_inx();
    void mode_iny();

    // OPCODE FUNCTIONS
    // Access
    void op_lda(); // Official
    void op_sta(); // Official
    void op_ldx(); // Official
    void op_stx(); // Official
    void op_ldy(); // Official
    void op_sty(); // Official
    // Transfer
    void op_tax(); // Official
    void op_txa(); // Official
    void op_tay(); // Official
    void op_tya(); // Official
    // Arithmetic
    void op_adc(); // Official
    void op_sbc(); // Official
    void op_inc(); // Official
    void op_dec(); // Official
    void op_inx(); // Official
    void op_dex(); // Official
    void op_iny(); // Official
    void op_dey(); // Official
    // Shift
    void op_asl(); // Official
    void op_lsr(); // Official
    void op_rol(); // Official
    void op_ror(); // Official
    // Bitwise
    void op_and(); // Official
    void op_ora(); // Official
    void op_eor(); // Official
    void op_bit(); // Official
    // Compare
    void op_cmp(); // Official
    void op_cpx(); // Official
    void op_cpy(); // Official
    // Branch
    void op_bcc(); // Official
    void op_bcs(); // Official
    void op_beq(); // Official
    void op_bne(); // Official
    void op_bpl(); // Official
    void op_bmi(); // Official
    void op_bvc(); // Official
    void op_bvs(); // Official
    // Jump
    void op_jmp(); // Official
    void op_jsr(); // Official
    void op_rts(); // Official
    void op_brk(); // Official
    void op_rti(); // Official
    // Stack
    void op_pha(); // Official
    void op_pla(); // Official
    void op_php(); // Official
    void op_plp(); // Official
    void op_txs(); // Official
    void op_tsx(); // Official
    // Flags
    void op_clc(); // Official
    void op_sec(); // Official
    void op_cli(); // Official
    void op_sei(); // Official
    void op_cld(); // Official
    void op_sed(); // Official
    void op_clv(); // Official
    // Other
    void op_nop(); // Official
}