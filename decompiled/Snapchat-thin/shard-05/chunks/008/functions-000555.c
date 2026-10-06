/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041fb300; end: 1041fb3d7;  */

void FUN_1041fb300(void)

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



/* Entry: 1041fb3d8; end: 1041fb3e3;  */

void FUN_1041fb3d8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041fb3e4; end: 1041fb4c3;  */

undefined1  [16] FUN_1041fb3e4(undefined8 param_1)

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
LAB_1041fb4a8:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1041fb4c4);
        (*pcVar1)();
      }
      uVar3 = 0xea0000000000656c;
      uVar2 = 0x626967696c656e69;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xeb000000006e6f69;
    uVar2 = 0x7463656c65536f6e;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e49646574706f;
  }
  else {
    if (lStack_18 != 4) goto LAB_1041fb4a8;
    uVar3 = 0xe800000000000000;
    uVar2 = 0x74754f646574706f;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1041fb4c4; end: 1041fb4d7;  */

undefined1  [16] FUN_1041fb4c4(ulong param_1)

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



/* Entry: 1041fb4d8; end: 1041fb517;  */

void FUN_1041fb4d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2590;
  _swift_getWitnessTable(&UNK_10dce2590,&UNK_110751410);
  puRam0000000113069540 = puVar1;
  return;
}



/* Entry: 1041fb518; end: 1041fb527;  */

undefined1  [16] FUN_1041fb518(void)

{
  return ZEXT816(0x110751410);
}



/* Entry: 1041fb528; end: 1041fb5d7;  */

void FUN_1041fb528(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001041fb5f4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1041fb5d8; end: 1041fb607;  */

void FUN_1041fb5d8(ulong *param_1,ulong *param_2)

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



/* Entry: 1041fb608; end: 1041fb647;  */

void FUN_1041fb608(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2680;
  _swift_getWitnessTable(&UNK_10dce2680,&UNK_110751498);
  puRam0000000113069548 = puVar1;
  return;
}



/* Entry: 1041fb648; end: 1041fb64b;  */

void FUN_1041fb648(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2720;
  _swift_getWitnessTable(&UNK_10dce2720,&UNK_1107514b8);
  puRam0000000113069550 = puVar1;
  return;
}



/* Entry: 1041fb64c; end: 1041fb68b;  */

void FUN_1041fb64c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2720;
  _swift_getWitnessTable(&UNK_10dce2720,&UNK_1107514b8);
  puRam0000000113069550 = puVar1;
  return;
}



/* Entry: 1041fb68c; end: 1041fb6e7;  */

undefined1  [16] FUN_1041fb68c(void)

{
  return ZEXT816(0x110751498);
}



/* Entry: 1041fb6e8; end: 1041fb7bf;  */

void FUN_1041fb6e8(void)

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



/* Entry: 1041fb7c0; end: 1041fb7df;  */

void FUN_1041fb7c0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041fb7e0; end: 1041fb81f;  */

void FUN_1041fb7e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2800;
  _swift_getWitnessTable(&UNK_10dce2800,&UNK_110751530);
  puRam0000000113069558 = puVar1;
  return;
}



/* Entry: 1041fb820; end: 1041fb82f;  */

undefined1  [16] FUN_1041fb820(void)

{
  return ZEXT816(0x110751530);
}



/* Entry: 1041fb830; end: 1041fb887;  */

uint FUN_1041fb830(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1041fb888(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1041fb888; end: 1041fba27;  */

bool FUN_1041fb888(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_80 [96];
  
  uVar1 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar1 != 0) {
      return false;
    }
    func_0x00010167cb80(param_2,auStack_80);
  }
  else {
    if (uVar1 == 0) {
      func_0x00010167cb80(param_2,auStack_80);
      return false;
    }
    uVar2 = *param_1;
    if ((uVar2 != *param_2 || param_1[1] != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return false;
    }
  }
  if ((((((int)param_1[2] == (int)param_2[2]) &&
        (*(float *)(param_1 + 3) == *(float *)(param_2 + 3))) &&
       (*(float *)((long)param_1 + 0x1c) == *(float *)((long)param_2 + 0x1c))) &&
      (((*(float *)(param_1 + 4) == *(float *)(param_2 + 4) &&
        (*(float *)((long)param_1 + 0x24) == *(float *)((long)param_2 + 0x24))) &&
       ((param_1[5] == param_2[5] &&
        ((param_1[6] == param_2[6] && (*(float *)(param_1 + 7) == *(float *)(param_2 + 7))))))))) &&
     ((*(float *)((long)param_1 + 0x3c) == *(float *)((long)param_2 + 0x3c) &&
      ((((*(float *)(param_1 + 8) == *(float *)(param_2 + 8) &&
         (*(float *)((long)param_1 + 0x44) == *(float *)((long)param_2 + 0x44))) &&
        (param_1[9] == param_2[9])) && (param_1[10] == param_2[10])))))) {
    return (double)param_1[0xb] == (double)param_2[0xb];
  }
  return false;
}



/* Entry: 1041fba28; end: 1041fba2f;  */

void FUN_1041fba28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1041fba30; end: 1041fba8b;  */

undefined8 * FUN_1041fba30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1041fba8c; end: 1041fbb47;  */

undefined8 * FUN_1041fba8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return param_1;
}



/* Entry: 1041fbb48; end: 1041fbbab;  */

undefined8 * FUN_1041fbb48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  param_1[0xb] = param_2[0xb];
  return param_1;
}



/* Entry: 1041fbbac; end: 1041fbc83;  */

int FUN_1041fbbac(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1041fbc84; end: 1041fbd0f;  */

long FUN_1041fbc84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041fbd10; end: 1041fbd57;  */

uint FUN_1041fbd10(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_1041fbd58(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041fbd58; end: 1041fbdeb;  */

undefined8 FUN_1041fbd58(long *param_1,long *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[3] == '\x01' || param_1[2] != param_2[2]) {
      return 0;
    }
    if ((char)param_1[5] == '\x01') {
      if ((char)param_2[5] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[5] != '\x01') && (param_1[4] == param_2[4])) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1041fbdec; end: 1041fbe17;  */

long FUN_1041fbdec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041fbe18; end: 1041fbedf;  */

int FUN_1041fbe18(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1041fbee0; end: 1041fbf73;  */

uint FUN_1041fbee0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_f0 = param_1[0x12];
  uStack_e8 = (undefined1)param_1[0x13];
  uStack_df = *(undefined8 *)((long)param_1 + 0xa1);
  uStack_e7 = (undefined7)*(undefined8 *)((long)param_1 + 0x99);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x99) >> 0x38);
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_40 = param_2[0x12];
  uStack_38 = (undefined1)param_2[0x13];
  uStack_2f = *(undefined8 *)((long)param_2 + 0xa1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_1041fbf74(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1041fbf74; end: 1041fc1b7;  */

byte FUN_1041fbf74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && ((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0)) &&
     (((((double)param_1[3] == (double)param_2[3] && ((double)param_1[4] == (double)param_2[4])) &&
       (((double)param_1[5] == (double)param_2[5] &&
        (((int)param_1[6] == (int)param_2[6] && ((((byte)param_1[7] ^ (byte)param_2[7]) & 1) == 0)))
        ))) && (((*(byte *)((long)param_1 + 0x39) ^ *(byte *)((long)param_2 + 0x39)) & 1) == 0)))) {
    uVar1 = param_2[9];
    if (param_1[9] == 0) {
      if (uVar1 == 0) goto LAB_1041fc06c;
    }
    else if ((uVar1 != 0) &&
            (((uVar2 = param_1[8], uVar2 == param_2[8] && (param_1[9] == uVar1)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)))) {
LAB_1041fc06c:
      if ((((int)param_1[10] == (int)param_2[10]) && ((int)param_1[0xb] == (int)param_2[0xb])) &&
         (((int)param_1[0xc] == (int)param_2[0xc] &&
          ((((int)param_1[0xd] == (int)param_2[0xd] && ((int)param_1[0xe] == (int)param_2[0xe])) &&
           ((int)param_1[0xf] == (int)param_2[0xf])))))) {
        uVar1 = param_2[0x11];
        if (param_1[0x11] == 0) {
          if (uVar1 == 0) goto LAB_1041fc108;
        }
        else if ((uVar1 != 0) &&
                (((uVar2 = param_1[0x10], uVar2 == param_2[0x10] && (param_1[0x11] == uVar1)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)))) {
LAB_1041fc108:
          if ((((((byte)param_1[0x12] ^ (byte)param_2[0x12]) & 1) == 0) &&
              (((*(byte *)((long)param_1 + 0x91) ^ *(byte *)((long)param_2 + 0x91)) & 1) == 0)) &&
             (((int)param_1[0x13] == (int)param_2[0x13] &&
              ((double)param_1[0x14] == (double)param_2[0x14])))) {
            bVar3 = (byte)param_1[0x15] ^ (byte)param_2[0x15] ^ 1;
            goto LAB_1041fc020;
          }
        }
      }
    }
  }
  bVar3 = 0;
LAB_1041fc020:
  return bVar3 & 1;
}



/* Entry: 1041fc1b8; end: 1041fc36f;  */

undefined8 * FUN_1041fc1b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar2 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  uVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1041fc370; end: 1041fc42b;  */

undefined8 * FUN_1041fc370(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[10];
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar1;
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  uVar2 = param_2[0x11];
  uVar1 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x91) = *(undefined1 *)((long)param_2 + 0x91);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  return param_1;
}



/* Entry: 1041fc42c; end: 1041fc4ef;  */

int FUN_1041fc42c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xa9) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1041fc4f0; end: 1041fc547;  */

uint FUN_1041fc4f0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1041fc548(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1041fc548; end: 1041fc6df;  */

bool FUN_1041fc548(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && ((int)param_1[2] == (int)param_2[2])) &&
     ((double)param_1[3] == (double)param_2[3])) {
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[4];
      if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return false;
      }
    }
    if ((((double)param_1[6] == (double)param_2[6]) &&
        ((((byte)param_1[7] ^ (byte)param_2[7]) & 1) == 0)) && (param_1[8] == param_2[8])) {
      return param_1[9] == param_2[9];
    }
  }
  return false;
}



/* Entry: 1041fc6e0; end: 1041fc77b;  */

undefined8 * FUN_1041fc6e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return param_1;
}



/* Entry: 1041fc77c; end: 1041fc7e7;  */

undefined8 * FUN_1041fc77c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 1041fc7e8; end: 1041fc893;  */

int FUN_1041fc7e8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1041fc894; end: 1041fc8eb;  */

uint FUN_1041fc894(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1041fc8ec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1041fc8ec; end: 1041fc967;  */

bool FUN_1041fc8ec(long *param_1,long *param_2)

{
  if ((((*param_1 == *param_2) && ((double)param_1[1] == (double)param_2[1])) &&
      ((double)param_1[2] == (double)param_2[2])) &&
     ((((double)param_1[3] == (double)param_2[3] && ((double)param_1[4] == (double)param_2[4])) &&
      ((double)param_1[5] == (double)param_2[5])))) {
    return (double)param_1[6] == (double)param_2[6];
  }
  return false;
}



/* Entry: 1041fc968; end: 1041fc993;  */

long FUN_1041fc968(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041fc994; end: 1041fc9fb;  */

int FUN_1041fc994(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1041fc9fc; end: 1041fca33;  */

void FUN_1041fc9fc(undefined8 param_1)

{
  if (lRam00000001130695b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f63dc);
  return;
}



/* Entry: 1041fca34; end: 1041fd903;  */

long * FUN_1041fca34(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  code *pcVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar19 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar19;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar11 = 0;
    func_0x000100b91d00();
    lVar26 = *(long *)(lVar11 + -8);
    pcVar22 = *(code **)(lVar26 + 0x30);
    _swift_bridgeObjectRetain(lVar19);
    puVar12 = puVar2;
    (*pcVar22)(puVar2,1,lVar11);
    if ((int)puVar12 == 0) {
      uVar25 = *puVar2;
      uVar28 = puVar2[3];
      uVar27 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar25;
      puVar1[3] = uVar28;
      puVar1[2] = uVar27;
      uVar25 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar25;
      uVar25 = puVar2[6];
      uVar27 = puVar2[7];
      puVar1[6] = uVar25;
      puVar1[7] = uVar27;
      uVar27 = puVar2[8];
      uVar28 = puVar2[9];
      puVar1[8] = uVar27;
      puVar1[9] = uVar28;
      uVar28 = puVar2[10];
      uVar32 = puVar2[0xb];
      puVar1[10] = uVar28;
      puVar1[0xb] = uVar32;
      uVar32 = puVar2[0xc];
      uVar31 = puVar2[0xd];
      puVar1[0xc] = uVar32;
      puVar1[0xd] = uVar31;
      uVar31 = puVar2[0xe];
      uVar30 = puVar2[0xf];
      puVar1[0xe] = uVar31;
      puVar1[0xf] = uVar30;
      uVar30 = puVar2[0x10];
      puVar1[0x10] = uVar30;
      lVar18 = (long)*(int *)(lVar11 + 0x3c);
      lVar13 = 0;
      __s10Foundation4UUIDVMa();
      lVar16 = *(long *)(lVar13 + -8);
      pcVar22 = *(code **)(lVar16 + 0x30);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar32);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar30);
      lVar19 = (long)puVar2 + lVar18;
      (*pcVar22)(lVar19,1,lVar13);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,lVar13);
        (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,lVar13);
      }
      else {
        lVar19 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar18,(long)puVar2 + lVar18,
                *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(lVar11 + 0x40);
      lVar19 = (long)puVar2 + lVar18;
      (*pcVar22)(lVar19,1,lVar13);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,lVar13);
        (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,lVar13);
      }
      else {
        lVar19 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar18,(long)puVar2 + lVar18,
                *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(lVar11 + 0x44);
      lVar19 = (long)puVar2 + lVar18;
      (*pcVar22)(lVar19,1,lVar13);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,lVar13);
        (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,lVar13);
      }
      else {
        lVar19 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar18,(long)puVar2 + lVar18,
                *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x4c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x4c));
      uVar25 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x50));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x50)) = uVar25;
      uVar27 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x54));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x54)) = uVar27;
      uVar28 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x58));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x58)) = uVar28;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x5c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x5c));
      lVar19 = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar28);
      if (lVar19 == 1) {
        uVar25 = puVar3[0xc];
        uVar28 = puVar3[0xf];
        uVar27 = puVar3[0xe];
        puVar12[0xd] = puVar3[0xd];
        puVar12[0xc] = uVar25;
        puVar12[0xf] = uVar28;
        puVar12[0xe] = uVar27;
        uVar25 = puVar3[0x10];
        uVar28 = puVar3[0x13];
        uVar27 = puVar3[0x12];
        puVar12[0x11] = puVar3[0x11];
        puVar12[0x10] = uVar25;
        puVar12[0x13] = uVar28;
        puVar12[0x12] = uVar27;
        uVar25 = puVar3[4];
        uVar28 = puVar3[7];
        uVar27 = puVar3[6];
        puVar12[5] = puVar3[5];
        puVar12[4] = uVar25;
        puVar12[7] = uVar28;
        puVar12[6] = uVar27;
        uVar25 = puVar3[8];
        uVar28 = puVar3[0xb];
        uVar27 = puVar3[10];
        puVar12[9] = puVar3[9];
        puVar12[8] = uVar25;
        puVar12[0xb] = uVar28;
        puVar12[10] = uVar27;
        uVar25 = *puVar3;
        uVar28 = puVar3[3];
        uVar27 = puVar3[2];
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
        puVar12[3] = uVar28;
        puVar12[2] = uVar27;
      }
      else {
        *puVar12 = *puVar3;
        puVar12[1] = lVar19;
        uVar25 = puVar3[3];
        puVar12[2] = puVar3[2];
        puVar12[3] = uVar25;
        uVar27 = puVar3[5];
        puVar12[4] = puVar3[4];
        puVar12[5] = uVar27;
        uVar28 = puVar3[7];
        puVar12[6] = puVar3[6];
        puVar12[7] = uVar28;
        uVar32 = puVar3[9];
        puVar12[8] = puVar3[8];
        puVar12[9] = uVar32;
        *(undefined1 *)(puVar12 + 10) = *(undefined1 *)(puVar3 + 10);
        uVar31 = puVar3[0xb];
        puVar12[0xc] = puVar3[0xc];
        puVar12[0xb] = uVar31;
        lVar18 = puVar3[0x12];
        _swift_bridgeObjectRetain(lVar19);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar27);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar32);
        if (lVar18 == 0) {
          uVar25 = puVar3[0xd];
          puVar12[0xe] = puVar3[0xe];
          puVar12[0xd] = uVar25;
          uVar25 = puVar3[0xf];
          puVar12[0x10] = puVar3[0x10];
          puVar12[0xf] = uVar25;
          uVar25 = puVar3[0x11];
          puVar12[0x12] = puVar3[0x12];
          puVar12[0x11] = uVar25;
          puVar12[0x13] = puVar3[0x13];
        }
        else {
          uVar25 = puVar3[0xe];
          puVar12[0xd] = puVar3[0xd];
          puVar12[0xe] = uVar25;
          uVar25 = puVar3[0x10];
          puVar12[0xf] = puVar3[0xf];
          puVar12[0x10] = uVar25;
          puVar12[0x11] = puVar3[0x11];
          puVar12[0x12] = lVar18;
          puVar12[0x13] = puVar3[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
          _swift_bridgeObjectRetain(lVar18);
        }
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x60)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x60));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 100));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 100));
      lVar19 = puVar3[1];
      if (lVar19 == 1) {
        uVar25 = *puVar3;
        uVar28 = puVar3[3];
        uVar27 = puVar3[2];
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
        puVar12[3] = uVar28;
        puVar12[2] = uVar27;
        puVar12[4] = puVar3[4];
      }
      else {
        *puVar12 = *puVar3;
        puVar12[1] = lVar19;
        puVar12[2] = puVar3[2];
        *(undefined1 *)(puVar12 + 3) = *(undefined1 *)(puVar3 + 3);
        *(undefined2 *)((long)puVar12 + 0x19) = *(undefined2 *)((long)puVar3 + 0x19);
        puVar12[4] = puVar3[4];
        _swift_bridgeObjectRetain();
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x68));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x68));
      if (puVar3[0x27] == 0) {
        _memcpy(puVar12,puVar3,0x160);
      }
      else {
        uVar25 = *puVar3;
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
        uVar25 = puVar3[2];
        uVar27 = puVar3[3];
        puVar12[2] = uVar25;
        puVar12[3] = uVar27;
        uVar23 = puVar3[4];
        puVar12[4] = uVar23;
        uVar27 = puVar3[5];
        puVar12[6] = puVar3[6];
        puVar12[5] = uVar27;
        uVar27 = puVar3[7];
        uVar28 = puVar3[8];
        puVar12[7] = uVar27;
        puVar12[8] = uVar28;
        *(undefined2 *)(puVar12 + 9) = *(undefined2 *)(puVar3 + 9);
        *(undefined1 *)((long)puVar12 + 0x4a) = *(undefined1 *)((long)puVar3 + 0x4a);
        uVar28 = puVar3[0xb];
        puVar12[10] = puVar3[10];
        puVar12[0xb] = uVar28;
        uVar17 = puVar3[0xc];
        puVar12[0xc] = uVar17;
        *(undefined1 *)(puVar12 + 0xd) = *(undefined1 *)(puVar3 + 0xd);
        uVar32 = puVar3[0xe];
        puVar12[0xf] = puVar3[0xf];
        puVar12[0xe] = uVar32;
        *(undefined1 *)(puVar12 + 0x10) = *(undefined1 *)(puVar3 + 0x10);
        uVar32 = puVar3[0x12];
        puVar12[0x11] = puVar3[0x11];
        puVar12[0x12] = uVar32;
        uVar31 = puVar3[0x14];
        puVar12[0x13] = puVar3[0x13];
        puVar12[0x14] = uVar31;
        uVar30 = puVar3[0x16];
        puVar12[0x15] = puVar3[0x15];
        puVar12[0x16] = uVar30;
        uVar5 = puVar3[0x18];
        puVar12[0x17] = puVar3[0x17];
        puVar12[0x18] = uVar5;
        uVar6 = puVar3[0x1a];
        puVar12[0x19] = puVar3[0x19];
        puVar12[0x1a] = uVar6;
        uVar33 = puVar3[0x1b];
        puVar12[0x1c] = puVar3[0x1c];
        puVar12[0x1b] = uVar33;
        uVar29 = puVar3[0x1d];
        puVar12[0x1d] = uVar29;
        *(undefined1 *)(puVar12 + 0x1e) = *(undefined1 *)(puVar3 + 0x1e);
        *(undefined1 *)((long)puVar12 + 0xf1) = *(undefined1 *)((long)puVar3 + 0xf1);
        *(undefined1 *)((long)puVar12 + 0xf2) = *(undefined1 *)((long)puVar3 + 0xf2);
        uVar33 = puVar3[0x20];
        puVar12[0x1f] = puVar3[0x1f];
        puVar12[0x20] = uVar33;
        uVar7 = puVar3[0x22];
        puVar12[0x21] = puVar3[0x21];
        puVar12[0x22] = uVar7;
        uVar8 = puVar3[0x24];
        puVar12[0x23] = puVar3[0x23];
        puVar12[0x24] = uVar8;
        uVar9 = puVar3[0x26];
        puVar12[0x25] = puVar3[0x25];
        puVar12[0x26] = uVar9;
        uVar20 = puVar3[0x27];
        puVar12[0x27] = uVar20;
        uVar34 = puVar3[0x28];
        puVar12[0x29] = puVar3[0x29];
        puVar12[0x28] = uVar34;
        uVar34 = puVar3[0x2b];
        puVar12[0x2a] = puVar3[0x2a];
        puVar12[0x2b] = uVar34;
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar27);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar32);
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRetain(uVar30);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar33);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x6c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x6c));
      uVar21 = puVar3[1];
      if (uVar21 >> 0x3c < 0xf) {
        uVar25 = *puVar3;
        func_0x00010006c00c(uVar25,uVar21);
        *puVar12 = uVar25;
        puVar12[1] = uVar21;
      }
      else {
        uVar25 = *puVar3;
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x70)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x70));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x74));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x74));
      uVar25 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar25;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x78));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x78));
      uVar25 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar25;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x7c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x7c));
      uVar27 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar27;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x80));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x80));
      uVar21 = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar27);
      if (uVar21 >> 0x3c < 0xf) {
        uVar25 = *puVar3;
        func_0x00010006c00c(uVar25,uVar21);
        *puVar12 = uVar25;
        puVar12[1] = uVar21;
      }
      else {
        uVar25 = *puVar3;
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x84));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x84));
      lVar19 = 0;
      func_0x000100b91fbc();
      lVar18 = *(long *)(lVar19 + -8);
      puVar14 = puVar3;
      (**(code **)(lVar18 + 0x30))(puVar3,1,lVar19);
      if ((int)puVar14 == 0) {
        uVar25 = puVar3[1];
        *puVar12 = *puVar3;
        puVar12[1] = uVar25;
        uVar25 = puVar3[2];
        uVar28 = puVar3[5];
        uVar27 = puVar3[4];
        puVar12[3] = puVar3[3];
        puVar12[2] = uVar25;
        puVar12[5] = uVar28;
        puVar12[4] = uVar27;
        uVar25 = puVar3[6];
        uVar27 = puVar3[7];
        puVar12[6] = uVar25;
        puVar12[7] = uVar27;
        uVar27 = puVar3[8];
        puVar12[8] = uVar27;
        lVar24 = (long)*(int *)(lVar19 + 0x28);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar27);
        lVar15 = (long)puVar3 + lVar24;
        (*pcVar22)(lVar15,1,lVar13);
        if ((int)lVar15 == 0) {
          (**(code **)(lVar16 + 0x10))((long)puVar12 + lVar24,(long)puVar3 + lVar24,lVar13);
          (**(code **)(lVar16 + 0x38))((long)puVar12 + lVar24,0,1,lVar13);
        }
        else {
          lVar15 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar12 + lVar24,(long)puVar3 + lVar24,
                  *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar19 + 0x2c));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x2c));
        uVar25 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar25;
        puVar14 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar19 + 0x30));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x30));
        uVar25 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar25;
        lVar24 = (long)*(int *)(lVar19 + 0x34);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
        lVar15 = (long)puVar3 + lVar24;
        (*pcVar22)(lVar15,1,lVar13);
        if ((int)lVar15 == 0) {
          (**(code **)(lVar16 + 0x10))((long)puVar12 + lVar24,(long)puVar3 + lVar24,lVar13);
          (**(code **)(lVar16 + 0x38))((long)puVar12 + lVar24,0,1,lVar13);
        }
        else {
          lVar13 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar12 + lVar24,(long)puVar3 + lVar24,
                  *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar19 + 0x38));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x38));
        uVar25 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar25;
        puVar14 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar19 + 0x3c));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x3c));
        uVar25 = puVar3[1];
        *puVar14 = *puVar3;
        puVar14[1] = uVar25;
        pcVar22 = *(code **)(lVar18 + 0x38);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
        (*pcVar22)(puVar12,0,1,lVar19);
      }
      else {
        lVar19 = 0x112db39a8;
        func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
        _memcpy(puVar12,puVar3,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x88));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x88));
      lVar19 = puVar3[1];
      if (lVar19 == 0) {
        uVar25 = puVar3[0x10];
        uVar28 = puVar3[0x13];
        uVar27 = puVar3[0x12];
        puVar12[0x11] = puVar3[0x11];
        puVar12[0x10] = uVar25;
        puVar12[0x13] = uVar28;
        puVar12[0x12] = uVar27;
        *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar25 = puVar3[8];
        uVar28 = puVar3[0xb];
        uVar27 = puVar3[10];
        puVar12[9] = puVar3[9];
        puVar12[8] = uVar25;
        puVar12[0xb] = uVar28;
        puVar12[10] = uVar27;
        uVar28 = puVar3[0xc];
        uVar27 = puVar3[0xf];
        uVar25 = puVar3[0xe];
        puVar12[0xd] = puVar3[0xd];
        puVar12[0xc] = uVar28;
        puVar12[0xf] = uVar27;
        puVar12[0xe] = uVar25;
        uVar25 = *puVar3;
        uVar28 = puVar3[3];
        uVar27 = puVar3[2];
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
        puVar12[3] = uVar28;
        puVar12[2] = uVar27;
        uVar28 = puVar3[4];
        uVar27 = puVar3[7];
        uVar25 = puVar3[6];
        puVar12[5] = puVar3[5];
        puVar12[4] = uVar28;
        puVar12[7] = uVar27;
        puVar12[6] = uVar25;
      }
      else {
        *puVar12 = *puVar3;
        puVar12[1] = lVar19;
        lVar19 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar19 == 1) {
          uVar25 = puVar3[2];
          uVar28 = puVar3[5];
          uVar27 = puVar3[4];
          puVar12[3] = puVar3[3];
          puVar12[2] = uVar25;
          puVar12[5] = uVar28;
          puVar12[4] = uVar27;
          uVar25 = puVar3[6];
          puVar12[7] = puVar3[7];
          puVar12[6] = uVar25;
          puVar12[8] = puVar3[8];
        }
        else {
          lVar13 = puVar3[4];
          if (lVar13 == 1) {
            uVar25 = puVar3[2];
            uVar28 = puVar3[5];
            uVar27 = puVar3[4];
            puVar12[3] = puVar3[3];
            puVar12[2] = uVar25;
            puVar12[5] = uVar28;
            puVar12[4] = uVar27;
            puVar12[6] = puVar3[6];
          }
          else {
            uVar25 = puVar3[2];
            puVar12[3] = puVar3[3];
            puVar12[2] = uVar25;
            uVar25 = puVar3[5];
            uVar27 = puVar3[6];
            puVar12[4] = lVar13;
            puVar12[5] = uVar25;
            puVar12[6] = uVar27;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar27);
          }
          puVar12[7] = puVar3[7];
          puVar12[8] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
        }
        lVar19 = puVar3[0xf];
        if (lVar19 == 1) {
          uVar25 = puVar3[9];
          puVar12[10] = puVar3[10];
          puVar12[9] = uVar25;
          uVar25 = puVar3[0xb];
          puVar12[0xc] = puVar3[0xc];
          puVar12[0xb] = uVar25;
          uVar25 = puVar3[0xd];
          puVar12[0xe] = puVar3[0xe];
          puVar12[0xd] = uVar25;
          puVar12[0xf] = puVar3[0xf];
        }
        else {
          lVar13 = puVar3[0xb];
          if (lVar13 == 1) {
            uVar25 = puVar3[9];
            puVar12[10] = puVar3[10];
            puVar12[9] = uVar25;
            uVar25 = puVar3[0xb];
            puVar12[0xc] = puVar3[0xc];
            puVar12[0xb] = uVar25;
            puVar12[0xd] = puVar3[0xd];
          }
          else {
            uVar25 = puVar3[9];
            puVar12[10] = puVar3[10];
            puVar12[9] = uVar25;
            uVar25 = puVar3[0xc];
            uVar27 = puVar3[0xd];
            puVar12[0xb] = lVar13;
            puVar12[0xc] = uVar25;
            puVar12[0xd] = uVar27;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar27);
          }
          puVar12[0xe] = puVar3[0xe];
          puVar12[0xf] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
        }
        *(undefined2 *)(puVar12 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar25 = puVar3[0x11];
        puVar12[0x12] = puVar3[0x12];
        puVar12[0x11] = uVar25;
        puVar12[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x8c)) =
           *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x8c));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x90)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x90));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x94));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x94));
      uVar25 = *puVar3;
      uVar28 = puVar3[3];
      uVar27 = puVar3[2];
      puVar12[1] = puVar3[1];
      *puVar12 = uVar25;
      puVar12[3] = uVar28;
      puVar12[2] = uVar27;
      uVar25 = puVar3[4];
      uVar28 = puVar3[7];
      uVar27 = puVar3[6];
      puVar12[5] = puVar3[5];
      puVar12[4] = uVar25;
      puVar12[7] = uVar28;
      puVar12[6] = uVar27;
      uVar28 = puVar3[0xc];
      uVar27 = puVar3[0xf];
      uVar25 = puVar3[0xe];
      puVar12[0xd] = puVar3[0xd];
      puVar12[0xc] = uVar28;
      puVar12[0xf] = uVar27;
      puVar12[0xe] = uVar25;
      uVar28 = puVar3[8];
      uVar27 = puVar3[0xb];
      uVar25 = puVar3[10];
      puVar12[9] = puVar3[9];
      puVar12[8] = uVar28;
      puVar12[0xb] = uVar27;
      puVar12[10] = uVar25;
      uVar25 = *(undefined8 *)((long)puVar3 + 0xa9);
      *(undefined8 *)((long)puVar12 + 0xb1) = *(undefined8 *)((long)puVar3 + 0xb1);
      *(undefined8 *)((long)puVar12 + 0xa9) = uVar25;
      uVar25 = puVar3[0x12];
      uVar28 = puVar3[0x15];
      uVar27 = puVar3[0x14];
      puVar12[0x13] = puVar3[0x13];
      puVar12[0x12] = uVar25;
      puVar12[0x15] = uVar28;
      puVar12[0x14] = uVar27;
      uVar25 = puVar3[0x10];
      puVar12[0x11] = puVar3[0x11];
      puVar12[0x10] = uVar25;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x98)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x98));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x9c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x9c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xa0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xa0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xa4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xa4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xa8)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xa8));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xac));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xac));
      lVar19 = puVar3[1];
      if (lVar19 == 0) {
        uVar25 = *puVar3;
        uVar28 = puVar3[3];
        uVar27 = puVar3[2];
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
        puVar12[3] = uVar28;
        puVar12[2] = uVar27;
      }
      else {
        *puVar12 = *puVar3;
        puVar12[1] = lVar19;
        uVar25 = puVar3[3];
        puVar12[2] = puVar3[2];
        puVar12[3] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xb0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xb0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xb4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xb4));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xb8));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xb8));
      lVar19 = puVar3[1];
      if (lVar19 == 0) {
        uVar25 = puVar3[0x10];
        uVar28 = puVar3[0x13];
        uVar27 = puVar3[0x12];
        puVar12[0x11] = puVar3[0x11];
        puVar12[0x10] = uVar25;
        puVar12[0x13] = uVar28;
        puVar12[0x12] = uVar27;
        *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar25 = puVar3[8];
        uVar28 = puVar3[0xb];
        uVar27 = puVar3[10];
        puVar12[9] = puVar3[9];
        puVar12[8] = uVar25;
        puVar12[0xb] = uVar28;
        puVar12[10] = uVar27;
        uVar28 = puVar3[0xc];
        uVar27 = puVar3[0xf];
        uVar25 = puVar3[0xe];
        puVar12[0xd] = puVar3[0xd];
        puVar12[0xc] = uVar28;
        puVar12[0xf] = uVar27;
        puVar12[0xe] = uVar25;
        uVar25 = *puVar3;
        uVar28 = puVar3[3];
        uVar27 = puVar3[2];
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
        puVar12[3] = uVar28;
        puVar12[2] = uVar27;
        uVar28 = puVar3[4];
        uVar27 = puVar3[7];
        uVar25 = puVar3[6];
        puVar12[5] = puVar3[5];
        puVar12[4] = uVar28;
        puVar12[7] = uVar27;
        puVar12[6] = uVar25;
      }
      else {
        *puVar12 = *puVar3;
        puVar12[1] = lVar19;
        lVar19 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar19 == 1) {
          uVar25 = puVar3[2];
          uVar28 = puVar3[5];
          uVar27 = puVar3[4];
          puVar12[3] = puVar3[3];
          puVar12[2] = uVar25;
          puVar12[5] = uVar28;
          puVar12[4] = uVar27;
          uVar25 = puVar3[6];
          puVar12[7] = puVar3[7];
          puVar12[6] = uVar25;
          puVar12[8] = puVar3[8];
        }
        else {
          lVar13 = puVar3[4];
          if (lVar13 == 1) {
            uVar25 = puVar3[2];
            uVar28 = puVar3[5];
            uVar27 = puVar3[4];
            puVar12[3] = puVar3[3];
            puVar12[2] = uVar25;
            puVar12[5] = uVar28;
            puVar12[4] = uVar27;
            puVar12[6] = puVar3[6];
          }
          else {
            uVar25 = puVar3[2];
            puVar12[3] = puVar3[3];
            puVar12[2] = uVar25;
            uVar25 = puVar3[5];
            uVar27 = puVar3[6];
            puVar12[4] = lVar13;
            puVar12[5] = uVar25;
            puVar12[6] = uVar27;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar27);
          }
          puVar12[7] = puVar3[7];
          puVar12[8] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
        }
        lVar19 = puVar3[0xf];
        if (lVar19 == 1) {
          uVar25 = puVar3[9];
          puVar12[10] = puVar3[10];
          puVar12[9] = uVar25;
          uVar25 = puVar3[0xb];
          puVar12[0xc] = puVar3[0xc];
          puVar12[0xb] = uVar25;
          uVar25 = puVar3[0xd];
          puVar12[0xe] = puVar3[0xe];
          puVar12[0xd] = uVar25;
          puVar12[0xf] = puVar3[0xf];
        }
        else {
          lVar13 = puVar3[0xb];
          if (lVar13 == 1) {
            uVar25 = puVar3[9];
            puVar12[10] = puVar3[10];
            puVar12[9] = uVar25;
            uVar25 = puVar3[0xb];
            puVar12[0xc] = puVar3[0xc];
            puVar12[0xb] = uVar25;
            puVar12[0xd] = puVar3[0xd];
          }
          else {
            uVar25 = puVar3[9];
            puVar12[10] = puVar3[10];
            puVar12[9] = uVar25;
            uVar25 = puVar3[0xc];
            uVar27 = puVar3[0xd];
            puVar12[0xb] = lVar13;
            puVar12[0xc] = uVar25;
            puVar12[0xd] = uVar27;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar27);
          }
          puVar12[0xe] = puVar3[0xe];
          puVar12[0xf] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
        }
        *(undefined2 *)(puVar12 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar25 = puVar3[0x11];
        puVar12[0x12] = puVar3[0x12];
        puVar12[0x11] = uVar25;
        puVar12[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xbc));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xbc));
      lVar19 = puVar3[1];
      if (lVar19 == 0) {
        uVar25 = puVar3[0x10];
        uVar28 = puVar3[0x13];
        uVar27 = puVar3[0x12];
        puVar12[0x11] = puVar3[0x11];
        puVar12[0x10] = uVar25;
        puVar12[0x13] = uVar28;
        puVar12[0x12] = uVar27;
        *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar25 = puVar3[8];
        uVar28 = puVar3[0xb];
        uVar27 = puVar3[10];
        puVar12[9] = puVar3[9];
        puVar12[8] = uVar25;
        puVar12[0xb] = uVar28;
        puVar12[10] = uVar27;
        uVar28 = puVar3[0xc];
        uVar27 = puVar3[0xf];
        uVar25 = puVar3[0xe];
        puVar12[0xd] = puVar3[0xd];
        puVar12[0xc] = uVar28;
        puVar12[0xf] = uVar27;
        puVar12[0xe] = uVar25;
        uVar25 = *puVar3;
        uVar28 = puVar3[3];
        uVar27 = puVar3[2];
        puVar12[1] = puVar3[1];
        *puVar12 = uVar25;
        puVar12[3] = uVar28;
        puVar12[2] = uVar27;
        uVar28 = puVar3[4];
        uVar27 = puVar3[7];
        uVar25 = puVar3[6];
        puVar12[5] = puVar3[5];
        puVar12[4] = uVar28;
        puVar12[7] = uVar27;
        puVar12[6] = uVar25;
      }
      else {
        *puVar12 = *puVar3;
        puVar12[1] = lVar19;
        lVar19 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar19 == 1) {
          uVar25 = puVar3[2];
          uVar28 = puVar3[5];
          uVar27 = puVar3[4];
          puVar12[3] = puVar3[3];
          puVar12[2] = uVar25;
          puVar12[5] = uVar28;
          puVar12[4] = uVar27;
          uVar25 = puVar3[6];
          puVar12[7] = puVar3[7];
          puVar12[6] = uVar25;
          puVar12[8] = puVar3[8];
        }
        else {
          lVar13 = puVar3[4];
          if (lVar13 == 1) {
            uVar25 = puVar3[2];
            uVar28 = puVar3[5];
            uVar27 = puVar3[4];
            puVar12[3] = puVar3[3];
            puVar12[2] = uVar25;
            puVar12[5] = uVar28;
            puVar12[4] = uVar27;
            puVar12[6] = puVar3[6];
          }
          else {
            uVar25 = puVar3[2];
            puVar12[3] = puVar3[3];
            puVar12[2] = uVar25;
            uVar25 = puVar3[5];
            uVar27 = puVar3[6];
            puVar12[4] = lVar13;
            puVar12[5] = uVar25;
            puVar12[6] = uVar27;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar27);
          }
          puVar12[7] = puVar3[7];
          puVar12[8] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
        }
        lVar19 = puVar3[0xf];
        if (lVar19 == 1) {
          uVar25 = puVar3[9];
          puVar12[10] = puVar3[10];
          puVar12[9] = uVar25;
          uVar25 = puVar3[0xb];
          puVar12[0xc] = puVar3[0xc];
          puVar12[0xb] = uVar25;
          uVar25 = puVar3[0xd];
          puVar12[0xe] = puVar3[0xe];
          puVar12[0xd] = uVar25;
          puVar12[0xf] = puVar3[0xf];
        }
        else {
          lVar13 = puVar3[0xb];
          if (lVar13 == 1) {
            uVar25 = puVar3[9];
            puVar12[10] = puVar3[10];
            puVar12[9] = uVar25;
            uVar25 = puVar3[0xb];
            puVar12[0xc] = puVar3[0xc];
            puVar12[0xb] = uVar25;
            puVar12[0xd] = puVar3[0xd];
          }
          else {
            uVar25 = puVar3[9];
            puVar12[10] = puVar3[10];
            puVar12[9] = uVar25;
            uVar25 = puVar3[0xc];
            uVar27 = puVar3[0xd];
            puVar12[0xb] = lVar13;
            puVar12[0xc] = uVar25;
            puVar12[0xd] = uVar27;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar27);
          }
          puVar12[0xe] = puVar3[0xe];
          puVar12[0xf] = lVar19;
          _swift_bridgeObjectRetain(lVar19);
        }
        *(undefined2 *)(puVar12 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar25 = puVar3[0x11];
        puVar12[0x12] = puVar3[0x12];
        puVar12[0x11] = uVar25;
        puVar12[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xc0)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xc0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xc4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xc4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 200)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 200));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0xcc)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0xcc));
      (**(code **)(lVar26 + 0x38))(puVar1,0,1,lVar11);
    }
    else {
      lVar19 = 0x112dbe418;
      func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
    }
  }
  else {
    lVar19 = *param_2;
    *param_1 = lVar19;
    uVar21 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar19 + (uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041fd904; end: 1041fde4b;  */

void FUN_1041fd904(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + *(int *)(param_2 + 0x14);
  lVar3 = 0;
  func_0x000100b91d00();
  lVar7 = param_1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_1,1,lVar3);
  if ((int)lVar7 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
    iVar2 = *(int *)(lVar3 + 0x3c);
    lVar4 = 0;
    __s10Foundation4UUIDVMa();
    lVar8 = *(long *)(lVar4 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    lVar7 = param_1 + iVar2;
    (*pcVar9)(lVar7,1,lVar4);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
    }
    iVar2 = *(int *)(lVar3 + 0x40);
    lVar7 = param_1 + iVar2;
    (*pcVar9)(lVar7,1,lVar4);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
    }
    iVar2 = *(int *)(lVar3 + 0x44);
    lVar7 = param_1 + iVar2;
    (*pcVar9)(lVar7,1,lVar4);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x4c)));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x50)));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x54)));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x58)));
    lVar7 = param_1 + *(int *)(lVar3 + 0x5c);
    if (*(long *)(lVar7 + 8) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x28));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x38));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x48));
      if (*(long *)(lVar7 + 0x90) != 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x70));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x80));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x90));
      }
    }
    if (*(long *)(param_1 + *(int *)(lVar3 + 100) + 8) != 1) {
      _swift_bridgeObjectRelease();
    }
    lVar7 = param_1 + *(int *)(lVar3 + 0x68);
    if (*(long *)(lVar7 + 0x138) != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x10));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x20));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x38));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x58));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x60));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x90));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xa0));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xb0));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xc0));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xd0));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xe8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x100));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x110));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x120));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x130));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x138));
    }
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x6c));
    if ((ulong)puVar1[1] >> 0x3c < 0xf) {
      func_0x00010006c090(*puVar1);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x74) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x78) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x7c) + 8));
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x80));
    if ((ulong)puVar1[1] >> 0x3c < 0xf) {
      func_0x00010006c090(*puVar1);
    }
    lVar7 = param_1 + *(int *)(lVar3 + 0x84);
    lVar5 = 0;
    func_0x000100b91fbc();
    lVar6 = lVar7;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar7,1,lVar5);
    if ((int)lVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x40));
      iVar2 = *(int *)(lVar5 + 0x28);
      lVar6 = lVar7 + iVar2;
      (*pcVar9)(lVar6,1,lVar4);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar8 + 8))(lVar7 + iVar2,lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x2c) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x30) + 8));
      iVar2 = *(int *)(lVar5 + 0x34);
      lVar6 = lVar7 + iVar2;
      (*pcVar9)(lVar6,1,lVar4);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar8 + 8))(lVar7 + iVar2,lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x38) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x3c) + 8));
    }
    lVar7 = param_1 + *(int *)(lVar3 + 0x88);
    if (*(long *)(lVar7 + 8) != 0) {
      _swift_bridgeObjectRelease();
      lVar4 = *(long *)(lVar7 + 0x40);
      if (lVar4 != 1) {
        if (*(long *)(lVar7 + 0x20) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x20));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
          lVar4 = *(long *)(lVar7 + 0x40);
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      lVar4 = *(long *)(lVar7 + 0x78);
      if (lVar4 != 1) {
        if (*(long *)(lVar7 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x68));
          lVar4 = *(long *)(lVar7 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x98));
    }
    lVar7 = param_1 + *(int *)(lVar3 + 0xac);
    if (*(long *)(lVar7 + 8) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
    }
    lVar7 = param_1 + *(int *)(lVar3 + 0xb8);
    if (*(long *)(lVar7 + 8) != 0) {
      _swift_bridgeObjectRelease();
      lVar4 = *(long *)(lVar7 + 0x40);
      if (lVar4 != 1) {
        if (*(long *)(lVar7 + 0x20) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x20));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
          lVar4 = *(long *)(lVar7 + 0x40);
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      lVar4 = *(long *)(lVar7 + 0x78);
      if (lVar4 != 1) {
        if (*(long *)(lVar7 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x68));
          lVar4 = *(long *)(lVar7 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x98));
    }
    param_1 = param_1 + *(int *)(lVar3 + 0xbc);
    if (*(long *)(param_1 + 8) != 0) {
      _swift_bridgeObjectRelease();
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 != 1) {
        if (*(long *)(param_1 + 0x20) != 1) {
          _swift_bridgeObjectRelease(*(long *)(param_1 + 0x20));
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
          lVar7 = *(long *)(param_1 + 0x40);
        }
        _swift_bridgeObjectRelease(lVar7);
      }
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar7 != 1) {
        if (*(long *)(param_1 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
          lVar7 = *(long *)(param_1 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x98));
      return;
    }
  }
  return;
}



/* Entry: 1041fde4c; end: 104202673;  */

undefined8 * FUN_1041fde4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar22 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar22;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar9 = 0;
  func_0x000100b91d00();
  lVar24 = *(long *)(lVar9 + -8);
  pcVar19 = *(code **)(lVar24 + 0x30);
  _swift_bridgeObjectRetain(uVar22);
  puVar10 = param_2;
  (*pcVar19)(param_2,1,lVar9);
  if ((int)puVar10 == 0) {
    uVar22 = *param_2;
    uVar26 = param_2[3];
    uVar25 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar22;
    puVar1[3] = uVar26;
    puVar1[2] = uVar25;
    uVar22 = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar22;
    uVar22 = param_2[6];
    uVar25 = param_2[7];
    puVar1[6] = uVar22;
    puVar1[7] = uVar25;
    uVar25 = param_2[8];
    uVar26 = param_2[9];
    puVar1[8] = uVar25;
    puVar1[9] = uVar26;
    uVar26 = param_2[10];
    uVar30 = param_2[0xb];
    puVar1[10] = uVar26;
    puVar1[0xb] = uVar30;
    uVar30 = param_2[0xc];
    uVar29 = param_2[0xd];
    puVar1[0xc] = uVar30;
    puVar1[0xd] = uVar29;
    uVar29 = param_2[0xe];
    uVar28 = param_2[0xf];
    puVar1[0xe] = uVar29;
    puVar1[0xf] = uVar28;
    uVar28 = param_2[0x10];
    puVar1[0x10] = uVar28;
    lVar16 = (long)*(int *)(lVar9 + 0x3c);
    lVar11 = 0;
    __s10Foundation4UUIDVMa();
    lVar14 = *(long *)(lVar11 + -8);
    pcVar19 = *(code **)(lVar14 + 0x30);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar28);
    lVar17 = (long)param_2 + lVar16;
    (*pcVar19)(lVar17,1,lVar11);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar14 + 0x10))((long)puVar1 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,lVar11);
    }
    else {
      lVar17 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(lVar9 + 0x40);
    lVar17 = (long)param_2 + lVar16;
    (*pcVar19)(lVar17,1,lVar11);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar14 + 0x10))((long)puVar1 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,lVar11);
    }
    else {
      lVar17 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(lVar9 + 0x44);
    lVar17 = (long)param_2 + lVar16;
    (*pcVar19)(lVar17,1,lVar11);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar14 + 0x10))((long)puVar1 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,lVar11);
    }
    else {
      lVar17 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x48));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x4c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x4c));
    uVar22 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x50));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x50)) = uVar22;
    uVar25 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x54));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x54)) = uVar25;
    uVar26 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x58));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x58)) = uVar26;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x5c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x5c));
    lVar17 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar26);
    if (lVar17 == 1) {
      uVar22 = puVar2[0xc];
      uVar26 = puVar2[0xf];
      uVar25 = puVar2[0xe];
      puVar10[0xd] = puVar2[0xd];
      puVar10[0xc] = uVar22;
      puVar10[0xf] = uVar26;
      puVar10[0xe] = uVar25;
      uVar22 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar10[0x11] = puVar2[0x11];
      puVar10[0x10] = uVar22;
      puVar10[0x13] = uVar26;
      puVar10[0x12] = uVar25;
      uVar22 = puVar2[4];
      uVar26 = puVar2[7];
      uVar25 = puVar2[6];
      puVar10[5] = puVar2[5];
      puVar10[4] = uVar22;
      puVar10[7] = uVar26;
      puVar10[6] = uVar25;
      uVar22 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar10[9] = puVar2[9];
      puVar10[8] = uVar22;
      puVar10[0xb] = uVar26;
      puVar10[10] = uVar25;
      uVar22 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
    }
    else {
      *puVar10 = *puVar2;
      puVar10[1] = lVar17;
      uVar22 = puVar2[3];
      puVar10[2] = puVar2[2];
      puVar10[3] = uVar22;
      uVar25 = puVar2[5];
      puVar10[4] = puVar2[4];
      puVar10[5] = uVar25;
      uVar26 = puVar2[7];
      puVar10[6] = puVar2[6];
      puVar10[7] = uVar26;
      uVar30 = puVar2[9];
      puVar10[8] = puVar2[8];
      puVar10[9] = uVar30;
      *(undefined1 *)(puVar10 + 10) = *(undefined1 *)(puVar2 + 10);
      uVar29 = puVar2[0xb];
      puVar10[0xc] = puVar2[0xc];
      puVar10[0xb] = uVar29;
      lVar16 = puVar2[0x12];
      _swift_bridgeObjectRetain(lVar17);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar30);
      if (lVar16 == 0) {
        uVar22 = puVar2[0xd];
        puVar10[0xe] = puVar2[0xe];
        puVar10[0xd] = uVar22;
        uVar22 = puVar2[0xf];
        puVar10[0x10] = puVar2[0x10];
        puVar10[0xf] = uVar22;
        uVar22 = puVar2[0x11];
        puVar10[0x12] = puVar2[0x12];
        puVar10[0x11] = uVar22;
        puVar10[0x13] = puVar2[0x13];
      }
      else {
        uVar22 = puVar2[0xe];
        puVar10[0xd] = puVar2[0xd];
        puVar10[0xe] = uVar22;
        uVar22 = puVar2[0x10];
        puVar10[0xf] = puVar2[0xf];
        puVar10[0x10] = uVar22;
        puVar10[0x11] = puVar2[0x11];
        puVar10[0x12] = lVar16;
        puVar10[0x13] = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(lVar16);
      }
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x60)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x60));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 100));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 100));
    lVar17 = puVar2[1];
    if (lVar17 == 1) {
      uVar22 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
      puVar10[4] = puVar2[4];
    }
    else {
      *puVar10 = *puVar2;
      puVar10[1] = lVar17;
      puVar10[2] = puVar2[2];
      *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar2 + 3);
      *(undefined2 *)((long)puVar10 + 0x19) = *(undefined2 *)((long)puVar2 + 0x19);
      puVar10[4] = puVar2[4];
      _swift_bridgeObjectRetain();
    }
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x68));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x68));
    if (puVar2[0x27] == 0) {
      _memcpy(puVar10,puVar2,0x160);
    }
    else {
      uVar22 = *puVar2;
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
      uVar22 = puVar2[2];
      uVar25 = puVar2[3];
      puVar10[2] = uVar22;
      puVar10[3] = uVar25;
      uVar20 = puVar2[4];
      puVar10[4] = uVar20;
      uVar25 = puVar2[5];
      puVar10[6] = puVar2[6];
      puVar10[5] = uVar25;
      uVar25 = puVar2[7];
      uVar26 = puVar2[8];
      puVar10[7] = uVar25;
      puVar10[8] = uVar26;
      *(undefined2 *)(puVar10 + 9) = *(undefined2 *)(puVar2 + 9);
      *(undefined1 *)((long)puVar10 + 0x4a) = *(undefined1 *)((long)puVar2 + 0x4a);
      uVar26 = puVar2[0xb];
      puVar10[10] = puVar2[10];
      puVar10[0xb] = uVar26;
      uVar15 = puVar2[0xc];
      puVar10[0xc] = uVar15;
      *(undefined1 *)(puVar10 + 0xd) = *(undefined1 *)(puVar2 + 0xd);
      uVar30 = puVar2[0xe];
      puVar10[0xf] = puVar2[0xf];
      puVar10[0xe] = uVar30;
      *(undefined1 *)(puVar10 + 0x10) = *(undefined1 *)(puVar2 + 0x10);
      uVar30 = puVar2[0x12];
      puVar10[0x11] = puVar2[0x11];
      puVar10[0x12] = uVar30;
      uVar29 = puVar2[0x14];
      puVar10[0x13] = puVar2[0x13];
      puVar10[0x14] = uVar29;
      uVar28 = puVar2[0x16];
      puVar10[0x15] = puVar2[0x15];
      puVar10[0x16] = uVar28;
      uVar4 = puVar2[0x18];
      puVar10[0x17] = puVar2[0x17];
      puVar10[0x18] = uVar4;
      uVar5 = puVar2[0x1a];
      puVar10[0x19] = puVar2[0x19];
      puVar10[0x1a] = uVar5;
      uVar31 = puVar2[0x1b];
      puVar10[0x1c] = puVar2[0x1c];
      puVar10[0x1b] = uVar31;
      uVar27 = puVar2[0x1d];
      puVar10[0x1d] = uVar27;
      *(undefined1 *)(puVar10 + 0x1e) = *(undefined1 *)(puVar2 + 0x1e);
      *(undefined1 *)((long)puVar10 + 0xf1) = *(undefined1 *)((long)puVar2 + 0xf1);
      *(undefined1 *)((long)puVar10 + 0xf2) = *(undefined1 *)((long)puVar2 + 0xf2);
      uVar31 = puVar2[0x20];
      puVar10[0x1f] = puVar2[0x1f];
      puVar10[0x20] = uVar31;
      uVar6 = puVar2[0x22];
      puVar10[0x21] = puVar2[0x21];
      puVar10[0x22] = uVar6;
      uVar7 = puVar2[0x24];
      puVar10[0x23] = puVar2[0x23];
      puVar10[0x24] = uVar7;
      uVar8 = puVar2[0x26];
      puVar10[0x25] = puVar2[0x25];
      puVar10[0x26] = uVar8;
      uVar23 = puVar2[0x27];
      puVar10[0x27] = uVar23;
      uVar32 = puVar2[0x28];
      puVar10[0x29] = puVar2[0x29];
      puVar10[0x28] = uVar32;
      uVar32 = puVar2[0x2b];
      puVar10[0x2a] = puVar2[0x2a];
      puVar10[0x2b] = uVar32;
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar23);
    }
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x6c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x6c));
    uVar18 = puVar2[1];
    if (uVar18 >> 0x3c < 0xf) {
      uVar22 = *puVar2;
      func_0x00010006c00c(uVar22,uVar18);
      *puVar10 = uVar22;
      puVar10[1] = uVar18;
    }
    else {
      uVar22 = *puVar2;
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x70)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x70));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x74));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x74));
    uVar22 = puVar2[1];
    *puVar10 = *puVar2;
    puVar10[1] = uVar22;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x78));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x78));
    uVar22 = puVar2[1];
    *puVar10 = *puVar2;
    puVar10[1] = uVar22;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x7c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x7c));
    uVar25 = puVar2[1];
    *puVar10 = *puVar2;
    puVar10[1] = uVar25;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x80));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x80));
    uVar18 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar25);
    if (uVar18 >> 0x3c < 0xf) {
      uVar22 = *puVar2;
      func_0x00010006c00c(uVar22,uVar18);
      *puVar10 = uVar22;
      puVar10[1] = uVar18;
    }
    else {
      uVar22 = *puVar2;
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
    }
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x84));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x84));
    lVar17 = 0;
    func_0x000100b91fbc();
    lVar16 = *(long *)(lVar17 + -8);
    puVar12 = puVar2;
    (**(code **)(lVar16 + 0x30))(puVar2,1,lVar17);
    if ((int)puVar12 == 0) {
      uVar22 = puVar2[1];
      *puVar10 = *puVar2;
      puVar10[1] = uVar22;
      uVar22 = puVar2[2];
      uVar26 = puVar2[5];
      uVar25 = puVar2[4];
      puVar10[3] = puVar2[3];
      puVar10[2] = uVar22;
      puVar10[5] = uVar26;
      puVar10[4] = uVar25;
      uVar22 = puVar2[6];
      uVar25 = puVar2[7];
      puVar10[6] = uVar22;
      puVar10[7] = uVar25;
      uVar25 = puVar2[8];
      puVar10[8] = uVar25;
      lVar21 = (long)*(int *)(lVar17 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar25);
      lVar13 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar13,1,lVar11);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar14 + 0x10))((long)puVar10 + lVar21,(long)puVar2 + lVar21,lVar11);
        (**(code **)(lVar14 + 0x38))((long)puVar10 + lVar21,0,1,lVar11);
      }
      else {
        lVar13 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar10 + lVar21,(long)puVar2 + lVar21,
                *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar17 + 0x2c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x2c));
      uVar22 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar22;
      puVar12 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar17 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x30));
      uVar22 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar22;
      lVar21 = (long)*(int *)(lVar17 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      lVar13 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar13,1,lVar11);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar14 + 0x10))((long)puVar10 + lVar21,(long)puVar2 + lVar21,lVar11);
        (**(code **)(lVar14 + 0x38))((long)puVar10 + lVar21,0,1,lVar11);
      }
      else {
        lVar11 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar10 + lVar21,(long)puVar2 + lVar21,
                *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar17 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x38));
      uVar22 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar22;
      puVar12 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar17 + 0x3c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x3c));
      uVar22 = puVar2[1];
      *puVar12 = *puVar2;
      puVar12[1] = uVar22;
      pcVar19 = *(code **)(lVar16 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      (*pcVar19)(puVar10,0,1,lVar17);
    }
    else {
      lVar17 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar10,puVar2,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
    }
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x88));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x88));
    lVar17 = puVar2[1];
    if (lVar17 == 0) {
      uVar22 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar10[0x11] = puVar2[0x11];
      puVar10[0x10] = uVar22;
      puVar10[0x13] = uVar26;
      puVar10[0x12] = uVar25;
      *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar22 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar10[9] = puVar2[9];
      puVar10[8] = uVar22;
      puVar10[0xb] = uVar26;
      puVar10[10] = uVar25;
      uVar26 = puVar2[0xc];
      uVar25 = puVar2[0xf];
      uVar22 = puVar2[0xe];
      puVar10[0xd] = puVar2[0xd];
      puVar10[0xc] = uVar26;
      puVar10[0xf] = uVar25;
      puVar10[0xe] = uVar22;
      uVar22 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
      uVar26 = puVar2[4];
      uVar25 = puVar2[7];
      uVar22 = puVar2[6];
      puVar10[5] = puVar2[5];
      puVar10[4] = uVar26;
      puVar10[7] = uVar25;
      puVar10[6] = uVar22;
    }
    else {
      *puVar10 = *puVar2;
      puVar10[1] = lVar17;
      lVar17 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar17 == 1) {
        uVar22 = puVar2[2];
        uVar26 = puVar2[5];
        uVar25 = puVar2[4];
        puVar10[3] = puVar2[3];
        puVar10[2] = uVar22;
        puVar10[5] = uVar26;
        puVar10[4] = uVar25;
        uVar22 = puVar2[6];
        puVar10[7] = puVar2[7];
        puVar10[6] = uVar22;
        puVar10[8] = puVar2[8];
      }
      else {
        lVar11 = puVar2[4];
        if (lVar11 == 1) {
          uVar22 = puVar2[2];
          uVar26 = puVar2[5];
          uVar25 = puVar2[4];
          puVar10[3] = puVar2[3];
          puVar10[2] = uVar22;
          puVar10[5] = uVar26;
          puVar10[4] = uVar25;
          puVar10[6] = puVar2[6];
        }
        else {
          uVar22 = puVar2[2];
          puVar10[3] = puVar2[3];
          puVar10[2] = uVar22;
          uVar22 = puVar2[5];
          uVar25 = puVar2[6];
          puVar10[4] = lVar11;
          puVar10[5] = uVar22;
          puVar10[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar10[7] = puVar2[7];
        puVar10[8] = lVar17;
        _swift_bridgeObjectRetain(lVar17);
      }
      lVar17 = puVar2[0xf];
      if (lVar17 == 1) {
        uVar22 = puVar2[9];
        puVar10[10] = puVar2[10];
        puVar10[9] = uVar22;
        uVar22 = puVar2[0xb];
        puVar10[0xc] = puVar2[0xc];
        puVar10[0xb] = uVar22;
        uVar22 = puVar2[0xd];
        puVar10[0xe] = puVar2[0xe];
        puVar10[0xd] = uVar22;
        puVar10[0xf] = puVar2[0xf];
      }
      else {
        lVar11 = puVar2[0xb];
        if (lVar11 == 1) {
          uVar22 = puVar2[9];
          puVar10[10] = puVar2[10];
          puVar10[9] = uVar22;
          uVar22 = puVar2[0xb];
          puVar10[0xc] = puVar2[0xc];
          puVar10[0xb] = uVar22;
          puVar10[0xd] = puVar2[0xd];
        }
        else {
          uVar22 = puVar2[9];
          puVar10[10] = puVar2[10];
          puVar10[9] = uVar22;
          uVar22 = puVar2[0xc];
          uVar25 = puVar2[0xd];
          puVar10[0xb] = lVar11;
          puVar10[0xc] = uVar22;
          puVar10[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar10[0xe] = puVar2[0xe];
        puVar10[0xf] = lVar17;
        _swift_bridgeObjectRetain(lVar17);
      }
      *(undefined2 *)(puVar10 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar22 = puVar2[0x11];
      puVar10[0x12] = puVar2[0x12];
      puVar10[0x11] = uVar22;
      puVar10[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x8c)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(lVar9 + 0x8c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x90)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x90));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x94));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x94));
    uVar22 = *puVar2;
    uVar26 = puVar2[3];
    uVar25 = puVar2[2];
    puVar10[1] = puVar2[1];
    *puVar10 = uVar22;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    uVar22 = puVar2[4];
    uVar26 = puVar2[7];
    uVar25 = puVar2[6];
    puVar10[5] = puVar2[5];
    puVar10[4] = uVar22;
    puVar10[7] = uVar26;
    puVar10[6] = uVar25;
    uVar26 = puVar2[0xc];
    uVar25 = puVar2[0xf];
    uVar22 = puVar2[0xe];
    puVar10[0xd] = puVar2[0xd];
    puVar10[0xc] = uVar26;
    puVar10[0xf] = uVar25;
    puVar10[0xe] = uVar22;
    uVar26 = puVar2[8];
    uVar25 = puVar2[0xb];
    uVar22 = puVar2[10];
    puVar10[9] = puVar2[9];
    puVar10[8] = uVar26;
    puVar10[0xb] = uVar25;
    puVar10[10] = uVar22;
    uVar22 = *(undefined8 *)((long)puVar2 + 0xa9);
    *(undefined8 *)((long)puVar10 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
    *(undefined8 *)((long)puVar10 + 0xa9) = uVar22;
    uVar22 = puVar2[0x12];
    uVar26 = puVar2[0x15];
    uVar25 = puVar2[0x14];
    puVar10[0x13] = puVar2[0x13];
    puVar10[0x12] = uVar22;
    puVar10[0x15] = uVar26;
    puVar10[0x14] = uVar25;
    uVar22 = puVar2[0x10];
    puVar10[0x11] = puVar2[0x11];
    puVar10[0x10] = uVar22;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x98)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x9c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xa0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xa4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa8)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xa8));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xac));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xac));
    lVar17 = puVar2[1];
    if (lVar17 == 0) {
      uVar22 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
    }
    else {
      *puVar10 = *puVar2;
      puVar10[1] = lVar17;
      uVar22 = puVar2[3];
      puVar10[2] = puVar2[2];
      puVar10[3] = uVar22;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xb0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xb4));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb8));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xb8));
    lVar17 = puVar2[1];
    if (lVar17 == 0) {
      uVar22 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar10[0x11] = puVar2[0x11];
      puVar10[0x10] = uVar22;
      puVar10[0x13] = uVar26;
      puVar10[0x12] = uVar25;
      *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar22 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar10[9] = puVar2[9];
      puVar10[8] = uVar22;
      puVar10[0xb] = uVar26;
      puVar10[10] = uVar25;
      uVar26 = puVar2[0xc];
      uVar25 = puVar2[0xf];
      uVar22 = puVar2[0xe];
      puVar10[0xd] = puVar2[0xd];
      puVar10[0xc] = uVar26;
      puVar10[0xf] = uVar25;
      puVar10[0xe] = uVar22;
      uVar22 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
      uVar26 = puVar2[4];
      uVar25 = puVar2[7];
      uVar22 = puVar2[6];
      puVar10[5] = puVar2[5];
      puVar10[4] = uVar26;
      puVar10[7] = uVar25;
      puVar10[6] = uVar22;
    }
    else {
      *puVar10 = *puVar2;
      puVar10[1] = lVar17;
      lVar17 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar17 == 1) {
        uVar22 = puVar2[2];
        uVar26 = puVar2[5];
        uVar25 = puVar2[4];
        puVar10[3] = puVar2[3];
        puVar10[2] = uVar22;
        puVar10[5] = uVar26;
        puVar10[4] = uVar25;
        uVar22 = puVar2[6];
        puVar10[7] = puVar2[7];
        puVar10[6] = uVar22;
        puVar10[8] = puVar2[8];
      }
      else {
        lVar11 = puVar2[4];
        if (lVar11 == 1) {
          uVar22 = puVar2[2];
          uVar26 = puVar2[5];
          uVar25 = puVar2[4];
          puVar10[3] = puVar2[3];
          puVar10[2] = uVar22;
          puVar10[5] = uVar26;
          puVar10[4] = uVar25;
          puVar10[6] = puVar2[6];
        }
        else {
          uVar22 = puVar2[2];
          puVar10[3] = puVar2[3];
          puVar10[2] = uVar22;
          uVar22 = puVar2[5];
          uVar25 = puVar2[6];
          puVar10[4] = lVar11;
          puVar10[5] = uVar22;
          puVar10[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar10[7] = puVar2[7];
        puVar10[8] = lVar17;
        _swift_bridgeObjectRetain(lVar17);
      }
      lVar17 = puVar2[0xf];
      if (lVar17 == 1) {
        uVar22 = puVar2[9];
        puVar10[10] = puVar2[10];
        puVar10[9] = uVar22;
        uVar22 = puVar2[0xb];
        puVar10[0xc] = puVar2[0xc];
        puVar10[0xb] = uVar22;
        uVar22 = puVar2[0xd];
        puVar10[0xe] = puVar2[0xe];
        puVar10[0xd] = uVar22;
        puVar10[0xf] = puVar2[0xf];
      }
      else {
        lVar11 = puVar2[0xb];
        if (lVar11 == 1) {
          uVar22 = puVar2[9];
          puVar10[10] = puVar2[10];
          puVar10[9] = uVar22;
          uVar22 = puVar2[0xb];
          puVar10[0xc] = puVar2[0xc];
          puVar10[0xb] = uVar22;
          puVar10[0xd] = puVar2[0xd];
        }
        else {
          uVar22 = puVar2[9];
          puVar10[10] = puVar2[10];
          puVar10[9] = uVar22;
          uVar22 = puVar2[0xc];
          uVar25 = puVar2[0xd];
          puVar10[0xb] = lVar11;
          puVar10[0xc] = uVar22;
          puVar10[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar10[0xe] = puVar2[0xe];
        puVar10[0xf] = lVar17;
        _swift_bridgeObjectRetain(lVar17);
      }
      *(undefined2 *)(puVar10 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar22 = puVar2[0x11];
      puVar10[0x12] = puVar2[0x12];
      puVar10[0x11] = uVar22;
      puVar10[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xbc));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xbc));
    lVar17 = puVar2[1];
    if (lVar17 == 0) {
      uVar22 = puVar2[0x10];
      uVar26 = puVar2[0x13];
      uVar25 = puVar2[0x12];
      puVar10[0x11] = puVar2[0x11];
      puVar10[0x10] = uVar22;
      puVar10[0x13] = uVar26;
      puVar10[0x12] = uVar25;
      *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      uVar22 = puVar2[8];
      uVar26 = puVar2[0xb];
      uVar25 = puVar2[10];
      puVar10[9] = puVar2[9];
      puVar10[8] = uVar22;
      puVar10[0xb] = uVar26;
      puVar10[10] = uVar25;
      uVar26 = puVar2[0xc];
      uVar25 = puVar2[0xf];
      uVar22 = puVar2[0xe];
      puVar10[0xd] = puVar2[0xd];
      puVar10[0xc] = uVar26;
      puVar10[0xf] = uVar25;
      puVar10[0xe] = uVar22;
      uVar22 = *puVar2;
      uVar26 = puVar2[3];
      uVar25 = puVar2[2];
      puVar10[1] = puVar2[1];
      *puVar10 = uVar22;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
      uVar26 = puVar2[4];
      uVar25 = puVar2[7];
      uVar22 = puVar2[6];
      puVar10[5] = puVar2[5];
      puVar10[4] = uVar26;
      puVar10[7] = uVar25;
      puVar10[6] = uVar22;
    }
    else {
      *puVar10 = *puVar2;
      puVar10[1] = lVar17;
      lVar17 = puVar2[8];
      _swift_bridgeObjectRetain();
      if (lVar17 == 1) {
        uVar22 = puVar2[2];
        uVar26 = puVar2[5];
        uVar25 = puVar2[4];
        puVar10[3] = puVar2[3];
        puVar10[2] = uVar22;
        puVar10[5] = uVar26;
        puVar10[4] = uVar25;
        uVar22 = puVar2[6];
        puVar10[7] = puVar2[7];
        puVar10[6] = uVar22;
        puVar10[8] = puVar2[8];
      }
      else {
        lVar11 = puVar2[4];
        if (lVar11 == 1) {
          uVar22 = puVar2[2];
          uVar26 = puVar2[5];
          uVar25 = puVar2[4];
          puVar10[3] = puVar2[3];
          puVar10[2] = uVar22;
          puVar10[5] = uVar26;
          puVar10[4] = uVar25;
          puVar10[6] = puVar2[6];
        }
        else {
          uVar22 = puVar2[2];
          puVar10[3] = puVar2[3];
          puVar10[2] = uVar22;
          uVar22 = puVar2[5];
          uVar25 = puVar2[6];
          puVar10[4] = lVar11;
          puVar10[5] = uVar22;
          puVar10[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar10[7] = puVar2[7];
        puVar10[8] = lVar17;
        _swift_bridgeObjectRetain(lVar17);
      }
      lVar17 = puVar2[0xf];
      if (lVar17 == 1) {
        uVar22 = puVar2[9];
        puVar10[10] = puVar2[10];
        puVar10[9] = uVar22;
        uVar22 = puVar2[0xb];
        puVar10[0xc] = puVar2[0xc];
        puVar10[0xb] = uVar22;
        uVar22 = puVar2[0xd];
        puVar10[0xe] = puVar2[0xe];
        puVar10[0xd] = uVar22;
        puVar10[0xf] = puVar2[0xf];
      }
      else {
        lVar11 = puVar2[0xb];
        if (lVar11 == 1) {
          uVar22 = puVar2[9];
          puVar10[10] = puVar2[10];
          puVar10[9] = uVar22;
          uVar22 = puVar2[0xb];
          puVar10[0xc] = puVar2[0xc];
          puVar10[0xb] = uVar22;
          puVar10[0xd] = puVar2[0xd];
        }
        else {
          uVar22 = puVar2[9];
          puVar10[10] = puVar2[10];
          puVar10[9] = uVar22;
          uVar22 = puVar2[0xc];
          uVar25 = puVar2[0xd];
          puVar10[0xb] = lVar11;
          puVar10[0xc] = uVar22;
          puVar10[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar10[0xe] = puVar2[0xe];
        puVar10[0xf] = lVar17;
        _swift_bridgeObjectRetain(lVar17);
      }
      *(undefined2 *)(puVar10 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
      uVar22 = puVar2[0x11];
      puVar10[0x12] = puVar2[0x12];
      puVar10[0x11] = uVar22;
      puVar10[0x13] = puVar2[0x13];
      *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xc0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xc0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xc4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xc4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 200)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xcc));
    (**(code **)(lVar24 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    lVar9 = 0x112dbe418;
    func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
    _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 104202674; end: 1042026af;  */

undefined8 FUN_104202674(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1042026b0; end: 104204707;  */

undefined8 * FUN_1042026b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar15 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar4 = 0;
  func_0x000100b91d00();
  lVar10 = *(long *)(lVar4 + -8);
  puVar5 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    uVar15 = *param_2;
    uVar17 = param_2[3];
    uVar16 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar15;
    puVar1[3] = uVar17;
    puVar1[2] = uVar16;
    puVar1[4] = param_2[4];
    uVar15 = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[5] = uVar15;
    uVar15 = param_2[7];
    puVar1[8] = param_2[8];
    puVar1[7] = uVar15;
    uVar15 = param_2[9];
    puVar1[10] = param_2[10];
    puVar1[9] = uVar15;
    uVar15 = param_2[0xb];
    puVar1[0xc] = param_2[0xc];
    puVar1[0xb] = uVar15;
    uVar15 = param_2[0xd];
    puVar1[0xe] = param_2[0xe];
    puVar1[0xd] = uVar15;
    uVar15 = param_2[0xf];
    puVar1[0x10] = param_2[0x10];
    puVar1[0xf] = uVar15;
    lVar11 = (long)*(int *)(lVar4 + 0x3c);
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
    lVar12 = *(long *)(lVar6 + -8);
    pcVar14 = *(code **)(lVar12 + 0x30);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar14)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar11,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(lVar4 + 0x40);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar14)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar11,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(lVar4 + 0x44);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar14)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar11,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x48)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x48));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x4c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x4c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x50)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x50));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x54)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x54));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x58)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x58));
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x5c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x5c));
    uVar15 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar15;
    puVar5[3] = uVar17;
    puVar5[2] = uVar16;
    uVar17 = puVar2[8];
    uVar16 = puVar2[0xb];
    uVar15 = puVar2[10];
    puVar5[9] = puVar2[9];
    puVar5[8] = uVar17;
    puVar5[0xb] = uVar16;
    puVar5[10] = uVar15;
    uVar17 = puVar2[4];
    uVar16 = puVar2[7];
    uVar15 = puVar2[6];
    puVar5[5] = puVar2[5];
    puVar5[4] = uVar17;
    puVar5[7] = uVar16;
    puVar5[6] = uVar15;
    uVar17 = puVar2[0x10];
    uVar16 = puVar2[0x13];
    uVar15 = puVar2[0x12];
    puVar5[0x11] = puVar2[0x11];
    puVar5[0x10] = uVar17;
    puVar5[0x13] = uVar16;
    puVar5[0x12] = uVar15;
    uVar17 = puVar2[0xc];
    uVar16 = puVar2[0xf];
    uVar15 = puVar2[0xe];
    puVar5[0xd] = puVar2[0xd];
    puVar5[0xc] = uVar17;
    puVar5[0xf] = uVar16;
    puVar5[0xe] = uVar15;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x60)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x60));
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 100));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 100));
    puVar5[4] = puVar2[4];
    uVar17 = *puVar2;
    uVar16 = puVar2[3];
    uVar15 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar17;
    puVar5[3] = uVar16;
    puVar5[2] = uVar15;
    _memcpy((long)puVar1 + (long)*(int *)(lVar4 + 0x68),(long)param_2 + (long)*(int *)(lVar4 + 0x68)
            ,0x160);
    puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x6c));
    uVar15 = *puVar5;
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x6c));
    puVar2[1] = puVar5[1];
    *puVar2 = uVar15;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x70)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x70));
    puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x74));
    uVar15 = *puVar5;
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x74));
    puVar2[1] = puVar5[1];
    *puVar2 = uVar15;
    puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x78));
    uVar15 = *puVar5;
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x78));
    puVar2[1] = puVar5[1];
    *puVar2 = uVar15;
    puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x7c));
    uVar15 = *puVar5;
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x7c));
    puVar2[1] = puVar5[1];
    *puVar2 = uVar15;
    puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x80));
    uVar15 = *puVar5;
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x80));
    puVar2[1] = puVar5[1];
    *puVar2 = uVar15;
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x84));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x84));
    lVar7 = 0;
    func_0x000100b91fbc();
    lVar11 = *(long *)(lVar7 + -8);
    puVar8 = puVar2;
    (**(code **)(lVar11 + 0x30))(puVar2,1,lVar7);
    if ((int)puVar8 == 0) {
      uVar15 = *puVar2;
      uVar17 = puVar2[3];
      uVar16 = puVar2[2];
      puVar5[1] = puVar2[1];
      *puVar5 = uVar15;
      puVar5[3] = uVar17;
      puVar5[2] = uVar16;
      puVar5[4] = puVar2[4];
      uVar15 = puVar2[5];
      puVar5[6] = puVar2[6];
      puVar5[5] = uVar15;
      uVar15 = puVar2[7];
      puVar5[8] = puVar2[8];
      puVar5[7] = uVar15;
      lVar13 = (long)*(int *)(lVar7 + 0x28);
      lVar9 = (long)puVar2 + lVar13;
      (*pcVar14)(lVar9,1,lVar6);
      if ((int)lVar9 == 0) {
        (**(code **)(lVar12 + 0x20))((long)puVar5 + lVar13,(long)puVar2 + lVar13,lVar6);
        (**(code **)(lVar12 + 0x38))((long)puVar5 + lVar13,0,1,lVar6);
      }
      else {
        lVar9 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar5 + lVar13,(long)puVar2 + lVar13,
                *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x2c));
      uVar15 = *puVar8;
      puVar3 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x2c));
      puVar3[1] = puVar8[1];
      *puVar3 = uVar15;
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
      uVar15 = *puVar8;
      puVar3 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x30));
      puVar3[1] = puVar8[1];
      *puVar3 = uVar15;
      lVar13 = (long)*(int *)(lVar7 + 0x34);
      lVar9 = (long)puVar2 + lVar13;
      (*pcVar14)(lVar9,1,lVar6);
      if ((int)lVar9 == 0) {
        (**(code **)(lVar12 + 0x20))((long)puVar5 + lVar13,(long)puVar2 + lVar13,lVar6);
        (**(code **)(lVar12 + 0x38))((long)puVar5 + lVar13,0,1,lVar6);
      }
      else {
        lVar6 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar5 + lVar13,(long)puVar2 + lVar13,
                *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38));
      uVar15 = *puVar8;
      puVar3 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x38));
      puVar3[1] = puVar8[1];
      *puVar3 = uVar15;
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x3c));
      uVar15 = *puVar2;
      puVar8 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x3c));
      puVar8[1] = puVar2[1];
      *puVar8 = uVar15;
      (**(code **)(lVar11 + 0x38))(puVar5,0,1,lVar7);
    }
    else {
      lVar7 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar5,puVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x88));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x88));
    uVar17 = puVar2[8];
    uVar16 = puVar2[0xb];
    uVar15 = puVar2[10];
    puVar5[9] = puVar2[9];
    puVar5[8] = uVar17;
    puVar5[0xb] = uVar16;
    puVar5[10] = uVar15;
    *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    uVar17 = puVar2[0x10];
    uVar16 = puVar2[0x13];
    uVar15 = puVar2[0x12];
    puVar5[0x11] = puVar2[0x11];
    puVar5[0x10] = uVar17;
    puVar5[0x13] = uVar16;
    puVar5[0x12] = uVar15;
    uVar15 = puVar2[0xc];
    uVar17 = puVar2[0xf];
    uVar16 = puVar2[0xe];
    puVar5[0xd] = puVar2[0xd];
    puVar5[0xc] = uVar15;
    puVar5[0xf] = uVar17;
    puVar5[0xe] = uVar16;
    uVar15 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar15;
    puVar5[3] = uVar17;
    puVar5[2] = uVar16;
    uVar17 = puVar2[4];
    uVar16 = puVar2[7];
    uVar15 = puVar2[6];
    puVar5[5] = puVar2[5];
    puVar5[4] = uVar17;
    puVar5[7] = uVar16;
    puVar5[6] = uVar15;
    *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x8c)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(lVar4 + 0x8c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x90)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x90));
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x94));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x94));
    uVar15 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar15;
    puVar5[3] = uVar17;
    puVar5[2] = uVar16;
    uVar15 = puVar2[4];
    uVar17 = puVar2[7];
    uVar16 = puVar2[6];
    puVar5[5] = puVar2[5];
    puVar5[4] = uVar15;
    puVar5[7] = uVar17;
    puVar5[6] = uVar16;
    uVar17 = puVar2[0xc];
    uVar16 = puVar2[0xf];
    uVar15 = puVar2[0xe];
    puVar5[0xd] = puVar2[0xd];
    puVar5[0xc] = uVar17;
    puVar5[0xf] = uVar16;
    puVar5[0xe] = uVar15;
    uVar17 = puVar2[8];
    uVar16 = puVar2[0xb];
    uVar15 = puVar2[10];
    puVar5[9] = puVar2[9];
    puVar5[8] = uVar17;
    puVar5[0xb] = uVar16;
    puVar5[10] = uVar15;
    uVar15 = *(undefined8 *)((long)puVar2 + 0xa9);
    *(undefined8 *)((long)puVar5 + 0xb1) = *(undefined8 *)((long)puVar2 + 0xb1);
    *(undefined8 *)((long)puVar5 + 0xa9) = uVar15;
    uVar15 = puVar2[0x12];
    uVar17 = puVar2[0x15];
    uVar16 = puVar2[0x14];
    puVar5[0x13] = puVar2[0x13];
    puVar5[0x12] = uVar15;
    puVar5[0x15] = uVar17;
    puVar5[0x14] = uVar16;
    uVar15 = puVar2[0x10];
    puVar5[0x11] = puVar2[0x11];
    puVar5[0x10] = uVar15;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x98)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x9c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xa0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xa4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xa8)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa8));
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xac));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xac));
    uVar15 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar15;
    puVar5[3] = uVar17;
    puVar5[2] = uVar16;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xb0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xb4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xb4));
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xb8));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xb8));
    uVar15 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar15;
    puVar5[3] = uVar17;
    puVar5[2] = uVar16;
    uVar17 = puVar2[8];
    uVar16 = puVar2[0xb];
    uVar15 = puVar2[10];
    puVar5[9] = puVar2[9];
    puVar5[8] = uVar17;
    puVar5[0xb] = uVar16;
    puVar5[10] = uVar15;
    uVar15 = puVar2[4];
    uVar17 = puVar2[7];
    uVar16 = puVar2[6];
    puVar5[5] = puVar2[5];
    puVar5[4] = uVar15;
    puVar5[7] = uVar17;
    puVar5[6] = uVar16;
    *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    uVar17 = puVar2[0x10];
    uVar16 = puVar2[0x13];
    uVar15 = puVar2[0x12];
    puVar5[0x11] = puVar2[0x11];
    puVar5[0x10] = uVar17;
    puVar5[0x13] = uVar16;
    puVar5[0x12] = uVar15;
    uVar15 = puVar2[0xc];
    uVar17 = puVar2[0xf];
    uVar16 = puVar2[0xe];
    puVar5[0xd] = puVar2[0xd];
    puVar5[0xc] = uVar15;
    puVar5[0xf] = uVar17;
    puVar5[0xe] = uVar16;
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xbc));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xbc));
    uVar15 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar15;
    puVar5[3] = uVar17;
    puVar5[2] = uVar16;
    uVar17 = puVar2[8];
    uVar16 = puVar2[0xb];
    uVar15 = puVar2[10];
    puVar5[9] = puVar2[9];
    puVar5[8] = uVar17;
    puVar5[0xb] = uVar16;
    puVar5[10] = uVar15;
    uVar15 = puVar2[4];
    uVar17 = puVar2[7];
    uVar16 = puVar2[6];
    puVar5[5] = puVar2[5];
    puVar5[4] = uVar15;
    puVar5[7] = uVar17;
    puVar5[6] = uVar16;
    *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
    uVar17 = puVar2[0x10];
    uVar16 = puVar2[0x13];
    uVar15 = puVar2[0x12];
    puVar5[0x11] = puVar2[0x11];
    puVar5[0x10] = uVar17;
    puVar5[0x13] = uVar16;
    puVar5[0x12] = uVar15;
    uVar15 = puVar2[0xc];
    uVar17 = puVar2[0xf];
    uVar16 = puVar2[0xe];
    puVar5[0xd] = puVar2[0xd];
    puVar5[0xc] = uVar15;
    puVar5[0xf] = uVar17;
    puVar5[0xe] = uVar16;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xc0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xc0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xc4)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xc4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 200)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xcc));
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar4);
  }
  else {
    lVar4 = 0x112dbe418;
    func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
    _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 104204708; end: 10420471f;  */

void FUN_104204708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104204720; end: 104204793;  */

void FUN_104204720(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dce2a88;
  lVar1 = 0x13f;
  func_0x000101684ed8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 104204794; end: 1042052cf;  */

long FUN_104204794(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1042052d0; end: 10420531f;  */

undefined8 FUN_1042052d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db3a20;
  func_0x0001000285a8(0x112db3a20,&UNK_10dce2ac0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104205320; end: 1042055cf;  */

void FUN_104205320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined2 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
                  undefined1 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined1 param_31,undefined4 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 *param_40,
                  undefined8 param_41,undefined8 param_42,undefined1 param_43,undefined4 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48)

{
  undefined1 auStack_708 [408];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 uStack_560;
  undefined1 uStack_55f;
  undefined4 uStack_55e;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined1 uStack_53f;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 uStack_400;
  undefined4 uStack_3fc;
  undefined1 uStack_3f8;
  undefined4 uStack_3f4;
  undefined1 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [408];
  undefined1 auStack_240 [416];
  
  uStack_53f = (undefined1)((ushort)param_17 >> 8);
  uStack_540 = (undefined1)param_17;
  uStack_538 = param_19;
  uStack_520 = 1;
  uStack_528 = 0;
  uStack_530 = param_20;
  uStack_508 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_570 = param_9;
  uStack_568 = param_10;
  uStack_560 = param_11;
  uStack_55f = param_12;
  uStack_55e = param_13;
  uStack_558 = param_14;
  uStack_550 = param_15;
  uStack_548 = param_16;
  FUN_1042052d0(param_21,&uStack_528);
  uStack_500 = param_22;
  uStack_4e8 = param_24;
  uStack_4d8 = param_25;
  uStack_4a8 = param_28;
  uStack_4b0 = param_27;
  uStack_4a0 = param_29;
  uStack_498 = param_30;
  uStack_490 = param_31;
  uStack_480 = param_34;
  uStack_488 = param_33;
  uStack_470 = param_36;
  uStack_478 = param_35;
  uStack_468 = param_37;
  uStack_458 = param_38;
  uStack_450 = param_39;
  uStack_440 = param_40[1];
  uStack_448 = *param_40;
  uStack_430 = param_40[3];
  uStack_438 = param_40[2];
  uStack_420 = param_40[5];
  uStack_428 = param_40[4];
  uStack_418 = *(undefined1 *)(param_40 + 6);
  uStack_410 = param_41;
  uStack_408 = param_42;
  uStack_400 = param_43;
  uStack_3fc = (undefined4)param_45;
  uStack_3f8 = (undefined1)((ulong)param_45 >> 0x20);
  uStack_3f4 = (undefined4)param_46;
  uStack_3f0 = (undefined1)((ulong)param_46 >> 0x20);
  uStack_3ec = (undefined4)param_47;
  uStack_3e8 = (undefined1)((ulong)param_47 >> 0x20);
  uStack_3e0 = param_48;
  uStack_4f8 = param_2;
  uStack_4f0 = param_3;
  uStack_4e0 = param_4;
  uStack_4d0 = param_5;
  uStack_4c8 = param_6;
  uStack_4c0 = param_7;
  uStack_460 = param_8;
  _memcpy(auStack_3d8,&uStack_570,0x198);
  _memcpy(auStack_240,&uStack_570,0x198);
  func_0x0001018ce650(auStack_3d8,auStack_708);
  func_0x0001018ce68c(auStack_240);
  _memcpy(param_1,auStack_3d8,0x198);
  return;
}



/* Entry: 1042055d0; end: 1042057a7;  */

void FUN_1042055d0(void)

{
  undefined8 *puVar1;
  undefined1 auStack_508 [408];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined2 uStack_360;
  undefined4 uStack_35e;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined2 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined2 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined7 uStack_298;
  undefined4 uStack_291;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined4 uStack_1be;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined2 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined4 uStack_f1;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined8 uStack_40;
  
  func_0x000103de4018(0,1,0,0,0);
  uStack_368 = 10;
  uStack_370 = 0;
  uStack_360 = 0;
  uStack_35e = 2;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_358 = 0;
  uStack_340 = 0x100;
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 1;
  uStack_308 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_300 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_291 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_218 = 1;
  uStack_1fc = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 1;
  uStack_1f4 = 0;
  uStack_1f0 = 1;
  uStack_1ec = 0;
  uStack_1e8 = 1;
  uStack_1e0 = 0;
  uStack_1c8 = 10;
  uStack_1d0 = 0;
  uStack_1c0 = 0;
  uStack_1be = 2;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0x100;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 1;
  uStack_160 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_168 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f1 = 0;
  uStack_100 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_78 = 1;
  uStack_5c = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 1;
  uStack_54 = 0;
  uStack_50 = 1;
  uStack_4c = 0;
  uStack_48 = 1;
  uStack_40 = 0;
  func_0x0001018ce650(&uStack_370,auStack_508);
  func_0x0001018ce68c(&uStack_1d0);
  FUN_104277ac8(0);
  _objc_allocWithZone();
  puVar1 = &uStack_370;
  FUN_1042763f0();
  func_0x0001018ce68c(&uStack_370);
  puRam0000000113813318 = puVar1;
  return;
}



/* Entry: 1042057a8; end: 1042057e7; +[SCAdServeRequestMetadata identity] */

void FUN_1042057a8(void)

{
  if (lRam00000001130695f0 != -1) {
    _swift_once(0x1130695f0,FUN_1042055d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813318);
  return;
}



/* Entry: 1042057e8; end: 104205aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1042057e8(ulong param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_830 [408];
  undefined *apuStack_698 [51];
  undefined8 auStack_500 [51];
  undefined1 auStack_368 [352];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [352];
  undefined1 uStack_98;
  
  _swift_getObjectType();
  _objc_retain();
  FUN_104276e78(auStack_500);
  uStack_208 = auStack_500[0];
  _memcpy(apuStack_698,auStack_500,0x198);
  if (param_1 == 0) {
    FUN_10420b370(&uStack_208,0x1130695f8,&UNK_10dce2ac8);
    apuStack_698[0] = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar8 = param_1;
      if (-1 < (long)param_1) {
        uVar8 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
    if (uVar8 != 0) {
      func_0x000104209b78(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104205aa8);
        (*pcVar4)();
      }
      lVar7 = 0;
      if ((param_1 & 0xc000000000000001) == 0) goto LAB_1042058ac;
      do {
        lVar5 = lVar7;
        func_0x000104207de4(lVar7,param_1);
        while( true ) {
          uVar9 = *(undefined8 *)(lVar5 + _DAT_11306a130);
          lVar10 = *(long *)(lVar5 + _DAT_11306a138);
          uStack_200 = uVar9;
          if (lVar10 == 0) {
            func_0x000102d123c4(auStack_830);
            _memcpy(auStack_1f8,auStack_830,0x160);
            _swift_bridgeObjectRetain(uVar9);
          }
          else {
            _swift_bridgeObjectRetain(uVar9);
            _objc_retain(lVar10);
            func_0x00010481c368(auStack_368);
            _memcpy(auStack_1f8,auStack_368,0x160);
            func_0x000102d123f8(auStack_1f8);
          }
          uVar2 = *(undefined1 *)(lVar5 + _DAT_11306a140);
          _objc_release(lVar5);
          uStack_98 = uVar2;
          _memcpy(auStack_830,&uStack_200,0x169);
          uVar1 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
            func_0x000104209b78(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
          _memcpy(puVar3 + uVar1 * 0x170 + 0x20,auStack_830,0x169);
          if (uVar8 - 1 == lVar7) {
            FUN_10420b370(&uStack_208,0x1130695f8,&UNK_10dce2ac8);
            apuStack_698[0] = puVar3;
            goto LAB_104205a38;
          }
          lVar7 = lVar7 + 1;
          if ((param_1 & 0xc000000000000001) != 0) break;
LAB_1042058ac:
          lVar5 = *(long *)(param_1 + lVar7 * 8 + 0x20);
          _objc_retain();
        }
      } while( true );
    }
    FUN_10420b370(&uStack_208,0x1130695f8,&UNK_10dce2ac8);
    apuStack_698[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
LAB_104205a38:
  _memcpy(&uStack_200,apuStack_698,0x198);
  _objc_allocWithZone(unaff_x20);
  func_0x0001018ce650(&uStack_200,auStack_830);
  puVar6 = &uStack_200;
  FUN_1042763f0(puVar6);
  func_0x0001018ce68c(&uStack_200);
  func_0x0001018ce68c(apuStack_698);
  return puVar6;
}



/* Entry: 104205aa8; end: 104205abb; -[SCAdServeRequestMetadata withInventories:] */

void FUN_104205aa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1042752a0(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_1042057e8(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104205abc; end: 104205b67; -[SCAdServeRequestMetadata withProductType:] */

void FUN_104205abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [8];
  undefined8 uStack_368;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_368 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104205b68; end: 104205c13; -[SCAdServeRequestMetadata withIsAdDisabledInHoldout:] */

void FUN_104205b68(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [16];
  undefined1 uStack_360;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_360 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104205c14; end: 104205cbf; -[SCAdServeRequestMetadata withIsAdDisabledFromServer:] */

void FUN_104205c14(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [17];
  undefined1 uStack_35f;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_35f = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104205cc0; end: 104205dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104205cc0(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 unaff_x20;
  undefined1 auStack_4f8 [408];
  undefined1 auStack_360 [18];
  uint uStack_34e;
  undefined1 auStack_1c8 [408];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_104276e78(auStack_360);
  if (param_1 == 0) {
    uStack_34e = 2;
  }
  else {
    uVar2 = 0x100;
    if (*(char *)(param_1 + _DAT_11306cf88) == '\0') {
      uVar2 = 0;
    }
    uVar3 = 0x10000;
    if (*(char *)(param_1 + _DAT_11306cf90) == '\0') {
      uVar3 = 0;
    }
    uVar4 = 0x1000000;
    if (*(char *)(param_1 + _DAT_11306cf98) == '\0') {
      uVar4 = 0;
    }
    uStack_34e = uVar2 | *(byte *)(param_1 + _DAT_11306cf80) | uVar3 | uVar4;
  }
  _memcpy(auStack_1c8,auStack_360,0x198);
  _objc_allocWithZone(unaff_x20);
  func_0x0001018ce650(auStack_1c8,auStack_4f8);
  puVar1 = auStack_1c8;
  FUN_1042763f0(puVar1);
  func_0x0001018ce68c(auStack_1c8);
  func_0x0001018ce68c(auStack_360);
  return puVar1;
}



/* Entry: 104205dd8; end: 104205e37; -[SCAdServeRequestMetadata withAdsPreferences:] */

void FUN_104205dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104205cc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104205e38; end: 104205f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104205e38(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 unaff_x20;
  long lVar4;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [24];
  long lStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined2 uStack_340;
  undefined1 auStack_1d8 [408];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_104276e78(auStack_370);
  if (param_1 == 0) {
    lStack_358 = 0;
    uStack_350 = 0;
    lStack_348 = 0;
    uStack_340 = 0x100;
  }
  else {
    lVar4 = *(long *)(param_1 + _DAT_113069ee0);
    bVar1 = lVar4 == 0;
    if (bVar1) {
      _objc_retain(param_1);
    }
    else {
      _objc_retain(param_1);
      func_0x00010c067fc0();
    }
    lVar2 = *(long *)(param_1 + _DAT_113069ee8);
    lStack_358 = lVar4;
    if (lVar2 == 0) {
      _objc_release(param_1);
      uStack_350 = CONCAT71(uStack_350._1_7_,bVar1);
      lStack_348 = 0;
      uStack_340 = 1;
    }
    else {
      func_0x00010c067fc0();
      _objc_release(param_1);
      uStack_350 = CONCAT71(uStack_350._1_7_,bVar1);
      uStack_340 = 0;
      lStack_348 = lVar2;
    }
  }
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(unaff_x20);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar3 = auStack_1d8;
  FUN_1042763f0(puVar3);
  func_0x0001018ce68c(auStack_1d8);
  func_0x0001018ce68c(auStack_370);
  return puVar3;
}



/* Entry: 104205f84; end: 104205fe3; -[SCAdServeRequestMetadata withAdEngagementSignal:] */

void FUN_104205f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104205e38(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104205fe4; end: 1042060df; -[SCAdServeRequestMetadata withProtoServeURL:] */

void FUN_104205fe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_6b8 [408];
  undefined1 auStack_520 [56];
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_388 [56];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_388);
  uStack_1e8 = uStack_348;
  uStack_1f0 = uStack_350;
  FUN_10420b370(&uStack_1f0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_520,auStack_388,0x198);
  lStack_4e8 = param_3;
  uStack_4e0 = param_2;
  _memcpy(auStack_1d8,auStack_520,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_6b8);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042060e0; end: 1042061ff;  */

undefined1 * FUN_1042060e0(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_540 [408];
  undefined1 auStack_3a8 [72];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  byte bStack_1f8;
  char cStack_1f7;
  char cStack_1f6;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [408];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_104276e78(auStack_3a8);
  if (param_1 == 0) {
    uVar3 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
  }
  else {
    _objc_retain(param_1);
    func_0x00010481b5d0(&uStack_210);
    uVar1 = 0x100;
    if (cStack_1f7 == '\0') {
      uVar1 = 0;
    }
    uVar7 = 0x10000;
    if (cStack_1f6 == '\0') {
      uVar7 = 0;
    }
    uVar7 = uVar1 | bStack_1f8 | uVar7;
    uVar3 = uStack_210;
    uVar4 = uStack_200;
    uVar5 = uStack_208;
    uVar6 = uStack_1f0;
  }
  func_0x000103de4018(uStack_360,uStack_358,uStack_350,uStack_348,uStack_340);
  uStack_360 = uVar3;
  uStack_358 = uVar5;
  uStack_350 = uVar4;
  uStack_348 = uVar7;
  uStack_340 = uVar6;
  _memcpy(auStack_1e8,auStack_3a8,0x198);
  _objc_allocWithZone(unaff_x20);
  func_0x0001018ce650(auStack_1e8,auStack_540);
  puVar2 = auStack_1e8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1e8);
  func_0x0001018ce68c(auStack_3a8);
  return puVar2;
}



/* Entry: 104206200; end: 10420625f; -[SCAdServeRequestMetadata withLoggingContext:] */

void FUN_104206200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042060e0(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104206260; end: 10420630b; -[SCAdServeRequestMetadata withShouldSendLocationData:] */

void FUN_104206260(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [112];
  undefined1 uStack_300;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_300 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10420630c; end: 1042063b7; -[SCAdServeRequestMetadata withLocationLatitude:] */

void FUN_10420630c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [120];
  undefined8 uStack_2f8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2f8 = param_1;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_2);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042063b8; end: 104206463; -[SCAdServeRequestMetadata withLocationLongitude:] */

void FUN_1042063b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [128];
  undefined8 uStack_2f0;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2f0 = param_1;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_2);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206464; end: 10420650f; -[SCAdServeRequestMetadata withLocationAccuracyInMeters:] */

void FUN_104206464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [136];
  undefined8 uStack_2e8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2e8 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206510; end: 1042065bb; -[SCAdServeRequestMetadata withLocationCapturedTimestampMillis:] */

void FUN_104206510(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [144];
  undefined8 uStack_2e0;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2e0 = param_1;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_2);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042065bc; end: 104206667; -[SCAdServeRequestMetadata withEnableMockAdServer:] */

void FUN_1042065bc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [152];
  undefined1 uStack_2d8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2d8 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206668; end: 104206713; -[SCAdServeRequestMetadata withIsDebugRequest:] */

void FUN_104206668(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [153];
  undefined1 uStack_2d7;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2d7 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206714; end: 1042067bf; -[SCAdServeRequestMetadata withFilledAdTTLInMillis:] */

void FUN_104206714(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [160];
  undefined8 uStack_2d0;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2d0 = param_1;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_2);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042067c0; end: 10420686b; -[SCAdServeRequestMetadata withNoFillAdTTLInMillis:] */

void FUN_1042067c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [168];
  undefined8 uStack_2c8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2c8 = param_1;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_2);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10420686c; end: 104206917; -[SCAdServeRequestMetadata withBackupAdTTLInMillis:] */

void FUN_10420686c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [176];
  undefined8 uStack_2c0;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2c0 = param_1;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_2);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206918; end: 1042069c3; -[SCAdServeRequestMetadata withEligibleForNewEUD:] */

void FUN_104206918(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [184];
  undefined1 uStack_2b8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_2b8 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042069c4; end: 104206ac3; -[SCAdServeRequestMetadata withSaid:] */

void FUN_1042069c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_6b8 [408];
  undefined1 auStack_520 [192];
  long lStack_460;
  undefined8 uStack_458;
  undefined1 auStack_388 [192];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_388);
  uStack_1e8 = uStack_2c0;
  uStack_1f0 = uStack_2c8;
  FUN_10420b370(&uStack_1f0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_520,auStack_388,0x198);
  lStack_460 = param_3;
  uStack_458 = param_2;
  _memcpy(auStack_1d8,auStack_520,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_6b8);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206ac4; end: 104206ccb;  */

undefined ** FUN_104206ac4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_818 [408];
  undefined1 auStack_680 [208];
  undefined *puStack_5b0;
  undefined1 auStack_4e8 [208];
  undefined8 uStack_418;
  undefined1 auStack_350 [336];
  undefined8 uStack_200;
  undefined *apuStack_1f8 [51];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_104276e78(auStack_4e8);
  uStack_200 = uStack_418;
  _memcpy(auStack_680,auStack_4e8,0x198);
  if (param_1 == 0) {
    FUN_10420b370(&uStack_200,0x113069600,&UNK_10dce2ad8);
    puStack_5b0 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_1;
      if (-1 < (long)param_1) {
        uVar5 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 == 0) {
      FUN_10420b370(&uStack_200,0x113069600,&UNK_10dce2ad8);
      puStack_5b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_1f8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102d0d87c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104206ccc);
        (*pcVar2)();
      }
      uVar6 = 0;
      puVar4 = apuStack_1f8[0];
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          _objc_retain(*(undefined8 *)(param_1 + uVar6 * 8 + 0x20));
        }
        else {
          func_0x000102d0dc78(uVar6,param_1);
        }
        FUN_10427949c(auStack_350);
        uVar1 = *(ulong *)(puVar4 + 0x10);
        apuStack_1f8[0] = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          func_0x000102d0d87c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
        }
        puVar4 = apuStack_1f8[0];
        uVar6 = uVar6 + 1;
        *(ulong *)(apuStack_1f8[0] + 0x10) = uVar1 + 1;
        _memcpy(apuStack_1f8[0] + uVar1 * 0x150 + 0x20,auStack_350,0x150);
      } while (uVar5 != uVar6);
      FUN_10420b370(&uStack_200,0x113069600,&UNK_10dce2ad8);
      puStack_5b0 = puVar4;
    }
  }
  _memcpy(apuStack_1f8,auStack_680,0x198);
  _objc_allocWithZone(unaff_x20);
  func_0x0001018ce650(apuStack_1f8,auStack_818);
  ppuVar3 = apuStack_1f8;
  FUN_1042763f0(ppuVar3);
  func_0x0001018ce68c(apuStack_1f8);
  func_0x0001018ce68c(auStack_680);
  return ppuVar3;
}



/* Entry: 104206ccc; end: 104206cdf; -[SCAdServeRequestMetadata withViewingSessionRecords:] */

void FUN_104206ccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10427a344(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_104206ac4(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104206ce0; end: 104206ddf; -[SCAdServeRequestMetadata withViewLocation:] */

void FUN_104206ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_6a8 [408];
  undefined1 auStack_510 [216];
  undefined8 uStack_438;
  undefined1 auStack_378 [216];
  undefined8 uStack_2a0;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  uVar2 = param_3;
  _objc_retain(param_3);
  FUN_104276e78(auStack_378,param_1);
  uStack_1e0 = uStack_2a0;
  _memcpy(auStack_510,auStack_378,0x198);
  _objc_retain(uVar2);
  FUN_10420b370(&uStack_1e0,0x112dc3de0,&UNK_10d9813c0);
  uStack_438 = param_3;
  _memcpy(auStack_1d8,auStack_510,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_6a8);
  puVar3 = auStack_1d8;
  FUN_1042763f0(puVar3);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(uVar2);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104206de0; end: 104206e8b; -[SCAdServeRequestMetadata withEnablePopulatingDiskBatteryInAdRequest:] */

void FUN_104206de0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [224];
  undefined1 uStack_290;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_290 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206e8c; end: 104206f37; -[SCAdServeRequestMetadata withUpdateServeURLWithInventoryType:] */

void FUN_104206e8c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [225];
  undefined1 uStack_28f;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_28f = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206f38; end: 104206fe3; -[SCAdServeRequestMetadata withEnableAllUpdatesDeprecation:] */

void FUN_104206f38(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [226];
  undefined1 uStack_28e;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_28e = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104206fe4; end: 1042070e3; -[SCAdServeRequestMetadata withMaxSKAdNetworkClickSupportedVersion:] */

void FUN_104206fe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_6b8 [408];
  undefined1 auStack_520 [232];
  long lStack_438;
  undefined8 uStack_430;
  undefined1 auStack_388 [232];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_388);
  uStack_1e8 = uStack_298;
  uStack_1f0 = uStack_2a0;
  FUN_10420b370(&uStack_1f0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_520,auStack_388,0x198);
  lStack_438 = param_3;
  uStack_430 = param_2;
  _memcpy(auStack_1d8,auStack_520,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_6b8);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042070e4; end: 1042071e3; -[SCAdServeRequestMetadata withMaxSKAdNetworkViewThroughSupportedVersion:] */

void FUN_1042070e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_6b8 [408];
  undefined1 auStack_520 [248];
  long lStack_428;
  undefined8 uStack_420;
  undefined1 auStack_388 [248];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_388);
  uStack_1e8 = uStack_288;
  uStack_1f0 = uStack_290;
  FUN_10420b370(&uStack_1f0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_520,auStack_388,0x198);
  lStack_428 = param_3;
  uStack_420 = param_2;
  _memcpy(auStack_1d8,auStack_520,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_6b8);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042071e4; end: 10420728f; -[SCAdServeRequestMetadata withOperaType:] */

void FUN_1042071e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [264];
  undefined8 uStack_268;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_268 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207290; end: 10420733b; -[SCAdServeRequestMetadata withTimeSinceForegroundMillis:] */

void FUN_104207290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [272];
  undefined8 uStack_260;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_260 = param_1;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_2);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10420733c; end: 104207427; -[SCAdServeRequestMetadata withAdOrganicSignals:] */

void FUN_10420733c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_698 [408];
  undefined1 auStack_500 [280];
  long lStack_3e8;
  undefined1 auStack_368 [280];
  undefined8 uStack_250;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___s10Foundation4DataVN_110350ae0);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_368);
  uStack_1d0 = uStack_250;
  FUN_10420b370(&uStack_1d0,0x112ee42a8,&UNK_10db0f340);
  _memcpy(auStack_500,auStack_368,0x198);
  lStack_3e8 = param_3;
  _memcpy(auStack_1c8,auStack_500,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1c8,auStack_698);
  puVar2 = auStack_1c8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1c8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207428; end: 104207693;  */

undefined ** FUN_104207428(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_6f8 [408];
  undefined1 auStack_560 [288];
  undefined *puStack_440;
  undefined1 auStack_3c8 [288];
  undefined8 uStack_2a8;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *apuStack_1f8 [51];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_104276e78(auStack_3c8);
  uStack_200 = uStack_2a8;
  _memcpy(auStack_560,auStack_3c8,0x198);
  if (param_1 == 0) {
    FUN_10420b370(&uStack_200,0x113069608,&UNK_10dce2ae0);
    puStack_440 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_1;
      if (-1 < (long)param_1) {
        uVar5 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 == 0) {
      FUN_10420b370(&uStack_200,0x113069608,&UNK_10dce2ae0);
      puStack_440 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_1f8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102d0d860(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104207694);
        (*pcVar3)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        puVar7 = (undefined8 *)(param_1 + 0x20);
        do {
          puVar2 = apuStack_1f8[0];
          _objc_retain(*puVar7);
          func_0x00010430b928(&uStack_230);
          uVar6 = *(ulong *)(puVar2 + 0x10);
          apuStack_1f8[0] = puVar2;
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar6) {
            func_0x000102d0d860(1 < *(ulong *)(puVar2 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(apuStack_1f8[0] + 0x10) = uVar6 + 1;
          *(undefined8 *)(apuStack_1f8[0] + uVar6 * 0x30 + 0x38) = uStack_218;
          *(undefined8 *)(apuStack_1f8[0] + uVar6 * 0x30 + 0x30) = uStack_220;
          *(undefined8 *)(apuStack_1f8[0] + uVar6 * 0x30 + 0x48) = uStack_208;
          *(undefined8 *)(apuStack_1f8[0] + uVar6 * 0x30 + 0x40) = uStack_210;
          *(undefined8 *)(apuStack_1f8[0] + uVar6 * 0x30 + 0x28) = uStack_228;
          *(undefined8 *)(apuStack_1f8[0] + uVar6 * 0x30 + 0x20) = uStack_230;
          uVar5 = uVar5 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar5 != 0);
      }
      else {
        uVar6 = 0;
        do {
          puVar2 = apuStack_1f8[0];
          func_0x000102d0dadc(uVar6,param_1);
          func_0x00010430b928(&uStack_230);
          uVar1 = *(ulong *)(puVar2 + 0x10);
          apuStack_1f8[0] = puVar2;
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
            func_0x000102d0d860(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
          }
          uVar6 = uVar6 + 1;
          *(ulong *)(apuStack_1f8[0] + 0x10) = uVar1 + 1;
          *(undefined8 *)(apuStack_1f8[0] + uVar1 * 0x30 + 0x38) = uStack_218;
          *(undefined8 *)(apuStack_1f8[0] + uVar1 * 0x30 + 0x30) = uStack_220;
          *(undefined8 *)(apuStack_1f8[0] + uVar1 * 0x30 + 0x48) = uStack_208;
          *(undefined8 *)(apuStack_1f8[0] + uVar1 * 0x30 + 0x40) = uStack_210;
          *(undefined8 *)(apuStack_1f8[0] + uVar1 * 0x30 + 0x28) = uStack_228;
          *(undefined8 *)(apuStack_1f8[0] + uVar1 * 0x30 + 0x20) = uStack_230;
        } while (uVar5 != uVar6);
      }
      puVar2 = apuStack_1f8[0];
      FUN_10420b370(&uStack_200,0x113069608,&UNK_10dce2ae0);
      puStack_440 = puVar2;
    }
  }
  _memcpy(apuStack_1f8,auStack_560,0x198);
  _objc_allocWithZone(unaff_x20);
  func_0x0001018ce650(apuStack_1f8,auStack_6f8);
  ppuVar4 = apuStack_1f8;
  FUN_1042763f0(ppuVar4);
  func_0x0001018ce68c(apuStack_1f8);
  func_0x0001018ce68c(auStack_560);
  return ppuVar4;
}



/* Entry: 104207694; end: 1042076a7; -[SCAdServeRequestMetadata withUpcomingStoriesContext:] */

void FUN_104207694(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10430c134(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_104207428(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1042076a8; end: 10420785b;  */

void FUN_1042076a8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,code *param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    (*param_4)(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  (*param_5)(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10420785c; end: 1042078bb; -[SCAdServeRequestMetadata withAdRankingContext:] */

void FUN_10420785c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000104207724(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042078bc; end: 104207967; -[SCAdServeRequestMetadata withBrandSafetyInventoryType:] */

void FUN_1042078bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [352];
  undefined8 uStack_210;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_210 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207968; end: 104207a53; -[SCAdServeRequestMetadata withPurgedServeItemIds:] */

void FUN_104207968(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_698 [408];
  undefined1 auStack_500 [360];
  long lStack_398;
  undefined1 auStack_368 [360];
  undefined8 uStack_200;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_368);
  uStack_1d0 = uStack_200;
  FUN_10420b370(&uStack_1d0,0x112d445a8,&UNK_10d990150);
  _memcpy(auStack_500,auStack_368,0x198);
  lStack_398 = param_3;
  _memcpy(auStack_1c8,auStack_500,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1c8,auStack_698);
  puVar2 = auStack_1c8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1c8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207a54; end: 104207aff; -[SCAdServeRequestMetadata withSmartCacheAllocationEnabled:] */

void FUN_104207a54(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [368];
  undefined1 uStack_200;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_200 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207b00; end: 104207baf; -[SCAdServeRequestMetadata withNumChatsPresent:] */

void FUN_104207b00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [372];
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_1f8 = 0;
  uStack_1fc = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207bb0; end: 104207c5f; -[SCAdServeRequestMetadata withNumPinnedChats:] */

void FUN_104207bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [380];
  undefined4 uStack_1f4;
  undefined1 uStack_1f0;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_1f0 = 0;
  uStack_1f4 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207c60; end: 104207d0f; -[SCAdServeRequestMetadata withNumUnreadConversations:] */

void FUN_104207c60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [388];
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_1e8 = 0;
  uStack_1ec = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


