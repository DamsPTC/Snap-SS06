/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104663350; end: 10466342b;  */

uint FUN_104663350(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_5b0 [464];
  undefined1 auStack_3e0 [464];
  undefined1 auStack_210 [464];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      do {
        lVar2 = lVar2 + -1;
        _memcpy(auStack_3e0,param_1,0x1d0);
        _memcpy(auStack_210,param_2,0x1d0);
        FUN_10466343c(auStack_3e0,auStack_5b0);
        FUN_10466343c(auStack_210,auStack_5b0);
        puVar1 = auStack_3e0;
        FUN_104661e8c(puVar1,auStack_210);
        uVar3 = (uint)puVar1;
        func_0x000104663478(auStack_210);
        func_0x000104663478(auStack_3e0);
        if (((ulong)puVar1 & 1) == 0) break;
        param_2 = param_2 + 0x1d0;
        param_1 = param_1 + 0x1d0;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 10466342c; end: 10466343b;  */

undefined1  [16] FUN_10466342c(void)

{
  return ZEXT816(0x110793a80);
}



/* Entry: 10466343c; end: 1046634ab;  */

undefined8 FUN_10466343c(undefined8 param_1,undefined8 param_2)

{
  FUN_104662448(param_2,param_1);
  return param_2;
}



/* Entry: 1046634ac; end: 1046634c3;  */

void FUN_1046634ac(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1046634c4; end: 104663563;  */

uint FUN_1046634c4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined1 uStack_f0;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = *(undefined1 *)(param_1 + 0x16);
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = *(undefined1 *)(param_2 + 0x16);
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_104663564(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 104663564; end: 1046636cf;  */

undefined8 FUN_104663564(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
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
  uStack_108 = param_2[0xd];
  uStack_110 = param_2[0xc];
  uStack_f8 = param_2[0xf];
  uStack_100 = param_2[0xe];
  uStack_e8 = param_2[0x11];
  uStack_f0 = param_2[0x10];
  uStack_d8 = param_2[0x13];
  uStack_e0 = param_2[0x12];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  puVar4 = &uStack_d0;
  FUN_104673224(puVar4,&uStack_170);
  if (((ulong)puVar4 & 1) == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x16);
  uVar1 = param_2[0x14];
  cVar3 = *(char *)(param_2 + 0x16);
  uVar5 = (ulong)*(uint *)((long)param_1 + 0xa1) << 8 |
          (ulong)*(uint3 *)((long)param_1 + 0xa5) << 0x28 | (ulong)*(byte *)(param_1 + 0x14);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar3 != '\0') {
        return 0;
      }
    }
    else if (cVar3 != '\x01') {
      return 0;
    }
    if ((uVar5 == uVar1) && (param_1[0x15] == param_2[0x15])) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    if ((uVar5 & 1) != 0) {
      return 1;
    }
  }
  else {
    if (bVar2 == 2) {
      if (cVar3 != '\x02') {
        return 0;
      }
    }
    else {
      if (bVar2 != 3) {
        if (uVar5 == 0 && param_1[0x15] == 0) {
          if (cVar3 != '\x04') {
            return 0;
          }
          if (uVar1 != 0) {
            return 0;
          }
        }
        else {
          if (cVar3 != '\x04') {
            return 0;
          }
          if (uVar1 != 1) {
            return 0;
          }
        }
        if (param_2[0x15] == 0) {
          return 1;
        }
        return 0;
      }
      if (cVar3 != '\x03') {
        return 0;
      }
    }
    if ((((uint)*(byte *)(param_1 + 0x14) ^ (uint)uVar1) & 1) == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1046636d0; end: 104663747;  */

long FUN_1046636d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104663748; end: 10466375f;  */

void FUN_104663748(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 104663760; end: 10466382b;  */

undefined8 * FUN_104663760(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  uVar3 = param_2[9];
  param_1[9] = uVar3;
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  uVar6 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar6;
  uVar5 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  uVar7 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar7;
  uVar5 = param_2[0x14];
  uVar1 = param_2[0x15];
  uVar2 = *(undefined1 *)(param_2 + 0x16);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  FUN_1046634ac(uVar5,uVar1,uVar2);
  param_1[0x14] = uVar5;
  param_1[0x15] = uVar1;
  *(undefined1 *)(param_1 + 0x16) = uVar2;
  return param_1;
}



/* Entry: 10466382c; end: 104663973;  */

undefined8 * FUN_10466382c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[2] = param_2[2];
  uVar6 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar6;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar6 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[8] = param_2[8];
  uVar6 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar6 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar6 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_2[0x14];
  uVar2 = param_2[0x15];
  uVar4 = *(undefined1 *)(param_2 + 0x16);
  FUN_1046634ac(uVar6,uVar2,uVar4);
  uVar1 = param_1[0x14];
  uVar3 = param_1[0x15];
  param_1[0x14] = uVar6;
  param_1[0x15] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar4;
  FUN_104663748(uVar1,uVar3,uVar5);
  return param_1;
}



/* Entry: 104663974; end: 104663a2b;  */

undefined8 * FUN_104663974(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar4 = param_2[7];
  uVar3 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[9];
  uVar3 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[10];
  uVar5 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar3;
  uVar4 = param_2[0xf];
  uVar3 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  uVar4 = param_2[0x13];
  uVar3 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 0x16);
  uVar4 = param_1[0x14];
  uVar3 = param_1[0x15];
  uVar5 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  FUN_104663748(uVar4,uVar3,uVar2);
  return param_1;
}



/* Entry: 104663a2c; end: 104663c27;  */

int FUN_104663a2c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0xb1) != '\0')) {
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



/* Entry: 104663c28; end: 104663cc3;  */

undefined8 * FUN_104663c28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1046634ac(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 104663cc4; end: 104663d07;  */

undefined8 * FUN_104663cc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_104663748(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 104663d08; end: 104663ddf;  */

int FUN_104663d08(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104663de0; end: 104663e43;  */

uint FUN_104663de0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 104663e44; end: 104663e6b;  */

void FUN_104663e44(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 104663e6c; end: 104663ec7;  */

undefined8 * FUN_104663e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104663ec8; end: 104663f03;  */

undefined8 * FUN_104663ec8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104663f04; end: 104663f9f;  */

int FUN_104663f04(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104663fa0; end: 104663fef;  */

undefined8 * FUN_104663fa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 2);
  uVar1 = param_1[4];
  param_2[3] = param_1[3];
  param_2[4] = uVar1;
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 5);
  param_2[6] = param_1[6];
  _swift_bridgeObjectRetain(uVar1);
  return param_2;
}



/* Entry: 104663ff0; end: 104664047;  */

uint FUN_104663ff0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000104664a98(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104664048; end: 10466415b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104664048(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_28 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_104663fa0(&uStack_90,auStack_c8);
  FUN_104662df8(&uStack_58);
  lVar2 = 0;
  FUN_1046824ec();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308bed8) = uStack_90;
  *(undefined8 *)(lVar3 + _DAT_11308bee0) = uStack_88;
  *(undefined1 *)(lVar3 + _DAT_11308bee8) = (undefined1)uStack_80;
  *(undefined1 *)(lVar3 + _DAT_11308bef0) = uStack_80._1_1_;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308bef8);
  puVar1[1] = uStack_70;
  *puVar1 = uStack_78;
  *(undefined1 *)(lVar3 + _DAT_11308bf00) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_11308bf08) = uStack_60;
  plVar4 = &lStack_d8;
  lStack_d8 = lVar3;
  lStack_d0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  plRam0000000113815190 = plVar4;
  return;
}



/* Entry: 10466415c; end: 10466419b; +[SCAdDeeplinkParseResult identity] */

void FUN_10466415c(void)

{
  if (lRam000000011308b8d8 != -1) {
    _swift_once(0x11308b8d8,FUN_104664048);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113815190);
  return;
}



/* Entry: 10466419c; end: 1046642cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10466419c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [56];
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
  
  puVar2 = auStack_f0;
  _swift_getObjectType();
  _objc_retain();
  FUN_1046823dc(&uStack_a8);
  uStack_40 = uStack_78;
  uStack_58 = uStack_90;
  uStack_60 = uStack_98;
  uStack_48 = uStack_80;
  uStack_50 = uStack_88;
  uStack_68 = uStack_a0;
  uStack_a8 = param_1;
  uStack_70 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bed8) = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_11308bee0) = uStack_68;
  *(undefined1 *)(unaff_x20 + _DAT_11308bee8) = (undefined1)uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_11308bef0) = uStack_60._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308bef8);
  puVar1[1] = uStack_50;
  *puVar1 = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_11308bf00) = (undefined1)uStack_48;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf08) = uStack_40;
  FUN_104663fa0(&uStack_70,auStack_e0);
  _objc_msgSendSuper2(auStack_f0,PTR_s_init_1125d9248);
  FUN_104662df8(&uStack_a8);
  return puVar2;
}



/* Entry: 1046642cc; end: 104664307; -[SCAdDeeplinkParseResult withDeepLinkToAppCount:] */

void FUN_1046642cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_10466419c(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104664308; end: 104664437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104664308(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [56];
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
  
  puVar2 = auStack_f0;
  _swift_getObjectType();
  _objc_retain();
  FUN_1046823dc(&uStack_a8);
  uStack_40 = uStack_78;
  uStack_58 = uStack_90;
  uStack_60 = uStack_98;
  uStack_48 = uStack_80;
  uStack_50 = uStack_88;
  uStack_70 = uStack_a8;
  uStack_a0 = param_1;
  uStack_68 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bed8) = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_11308bee0) = uStack_68;
  *(undefined1 *)(unaff_x20 + _DAT_11308bee8) = (undefined1)uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_11308bef0) = uStack_60._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308bef8);
  puVar1[1] = uStack_50;
  *puVar1 = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_11308bf00) = (undefined1)uStack_48;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf08) = uStack_40;
  FUN_104663fa0(&uStack_70,auStack_e0);
  _objc_msgSendSuper2(auStack_f0,PTR_s_init_1125d9248);
  FUN_104662df8(&uStack_a8);
  return puVar2;
}



/* Entry: 104664438; end: 104664473; -[SCAdDeeplinkParseResult withDeepLinkToAppInstallCount:] */

void FUN_104664438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_104664308(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104664474; end: 1046645a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104664474(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [56];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
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
  
  puVar2 = auStack_f0;
  _swift_getObjectType();
  _objc_retain();
  FUN_1046823dc(&uStack_a8);
  uStack_40 = uStack_78;
  uStack_60 = CONCAT71(uStack_97,param_1);
  uStack_68 = uStack_a0;
  uStack_70 = uStack_a8;
  uStack_58 = uStack_90;
  uStack_48 = uStack_80;
  uStack_50 = uStack_88;
  uStack_98 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bed8) = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_11308bee0) = uStack_68;
  *(undefined1 *)(unaff_x20 + _DAT_11308bee8) = (undefined1)uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_11308bef0) = uStack_60._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308bef8);
  puVar1[1] = uStack_50;
  *puVar1 = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_11308bf00) = (undefined1)uStack_48;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf08) = uStack_40;
  FUN_104663fa0(&uStack_70,auStack_e0);
  _objc_msgSendSuper2(auStack_f0,PTR_s_init_1125d9248);
  FUN_104662df8(&uStack_a8);
  return puVar2;
}



/* Entry: 1046645a4; end: 1046645df; -[SCAdDeeplinkParseResult withDeepLinkFallbackToWebview:] */

void FUN_1046645a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_104664474(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046645e0; end: 10466470f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1046645e0(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [56];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
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
  
  puVar2 = auStack_f0;
  _swift_getObjectType();
  _objc_retain();
  FUN_1046823dc(&uStack_a8);
  uStack_40 = uStack_78;
  uStack_60 = CONCAT62(uStack_96,CONCAT11(param_1,uStack_98));
  uStack_68 = uStack_a0;
  uStack_70 = uStack_a8;
  uStack_58 = uStack_90;
  uStack_48 = uStack_80;
  uStack_50 = uStack_88;
  uStack_97 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bed8) = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_11308bee0) = uStack_68;
  *(undefined1 *)(unaff_x20 + _DAT_11308bee8) = (undefined1)uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_11308bef0) = uStack_60._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308bef8);
  puVar1[1] = uStack_50;
  *puVar1 = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_11308bf00) = (undefined1)uStack_48;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf08) = uStack_40;
  FUN_104663fa0(&uStack_70,auStack_e0);
  _objc_msgSendSuper2(auStack_f0,PTR_s_init_1125d9248);
  FUN_104662df8(&uStack_a8);
  return puVar2;
}



/* Entry: 104664710; end: 10466474b; -[SCAdDeeplinkParseResult withDeepLinkFallbackToDefaultBrowser:] */

void FUN_104664710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1046645e0(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10466474c; end: 1046648b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10466474c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _swift_getObjectType();
  _objc_retain();
  FUN_1046823dc(&uStack_b8);
  uStack_e8 = uStack_b0;
  uStack_f0 = uStack_b8;
  uStack_d8 = uStack_a0;
  uStack_e0 = uStack_a8;
  uStack_c8 = uStack_90;
  uStack_d0 = uStack_98;
  uStack_c0 = uStack_88;
  _swift_bridgeObjectRetain(param_2);
  FUN_104662df8(&uStack_b8);
  uStack_50 = uStack_c0;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  uStack_70 = uStack_e0;
  uStack_58 = uStack_c8;
  uStack_d8 = param_1;
  uStack_d0 = param_2;
  uStack_68 = param_1;
  uStack_60 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bed8) = uStack_80;
  *(undefined8 *)(unaff_x20 + _DAT_11308bee0) = uStack_78;
  *(undefined1 *)(unaff_x20 + _DAT_11308bee8) = (undefined1)uStack_70;
  *(undefined1 *)(unaff_x20 + _DAT_11308bef0) = uStack_70._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308bef8);
  puVar1[1] = uStack_60;
  *puVar1 = uStack_68;
  *(undefined1 *)(unaff_x20 + _DAT_11308bf00) = (undefined1)uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf08) = uStack_50;
  FUN_104663fa0(&uStack_80,auStack_128);
  puVar2 = auStack_138;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  FUN_104662df8(&uStack_f0);
  return puVar2;
}



/* Entry: 1046648b4; end: 104664a5b; -[SCAdDeeplinkParseResult withDeepLinkUrl:] */

void FUN_1046648b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_10466474c(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104664a5c; end: 104664bcf; -[SCAdDeeplinkParseResult withCustomProductPageEnabled:] */

void FUN_104664a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x00010466492c(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104664bd0; end: 104664bd7;  */

void FUN_104664bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104664bd8; end: 104664c23;  */

undefined8 * FUN_104664bd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104664c24; end: 104664c9f;  */

undefined8 * FUN_104664c24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 104664ca0; end: 104664cfb;  */

undefined8 * FUN_104664ca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 104664cfc; end: 104664dc7;  */

int FUN_104664cfc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104664dc8; end: 104664eaf;  */

void FUN_104664dc8(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104664eb0; end: 104664eb3;  */

void FUN_104664eb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd240c0;
  _swift_getWitnessTable(&UNK_10dd240c0,&UNK_110793d78);
  puRam000000011308b8e0 = puVar1;
  return;
}



/* Entry: 104664eb4; end: 104664ef3;  */

void FUN_104664eb4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd240c0;
  _swift_getWitnessTable(&UNK_10dd240c0,&UNK_110793d78);
  puRam000000011308b8e0 = puVar1;
  return;
}



/* Entry: 104664ef4; end: 104664f57;  */

uint FUN_104664ef4(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 104664f58; end: 104664f7f;  */

void FUN_104664f58(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 104664f80; end: 104664fdb;  */

undefined8 * FUN_104664f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104664fdc; end: 104665017;  */

undefined8 * FUN_104664fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104665018; end: 1046650b3;  */

int FUN_104665018(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046650b4; end: 10466518f;  */

uint FUN_1046650b4(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_5b0 [464];
  undefined1 auStack_3e0 [464];
  undefined1 auStack_210 [464];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      do {
        lVar2 = lVar2 + -1;
        _memcpy(auStack_3e0,param_1,0x1d0);
        _memcpy(auStack_210,param_2,0x1d0);
        FUN_10466343c(auStack_3e0,auStack_5b0);
        FUN_10466343c(auStack_210,auStack_5b0);
        puVar1 = auStack_3e0;
        FUN_104661e8c(puVar1,auStack_210);
        uVar3 = (uint)puVar1;
        func_0x000104663478(auStack_210);
        func_0x000104663478(auStack_3e0);
        if (((ulong)puVar1 & 1) == 0) break;
        param_2 = param_2 + 0x1d0;
        param_1 = param_1 + 0x1d0;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 104665190; end: 1046653e3;  */

uint FUN_104665190(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046653e4);
          (*pcVar1)();
        }
        FUN_1046658b0(0,0x112dccd20,&PTR_PTR_1126b9030);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665384);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665388);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10466538c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_1046652ac;
LAB_10466527c:
              func_0x0001018881bc(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              func_0x0001018881bc(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_10466527c;
LAB_1046652ac:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104665390);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_1046653bc;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_1046653bc:
  return uVar8 & 1;
}



/* Entry: 1046653e4; end: 104665473;  */

bool FUN_1046653e4(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar2 != 0) && (param_1 != param_2)) {
    plVar4 = (long *)(param_1 + 0x30);
    plVar3 = (long *)(param_2 + 0x30);
    do {
      lVar2 = lVar2 + -1;
      bVar1 = *plVar4 == *plVar3 &&
              ((double)plVar4[-1] == (double)plVar3[-1] && (double)plVar4[-2] == (double)plVar3[-2])
      ;
      if (*plVar4 != *plVar3 ||
          ((double)plVar4[-1] != (double)plVar3[-1] || (double)plVar4[-2] != (double)plVar3[-2])) {
        return bVar1;
      }
      plVar4 = plVar4 + 3;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
    return bVar1;
  }
  return true;
}



/* Entry: 104665474; end: 1046656d3;  */

uint FUN_104665474(ulong param_1,ulong param_2,code *param_3,code *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == uVar2) {
    if (uVar11 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046656d4);
          (*pcVar1)();
        }
        (*param_3)(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar9 = (ulong *)(param_1 + 0x20);
          puVar12 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            if (lVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665664);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665668);
              (*pcVar1)();
            }
            uVar5 = *puVar9;
            uVar7 = *puVar12;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar10 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        else {
          lVar8 = 4;
          do {
            uVar11 = uVar11 - 1;
            uVar2 = lVar8 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10466566c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10466558c;
LAB_104665558:
              (*param_4)(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              (*param_4)(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_104665558;
LAB_10466558c:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104665670);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar8 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar10 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar8 = lVar8 + 1, uVar11 != 0));
        }
        goto LAB_1046656ac;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_1046656ac:
  return uVar10 & 1;
}



/* Entry: 1046656d4; end: 1046656e7;  */

uint FUN_1046656d4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == uVar2) {
    if (uVar11 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046656d4);
          (*pcVar1)();
        }
        (*(code *)0x10469e51c)(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar9 = (ulong *)(param_1 + 0x20);
          puVar12 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            if (lVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665664);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665668);
              (*pcVar1)();
            }
            uVar5 = *puVar9;
            uVar7 = *puVar12;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar10 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        else {
          lVar8 = 4;
          do {
            uVar11 = uVar11 - 1;
            uVar2 = lVar8 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10466566c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10466558c;
LAB_104665558:
              (*(code *)&SUB_102061f10)(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              (*(code *)&SUB_102061f10)(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_104665558;
LAB_10466558c:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104665670);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar8 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar10 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar8 = lVar8 + 1, uVar11 != 0));
        }
        goto LAB_1046656ac;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_1046656ac:
  return uVar10 & 1;
}



/* Entry: 1046656e8; end: 10466575b;  */

uint FUN_1046656e8(ulong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  
  uVar12 = *param_1;
  uVar6 = param_1[1];
  uVar10 = *param_2;
  uVar5 = param_2[1];
  uVar7 = 0;
  FUN_1046658b0(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar12,uVar10,uVar7);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  if (uVar6 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar6 & 0xffffffffffffff8;
    if ((uVar6 & 0x8000000000000000) != 0) {
      uVar12 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar5 & 0xffffffffffffff8;
    if ((uVar5 & 0x8000000000000000) != 0) {
      uVar2 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar12 == uVar2) {
    if (uVar12 != 0) {
      uVar8 = uVar6 & 0xffffffffffffff8;
      uVar2 = uVar8;
      if ((uVar6 & 0x8000000000000000) != 0) {
        uVar2 = uVar6;
      }
      uVar3 = uVar8 + 0x20;
      if (uVar6 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar9 = uVar5 & 0xffffffffffffff8;
      uVar2 = uVar9;
      if ((uVar5 & 0x8000000000000000) != 0) {
        uVar2 = uVar5;
      }
      uVar4 = uVar9 + 0x20;
      if (uVar5 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046653e4);
          (*pcVar1)();
        }
        FUN_1046658b0(0,0x112dccd20,&PTR_PTR_1126b9030);
        if (((uVar5 | uVar6) & 0xc000000000000001) == 0) {
          lVar15 = *(long *)(uVar8 + 0x10);
          lVar16 = *(long *)(uVar9 + 0x10);
          puVar13 = (ulong *)(uVar6 + 0x20);
          puVar14 = (undefined8 *)(uVar5 + 0x20);
          do {
            uVar12 = uVar12 - 1;
            if (lVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665384);
              (*pcVar1)();
            }
            if (lVar16 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104665388);
              (*pcVar1)();
            }
            uVar5 = *puVar13;
            uVar10 = *puVar14;
            _objc_retain();
            _objc_retain(uVar10);
            uVar6 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar10);
            uVar11 = (uint)uVar6;
            _objc_release(uVar5);
            _objc_release(uVar10);
            if ((uVar6 & 1) == 0) break;
            lVar16 = lVar16 + -1;
            lVar15 = lVar15 + -1;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (uVar12 != 0);
        }
        else {
          lVar15 = 4;
          do {
            uVar12 = uVar12 - 1;
            uVar2 = lVar15 - 4;
            if ((uVar6 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar8 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10466538c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(uVar6 + lVar15 * 8);
              _objc_retain();
              if ((uVar5 & 0xc000000000000001) == 0) goto LAB_1046652ac;
LAB_10466527c:
              func_0x0001018881bc(uVar2,uVar5);
            }
            else {
              uVar3 = uVar2;
              func_0x0001018881bc(uVar2,uVar6);
              if ((uVar5 & 0xc000000000000001) != 0) goto LAB_10466527c;
LAB_1046652ac:
              if (*(long *)(uVar9 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104665390);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(uVar5 + lVar15 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar11 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar15 = lVar15 + 1, uVar12 != 0));
        }
        goto LAB_1046653bc;
      }
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
LAB_1046653bc:
  return uVar11 & 1;
}



/* Entry: 10466575c; end: 104665783;  */

void FUN_10466575c(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 104665784; end: 1046657df;  */

undefined8 * FUN_104665784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1046657e0; end: 10466581b;  */

undefined8 * FUN_1046657e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10466581c; end: 1046658af;  */

int FUN_10466581c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046658b0; end: 1046658ef;  */

void FUN_1046658b0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1046658f0; end: 1046658f7;  */

undefined8 * FUN_1046658f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1046658f8; end: 10466595b;  */

uint FUN_1046658f8(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10466595c; end: 104665983;  */

void FUN_10466595c(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 104665984; end: 1046659df;  */

undefined8 * FUN_104665984(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1046659e0; end: 104665a1b;  */

undefined8 * FUN_1046659e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104665a1c; end: 104665ab7;  */

int FUN_104665a1c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104665ab8; end: 104665b67;  */

uint FUN_104665ab8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_104665b68(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 104665b68; end: 104665c6f;  */

bool FUN_104665b68(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
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
  uStack_108 = param_2[0xd];
  uStack_110 = param_2[0xc];
  uStack_f8 = param_2[0xf];
  uStack_100 = param_2[0xe];
  uStack_e8 = param_2[0x11];
  uStack_f0 = param_2[0x10];
  uStack_d8 = param_2[0x13];
  uStack_e0 = param_2[0x12];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  puVar2 = &uStack_d0;
  FUN_104673224(puVar2,&uStack_170);
  if ((((((ulong)puVar2 & 1) == 0) || (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) ||
      (*(int *)(param_1 + 0x15) != *(int *)(param_2 + 0x15))) ||
     ((((double)param_1[0x16] != (double)param_2[0x16] ||
       ((double)param_1[0x17] != (double)param_2[0x17])) ||
      (((double)param_1[0x18] != (double)param_2[0x18] ||
       ((double)param_1[0x19] != (double)param_2[0x19])))))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x1a) == *(int *)(param_2 + 0x1a);
  }
  return bVar1;
}



/* Entry: 104665c70; end: 104665cdb;  */

long FUN_104665c70(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104665cdc; end: 104665d97;  */

undefined8 * FUN_104665cdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  uVar1 = param_2[9];
  param_1[9] = uVar1;
  uVar3 = param_2[10];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  uVar4 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  uVar4 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  uVar5 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  uVar5 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar5;
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 104665d98; end: 104665eeb;  */

undefined8 * FUN_104665d98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  return param_1;
}



/* Entry: 104665eec; end: 104665f9f;  */

undefined8 * FUN_104665eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
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
  uVar2 = param_2[0xf];
  uVar1 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  uVar2 = param_2[0x13];
  uVar1 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x14];
  uVar3 = param_2[0x17];
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar1;
  uVar2 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar2;
  param_1[0x1a] = param_2[0x1a];
  return param_1;
}



/* Entry: 104665fa0; end: 104666093;  */

int FUN_104665fa0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x36] != '\0')) {
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



/* Entry: 104666094; end: 10466617b;  */

void FUN_104666094(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10466617c; end: 10466617f;  */

void FUN_10466617c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24230;
  _swift_getWitnessTable(&UNK_10dd24230,&UNK_110793ff8);
  puRam000000011308b8e8 = puVar1;
  return;
}



/* Entry: 104666180; end: 1046661bf;  */

void FUN_104666180(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24230;
  _swift_getWitnessTable(&UNK_10dd24230,&UNK_110793ff8);
  puRam000000011308b8e8 = puVar1;
  return;
}



/* Entry: 1046661c0; end: 104666223;  */

uint FUN_1046661c0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 104666224; end: 10466624b;  */

void FUN_104666224(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10466624c; end: 1046662a7;  */

undefined8 * FUN_10466624c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1046662a8; end: 1046662e3;  */

undefined8 * FUN_1046662a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1046662e4; end: 10466637f;  */

int FUN_1046662e4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104666380; end: 1046663bb;  */

undefined8 FUN_104666380(undefined8 param_1,undefined8 param_2)

{
  FUN_104667e14(param_2,param_1);
  return param_2;
}



/* Entry: 1046663bc; end: 1046664a3;  */

uint FUN_1046663bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
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
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_218 = param_1[0x1d];
  uStack_220 = param_1[0x1c];
  uStack_208 = param_1[0x1f];
  uStack_210 = param_1[0x1e];
  uStack_1f8 = param_1[0x21];
  uStack_200 = param_1[0x20];
  uStack_1f0 = *(undefined2 *)(param_1 + 0x22);
  uStack_258 = param_1[0x15];
  uStack_260 = param_1[0x14];
  uStack_248 = param_1[0x17];
  uStack_250 = param_1[0x16];
  uStack_238 = param_1[0x19];
  uStack_240 = param_1[0x18];
  uStack_228 = param_1[0x1b];
  uStack_230 = param_1[0x1a];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_198 = param_2[0x1d];
  uStack_1a0 = param_2[0x1c];
  uStack_188 = param_2[0x1f];
  uStack_190 = param_2[0x1e];
  uStack_178 = param_2[0x21];
  uStack_180 = param_2[0x20];
  uStack_170 = *(undefined2 *)(param_2 + 0x22);
  uStack_1d8 = param_2[0x15];
  uStack_1e0 = param_2[0x14];
  uStack_1c8 = param_2[0x17];
  uStack_1d0 = param_2[0x16];
  uStack_1b8 = param_2[0x19];
  uStack_1c0 = param_2[0x18];
  uStack_1a8 = param_2[0x1b];
  uStack_1b0 = param_2[0x1a];
  puVar2 = &uStack_160;
  FUN_104673224(puVar2,&uStack_c0);
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1046675f4(&uStack_260,&uStack_1e0);
  }
  return uVar1 & 1;
}



/* Entry: 1046664a4; end: 1046664cf;  */

long FUN_1046664a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046664d0; end: 1046664f7;  */

void FUN_1046664d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort in_stack_00000030;
  
  if ((in_stack_00000030 >> 0xc != 3) && (param_2 = param_4, in_stack_00000030 >> 0xc != 7)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1046664f8; end: 10466656f;  */

void FUN_1046664f8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
  FUN_104666570(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8),
                *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108),
                *(undefined2 *)(param_1 + 0x110));
  return;
}



/* Entry: 104666570; end: 104666597;  */

void FUN_104666570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort in_stack_00000030;
  
  if ((in_stack_00000030 >> 0xc != 3) && (param_2 = param_4, in_stack_00000030 >> 0xc != 7)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104666598; end: 10466692f;  */

undefined8 * FUN_104666598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar16 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar16;
  uVar16 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar16;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar16 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar16;
  uVar16 = param_2[7];
  uVar17 = param_2[8];
  param_1[7] = uVar16;
  param_1[8] = uVar17;
  uVar15 = param_2[9];
  param_1[9] = uVar15;
  uVar17 = param_2[10];
  uVar19 = param_2[0xd];
  uVar18 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar17;
  param_1[0xd] = uVar19;
  param_1[0xc] = uVar18;
  uVar5 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar5;
  uVar17 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar17;
  uVar6 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar6;
  uVar17 = param_2[0x14];
  uVar7 = param_2[0x15];
  uVar18 = param_2[0x16];
  uVar8 = param_2[0x17];
  uVar19 = param_2[0x18];
  uVar9 = param_2[0x19];
  uVar1 = param_2[0x1a];
  uVar10 = param_2[0x1b];
  uVar2 = param_2[0x1c];
  uVar11 = param_2[0x1d];
  uVar3 = param_2[0x1e];
  uVar12 = param_2[0x1f];
  uVar4 = param_2[0x20];
  uVar13 = param_2[0x21];
  uVar14 = *(undefined2 *)(param_2 + 0x22);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  FUN_1046664d0(uVar17,uVar7,uVar18,uVar8,uVar19,uVar9,uVar1,uVar10,uVar2,uVar11,uVar3,uVar12,uVar4,
                uVar13,uVar14);
  param_1[0x14] = uVar17;
  param_1[0x15] = uVar7;
  param_1[0x16] = uVar18;
  param_1[0x17] = uVar8;
  param_1[0x18] = uVar19;
  param_1[0x19] = uVar9;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar10;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = uVar11;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = uVar12;
  param_1[0x20] = uVar4;
  param_1[0x21] = uVar13;
  *(undefined2 *)(param_1 + 0x22) = uVar14;
  return param_1;
}



/* Entry: 104666930; end: 104666937;  */

void FUN_104666930(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x112);
  return;
}



/* Entry: 104666938; end: 104666a2f;  */

undefined8 * FUN_104666938(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar11 = param_2[1];
  uVar10 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  _swift_bridgeObjectRelease(uVar10);
  uVar11 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar11;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar11 = param_2[7];
  uVar10 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar11;
  _swift_bridgeObjectRelease(uVar10);
  uVar11 = param_2[9];
  uVar10 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  _swift_bridgeObjectRelease(uVar10);
  uVar11 = param_2[10];
  uVar15 = param_2[0xd];
  uVar10 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar11;
  param_1[0xd] = uVar15;
  param_1[0xc] = uVar10;
  uVar11 = param_2[0xf];
  uVar10 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar11;
  _swift_bridgeObjectRelease(uVar10);
  uVar11 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar11;
  uVar11 = param_2[0x13];
  uVar10 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar11;
  _swift_bridgeObjectRelease(uVar10);
  uVar8 = *(undefined2 *)(param_2 + 0x22);
  uVar11 = param_1[0x14];
  uVar3 = param_1[0x15];
  uVar10 = param_1[0x16];
  uVar4 = param_1[0x17];
  uVar15 = param_1[0x18];
  uVar5 = param_1[0x19];
  uVar1 = param_1[0x1a];
  uVar6 = param_1[0x1b];
  uVar13 = param_1[0x1d];
  uVar12 = param_1[0x1c];
  uVar16 = param_1[0x1f];
  uVar14 = param_1[0x1e];
  uVar2 = param_1[0x20];
  uVar7 = param_1[0x21];
  uVar9 = *(undefined2 *)(param_1 + 0x22);
  uVar17 = param_2[0x14];
  uVar19 = param_2[0x17];
  uVar18 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar17;
  param_1[0x17] = uVar19;
  param_1[0x16] = uVar18;
  uVar17 = param_2[0x18];
  uVar19 = param_2[0x1b];
  uVar18 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar17;
  param_1[0x1b] = uVar19;
  param_1[0x1a] = uVar18;
  uVar17 = param_2[0x1c];
  uVar19 = param_2[0x1f];
  uVar18 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar17;
  param_1[0x1f] = uVar19;
  param_1[0x1e] = uVar18;
  uVar17 = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar17;
  *(undefined2 *)(param_1 + 0x22) = uVar8;
  FUN_104666570(uVar11,uVar3,uVar10,uVar4,uVar15,uVar5,uVar1,uVar6,uVar12,uVar13,uVar14,uVar16,uVar2
                ,uVar7,uVar9);
  return param_1;
}



/* Entry: 104666a30; end: 104666b53;  */

int FUN_104666a30(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x112) != '\0')) {
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



/* Entry: 104666b54; end: 104666c43;  */

undefined8
FUN_104666b54(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  ulong uVar1;
  
  FUN_104666dcc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_4);
  if (((param_1 & 1) != 0) &&
     (__sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_2,param_5), (param_2 & 1) != 0)) {
    if (param_3 == 0) {
      if (param_6 == 0) {
        return 1;
      }
    }
    else if (param_6 != 0) {
      FUN_104666dcc(0,0x11308b8f0,&PTR_PTR_1126b8fb0);
      _objc_retain(param_6);
      _objc_retain();
      uVar1 = param_3;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(param_3);
      _objc_release(param_6);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104666c44; end: 104666c73;  */

void FUN_104666c44(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[2]);
  return;
}



/* Entry: 104666c74; end: 104666ce7;  */

undefined8 * FUN_104666c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104666ce8; end: 104666d33;  */

undefined8 * FUN_104666ce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104666d34; end: 104666dcb;  */

int FUN_104666d34(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104666dcc; end: 104666e0b;  */

void FUN_104666dcc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104666e0c; end: 104666e53;  */

undefined8 * FUN_104666e0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 104666e54; end: 104666eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104666e54(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  lVar1 = 0;
  func_0x0001046855e4();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308c100) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308c108) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308c110) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308c118) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308c120) = 0;
  lStack_30 = lVar2;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  puRam0000000113815198 = (undefined1 *)plVar3;
  return;
}



/* Entry: 104666ef0; end: 104666f2f; +[SCAdLifecycleTimestampParseResult identity] */

void FUN_104666ef0(void)

{
  if (lRam000000011308b8f8 != -1) {
    _swift_once(0x11308b8f8,FUN_104666e54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113815198);
  return;
}



/* Entry: 104666f30; end: 10466700f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104666f30(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308c108);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c110);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c118);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c120);
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308c100) = param_1;
  *(undefined8 *)(lVar1 + _DAT_11308c108) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_11308c110) = uVar3;
  *(undefined8 *)(lVar1 + _DAT_11308c118) = uVar4;
  *(undefined8 *)(lVar1 + _DAT_11308c120) = uVar5;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}


