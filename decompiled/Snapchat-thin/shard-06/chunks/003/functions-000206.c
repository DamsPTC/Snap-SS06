/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046b27a0; end: 1046b27bb;  */

undefined1  [16] FUN_1046b27a0(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 4) {
    if (lStack_18 < 2) {
      if (lStack_18 == 0) {
        auVar2._8_8_ = 0xe700000000000000;
        auVar2._0_8_ = 0x6e776f6e6b6e75;
        return auVar2;
      }
      if (lStack_18 == 1) {
        auVar6._8_8_ = 0xe900000000000074;
        auVar6._0_8_ = 0x7865546e69616c70;
        return auVar6;
      }
    }
    else {
      if (lStack_18 == 2) {
        auVar4._8_8_ = 0xe500000000000000;
        auVar4._0_8_ = 0x656e6f6870;
        return auVar4;
      }
      if (lStack_18 == 3) {
        auVar8._8_8_ = 0xe500000000000000;
        auVar8._0_8_ = 0x6c69616d65;
        return auVar8;
      }
    }
  }
  else if (lStack_18 < 6) {
    if (lStack_18 == 4) {
      auVar3._8_8_ = 0xe700000000000000;
      auVar3._0_8_ = 0x73736572646461;
      return auVar3;
    }
    if (lStack_18 == 5) {
      auVar7._8_8_ = 0xe400000000000000;
      auVar7._0_8_ = 0x65746164;
      return auVar7;
    }
  }
  else {
    if (lStack_18 == 6) {
      auVar5._8_8_ = 0x800000010f20bb80;
      auVar5._0_8_ = 0xd000000000000011;
      return auVar5;
    }
    if (lStack_18 == 7) {
      auVar9._8_8_ = 0x800000010f20bb60;
      auVar9._0_8_ = 0xd000000000000012;
      return auVar9;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797d90,&lStack_18,&UNK_110797d90,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b26a8);
  (*pcVar1)();
}



/* Entry: 1046b27bc; end: 1046b27fb;  */

void FUN_1046b27bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28970;
  _swift_getWitnessTable(&UNK_10dd28970,&UNK_110797d90);
  puRam000000011308d398 = puVar1;
  return;
}



/* Entry: 1046b27fc; end: 1046b284b;  */

undefined1  [16] FUN_1046b27fc(void)

{
  return ZEXT816(0x110797d90);
}



/* Entry: 1046b284c; end: 1046b288b;  */

void FUN_1046b284c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d3a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28a60;
  _swift_getWitnessTable(&UNK_10dd28a60,&UNK_110797e18);
  puRam000000011308d3a0 = puVar1;
  return;
}



/* Entry: 1046b288c; end: 1046b2937;  */

void FUN_1046b288c(void)

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



/* Entry: 1046b2938; end: 1046b29a3;  */

undefined1  [16] FUN_1046b2938(undefined8 param_1)

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
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b29a4);
      (*pcVar1)();
    }
    uVar3 = 0xe800000000000000;
    uVar2 = 0x64656c6261736964;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b29a4; end: 1046b29c7;  */

undefined1  [16] FUN_1046b29a4(void)

{
  return ZEXT816(0x110797e18);
}



/* Entry: 1046b29c8; end: 1046b29f3;  */

void FUN_1046b29c8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b2b84();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b29f4; end: 1046b29ff;  */

void FUN_1046b29f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b2a00; end: 1046b2aab;  */

void FUN_1046b2a00(void)

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



/* Entry: 1046b2aac; end: 1046b2b83;  */

undefined1  [16] FUN_1046b2aac(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 3) {
    if (lStack_18 == 0) {
      uVar3 = 0xe400000000000000;
      uVar2 = 0x656e6f6e;
    }
    else if (lStack_18 == 1) {
      uVar3 = 0xe300000000000000;
      uVar2 = 0x70697a;
    }
    else {
      if (lStack_18 != 2) {
LAB_1046b2b68:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b2b84);
        (*pcVar1)();
      }
      uVar3 = 0xe800000000000000;
      uVar2 = 0x7265766f63736964;
    }
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe300000000000000;
    uVar2 = 0x6c7275;
  }
  else if (lStack_18 == 4) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x746c6f62;
  }
  else {
    if (lStack_18 != 5) goto LAB_1046b2b68;
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b2b84; end: 1046b2b97;  */

undefined1  [16] FUN_1046b2b84(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b2b98; end: 1046b2bd7;  */

void FUN_1046b2b98(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d3a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28b50;
  _swift_getWitnessTable(&UNK_10dd28b50,&UNK_110797ea0);
  puRam000000011308d3a8 = puVar1;
  return;
}



/* Entry: 1046b2bd8; end: 1046b2bfb;  */

undefined1  [16] FUN_1046b2bd8(void)

{
  return ZEXT816(0x110797ea0);
}



/* Entry: 1046b2bfc; end: 1046b2c27;  */

void FUN_1046b2bfc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b2db8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b2c28; end: 1046b2c33;  */

void FUN_1046b2c28(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b2c34; end: 1046b2cdf;  */

void FUN_1046b2c34(void)

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



/* Entry: 1046b2ce0; end: 1046b2db7;  */

undefined1  [16] FUN_1046b2ce0(undefined8 param_1)

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
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b2d9c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b2db8);
        (*pcVar1)();
      }
      uVar3 = 0xe500000000000000;
      uVar2 = 0x6567616d69;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x6f65646976;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xeb00000000657461;
    uVar2 = 0x6c706d6554617064;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046b2d9c;
    uVar3 = 0xe800000000000000;
    uVar2 = 0x656c626179616c70;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b2db8; end: 1046b2dcb;  */

undefined1  [16] FUN_1046b2db8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b2dcc; end: 1046b2e0b;  */

void FUN_1046b2dcc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d3b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28c34;
  _swift_getWitnessTable(&UNK_10dd28c34,&UNK_110797f28);
  puRam000000011308d3b0 = puVar1;
  return;
}



/* Entry: 1046b2e0c; end: 1046b2e2f;  */

undefined1  [16] FUN_1046b2e0c(void)

{
  return ZEXT816(0x110797f28);
}



/* Entry: 1046b2e30; end: 1046b2f07;  */

void FUN_1046b2e30(void)

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



/* Entry: 1046b2f08; end: 1046b2f27;  */

void FUN_1046b2f08(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b2f28; end: 1046b2f67;  */

void FUN_1046b2f28(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d3b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28d10;
  _swift_getWitnessTable(&UNK_10dd28d10,&UNK_110797fb0);
  puRam000000011308d3b8 = puVar1;
  return;
}



/* Entry: 1046b2f68; end: 1046b2f77;  */

undefined1  [16] FUN_1046b2f68(void)

{
  return ZEXT816(0x110797fb0);
}



/* Entry: 1046b2f78; end: 1046b325b;  */

undefined1  [16] FUN_1046b2f78(undefined8 param_1)

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
  
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 1:
    uVar2 = 0x6174736e49707061;
    uVar3 = 0xeb00000000736c6c;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar12._8_8_ = 0xea00000000006863;
    auVar12._0_8_ = 0x616552796c696164;
    return auVar12;
  case 3:
    auVar14._8_8_ = 0xeb00000000736e6f;
    auVar14._0_8_ = 0x6973736572706d69;
    return auVar14;
  case 4:
    auVar9._8_8_ = 0xe600000000000000;
    auVar9._0_8_ = 0x736570697773;
    return auVar9;
  case 5:
    auVar18._8_8_ = 0xea00000000007377;
    auVar18._0_8_ = 0x6569566f65646976;
    return auVar18;
  case 6:
    auVar21._8_8_ = 0xe400000000000000;
    auVar21._0_8_ = 0x656e6f6e;
    return auVar21;
  case 7:
    auVar15._8_8_ = 0xe400000000000000;
    auVar15._0_8_ = 0x73657375;
    return auVar15;
  case 8:
    auVar24._8_8_ = 0xe300000000000000;
    auVar24._0_8_ = 0x76666c;
    return auVar24;
  case 9:
    auVar11._8_8_ = 0xe700000000000000;
    auVar11._0_8_ = 0x77656956626577;
    return auVar11;
  case 10:
    auVar23._8_8_ = 0xed00006573616863;
    auVar23._0_8_ = 0x7275506c65786970;
    return auVar23;
  case 0xb:
    auVar8._8_8_ = 0xeb0000000070756e;
    auVar8._0_8_ = 0x6769536c65786970;
    return auVar8;
  case 0xc:
    auVar10._8_8_ = 0xeb00000000657361;
    auVar10._0_8_ = 0x6863727550707061;
    return auVar10;
  case 0xd:
    auVar20._8_8_ = 0xe900000000000070;
    auVar20._0_8_ = 0x756e676953707061;
    return auVar20;
  case 0xe:
    auVar7._8_8_ = 0xea0000000000736e;
    auVar7._0_8_ = 0x65704f79726f7473;
    return auVar7;
  case 0xf:
    auVar13._8_8_ = 0xee00747261436f54;
    auVar13._0_8_ = 0x6464416c65786970;
    return auVar13;
  case 0x10:
    auVar6._8_8_ = 0xed00007765695665;
    auVar6._0_8_ = 0x6761506c65786970;
    return auVar6;
  case 0x11:
    auVar16._8_8_ = 0xec00000074726143;
    auVar16._0_8_ = 0x6f54646441707061;
    return auVar16;
  case 0x12:
    auVar22._8_8_ = 0xef63655335317377;
    auVar22._0_8_ = 0x6569566f65646976;
    return auVar22;
  case 0x13:
    pcVar4 = "appReengagePurchase";
    break;
  case 0x14:
    auVar17._8_8_ = 0x800000010f20bbc0;
    auVar17._0_8_ = 0xd000000000000014;
    return auVar17;
  case 0x15:
    auVar19._8_8_ = 0xef6e65704f656761;
    auVar19._0_8_ = 0x676e656552707061;
    return auVar19;
  case 0x16:
    pcVar4 = "leadFormSubmissions";
    break;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798028,&uStack_18,&UNK_110798028,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b325c);
    (*pcVar1)();
  }
  auVar25._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar25._0_8_ = 0xd000000000000013;
  return auVar25;
}



/* Entry: 1046b325c; end: 1046b326f;  */

bool FUN_1046b325c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b3270; end: 1046b329b;  */

void FUN_1046b3270(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b335c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b329c; end: 1046b32a7;  */

void FUN_1046b329c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b32a8; end: 1046b3353;  */

void FUN_1046b32a8(void)

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



/* Entry: 1046b3354; end: 1046b336f;  */

undefined1  [16] FUN_1046b3354(void)

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
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(uStack_18) {
  case 1:
    uVar2 = 0x6174736e49707061;
    uVar3 = 0xeb00000000736c6c;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar12._8_8_ = 0xea00000000006863;
    auVar12._0_8_ = 0x616552796c696164;
    return auVar12;
  case 3:
    auVar14._8_8_ = 0xeb00000000736e6f;
    auVar14._0_8_ = 0x6973736572706d69;
    return auVar14;
  case 4:
    auVar9._8_8_ = 0xe600000000000000;
    auVar9._0_8_ = 0x736570697773;
    return auVar9;
  case 5:
    auVar18._8_8_ = 0xea00000000007377;
    auVar18._0_8_ = 0x6569566f65646976;
    return auVar18;
  case 6:
    auVar21._8_8_ = 0xe400000000000000;
    auVar21._0_8_ = 0x656e6f6e;
    return auVar21;
  case 7:
    auVar15._8_8_ = 0xe400000000000000;
    auVar15._0_8_ = 0x73657375;
    return auVar15;
  case 8:
    auVar24._8_8_ = 0xe300000000000000;
    auVar24._0_8_ = 0x76666c;
    return auVar24;
  case 9:
    auVar11._8_8_ = 0xe700000000000000;
    auVar11._0_8_ = 0x77656956626577;
    return auVar11;
  case 10:
    auVar23._8_8_ = 0xed00006573616863;
    auVar23._0_8_ = 0x7275506c65786970;
    return auVar23;
  case 0xb:
    auVar8._8_8_ = 0xeb0000000070756e;
    auVar8._0_8_ = 0x6769536c65786970;
    return auVar8;
  case 0xc:
    auVar10._8_8_ = 0xeb00000000657361;
    auVar10._0_8_ = 0x6863727550707061;
    return auVar10;
  case 0xd:
    auVar20._8_8_ = 0xe900000000000070;
    auVar20._0_8_ = 0x756e676953707061;
    return auVar20;
  case 0xe:
    auVar7._8_8_ = 0xea0000000000736e;
    auVar7._0_8_ = 0x65704f79726f7473;
    return auVar7;
  case 0xf:
    auVar13._8_8_ = 0xee00747261436f54;
    auVar13._0_8_ = 0x6464416c65786970;
    return auVar13;
  case 0x10:
    auVar6._8_8_ = 0xed00007765695665;
    auVar6._0_8_ = 0x6761506c65786970;
    return auVar6;
  case 0x11:
    auVar16._8_8_ = 0xec00000074726143;
    auVar16._0_8_ = 0x6f54646441707061;
    return auVar16;
  case 0x12:
    auVar22._8_8_ = 0xef63655335317377;
    auVar22._0_8_ = 0x6569566f65646976;
    return auVar22;
  case 0x13:
    pcVar4 = "appReengagePurchase";
    break;
  case 0x14:
    auVar17._8_8_ = 0x800000010f20bbc0;
    auVar17._0_8_ = 0xd000000000000014;
    return auVar17;
  case 0x15:
    auVar19._8_8_ = 0xef6e65704f656761;
    auVar19._0_8_ = 0x676e656552707061;
    return auVar19;
  case 0x16:
    pcVar4 = "leadFormSubmissions";
    break;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110798028,&uStack_18,&UNK_110798028,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b325c);
    (*pcVar1)();
  }
  auVar25._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar25._0_8_ = 0xd000000000000013;
  return auVar25;
}



/* Entry: 1046b3370; end: 1046b33af;  */

void FUN_1046b3370(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d3c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28de8;
  _swift_getWitnessTable(&UNK_10dd28de8,&UNK_110798028);
  puRam000000011308d3c0 = puVar1;
  return;
}



/* Entry: 1046b33b0; end: 1046b33d7;  */

undefined1  [16] FUN_1046b33b0(void)

{
  return ZEXT816(0x110798028);
}



/* Entry: 1046b33d8; end: 1046b3417;  */

void FUN_1046b33d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d3c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28ec4;
  _swift_getWitnessTable(&UNK_10dd28ec4,&UNK_1107980b0);
  puRam000000011308d3c8 = puVar1;
  return;
}



/* Entry: 1046b3418; end: 1046b34c3;  */

void FUN_1046b3418(void)

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



/* Entry: 1046b34c4; end: 1046b34fb;  */

void FUN_1046b34c4(ulong *param_1,ulong *param_2)

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



/* Entry: 1046b34fc; end: 1046b3613;  */

undefined1  [16] FUN_1046b34fc(long param_1)

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
      auVar2._8_8_ = 0x800000010f20bc40;
      auVar2._0_8_ = 0xd00000000000001a;
      return auVar2;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0x800000010f20bc20;
      auVar6._0_8_ = 0xd000000000000016;
      return auVar6;
    }
  }
  else {
    if (param_1 == 3) {
      auVar5._8_8_ = 0xef65646975476e6f;
      auVar5._0_8_ = 0x697461636964656d;
      return auVar5;
    }
    if (param_1 == 4) {
      auVar3._8_8_ = 0x800000010f20bc00;
      auVar3._0_8_ = 0xd000000000000012;
      return auVar3;
    }
    if (param_1 == 5) {
      auVar7._8_8_ = 0xec00000065746973;
      auVar7._0_8_ = 0x626557646e617262;
      return auVar7;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110798128,&lStack_18,&UNK_110798128,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b3614);
  (*pcVar1)();
}



/* Entry: 1046b3614; end: 1046b3627;  */

bool FUN_1046b3614(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b3628; end: 1046b3653;  */

void FUN_1046b3628(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b3754();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b3654; end: 1046b365f;  */

void FUN_1046b3654(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b3660; end: 1046b374b;  */

void FUN_1046b3660(void)

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



/* Entry: 1046b374c; end: 1046b3767;  */

undefined1  [16] FUN_1046b374c(void)

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
      auVar2._8_8_ = 0x800000010f20bc40;
      auVar2._0_8_ = 0xd00000000000001a;
      return auVar2;
    }
    if (lStack_18 == 2) {
      auVar6._8_8_ = 0x800000010f20bc20;
      auVar6._0_8_ = 0xd000000000000016;
      return auVar6;
    }
  }
  else {
    if (lStack_18 == 3) {
      auVar5._8_8_ = 0xef65646975476e6f;
      auVar5._0_8_ = 0x697461636964656d;
      return auVar5;
    }
    if (lStack_18 == 4) {
      auVar3._8_8_ = 0x800000010f20bc00;
      auVar3._0_8_ = 0xd000000000000012;
      return auVar3;
    }
    if (lStack_18 == 5) {
      auVar7._8_8_ = 0xec00000065746973;
      auVar7._0_8_ = 0x626557646e617262;
      return auVar7;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110798128,&lStack_18,&UNK_110798128,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b3614);
  (*pcVar1)();
}



/* Entry: 1046b3768; end: 1046b37a7;  */

void FUN_1046b3768(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28f78;
  _swift_getWitnessTable(&UNK_10dd28f78,&UNK_110798128);
  puRam000000011308d430 = puVar1;
  return;
}



/* Entry: 1046b37a8; end: 1046b37ab;  */

void FUN_1046b37a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d438 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d440;
  func_0x00010002969c(0x11308d440,&UNK_10dd29018);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d438 = puVar2;
  return;
}



/* Entry: 1046b37ac; end: 1046b37fb;  */

void FUN_1046b37ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d438 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d440;
  func_0x00010002969c(0x11308d440,&UNK_10dd29018);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d438 = puVar2;
  return;
}



/* Entry: 1046b37fc; end: 1046b384b;  */

undefined1  [16] FUN_1046b37fc(void)

{
  return ZEXT816(0x110798128);
}



/* Entry: 1046b384c; end: 1046b388b;  */

void FUN_1046b384c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29098;
  _swift_getWitnessTable(&UNK_10dd29098,&UNK_1107981d0);
  puRam000000011308d448 = puVar1;
  return;
}



/* Entry: 1046b388c; end: 1046b3937;  */

void FUN_1046b388c(void)

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



/* Entry: 1046b3938; end: 1046b39cb;  */

undefined1  [16] FUN_1046b3938(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe900000000000067;
    uVar2 = 0x6e696d6165727473;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b39cc);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x64656c646e7562;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b39cc; end: 1046b3a1b;  */

undefined1  [16] FUN_1046b39cc(void)

{
  return ZEXT816(0x1107981d0);
}



/* Entry: 1046b3a1c; end: 1046b3a5b;  */

void FUN_1046b3a1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29170;
  _swift_getWitnessTable(&UNK_10dd29170,&UNK_110798258);
  puRam000000011308d450 = puVar1;
  return;
}



/* Entry: 1046b3a5c; end: 1046b3b07;  */

void FUN_1046b3a5c(void)

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



/* Entry: 1046b3b08; end: 1046b3b6f;  */

undefined1  [16] FUN_1046b3b08(undefined8 param_1)

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
    uVar2 = 0x6873657266;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b3b70);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar2 = 0x70756b636162;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b3b70; end: 1046b3bbf;  */

undefined1  [16] FUN_1046b3b70(void)

{
  return ZEXT816(0x110798258);
}



/* Entry: 1046b3bc0; end: 1046b3bff;  */

void FUN_1046b3bc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29260;
  _swift_getWitnessTable(&UNK_10dd29260,&UNK_1107982e0);
  puRam000000011308d458 = puVar1;
  return;
}



/* Entry: 1046b3c00; end: 1046b3cab;  */

void FUN_1046b3c00(void)

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



/* Entry: 1046b3cac; end: 1046b3cfb;  */

undefined1  [16] FUN_1046b3cac(undefined8 param_1)

{
  code *pcVar1;
  ulong *unaff_x20;
  undefined1 auVar2 [16];
  ulong uStack_18;
  
  uStack_18 = *unaff_x20;
  if (uStack_18 < 3) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dd29348 + uStack_18 * 8);
    auVar2._8_8_ = 0xe500000000000000;
    return auVar2;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (param_1,&uStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b3cfc);
  (*pcVar1)();
}



/* Entry: 1046b3cfc; end: 1046b3d1f;  */

undefined1  [16] FUN_1046b3cfc(void)

{
  return ZEXT816(0x1107982e0);
}



/* Entry: 1046b3d20; end: 1046b3d4b;  */

void FUN_1046b3d20(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b3eac();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b3d4c; end: 1046b3d57;  */

void FUN_1046b3d4c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b3d58; end: 1046b3e03;  */

void FUN_1046b3d58(void)

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



/* Entry: 1046b3e04; end: 1046b3eab;  */

undefined1  [16] FUN_1046b3e04(undefined8 param_1)

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
      uVar3 = 0xe400000000000000;
      uVar2 = 0x656e6f6e;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b3e90:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b3eac);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6c616974726170;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6c6c7566;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b3e90;
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b3eac; end: 1046b3eff;  */

undefined1  [16] FUN_1046b3eac(ulong param_1)

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



/* Entry: 1046b3f00; end: 1046b3f3f;  */

void FUN_1046b3f00(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29440;
  _swift_getWitnessTable(&UNK_10dd29440,&UNK_1107983f0);
  puRam000000011308d460 = puVar1;
  return;
}



/* Entry: 1046b3f40; end: 1046b3feb;  */

void FUN_1046b3f40(void)

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



/* Entry: 1046b3fec; end: 1046b4093;  */

undefined1  [16] FUN_1046b3fec(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xec0000007465736e;
    uVar2 = 0x55746c7561666564;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xeb00000000746867;
    uVar2 = 0x69526d6f74746f62;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b4094);
      (*pcVar1)();
    }
    uVar3 = 0xec00000072656461;
    uVar2 = 0x6548656d6f726863;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b4094; end: 1046b40e3;  */

undefined1  [16] FUN_1046b4094(void)

{
  return ZEXT816(0x1107983f0);
}



/* Entry: 1046b40e4; end: 1046b4123;  */

void FUN_1046b40e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29530;
  _swift_getWitnessTable(&UNK_10dd29530,&UNK_110798478);
  puRam000000011308d468 = puVar1;
  return;
}



/* Entry: 1046b4124; end: 1046b41cf;  */

void FUN_1046b4124(void)

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



/* Entry: 1046b41d0; end: 1046b424f;  */

undefined1  [16] FUN_1046b41d0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x65646968;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b4250);
      (*pcVar1)();
    }
    uVar3 = 0xe400000000000000;
    uVar2 = 0x776f6873;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b4250; end: 1046b429f;  */

undefined1  [16] FUN_1046b4250(void)

{
  return ZEXT816(0x110798478);
}



/* Entry: 1046b42a0; end: 1046b42df;  */

void FUN_1046b42a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29620;
  _swift_getWitnessTable(&UNK_10dd29620,&UNK_110798500);
  puRam000000011308d470 = puVar1;
  return;
}



/* Entry: 1046b42e0; end: 1046b438b;  */

void FUN_1046b42e0(void)

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



/* Entry: 1046b438c; end: 1046b439b;  */

undefined1  [16] FUN_1046b438c(void)

{
  return ZEXT816(0x110798500);
}



/* Entry: 1046b439c; end: 1046b44b7;  */

undefined1  [16] FUN_1046b439c(long param_1)

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
      auVar4._8_8_ = 0xeb00000000657079;
      auVar4._0_8_ = 0x54746c7561666564;
      return auVar4;
    }
    if (param_1 == 1) {
      auVar2._8_8_ = 0xeb000000006e4965;
      auVar2._0_8_ = 0x64696c536c6c6970;
      return auVar2;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0xea0000000000646e;
      auVar6._0_8_ = 0x6170784564726163;
      return auVar6;
    }
  }
  else {
    if (param_1 == 3) {
      auVar5._8_8_ = 0x800000010f20bca0;
      auVar5._0_8_ = 0xd000000000000012;
      return auVar5;
    }
    if (param_1 == 4) {
      auVar3._8_8_ = 0x800000010f20bc80;
      auVar3._0_8_ = 0xd00000000000001c;
      return auVar3;
    }
    if (param_1 == 5) {
      auVar7._8_8_ = 0x800000010f20bc60;
      auVar7._0_8_ = 0xd000000000000014;
      return auVar7;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110798578,&lStack_18,&UNK_110798578,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b44b8);
  (*pcVar1)();
}



/* Entry: 1046b44b8; end: 1046b44cb;  */

bool FUN_1046b44b8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b44cc; end: 1046b44f7;  */

void FUN_1046b44cc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b45b8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b44f8; end: 1046b4503;  */

void FUN_1046b44f8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b4504; end: 1046b45af;  */

void FUN_1046b4504(void)

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



/* Entry: 1046b45b0; end: 1046b45cb;  */

undefined1  [16] FUN_1046b45b0(void)

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
      auVar4._8_8_ = 0xeb00000000657079;
      auVar4._0_8_ = 0x54746c7561666564;
      return auVar4;
    }
    if (lStack_18 == 1) {
      auVar2._8_8_ = 0xeb000000006e4965;
      auVar2._0_8_ = 0x64696c536c6c6970;
      return auVar2;
    }
    if (lStack_18 == 2) {
      auVar6._8_8_ = 0xea0000000000646e;
      auVar6._0_8_ = 0x6170784564726163;
      return auVar6;
    }
  }
  else {
    if (lStack_18 == 3) {
      auVar5._8_8_ = 0x800000010f20bca0;
      auVar5._0_8_ = 0xd000000000000012;
      return auVar5;
    }
    if (lStack_18 == 4) {
      auVar3._8_8_ = 0x800000010f20bc80;
      auVar3._0_8_ = 0xd00000000000001c;
      return auVar3;
    }
    if (lStack_18 == 5) {
      auVar7._8_8_ = 0x800000010f20bc60;
      auVar7._0_8_ = 0xd000000000000014;
      return auVar7;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110798578,&lStack_18,&UNK_110798578,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b44b8);
  (*pcVar1)();
}



/* Entry: 1046b45cc; end: 1046b460b;  */

void FUN_1046b45cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd296e0;
  _swift_getWitnessTable(&UNK_10dd296e0,&UNK_110798578);
  puRam000000011308d478 = puVar1;
  return;
}



/* Entry: 1046b460c; end: 1046b465b;  */

undefined1  [16] FUN_1046b460c(void)

{
  return ZEXT816(0x110798578);
}



/* Entry: 1046b465c; end: 1046b469b;  */

void FUN_1046b465c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd297d0;
  _swift_getWitnessTable(&UNK_10dd297d0,&UNK_110798600);
  puRam000000011308d480 = puVar1;
  return;
}



/* Entry: 1046b469c; end: 1046b4747;  */

void FUN_1046b469c(void)

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



/* Entry: 1046b4748; end: 1046b47b3;  */

undefined1  [16] FUN_1046b4748(undefined8 param_1)

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
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b47b4);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x65636e61766461;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b47b4; end: 1046b4803;  */

undefined1  [16] FUN_1046b47b4(void)

{
  return ZEXT816(0x110798600);
}



/* Entry: 1046b4804; end: 1046b4843;  */

void FUN_1046b4804(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd298c0;
  _swift_getWitnessTable(&UNK_10dd298c0,&UNK_110798688);
  puRam000000011308d488 = puVar1;
  return;
}



/* Entry: 1046b4844; end: 1046b48ef;  */

void FUN_1046b4844(void)

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



/* Entry: 1046b48f0; end: 1046b4957;  */

undefined1  [16] FUN_1046b48f0(undefined8 param_1)

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
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b4958);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar2 = 0x6e6f7a616d61;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b4958; end: 1046b49a7;  */

undefined1  [16] FUN_1046b4958(void)

{
  return ZEXT816(0x110798688);
}



/* Entry: 1046b49a8; end: 1046b49e7;  */

void FUN_1046b49a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd299b0;
  _swift_getWitnessTable(&UNK_10dd299b0,&UNK_110798710);
  puRam000000011308d490 = puVar1;
  return;
}



/* Entry: 1046b49e8; end: 1046b4a93;  */

void FUN_1046b49e8(void)

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



/* Entry: 1046b4a94; end: 1046b4b0f;  */

undefined1  [16] FUN_1046b4a94(undefined8 param_1)

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
    uVar3 = 0xe400000000000000;
    uVar2 = 0x65646968;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b4b10);
      (*pcVar1)();
    }
    uVar3 = 0xe400000000000000;
    uVar2 = 0x776f6873;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b4b10; end: 1046b4b1f;  */

undefined1  [16] FUN_1046b4b10(void)

{
  return ZEXT816(0x110798710);
}



/* Entry: 1046b4b20; end: 1046b4c77;  */

undefined1  [16] FUN_1046b4b20(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar3._8_8_ = 0xe700000000000000;
        auVar3._0_8_ = 0x6e776f6e6b6e75;
        return auVar3;
      }
      if (param_1 == 1) {
        pcVar2 = "internalAttachment";
LAB_1046b4bec:
        auVar6._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
        auVar6._0_8_ = 0xd000000000000012;
        return auVar6;
      }
    }
    else {
      if (param_1 == 2) {
        pcVar2 = "internalAttachmentSSFEnabled";
LAB_1046b4ba0:
        auVar5._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
        auVar5._0_8_ = 0xd00000000000001c;
        return auVar5;
      }
      if (param_1 == 3) {
        auVar7._8_8_ = 0x800000010f20bd50;
        auVar7._0_8_ = 0xd00000000000001a;
        return auVar7;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar4._8_8_ = 0x800000010f20bd20;
      auVar4._0_8_ = 0xd000000000000024;
      return auVar4;
    }
    if (param_1 == 5) {
      pcVar2 = "externalAttachment";
      goto LAB_1046b4bec;
    }
  }
  else {
    if (param_1 == 6) {
      pcVar2 = "externalAttachmentSSFEnabled";
      goto LAB_1046b4ba0;
    }
    if (param_1 == 7) {
      auVar8._8_8_ = 0x800000010f20bcc0;
      auVar8._0_8_ = 0xd000000000000014;
      return auVar8;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110798798,&lStack_18,&UNK_110798798,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b4c78);
  (*pcVar1)();
}



/* Entry: 1046b4c78; end: 1046b4c8b;  */

bool FUN_1046b4c78(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b4c8c; end: 1046b4d63;  */

void FUN_1046b4c8c(void)

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



/* Entry: 1046b4d64; end: 1046b4d8b;  */

void FUN_1046b4d64(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b4d8c; end: 1046b4dcb;  */

void FUN_1046b4d8c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29aa0;
  _swift_getWitnessTable(&UNK_10dd29aa0,&UNK_110798798);
  puRam000000011308d498 = puVar1;
  return;
}



/* Entry: 1046b4dcc; end: 1046b4ddb;  */

undefined1  [16] FUN_1046b4dcc(void)

{
  return ZEXT816(0x110798798);
}


