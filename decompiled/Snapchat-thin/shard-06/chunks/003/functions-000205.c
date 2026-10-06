/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046b0230; end: 1046b023b;  */

void FUN_1046b0230(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b023c; end: 1046b02e7;  */

void FUN_1046b023c(void)

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



/* Entry: 1046b02e8; end: 1046b03b3;  */

undefined1  [16] FUN_1046b02e8(undefined8 param_1)

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
      uVar2 = 0x4e574f4e4b4e55;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046b0398:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b03b4);
        (*pcVar1)();
      }
      uVar3 = 0xe400000000000000;
      uVar2 = 0x50414e53;
    }
  }
  else if (lStack_18 == 4) {
    uVar3 = 0xe600000000000000;
    uVar2 = 0x3036335f5644;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe90000000000004e;
    uVar2 = 0x49564f4c5f505041;
  }
  else {
    if (lStack_18 != 2) goto LAB_1046b0398;
    uVar3 = 0xe600000000000000;
    uVar2 = 0x4f434f4c4f4d;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b03b4; end: 1046b03c3; +[SCAdDemandSourceExtensions fromRawProtoValue:] */

long FUN_1046b03b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 4) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 1046b03c4; end: 1046b04b3; +[SCAdDemandSourceExtensions stringValueForDemandSource:] */

void FUN_1046b03c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_28;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x4e574f4e4b4e55;
    }
    else {
      if (param_3 != 1) {
LAB_1046b0490:
        lStack_28 = param_3;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_110797600,&lStack_28,&UNK_110797600,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b04b4);
        (*pcVar1)();
      }
      uVar3 = 0xe400000000000000;
      uVar2 = 0x50414e53;
    }
  }
  else if (param_3 == 4) {
    uVar3 = 0xe600000000000000;
    uVar2 = 0x3036335f5644;
  }
  else if (param_3 == 3) {
    uVar3 = 0xe90000000000004e;
    uVar2 = 0x49564f4c5f505041;
  }
  else {
    if (param_3 != 2) goto LAB_1046b0490;
    uVar3 = 0xe600000000000000;
    uVar2 = 0x4f434f4c4f4d;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046b04b4; end: 1046b04ef; -[SCAdDemandSourceExtensions init] */

void FUN_1046b04b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046b04f0; end: 1046b0523;  */

void FUN_1046b04f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1046b0524; end: 1046b0537;  */

undefined1  [16] FUN_1046b0524(ulong param_1)

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



/* Entry: 1046b0538; end: 1046b0577;  */

void FUN_1046b0538(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27b50;
  _swift_getWitnessTable(&UNK_10dd27b50,&UNK_110797600);
  puRam000000011308d2d0 = puVar1;
  return;
}



/* Entry: 1046b0578; end: 1046b0587;  */

undefined1  [16] FUN_1046b0578(void)

{
  return ZEXT816(0x110797600);
}



/* Entry: 1046b0588; end: 1046b06f7;  */

void FUN_1046b0588(void)

{
  _objc_opt_self(&PTR_PTR_1129d2f90);
  return;
}



/* Entry: 1046b06f8; end: 1046b070b;  */

bool FUN_1046b06f8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b070c; end: 1046b07e3;  */

void FUN_1046b070c(void)

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



/* Entry: 1046b07e4; end: 1046b080b;  */

void FUN_1046b07e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b080c; end: 1046b084b;  */

void FUN_1046b080c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27c50;
  _swift_getWitnessTable(&UNK_10dd27c50,&UNK_110797688);
  puRam000000011308d300 = puVar1;
  return;
}



/* Entry: 1046b084c; end: 1046b089b;  */

undefined1  [16] FUN_1046b084c(void)

{
  return ZEXT816(0x110797688);
}



/* Entry: 1046b089c; end: 1046b08db;  */

void FUN_1046b089c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27d40;
  _swift_getWitnessTable(&UNK_10dd27d40,&UNK_110797710);
  puRam000000011308d308 = puVar1;
  return;
}



/* Entry: 1046b08dc; end: 1046b0987;  */

void FUN_1046b08dc(void)

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



/* Entry: 1046b0988; end: 1046b09e3;  */

void FUN_1046b0988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046b0ad4();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046b09e4; end: 1046b0a2f;  */

void FUN_1046b09e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046b0ad4();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046b0a30; end: 1046b0ac3;  */

undefined1  [16] FUN_1046b0a30(undefined8 param_1)

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
    uVar3 = 0xea00000000006465;
    uVar2 = 0x707061546e6f6369;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b0ac4);
      (*pcVar1)();
    }
    uVar3 = 0xe900000000000070;
    uVar2 = 0x6154656c62756f64;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b0ac4; end: 1046b0ad3;  */

undefined1  [16] FUN_1046b0ac4(void)

{
  return ZEXT816(0x110797710);
}



/* Entry: 1046b0ad4; end: 1046b0b13;  */

void FUN_1046b0ad4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27d68;
  _swift_getWitnessTable(&UNK_10dd27d68,&UNK_110797710);
  puRam000000011308d310 = puVar1;
  return;
}



/* Entry: 1046b0b14; end: 1046b0b53;  */

bool FUN_1046b0b14(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b0b54; end: 1046b0b93;  */

void FUN_1046b0b54(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27e80;
  _swift_getWitnessTable(&UNK_10dd27e80,&UNK_1107977b8);
  puRam000000011308d318 = puVar1;
  return;
}



/* Entry: 1046b0b94; end: 1046b0c3f;  */

void FUN_1046b0b94(void)

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



/* Entry: 1046b0c40; end: 1046b0cdb;  */

undefined1  [16] FUN_1046b0c40(undefined8 param_1)

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
    uVar3 = 0xee00616964654d65;
    uVar2 = 0x6d61724674736562;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b0cdc);
      (*pcVar1)();
    }
    uVar3 = 0x800000010f20b850;
    uVar2 = 0xd000000000000010;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b0cdc; end: 1046b0d2b;  */

undefined1  [16] FUN_1046b0cdc(void)

{
  return ZEXT816(0x1107977b8);
}



/* Entry: 1046b0d2c; end: 1046b0d6b;  */

void FUN_1046b0d2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27f70;
  _swift_getWitnessTable(&UNK_10dd27f70,&UNK_110797840);
  puRam000000011308d320 = puVar1;
  return;
}



/* Entry: 1046b0d6c; end: 1046b0e17;  */

void FUN_1046b0d6c(void)

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



/* Entry: 1046b0e18; end: 1046b0eab;  */

undefined1  [16] FUN_1046b0e18(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  uVar3 = 0xea0000000000656d;
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar2 = 0x617246616964656d;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe800000000000000;
    uVar2 = 0x656d617246617463;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b0eac);
      (*pcVar1)();
    }
    uVar3 = 0xea00000000006e65;
    uVar2 = 0x657263536c6c7566;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b0eac; end: 1046b0ebb;  */

undefined1  [16] FUN_1046b0eac(void)

{
  return ZEXT816(0x110797840);
}



/* Entry: 1046b0ebc; end: 1046b1093;  */

undefined1  [16] FUN_1046b0ebc(undefined8 param_1)

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
  undefined8 uStack_18;
  
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 1:
    uVar2 = 0x7079746275536f6e;
    uVar3 = 0xe900000000000065;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar9._8_8_ = 0xe500000000000000;
    auVar9._0_8_ = 0x73776f6873;
    return auVar9;
  case 3:
    auVar10._8_8_ = 0xe900000000000073;
    auVar10._0_8_ = 0x6c616e696769726f;
    return auVar10;
  case 4:
    pcVar4 = "curatedOurStories";
    break;
  case 5:
    auVar12._8_8_ = 0x800000010f20b8f0;
    auVar12._0_8_ = 0xd00000000000001a;
    return auVar12;
  case 6:
    auVar14._8_8_ = 0x800000010f20b8d0;
    auVar14._0_8_ = 0xd000000000000010;
    return auVar14;
  case 7:
    auVar11._8_8_ = 0xe900000000000072;
    auVar11._0_8_ = 0x656873696c627570;
    return auVar11;
  case 8:
    auVar16._8_8_ = 0xe700000000000000;
    auVar16._0_8_ = 0x72616c75706f70;
    return auVar16;
  case 9:
    auVar8._8_8_ = 0xe800000000000000;
    auVar8._0_8_ = 0x6c6169636966666f;
    return auVar8;
  case 10:
    auVar15._8_8_ = 0xe600000000000000;
    auVar15._0_8_ = 0x63696c627570;
    return auVar15;
  case 0xb:
    auVar6._8_8_ = 0xea00000000006d61;
    auVar6._0_8_ = 0x657274536576696c;
    return auVar6;
  case 0xc:
    pcVar4 = "publicNonRevShare";
    break;
  case 0xd:
    auVar13._8_8_ = 0x800000010f20b890;
    auVar13._0_8_ = 0xd000000000000014;
    return auVar13;
  case 0xe:
    pcVar4 = "spotlightRevShare";
    break;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107978c8,&uStack_18,&UNK_1107978c8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1094);
    (*pcVar1)();
  }
  auVar7._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar7._0_8_ = 0xd000000000000011;
  return auVar7;
}



/* Entry: 1046b1094; end: 1046b10a7;  */

bool FUN_1046b1094(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b10a8; end: 1046b10d3;  */

void FUN_1046b10a8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b123c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b10d4; end: 1046b10df;  */

void FUN_1046b10d4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b10e0; end: 1046b118b;  */

void FUN_1046b10e0(void)

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



/* Entry: 1046b118c; end: 1046b1193;  */

undefined1  [16] FUN_1046b118c(void)

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
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(uStack_18) {
  case 1:
    uVar2 = 0x7079746275536f6e;
    uVar3 = 0xe900000000000065;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar9._8_8_ = 0xe500000000000000;
    auVar9._0_8_ = 0x73776f6873;
    return auVar9;
  case 3:
    auVar10._8_8_ = 0xe900000000000073;
    auVar10._0_8_ = 0x6c616e696769726f;
    return auVar10;
  case 4:
    pcVar4 = "curatedOurStories";
    break;
  case 5:
    auVar12._8_8_ = 0x800000010f20b8f0;
    auVar12._0_8_ = 0xd00000000000001a;
    return auVar12;
  case 6:
    auVar14._8_8_ = 0x800000010f20b8d0;
    auVar14._0_8_ = 0xd000000000000010;
    return auVar14;
  case 7:
    auVar11._8_8_ = 0xe900000000000072;
    auVar11._0_8_ = 0x656873696c627570;
    return auVar11;
  case 8:
    auVar16._8_8_ = 0xe700000000000000;
    auVar16._0_8_ = 0x72616c75706f70;
    return auVar16;
  case 9:
    auVar8._8_8_ = 0xe800000000000000;
    auVar8._0_8_ = 0x6c6169636966666f;
    return auVar8;
  case 10:
    auVar15._8_8_ = 0xe600000000000000;
    auVar15._0_8_ = 0x63696c627570;
    return auVar15;
  case 0xb:
    auVar6._8_8_ = 0xea00000000006d61;
    auVar6._0_8_ = 0x657274536576696c;
    return auVar6;
  case 0xc:
    pcVar4 = "publicNonRevShare";
    break;
  case 0xd:
    auVar13._8_8_ = 0x800000010f20b890;
    auVar13._0_8_ = 0xd000000000000014;
    return auVar13;
  case 0xe:
    pcVar4 = "spotlightRevShare";
    break;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107978c8,&uStack_18,&UNK_1107978c8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1094);
    (*pcVar1)();
  }
  auVar7._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar7._0_8_ = 0xd000000000000011;
  return auVar7;
}



/* Entry: 1046b1194; end: 1046b11cb; +[SCAdInventorySubtypeExtensions stringValueFrom:] */

void FUN_1046b1194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1046b124c(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046b11cc; end: 1046b1207; -[SCAdInventorySubtypeExtensions init] */

void FUN_1046b11cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046b1208; end: 1046b123b;  */

void FUN_1046b1208(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1046b123c; end: 1046b124b;  */

undefined1  [16] FUN_1046b123c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xf) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xe < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046b124c; end: 1046b142f;  */

undefined1  [16] FUN_1046b124c(undefined8 param_1)

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
  undefined8 uStack_18;
  
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 1:
    uVar3 = 0xea00000000006570;
    uVar2 = 0x79746275735f6f6e;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar10._8_8_ = 0xe500000000000000;
    auVar10._0_8_ = 0x73776f6873;
    return auVar10;
  case 3:
    auVar11._8_8_ = 0xe900000000000073;
    auVar11._0_8_ = 0x6c616e696769726f;
    return auVar11;
  case 4:
    pcVar4 = "curated_our_stories";
    break;
  case 5:
    auVar13._8_8_ = 0x800000010f20b9b0;
    auVar13._0_8_ = 0xd00000000000001d;
    return auVar13;
  case 6:
    auVar15._8_8_ = 0x800000010f20b990;
    auVar15._0_8_ = 0xd000000000000011;
    return auVar15;
  case 7:
    auVar12._8_8_ = 0xe900000000000072;
    auVar12._0_8_ = 0x656873696c627570;
    return auVar12;
  case 8:
    auVar17._8_8_ = 0xe700000000000000;
    auVar17._0_8_ = 0x72616c75706f70;
    return auVar17;
  case 9:
    auVar9._8_8_ = 0xe800000000000000;
    auVar9._0_8_ = 0x6c6169636966666f;
    return auVar9;
  case 10:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x63696c627570;
    return auVar16;
  case 0xb:
    auVar6._8_8_ = 0xeb000000006d6165;
    auVar6._0_8_ = 0x7274735f6576696c;
    return auVar6;
  case 0xc:
    auVar8._8_8_ = 0x800000010f20b970;
    auVar8._0_8_ = 0xd000000000000014;
    return auVar8;
  case 0xd:
    auVar14._8_8_ = 0x800000010f20b950;
    auVar14._0_8_ = 0xd000000000000017;
    return auVar14;
  case 0xe:
    pcVar4 = "spotlight_rev_share";
    break;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107978c8,&uStack_18,&UNK_1107978c8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1430);
    (*pcVar1)();
  }
  auVar7._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar7._0_8_ = 0xd000000000000013;
  return auVar7;
}



/* Entry: 1046b1430; end: 1046b1433;  */

void FUN_1046b1430(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28080;
  _swift_getWitnessTable(&UNK_10dd28080,&UNK_1107978c8);
  puRam000000011308d328 = puVar1;
  return;
}



/* Entry: 1046b1434; end: 1046b1473;  */

void FUN_1046b1434(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28080;
  _swift_getWitnessTable(&UNK_10dd28080,&UNK_1107978c8);
  puRam000000011308d328 = puVar1;
  return;
}



/* Entry: 1046b1474; end: 1046b1483;  */

undefined1  [16] FUN_1046b1474(void)

{
  return ZEXT816(0x1107978c8);
}



/* Entry: 1046b1484; end: 1046b14a3;  */

void FUN_1046b1484(void)

{
  _objc_opt_self(&PTR_PTR_1129d3040);
  return;
}



/* Entry: 1046b14a4; end: 1046b14e3;  */

bool FUN_1046b14a4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b14e4; end: 1046b1523;  */

void FUN_1046b14e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd281a0;
  _swift_getWitnessTable(&UNK_10dd281a0,&UNK_110797950);
  puRam000000011308d358 = puVar1;
  return;
}



/* Entry: 1046b1524; end: 1046b15cf;  */

void FUN_1046b1524(void)

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



/* Entry: 1046b15d0; end: 1046b165f;  */

undefined1  [16] FUN_1046b15d0(undefined8 param_1)

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
    uVar3 = 0xea00000000006c6c;
    uVar2 = 0x41656c6261736964;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1660);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x64656c62616e65;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b1660; end: 1046b1683;  */

undefined1  [16] FUN_1046b1660(void)

{
  return ZEXT816(0x110797950);
}



/* Entry: 1046b1684; end: 1046b16af;  */

void FUN_1046b1684(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b1838();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b16b0; end: 1046b16bb;  */

void FUN_1046b16b0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b16bc; end: 1046b1767;  */

void FUN_1046b16bc(void)

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



/* Entry: 1046b1768; end: 1046b1837;  */

undefined1  [16] FUN_1046b1768(undefined8 param_1)

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
LAB_1046b181c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1838);
        (*pcVar1)();
      }
      uVar3 = 0xe800000000000000;
      uVar2 = 0x64657463656c6573;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xea00000000006465;
    uVar2 = 0x6c6c69666f747561;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x6465707974;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046b181c;
    uVar3 = 0xe600000000000000;
    uVar2 = 0x646574736170;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b1838; end: 1046b184b;  */

undefined1  [16] FUN_1046b1838(ulong param_1)

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



/* Entry: 1046b184c; end: 1046b188b;  */

void FUN_1046b184c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28290;
  _swift_getWitnessTable(&UNK_10dd28290,&UNK_1107979d8);
  puRam000000011308d360 = puVar1;
  return;
}



/* Entry: 1046b188c; end: 1046b189b;  */

undefined1  [16] FUN_1046b188c(void)

{
  return ZEXT816(0x1107979d8);
}



/* Entry: 1046b189c; end: 1046b193f;  */

undefined1  [16] FUN_1046b189c(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  if (param_1 == 2) {
    auVar3._8_8_ = 0x800000010f20b9f0;
    auVar3._0_8_ = 0xd000000000000010;
    return auVar3;
  }
  if (param_1 == 1) {
    auVar2._8_8_ = 0xed00006465727265;
    auVar2._0_8_ = 0x666572506461656c;
    return auVar2;
  }
  if (param_1 == 0) {
    auVar4._8_8_ = 0x800000010f20ba10;
    auVar4._0_8_ = 0xd000000000000018;
    return auVar4;
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797a60,&lStack_18,&UNK_110797a60,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1940);
  (*pcVar1)();
}



/* Entry: 1046b1940; end: 1046b197f;  */

bool FUN_1046b1940(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b1980; end: 1046b19bf;  */

void FUN_1046b1980(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28390;
  _swift_getWitnessTable(&UNK_10dd28390,&UNK_110797a60);
  puRam000000011308d368 = puVar1;
  return;
}



/* Entry: 1046b19c0; end: 1046b1a6b;  */

void FUN_1046b19c0(void)

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



/* Entry: 1046b1a6c; end: 1046b1a83;  */

undefined1  [16] FUN_1046b1a6c(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 2) {
    auVar3._8_8_ = 0x800000010f20b9f0;
    auVar3._0_8_ = 0xd000000000000010;
    return auVar3;
  }
  if (lStack_18 == 1) {
    auVar2._8_8_ = 0xed00006465727265;
    auVar2._0_8_ = 0x666572506461656c;
    return auVar2;
  }
  if (lStack_18 == 0) {
    auVar4._8_8_ = 0x800000010f20ba10;
    auVar4._0_8_ = 0xd000000000000018;
    return auVar4;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797a60,&lStack_18,&UNK_110797a60,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1940);
  (*pcVar1)();
}



/* Entry: 1046b1a84; end: 1046b1b7f;  */

undefined1  [16] FUN_1046b1a84(long param_1)

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
      auVar4._8_8_ = 0x800000010f20bb20;
      auVar4._0_8_ = 0xd00000000000001c;
      return auVar4;
    }
    if (param_1 == 1) {
      auVar2._8_8_ = 0x800000010f20baf0;
      auVar2._0_8_ = 0xd000000000000025;
      return auVar2;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0x800000010f20bac0;
      auVar6._0_8_ = 0xd000000000000029;
      return auVar6;
    }
  }
  else {
    if (param_1 == 3) {
      auVar5._8_8_ = 0x800000010f20ba90;
      auVar5._0_8_ = 0xd000000000000024;
      return auVar5;
    }
    if (param_1 == 4) {
      auVar3._8_8_ = 0x800000010f20ba60;
      auVar3._0_8_ = 0xd00000000000002b;
      return auVar3;
    }
    if (param_1 == 5) {
      auVar7._8_8_ = 0x800000010f20ba30;
      auVar7._0_8_ = 0xd000000000000026;
      return auVar7;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797ae8,&lStack_18,&UNK_110797ae8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1b80);
  (*pcVar1)();
}



/* Entry: 1046b1b80; end: 1046b1b93;  */

bool FUN_1046b1b80(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b1b94; end: 1046b1bbf;  */

void FUN_1046b1b94(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010428a34c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b1bc0; end: 1046b1bcb;  */

void FUN_1046b1bc0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b1bcc; end: 1046b1c77;  */

void FUN_1046b1bcc(void)

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



/* Entry: 1046b1c78; end: 1046b1c83;  */

undefined1  [16] FUN_1046b1c78(void)

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
      auVar4._8_8_ = 0x800000010f20bb20;
      auVar4._0_8_ = 0xd00000000000001c;
      return auVar4;
    }
    if (lStack_18 == 1) {
      auVar2._8_8_ = 0x800000010f20baf0;
      auVar2._0_8_ = 0xd000000000000025;
      return auVar2;
    }
    if (lStack_18 == 2) {
      auVar6._8_8_ = 0x800000010f20bac0;
      auVar6._0_8_ = 0xd000000000000029;
      return auVar6;
    }
  }
  else {
    if (lStack_18 == 3) {
      auVar5._8_8_ = 0x800000010f20ba90;
      auVar5._0_8_ = 0xd000000000000024;
      return auVar5;
    }
    if (lStack_18 == 4) {
      auVar3._8_8_ = 0x800000010f20ba60;
      auVar3._0_8_ = 0xd00000000000002b;
      return auVar3;
    }
    if (lStack_18 == 5) {
      auVar7._8_8_ = 0x800000010f20ba30;
      auVar7._0_8_ = 0xd000000000000026;
      return auVar7;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797ae8,&lStack_18,&UNK_110797ae8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1b80);
  (*pcVar1)();
}



/* Entry: 1046b1c84; end: 1046b1cc3;  */

void FUN_1046b1c84(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28490;
  _swift_getWitnessTable(&UNK_10dd28490,&UNK_110797ae8);
  puRam000000011308d370 = puVar1;
  return;
}



/* Entry: 1046b1cc4; end: 1046b1ce7;  */

undefined1  [16] FUN_1046b1cc4(void)

{
  return ZEXT816(0x110797ae8);
}



/* Entry: 1046b1ce8; end: 1046b1d13;  */

void FUN_1046b1ce8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b1e98();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b1d14; end: 1046b1d1f;  */

void FUN_1046b1d14(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b1d20; end: 1046b1dcb;  */

void FUN_1046b1d20(void)

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



/* Entry: 1046b1dcc; end: 1046b1e97;  */

undefined1  [16] FUN_1046b1dcc(undefined8 param_1)

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
LAB_1046b1e7c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b1e98);
        (*pcVar1)();
      }
      uVar3 = 0xe900000000000064;
      uVar2 = 0x6572726566657270;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xec00000064657272;
    uVar2 = 0x6566657250746f6e;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b1e7c;
    uVar2 = 0x696c617571736964;
    uVar3 = 0xec00000064656966;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b1e98; end: 1046b1eab;  */

undefined1  [16] FUN_1046b1e98(ulong param_1)

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



/* Entry: 1046b1eac; end: 1046b1eeb;  */

void FUN_1046b1eac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28590;
  _swift_getWitnessTable(&UNK_10dd28590,&UNK_110797b70);
  puRam000000011308d378 = puVar1;
  return;
}



/* Entry: 1046b1eec; end: 1046b1efb;  */

undefined1  [16] FUN_1046b1eec(void)

{
  return ZEXT816(0x110797b70);
}



/* Entry: 1046b1efc; end: 1046b205f;  */

undefined1  [16] FUN_1046b1efc(undefined8 param_1)

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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_18;
  
  uVar4 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 1:
    uVar4 = 0xe600000000000000;
    uVar2 = 0x6d6f74737563;
  case 0:
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar8._8_8_ = 0xe900000000000065;
    auVar8._0_8_ = 0x6d614e7473726966;
    return auVar8;
  case 3:
    uVar3 = 0x7473616c;
    break;
  case 4:
    auVar6._8_8_ = 0xe500000000000000;
    auVar6._0_8_ = 0x656e6f6870;
    return auVar6;
  case 5:
    auVar11._8_8_ = 0xe500000000000000;
    auVar11._0_8_ = 0x6c69616d65;
    return auVar11;
  case 6:
    auVar12._8_8_ = 0xe700000000000000;
    auVar12._0_8_ = 0x73736572646461;
    return auVar12;
  case 7:
    auVar10._8_8_ = 0xea00000000006564;
    auVar10._0_8_ = 0x6f436c6174736f70;
    return auVar10;
  case 8:
    auVar14._8_8_ = 0xe400000000000000;
    auVar14._0_8_ = 0x79614462;
    return auVar14;
  case 9:
    auVar7._8_8_ = 0xec0000006e6f6974;
    auVar7._0_8_ = 0x617a696e6167726f;
    return auVar7;
  case 10:
    auVar13._8_8_ = 0x800000010f20bb40;
    auVar13._0_8_ = 0xd000000000000011;
    return auVar13;
  case 0xb:
    uVar3 = 0x6c6c7566;
    break;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110797bf8,&uStack_18,&UNK_110797bf8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b2060);
    (*pcVar1)();
  }
  auVar9._0_8_ = uVar3 | 0x656d614e00000000;
  auVar9._8_8_ = 0xe800000000000000;
  return auVar9;
}



/* Entry: 1046b2060; end: 1046b2073;  */

bool FUN_1046b2060(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b2074; end: 1046b209f;  */

void FUN_1046b2074(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b2160();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b20a0; end: 1046b20ab;  */

void FUN_1046b20a0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b20ac; end: 1046b2157;  */

void FUN_1046b20ac(void)

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



/* Entry: 1046b2158; end: 1046b2173;  */

undefined1  [16] FUN_1046b2158(void)

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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar4 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(uStack_18) {
  case 1:
    uVar4 = 0xe600000000000000;
    uVar2 = 0x6d6f74737563;
  case 0:
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar8._8_8_ = 0xe900000000000065;
    auVar8._0_8_ = 0x6d614e7473726966;
    return auVar8;
  case 3:
    uVar3 = 0x7473616c;
    break;
  case 4:
    auVar6._8_8_ = 0xe500000000000000;
    auVar6._0_8_ = 0x656e6f6870;
    return auVar6;
  case 5:
    auVar11._8_8_ = 0xe500000000000000;
    auVar11._0_8_ = 0x6c69616d65;
    return auVar11;
  case 6:
    auVar12._8_8_ = 0xe700000000000000;
    auVar12._0_8_ = 0x73736572646461;
    return auVar12;
  case 7:
    auVar10._8_8_ = 0xea00000000006564;
    auVar10._0_8_ = 0x6f436c6174736f70;
    return auVar10;
  case 8:
    auVar14._8_8_ = 0xe400000000000000;
    auVar14._0_8_ = 0x79614462;
    return auVar14;
  case 9:
    auVar7._8_8_ = 0xec0000006e6f6974;
    auVar7._0_8_ = 0x617a696e6167726f;
    return auVar7;
  case 10:
    auVar13._8_8_ = 0x800000010f20bb40;
    auVar13._0_8_ = 0xd000000000000011;
    return auVar13;
  case 0xb:
    uVar3 = 0x6c6c7566;
    break;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110797bf8,&uStack_18,&UNK_110797bf8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b2060);
    (*pcVar1)();
  }
  auVar9._0_8_ = uVar3 | 0x656d614e00000000;
  auVar9._8_8_ = 0xe800000000000000;
  return auVar9;
}



/* Entry: 1046b2174; end: 1046b21b3;  */

void FUN_1046b2174(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2868c;
  _swift_getWitnessTable(&UNK_10dd2868c,&UNK_110797bf8);
  puRam000000011308d380 = puVar1;
  return;
}



/* Entry: 1046b21b4; end: 1046b2203;  */

undefined1  [16] FUN_1046b21b4(void)

{
  return ZEXT816(0x110797bf8);
}



/* Entry: 1046b2204; end: 1046b2243;  */

void FUN_1046b2204(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28780;
  _swift_getWitnessTable(&UNK_10dd28780,&UNK_110797c80);
  puRam000000011308d388 = puVar1;
  return;
}



/* Entry: 1046b2244; end: 1046b22ef;  */

void FUN_1046b2244(void)

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



/* Entry: 1046b22f0; end: 1046b2387;  */

undefined1  [16] FUN_1046b22f0(undefined8 param_1)

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
    uVar3 = 0xec000000746e6574;
    uVar2 = 0x6e49726568676968;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b2388);
      (*pcVar1)();
    }
    uVar3 = 0xea0000000000656d;
    uVar2 = 0x756c6f5665726f6d;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b2388; end: 1046b23d7;  */

undefined1  [16] FUN_1046b2388(void)

{
  return ZEXT816(0x110797c80);
}



/* Entry: 1046b23d8; end: 1046b2417;  */

void FUN_1046b23d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd28870;
  _swift_getWitnessTable(&UNK_10dd28870,&UNK_110797d08);
  puRam000000011308d390 = puVar1;
  return;
}



/* Entry: 1046b2418; end: 1046b24c3;  */

void FUN_1046b2418(void)

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



/* Entry: 1046b24c4; end: 1046b2553;  */

undefined1  [16] FUN_1046b24c4(undefined8 param_1)

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
    uVar2 = 0x64726143646e65;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b2554);
      (*pcVar1)();
    }
    uVar3 = 0xea0000000000746e;
    uVar2 = 0x656d686361747461;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b2554; end: 1046b2563;  */

undefined1  [16] FUN_1046b2554(void)

{
  return ZEXT816(0x110797d08);
}



/* Entry: 1046b2564; end: 1046b26a7;  */

undefined1  [16] FUN_1046b2564(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar2._8_8_ = 0xe700000000000000;
        auVar2._0_8_ = 0x6e776f6e6b6e75;
        return auVar2;
      }
      if (param_1 == 1) {
        auVar6._8_8_ = 0xe900000000000074;
        auVar6._0_8_ = 0x7865546e69616c70;
        return auVar6;
      }
    }
    else {
      if (param_1 == 2) {
        auVar4._8_8_ = 0xe500000000000000;
        auVar4._0_8_ = 0x656e6f6870;
        return auVar4;
      }
      if (param_1 == 3) {
        auVar8._8_8_ = 0xe500000000000000;
        auVar8._0_8_ = 0x6c69616d65;
        return auVar8;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar3._8_8_ = 0xe700000000000000;
      auVar3._0_8_ = 0x73736572646461;
      return auVar3;
    }
    if (param_1 == 5) {
      auVar7._8_8_ = 0xe400000000000000;
      auVar7._0_8_ = 0x65746164;
      return auVar7;
    }
  }
  else {
    if (param_1 == 6) {
      auVar5._8_8_ = 0x800000010f20bb80;
      auVar5._0_8_ = 0xd000000000000011;
      return auVar5;
    }
    if (param_1 == 7) {
      auVar9._8_8_ = 0x800000010f20bb60;
      auVar9._0_8_ = 0xd000000000000012;
      return auVar9;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797d90,&lStack_18,&UNK_110797d90,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b26a8);
  (*pcVar1)();
}



/* Entry: 1046b26a8; end: 1046b26bb;  */

bool FUN_1046b26a8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b26bc; end: 1046b26e7;  */

void FUN_1046b26bc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b27a8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b26e8; end: 1046b26f3;  */

void FUN_1046b26e8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b26f4; end: 1046b279f;  */

void FUN_1046b26f4(void)

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


