/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046b4ddc; end: 1046b50d3;  */

undefined1  [16] FUN_1046b4ddc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe600000000000000;
  uVar2 = 0x566565726874;
  switch(param_1) {
  case 0:
    goto code_r0x0001046b4e28;
  case 1:
    uVar2 = 0x6174736e49707061;
    uVar3 = 0xea00000000006c6c;
code_r0x0001046b4e28:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar11._8_8_ = 0x800000010f20b6f0;
    auVar11._0_8_ = 0xd000000000000018;
    return auVar11;
  case 3:
    auVar13._8_8_ = 0xed00006567617062;
    auVar13._0_8_ = 0x655765746f6d6572;
    return auVar13;
  case 4:
    auVar8._8_8_ = 0x800000010f20be10;
    auVar8._0_8_ = 0xd000000000000017;
    return auVar8;
  case 5:
    auVar17._8_8_ = 0xe500000000000000;
    auVar17._0_8_ = 0x79726f7473;
    return auVar17;
  case 6:
    auVar20._8_8_ = 0x800000010f20bdf0;
    auVar20._0_8_ = 0xd000000000000012;
    return auVar20;
  case 7:
    auVar14._8_8_ = 0xe600000000000000;
    auVar14._0_8_ = 0x6c6c69466f6e;
    return auVar14;
  case 8:
    auVar23._8_8_ = 0x800000010f20bdd0;
    auVar23._0_8_ = 0xd000000000000014;
    return auVar23;
  case 9:
    auVar10._8_8_ = 0xe800000000000000;
    auVar10._0_8_ = 0x736e654c6f546461;
    return auVar10;
  case 10:
    auVar22._8_8_ = 0xea00000000006e6f;
    auVar22._0_8_ = 0x697463656c6c6f63;
    return auVar22;
  case 0xb:
    auVar7._8_8_ = 0xec0000006c657375;
    auVar7._0_8_ = 0x6f726143736e656c;
    return auVar7;
  case 0xc:
    auVar9._8_8_ = 0xee006c6573756f72;
    auVar9._0_8_ = 0x61437265746c6966;
    return auVar9;
  case 0xd:
    auVar19._8_8_ = 0xe800000000000000;
    auVar19._0_8_ = 0x6c6c61436f546461;
    return auVar19;
  case 0xe:
    auVar6._8_8_ = 0xeb00000000656761;
    auVar6._0_8_ = 0x7373654d6f546461;
    return auVar6;
  case 0xf:
    auVar12._8_8_ = 0xe900000000000065;
    auVar12._0_8_ = 0x63616c506f546461;
    return auVar12;
  case 0x10:
    auVar5._8_8_ = 0xee006e6f69746172;
    auVar5._0_8_ = 0x656e65476461656c;
    return auVar5;
  case 0x11:
    auVar15._8_8_ = 0xe800000000000000;
    auVar15._0_8_ = 0x65736163776f6873;
    return auVar15;
  case 0x12:
    auVar21._8_8_ = 0x800000010f20bdb0;
    auVar21._0_8_ = 0xd000000000000015;
    return auVar21;
  case 0x13:
    auVar25._8_8_ = 0xe600000000000000;
    auVar25._0_8_ = 0x796576727573;
    return auVar25;
  case 0x14:
    auVar16._8_8_ = 0xe800000000000000;
    auVar16._0_8_ = 0x7265646e696d6572;
    return auVar16;
  case 0x15:
    auVar18._8_8_ = 0xeb00000000706450;
    auVar18._0_8_ = 0x656372656d6d6f63;
    return auVar18;
  case 0x16:
    auVar24._8_8_ = 0xec00000079726f74;
    auVar24._0_8_ = 0x5364657865646e69;
    return auVar24;
  case 0x17:
    auVar26._8_8_ = 0xe700000000000000;
    auVar26._0_8_ = 0x6e776f6e6b6e75;
    return auVar26;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798820,&uStack_18,&UNK_110798820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b50d4);
    (*pcVar1)();
  }
}



/* Entry: 1046b50d4; end: 1046b50ff;  */

void FUN_1046b50d4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001042a6cc4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b5100; end: 1046b510b;  */

void FUN_1046b5100(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b510c; end: 1046b51b7;  */

void FUN_1046b510c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b51b8; end: 1046b51cb;  */

bool FUN_1046b51b8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b51cc; end: 1046b5227;  */

void FUN_1046b51cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046b52d0();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046b5228; end: 1046b5273;  */

void FUN_1046b5228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046b52d0();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046b5274; end: 1046b527f;  */

undefined1  [16] FUN_1046b5274(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe600000000000000;
  uVar2 = 0x566565726874;
  switch(uStack_18) {
  case 0:
    goto code_r0x0001046b4e28;
  case 1:
    uVar2 = 0x6174736e49707061;
    uVar3 = 0xea00000000006c6c;
code_r0x0001046b4e28:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar11._8_8_ = 0x800000010f20b6f0;
    auVar11._0_8_ = 0xd000000000000018;
    return auVar11;
  case 3:
    auVar13._8_8_ = 0xed00006567617062;
    auVar13._0_8_ = 0x655765746f6d6572;
    return auVar13;
  case 4:
    auVar8._8_8_ = 0x800000010f20be10;
    auVar8._0_8_ = 0xd000000000000017;
    return auVar8;
  case 5:
    auVar17._8_8_ = 0xe500000000000000;
    auVar17._0_8_ = 0x79726f7473;
    return auVar17;
  case 6:
    auVar20._8_8_ = 0x800000010f20bdf0;
    auVar20._0_8_ = 0xd000000000000012;
    return auVar20;
  case 7:
    auVar14._8_8_ = 0xe600000000000000;
    auVar14._0_8_ = 0x6c6c69466f6e;
    return auVar14;
  case 8:
    auVar23._8_8_ = 0x800000010f20bdd0;
    auVar23._0_8_ = 0xd000000000000014;
    return auVar23;
  case 9:
    auVar10._8_8_ = 0xe800000000000000;
    auVar10._0_8_ = 0x736e654c6f546461;
    return auVar10;
  case 10:
    auVar22._8_8_ = 0xea00000000006e6f;
    auVar22._0_8_ = 0x697463656c6c6f63;
    return auVar22;
  case 0xb:
    auVar7._8_8_ = 0xec0000006c657375;
    auVar7._0_8_ = 0x6f726143736e656c;
    return auVar7;
  case 0xc:
    auVar9._8_8_ = 0xee006c6573756f72;
    auVar9._0_8_ = 0x61437265746c6966;
    return auVar9;
  case 0xd:
    auVar19._8_8_ = 0xe800000000000000;
    auVar19._0_8_ = 0x6c6c61436f546461;
    return auVar19;
  case 0xe:
    auVar6._8_8_ = 0xeb00000000656761;
    auVar6._0_8_ = 0x7373654d6f546461;
    return auVar6;
  case 0xf:
    auVar12._8_8_ = 0xe900000000000065;
    auVar12._0_8_ = 0x63616c506f546461;
    return auVar12;
  case 0x10:
    auVar5._8_8_ = 0xee006e6f69746172;
    auVar5._0_8_ = 0x656e65476461656c;
    return auVar5;
  case 0x11:
    auVar15._8_8_ = 0xe800000000000000;
    auVar15._0_8_ = 0x65736163776f6873;
    return auVar15;
  case 0x12:
    auVar21._8_8_ = 0x800000010f20bdb0;
    auVar21._0_8_ = 0xd000000000000015;
    return auVar21;
  case 0x13:
    auVar25._8_8_ = 0xe600000000000000;
    auVar25._0_8_ = 0x796576727573;
    return auVar25;
  case 0x14:
    auVar16._8_8_ = 0xe800000000000000;
    auVar16._0_8_ = 0x7265646e696d6572;
    return auVar16;
  case 0x15:
    auVar18._8_8_ = 0xeb00000000706450;
    auVar18._0_8_ = 0x656372656d6d6f63;
    return auVar18;
  case 0x16:
    auVar24._8_8_ = 0xec00000079726f74;
    auVar24._0_8_ = 0x5364657865646e69;
    return auVar24;
  case 0x17:
    auVar26._8_8_ = 0xe700000000000000;
    auVar26._0_8_ = 0x6e776f6e6b6e75;
    return auVar26;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798820,&uStack_18,&UNK_110798820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b50d4);
    (*pcVar1)();
  }
}



/* Entry: 1046b5280; end: 1046b52bf;  */

void FUN_1046b5280(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29c18;
  _swift_getWitnessTable(&UNK_10dd29c18,&UNK_110798820);
  puRam000000011308d4a0 = puVar1;
  return;
}



/* Entry: 1046b52c0; end: 1046b52cf;  */

undefined1  [16] FUN_1046b52c0(void)

{
  return ZEXT816(0x110798820);
}



/* Entry: 1046b52d0; end: 1046b530f;  */

void FUN_1046b52d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29ba0;
  _swift_getWitnessTable(&UNK_10dd29ba0,&UNK_110798820);
  puRam000000011308d4a8 = puVar1;
  return;
}



/* Entry: 1046b5310; end: 1046b5327;  */

bool FUN_1046b5310(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b5328; end: 1046b5367;  */

void FUN_1046b5328(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29cc0;
  _swift_getWitnessTable(&UNK_10dd29cc0,&UNK_1107988c8);
  puRam000000011308d4b0 = puVar1;
  return;
}



/* Entry: 1046b5368; end: 1046b5413;  */

void FUN_1046b5368(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b5414; end: 1046b543b;  */

void FUN_1046b5414(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1046b543c; end: 1046b54b3;  */

undefined1  [16] FUN_1046b543c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 1) {
    uVar3 = 0xea00000000006c6c;
    uVar2 = 0x6950446565726874;
  }
  else {
    if (lStack_18 != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b54b4);
      (*pcVar1)();
    }
    uVar3 = 0x800000010f20be30;
    uVar2 = 0xd000000000000013;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b54b4; end: 1046b54d7;  */

undefined1  [16] FUN_1046b54b4(void)

{
  return ZEXT816(0x1107988c8);
}



/* Entry: 1046b54d8; end: 1046b5503;  */

void FUN_1046b54d8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b56b0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b5504; end: 1046b550f;  */

void FUN_1046b5504(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b5510; end: 1046b55fb;  */

void FUN_1046b5510(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b55fc; end: 1046b56af;  */

undefined1  [16] FUN_1046b55fc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b5694:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b56b0);
        (*pcVar1)();
      }
      uVar3 = 0xe400000000000000;
      uVar2 = 0x70616e73;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xeb00000000657669;
    uVar2 = 0x74614e7070416e69;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b5694;
    uVar3 = 0xe800000000000000;
    uVar2 = 0x6c616e7265747865;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b56b0; end: 1046b56c7;  */

undefined1  [16] FUN_1046b56b0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b56c8; end: 1046b57f7;  */

void FUN_1046b56c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d4c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d4c8;
  func_0x00010002969c(0x11308d4c8,&UNK_10dd29e58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d4c0 = puVar2;
  return;
}



/* Entry: 1046b57f8; end: 1046b580b;  */

bool FUN_1046b57f8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b580c; end: 1046b5837;  */

void FUN_1046b580c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b58f8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b5838; end: 1046b5843;  */

void FUN_1046b5838(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b5844; end: 1046b58ef;  */

void FUN_1046b5844(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b58f0; end: 1046b590b;  */

undefined1  [16] FUN_1046b58f0(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      auVar3._8_8_ = 0xe500000000000000;
      auVar3._0_8_ = 0x7465736e75;
      return auVar3;
    }
    if (lStack_18 == 1) {
      auVar6._8_8_ = 0xe700000000000000;
      auVar6._0_8_ = 0x73736563637573;
      return auVar6;
    }
  }
  else {
    if (lStack_18 == 2) {
      auVar4._8_8_ = 0xea00000000007373;
      auVar4._0_8_ = 0x6572676f72506e69;
      return auVar4;
    }
    if (lStack_18 == 3) {
      auVar2._8_8_ = 0xec000000726f7272;
      auVar2._0_8_ = 0x456b726f7774656e;
      return auVar2;
    }
    if (lStack_18 == 4) {
      auVar5._8_8_ = 0x800000010f20be50;
      auVar5._0_8_ = 0xd000000000000015;
      return auVar5;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_1107989f8,&lStack_18,&UNK_1107989f8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b57f8);
  (*pcVar1)();
}



/* Entry: 1046b590c; end: 1046b594b;  */

void FUN_1046b590c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29ee0;
  _swift_getWitnessTable(&UNK_10dd29ee0,&UNK_1107989f8);
  puRam000000011308d518 = puVar1;
  return;
}



/* Entry: 1046b594c; end: 1046b596f;  */

undefined1  [16] FUN_1046b594c(void)

{
  return ZEXT816(0x1107989f8);
}



/* Entry: 1046b5970; end: 1046b599b;  */

void FUN_1046b5970(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b5b10();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b599c; end: 1046b59a7;  */

void FUN_1046b599c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b59a8; end: 1046b5a53;  */

void FUN_1046b59a8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b5a54; end: 1046b5b0f;  */

undefined1  [16] FUN_1046b5a54(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b5af4:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b5b10);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x746c7561666564;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0x800000010f20be70;
    uVar2 = 0xd000000000000010;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b5af4;
    uVar3 = 0xea0000000000796c;
    uVar2 = 0x6e4f76614e627573;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b5b10; end: 1046b5b23;  */

undefined1  [16] FUN_1046b5b10(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b5b24; end: 1046b5b63;  */

void FUN_1046b5b24(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29fd0;
  _swift_getWitnessTable(&UNK_10dd29fd0,&UNK_110798a80);
  puRam000000011308d520 = puVar1;
  return;
}



/* Entry: 1046b5b64; end: 1046b5b87;  */

undefined1  [16] FUN_1046b5b64(void)

{
  return ZEXT816(0x110798a80);
}



/* Entry: 1046b5b88; end: 1046b5bb3;  */

void FUN_1046b5b88(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b5d28();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b5bb4; end: 1046b5bbf;  */

void FUN_1046b5bb4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b5bc0; end: 1046b5c6b;  */

void FUN_1046b5bc0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b5c6c; end: 1046b5d27;  */

undefined1  [16] FUN_1046b5c6c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b5d0c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b5d28);
        (*pcVar1)();
      }
      uVar3 = 0xea00000000006576;
      uVar2 = 0x6974636964657270;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x6e4974706f;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b5d0c;
    uVar3 = 0xec000000796c6e4f;
    uVar2 = 0x7470697263534167;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b5d28; end: 1046b5d3b;  */

undefined1  [16] FUN_1046b5d28(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b5d3c; end: 1046b5d7b;  */

void FUN_1046b5d3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a0c0;
  _swift_getWitnessTable(&UNK_10dd2a0c0,&UNK_110798b08);
  puRam000000011308d528 = puVar1;
  return;
}



/* Entry: 1046b5d7c; end: 1046b5d9f;  */

undefined1  [16] FUN_1046b5d7c(void)

{
  return ZEXT816(0x110798b08);
}



/* Entry: 1046b5da0; end: 1046b5dcb;  */

void FUN_1046b5da0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b5f3c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b5dcc; end: 1046b5dd7;  */

void FUN_1046b5dcc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b5dd8; end: 1046b5e83;  */

void FUN_1046b5dd8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b5e84; end: 1046b5f3b;  */

undefined1  [16] FUN_1046b5e84(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b5f20:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b5f3c);
        (*pcVar1)();
      }
      uVar3 = 0xe600000000000000;
      uVar2 = 0x6e6f74747562;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x6570697773;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b5f20;
    uVar3 = 0xed0000646e756f72;
    uVar2 = 0x676b636142707061;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b5f3c; end: 1046b5f63;  */

undefined1  [16] FUN_1046b5f3c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b5f64; end: 1046b5f8f;  */

void FUN_1046b5f64(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b6128();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b5f90; end: 1046b5f9b;  */

void FUN_1046b5f90(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b5f9c; end: 1046b6047;  */

void FUN_1046b5f9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b6048; end: 1046b6127;  */

undefined1  [16] FUN_1046b6048(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0x800000010f20be90;
      uVar2 = 0xd000000000000015;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b610c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b6128);
        (*pcVar1)();
      }
      uVar3 = 0xee006465646c6f42;
      uVar2 = 0x676e696c69617274;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xef6465646c6f626e;
    uVar2 = 0x55676e696461656c;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b610c;
    uVar3 = 0xed00006465646c6f;
    uVar2 = 0x42676e696461656c;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b6128; end: 1046b613b;  */

undefined1  [16] FUN_1046b6128(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b613c; end: 1046b617b;  */

void FUN_1046b613c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a2a0;
  _swift_getWitnessTable(&UNK_10dd2a2a0,&UNK_110798c18);
  puRam000000011308d530 = puVar1;
  return;
}



/* Entry: 1046b617c; end: 1046b618b;  */

undefined1  [16] FUN_1046b617c(void)

{
  return ZEXT816(0x110798c18);
}



/* Entry: 1046b618c; end: 1046b629b;  */

undefined1  [16] FUN_1046b618c(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lStack_18;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar4._8_8_ = 0xe500000000000000;
      auVar4._0_8_ = 0x7465736e75;
      return auVar4;
    }
    if (param_1 == 1) {
      auVar2._8_8_ = 0xed0000746e657645;
      auVar2._0_8_ = 0x6c6c69666f747561;
      return auVar2;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0xe800000000000000;
      auVar6._0_8_ = 0x746e6576456d7361;
      return auVar6;
    }
  }
  else {
    if (param_1 == 3) {
      auVar5._8_8_ = 0x800000010f20beb0;
      auVar5._0_8_ = 0xd000000000000010;
      return auVar5;
    }
    if (param_1 == 4) {
      auVar3._8_8_ = 0xef746e6576456e6f;
      auVar3._0_8_ = 0x697461676976616e;
      return auVar3;
    }
    if (param_1 == 5) {
      auVar7._8_8_ = 0xe900000000000074;
      auVar7._0_8_ = 0x6e65764572657375;
      return auVar7;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110798ca0,&lStack_18,&UNK_110798ca0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b629c);
  (*pcVar1)();
}



/* Entry: 1046b629c; end: 1046b62c7;  */

void FUN_1046b629c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b7388();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b62c8; end: 1046b62cf;  */

undefined1  [16] FUN_1046b62c8(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 3) {
    if (lStack_18 == 0) {
      auVar4._8_8_ = 0xe500000000000000;
      auVar4._0_8_ = 0x7465736e75;
      return auVar4;
    }
    if (lStack_18 == 1) {
      auVar2._8_8_ = 0xed0000746e657645;
      auVar2._0_8_ = 0x6c6c69666f747561;
      return auVar2;
    }
    if (lStack_18 == 2) {
      auVar6._8_8_ = 0xe800000000000000;
      auVar6._0_8_ = 0x746e6576456d7361;
      return auVar6;
    }
  }
  else {
    if (lStack_18 == 3) {
      auVar5._8_8_ = 0x800000010f20beb0;
      auVar5._0_8_ = 0xd000000000000010;
      return auVar5;
    }
    if (lStack_18 == 4) {
      auVar3._8_8_ = 0xef746e6576456e6f;
      auVar3._0_8_ = 0x697461676976616e;
      return auVar3;
    }
    if (lStack_18 == 5) {
      auVar7._8_8_ = 0xe900000000000074;
      auVar7._0_8_ = 0x6e65764572657375;
      return auVar7;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110798ca0,&lStack_18,&UNK_110798ca0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b629c);
  (*pcVar1)();
}



/* Entry: 1046b62d0; end: 1046b655b;  */

undefined1  [16] FUN_1046b62d0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b63a4:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b63c0);
        (*pcVar1)();
      }
      uVar3 = 0xed00007261657070;
      uVar2 = 0x4164694477656976;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xee007373696d7369;
    uVar2 = 0x4464694477656976;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x64616f6c796170;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046b63a4;
    uVar3 = 0xe900000000000065;
    uVar2 = 0x676e6168436c7275;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b655c; end: 1046b6563;  */

undefined1  [16] FUN_1046b655c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(uStack_18) {
  case 0:
    goto code_r0x0001046b6408;
  case 1:
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6c725564616f6c;
code_r0x0001046b6408:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar7._8_8_ = 0xed00007261657070;
    auVar7._0_8_ = 0x4164694477656976;
    return auVar7;
  case 3:
    auVar8._8_8_ = 0xe600000000000000;
    auVar8._0_8_ = 0x6573776f7262;
    return auVar8;
  case 4:
    auVar5._8_8_ = 0xec00000073736572;
    auVar5._0_8_ = 0x676f725064616f6c;
    return auVar5;
  case 5:
    auVar10._8_8_ = 0xee007373696d7369;
    auVar10._0_8_ = 0x4464694477656976;
    return auVar10;
  case 6:
    auVar11._8_8_ = 0xec00000065766974;
    auVar11._0_8_ = 0x63416e6769736572;
    return auVar11;
  case 7:
    auVar9._8_8_ = 0xef74706d65747441;
    auVar9._0_8_ = 0x6b6e696c70656564;
    return auVar9;
  case 8:
    auVar13._8_8_ = 0xeb0000000064616f;
    auVar13._0_8_ = 0x4c6c6c6957627865;
    return auVar13;
  case 9:
    auVar6._8_8_ = 0xea00000000006461;
    auVar6._0_8_ = 0x6f4c646944627865;
    return auVar6;
  case 10:
    auVar12._8_8_ = 0xea00000000006e65;
    auVar12._0_8_ = 0x704f646944627865;
    return auVar12;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798ce0,&uStack_18,&UNK_110798ce0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b655c);
    (*pcVar1)();
  }
}



/* Entry: 1046b6564; end: 1046b66cb;  */

undefined1  [16] FUN_1046b6564(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_18;
  
  uVar4 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(param_1) {
  case 1:
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6c725564616f6c;
  case 0:
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    uVar3 = 0x6c6d7468;
    break;
  case 3:
    auVar8._8_8_ = 0xee0064616f4c746e;
    auVar8._0_8_ = 0x65746e6f436d6f64;
    return auVar8;
  case 4:
    auVar6._8_8_ = 0x800000010f20bf10;
    auVar6._0_8_ = 0xd000000000000014;
    return auVar6;
  case 5:
    uVar3 = 0x6c6c7566;
    break;
  case 6:
    auVar11._8_8_ = 0x800000010f20bef0;
    auVar11._0_8_ = 0xd000000000000010;
    return auVar11;
  case 7:
    auVar9._8_8_ = 0x800000010f20bed0;
    auVar9._0_8_ = 0xd000000000000011;
    return auVar9;
  case 8:
    auVar12._8_8_ = 0xee007373696d7369;
    auVar12._0_8_ = 0x4464694477656976;
    return auVar12;
  case 9:
    auVar7._8_8_ = 0xec00000065766974;
    auVar7._0_8_ = 0x63416e6769736572;
    return auVar7;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798d00,&uStack_18,&UNK_110798d00,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b66cc);
    (*pcVar1)();
  }
  auVar10._0_8_ = uVar3 | 0x64616f4c00000000;
  auVar10._8_8_ = 0xe800000000000000;
  return auVar10;
}



/* Entry: 1046b66cc; end: 1046b66f7;  */

void FUN_1046b66cc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b7398();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b66f8; end: 1046b6857;  */

undefined1  [16] FUN_1046b66f8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar4 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(uStack_18) {
  case 1:
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6c725564616f6c;
  case 0:
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    uVar3 = 0x6c6d7468;
    break;
  case 3:
    auVar8._8_8_ = 0xee0064616f4c746e;
    auVar8._0_8_ = 0x65746e6f436d6f64;
    return auVar8;
  case 4:
    auVar6._8_8_ = 0x800000010f20bf10;
    auVar6._0_8_ = 0xd000000000000014;
    return auVar6;
  case 5:
    uVar3 = 0x6c6c7566;
    break;
  case 6:
    auVar11._8_8_ = 0x800000010f20bef0;
    auVar11._0_8_ = 0xd000000000000010;
    return auVar11;
  case 7:
    auVar9._8_8_ = 0x800000010f20bed0;
    auVar9._0_8_ = 0xd000000000000011;
    return auVar9;
  case 8:
    auVar12._8_8_ = 0xee007373696d7369;
    auVar12._0_8_ = 0x4464694477656976;
    return auVar12;
  case 9:
    auVar7._8_8_ = 0xec00000065766974;
    auVar7._0_8_ = 0x63416e6769736572;
    return auVar7;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798d00,&uStack_18,&UNK_110798d00,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b66cc);
    (*pcVar1)();
  }
  auVar10._0_8_ = uVar3 | 0x64616f4c00000000;
  auVar10._8_8_ = 0xe800000000000000;
  return auVar10;
}



/* Entry: 1046b6858; end: 1046b692b;  */

void FUN_1046b6858(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b692c; end: 1046b693f;  */

void FUN_1046b692c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1046b6940; end: 1046b6ac3;  */

undefined1  [16] FUN_1046b6940(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(param_1) {
  case 1:
    uVar3 = 0xe300000000000000;
    uVar2 = 0x706174;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar8._8_8_ = 0xe600000000000000;
    auVar8._0_8_ = 0x6c6c6f726373;
    return auVar8;
  case 3:
    auVar9._8_8_ = 0xee00657275746165;
    auVar9._0_8_ = 0x46726573776f7262;
    return auVar9;
  case 4:
    auVar6._8_8_ = 0xed00007261657070;
    auVar6._0_8_ = 0x4164694477656976;
    return auVar6;
  case 5:
    auVar10._8_8_ = 0xee007373696d7369;
    auVar10._0_8_ = 0x4464694477656976;
    return auVar10;
  case 6:
    auVar11._8_8_ = 0x800000010f20bff0;
    auVar11._0_8_ = 0xd000000000000016;
    return auVar11;
  case 7:
    pcVar4 = "privacyPromptDidDismiss";
    break;
  case 8:
    auVar13._8_8_ = 0x800000010f20bfb0;
    auVar13._0_8_ = 0xd00000000000001a;
    return auVar13;
  case 9:
    auVar7._8_8_ = 0x800000010f20bf90;
    auVar7._0_8_ = 0xd000000000000014;
    return auVar7;
  case 10:
    pcVar4 = "privacyPromptBackground";
    break;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798db0,&uStack_18,&UNK_110798db0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b6ac4);
    (*pcVar1)();
  }
  auVar12._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar12._0_8_ = 0xd000000000000017;
  return auVar12;
}



/* Entry: 1046b6ac4; end: 1046b6acb;  */

undefined1  [16] FUN_1046b6ac4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(uStack_18) {
  case 1:
    uVar3 = 0xe300000000000000;
    uVar2 = 0x706174;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar8._8_8_ = 0xe600000000000000;
    auVar8._0_8_ = 0x6c6c6f726373;
    return auVar8;
  case 3:
    auVar9._8_8_ = 0xee00657275746165;
    auVar9._0_8_ = 0x46726573776f7262;
    return auVar9;
  case 4:
    auVar6._8_8_ = 0xed00007261657070;
    auVar6._0_8_ = 0x4164694477656976;
    return auVar6;
  case 5:
    auVar10._8_8_ = 0xee007373696d7369;
    auVar10._0_8_ = 0x4464694477656976;
    return auVar10;
  case 6:
    auVar11._8_8_ = 0x800000010f20bff0;
    auVar11._0_8_ = 0xd000000000000016;
    return auVar11;
  case 7:
    pcVar4 = "privacyPromptDidDismiss";
    break;
  case 8:
    auVar13._8_8_ = 0x800000010f20bfb0;
    auVar13._0_8_ = 0xd00000000000001a;
    return auVar13;
  case 9:
    auVar7._8_8_ = 0x800000010f20bf90;
    auVar7._0_8_ = 0xd000000000000014;
    return auVar7;
  case 10:
    pcVar4 = "privacyPromptBackground";
    break;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798db0,&uStack_18,&UNK_110798db0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b6ac4);
    (*pcVar1)();
  }
  auVar12._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar12._0_8_ = 0xd000000000000017;
  return auVar12;
}



/* Entry: 1046b6acc; end: 1046b6eb7;  */

undefined1  [16] FUN_1046b6acc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(param_1) {
  case 0:
    goto code_r0x0001046b6d50;
  case 1:
    uVar2 = 0x4264726177726f66;
    goto code_r0x0001046b6d40;
  case 2:
    uVar4 = 0x6b636162;
    break;
  case 3:
    auVar11._8_8_ = 0xec0000006e6f7474;
    auVar11._0_8_ = 0x754264616f6c6572;
    return auVar11;
  case 4:
    uVar2 = 0xeb000000006e6f74;
    goto code_r0x0001046b6bd8;
  case 5:
    uVar4 = 0x65726f6d;
    break;
  case 6:
    uVar2 = 0x427373696d736964;
code_r0x0001046b6d40:
    uVar3 = 0xed00006e6f747475;
code_r0x0001046b6d50:
    auVar17._8_8_ = uVar3;
    auVar17._0_8_ = uVar2;
    return auVar17;
  case 7:
    pcVar5 = "openBrowserViewMore";
    goto code_r0x0001046b6cb8;
  case 8:
    pcVar5 = "openBrowserButton";
    goto code_r0x0001046b6d90;
  case 9:
    uVar4 = 0x646e6573;
    break;
  case 10:
    pcVar5 = "copyLinkViewMore";
    goto code_r0x0001046b6db8;
  case 0xb:
    uVar2 = 0xef746e65536e6f74;
code_r0x0001046b6bd8:
    auVar9._8_8_ = uVar2;
    auVar9._0_8_ = 0x7475426572616873;
    return auVar9;
  case 0xc:
    auVar10._8_8_ = 0xee00746e65536e6f;
    auVar10._0_8_ = 0x74747542646e6573;
    return auVar10;
  case 0xd:
    auVar16._8_8_ = 0x800000010f20c220;
    auVar16._0_8_ = 0xd000000000000016;
    return auVar16;
  case 0xe:
    pcVar5 = "bookmarkMenuOpenViewMore";
    goto code_r0x0001046b6e70;
  case 0xf:
    pcVar5 = "bookmarkAddButton";
    goto code_r0x0001046b6d90;
  case 0x10:
    uVar2 = 0xee00415443646441;
    goto code_r0x0001046b6cfc;
  case 0x11:
    pcVar5 = "bookmarkAddViewMore";
    goto code_r0x0001046b6cb8;
  case 0x12:
    auVar18._8_8_ = 0x800000010f20c1a0;
    auVar18._0_8_ = 0xd000000000000014;
    return auVar18;
  case 0x13:
    pcVar5 = "bookmarkRemoveItem";
    goto code_r0x0001046b6e2c;
  case 0x14:
    pcVar5 = "bookmarkMenuDismiss";
code_r0x0001046b6cb8:
    auVar13._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar13._0_8_ = 0xd000000000000013;
    return auVar13;
  case 0x15:
    uVar2 = 0xef6e65704f626154;
code_r0x0001046b6cfc:
    auVar15._8_8_ = uVar2;
    auVar15._0_8_ = 0x6b72616d6b6f6f62;
    return auVar15;
  case 0x16:
    auVar21._8_8_ = 0xee006e65704f6261;
    auVar21._0_8_ = 0x5479726f74736968;
    return auVar21;
  case 0x17:
    auVar22._8_8_ = 0xe800000000000000;
    auVar22._0_8_ = 0x6e65704f6b6e696c;
    return auVar22;
  case 0x18:
    pcVar5 = "browserSettingOpen";
    goto code_r0x0001046b6e2c;
  case 0x19:
    uVar2 = 0x800000010f20c120;
    uVar4 = 10;
    goto code_r0x0001046b6e58;
  case 0x1a:
    pcVar5 = "browserSettingClearCache";
code_r0x0001046b6e70:
    auVar25._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar25._0_8_ = 0xd000000000000018;
    return auVar25;
  case 0x1b:
    auVar7._8_8_ = 0x800000010f20c0d0;
    auVar7._0_8_ = 0xd000000000000024;
    return auVar7;
  case 0x1c:
    pcVar5 = "copyLinkAddressBar";
code_r0x0001046b6e2c:
    auVar23._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000012;
    return auVar23;
  case 0x1d:
    uVar2 = 0x800000010f20c090;
    uVar4 = 0xd;
    goto code_r0x0001046b6e58;
  case 0x1e:
    pcVar5 = "buyButtonPresent";
    goto code_r0x0001046b6db8;
  case 0x1f:
    auVar12._8_8_ = 0xec0000007061546e;
    auVar12._0_8_ = 0x6f74747542797562;
    return auVar12;
  case 0x20:
    uVar2 = 0x800000010f20c050;
    uVar4 = 5;
code_r0x0001046b6e58:
    auVar24._0_8_ = uVar4 | 0xd000000000000010;
    auVar24._8_8_ = uVar2;
    return auVar24;
  case 0x21:
    pcVar5 = "applePayButtonTap";
code_r0x0001046b6d90:
    auVar19._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = 0xd000000000000011;
    return auVar19;
  case 0x22:
    auVar8._8_8_ = 0xea00000000006278;
    auVar8._0_8_ = 0x456e65704f626373;
    return auVar8;
  case 0x23:
    auVar6._8_8_ = 0xef74636572696465;
    auVar6._0_8_ = 0x52796150706f6873;
    return auVar6;
  case 0x24:
    pcVar5 = "presentSkoverlay";
code_r0x0001046b6db8:
    auVar20._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar20._0_8_ = 0xd000000000000010;
    return auVar20;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798dd0,&uStack_18,&UNK_110798dd0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b6eb8);
    (*pcVar1)();
  }
  auVar14._0_8_ = uVar4 | 0x7474754200000000;
  auVar14._8_8_ = 0xea00000000006e6f;
  return auVar14;
}



/* Entry: 1046b6eb8; end: 1046b6ee3;  */

void FUN_1046b6eb8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b73b8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b6ee4; end: 1046b6eeb;  */

undefined1  [16] FUN_1046b6ee4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(uStack_18) {
  case 0:
    goto code_r0x0001046b6d50;
  case 1:
    uVar2 = 0x4264726177726f66;
    goto code_r0x0001046b6d40;
  case 2:
    uVar4 = 0x6b636162;
    break;
  case 3:
    auVar11._8_8_ = 0xec0000006e6f7474;
    auVar11._0_8_ = 0x754264616f6c6572;
    return auVar11;
  case 4:
    uVar2 = 0xeb000000006e6f74;
    goto code_r0x0001046b6bd8;
  case 5:
    uVar4 = 0x65726f6d;
    break;
  case 6:
    uVar2 = 0x427373696d736964;
code_r0x0001046b6d40:
    uVar3 = 0xed00006e6f747475;
code_r0x0001046b6d50:
    auVar17._8_8_ = uVar3;
    auVar17._0_8_ = uVar2;
    return auVar17;
  case 7:
    pcVar5 = "openBrowserViewMore";
    goto code_r0x0001046b6cb8;
  case 8:
    pcVar5 = "openBrowserButton";
    goto code_r0x0001046b6d90;
  case 9:
    uVar4 = 0x646e6573;
    break;
  case 10:
    pcVar5 = "copyLinkViewMore";
    goto code_r0x0001046b6db8;
  case 0xb:
    uVar2 = 0xef746e65536e6f74;
code_r0x0001046b6bd8:
    auVar9._8_8_ = uVar2;
    auVar9._0_8_ = 0x7475426572616873;
    return auVar9;
  case 0xc:
    auVar10._8_8_ = 0xee00746e65536e6f;
    auVar10._0_8_ = 0x74747542646e6573;
    return auVar10;
  case 0xd:
    auVar16._8_8_ = 0x800000010f20c220;
    auVar16._0_8_ = 0xd000000000000016;
    return auVar16;
  case 0xe:
    pcVar5 = "bookmarkMenuOpenViewMore";
    goto code_r0x0001046b6e70;
  case 0xf:
    pcVar5 = "bookmarkAddButton";
    goto code_r0x0001046b6d90;
  case 0x10:
    uVar2 = 0xee00415443646441;
    goto code_r0x0001046b6cfc;
  case 0x11:
    pcVar5 = "bookmarkAddViewMore";
    goto code_r0x0001046b6cb8;
  case 0x12:
    auVar18._8_8_ = 0x800000010f20c1a0;
    auVar18._0_8_ = 0xd000000000000014;
    return auVar18;
  case 0x13:
    pcVar5 = "bookmarkRemoveItem";
    goto code_r0x0001046b6e2c;
  case 0x14:
    pcVar5 = "bookmarkMenuDismiss";
code_r0x0001046b6cb8:
    auVar13._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar13._0_8_ = 0xd000000000000013;
    return auVar13;
  case 0x15:
    uVar2 = 0xef6e65704f626154;
code_r0x0001046b6cfc:
    auVar15._8_8_ = uVar2;
    auVar15._0_8_ = 0x6b72616d6b6f6f62;
    return auVar15;
  case 0x16:
    auVar21._8_8_ = 0xee006e65704f6261;
    auVar21._0_8_ = 0x5479726f74736968;
    return auVar21;
  case 0x17:
    auVar22._8_8_ = 0xe800000000000000;
    auVar22._0_8_ = 0x6e65704f6b6e696c;
    return auVar22;
  case 0x18:
    pcVar5 = "browserSettingOpen";
    goto code_r0x0001046b6e2c;
  case 0x19:
    uVar2 = 0x800000010f20c120;
    uVar4 = 10;
    goto code_r0x0001046b6e58;
  case 0x1a:
    pcVar5 = "browserSettingClearCache";
code_r0x0001046b6e70:
    auVar25._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar25._0_8_ = 0xd000000000000018;
    return auVar25;
  case 0x1b:
    auVar7._8_8_ = 0x800000010f20c0d0;
    auVar7._0_8_ = 0xd000000000000024;
    return auVar7;
  case 0x1c:
    pcVar5 = "copyLinkAddressBar";
code_r0x0001046b6e2c:
    auVar23._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000012;
    return auVar23;
  case 0x1d:
    uVar2 = 0x800000010f20c090;
    uVar4 = 0xd;
    goto code_r0x0001046b6e58;
  case 0x1e:
    pcVar5 = "buyButtonPresent";
    goto code_r0x0001046b6db8;
  case 0x1f:
    auVar12._8_8_ = 0xec0000007061546e;
    auVar12._0_8_ = 0x6f74747542797562;
    return auVar12;
  case 0x20:
    uVar2 = 0x800000010f20c050;
    uVar4 = 5;
code_r0x0001046b6e58:
    auVar24._0_8_ = uVar4 | 0xd000000000000010;
    auVar24._8_8_ = uVar2;
    return auVar24;
  case 0x21:
    pcVar5 = "applePayButtonTap";
code_r0x0001046b6d90:
    auVar19._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = 0xd000000000000011;
    return auVar19;
  case 0x22:
    auVar8._8_8_ = 0xea00000000006278;
    auVar8._0_8_ = 0x456e65704f626373;
    return auVar8;
  case 0x23:
    auVar6._8_8_ = 0xef74636572696465;
    auVar6._0_8_ = 0x52796150706f6873;
    return auVar6;
  case 0x24:
    pcVar5 = "presentSkoverlay";
code_r0x0001046b6db8:
    auVar20._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar20._0_8_ = 0xd000000000000010;
    return auVar20;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798dd0,&uStack_18,&UNK_110798dd0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b6eb8);
    (*pcVar1)();
  }
  auVar14._0_8_ = uVar4 | 0x7474754200000000;
  auVar14._8_8_ = 0xea00000000006e6f;
  return auVar14;
}



/* Entry: 1046b6eec; end: 1046b6fcf;  */

undefined1  [16] FUN_1046b6eec(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
      goto LAB_1046b6fa8;
    }
    if (lStack_18 != 1) {
LAB_1046b6fb4:
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b6fd0);
      (*pcVar1)();
    }
    uVar2 = 0x42726573776f7262;
LAB_1046b6f98:
    uVar3 = 0xef6b72616d6b6f6f;
  }
  else {
    if (lStack_18 == 2) {
      uVar2 = 0x48726573776f7262;
    }
    else {
      if (lStack_18 == 3) {
        uVar2 = 0x42656c69666f7270;
        goto LAB_1046b6f98;
      }
      if (lStack_18 != 4) goto LAB_1046b6fb4;
      uVar2 = 0x48656c69666f7270;
    }
    uVar3 = 0xee0079726f747369;
  }
LAB_1046b6fa8:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b6fd0; end: 1046b6feb;  */

void FUN_1046b6fd0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1046b6fec; end: 1046b72cf;  */

undefined1  [16] FUN_1046b6fec(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x7465736e75;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x676e6974746573;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b7070);
      (*pcVar1)();
    }
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6d726f66;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b72d0; end: 1046b737f;  */

void FUN_1046b72d0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046b7380; end: 1046b73db;  */

undefined1  [16] FUN_1046b7380(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0x7465736e75;
  uVar2 = 0xe500000000000000;
  switch(uStack_18) {
  case 1:
    uVar2 = 0xe400000000000000;
    uVar3 = 0x74696e69;
  case 0:
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = uVar3;
    return auVar4;
  case 2:
    auVar9._8_8_ = 0xe700000000000000;
    auVar9._0_8_ = 0x64616f4c6c7275;
    return auVar9;
  case 3:
    auVar10._8_8_ = 0xe800000000000000;
    auVar10._0_8_ = 0x64616f4c6c6d7468;
    return auVar10;
  case 4:
    auVar6._8_8_ = 0xec0000006e656572;
    auVar6._0_8_ = 0x63536e4f77656976;
    return auVar6;
  case 5:
    auVar12._8_8_ = 0xed00006e65657263;
    auVar12._0_8_ = 0x5366664f77656976;
    return auVar12;
  case 6:
    uVar3 = 0xef74726174536e6f;
    break;
  case 7:
    auVar11._8_8_ = 0x800000010f20bef0;
    auVar11._0_8_ = 0xd000000000000010;
    return auVar11;
  case 8:
    uVar3 = 0xee006c6961466e6f;
    break;
  case 9:
    auVar8._8_8_ = 0xec0000006e65704f;
    auVar8._0_8_ = 0x6b6e694c70656564;
    return auVar8;
  case 10:
    auVar13._8_8_ = 0xe700000000000000;
    auVar13._0_8_ = 0x6e65704f627865;
    return auVar13;
  case 0xb:
    auVar5._8_8_ = 0xe500000000000000;
    auVar5._0_8_ = 0x7465736572;
    return auVar5;
  case 0xc:
    auVar7._8_8_ = 0xe700000000000000;
    auVar7._0_8_ = 0x636f6c6c616564;
    return auVar7;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798e50,&uStack_18,&UNK_110798e50,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b72d0);
    (*pcVar1)();
  }
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = 0x697461676976616e;
  return auVar14;
}



/* Entry: 1046b73dc; end: 1046b741b;  */

void FUN_1046b73dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a3ec;
  _swift_getWitnessTable(&UNK_10dd2a3ec,&UNK_110798ca0);
  puRam000000011308d538 = puVar1;
  return;
}



/* Entry: 1046b741c; end: 1046b741f;  */

void FUN_1046b741c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a4b4;
  _swift_getWitnessTable(&UNK_10dd2a4b4,&UNK_110798cc0);
  puRam000000011308d540 = puVar1;
  return;
}



/* Entry: 1046b7420; end: 1046b745f;  */

void FUN_1046b7420(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a4b4;
  _swift_getWitnessTable(&UNK_10dd2a4b4,&UNK_110798cc0);
  puRam000000011308d540 = puVar1;
  return;
}



/* Entry: 1046b7460; end: 1046b7463;  */

void FUN_1046b7460(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a57c;
  _swift_getWitnessTable(&UNK_10dd2a57c,&UNK_110798ce0);
  puRam000000011308d548 = puVar1;
  return;
}



/* Entry: 1046b7464; end: 1046b74a3;  */

void FUN_1046b7464(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a57c;
  _swift_getWitnessTable(&UNK_10dd2a57c,&UNK_110798ce0);
  puRam000000011308d548 = puVar1;
  return;
}



/* Entry: 1046b74a4; end: 1046b74a7;  */

void FUN_1046b74a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a644;
  _swift_getWitnessTable(&UNK_10dd2a644,&UNK_110798d00);
  puRam000000011308d550 = puVar1;
  return;
}



/* Entry: 1046b74a8; end: 1046b74e7;  */

void FUN_1046b74a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a644;
  _swift_getWitnessTable(&UNK_10dd2a644,&UNK_110798d00);
  puRam000000011308d550 = puVar1;
  return;
}



/* Entry: 1046b74e8; end: 1046b74eb;  */

void FUN_1046b74e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a70c;
  _swift_getWitnessTable(&UNK_10dd2a70c,&UNK_110798d90);
  puRam000000011308d558 = puVar1;
  return;
}



/* Entry: 1046b74ec; end: 1046b752b;  */

void FUN_1046b74ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a70c;
  _swift_getWitnessTable(&UNK_10dd2a70c,&UNK_110798d90);
  puRam000000011308d558 = puVar1;
  return;
}



/* Entry: 1046b752c; end: 1046b752f;  */

void FUN_1046b752c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a7d4;
  _swift_getWitnessTable(&UNK_10dd2a7d4,&UNK_110798db0);
  puRam000000011308d560 = puVar1;
  return;
}



/* Entry: 1046b7530; end: 1046b756f;  */

void FUN_1046b7530(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a7d4;
  _swift_getWitnessTable(&UNK_10dd2a7d4,&UNK_110798db0);
  puRam000000011308d560 = puVar1;
  return;
}



/* Entry: 1046b7570; end: 1046b7573;  */

void FUN_1046b7570(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a89c;
  _swift_getWitnessTable(&UNK_10dd2a89c,&UNK_110798dd0);
  puRam000000011308d568 = puVar1;
  return;
}



/* Entry: 1046b7574; end: 1046b75b3;  */

void FUN_1046b7574(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a89c;
  _swift_getWitnessTable(&UNK_10dd2a89c,&UNK_110798dd0);
  puRam000000011308d568 = puVar1;
  return;
}



/* Entry: 1046b75b4; end: 1046b75b7;  */

void FUN_1046b75b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a964;
  _swift_getWitnessTable(&UNK_10dd2a964,&UNK_110798df0);
  puRam000000011308d570 = puVar1;
  return;
}



/* Entry: 1046b75b8; end: 1046b75f7;  */

void FUN_1046b75b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a964;
  _swift_getWitnessTable(&UNK_10dd2a964,&UNK_110798df0);
  puRam000000011308d570 = puVar1;
  return;
}



/* Entry: 1046b75f8; end: 1046b75fb;  */

void FUN_1046b75f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2aa2c;
  _swift_getWitnessTable(&UNK_10dd2aa2c,&UNK_110798e10);
  puRam000000011308d578 = puVar1;
  return;
}



/* Entry: 1046b75fc; end: 1046b763b;  */

void FUN_1046b75fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2aa2c;
  _swift_getWitnessTable(&UNK_10dd2aa2c,&UNK_110798e10);
  puRam000000011308d578 = puVar1;
  return;
}



/* Entry: 1046b763c; end: 1046b763f;  */

void FUN_1046b763c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2aaf4;
  _swift_getWitnessTable(&UNK_10dd2aaf4,&UNK_110798e30);
  puRam000000011308d580 = puVar1;
  return;
}



/* Entry: 1046b7640; end: 1046b767f;  */

void FUN_1046b7640(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2aaf4;
  _swift_getWitnessTable(&UNK_10dd2aaf4,&UNK_110798e30);
  puRam000000011308d580 = puVar1;
  return;
}



/* Entry: 1046b7680; end: 1046b7683;  */

void FUN_1046b7680(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2abbc;
  _swift_getWitnessTable(&UNK_10dd2abbc,&UNK_110798e50);
  puRam000000011308d588 = puVar1;
  return;
}



/* Entry: 1046b7684; end: 1046b76c3;  */

void FUN_1046b7684(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2abbc;
  _swift_getWitnessTable(&UNK_10dd2abbc,&UNK_110798e50);
  puRam000000011308d588 = puVar1;
  return;
}



/* Entry: 1046b76c4; end: 1046b79e3;  */

undefined1  [16] FUN_1046b76c4(void)

{
  return ZEXT816(0x110798ca0);
}



/* Entry: 1046b79e4; end: 1046b7a23;  */

void FUN_1046b79e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ade0;
  _swift_getWitnessTable(&UNK_10dd2ade0,&UNK_110798ed8);
  puRam000000011308d590 = puVar1;
  return;
}



/* Entry: 1046b7a24; end: 1046b7acf;  */

void FUN_1046b7a24(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}


