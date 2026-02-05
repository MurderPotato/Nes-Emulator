
#include <cstdint>

#include "opcodes.h"
#include "cpu.h"

namespace ops
{
    const Opcode pointerTable [256] {
        {nullptr, nullptr, AddressingMode::IMP, Instruction::BRK}
    };








    // OPCODE FUNCTIONS
    // Access
    void op_lda(Cpu&)
    {
        
    }
    void op_sta()
    {

    }
    void op_ldx()
    {

    }
    void op_stx()
    {

    }
    void op_ldy()
    {

    }
    void op_sty()
    {

    }
    // Transfer
    void op_tax()
    {

    }
    void op_txa()
    {

    }
    void op_tay()
    {

    }
    void op_tya()
    {

    }
    // Arithmetic
    void op_adc()
    {

    }
    void op_sbc()
    {

    }
    void op_inc()
    {

    }
    void op_dec()
    {

    }
    void op_inx()
    {

    }
    void op_dex()
    {

    }
    void op_iny()
    {

    }
    void op_dey()
    {

    }
    // Shift
    void op_asl()
    {

    }
    void op_lsr()
    {

    }
    void op_rol()
    {

    }
    void op_ror()
    {

    }
    // Bitwise
    void op_and()
    {

    }
    void op_ora()
    {

    }
    void op_eor()
    {

    }
    void op_bit()
    {

    }
    // Compare
    void op_cmp()
    {

    }
    void op_cpx()
    {

    }
    void op_cpy()
    {

    }
    // Branch
    void op_bcc()
    {

    }
    void op_bcs()
    {

    }
    void op_beq()
    {

    }
    void op_bne()
    {

    }
    void op_bpl()
    {

    }
    void op_bmi()
    {

    }
    void op_bvc()
    {

    }
    void op_bvs()
    {

    }
    // Jump
    void op_jmp()
    {

    }
    void op_jsr()
    {

    }
    void op_rts()
    {

    }
    void op_brk()
    {

    }
    void op_rti()
    {

    }
    // Stack
    void op_pha()
    {

    }
    void op_pla()
    {

    }
    void op_php()
    {

    }
    void op_plp()
    {

    }
    void op_txs()
    {

    }
    void op_tsx()
    {

    }
    // Flags
    void op_clc()
    {

    }
    void op_sec()
    {

    }
    void op_cli()
    {

    }
    void op_sei()
    {

    }
    void op_cld()
    {

    }
    void op_sed()
    {

    }
    void op_clv()
    {

    }
    // Other
    void op_nop()
    {

    }
}