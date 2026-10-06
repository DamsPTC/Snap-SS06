/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108397ac8; end: 108397afb;  */

void FUN_108397ac8(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = CONCAT44((int)((ulong)*param_1 >> 0x20) + 0x8000 >> 0x10,
                       (int)*param_1 + 0x8000 >> 0x10);
  uStack_18 = CONCAT44((int)((ulong)param_1[1] >> 0x20) + 0x8000 >> 0x10,
                       (int)param_1[1] + 0x8000 >> 0x10);
  FUN_1083979d8(&uStack_20);
  return;
}



/* Entry: 108397afc; end: 108397b3f;  */

void FUN_108397afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010827a188(param_1,&uStack_30);
  FUN_1083979d8(&uStack_30,param_2,param_3);
  return;
}



/* Entry: 108397b40; end: 108397bb3;  */

void FUN_108397b40(int *param_1,long param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_4d8 [16];
  byte bStack_4c8;
  
  if (((*(byte *)(param_2 + 0x31) & 1) == 0) && (func_0x000108397cd4(), ((ulong)param_1 & 1) == 0))
  {
    if (*(char *)(unaff_x21 + 0x30) == '\x01') {
      func_0x000108397cf8();
      iVar1 = (int)&uStack_510;
      piVar2 = param_1;
      FUN_10821a6d8();
      if (((ulong)piVar2 & 1) == 0) {
        if (param_2 == 0) {
code_r0x000108397aa8:
                    /* WARNING: Could not recover jumptable at 0x000108397ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_3 + 0x28))
                    (param_3,*param_1,param_1[1],param_1[2] - *param_1,param_1[3] - param_1[1]);
          return;
        }
        if (*(long *)(param_2 + 0x10) == 0) {
          lVar3 = param_2;
          func_0x000108219544(param_2,param_1);
          if ((int)lVar3 != 0) goto code_r0x000108397aa8;
          uStack_508 = *(undefined8 *)(param_1 + 2);
          uStack_510 = *(undefined8 *)param_1;
          func_0x00010821b838(&uStack_510,param_2);
          if (iVar1 != 0) {
            FUN_108397aa8(param_3,&uStack_510);
          }
        }
        else {
          FUN_1083903d0(&uStack_510,param_2,param_1);
          while ((bStack_4c8 & 1) == 0) {
            FUN_108397aa8(param_3,auStack_4d8);
            FUN_108390454(&uStack_510);
          }
        }
      }
      return;
    }
    func_0x000108397cc4();
    FUN_1083979d8();
    func_0x000108397cbc();
  }
  return;
}



/* Entry: 108397bb4; end: 108397c27;  */

void FUN_108397bb4(undefined8 *param_1,long param_2)

{
  long unaff_x21;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  
  if (((*(byte *)(param_2 + 0x31) & 1) == 0) && (func_0x000108397cd4(), ((ulong)param_1 & 1) == 0))
  {
    if (*(char *)(unaff_x21 + 0x30) == '\x01') {
      func_0x000108397cf8();
      uStack_4b0 = CONCAT44((int)((ulong)*param_1 >> 0x20) + 0x8000 >> 0x10,
                            (int)*param_1 + 0x8000 >> 0x10);
      uStack_4a8 = CONCAT44((int)((ulong)param_1[1] >> 0x20) + 0x8000 >> 0x10,
                            (int)param_1[1] + 0x8000 >> 0x10);
      FUN_1083979d8(&uStack_4b0);
      return;
    }
    func_0x000108397cc4();
    FUN_108397ac8();
    func_0x000108397cbc();
  }
  return;
}



/* Entry: 108397c28; end: 108397cbb;  */

void FUN_108397c28(float *param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_4a8 [1144];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((*(byte *)(param_2 + 0x31) & 1) == 0) && (*param_1 < param_1[2])) &&
     (param_1[1] < param_1[3])) {
    if (*(char *)(param_2 + 0x30) == '\x01') {
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x00010827a188(param_1,&uStack_30);
      FUN_1083979d8(&uStack_30,param_2,param_3);
      return;
    }
    FUN_1083876e8(auStack_4a8);
    FUN_108397afc(param_1,uStack_30,uStack_28);
    FUN_108397cbc();
  }
  return;
}



/* Entry: 108397cbc; end: 108397d0b;  */

undefined8 FUN_108397cbc(void)

{
  undefined8 unaff_x19;
  
  FUN_10832e68c(&stack0x00000020);
  func_0x000108390a10(&stack0x00000008);
  return unaff_x19;
}



/* Entry: 108397d0c; end: 108397dbf;  */

undefined8 * FUN_108397d0c(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110a3fdd8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  iVar1 = param_3[2];
  iVar2 = *param_3;
  param_1[4] = (long)param_1 + 0x51;
  uVar6 = *(undefined8 *)(param_3 + 2);
  uVar5 = *(undefined8 *)param_3;
  puVar4 = param_1 + 8;
  *puVar4 = 0;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  *(int *)(param_1 + 7) = iVar1 - iVar2;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  param_1[9] = 0;
  param_1[0x8b] = 0;
  *(int *)(param_1 + 0x8c) = param_3[1] + -1;
  uVar5 = *(undefined8 *)param_3;
  param_1[9] = *(undefined8 *)(param_3 + 2);
  *puVar4 = uVar5;
  puVar3 = puVar4;
  func_0x00010821b838(puVar4,param_4);
  if (((ulong)puVar3 & 1) == 0) {
    *puVar4 = 0;
    param_1[9] = 0;
  }
  _bzero(param_1 + 10,
         (*(int *)((long)param_1 + 0x34) - *(int *)((long)param_1 + 0x2c)) * *(int *)(param_1 + 7) +
         2);
  return param_1;
}



/* Entry: 108397dc0; end: 108397df3;  */

void FUN_108397dc0(long param_1,int param_2,undefined8 param_3,int param_4)

{
  func_0x00010839a960();
  param_4 = (uint)*(byte *)(param_1 + param_2) + param_4;
  *(char *)(param_1 + param_2) = (char)param_4 - (char)((uint)param_4 >> 8);
  return;
}



/* Entry: 108397df4; end: 108397e37;  */

long FUN_108397df4(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == *(int *)(param_1 + 0x460)) {
    lVar1 = *(long *)(param_1 + 0x458);
  }
  else {
    *(int *)(param_1 + 0x460) = param_2;
    lVar1 = (*(long *)(param_1 + 0x20) +
            (ulong)(uint)((param_2 - *(int *)(param_1 + 0x2c)) * *(int *)(param_1 + 0x38))) -
            (long)*(int *)(param_1 + 0x28);
    *(long *)(param_1 + 0x458) = lVar1;
  }
  return lVar1;
}



/* Entry: 108397e38; end: 108397ed7;  */

void FUN_108397e38(long param_1,int param_2,undefined8 param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  ulong uVar2;
  
  func_0x00010839a960();
  pbVar1 = (byte *)(param_1 + param_2);
  for (uVar2 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *pbVar1 = (char)((uint)*pbVar1 + param_5) - (char)((uint)*pbVar1 + param_5 >> 8);
    pbVar1 = pbVar1 + 1;
  }
  return;
}



/* Entry: 108397ed8; end: 108397fc3;  */

void FUN_108397ed8(long param_1,int param_2,undefined8 param_3,int param_4,uint param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010839a960();
  for (param_5 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU); param_5 != 0; param_5 = param_5 - 1
      ) {
    _memset(lVar1 + param_2,0xff,(long)param_4);
    lVar1 = lVar1 + (ulong)*(uint *)(param_1 + 0x38);
  }
  return;
}



/* Entry: 108397fc4; end: 1083980b3;  */

undefined8 *
FUN_108397fc4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a3fe78;
  param_1[3] = param_2;
  uStack_30 = 0;
  uStack_28 = 0;
  if (param_5 == 0) {
    FUN_10838ea90(&uStack_30,param_3,param_4);
    if ((uVar2 & 1) == 0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
  }
  else {
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
  }
  *(int *)(param_1 + 5) = (int)uStack_30;
  *(int *)((long)param_1 + 0x2c) = uStack_30._4_4_;
  *(int *)(param_1 + 4) = uStack_30._4_4_ + -1;
  *(int *)((long)param_1 + 0x24) = (int)uStack_28 - (int)uStack_30;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x50))();
  iVar1 = (int)plVar3;
  *(int *)(param_1 + 6) = iVar1;
  (**(code **)(*param_2 + 0x58))
            (param_2,(long)((iVar1 + iVar1 * (*(int *)((long)param_1 + 0x24) +
                                             (*(int *)((long)param_1 + 0x24) + 2) / 2)) * 2));
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_1083980b4(param_1);
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



/* Entry: 1083980b4; end: 10839810b;  */

void FUN_1083980b4(long param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x40) + 1;
  iVar3 = *(int *)(param_1 + 0x30);
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = iVar1 / iVar3;
  }
  iVar1 = iVar1 - iVar5 * iVar3;
  *(int *)(param_1 + 0x40) = iVar1;
  puVar6 = (undefined2 *)
           (*(long *)(param_1 + 0x38) + (long)((iVar4 + (iVar4 + 2) / 2) * 2 + 2) * (long)iVar1);
  puVar2 = puVar6 + iVar4;
  *(undefined2 **)(param_1 + 0x48) = puVar6;
  *(undefined2 **)(param_1 + 0x50) = puVar2 + 1;
  *puVar6 = (short)iVar4;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  return;
}



/* Entry: 10839810c; end: 1083981db;  */

void FUN_10839810c(void)

{
  int iVar1;
  byte *pbVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long in_x3;
  int in_w4;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x11;
  undefined8 uVar5;
  undefined8 extraout_x11_00;
  long lVar6;
  long extraout_x12;
  long lVar7;
  long extraout_x14;
  long unaff_x19;
  long unaff_x24;
  
  func_0x00010839aacc();
  func_0x00010839a7ec();
  func_0x00010839a82c();
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_x19 + 0x58) = 0;
  }
  if (in_w4 != 0) {
    func_0x00010839a868();
    do {
      func_0x00010839aaa4();
    } while (!(bool)in_ZR && in_NG == in_OV);
  }
  func_0x00010839a994();
  lVar4 = extraout_x9_00;
  uVar5 = extraout_x11;
  for (lVar3 = extraout_x8; lVar3 != lVar4; lVar3 = lVar3 + 1) {
    lVar6 = lVar3 + unaff_x24;
    lVar7 = 1;
    while (lVar7 < *(short *)(*(long *)(unaff_x19 + 0x48) + lVar6 * 2)) {
      func_0x00010839a968();
      lVar3 = extraout_x8_00;
      lVar4 = extraout_x9_01;
      uVar5 = extraout_x11_00;
      lVar6 = extraout_x12;
      lVar7 = extraout_x14;
    }
    *(short *)(*(long *)(unaff_x19 + 0x48) + lVar6 * 2) = (short)uVar5;
  }
  pbVar2 = (byte *)(in_x3 + extraout_x9);
  for (lVar4 = -lVar4; lVar4 != 0; lVar4 = lVar4 + 1) {
    iVar1 = (uint)*(byte *)(*(long *)(unaff_x19 + 0x50) + unaff_x24) + (uint)*pbVar2;
    *(char *)(*(long *)(unaff_x19 + 0x50) + unaff_x24) = (char)iVar1 - (char)((uint)iVar1 >> 8);
    unaff_x24 = unaff_x24 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return;
}



/* Entry: 1083981dc; end: 10839820f;  */

void FUN_1083981dc(long param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_1083997e8();
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}



/* Entry: 108398210; end: 108398363;  */

void FUN_108398210(long param_1,int param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  short *psVar9;
  
  func_0x00010839a8d0();
  lVar6 = (long)param_2 - (long)*(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x58);
  iVar5 = (int)lVar6;
  if (iVar5 < iVar8) {
    iVar8 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x24))) {
    lVar2 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x50);
    lVar6 = lVar6 - iVar8;
    func_0x00010839a8fc();
    pbVar7 = (byte *)(lVar3 + iVar8 + lVar6);
    psVar9 = (short *)(lVar2 + (long)iVar8 * 2 + lVar6 * 2);
    iVar8 = 1;
    do {
      *pbVar7 = (char)((uint)*pbVar7 + param_4) - (char)((uint)*pbVar7 + param_4 >> 8);
      sVar4 = *psVar9;
      pbVar7 = pbVar7 + sVar4;
      psVar9 = psVar9 + sVar4;
      iVar5 = iVar8 - sVar4;
      bVar1 = sVar4 <= iVar8;
      iVar8 = iVar5;
    } while (iVar5 != 0 && bVar1);
    *(int *)(param_1 + 0x58) = (int)pbVar7 - *(int *)(param_1 + 0x50);
  }
  return;
}



/* Entry: 108398364; end: 1083985c3;  */

void FUN_108398364(void)

{
  uint uVar1;
  byte *pbVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long in_x3;
  int in_w4;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x11;
  undefined8 uVar5;
  undefined8 extraout_x11_00;
  long lVar6;
  long extraout_x12;
  long lVar7;
  long extraout_x14;
  long unaff_x19;
  long unaff_x24;
  
  func_0x00010839aacc();
  func_0x00010839a7ec();
  func_0x00010839a82c();
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_x19 + 0x58) = 0;
  }
  if (in_w4 != 0) {
    func_0x00010839a868();
    do {
      func_0x00010839aaa4();
    } while (!(bool)in_ZR && in_NG == in_OV);
  }
  func_0x00010839a994();
  lVar4 = extraout_x9_00;
  uVar5 = extraout_x11;
  for (lVar3 = extraout_x8; lVar3 != lVar4; lVar3 = lVar3 + 1) {
    lVar6 = lVar3 + unaff_x24;
    lVar7 = 1;
    while (lVar7 < *(short *)(*(long *)(unaff_x19 + 0x48) + lVar6 * 2)) {
      func_0x00010839a968();
      lVar3 = extraout_x8_00;
      lVar4 = extraout_x9_01;
      uVar5 = extraout_x11_00;
      lVar6 = extraout_x12;
      lVar7 = extraout_x14;
    }
    *(short *)(*(long *)(unaff_x19 + 0x48) + lVar6 * 2) = (short)uVar5;
  }
  pbVar2 = (byte *)(in_x3 + extraout_x9);
  for (lVar4 = -lVar4; lVar4 != 0; lVar4 = lVar4 + 1) {
    uVar1 = (uint)*(byte *)(*(long *)(unaff_x19 + 0x50) + unaff_x24) + (uint)*pbVar2;
    if (0xfe < uVar1) {
      uVar1 = 0xff;
    }
    *(char *)(*(long *)(unaff_x19 + 0x50) + unaff_x24) = (char)uVar1;
    unaff_x24 = unaff_x24 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return;
}



/* Entry: 1083985c4; end: 10839872b;  */

void FUN_1083985c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,ulong param_9)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  func_0x00010839aacc();
  uVar3 = param_8;
  func_0x000108219544(param_8,param_7);
  bVar1 = *(byte *)(param_5 + 0xe);
  lVar4 = param_7;
  FUN_10839872c();
  if ((((param_9 & 1) != 0) || ((int)lVar4 == 0)) || ((bVar1 >> 1 & 1) != 0)) {
    if (((bVar1 >> 1 & 1) == 0) && (FUN_108376fcc(), (int)param_5 != 0)) {
      func_0x00010839a8bc();
      FUN_108397fc4();
      func_0x00010839a894();
    }
    else {
      func_0x00010839a8bc();
      FUN_10839a78c();
      func_0x00010839a894();
    }
    FUN_10839a758(&uStack_478);
    return;
  }
  uStack_478 = 0;
  uStack_470 = 0;
  lVar4 = param_5;
  FUN_1083773e8(param_5,&uStack_478,0,0);
  if ((int)lVar4 != 0) {
    FUN_10817500c(param_8);
    iVar2 = (int)&uStack_478;
    iVar5 = (int)&uStack_10;
    uStack_10 = param_1;
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_10838ed10();
    if (iVar2 == 0) {
      return;
    }
    iVar2 = (int)&uStack_478;
    func_0x00010812f180();
    if (2 < iVar5 - iVar2) {
      FUN_108334b20(param_6,&uStack_478);
      return;
    }
  }
  func_0x00010839a8bc();
  FUN_108397d0c();
  FUN_108398768(param_5,param_8,&uStack_478,*(undefined4 *)(param_7 + 4),
                *(undefined4 *)(param_7 + 0xc),uVar3,1,0);
  FUN_10839a710(&uStack_478);
  return;
}



/* Entry: 10839872c; end: 108398767;  */

bool FUN_10839872c(int *param_1)

{
  if (0x20 < param_1[2] - *param_1) {
    return false;
  }
  return (long)(param_1[3] - param_1[1]) * (long)(int)((param_1[2] - *param_1) + 3U & 0xfffffffc) <
         0x401;
}



/* Entry: 108398768; end: 108399747;  */

undefined ******
FUN_108398768(undefined *******param_1,undefined8 *param_2,undefined *******param_3,int param_4,
             int param_5,int param_6,int param_7,uint param_8)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *******pppppppuVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  uint uVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  undefined *******pppppppuVar19;
  undefined *******pppppppuVar20;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined4 extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  int extraout_w9_02;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  undefined ******ppppppuVar21;
  long lVar22;
  ulong extraout_x10;
  undefined ******ppppppuVar23;
  undefined ******ppppppuVar24;
  ulong extraout_x11;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined *******pppppppuVar29;
  uint uVar30;
  uint uVar31;
  undefined *******pppppppuVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  undefined *******pppppppuVar36;
  int iVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint uStack_3a4;
  undefined4 uStack_37c;
  undefined ******ppppppuStack_378;
  int iStack_370;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  uint uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined ******ppppppuStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  int iStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *****pppppuStack_2b8;
  undefined8 *puStack_2b0;
  
  func_0x00010839aab8();
  FUN_10839989c(&pppppuStack_2b8);
  pppppuStack_2b8 = (undefined *****)&PTR_FUN_110a3e6c8;
  uVar16 = param_6 == 0;
  puVar3 = (undefined8 *)0x0;
  if ((bool)uVar16) {
    puVar3 = param_2;
  }
  pppppppuVar29 = (undefined *******)&pppppuStack_2b8;
  func_0x00010834dfd4(pppppppuVar29,param_1,puVar3);
  uVar39 = param_2[1];
  uVar38 = *param_2;
  iVar17 = (int)pppppppuVar29;
  uStack_2d0 = uVar38;
  uStack_2c8 = uVar39;
  if (iVar17 != 0) {
    pppppppuVar19 = pppppppuVar29;
    if (1 < iVar17) {
      pppppppuVar19 = (undefined *******)(ulong)((int)LZCOUNT(iVar17 + -2) * -2 + 0x40);
      FUN_108399958(pppppppuVar19,puStack_2b0,pppppppuVar29);
    }
    lVar22 = 0;
    while (lVar22 + 1 < (long)iVar17) {
      puVar3 = puStack_2b0 + lVar22;
      lVar9 = puVar3[1];
      *(long *)*puVar3 = lVar9;
      *(undefined8 *)(lVar9 + 8) = *puVar3;
      lVar22 = lVar22 + 1;
    }
    plStack_338 = (long *)puStack_2b0[(long)iVar17 + -1];
    ppppppuStack_308 = (undefined ******)*puStack_2b0;
    uStack_300 = 0;
    uStack_2e8 = 0x8000000180000001;
    uStack_2f8 = 0x80000001;
    uStack_2e0 = 0x7fffffff;
    iStack_2f0 = -0x7fffffff;
    ppppppuStack_308[1] = (undefined *****)&ppppppuStack_308;
    uStack_340 = 0;
    uStack_320 = 0x7fffffff7fffffff;
    uStack_330 = 0x7fffffff;
    uStack_318 = 0x7fffffff;
    uStack_328 = 0x7fffffff;
    *plStack_338 = (long)&uStack_340;
    iVar26 = param_4;
    if (param_4 <= *(int *)((long)param_2 + 4)) {
      iVar26 = *(int *)((long)param_2 + 4);
    }
    iVar37 = param_5;
    if (*(int *)((long)param_2 + 0xc) <= param_5) {
      iVar37 = *(int *)((long)param_2 + 0xc);
    }
    if (param_6 == 0) {
      param_5 = iVar37;
      param_4 = iVar26;
    }
    iStack_370 = (int)uStack_2d0 << 0x10;
    uVar13 = (int)uStack_2c8 << 0x10;
    uStack_3a4 = uVar13;
    if (param_7 != 0) {
      uStack_350 = 0;
      uStack_348 = 0;
      pppppppuVar19 = param_1;
      func_0x0001083773e0();
      func_0x00010812f1a8();
      if (iStack_370 <= (int)uStack_350 * 0x10000) {
        iStack_370 = (int)uStack_350 << 0x10;
      }
      uStack_3a4 = (int)uStack_348 * 0x10000;
      if ((int)uVar13 <= (int)uStack_348 * 0x10000) {
        uStack_3a4 = uVar13;
      }
    }
    bVar12 = *(byte *)((long)param_1 + 0xe);
    uVar13 = param_5 << 0x10;
    if ((bVar12 >> 1 & 1) == 0) {
      pppppppuVar19 = param_1;
      FUN_108376fcc();
      uVar18 = 0;
      if (1 < iVar17) {
        uVar18 = (uint)pppppppuVar19;
      }
      if ((uVar18 & 1) != 0) {
        pppppppuVar29 = (undefined *******)*ppppppuStack_308;
        uVar18 = *(uint *)(ppppppuStack_308 + 4);
        if ((int)*(uint *)(ppppppuStack_308 + 4) <= (int)*(uint *)(pppppppuVar29 + 4)) {
          uVar18 = *(uint *)(pppppppuVar29 + 4);
        }
        pppppppuVar36 = (undefined *******)*pppppppuVar29;
        pppppppuVar19 = (undefined *******)ppppppuStack_308;
        while( true ) {
          while (*(int *)((long)pppppppuVar19 + 0x24) <= (int)uVar18) {
            pppppppuVar20 = pppppppuVar19;
            func_0x00010839a9ec();
            if (((ulong)pppppppuVar20 & 1) == 0) {
              uVar16 = *(short *)((long)pppppppuVar36 + 0x22) == param_5;
              if (param_5 <= *(short *)((long)pppppppuVar36 + 0x22)) goto LAB_108399078;
              pppppppuVar19 = pppppppuVar36;
              pppppppuVar36 = (undefined *******)*pppppppuVar36;
            }
          }
          while (*(int *)((long)pppppppuVar29 + 0x24) <= (int)uVar18) {
            pppppppuVar20 = pppppppuVar29;
            func_0x00010839a9ec();
            if (((ulong)pppppppuVar20 & 1) == 0) {
              uVar16 = *(short *)((long)pppppppuVar36 + 0x22) == param_5;
              if (param_5 <= *(short *)((long)pppppppuVar36 + 0x22)) goto LAB_108399078;
              pppppppuVar29 = pppppppuVar36;
              pppppppuVar36 = (undefined *******)*pppppppuVar36;
            }
          }
          iVar17 = (int)uVar18 >> 0x10;
          uVar16 = iVar17 == param_5;
          if (param_5 <= iVar17) break;
          FUN_108399b64(pppppppuVar19,uVar18);
          pppppppuVar20 = pppppppuVar29;
          FUN_108399b64(pppppppuVar29,uVar18);
          pppppppuVar32 = pppppppuVar19;
          if ((*(int *)(pppppppuVar19 + 2) <= *(int *)(pppppppuVar29 + 2)) &&
             ((*(int *)(pppppppuVar19 + 2) != *(int *)(pppppppuVar29 + 2) ||
              (*(int *)((long)pppppppuVar19 + 0x14) <= *(int *)((long)pppppppuVar29 + 0x14))))) {
            pppppppuVar32 = pppppppuVar29;
            pppppppuVar29 = pppppppuVar19;
          }
          pppppppuVar19 = pppppppuVar29;
          uVar31 = *(uint *)((long)pppppppuVar32 + 0x24);
          uVar30 = *(uint *)((long)pppppppuVar19 + 0x24);
          uVar25 = uVar31;
          if ((int)uVar30 <= (int)uVar31) {
            uVar25 = uVar30;
          }
          if (*(int *)(pppppppuVar36 + 4) < (int)uVar13) {
            pppppppuVar29 = pppppppuVar19;
            if (((int)(uVar30 + 0x10000) < (int)uVar31) ||
               (pppppppuVar29 = pppppppuVar32, (int)(uVar31 + 0x10000) < (int)uVar30)) {
              pppppppuVar20 = pppppppuVar29;
              FUN_108399e54(pppppppuVar20,pppppppuVar36);
              if (((ulong)pppppppuVar20 & 1) != 0) {
LAB_108398aa0:
                uVar25 = uVar25 + 0xffff & 0xffff0000;
              }
            }
            else {
              pppppppuVar29 = (undefined *******)*pppppppuVar36;
              if (*(int *)(pppppppuVar29 + 4) < (int)uVar13) {
                iVar26 = *(int *)(pppppppuVar29 + 3);
                iVar37 = *(int *)(pppppppuVar36 + 3);
                pppppppuVar4 = pppppppuVar29;
                if (iVar37 <= iVar26) {
                  pppppppuVar4 = pppppppuVar36;
                }
                pppppppuVar20 = pppppppuVar19;
                FUN_108399e54(pppppppuVar19,pppppppuVar4);
                if ((int)pppppppuVar20 != 0) {
                  pppppppuVar4 = pppppppuVar36;
                  if (iVar37 <= iVar26) {
                    pppppppuVar4 = pppppppuVar29;
                  }
                  pppppppuVar20 = pppppppuVar32;
                  FUN_108399e54(pppppppuVar32,pppppppuVar4);
                  if ((int)pppppppuVar20 != 0) goto LAB_108398aa0;
                }
              }
            }
          }
          uVar31 = uVar13;
          if ((int)uVar25 <= (int)uVar13) {
            uVar31 = uVar25;
          }
          iVar37 = *(int *)((long)pppppppuVar19 + 0x14);
          iVar26 = iStack_370;
          if (iStack_370 <= *(int *)(pppppppuVar19 + 2)) {
            iVar26 = *(int *)(pppppppuVar19 + 2);
          }
          iVar8 = *(int *)((long)pppppppuVar32 + 0x14);
          uVar25 = *(uint *)(pppppppuVar32 + 2);
          if ((int)uStack_3a4 <= (int)*(uint *)(pppppppuVar32 + 2)) {
            uVar25 = uStack_3a4;
          }
          if (iVar8 == 0 && iVar37 == 0) {
            iVar17 = (int)(iVar26 + 0xffffU) >> 0x10;
            iVar37 = (int)uVar25 >> 0x10;
            iVar8 = (int)(uVar18 + 0xffff) >> 0x10;
            iVar35 = (int)uVar31 >> 0x10;
            uVar30 = uVar31 | 0xffff0000;
            uVar2 = 0;
            if (iVar8 <= iVar35) {
              uVar30 = 0;
              uVar2 = uVar31 & 0xffff;
            }
            uVar30 = uVar30 + ((uVar18 + 0xffff & 0xffff0000) - uVar18);
            if (iVar37 < iVar17) {
              uVar18 = uVar25 - iVar26;
              if (0 < (int)uVar18) {
                if (0 < (int)uVar30) {
                  func_0x00010839a954();
                  func_0x00010839a7c0((ulong)uVar18 * (ulong)uVar30);
                  (**(code **)(extraout_x9 + 0x78))();
                  func_0x00010839a8e4();
                  func_0x00010839a9f8(*(undefined8 *)(extraout_x8 + 0x88));
                }
                if (iVar8 < iVar35) {
                  func_0x00010839a8e4();
                  func_0x00010839a88c(*(undefined8 *)(extraout_x8_00 + 0x60));
                  func_0x00010839a954();
                  (*(code *)(*pppppppuVar20)[4])();
                }
                if (uVar2 != 0) {
                  func_0x00010839a954();
                  func_0x00010839a7c0((ulong)uVar18 * (extraout_x9_00 & 0xffffffff));
                  (**(code **)(extraout_x9_01 + 0x78))();
                }
              }
            }
            else {
              uVar27 = (iVar26 + 0xffffU & 0xffff0000) - iVar26;
              uVar18 = uVar25 & 0xffff;
              if (0 < (int)uVar30) {
                if (0 < (int)uVar27) {
                  func_0x00010839a954();
                  func_0x00010839a7c0((extraout_x9_02 & 0xffffffff) * (ulong)uVar30);
                  (**(code **)(extraout_x9_03 + 0x70))();
                }
                pppppppuVar20 = param_3;
                (*(code *)(*param_3)[0xf])
                          (param_3,iVar17,iVar8 + -1,iVar37 - iVar17,
                           uVar30 * 0xff + 0x8000 >> 0x10 & 0xff);
                if (uVar18 != 0) {
                  func_0x00010839a7c0((ulong)uVar18 * (ulong)uVar30);
                  (**(code **)(extraout_x9_04 + 0x70))();
                }
                func_0x00010839a8e4();
                func_0x00010839a9f8(*(undefined8 *)(extraout_x8_03 + 0x88));
              }
              if ((iVar8 < iVar35) &&
                 (((iVar17 < iVar37 || ((uVar27 * 0xff + 0x8000 & 0xff0000) != 0)) ||
                  (0x80 < uVar18)))) {
                func_0x00010839a8e4();
                func_0x00010839a88c(*(undefined8 *)(extraout_x8_04 + 0x60));
                func_0x00010839a954();
                (*(code *)(*pppppppuVar20)[6])();
              }
              if (uVar2 != 0) {
                if (0 < (int)uVar27) {
                  func_0x00010839a954();
                  func_0x00010839a7c0((ulong)uVar27 * (ulong)uVar2);
                  (**(code **)(extraout_x9_05 + 0x70))();
                }
                func_0x00010839a8e4();
                (**(code **)(extraout_x8_05 + 0x78))();
                if (uVar18 != 0) {
                  func_0x00010839a8e4();
                  (**(code **)(extraout_x8_06 + 0x70))();
                }
              }
            }
          }
          else {
            if (param_7 != 0) {
              func_0x00010839a8d8();
            }
            uVar30 = iVar26 + 0x800;
            uVar33 = (ulong)uVar30;
            uVar25 = uVar25 + 0x800;
            uVar34 = (ulong)uVar25;
            iVar17 = ((int)(uVar31 + 0xffff) >> 0x10) - iVar17;
            if (1 < iVar17) {
              uVar25 = uVar18;
              if ((uVar18 & 0xffff) != 0) {
                uVar25 = (uVar18 & 0xffff0000) + 0x10000;
                func_0x00010839a924(uVar25 - uVar18);
                func_0x00010839a9c0();
                func_0x00010839a984();
                func_0x00010839a8e4();
                (**(code **)(extraout_x8_01 + 0x88))();
                iVar17 = iVar17 + -1;
                uVar33 = extraout_x10;
                uVar34 = extraout_x11;
              }
              iVar17 = iVar17 + 1;
              uVar18 = uVar25;
              while( true ) {
                uVar25 = (uint)uVar34;
                uVar30 = (uint)uVar33;
                iVar17 = iVar17 + -1;
                if (iVar17 < 2) break;
                if (param_7 != 0) {
                  func_0x00010839a8d8();
                }
                func_0x00010839a9c0(iVar8 + uVar25);
                FUN_108399bb4(param_3,(int)uVar18 >> 0x10);
                uVar18 = uVar18 + 0x10000;
                uVar33 = (ulong)(uVar30 + iVar37);
                uVar34 = (ulong)(uVar25 + iVar8);
                func_0x00010839a9f8((*param_3)[0x11],param_3);
              }
            }
            if (param_7 != 0) {
              func_0x00010839a8d8();
            }
            iVar26 = uVar30 + (int)((ulong)((long)iVar37 * (long)(int)(uVar31 - uVar18)) >> 0x10);
            if (iVar26 <= iStack_370 + 0x800) {
              iVar26 = iStack_370 + 0x800;
            }
            iVar17 = uVar25 + (int)((ulong)((long)iVar8 * (long)(int)(uVar31 - uVar18)) >> 0x10);
            iVar37 = uStack_3a4 + 0x800;
            if (iVar17 <= (int)(uStack_3a4 + 0x800)) {
              iVar37 = iVar17;
            }
            func_0x00010839a924();
            func_0x00010839a9c0();
            func_0x00010839a984();
            func_0x00010839a8e4();
            (**(code **)(extraout_x8_02 + 0x88))();
            iVar26 = iVar26 + -0x800;
            uVar25 = iVar37 - 0x800;
          }
          *(int *)(pppppppuVar19 + 2) = iVar26;
          *(uint *)(pppppppuVar32 + 2) = uVar25;
          *(uint *)((long)pppppppuVar32 + 0x1c) = uVar31;
          *(uint *)((long)pppppppuVar19 + 0x1c) = uVar31;
          uVar18 = uVar31;
          pppppppuVar29 = pppppppuVar32;
        }
        goto LAB_108399078;
      }
      bVar12 = *(byte *)((long)param_1 + 0xe);
    }
    iVar17 = *(int *)(*param_1 + 6);
    iStack_2f0 = iStack_370;
    uStack_2f8 = CONCAT44(uStack_2f8._4_4_,iStack_370);
    uStack_328 = uStack_3a4;
    uStack_330 = CONCAT44(uStack_330._4_4_,uStack_3a4);
    uVar25 = *(uint *)(ppppppuStack_308 + 4);
    uVar18 = uVar25;
    if ((int)uVar25 <= param_4 * 0x10000) {
      uVar18 = param_4 * 0x10000;
    }
    pppppppuVar29 = (undefined *******)ppppppuStack_308;
    uVar30 = 0x7fffffff;
    uVar31 = uVar25;
    while ((int)uVar31 <= (int)uVar18) {
      pppppppuVar19 = pppppppuVar29;
      FUN_108399b64(pppppppuVar29,uVar18);
      uVar31 = *(uint *)((long)pppppppuVar29 + 0x24);
      uVar2 = uVar31;
      if ((int)uVar30 <= (int)uVar31) {
        uVar2 = uVar30;
      }
      if ((int)uVar31 <= (int)uVar18) {
        uVar2 = uVar30;
      }
      pppppppuVar29 = (undefined *******)*pppppppuVar29;
      uVar30 = uVar2;
      uVar31 = *(uint *)(pppppppuVar29 + 4);
    }
    if ((int)uVar30 <= (int)uVar31) {
      uVar31 = uVar30;
    }
    uVar30 = 1;
    if ((bVar12 & 1) == 0) {
      uVar30 = 0xffffffff;
    }
    if (((bVar12 >> 1 & 1) != 0) && (param_4 * 0x10000 < (int)uVar25)) {
      iVar26 = param_4;
      if ((int)uVar18 >> 0x10 != param_4) {
        func_0x00010839a8e4();
        func_0x00010839a88c(*(undefined8 *)(extraout_x8_07 + 0x60));
        (*(code *)(*pppppppuVar19)[5])();
        iVar26 = (int)uVar18 >> 0x10;
      }
      if (param_7 == 0) {
        pppppppuVar29 = (undefined *******)0x0;
      }
      else {
        pppppppuVar29 = param_3;
        FUN_108397df4(param_3,iVar26);
      }
      FUN_10839a604(param_3,iVar26,iStack_370 >> 0x10,(int)(uStack_3a4 - iStack_370) >> 0x10,
                    (uVar18 + iVar26 * -0x10000) * 0xff + 0x8000 >> 0x10 & 0xff,pppppppuVar29,0);
    }
    do {
      pppppppuVar29 = (undefined *******)ppppppuStack_308;
      iVar26 = (int)uStack_2f8;
      uVar25 = (uVar18 & 0xffff0000) + 0x10000;
      if ((int)uVar31 <= (int)uVar25) {
        uVar25 = uVar31;
      }
      uStack_350 = CONCAT44(uStack_350._4_4_,0x7fffffff);
      uVar31 = uVar25 - uVar18 >> 0xf & 1;
      if ((uVar25 - uVar18 & 0x4000) != 0) {
        uVar31 = 2;
        uVar25 = uVar18 + 0x4000;
      }
      if (param_7 != 0) {
        FUN_108397df4();
      }
      uStack_37c = 0;
      uVar27 = 0;
      uVar2 = (uVar25 - uVar18) * 0xff + 0x8000;
      uVar5 = param_8;
      if (((uVar2 >> 0x10 ^ 0xffffffff) & 0xff) != 0) {
        uVar5 = 1;
      }
      ppppppuStack_378 = (undefined ******)&ppppppuStack_308;
      iVar37 = iStack_370 >> 0x10;
      uVar28 = bVar12 >> 1 & 1;
      iVar8 = iStack_370;
      while (*(int *)(pppppppuVar29 + 4) <= (int)uVar18) {
        uVar27 = uVar27 + (int)*(char *)(pppppppuVar29 + 6);
        uVar6 = (uint)((uVar27 & uVar30) != 0) ^ (bVar12 & 2) >> 1;
        if ((uVar28 & (uVar6 ^ 1)) == 1) {
          *(uint *)((long)pppppppuVar29 + 0x1c) = uVar25;
          uVar7 = *(uint *)(pppppppuVar29 + 2);
          uVar28 = (*(int *)((long)pppppppuVar29 + 0x14) >> uVar31) + uVar7;
          *(uint *)(pppppppuVar29 + 2) = uVar28;
          iVar10 = *(int *)(ppppppuStack_378 + 2);
          iVar35 = iStack_370;
          if (iStack_370 <= iVar10) {
            iVar35 = iVar10;
          }
          if ((int)uStack_3a4 <= (int)uVar7) {
            uVar7 = uStack_3a4;
          }
          if ((int)uStack_3a4 <= (int)uVar28) {
            uVar28 = uStack_3a4;
          }
          uVar11 = *(undefined4 *)(pppppppuVar29 + 5);
          if (((uVar5 & 1) == 0) && (iVar37 <= iVar8 >> 0x10 && iVar37 <= iVar10 >> 0x10)) {
            FUN_10839a69c(pppppppuVar29,*pppppppuVar29,uVar25);
          }
          func_0x00010839aa90();
          FUN_108399bb4(param_3,(int)uVar18 >> 0x10,iVar8,uVar7,iVar35,uVar28,uStack_37c,uVar11);
          if ((int)uVar7 <= (int)*(uint *)(pppppppuVar29 + 2)) {
            uVar7 = *(uint *)(pppppppuVar29 + 2);
          }
          iVar37 = (int)(uVar7 + 0xffff) >> 0x10;
        }
        else {
          if ((uVar6 & (uVar28 ^ 1)) == 0) {
            iVar35 = *(int *)(pppppppuVar29 + 2);
          }
          else {
            iVar35 = *(int *)(pppppppuVar29 + 2);
            iVar8 = iVar35;
            if (iVar35 <= iStack_370) {
              iVar8 = iStack_370;
            }
            uStack_37c = *(undefined4 *)(pppppppuVar29 + 5);
            ppppppuStack_378 = (undefined ******)pppppppuVar29;
          }
          *(uint *)((long)pppppppuVar29 + 0x1c) = uVar25;
          *(int *)(pppppppuVar29 + 2) = (*(int *)((long)pppppppuVar29 + 0x14) >> uVar31) + iVar35;
        }
        pppppppuVar19 = (undefined *******)*pppppppuVar29;
        do {
          if ((int)uVar25 < *(int *)((long)pppppppuVar29 + 0x24)) break;
          pppppppuVar36 = pppppppuVar29;
          if (*(char *)((long)pppppppuVar29 + 0x2d) < '\0') {
            *(undefined4 *)(pppppppuVar29 + 0xc) = *(undefined4 *)(pppppppuVar29 + 2);
            *(undefined4 *)(pppppppuVar29 + 0x11) = *(undefined4 *)((long)pppppppuVar29 + 0x1c);
            FUN_10832fa9c(pppppppuVar29,1);
          }
          else {
            if (*(char *)((long)pppppppuVar29 + 0x2d) == '\0') break;
            *(undefined4 *)(pppppppuVar29 + 0x10) = *(undefined4 *)(pppppppuVar29 + 2);
            *(undefined4 *)((long)pppppppuVar29 + 0x84) =
                 *(undefined4 *)((long)pppppppuVar29 + 0x1c);
            FUN_10832fbc4();
          }
        } while (((ulong)pppppppuVar36 & 1) != 0);
        iVar35 = *(int *)((long)pppppppuVar29 + 0x24);
        cVar14 = SBORROW4(iVar35,uVar25);
        cVar15 = (int)(iVar35 - uVar25) < 0;
        uVar28 = uVar6;
        if ((int)uVar25 < iVar35) {
          func_0x00010839aa5c();
          uVar11 = extraout_w8;
          if (cVar15 == cVar14) {
            uVar11 = extraout_w9;
          }
          uStack_350 = CONCAT44(uStack_350._4_4_,uVar11);
          iVar35 = *(int *)(pppppppuVar29 + 2);
          if (iVar35 < iVar26) {
            ppppppuVar21 = pppppppuVar29[1];
            ppppppuVar24 = ppppppuVar21;
            do {
              ppppppuVar23 = ppppppuVar24;
              if ((undefined ******)ppppppuVar23[1] == (undefined ******)0x0) break;
              ppppppuVar24 = (undefined ******)ppppppuVar23[1];
            } while (iVar35 < *(int *)(ppppppuVar23 + 2));
            iVar35 = iVar26;
            if ((undefined *******)*ppppppuVar23 != pppppppuVar29) {
              ppppppuVar24 = *pppppppuVar29;
              *ppppppuVar21 = (undefined *****)ppppppuVar24;
              ppppppuVar24[1] = (undefined *****)ppppppuVar21;
              pppppppuVar29[1] = ppppppuVar23;
              ppppppuVar24 = (undefined ******)*ppppppuVar23;
              *pppppppuVar29 = ppppppuVar24;
              ppppppuVar24[1] = (undefined *****)pppppppuVar29;
              *ppppppuVar23 = (undefined *****)pppppppuVar29;
            }
          }
          pppppppuVar29 = pppppppuVar19;
          iVar26 = iVar35;
          if (iVar17 <= (param_5 - param_4) * 2) {
            func_0x00010839a944();
          }
        }
        else {
          ppppppuVar24 = *pppppppuVar29;
          ppppppuVar21 = pppppppuVar29[1];
          *ppppppuVar21 = (undefined *****)ppppppuVar24;
          ppppppuVar24[1] = (undefined *****)ppppppuVar21;
          pppppppuVar29 = pppppppuVar19;
        }
      }
      if (uVar28 != 0) {
        iVar26 = iStack_370;
        if (iStack_370 <= *(int *)(ppppppuStack_378 + 2)) {
          iVar26 = *(int *)(ppppppuStack_378 + 2);
        }
        if (((param_8 & 1) == 0) && (((uVar2 >> 0x10 ^ 0xffffffff) & 0xff) == 0)) {
          FUN_10839a69c(ppppppuStack_378[1],ppppppuStack_378,uVar25);
        }
        func_0x00010839aa90();
        FUN_108399bb4(param_3,(int)uVar18 >> 0x10,iVar8,uStack_3a4,iVar26,uStack_3a4,uStack_37c,0);
      }
      if (param_8 != 0) {
        (*(code *)(*param_3)[0x11])(param_3,uVar18,uVar25);
      }
      uVar16 = uVar25 == uVar13;
      if ((int)uVar13 <= (int)uVar25) goto LAB_108399078;
      iVar26 = *(int *)(pppppppuVar29 + 4);
      cVar14 = SBORROW4(iVar26,uVar25);
      cVar15 = (int)(iVar26 - uVar25) < 0;
      if ((int)uVar25 < iVar26) {
LAB_1083995d0:
        func_0x00010839aa5c();
        uVar31 = extraout_w8_00;
        if (cVar15 == cVar14) {
          uVar31 = extraout_w9_00;
        }
      }
      else {
        pppppppuVar19 = (undefined *******)pppppppuVar29[1];
        if (*(int *)(pppppppuVar29[1] + 2) <= *(int *)(pppppppuVar29 + 2)) {
          while( true ) {
            cVar14 = SBORROW4(iVar26,uVar25);
            cVar15 = (int)(iVar26 - uVar25) < 0;
            if ((int)uVar25 < iVar26) break;
            func_0x00010839a944();
            func_0x00010839aa5c(*(undefined4 *)((long)pppppppuVar29 + 0x24));
            iVar26 = extraout_w8_02;
            if (cVar15 == cVar14) {
              iVar26 = extraout_w9_02;
            }
            if (extraout_w8_02 <= (int)uVar25) {
              iVar26 = extraout_w9_02;
            }
            uStack_350 = CONCAT44(uStack_350._4_4_,iVar26);
            pppppppuVar29 = (undefined *******)*pppppppuVar29;
            iVar26 = *(int *)(pppppppuVar29 + 4);
          }
          goto LAB_1083995d0;
        }
        do {
          pppppppuVar36 = pppppppuVar19;
          if ((undefined *******)pppppppuVar36[1] == (undefined *******)0x0) break;
          pppppppuVar19 = (undefined *******)pppppppuVar36[1];
        } while (*(int *)(pppppppuVar29 + 2) < *(int *)(pppppppuVar36 + 2));
        do {
          pppppppuVar19 = (undefined *******)*pppppppuVar29;
          do {
            pppppppuVar32 = pppppppuVar36;
            pppppppuVar36 = (undefined *******)*pppppppuVar32;
            cVar14 = SBORROW8((long)pppppppuVar36,(long)pppppppuVar29);
            cVar15 = (long)pppppppuVar36 - (long)pppppppuVar29 < 0;
            pppppppuVar20 = pppppppuVar19;
            if (pppppppuVar36 == pppppppuVar29) goto LAB_108399660;
            iVar26 = *(int *)(pppppppuVar36 + 2);
            iVar37 = *(int *)(pppppppuVar29 + 2);
            cVar14 = SBORROW4(iVar26,iVar37);
            cVar15 = iVar26 - iVar37 < 0;
          } while (iVar26 < iVar37);
          ppppppuVar24 = pppppppuVar29[1];
          *ppppppuVar24 = (undefined *****)pppppppuVar19;
          pppppppuVar19[1] = ppppppuVar24;
          pppppppuVar29[1] = (undefined ******)pppppppuVar32;
          ppppppuVar24 = *pppppppuVar32;
          *pppppppuVar29 = ppppppuVar24;
          ppppppuVar24[1] = (undefined *****)pppppppuVar29;
          *pppppppuVar32 = (undefined ******)pppppppuVar29;
          pppppppuVar20 = (undefined *******)*pppppppuVar29;
LAB_108399660:
          func_0x00010839a6e0(pppppppuVar29,uVar25,&uStack_350);
          if (*pppppppuVar20 != (undefined ******)0x0) {
            iVar26 = *(int *)((long)pppppppuVar29 + 0x14) + *(int *)(pppppppuVar29 + 2);
            iVar37 = *(int *)((long)pppppppuVar20 + 0x14) + *(int *)(pppppppuVar20 + 2);
            cVar14 = SBORROW4(iVar26,iVar37);
            cVar15 = iVar26 - iVar37 < 0;
            if (iVar37 < iVar26) {
              uStack_350 = CONCAT44(uStack_350._4_4_,uVar25 + 0x4000);
            }
          }
          func_0x00010839aa5c(*(undefined4 *)((long)pppppppuVar29 + 0x24));
          uVar18 = extraout_w8_01;
          if (cVar15 == cVar14) {
            uVar18 = extraout_w9_01;
          }
          if ((int)extraout_w8_01 <= (int)uVar25) {
            uVar18 = extraout_w9_01;
          }
          uStack_350 = CONCAT44(uStack_350._4_4_,uVar18);
          uVar31 = *(uint *)(pppppppuVar19 + 4);
          pppppppuVar36 = pppppppuVar29;
          pppppppuVar29 = pppppppuVar19;
        } while ((int)uVar31 <= (int)uVar25);
        if ((int)uVar18 <= (int)uVar31) {
          uVar31 = uVar18;
        }
      }
      uStack_350 = uStack_350 & 0xffffffff00000000;
      uVar18 = uVar25;
    } while( true );
  }
  if ((*(byte *)((long)param_1 + 0xe) >> 1 & 1) != 0) {
    uStack_2d0._4_4_ = (int)((ulong)uVar38 >> 0x20);
    bVar1 = uStack_2d0._4_4_ < param_4;
    if (bVar1) {
      uStack_2d0._0_4_ = (int)uVar38;
      uStack_2d0 = CONCAT44(param_4,(int)uStack_2d0);
    }
    uStack_2c8._4_4_ = (int)((ulong)uVar39 >> 0x20);
    uVar16 = uStack_2c8._4_4_ == param_5;
    bVar1 = param_5 < uStack_2c8._4_4_;
    if (bVar1) {
      uStack_2c8._0_4_ = (int)uVar39;
      uStack_2c8 = CONCAT44(param_5,(int)uStack_2c8);
    }
    uVar33 = 0;
    FUN_10821a6d8();
    if ((uVar33 & 1) == 0) {
      func_0x00010839a88c((*param_3)[0xc]);
      (*(code *)(*param_3)[5])();
    }
  }
LAB_108399078:
  ppppppuVar24 = &pppppuStack_2b8;
  FUN_10834e14c();
  func_0x00010839a814();
  if (!(bool)uVar16) {
    ___stack_chk_fail();
    ppppppuVar24 = &pppppuStack_2b8;
    FUN_10834e14c();
    func_0x00010839aa28();
    *ppppppuVar24 = (undefined *****)&PTR_FUN_110a3fdd8;
    (*(code *)(*ppppppuVar24[3])[7])(ppppppuVar24[3],ppppppuVar24 + 4,ppppppuVar24 + 8);
    *ppppppuVar24 = (undefined *****)&PTR_DAT_110a3d198;
    func_0x000108262b94(ppppppuVar24 + 1);
    return ppppppuVar24;
  }
  return ppppppuVar24;
}



/* Entry: 108399748; end: 108399753;  */

undefined8 * FUN_108399748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3fdd8;
  (**(code **)(*(long *)param_1[3] + 0x38))((long *)param_1[3],param_1 + 4,param_1 + 8);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 108399754; end: 108399767;  */

void FUN_108399754(void)

{
  FUN_10839a710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108399768; end: 10839978f;  */

void FUN_108399768(void)

{
  return;
}



/* Entry: 108399790; end: 1083997a3;  */

void FUN_108399790(void)

{
  FUN_10839a758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083997a4; end: 1083997d3;  */

void FUN_1083997a4(void)

{
  return;
}



/* Entry: 1083997d4; end: 1083997e7;  */

void FUN_1083997d4(void)

{
  FUN_10839a758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083997e8; end: 10839989b;  */

void FUN_1083997e8(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  short *psVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x20)) {
    psVar5 = *(short **)(param_1 + 0x48);
    for (iVar6 = 0; pcVar4 = *(char **)(param_1 + 0x50), psVar5[iVar6] != 0;
        iVar6 = iVar6 + psVar5[iVar6]) {
      bVar3 = pcVar4[iVar6];
      bVar1 = 0;
      if (7 < bVar3) {
        bVar1 = bVar3;
      }
      bVar2 = 0xff;
      if (bVar3 < 0xf8) {
        bVar2 = bVar1;
      }
      pcVar4[iVar6] = bVar2;
      psVar5 = *(short **)(param_1 + 0x48);
    }
    if ((*pcVar4 != '\0') || (psVar5[*psVar5] != 0)) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                (*(long **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x20));
      FUN_1083980b4(param_1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x2c) + -1;
  }
  return;
}



/* Entry: 10839989c; end: 1083998f3;  */

undefined8 * FUN_10839989c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e730;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 8;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1083998f4(param_1 + 5,0x200);
  return param_1;
}



/* Entry: 1083998f4; end: 108399923;  */

long FUN_1083998f4(long param_1,undefined8 param_2)

{
  FUN_10840f6d0(param_1 + 0x200,param_1,0x200,param_2);
  return param_1;
}



/* Entry: 108399924; end: 108399957;  */

bool FUN_108399924(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_2 + 0x20);
  bVar3 = SBORROW4(iVar1,iVar2);
  bVar4 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_2 + 0x10);
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 == iVar2) {
      bVar3 = SBORROW4(*(int *)(param_1 + 0x14),*(int *)(param_2 + 0x14));
      bVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14) < 0;
    }
  }
  return bVar4 != bVar3;
}



/* Entry: 108399958; end: 108399b63;  */

void FUN_108399958(ulong param_1,ulong *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  
  func_0x00010839aacc();
  do {
    iVar4 = (int)param_3;
    if (iVar4 < 0x21) {
      puVar12 = param_2;
      do {
        do {
          puVar10 = puVar12;
          puVar12 = puVar10 + 1;
          if (param_2 + (long)iVar4 + -1 < puVar12) {
            return;
          }
          uVar7 = puVar10[1];
          uVar5 = uVar7;
          FUN_108399924(uVar7,*puVar10);
        } while ((int)uVar5 == 0);
        do {
          puVar9 = puVar10;
          puVar9[1] = *puVar9;
          if (puVar9 <= param_2) break;
          uVar5 = uVar7;
          FUN_108399924(uVar7,puVar9[-1]);
          puVar10 = puVar9 + -1;
        } while ((uVar5 & 1) != 0);
        *puVar9 = uVar7;
      } while( true );
    }
    if ((int)param_1 == 0) {
      param_3 = param_3 & 0xffffffff;
      for (uVar7 = param_3 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar8 = param_2[uVar7 - 1];
        uVar5 = uVar7;
        while( true ) {
          uVar13 = uVar5 * 2;
          if (param_3 <= uVar13 && uVar13 - param_3 != 0) break;
          if (param_3 > uVar13) {
            uVar3 = (param_2 + uVar5 * 2)[-1];
            FUN_108399924(uVar3,param_2[uVar5 * 2]);
            uVar13 = uVar13 | uVar3 & 0xffffffff;
          }
          uVar6 = param_2[uVar13 - 1];
          uVar3 = uVar8;
          FUN_108399924(uVar8,uVar6);
          if ((int)uVar3 == 0) break;
          param_2[uVar5 - 1] = uVar6;
          uVar5 = uVar13;
        }
        param_2[uVar5 - 1] = uVar8;
      }
      do {
        param_3 = param_3 - 1;
        if (param_3 == 0) {
          return;
        }
        uVar7 = *param_2;
        *param_2 = param_2[param_3];
        param_2[param_3] = uVar7;
        uVar5 = *param_2;
        uVar7 = 1;
        while( true ) {
          uVar8 = uVar7 * 2;
          if (param_3 <= uVar8 && uVar8 - param_3 != 0) break;
          if (param_3 > uVar8) {
            uVar13 = (param_2 + uVar7 * 2)[-1];
            FUN_108399924(uVar13,param_2[uVar7 * 2]);
            uVar8 = uVar8 | uVar13 & 0xffffffff;
          }
          param_2[uVar7 - 1] = param_2[uVar8 - 1];
          uVar7 = uVar8;
        }
        while (1 < uVar7) {
          uVar13 = param_2[(uVar7 >> 1) - 1];
          uVar8 = uVar13;
          FUN_108399924(uVar13,uVar5);
          if ((int)uVar8 == 0) break;
          param_2[uVar7 - 1] = uVar13;
          uVar7 = uVar7 >> 1;
        }
        param_2[uVar7 - 1] = uVar5;
      } while( true );
    }
    uVar2 = iVar4 - 1U >> 1;
    puVar9 = param_2 + ((param_3 & 0xffffffff) - 1);
    uVar7 = param_2[uVar2];
    param_2[uVar2] = *puVar9;
    *puVar9 = uVar7;
    puVar10 = param_2;
    for (puVar12 = param_2; puVar12 < puVar9; puVar12 = puVar12 + 1) {
      uVar8 = *puVar12;
      uVar5 = uVar8;
      FUN_108399924(uVar8,uVar7);
      puVar11 = puVar10;
      if ((int)uVar5 != 0) {
        *puVar12 = *puVar10;
        puVar11 = puVar10 + 1;
        *puVar10 = uVar8;
      }
      puVar10 = puVar11;
    }
    param_1 = (ulong)((int)param_1 - 1);
    uVar7 = *puVar10;
    *puVar10 = *puVar9;
    *puVar9 = uVar7;
    uVar7 = (ulong)((long)puVar10 - (long)param_2) >> 3;
    FUN_108399958(param_1,param_2,uVar7);
    iVar1 = (int)uVar7 + 1;
    param_2 = param_2 + iVar1;
    param_3 = (ulong)(uint)(iVar4 - iVar1);
  } while( true );
}



/* Entry: 108399b64; end: 108399bb3;  */

void FUN_108399b64(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == *(int *)(param_1 + 0x1c) + 0x10000) {
    iVar1 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10);
  }
  else {
    if (param_2 == *(int *)(param_1 + 0x1c)) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x18) +
            (int)((ulong)(((long)param_2 - (long)*(int *)(param_1 + 0x20)) *
                         (long)*(int *)(param_1 + 0x14)) >> 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}



/* Entry: 108399bb4; end: 108399e53;  */

void FUN_108399bb4(ulong param_1,byte *param_2,undefined8 param_3,ulong param_4,uint param_5,
                  uint param_6,ulong param_7,ulong param_8,ulong param_9,byte param_10,
                  undefined4 param_11,ulong param_12,byte param_13)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar16;
  int extraout_w8;
  ulong uVar17;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int iVar18;
  int extraout_w9_02;
  uint uVar19;
  byte *extraout_x10;
  long lVar20;
  byte *extraout_x10_00;
  byte *pbVar21;
  byte *extraout_x11;
  byte *pbVar22;
  byte *extraout_x11_00;
  int extraout_w12;
  uint uVar23;
  int extraout_w12_00;
  byte extraout_w13;
  byte bVar24;
  uint extraout_w13_00;
  int extraout_w14;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  int iVar28;
  uint uVar29;
  byte *pbVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  undefined8 unaff_x30;
  byte abStack_170 [144];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  byte bStack_80;
  ulong uStack_78;
  byte bStack_70;
  uint uStack_64;
  
  uVar35 = (uint)param_8;
  uVar19 = (uint)param_4;
  if ((int)param_5 < (int)uVar19) {
LAB_108399dc0:
    func_0x00010839a9d0(param_1,unaff_x30);
    return;
  }
  uVar12 = (uint)param_7;
  if ((int)uVar12 < (int)param_6) {
    uVar29 = uVar19;
    if ((int)param_6 <= (int)uVar19) {
      uVar29 = param_6;
    }
    uVar23 = uVar19;
    if ((int)uVar19 <= (int)param_6) {
      uVar23 = param_6;
    }
    uVar15 = param_5;
    if ((int)uVar12 <= (int)param_5) {
      uVar15 = uVar12;
    }
    uVar3 = param_5;
    if ((int)param_5 <= (int)uVar12) {
      uVar3 = uVar12;
    }
    if ((int)uVar29 <= (int)uVar15) {
      uVar29 = uVar15;
    }
    if ((int)uVar23 <= (int)uVar3) {
      uVar3 = uVar23;
    }
    param_6 = (int)(uVar29 + uVar3) / 2;
    param_7 = (ulong)param_6;
  }
  uVar12 = (uint)param_7;
  param_1 = param_4;
  if (uVar19 == param_5 && param_6 == uVar12) goto LAB_108399dc0;
  uVar32 = (ulong)param_10;
  uVar16 = (ulong)param_13;
  uVar29 = uVar19;
  if ((int)param_6 <= (int)uVar19) {
    uVar29 = param_6;
  }
  uVar11 = (ulong)uVar29;
  if ((int)uVar19 <= (int)param_6) {
    uVar19 = param_6;
  }
  uVar23 = param_5;
  if ((int)uVar12 <= (int)param_5) {
    uVar23 = uVar12;
  }
  if ((int)param_5 <= (int)uVar12) {
    param_5 = uVar12;
  }
  uVar33 = (ulong)(uVar19 + 0xffff);
  uVar12 = uVar19 + 0xffff & 0xffff0000;
  uVar15 = uVar23 & 0xffff0000;
  uVar34 = (ulong)uVar15;
  uStack_98 = param_3;
  uStack_a0 = param_9;
  pbStack_a8 = param_2;
  uStack_b0 = uVar32;
  if ((int)uVar15 < (int)uVar12) {
    uVar15 = uVar19;
    func_0x00010839a8f0();
    iVar28 = (int)param_3;
LAB_108399c8c:
    uVar14 = (ulong)uVar23;
    uVar16 = (ulong)param_5;
    func_0x00010839a9d0(unaff_x30);
    bVar5 = bStack_70;
    bVar4 = bStack_80;
    uStack_c0 = param_12;
    uVar35 = (uint)bStack_70;
    uVar19 = (uint)bStack_80;
    uVar32 = uVar11;
    pbVar8 = param_2;
    param_7 = uStack_78;
    uStack_e0 = (ulong)uVar12;
    uStack_d8 = uVar34;
    uStack_d0 = (ulong)param_5;
    uStack_c8 = (ulong)uVar23;
    uStack_b8 = uVar33;
    func_0x00010839aab8();
    uVar12 = (uint)uVar14;
    iVar10 = (int)uVar32;
    iVar31 = (int)uVar16;
    uVar16 = (long)(uVar32 << 0x20) >> 0x30;
    pbVar30 = (byte *)(((long)((ulong)(iVar31 + 0xffffU) << 0x20) >> 0x30) - (long)(iVar10 >> 0x10))
    ;
    uVar29 = (uint)pbVar30;
    bVar6 = uVar29 == 1;
    uVar23 = (uint)uVar11;
    if (bVar6) {
      func_0x00010839a814();
      if (bVar6) {
        uVar12 = (uint)((int)((uVar12 - (uVar23 + uVar15)) + iVar31) / 2) >> 8 & 0xff;
        uVar32 = uStack_b0;
        goto code_r0x000108399f58;
      }
    }
    else {
      uVar11 = uVar32;
      uVar33 = param_8;
      if ((int)uVar29 < 0x20) {
        pbVar9 = abStack_170;
      }
      else {
        param_2 = (byte *)((ulong)(uVar29 + 1) << 2);
        __Znam();
        pbVar9 = param_2;
      }
      iVar18 = (int)(iVar31 + 0xffffU) >> 0x10;
      pbVar13 = pbVar9 + (long)(int)(uVar29 << 1) + 2;
      uVar17 = (ulong)(uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU));
      for (uVar34 = 0; uVar17 != uVar34; uVar34 = uVar34 + 1) {
        (pbVar13 + uVar34 * 2)[0] = 1;
        (pbVar13 + uVar34 * 2)[1] = 0;
        pbVar9[uVar34] = bVar4;
      }
      pbVar21 = pbVar9 + (long)pbVar30;
      (pbVar13 + (long)pbVar30 * 2)[0] = 0;
      (pbVar13 + (long)pbVar30 * 2)[1] = 0;
      pbVar22 = pbVar21 + 1;
      iVar10 = (int)(uVar15 + 0xffff) >> 0x10;
      uVar19 = (uint)bVar4;
      if ((short)(uVar32 >> 0x10) + 2 == iVar10) {
        func_0x00010839aa68();
        uVar35 = (extraout_w12 >> 0xb) * (extraout_w12 >> 0xb) * extraout_w14;
        bVar24 = 0;
        if ((extraout_w13_00 & 0xff) <= (uint)*pbVar9) {
          bVar24 = *pbVar9 - (char)extraout_w13_00;
        }
        *pbVar9 = bVar24;
        bVar24 = 0;
        if ((uVar35 >> 8 & 0xff) <= (uint)pbVar9[1]) {
          bVar24 = pbVar9[1] - (char)(uVar35 >> 8);
        }
        pbVar9[1] = bVar24;
        param_8 = uVar33;
        uVar17 = extraout_x8;
        pbVar21 = extraout_x10;
        pbVar22 = extraout_x11;
        iVar18 = extraout_w9_01;
      }
      else {
        iVar1 = uVar15 - (uVar23 & 0xffff0000);
        if (0xffff < iVar1 + 0xffffU) {
          iVar2 = (int)(iVar1 + 0xffffU) >> 0x10;
          if (iVar2 == 1) {
            bVar24 = (byte)(((uint)((int)(iVar1 + (uVar23 & 0xffff)) / 2) >> 8 & 0xff) * uVar19 >> 8
                           );
          }
          else {
            iVar1 = iVar1 + (int)((long)iVar2 + -1) * -0x10000;
            iVar10 = (int)param_8;
            lVar20 = (long)iVar10 * (long)iVar1;
            pbVar22[(long)iVar2 + -1] =
                 (byte)((ulong)((long)(int)((ulong)lVar20 >> 0x10) * (long)iVar1) >> 0x19);
            param_2 = (byte *)((lVar20 * 0x10000 >> 0x20) + (long)(iVar10 >> 1));
            if ((long)param_2 < -0x7ffffffe) {
              param_2 = (byte *)0xffffffff80000001;
            }
            if (0x7ffffffe < (long)param_2) {
              param_2 = (byte *)0x7fffffff;
            }
            uVar32 = (ulong)(iVar2 - 2);
            pbVar22 = pbVar9 + ((uVar32 + (long)iVar18) - uVar16) + 1;
            for (; 0 < (int)uVar32; uVar32 = (ulong)((int)uVar32 - 1)) {
              uVar11 = (ulong)param_2 >> 8;
              *pbVar22 = (byte)((ulong)param_2 >> 8);
              param_2 = param_2 + iVar10;
              if ((long)param_2 < -0x7ffffffe) {
                param_2 = (byte *)0xffffffff80000001;
              }
              if (0x7ffffffe < (long)param_2) {
                param_2 = (byte *)0x7fffffff;
              }
              pbVar22 = pbVar22 + -1;
            }
            func_0x00010839aa68();
            uVar17 = extraout_x8_00;
            pbVar21 = extraout_x10_00;
            pbVar22 = extraout_x11_00;
            iVar10 = extraout_w12_00;
            iVar18 = extraout_w9_02;
            bVar24 = extraout_w13;
          }
          *pbVar22 = bVar24;
        }
        pbVar26 = pbVar9;
        for (uVar32 = uVar16; param_8 = uVar33, (long)uVar32 < (long)iVar10; uVar32 = uVar32 + 1) {
          bVar24 = 0;
          if (pbVar26[((long)iVar18 - uVar16) + 1] <= *pbVar26) {
            bVar24 = *pbVar26 - pbVar26[((long)iVar18 - uVar16) + 1];
          }
          *pbVar26 = bVar24;
          pbVar26 = pbVar26 + 1;
        }
      }
      iVar10 = (int)uVar11;
      uVar12 = (uint)uVar14;
      iVar1 = (int)uVar12 >> 0x10;
      if (iVar1 + 2 == iVar18) {
        iVar18 = (uVar12 & 0xffff0000) + 0x10000;
        iVar1 = (int)(iVar18 - uVar12) >> 0xb;
        uVar23 = (uint)(param_9 >> 0xb) & 0x1fffff;
        uVar35 = iVar1 * iVar1 * uVar23;
        iVar31 = iVar31 - iVar18 >> 0xb;
        uVar19 = uVar19 - (iVar31 * iVar31 * uVar23 >> 8);
        bVar24 = 0;
        if ((uVar35 >> 8 & 0xff) <= (uint)pbVar21[-2]) {
          bVar24 = pbVar21[-2] - (char)(uVar35 >> 8);
        }
        pbVar21[-2] = bVar24;
        bVar24 = 0;
        if ((uVar19 & 0xff) <= (uint)pbVar21[-1]) {
          bVar24 = pbVar21[-1] - (char)uVar19;
        }
        pbVar21[-1] = bVar24;
      }
      else {
        lVar20 = (long)iVar1;
        iVar31 = iVar31 - (uVar12 & 0xffff0000);
        if (0xffff < iVar31 + 0xffffU) {
          pbVar22 = pbVar22 + ((long)iVar1 - uVar16);
          iVar10 = (int)(iVar31 + 0xffffU) >> 0x10;
          if (iVar10 == 1) {
            *pbVar22 = (byte)((-((uVar12 & 0xffff) + iVar31) >> 9 & 0xff) * uVar19 >> 8);
          }
          else {
            iVar1 = 0x10000 - (uVar12 & 0xffff);
            lVar25 = (long)iVar10 + -1;
            uVar19 = (uint)param_9;
            lVar27 = (long)iVar1 * (long)(int)uVar19;
            *pbVar22 = (byte)((ulong)((long)(int)((ulong)lVar27 >> 0x10) * (long)iVar1) >> 0x19);
            uVar11 = (lVar27 * 0x10000 >> 0x20) + (long)((int)uVar19 >> 1);
            if ((long)uVar11 < -0x7ffffffe) {
              uVar11 = 0xffffffff80000001;
            }
            if (0x7ffffffe < (long)uVar11) {
              uVar11 = 0x7fffffff;
            }
            param_2 = pbVar9 + lVar20 + iVar18 + uVar16 * -2 + 2;
            for (lVar27 = 1; uVar12 = (uint)uVar14, lVar27 < lVar25; lVar27 = lVar27 + 1) {
              uVar14 = uVar11 >> 8;
              *param_2 = (byte)(uVar11 >> 8);
              uVar11 = uVar11 + (long)(int)uVar19;
              if ((long)uVar11 < -0x7ffffffe) {
                uVar11 = 0xffffffff80000001;
              }
              if (0x7ffffffe < (long)uVar11) {
                uVar11 = 0x7fffffff;
              }
              param_2 = param_2 + 1;
            }
            iVar31 = iVar31 + (int)lVar25 * -0x10000 >> 0xb;
            pbVar22[lVar25] = bVar4 - (char)(iVar31 * (uVar19 >> 0xb) * iVar31 >> 8);
          }
        }
        iVar10 = (int)uVar11;
        pbVar22 = pbVar9 + lVar20 + iVar18 + uVar16 * -2;
        for (; pbVar22 = pbVar22 + 1, lVar20 < iVar18; lVar20 = lVar20 + 1) {
          bVar24 = 0;
          if (*pbVar22 <= pbVar9[lVar20 - uVar16]) {
            bVar24 = pbVar9[lVar20 - uVar16] - *pbVar22;
          }
          pbVar9[lVar20 - uVar16] = bVar24;
        }
      }
      if (param_7 == 0) {
        iVar10 = iVar28;
        if ((bVar4 == 0xff) && ((bVar5 & 1) == 0)) {
          func_0x00010839a88c(*(undefined8 *)(*(long *)pbVar8 + 0x60));
          pbVar30 = pbVar9;
          (**(code **)(*(long *)pbVar8 + 0x18))();
          uVar12 = (uint)pbVar30;
          param_2 = pbVar8;
          pbVar30 = pbVar13;
        }
        else {
          pbVar13 = pbVar9;
          (**(code **)(*(long *)pbVar8 + 0x68))(pbVar8,uVar16);
          uVar12 = (uint)pbVar13;
          param_2 = pbVar8;
        }
      }
      else {
        pbVar13 = (byte *)(param_7 + uVar16);
        pbVar22 = pbVar9;
        for (; pbVar30 = pbVar8, uVar17 != 0; uVar17 = uVar17 - 1) {
          uVar19 = (uint)*pbVar13 + (uint)*pbVar22;
          if (0xfe < uVar19) {
            uVar19 = 0xff;
          }
          *pbVar13 = (byte)uVar19;
          pbVar13 = pbVar13 + 1;
          pbVar22 = pbVar22 + 1;
        }
      }
      uVar7 = uVar29 == 0x20;
      pbVar8 = pbVar30;
      if (0x1f < (int)uVar29) {
        __ZdaPv();
        param_2 = pbVar9;
        pbVar8 = pbVar30;
      }
      func_0x00010839a814();
      if ((bool)uVar7) {
        return;
      }
    }
    iVar28 = (int)pbVar8;
    ___stack_chk_fail();
    if (param_7 == 0) {
      if ((iVar28 != 0xff) || ((param_8 & 1) != 0)) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_2 + 0x78);
        func_0x00010839aa50();
LAB_10839aa0c:
                    /* WARNING: Could not recover jumptable at 0x00010839aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      func_0x00010839a88c(*(undefined8 *)(*(long *)param_2 + 0x60));
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_2 + 0x10);
      func_0x00010839aa50();
LAB_10839aa00:
                    /* WARNING: Could not recover jumptable at 0x00010839aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    pbVar8 = (byte *)(param_7 + (long)iVar10);
    for (uVar32 = (ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)); uVar32 != 0;
        uVar32 = uVar32 - 1) {
      uVar19 = (uint)*pbVar8 + iVar28;
      if (0xfe < uVar19) {
        uVar19 = 0xff;
      }
      *pbVar8 = (byte)uVar19;
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    bVar6 = uVar12 - uVar29 == 0;
    pbVar8 = param_2;
    if (!bVar6 && (int)uVar29 <= (int)uVar12) {
      func_0x00010839aa7c(uVar12 - uVar29);
      uVar35 = (uint)param_8;
      uStack_64 = (uint)uVar16;
      if (bVar6) {
        iVar28 = (int)(uVar19 - (uVar12 - 0x10000)) >> 0xb;
        uVar19 = (uint)param_10 - (iVar28 * ((uint)(param_8 >> 0xb) & 0x1fffff) * iVar28 >> 8) &
                 0xff;
        func_0x00010839a8f0();
        param_7 = uVar32;
        uVar16 = param_12;
        FUN_108399ff8();
        uVar35 = (uint)uVar16;
      }
      else if (extraout_w9 == 1) {
        func_0x00010839a7fc();
        FUN_108399f58();
      }
      else {
        bStack_70 = (byte)uVar16;
        uStack_78 = param_12;
        bStack_80 = param_10;
        func_0x00010839a8f0();
        param_7 = (ulong)uVar12;
        FUN_10839a0dc();
      }
      uVar16 = (ulong)uStack_64;
    }
    if ((int)uVar12 < (int)uVar15) {
      func_0x00010839a7fc();
      FUN_10839a604();
      uVar33 = uVar16;
    }
    bVar6 = param_5 - uVar15 == 0;
    param_1 = (ulong)(param_5 - uVar15);
    if (bVar6 || (int)param_5 < (int)uVar15) goto LAB_108399dc0;
    func_0x00010839aa7c();
    if (bVar6) {
      iVar28 = (int)((uVar15 + 0x10000) - uVar23) >> 0xb;
      uVar19 = (uint)(param_9 >> 0xb) & 0x1fffff;
      iVar31 = (int)(param_5 - (uVar15 + 0x10000)) >> 0xb;
      uVar34 = (ulong)(uint)((int)uVar23 >> 0x10);
      uVar17 = (ulong)(iVar31 * uVar19 * iVar31 >> 8 & 0xff);
      uVar14 = (ulong)((uint)param_10 - (iVar28 * uVar19 * iVar28 >> 8) & 0xff);
      func_0x00010839a8f0();
      uVar11 = param_12;
      func_0x00010839a9d0(unaff_x30);
      uStack_c0 = param_12;
      if (uVar11 != 0) {
        pbVar8 = (byte *)(uVar11 + (long)(int)uVar34);
        uVar19 = (uint)*pbVar8 + (int)uVar14;
        if (0xfe < uVar19) {
          uVar19 = 0xff;
        }
        *pbVar8 = (byte)uVar19;
        uVar19 = (uint)pbVar8[1] + (int)uVar17;
        if (0xfe < uVar19) {
          uVar19 = 0xff;
        }
        pbVar8[1] = (byte)uVar19;
        return;
      }
      uStack_b8 = uVar33;
      if (((int)uVar32 == 0xff) && ((uVar16 & 1) == 0)) {
        func_0x00010839a88c(*(undefined8 *)(*(long *)pbVar8 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010839a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)pbVar8 + 0x40))();
        return;
      }
      (**(code **)(*(long *)pbVar8 + 0x70))(pbVar8,uVar34,param_3,uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010839a0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pbVar8 + 0x70))(pbVar8,(int)uVar34 + 1,param_3,uVar17);
      return;
    }
    if (extraout_w9_00 != 1) {
      func_0x00010839a8f0();
      iVar28 = (int)param_3;
      param_8 = 0x7fffffff;
      param_2 = pbVar8;
      uVar11 = uVar34;
      goto LAB_108399c8c;
    }
    uVar16 = (ulong)(uint)((int)uVar23 >> 0x10);
    uVar12 = (uint)((int)(extraout_w8 + (uVar23 & 0xffff)) / 2) >> 8 & 0xff;
    func_0x00010839a7fc();
    func_0x00010839a9d0();
code_r0x000108399f58:
    if (uVar19 != 0xff) {
      uVar35 = 1;
    }
    if (param_7 == 0) {
      uStack_b0 = uVar32;
      if ((uVar35 & 1) == 0) {
        func_0x00010839a88c(*(undefined8 *)(*(long *)pbVar8 + 0x60));
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)pbVar8 + 0x20);
        func_0x00010839aa50();
        goto LAB_10839aa0c;
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)pbVar8 + 0x70);
      func_0x00010839aa50();
      goto LAB_10839aa00;
    }
    iVar28 = (int)uVar16;
    if ((uVar35 & 1) == 0) {
      *(char *)(param_7 + (long)iVar28) = (char)uVar12;
    }
    else {
      uVar19 = (uint)*(byte *)(param_7 + (long)iVar28) + (uVar19 * uVar12 >> 8);
      if (0xfe < uVar19) {
        uVar19 = 0xff;
      }
      *(char *)(param_7 + (long)iVar28) = (char)uVar19;
    }
  }
  return;
}



/* Entry: 108399e54; end: 108399f57;  */

bool FUN_108399e54(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x2d) < '\0') {
    bVar4 = *(byte *)(param_1 + 0x5a);
    uVar6 = *(uint *)(param_1 + 0x68);
    uVar1 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    uVar2 = *(uint *)(param_1 + 0x70);
    uVar6 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar6 = uVar2;
    }
    if (uVar1 >> 1 < uVar6 >> (ulong)(bVar4 & 0x1f)) {
      return false;
    }
    uVar6 = *(uint *)(param_1 + 0x6c);
    uVar1 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    uVar3 = *(uint *)(param_1 + 0x74);
    uVar2 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    if (uVar1 >> 1 < uVar2 >> (ulong)(bVar4 & 0x1f)) {
      return false;
    }
    iVar5 = uVar6 - ((int)uVar3 >> (bVar4 & 0x1f));
    bVar4 = *(byte *)(param_1 + 0x5b);
  }
  else {
    if (*(char *)(param_1 + 0x2d) == '\0') {
      lVar7 = (long)*(int *)(param_2 + 0x14) - (long)*(int *)(param_1 + 0x14);
      if (lVar7 < -0x7ffffffe) {
        lVar7 = -0x7fffffff;
      }
      if (0x7ffffffe < lVar7) {
        lVar7 = 0x7fffffff;
      }
      uVar6 = (uint)lVar7;
      uVar1 = -uVar6;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6;
      }
      if (0x10000 < uVar1) {
        return false;
      }
      iVar5 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20);
      goto LAB_108399f48;
    }
    uVar6 = *(uint *)(param_1 + 0x68);
    uVar1 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    uVar2 = *(uint *)(param_1 + 0x70);
    uVar6 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar6 = uVar2;
    }
    if (uVar1 >> 1 < uVar6) {
      return false;
    }
    uVar6 = *(uint *)(param_1 + 0x6c);
    uVar1 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    uVar3 = *(uint *)(param_1 + 0x74);
    uVar2 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    if (uVar1 >> 1 < uVar2) {
      return false;
    }
    iVar5 = uVar6 - uVar3;
    bVar4 = *(byte *)(param_1 + 0x5a);
  }
  iVar5 = iVar5 >> (bVar4 & 0x1f);
LAB_108399f48:
  return 0xffff < iVar5;
}



/* Entry: 108399f58; end: 108399ff7;  */

void FUN_108399f58(long *param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6
                  ,uint param_7)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_5 != 0xff) {
    param_7 = 1;
  }
  if (param_6 != 0) {
    if ((param_7 & 1) == 0) {
      *(char *)(param_6 + param_3) = (char)param_4;
    }
    else {
      uVar1 = (uint)*(byte *)(param_6 + param_3) + ((uint)(param_5 * param_4) >> 8);
      if (0xfe < uVar1) {
        uVar1 = 0xff;
      }
      *(char *)(param_6 + param_3) = (char)uVar1;
    }
    return;
  }
  if ((param_7 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x70);
    func_0x00010839aa50();
                    /* WARNING: Could not recover jumptable at 0x00010839aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010839a88c(*(undefined8 *)(*param_1 + 0x60));
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x20);
  func_0x00010839aa50();
                    /* WARNING: Could not recover jumptable at 0x00010839aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* Entry: 108399ff8; end: 10839a0db;  */

void FUN_108399ff8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,long param_7,uint param_8)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_7 != 0) {
    pbVar1 = (byte *)(param_7 + (int)param_3);
    uVar2 = (uint)*pbVar1 + (int)param_4;
    if (0xfe < uVar2) {
      uVar2 = 0xff;
    }
    *pbVar1 = (byte)uVar2;
    uVar2 = (uint)pbVar1[1] + (int)param_5;
    if (0xfe < uVar2) {
      uVar2 = 0xff;
    }
    pbVar1[1] = (byte)uVar2;
    return;
  }
  if ((param_6 == 0xff) && ((param_8 & 1) == 0)) {
    func_0x00010839a88c(*(undefined8 *)(*param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010839a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))();
    return;
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010839a0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,(int)param_3 + 1,param_2,param_5);
  return;
}



/* Entry: 10839a0dc; end: 10839a603;  */

void FUN_10839a0dc(byte *param_1,int param_2,ulong param_3,ulong param_4,int param_5,int param_6,
                  ulong param_7,ulong param_8,byte param_9,undefined4 param_10,long param_11,
                  byte param_12)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar12;
  int extraout_w9;
  int iVar13;
  int extraout_w9_00;
  ulong uVar14;
  byte *extraout_x10;
  long lVar15;
  byte *extraout_x10_00;
  byte *pbVar16;
  byte *extraout_x11;
  byte *pbVar17;
  byte *extraout_x11_00;
  int extraout_w12;
  uint uVar18;
  int extraout_w12_00;
  byte extraout_w13;
  byte bVar19;
  uint extraout_w13_00;
  int extraout_w14;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  byte *pbVar24;
  int iVar25;
  uint uVar26;
  byte abStack_f0 [144];
  
  uVar12 = param_3;
  pbVar4 = param_1;
  func_0x00010839aab8();
  uVar7 = (uint)param_4;
  iVar6 = (int)uVar12;
  lVar1 = (long)(uVar12 << 0x20) >> 0x30;
  pbVar24 = (byte *)(((long)((ulong)(param_6 + 0xffffU) << 0x20) >> 0x30) - (long)(iVar6 >> 0x10));
  uVar23 = (uint)pbVar24;
  bVar2 = uVar23 == 1;
  uVar10 = (uint)param_3;
  iVar25 = (int)(short)(uVar12 >> 0x10);
  if (bVar2) {
    func_0x00010839a814();
    if (bVar2) {
      uVar7 = (int)((uVar7 - (uVar10 + param_5)) + param_6) / 2;
      if (param_9 != 0xff) {
        param_12 = 1;
      }
      if (param_11 != 0) {
        if ((param_12 & 1) != 0) {
          uVar7 = (uint)*(byte *)(param_11 + iVar25) + ((uint)param_9 * (uVar7 >> 8 & 0xff) >> 8);
          if (0xfe < uVar7) {
            uVar7 = 0xff;
          }
          *(char *)(param_11 + iVar25) = (char)uVar7;
          return;
        }
        *(char *)(param_11 + iVar25) = (char)(uVar7 >> 8);
        return;
      }
      if ((param_12 & 1) == 0) {
        func_0x00010839a88c(*(undefined8 *)(*(long *)pbVar4 + 0x60));
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)pbVar4 + 0x20);
        func_0x00010839aa50();
        goto LAB_10839aa0c;
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)pbVar4 + 0x70);
      func_0x00010839aa50();
      goto LAB_10839aa00;
    }
  }
  else {
    uVar9 = param_7;
    if ((int)uVar23 < 0x20) {
      pbVar5 = abStack_f0;
    }
    else {
      param_1 = (byte *)((ulong)(uVar23 + 1) << 2);
      __Znam();
      pbVar5 = param_1;
    }
    iVar13 = (int)(param_6 + 0xffffU) >> 0x10;
    pbVar8 = pbVar5 + (long)(int)(uVar23 << 1) + 2;
    uVar11 = (ulong)(uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU));
    for (uVar14 = 0; uVar11 != uVar14; uVar14 = uVar14 + 1) {
      (pbVar8 + uVar14 * 2)[0] = 1;
      (pbVar8 + uVar14 * 2)[1] = 0;
      pbVar5[uVar14] = param_9;
    }
    pbVar16 = pbVar5 + (long)pbVar24;
    (pbVar8 + (long)pbVar24 * 2)[0] = 0;
    (pbVar8 + (long)pbVar24 * 2)[1] = 0;
    pbVar17 = pbVar16 + 1;
    iVar6 = param_5 + 0xffff >> 0x10;
    uVar26 = (uint)param_9;
    if (iVar25 + 2 == iVar6) {
      func_0x00010839aa68();
      uVar7 = (extraout_w12 >> 0xb) * (extraout_w12 >> 0xb) * extraout_w14;
      bVar19 = 0;
      if ((extraout_w13_00 & 0xff) <= (uint)*pbVar5) {
        bVar19 = *pbVar5 - (char)extraout_w13_00;
      }
      *pbVar5 = bVar19;
      bVar19 = 0;
      if ((uVar7 >> 8 & 0xff) <= (uint)pbVar5[1]) {
        bVar19 = pbVar5[1] - (char)(uVar7 >> 8);
      }
      pbVar5[1] = bVar19;
      param_7 = uVar9;
      uVar11 = extraout_x8;
      pbVar16 = extraout_x10;
      pbVar17 = extraout_x11;
      iVar13 = extraout_w9;
    }
    else {
      param_5 = param_5 - (uVar10 & 0xffff0000);
      if (0xffff < param_5 + 0xffffU) {
        iVar25 = (int)(param_5 + 0xffffU) >> 0x10;
        if (iVar25 == 1) {
          bVar19 = (byte)(((uint)((int)(param_5 + (uVar10 & 0xffff)) / 2) >> 8 & 0xff) * uVar26 >> 8
                         );
        }
        else {
          param_5 = param_5 + (int)((long)iVar25 + -1) * -0x10000;
          iVar6 = (int)param_7;
          lVar15 = (long)iVar6 * (long)param_5;
          pbVar17[(long)iVar25 + -1] =
               (byte)((ulong)((long)(int)((ulong)lVar15 >> 0x10) * (long)param_5) >> 0x19);
          param_1 = (byte *)((lVar15 * 0x10000 >> 0x20) + (long)(iVar6 >> 1));
          if ((long)param_1 < -0x7ffffffe) {
            param_1 = (byte *)0xffffffff80000001;
          }
          if (0x7ffffffe < (long)param_1) {
            param_1 = (byte *)0x7fffffff;
          }
          uVar14 = (ulong)(iVar25 - 2);
          pbVar17 = pbVar5 + ((uVar14 + (long)iVar13) - lVar1) + 1;
          for (; 0 < (int)uVar14; uVar14 = (ulong)((int)uVar14 - 1)) {
            uVar12 = (ulong)param_1 >> 8;
            *pbVar17 = (byte)((ulong)param_1 >> 8);
            param_1 = param_1 + iVar6;
            if ((long)param_1 < -0x7ffffffe) {
              param_1 = (byte *)0xffffffff80000001;
            }
            if (0x7ffffffe < (long)param_1) {
              param_1 = (byte *)0x7fffffff;
            }
            pbVar17 = pbVar17 + -1;
          }
          func_0x00010839aa68();
          uVar11 = extraout_x8_00;
          pbVar16 = extraout_x10_00;
          pbVar17 = extraout_x11_00;
          iVar6 = extraout_w12_00;
          iVar13 = extraout_w9_00;
          bVar19 = extraout_w13;
        }
        *pbVar17 = bVar19;
      }
      pbVar21 = pbVar5;
      for (lVar15 = lVar1; param_7 = uVar9, lVar15 < iVar6; lVar15 = lVar15 + 1) {
        bVar19 = 0;
        if (pbVar21[(iVar13 - lVar1) + 1] <= *pbVar21) {
          bVar19 = *pbVar21 - pbVar21[(iVar13 - lVar1) + 1];
        }
        *pbVar21 = bVar19;
        pbVar21 = pbVar21 + 1;
      }
    }
    iVar6 = (int)uVar12;
    uVar7 = (uint)param_4;
    iVar25 = (int)uVar7 >> 0x10;
    if (iVar25 + 2 == iVar13) {
      iVar25 = (uVar7 & 0xffff0000) + 0x10000;
      iVar13 = (int)(iVar25 - uVar7) >> 0xb;
      uVar18 = (uint)(param_8 >> 0xb) & 0x1fffff;
      uVar10 = iVar13 * iVar13 * uVar18;
      iVar25 = param_6 - iVar25 >> 0xb;
      uVar26 = uVar26 - (iVar25 * iVar25 * uVar18 >> 8);
      bVar19 = 0;
      if ((uVar10 >> 8 & 0xff) <= (uint)pbVar16[-2]) {
        bVar19 = pbVar16[-2] - (char)(uVar10 >> 8);
      }
      pbVar16[-2] = bVar19;
      bVar19 = 0;
      if ((uVar26 & 0xff) <= (uint)pbVar16[-1]) {
        bVar19 = pbVar16[-1] - (char)uVar26;
      }
      pbVar16[-1] = bVar19;
    }
    else {
      lVar15 = (long)iVar25;
      param_6 = param_6 - (uVar7 & 0xffff0000);
      if (0xffff < param_6 + 0xffffU) {
        pbVar17 = pbVar17 + (iVar25 - lVar1);
        iVar6 = (int)(param_6 + 0xffffU) >> 0x10;
        if (iVar6 == 1) {
          *pbVar17 = (byte)((-((uVar7 & 0xffff) + param_6) >> 9 & 0xff) * uVar26 >> 8);
        }
        else {
          iVar25 = 0x10000 - (uVar7 & 0xffff);
          lVar20 = (long)iVar6 + -1;
          uVar10 = (uint)param_8;
          lVar22 = (long)iVar25 * (long)(int)uVar10;
          *pbVar17 = (byte)((ulong)((long)(int)((ulong)lVar22 >> 0x10) * (long)iVar25) >> 0x19);
          uVar12 = (lVar22 * 0x10000 >> 0x20) + (long)((int)uVar10 >> 1);
          if ((long)uVar12 < -0x7ffffffe) {
            uVar12 = 0xffffffff80000001;
          }
          if (0x7ffffffe < (long)uVar12) {
            uVar12 = 0x7fffffff;
          }
          param_1 = pbVar5 + lVar15 + iVar13 + lVar1 * -2 + 2;
          for (lVar22 = 1; uVar7 = (uint)param_4, lVar22 < lVar20; lVar22 = lVar22 + 1) {
            param_4 = uVar12 >> 8;
            *param_1 = (byte)(uVar12 >> 8);
            uVar12 = uVar12 + (long)(int)uVar10;
            if ((long)uVar12 < -0x7ffffffe) {
              uVar12 = 0xffffffff80000001;
            }
            if (0x7ffffffe < (long)uVar12) {
              uVar12 = 0x7fffffff;
            }
            param_1 = param_1 + 1;
          }
          iVar6 = param_6 + (int)lVar20 * -0x10000 >> 0xb;
          pbVar17[lVar20] = param_9 - (char)(iVar6 * (uVar10 >> 0xb) * iVar6 >> 8);
        }
      }
      iVar6 = (int)uVar12;
      pbVar17 = pbVar5 + lVar15 + iVar13 + lVar1 * -2;
      for (; pbVar17 = pbVar17 + 1, lVar15 < iVar13; lVar15 = lVar15 + 1) {
        bVar19 = 0;
        if (*pbVar17 <= pbVar5[lVar15 - lVar1]) {
          bVar19 = pbVar5[lVar15 - lVar1] - *pbVar17;
        }
        pbVar5[lVar15 - lVar1] = bVar19;
      }
    }
    if (param_11 == 0) {
      iVar6 = param_2;
      if ((param_9 == 0xff) && ((param_12 & 1) == 0)) {
        func_0x00010839a88c(*(undefined8 *)(*(long *)pbVar4 + 0x60));
        pbVar24 = pbVar5;
        (**(code **)(*(long *)pbVar4 + 0x18))();
        uVar7 = (uint)pbVar24;
        param_1 = pbVar4;
        pbVar24 = pbVar8;
      }
      else {
        pbVar8 = pbVar5;
        (**(code **)(*(long *)pbVar4 + 0x68))(pbVar4,lVar1);
        uVar7 = (uint)pbVar8;
        param_1 = pbVar4;
      }
    }
    else {
      pbVar8 = (byte *)(param_11 + lVar1);
      pbVar17 = pbVar5;
      for (; pbVar24 = pbVar4, uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar10 = (uint)*pbVar8 + (uint)*pbVar17;
        if (0xfe < uVar10) {
          uVar10 = 0xff;
        }
        *pbVar8 = (byte)uVar10;
        pbVar8 = pbVar8 + 1;
        pbVar17 = pbVar17 + 1;
      }
    }
    uVar3 = uVar23 == 0x20;
    pbVar4 = pbVar24;
    if (0x1f < (int)uVar23) {
      __ZdaPv();
      param_1 = pbVar5;
      pbVar4 = pbVar24;
    }
    func_0x00010839a814();
    if ((bool)uVar3) {
      return;
    }
  }
  iVar25 = (int)pbVar4;
  ___stack_chk_fail();
  if (param_11 != 0) {
    pbVar4 = (byte *)(param_11 + iVar6);
    for (uVar12 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
        uVar12 = uVar12 - 1) {
      uVar7 = (uint)*pbVar4 + iVar25;
      if (0xfe < uVar7) {
        uVar7 = 0xff;
      }
      *pbVar4 = (byte)uVar7;
      pbVar4 = pbVar4 + 1;
    }
    return;
  }
  if ((iVar25 != 0xff) || ((param_7 & 1) != 0)) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x78);
    func_0x00010839aa50();
LAB_10839aa0c:
                    /* WARNING: Could not recover jumptable at 0x00010839aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010839a88c(*(undefined8 *)(*(long *)param_1 + 0x60));
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x10);
  func_0x00010839aa50();
LAB_10839aa00:
                    /* WARNING: Could not recover jumptable at 0x00010839aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* Entry: 10839a604; end: 10839a69b;  */

void FUN_10839a604(long *param_1,undefined8 param_2,int param_3,uint param_4,int param_5,
                  long param_6,uint param_7)

{
  uint uVar1;
  byte *pbVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar3;
  
  if (param_6 != 0) {
    pbVar2 = (byte *)(param_6 + param_3);
    for (uVar3 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      uVar1 = (uint)*pbVar2 + param_5;
      if (0xfe < uVar1) {
        uVar1 = 0xff;
      }
      *pbVar2 = (byte)uVar1;
      pbVar2 = pbVar2 + 1;
    }
    return;
  }
  if ((param_5 == 0xff) && ((param_7 & 1) == 0)) {
    func_0x00010839a88c(*(undefined8 *)(*param_1 + 0x60));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x10);
    func_0x00010839aa50();
                    /* WARNING: Could not recover jumptable at 0x00010839aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x78);
  func_0x00010839aa50();
                    /* WARNING: Could not recover jumptable at 0x00010839aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* Entry: 10839a69c; end: 10839a70f;  */

bool FUN_10839a69c(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 <= *(int *)(param_2 + 0x20)) {
      return false;
    }
    iVar2 = *(int *)(param_2 + 0x14);
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    bVar3 = *(int *)(param_2 + 0x10) - iVar1 <= *(int *)(param_1 + 0x10) + 0x10000;
  }
  return bVar3;
}



/* Entry: 10839a710; end: 10839a757;  */

undefined8 * FUN_10839a710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3fdd8;
  (**(code **)(*(long *)param_1[3] + 0x38))((long *)param_1[3],param_1 + 4,param_1 + 8);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10839a758; end: 10839a78b;  */

undefined8 * FUN_10839a758(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3fe78;
  FUN_1083997e8();
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10839a78c; end: 10839a7ab;  */

void FUN_10839a78c(undefined8 *param_1)

{
  FUN_108397fc4();
  *param_1 = &PTR_DAT_110a3ff60;
  return;
}



/* Entry: 10839a7ac; end: 10839aadf;  */

void FUN_10839a7ac(void)

{
  return;
}



/* Entry: 10839aae0; end: 10839acc7;  */

void FUN_10839aae0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_f0;
  undefined8 *puStack_e8;
  long lStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  if (param_2[2] != -1) {
    bVar1 = *(byte *)(param_1 + 0xe);
    lVar3 = param_1;
    puVar4 = param_2;
    func_0x0001083773e0();
    func_0x00010812f180();
    uStack_78 = 0x1fffffff1fffffff;
    uStack_80 = 0xe0000001e0000001;
    lStack_f0 = lVar3;
    puStack_e8 = puVar4;
    func_0x00010821b838(&lStack_f0,&uStack_80);
    puStack_48 = puStack_e8;
    lStack_50 = lStack_f0;
    iVar2 = (int)&lStack_50;
    FUN_10821a6d8();
    if (iVar2 == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      if ((bVar1 >> 1 & 1) == 0) {
        puVar4 = &uStack_60;
        FUN_10838ea90(puVar4,&lStack_50,param_2);
        if ((int)puVar4 == 0) {
          return;
        }
      }
      else {
        uStack_58 = param_2[1];
        uStack_60 = *param_2;
      }
      if (((int)uStack_58 + 0x2000U | (int)uStack_60 + 0x2000U |
          uStack_60._4_4_ + 0x2000U | uStack_58._4_4_ + 0x2000U) < 0x4000) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0xffffffffffffffff;
        if ((0x7fff < *(int *)(param_2 + 1)) || (0x7fff < *(int *)((long)param_2 + 0xc))) {
          puStack_e8 = (undefined8 *)0x7fff00007fff;
          lStack_f0 = 0;
          FUN_10838f778(&uStack_80,param_2,&lStack_f0,1);
          param_2 = &uStack_80;
        }
        FUN_10839e4e8(&lStack_f0,param_3,param_2,&lStack_50,0,0);
        if (lStack_98 == 0) {
          if ((bVar1 >> 1 & 1) != 0) {
            func_0x00010839aebc();
          }
        }
        else {
          if ((bVar1 >> 1 & 1) != 0) {
            FUN_10839e460(lStack_98,&lStack_50,param_2);
          }
          FUN_1083985c4(param_1,lStack_98,&lStack_50,param_2,param_4);
          if ((bVar1 >> 1 & 1) != 0) {
            func_0x00010839e4a4(lStack_98,&lStack_50,param_2);
          }
        }
        FUN_10839ae10(&lStack_f0);
        FUN_10838f648(&uStack_80);
      }
      else {
        FUN_10839e610(param_1,param_2,param_3);
      }
    }
    else if ((bVar1 >> 1 & 1) != 0) {
      func_0x00010839aebc();
    }
  }
  return;
}



/* Entry: 10839acc8; end: 10839ad67;  */

undefined *** FUN_10839acc8(undefined ***param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  undefined ***pppuVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***pppuVar18;
  undefined ***unaff_x21;
  undefined ***unaff_x22;
  undefined ***pppuVar19;
  int iVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  int iVar23;
  uint uVar24;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined ***pppuStack_480;
  undefined ***pppuStack_478;
  undefined ***pppuStack_470;
  undefined ***pppuStack_468;
  undefined1 *puStack_460;
  code *pcStack_458;
  code *pcStack_430;
  undefined1 auStack_418 [88];
  undefined ***pppuStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined ***pppuStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long *plStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  undefined4 uStack_318;
  undefined ***pppuStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined **ppuStack_2d0;
  undefined ***pppuStack_2c8;
  undefined4 uStack_88;
  undefined8 uStack_78;
  
  if (((*(byte *)(param_2 + 0x31) & 1) != 0) || (func_0x00010839ae98(), (int)param_1 == 0)) {
    return param_1;
  }
  if (*(char *)(unaff_x21 + 6) != '\x01') {
    func_0x00010839ae38();
    func_0x00010839aea8();
    ppuVar15 = *unaff_x21;
    unaff_x22[6] = unaff_x21[1];
    unaff_x22[5] = ppuVar15;
    FUN_10839e610();
    func_0x00010839ae90();
    func_0x00010839ae78();
    return unaff_x19;
  }
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = unaff_x21[2] == (undefined **)0xffffffffffffffff;
  pppuVar22 = unaff_x20;
  pppuVar10 = unaff_x21;
  if ((bool)uVar8) goto LAB_10839e920;
  ppuStack_388 = (undefined **)0x0;
  uStack_380 = 0;
  lStack_378 = -1;
  pppuVar10 = &ppuStack_388;
  pppuVar21 = unaff_x21;
  FUN_10839ebd8();
  pppuVar12 = unaff_x21;
  if ((int)pppuVar21 == 0) {
LAB_10839e684:
    pppuVar10 = unaff_x19;
    func_0x0001083773e0();
    pppuVar22 = (undefined ***)&uStack_370;
    ppuStack_398 = pppuVar10[1];
    ppuStack_3a0 = *pppuVar10;
    pppuStack_2c8 = (undefined ***)0x4e0000004e000000;
    ppuStack_2d0 = (undefined **)0xce000000ce000000;
    unaff_x22 = &ppuStack_2d0;
    unaff_x21 = &ppuStack_3a0;
    FUN_108281a6c();
    if (((ulong)unaff_x22 & 1) == 0) {
      pppuStack_2c8 = (undefined ***)0x4e0000004e000000;
      ppuStack_2d0 = (undefined **)0xce000000ce000000;
      uVar11 = 0;
      unaff_x21 = &ppuStack_2d0;
      FUN_10838ed10();
      if ((uVar11 & 1) == 0) {
        ppuStack_3a0 = (undefined **)0x0;
        ppuStack_398 = (undefined **)0x0;
      }
    }
    pppuVar10 = &ppuStack_3a0;
    func_0x00010839ec40();
    iVar9 = (int)&uStack_3b0;
    uStack_3b0 = pppuVar10;
    uStack_3a8 = unaff_x21;
    FUN_10821a6d8();
    if (iVar9 == 0) {
      unaff_x21 = unaff_x20;
      FUN_10839e4e8(auStack_418);
      if (pppuStack_3c0 != (undefined ***)0x0) {
        if ((*(byte *)((long)unaff_x19 + 0xe) >> 1 & 1) != 0) {
          FUN_10839e460(pppuStack_3c0,&uStack_3b0,pppuVar12);
        }
        uVar3 = uStack_3b0._4_4_;
        unaff_x22 = (undefined ***)(ulong)uStack_3b0._4_4_;
        uVar4 = uStack_3a8._4_4_;
        unaff_x20 = (undefined ***)(ulong)uStack_3a8._4_4_;
        uStack_2d8 = pppuVar12[1];
        uStack_2e0 = *pppuVar12;
        FUN_10839989c(&ppuStack_2d0);
        ppuStack_2d0 = &PTR_FUN_110a3e650;
        uStack_88 = 0;
        uVar8 = lStack_3b8 == 0;
        pppuVar10 = &ppuStack_2d0;
        unaff_x21 = unaff_x19;
        func_0x00010834dfd4();
        iVar9 = (int)pppuVar10;
        if (iVar9 == 0) {
          if ((*(byte *)((long)unaff_x19 + 0xe) >> 1 & 1) != 0) {
            ppuVar16 = pppuVar12[1];
            ppuVar15 = *pppuVar12;
            uStack_370._4_4_ = (int)((ulong)ppuVar15 >> 0x20);
            bVar1 = uStack_370._4_4_ < (int)uVar3;
            uStack_370 = ppuVar15;
            if (bVar1) {
              uStack_370 = (undefined **)CONCAT44(uVar3,(int)ppuVar15);
            }
            uStack_368._4_4_ = (uint)((ulong)ppuVar16 >> 0x20);
            uVar8 = uStack_368._4_4_ == uVar4;
            bVar1 = (int)uVar4 < (int)uStack_368._4_4_;
            uStack_368 = ppuVar16;
            if (bVar1) {
              uStack_368 = (undefined **)CONCAT44(uVar4,(int)ppuVar16);
            }
            uVar11 = 0;
            FUN_10821a6d8();
            if ((uVar11 & 1) == 0) {
              unaff_x21 = (undefined ***)((ulong)uStack_370 & 0xffffffff);
              (*(code *)(*pppuStack_3c0)[5])();
            }
          }
        }
        else {
          pppuVar21 = pppuStack_2c8;
          FUN_10839e1cc(pppuStack_2c8,pppuVar10,&plStack_338);
          pcStack_430 = (code *)0x0;
          pppuStack_308 = pppuVar21;
          uStack_300 = 0;
          uStack_2f0 = 0x80000001;
          uStack_2f8 = 0x80000001;
          pppuVar21[1] = (undefined **)&pppuStack_308;
          uStack_330 = 0;
          plStack_328 = plStack_338;
          uStack_318 = 0x7fffffff;
          *plStack_338 = (long)&uStack_330;
          uVar24 = uVar3;
          if ((int)uVar3 <= (int)uStack_2e0._4_4_) {
            uVar24 = uStack_2e0._4_4_;
          }
          uVar6 = uVar4;
          if ((int)uStack_2d8._4_4_ <= (int)uVar4) {
            uVar6 = uStack_2d8._4_4_;
          }
          if (lStack_3b8 != 0) {
            uVar3 = uVar24;
          }
          pppuVar21 = (undefined ***)(ulong)uVar3;
          if (lStack_3b8 != 0) {
            uVar4 = uVar6;
          }
          uStack_368 = (undefined **)0x0;
          uStack_360 = 0;
          uStack_370 = &PTR_FUN_110a40148;
          bVar7 = *(byte *)((long)unaff_x19 + 0xe);
          pppuVar14 = pppuStack_3c0;
          if ((bVar7 >> 1 & 1) != 0) {
            pppuStack_358 = pppuStack_3c0;
            uStack_350 = *(undefined4 *)pppuVar12;
            uStack_34c = *(undefined4 *)(pppuVar12 + 1);
            pcStack_430 = FUN_10839e258;
            pppuVar14 = (undefined ***)&uStack_370;
          }
          pppuVar19 = unaff_x19;
          FUN_108376fcc();
          if (((((uint)pppuVar19 ^ 1) & 1) == 0 && (bVar7 & 2) == 0) &&
             (uVar8 = iVar9 == 2, 1 < iVar9)) {
            FUN_10839e294(pppuStack_308,pppuVar14,pppuVar21,uVar4);
            pppuVar10 = pppuVar14;
          }
          else {
            iVar9 = (int)uStack_2d8;
            uVar3 = 1;
            if ((*(byte *)((long)unaff_x19 + 0xe) & 1) == 0) {
              uVar3 = 0xffffffff;
            }
            unaff_x20 = (undefined ***)(ulong)uVar3;
LAB_10839e968:
            pppuVar19 = pppuStack_308;
            pppuVar18 = (undefined ***)(ulong)uStack_2f8;
            if ((bVar7 >> 1 & 1) != 0) {
              pppuVar10 = pppuVar21;
              (*pcStack_430)(pppuVar14,pppuVar21,1);
            }
            uVar24 = 0;
            iVar23 = 0;
            while (unaff_x22 = pppuVar19, pppuVar22 = pppuVar18, iVar20 = (int)pppuVar21,
                  *(int *)(unaff_x22 + 3) <= iVar20) {
              iVar2 = *(int *)(unaff_x22 + 2) + 0x8000 >> 0x10;
              iVar5 = iVar2;
              if ((uVar24 & uVar3) != 0) {
                iVar5 = iVar23;
              }
              uVar24 = uVar24 + (int)*(char *)((long)unaff_x22 + 0x24);
              if (((uVar24 & uVar3) == 0) && (0 < iVar2 - iVar5)) {
                func_0x00010839f3a0((*pppuVar14)[2]);
              }
              pppuVar19 = (undefined ***)*unaff_x22;
              iVar23 = iVar5;
              if (*(int *)((long)unaff_x22 + 0x1c) == iVar20) {
                if (*(char *)((long)unaff_x22 + 0x21) < '\x01') {
                  if (*(char *)((long)unaff_x22 + 0x21) < '\0') {
                    pppuVar18 = unaff_x22;
                    FUN_10834d374();
                    iVar20 = (int)pppuVar18;
                    goto LAB_10839ea00;
                  }
                }
                else {
                  pppuVar18 = unaff_x22;
                  FUN_10834cfa4();
                  iVar20 = (int)pppuVar18;
LAB_10839ea00:
                  if (iVar20 != 0) {
                    uVar6 = *(uint *)(unaff_x22 + 2);
                    goto LAB_10839ea18;
                  }
                }
                ppuVar15 = *unaff_x22;
                ppuVar16 = unaff_x22[1];
                *ppuVar16 = (undefined *)ppuVar15;
                ppuVar15[1] = (undefined *)ppuVar16;
                pppuVar18 = pppuVar22;
              }
              else {
                uVar6 = *(int *)((long)unaff_x22 + 0x14) + *(int *)(unaff_x22 + 2);
                *(uint *)(unaff_x22 + 2) = uVar6;
LAB_10839ea18:
                pppuVar18 = (undefined ***)(ulong)uVar6;
                if ((int)uVar6 < (int)pppuVar22) {
                  ppuVar16 = unaff_x22[1];
                  ppuVar15 = ppuVar16;
                  do {
                    ppuVar17 = ppuVar15;
                    if ((undefined **)ppuVar17[1] == (undefined **)0x0) break;
                    ppuVar15 = (undefined **)ppuVar17[1];
                  } while ((int)uVar6 < *(int *)(ppuVar17 + 2));
                  pppuVar18 = pppuVar22;
                  if ((undefined ***)*ppuVar17 != unaff_x22) {
                    ppuVar15 = *unaff_x22;
                    *ppuVar16 = (undefined *)ppuVar15;
                    ppuVar15[1] = (undefined *)ppuVar16;
                    unaff_x22[1] = ppuVar17;
                    ppuVar15 = (undefined **)*ppuVar17;
                    *unaff_x22 = ppuVar15;
                    ppuVar15[1] = (undefined *)unaff_x22;
                    *ppuVar17 = (undefined *)unaff_x22;
                  }
                }
              }
            }
            if (((uVar24 & uVar3) != 0) && (0 < iVar9 - iVar23)) {
              func_0x00010839f3a0((*pppuVar14)[2]);
            }
            if ((bVar7 >> 1 & 1) != 0) {
              (*pcStack_430)(pppuVar14,pppuVar21,0);
              pppuVar10 = pppuVar21;
            }
            uVar24 = iVar20 + 1;
            pppuVar21 = (undefined ***)(ulong)uVar24;
            uVar8 = uVar24 == uVar4;
            if ((int)uVar24 < (int)uVar4) {
              if (*(uint *)(unaff_x22 + 3) == uVar24) {
                pppuVar22 = (undefined ***)unaff_x22[1];
                if (*(int *)(unaff_x22 + 2) < *(int *)(unaff_x22[1] + 2)) {
                  do {
                    pppuVar19 = pppuVar22;
                    if ((undefined ***)pppuVar22[1] == (undefined ***)0x0) break;
                    pppuVar18 = pppuVar22 + 2;
                    pppuVar22 = (undefined ***)pppuVar22[1];
                  } while (*(int *)(unaff_x22 + 2) < *(int *)pppuVar18);
                  do {
                    pppuVar22 = (undefined ***)*unaff_x22;
                    do {
                      pppuVar18 = pppuVar19;
                      pppuVar19 = (undefined ***)*pppuVar18;
                      if (pppuVar19 == unaff_x22) goto LAB_10839eb64;
                    } while (*(int *)(pppuVar19 + 2) < *(int *)(unaff_x22 + 2));
                    ppuVar15 = unaff_x22[1];
                    *ppuVar15 = (undefined *)pppuVar22;
                    pppuVar22[1] = ppuVar15;
                    unaff_x22[1] = (undefined **)pppuVar18;
                    ppuVar15 = *pppuVar18;
                    *unaff_x22 = ppuVar15;
                    ppuVar15[1] = (undefined *)unaff_x22;
                    *pppuVar18 = (undefined **)unaff_x22;
LAB_10839eb64:
                    pppuVar19 = unaff_x22;
                    unaff_x22 = pppuVar22;
                  } while (*(uint *)(pppuVar22 + 3) == uVar24);
                }
              }
              goto LAB_10839e968;
            }
          }
          FUN_108334af4(&uStack_370);
          unaff_x21 = pppuVar10;
        }
        FUN_10834e14c(&ppuStack_2d0);
        if ((*(byte *)((long)unaff_x19 + 0xe) >> 1 & 1) != 0) {
          unaff_x21 = (undefined ***)&uStack_3b0;
          func_0x00010839e4a4(pppuStack_3c0,unaff_x21,pppuVar12);
        }
      }
      FUN_10839ae10(auStack_418);
    }
    else if ((*(byte *)((long)unaff_x19 + 0xe) >> 1 & 1) != 0) {
      FUN_108335274();
      unaff_x21 = pppuVar12;
    }
  }
  else {
    uVar8 = lStack_378 == -1;
    unaff_x21 = pppuVar10;
    if (!(bool)uVar8) {
      pppuVar12 = &ppuStack_388;
      goto LAB_10839e684;
    }
  }
  unaff_x19 = &ppuStack_388;
  FUN_10838f648();
  pppuVar10 = unaff_x20;
LAB_10839e920:
  func_0x00010839f3dc(uStack_78);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    FUN_10834e14c(&ppuStack_2d0);
    FUN_10839ae10(auStack_418);
    pppuVar12 = &ppuStack_388;
    FUN_10838f648(pppuVar12);
    func_0x00010839f3c8();
    puVar13 = &uStack_490;
    pcStack_458 = FUN_10839ebd8;
    uStack_488 = 0x3fff00003fff;
    uStack_490 = 0xffffc001ffffc001;
    pppuStack_480 = unaff_x22;
    pppuStack_478 = pppuVar10;
    pppuStack_470 = pppuVar22;
    pppuStack_468 = unaff_x19;
    puStack_460 = &stack0xfffffffffffffff0;
    func_0x000108219544(&uStack_490,pppuVar12);
    if (((ulong)puVar13 & 1) == 0) {
      FUN_10838f778(unaff_x21,pppuVar12,&uStack_490,1);
    }
    return (undefined ***)(ulong)((uint)puVar13 ^ 1);
  }
  return unaff_x19;
}



/* Entry: 10839ad68; end: 10839ae0f;  */

void FUN_10839ad68(int param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar4;
  long lStack_f0;
  undefined8 *puStack_e8;
  long lStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  if (((*(byte *)(param_2 + 0x31) & 1) == 0) && (func_0x00010839ae98(), param_1 != 0)) {
    if (*(char *)(unaff_x21 + 6) == '\x01') {
      if (unaff_x21[2] != -1) {
        bVar1 = *(byte *)(unaff_x19 + 0xe);
        puVar3 = unaff_x21;
        func_0x0001083773e0();
        func_0x00010812f180();
        uStack_78 = 0x1fffffff1fffffff;
        uStack_80 = 0xe0000001e0000001;
        lStack_f0 = unaff_x19;
        puStack_e8 = puVar3;
        func_0x00010821b838(&lStack_f0,&uStack_80);
        puStack_48 = puStack_e8;
        lStack_50 = lStack_f0;
        iVar2 = (int)&lStack_50;
        FUN_10821a6d8();
        if (iVar2 == 0) {
          uStack_60 = 0;
          uStack_58 = 0;
          if ((bVar1 >> 1 & 1) == 0) {
            puVar3 = &uStack_60;
            FUN_10838ea90(puVar3,&lStack_50);
            if ((int)puVar3 == 0) {
              return;
            }
          }
          else {
            uStack_58 = unaff_x21[1];
            uStack_60 = *unaff_x21;
          }
          if (((int)uStack_58 + 0x2000U | (int)uStack_60 + 0x2000U |
              uStack_60._4_4_ + 0x2000U | uStack_58._4_4_ + 0x2000U) < 0x4000) {
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_70 = 0xffffffffffffffff;
            if ((0x7fff < *(int *)(unaff_x21 + 1)) || (0x7fff < *(int *)((long)unaff_x21 + 0xc))) {
              puStack_e8 = (undefined8 *)0x7fff00007fff;
              lStack_f0 = 0;
              FUN_10838f778(&uStack_80);
              unaff_x21 = &uStack_80;
            }
            FUN_10839e4e8(&lStack_f0);
            if (lStack_98 == 0) {
              if ((bVar1 >> 1 & 1) != 0) {
                func_0x00010839aebc();
              }
            }
            else {
              if ((bVar1 >> 1 & 1) != 0) {
                FUN_10839e460(lStack_98,&lStack_50,unaff_x21);
              }
              FUN_1083985c4();
              if ((bVar1 >> 1 & 1) != 0) {
                func_0x00010839e4a4(lStack_98,&lStack_50,unaff_x21);
              }
            }
            FUN_10839ae10(&lStack_f0);
            FUN_10838f648(&uStack_80);
          }
          else {
            FUN_10839e610();
          }
        }
        else if ((bVar1 >> 1 & 1) != 0) {
          func_0x00010839aebc();
        }
      }
      return;
    }
    func_0x00010839ae38();
    func_0x00010839aea8();
    uVar4 = *unaff_x21;
    *(undefined8 *)(unaff_x22 + 0x30) = unaff_x21[1];
    *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
    FUN_10839aae0();
    func_0x00010839ae90();
    func_0x00010839ae78();
  }
  return;
}



/* Entry: 10839ae10; end: 10839ae37;  */

undefined8 * FUN_10839ae10(undefined8 *param_1)

{
  FUN_108334af4(param_1 + 6);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10839ae38; end: 10839aec7;  */

void FUN_10839ae38(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0xffffffffffffffff;
  return;
}



/* Entry: 10839aec8; end: 10839b0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_10839aec8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             undefined8 param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined8 extraout_x8;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uStack_12c;
  undefined1 auStack_110 [56];
  undefined1 auStack_d8 [16];
  byte bStack_c8;
  undefined8 auStack_c0 [2];
  float afStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  
  pauVar4 = param_1;
  pauVar6 = param_3;
  func_0x00010839c538();
  auVar1 = _UNK_10df1e6c0;
  uStack_80 = extraout_x8;
  if (pauVar6 == (undefined1 (*) [16])0x0) {
    afStack_b0[0] = 0.0;
    afStack_b0[1] = 0.0;
    afStack_b0[2] = 0.0;
    afStack_b0[3] = 0.0;
  }
  else {
    if (*(long *)param_3[1] == -1) goto LAB_10839b070;
    auVar9 = NEON_scvtf(*param_3,4);
    afStack_b0[3] = auVar9._12_4_ + 1.0;
    afStack_b0[2] = auVar9._8_4_ + 1.0;
    afStack_b0[1] = auVar9._4_4_ + -1.0;
    afStack_b0[0] = auVar9._0_4_ + -1.0;
  }
  uStack_98 = 0x46fffe0046fffe00;
  uStack_a0 = 0xc6fffe00c6fffe00;
  uVar7 = 0;
  iVar5 = (int)param_2;
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  for (; uVar7 != iVar5 - 1; uVar7 = uVar7 + 1) {
    pauVar4 = (undefined1 (*) [16])(*param_1 + uVar7 * 8);
    param_2 = (undefined1 (*) [16])&uStack_a0;
    FUN_10835de90(pauVar4,param_2,auStack_90);
    if ((int)pauVar4 != 0) {
      if (param_3 != (undefined1 (*) [16])0x0) {
        pauVar4 = (undefined1 (*) [16])auStack_90;
        param_2 = (undefined1 (*) [16])afStack_b0;
        FUN_10835de90(pauVar4,param_2,auStack_90);
        if ((int)pauVar4 == 0) goto LAB_10839b010;
      }
      uVar12 = NEON_fcvtzs(auStack_90[0],6,4);
      uVar10 = NEON_fcvtzs(auStack_90[1],6,4);
      if (param_3 == (undefined1 (*) [16])0x0) {
LAB_10839aff4:
        pauVar4 = (undefined1 (*) [16])(uVar12 & 0xffffffff);
        param_2 = (undefined1 (*) [16])(uVar12 >> 0x20);
        FUN_10839b0f4(pauVar4,param_2,uVar10 & 0xffffffff,uVar10 >> 0x20,0,param_4);
      }
      else {
        uVar8 = NEON_smin(uVar10,uVar12,4);
        uVar11 = NEON_smax(uVar12,uVar10,4);
        auStack_c0[0]._0_4_ = auVar1._0_4_ + ((int)uVar8 >> 6);
        auStack_c0[0]._4_4_ = auVar1._4_4_ + (int)((long)uVar8 >> 0x26);
        auStack_c0[1]._0_4_ = auVar1._8_4_ + ((int)uVar11 + 0x3f >> 6);
        auStack_c0[1]._4_4_ = auVar1._12_4_ + ((int)((ulong)uVar11 >> 0x20) + 0x3f >> 6);
        param_2 = (undefined1 (*) [16])auStack_c0;
        pauVar4 = param_3;
        FUN_10839b0a4();
        if (((ulong)pauVar4 & 1) == 0) {
          pauVar4 = param_3;
          func_0x00010834954c(param_3,auStack_c0);
          if (((ulong)pauVar4 & 1) != 0) goto LAB_10839aff4;
          pauVar4 = (undefined1 (*) [16])auStack_110;
          param_2 = param_3;
          FUN_1083903d0(pauVar4,param_3,auStack_c0);
          uStack_12c = (undefined4)(uVar10 >> 0x20);
          while ((bStack_c8 & 1) == 0) {
            param_2 = (undefined1 (*) [16])(uVar12 >> 0x20);
            FUN_10839b0f4((int)uVar12,(undefined1 (*) [16])(uVar12 >> 0x20),uVar10 & 0xffffffff,
                          uStack_12c,auStack_d8,param_4);
            pauVar4 = (undefined1 (*) [16])auStack_110;
            FUN_108390454();
          }
        }
      }
    }
LAB_10839b010:
  }
LAB_10839b070:
  bVar2 = true;
  func_0x00010839c460(uStack_80);
  if (bVar2) {
    return pauVar4;
  }
  ___stack_chk_fail();
  if (*(long *)pauVar4[1] == -1) {
    return (undefined1 (*) [16])0x1;
  }
  FUN_10821a6d8();
  uVar3 = (uint)param_2;
  if (((ulong)param_2 & 1) == 0) {
    func_0x00010839c548();
    FUN_10821a044();
    pauVar4 = (undefined1 (*) [16])(ulong)(uVar3 ^ 1);
  }
  else {
    pauVar4 = (undefined1 (*) [16])0x1;
  }
  return pauVar4;
}



/* Entry: 10839b0a4; end: 10839b0f3;  */

uint FUN_10839b0a4(long param_1,ulong param_2)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x10) != -1) {
    FUN_10821a6d8();
    uVar1 = (uint)param_2;
    if ((param_2 & 1) == 0) {
      func_0x00010839c548();
      FUN_10821a044();
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
}



/* Entry: 10839b0f4; end: 10839b53f;  */

void FUN_10839b0f4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,int *param_5,
                  undefined ***param_6)

{
  int iVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int extraout_w8;
  int extraout_w8_00;
  int *piVar13;
  uint uVar14;
  int extraout_w9;
  int extraout_w9_00;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined ***pppuVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **appuStack_a0 [8];
  
  uVar12 = (uint)param_4;
  uVar10 = (uint)param_3;
  do {
    uVar5 = (uint)param_1;
    uVar9 = (uint)param_2;
    if ((int)(uVar12 & -uVar12 | uVar10 & -uVar10 | uVar5 & -uVar5 | uVar9 & -uVar9) < 0) {
      return;
    }
    uVar6 = uVar10 - uVar5;
    uVar16 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar16 = uVar6;
    }
    if (uVar16 < 0x7fc1) {
      uVar14 = uVar12 - uVar9;
      uVar6 = -uVar14;
      if (-1 < (int)uVar14) {
        uVar6 = uVar14;
      }
      if (uVar6 < 0x7fc1) {
        appuStack_a0[6] = &PTR_DAT_110a40018;
        appuStack_a0[7] = (undefined **)0x0;
        appuStack_a0[4] = &PTR_DAT_110a40070;
        appuStack_a0[5] = (undefined **)0x0;
        appuStack_a0[2] = &PTR_DAT_110a400b8;
        appuStack_a0[3] = (undefined **)0x0;
        appuStack_a0[0] = &PTR_FUN_110a40100;
        appuStack_a0[1] = (undefined **)0x0;
        if (uVar6 < uVar16) {
          uVar16 = uVar9;
          if ((int)uVar10 < (int)uVar5) {
            param_3 = param_1;
            param_4 = param_2;
            uVar5 = uVar10;
            uVar16 = uVar12;
          }
          iVar1 = (int)uVar5 >> 6;
          uVar6 = (uint)param_3;
          iVar23 = (int)(uVar6 + 0x3f) >> 6;
          iVar11 = uVar16 * 0x400;
          if (uVar12 == uVar9) {
            iVar19 = 0;
            pppuVar20 = appuStack_a0 + 6;
          }
          else {
            iVar19 = 0;
            if (uVar6 - uVar5 != 0) {
              iVar19 = (int)(((int)param_4 - uVar16) * 0x10000) / (int)(uVar6 - uVar5);
            }
            iVar11 = iVar11 + ((int)(iVar19 * (0x20 - (uVar5 & 0x3f)) + 0x20) >> 6);
            pppuVar20 = appuStack_a0 + 4;
          }
          uVar10 = 0;
          if (iVar23 - iVar1 != 1) {
            uVar10 = uVar6 & 0x3f;
          }
          if (param_5 != (int *)0x0) {
            iVar17 = param_5[2];
            if (iVar17 <= iVar1) {
              return;
            }
            iVar15 = *param_5;
            if (iVar23 <= iVar15) {
              return;
            }
            uVar12 = uVar10;
            if (iVar23 - iVar15 == 1) {
              uVar12 = 0;
            }
            uVar5 = uVar10;
            if (iVar1 < iVar15) {
              iVar11 = iVar11 + (iVar15 - iVar1) * iVar19;
              iVar1 = iVar15;
              uVar5 = uVar12;
            }
            uVar10 = 0;
            if (iVar23 <= iVar17) {
              uVar10 = uVar5;
            }
            if (iVar17 <= iVar23) {
              iVar23 = iVar17;
            }
            cVar2 = SBORROW4(iVar1,iVar23);
            cVar3 = iVar1 - iVar23 < 0;
            bVar4 = iVar1 == iVar23;
            if (bVar4) {
              return;
            }
            func_0x00010839c554();
            iVar17 = extraout_w8_00;
            if (bVar4 || cVar3 != cVar2) {
              iVar17 = iVar11;
            }
            iVar11 = extraout_w9_00 + -0x8000 >> 0x10;
            iVar15 = param_5[3];
            if (iVar15 < iVar11) {
              return;
            }
            iVar18 = param_5[1];
LAB_10839b434:
            iVar17 = iVar17 + 0x17fff >> 0x10;
            if (iVar17 < iVar18) {
              return;
            }
            piVar13 = (int *)0x0;
            if (iVar15 <= iVar17 || iVar11 <= iVar18) {
              piVar13 = param_5;
            }
            goto LAB_10839b450;
          }
        }
        else {
          uVar21 = param_4;
          uVar16 = uVar5;
          if ((int)uVar12 < (int)uVar9) {
            uVar21 = param_2;
            param_2 = param_4;
            param_3 = param_1;
            uVar16 = uVar10;
          }
          iVar11 = uVar16 * 0x400;
          uVar6 = (uint)uVar21;
          uVar14 = (uint)param_2;
          if (uVar10 == uVar5) {
            if (uVar12 == uVar9) {
              return;
            }
            iVar19 = 0;
            pppuVar20 = appuStack_a0 + 2;
          }
          else {
            iVar19 = 0;
            if (uVar6 - uVar14 != 0) {
              iVar19 = (int)(((int)param_3 - uVar16) * 0x10000) / (int)(uVar6 - uVar14);
            }
            iVar11 = iVar11 + ((int)(iVar19 * (0x20 - (uVar14 & 0x3f)) + 0x20) >> 6);
            pppuVar20 = appuStack_a0;
          }
          iVar1 = (int)uVar14 >> 6;
          iVar23 = (int)(uVar6 + 0x3f) >> 6;
          uVar10 = 0;
          if (iVar23 - iVar1 != 1) {
            uVar10 = uVar6 & 0x3f;
          }
          if (param_5 != (int *)0x0) {
            iVar17 = param_5[3];
            if (iVar17 <= iVar1) {
              return;
            }
            iVar15 = param_5[1];
            if (iVar23 <= iVar15) {
              return;
            }
            uVar12 = uVar10;
            if (iVar23 - iVar15 == 1) {
              uVar12 = 0;
            }
            uVar5 = uVar10;
            if (iVar1 < iVar15) {
              iVar11 = iVar11 + (iVar15 - iVar1) * iVar19;
              iVar1 = iVar15;
              uVar5 = uVar12;
            }
            uVar10 = 0;
            if (iVar23 <= iVar17) {
              uVar10 = uVar5;
            }
            if (iVar17 <= iVar23) {
              iVar23 = iVar17;
            }
            cVar2 = SBORROW4(iVar1,iVar23);
            cVar3 = iVar1 - iVar23 < 0;
            bVar4 = iVar1 == iVar23;
            if (bVar4) {
              return;
            }
            func_0x00010839c554();
            iVar17 = extraout_w8;
            if (bVar4 || cVar3 != cVar2) {
              iVar17 = iVar11;
            }
            iVar11 = extraout_w9 + -0x8000 >> 0x10;
            iVar15 = param_5[2];
            if (iVar15 < iVar11) {
              return;
            }
            iVar18 = *param_5;
            goto LAB_10839b434;
          }
        }
        piVar13 = (int *)0x0;
LAB_10839b450:
        ppuStack_d0 = &PTR_FUN_110a3d208;
        uStack_c8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_c0 = 0;
        pppuVar7 = param_6;
        if (piVar13 != (int *)0x0) {
          uStack_a8 = *(undefined8 *)(piVar13 + 2);
          uStack_b0 = *(undefined8 *)piVar13;
          pppuVar7 = &ppuStack_d0;
          pppuStack_b8 = param_6;
        }
        pppuVar20[1] = (undefined **)pppuVar7;
        pppuVar7 = pppuVar20;
        (*(code *)(*pppuVar20)[2])(pppuVar20,iVar1);
        iVar11 = iVar23 - (uint)(uVar10 != 0);
        pppuVar8 = pppuVar7;
        if (iVar1 - iVar11 < -1) {
          pppuVar8 = pppuVar20;
          (*(code *)(*pppuVar20)[3])(pppuVar20,iVar1 + 1,iVar11,pppuVar7,iVar19);
        }
        if (uVar10 != 0) {
          (*(code *)(*pppuVar20)[2])(pppuVar20,iVar23 + -1,pppuVar8,iVar19,uVar10);
        }
        FUN_108334af4(&ppuStack_d0);
        return;
      }
    }
    uVar21 = (ulong)(uint)(((int)uVar10 >> 1) + ((int)uVar5 >> 1));
    uVar22 = (ulong)(uint)(((int)uVar12 >> 1) + ((int)uVar9 >> 1));
    FUN_10839b0f4(param_1,param_2,uVar21,uVar22,param_5,param_6);
    param_1 = uVar21;
    param_2 = uVar22;
  } while( true );
}



/* Entry: 10839b540; end: 10839b5ab;  */

/* WARNING: Possible PIC construction at 0x00010839b620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010839b684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010839bcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010839bcc0) */

void FUN_10839b540(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 in_ZR;
  bool bVar11;
  int iVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  ulong uVar18;
  code *extraout_x9;
  long *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  ulong uVar19;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar20;
  ulong uVar21;
  undefined8 unaff_x24;
  ulong uVar22;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined1 auStack_80 [16];
  undefined8 ******ppppppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  piVar13 = (int *)&uStack_40;
  puVar9 = &uStack_40;
  func_0x00010839c538();
  uStack_40 = *param_1;
  uStack_30 = param_1[1];
  uStack_38 = CONCAT44((int)((ulong)uStack_40 >> 0x20),(int)uStack_30);
  uStack_28 = CONCAT44((int)((ulong)uStack_30 >> 0x20),(int)uStack_40);
  plVar15 = (long *)0x5;
  uStack_20 = uStack_40;
  uStack_18 = extraout_x8;
  FUN_10839d530();
  func_0x00010839c460(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10839b5ac;
  ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (plVar15 == (long *)0x0) {
    func_0x00010839c548();
    param_2 = plVar15;
    pppppppuVar23 = (undefined8 *******)ppppppuStack_50;
    UNRECOVERED_JUMPTABLE = pcStack_48;
  }
  else {
    func_0x00010839b6c8(piVar13,auStack_80);
    unaff_x19 = param_2;
    unaff_x20 = piVar13;
    unaff_x21 = plVar15;
    pppppppuVar23 = &ppppppuStack_50;
    if (plVar15[2] == 0) {
      plVar14 = plVar15;
      func_0x000108219544(plVar15,auStack_80);
      if ((int)plVar14 == 0) {
        uStack_d0 = CONCAT44((int)((ulong)*plVar15 >> 0x20) << 0x10,(int)*plVar15 << 0x10);
        uStack_c8 = CONCAT44((int)((ulong)plVar15[1] >> 0x20) << 0x10,(int)plVar15[1] << 0x10);
        puVar9 = &uStack_d0;
        func_0x00010821b838(puVar9,piVar13);
        if ((int)puVar9 == 0) {
          return;
        }
        piVar13 = (int *)&uStack_d0;
      }
      puVar9 = &uStack_e0;
      UNRECOVERED_JUMPTABLE = (code *)0x10839b688;
    }
    else {
      FUN_1083903d0(&uStack_d0,plVar15,auStack_80);
      while( true ) {
        if ((bStack_88 & 1) != 0) {
          return;
        }
        uStack_e0 = CONCAT44((int)((ulong)uStack_98 >> 0x20) << 0x10,(int)uStack_98 << 0x10);
        uStack_d8 = CONCAT44((int)((ulong)uStack_90 >> 0x20) << 0x10,(int)uStack_90 << 0x10);
        iVar12 = (int)&uStack_e0;
        func_0x00010821b838(&uStack_e0,piVar13);
        if (iVar12 != 0) break;
        FUN_108390454(&uStack_d0);
      }
      puVar9 = &uStack_e0;
      piVar13 = (int *)&uStack_e0;
      UNRECOVERED_JUMPTABLE = (code *)0x10839b624;
    }
  }
  iVar12 = *piVar13;
  iVar7 = piVar13[1];
  uVar1 = iVar12 + 0x80 >> 8;
  uVar18 = (ulong)uVar1;
  uVar2 = iVar7 + 0x80 >> 8;
  iVar6 = piVar13[2];
  iVar8 = piVar13[3];
  uVar3 = iVar6 + 0x80 >> 8;
  uVar16 = (ulong)uVar3;
  uVar4 = iVar8 + 0x80 >> 8;
  uVar17 = (ulong)uVar4;
  puVar10 = (undefined1 *)((long)puVar9 + -0x60);
  *(undefined8 *)((long)puVar9 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar9 + -0x58) = unaff_x27;
  *(undefined8 *)((long)puVar9 + -0x50) = unaff_x26;
  *(undefined8 *)((long)puVar9 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar9 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar9 + -0x30) = unaff_x22;
  *(long **)((long)puVar9 + -0x28) = unaff_x21;
  *(int **)((long)puVar9 + -0x20) = unaff_x20;
  *(long **)((long)puVar9 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)puVar9 + -0x10) = pppppppuVar23;
  *(code **)((long)puVar9 + -8) = UNRECOVERED_JUMPTABLE;
  puVar24 = (undefined1 *)((long)puVar9 + -0x10);
  if ((int)uVar3 <= (int)uVar1 || (int)uVar4 <= (int)uVar2) {
    return;
  }
  uVar5 = iVar7 + 0x80 >> 0x10;
  uVar20 = (ulong)uVar5;
  bVar11 = uVar5 == (int)(uVar4 - 1) >> 8;
  if (bVar11) {
    uVar4 = uVar4 + ~uVar2;
    uVar22 = uVar20;
  }
  else {
    bVar11 = (uVar2 & 0xff) == 0;
    if (!bVar11) {
      uVar4 = 0x100 - (uVar2 & 0xff);
      uVar25 = 0x10839bcc0;
      plVar15 = param_2;
      uVar22 = uVar16;
      uVar19 = uVar18;
      uVar21 = uVar20;
      goto SUB_10839c274;
    }
    uVar2 = iVar8 + 0x80 >> 0x10;
    uVar22 = (ulong)uVar2;
    iVar7 = uVar2 - uVar5;
    if (0 < iVar7) {
      iVar12 = iVar12 + 0x80 >> 0x10;
      if (iVar12 == (int)(uVar3 - 1) >> 8) {
        uVar17 = (ulong)(uVar3 + ~uVar1);
      }
      else {
        if ((uVar1 & 0xff) != 0) {
          func_0x00010839c438(-uVar1);
          iVar12 = iVar12 + 1;
        }
        iVar6 = (iVar6 + 0x80 >> 0x10) - iVar12;
        if (0 < iVar6) {
          (**(code **)(*param_2 + 0x28))(param_2,iVar12,uVar20,iVar6,iVar7);
        }
        uVar17 = uVar16;
        if ((uVar3 & 0xff) == 0) goto LAB_10839bd48;
      }
      func_0x00010839c438(uVar17);
    }
LAB_10839bd48:
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 0) {
      return;
    }
    bVar11 = false;
  }
  puVar24 = *(undefined1 **)((long)puVar9 + -0x10);
  uVar25 = *(undefined8 *)((long)puVar9 + -8);
  uVar17 = *(ulong *)((long)puVar9 + -0x30);
  unaff_x24 = *(undefined8 *)((long)puVar9 + -0x40);
  puVar10 = (undefined1 *)puVar9;
  uVar20 = uVar22;
  plVar15 = *(long **)((long)puVar9 + -0x18);
  uVar22 = *(ulong *)((long)puVar9 + -0x20);
  uVar19 = *(ulong *)((long)puVar9 + -0x28);
  uVar21 = *(ulong *)((long)puVar9 + -0x38);
SUB_10839c274:
  *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
  *(ulong *)(puVar10 + -0x38) = uVar21;
  *(ulong *)(puVar10 + -0x30) = uVar17;
  *(ulong *)(puVar10 + -0x28) = uVar19;
  *(ulong *)(puVar10 + -0x20) = uVar22;
  *(long **)(puVar10 + -0x18) = plVar15;
  *(undefined1 **)(puVar10 + -0x10) = puVar24;
  *(undefined8 *)(puVar10 + -8) = uVar25;
  func_0x00010839c4e8(uVar18,uVar20,uVar16,uVar4,param_2);
  if (!bVar11) {
    if ((uVar18 & 0xff) != 0) {
      func_0x00010839c41c();
      (*extraout_x9)();
      uVar17 = (ulong)((int)uVar17 + 1);
    }
    if (0 < ((int)uVar21 >> 8) - (int)uVar17) {
      func_0x00010839c41c();
      FUN_10839bf40();
    }
    if ((uVar21 & 0xff) == 0) {
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar15 + 0x20);
  func_0x00010839c41c();
                    /* WARNING: Could not recover jumptable at 0x00010839c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10839b5ac; end: 10839b68f;  */

/* WARNING: Possible PIC construction at 0x00010839b620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010839b684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010839bcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010839bcc0) */

void FUN_10839b5ac(int *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar17;
  code *extraout_x9;
  long *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  ulong uVar18;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar19;
  ulong uVar20;
  undefined8 unaff_x24;
  ulong uVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined8 unaff_x30;
  undefined8 uVar23;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  undefined1 auStack_40 [16];
  
  piVar9 = (int *)&uStack_a0;
  puVar22 = &stack0xfffffffffffffff0;
  if (param_2 == (long *)0x0) {
    func_0x00010839c548();
    param_3 = param_2;
  }
  else {
    func_0x00010839b6c8(param_1,auStack_40);
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x21 = param_2;
    unaff_x29 = puVar22;
    if (param_2[2] == 0) {
      plVar13 = param_2;
      func_0x000108219544(param_2,auStack_40);
      if ((int)plVar13 == 0) {
        uStack_90 = CONCAT44((int)((ulong)*param_2 >> 0x20) << 0x10,(int)*param_2 << 0x10);
        uStack_88 = CONCAT44((int)((ulong)param_2[1] >> 0x20) << 0x10,(int)param_2[1] << 0x10);
        puVar14 = &uStack_90;
        func_0x00010821b838(puVar14,param_1);
        if ((int)puVar14 == 0) {
          return;
        }
        param_1 = (int *)&uStack_90;
      }
      unaff_x30 = 0x10839b688;
      register0x00000008 = (BADSPACEBASE *)&uStack_a0;
    }
    else {
      FUN_1083903d0(&uStack_90,param_2,auStack_40);
      while( true ) {
        if ((bStack_48 & 1) != 0) {
          return;
        }
        uStack_a0 = CONCAT44((int)((ulong)uStack_58 >> 0x20) << 0x10,(int)uStack_58 << 0x10);
        uStack_98 = CONCAT44((int)((ulong)uStack_50 >> 0x20) << 0x10,(int)uStack_50 << 0x10);
        iVar12 = (int)&uStack_a0;
        func_0x00010821b838(&uStack_a0,param_1);
        if (iVar12 != 0) break;
        FUN_108390454(&uStack_90);
      }
      unaff_x30 = 0x10839b624;
      register0x00000008 = (BADSPACEBASE *)&uStack_a0;
      param_1 = piVar9;
    }
  }
  iVar12 = *param_1;
  iVar7 = param_1[1];
  uVar1 = iVar12 + 0x80 >> 8;
  uVar17 = (ulong)uVar1;
  uVar2 = iVar7 + 0x80 >> 8;
  iVar6 = param_1[2];
  iVar8 = param_1[3];
  uVar3 = iVar6 + 0x80 >> 8;
  uVar15 = (ulong)uVar3;
  uVar4 = iVar8 + 0x80 >> 8;
  uVar16 = (ulong)uVar4;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar22 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((int)uVar3 <= (int)uVar1 || (int)uVar4 <= (int)uVar2) {
    return;
  }
  uVar5 = iVar7 + 0x80 >> 0x10;
  uVar19 = (ulong)uVar5;
  bVar11 = uVar5 == (int)(uVar4 - 1) >> 8;
  if (bVar11) {
    uVar4 = uVar4 + ~uVar2;
    uVar21 = uVar19;
  }
  else {
    bVar11 = (uVar2 & 0xff) == 0;
    if (!bVar11) {
      uVar4 = 0x100 - (uVar2 & 0xff);
      uVar23 = 0x10839bcc0;
      plVar13 = param_3;
      uVar21 = uVar15;
      uVar18 = uVar17;
      uVar20 = uVar19;
      goto SUB_10839c274;
    }
    uVar2 = iVar8 + 0x80 >> 0x10;
    uVar21 = (ulong)uVar2;
    iVar7 = uVar2 - uVar5;
    if (0 < iVar7) {
      iVar12 = iVar12 + 0x80 >> 0x10;
      if (iVar12 == (int)(uVar3 - 1) >> 8) {
        uVar16 = (ulong)(uVar3 + ~uVar1);
      }
      else {
        if ((uVar1 & 0xff) != 0) {
          func_0x00010839c438(-uVar1);
          iVar12 = iVar12 + 1;
        }
        iVar6 = (iVar6 + 0x80 >> 0x10) - iVar12;
        if (0 < iVar6) {
          (**(code **)(*param_3 + 0x28))(param_3,iVar12,uVar19,iVar6,iVar7);
        }
        uVar16 = uVar15;
        if ((uVar3 & 0xff) == 0) goto LAB_10839bd48;
      }
      func_0x00010839c438(uVar16);
    }
LAB_10839bd48:
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 0) {
      return;
    }
    bVar11 = false;
  }
  puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
  uVar23 = *(undefined8 *)((long)register0x00000008 + -8);
  uVar16 = *(ulong *)((long)register0x00000008 + -0x30);
  unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
  puVar10 = (undefined1 *)register0x00000008;
  uVar19 = uVar21;
  plVar13 = *(long **)((long)register0x00000008 + -0x18);
  uVar21 = *(ulong *)((long)register0x00000008 + -0x20);
  uVar18 = *(ulong *)((long)register0x00000008 + -0x28);
  uVar20 = *(ulong *)((long)register0x00000008 + -0x38);
SUB_10839c274:
  *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
  *(ulong *)(puVar10 + -0x38) = uVar20;
  *(ulong *)(puVar10 + -0x30) = uVar16;
  *(ulong *)(puVar10 + -0x28) = uVar18;
  *(ulong *)(puVar10 + -0x20) = uVar21;
  *(long **)(puVar10 + -0x18) = plVar13;
  *(undefined1 **)(puVar10 + -0x10) = puVar22;
  *(undefined8 *)(puVar10 + -8) = uVar23;
  func_0x00010839c4e8(uVar17,uVar19,uVar15,uVar4,param_3);
  if (!bVar11) {
    if ((uVar17 & 0xff) != 0) {
      func_0x00010839c41c();
      (*extraout_x9)();
      uVar16 = (ulong)((int)uVar16 + 1);
    }
    if (0 < ((int)uVar20 >> 8) - (int)uVar16) {
      func_0x00010839c41c();
      FUN_10839bf40();
    }
    if ((uVar20 & 0xff) == 0) {
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 0x20);
  func_0x00010839c41c();
                    /* WARNING: Could not recover jumptable at 0x00010839c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10839b690; end: 10839b6e3;  */

/* WARNING: Possible PIC construction at 0x00010839bcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010839bcc0) */

void FUN_10839b690(int *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  ulong uVar11;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar12;
  code *extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar13;
  undefined8 unaff_x24;
  ulong uVar14;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  uVar2 = *param_1 + 0x80 >> 8;
  uVar12 = (ulong)uVar2;
  uVar3 = param_1[1] + 0x80 >> 8;
  iVar8 = param_1[2];
  uVar4 = iVar8 + 0x80 >> 8;
  uVar11 = (ulong)uVar4;
  uVar5 = param_1[3] + 0x80 >> 8;
  puVar1 = &stack0xfffffffffffffff0;
  if ((int)uVar4 <= (int)uVar2 || (int)uVar5 <= (int)uVar3) {
    return;
  }
  uVar6 = param_1[1] + 0x80 >> 0x10;
  uVar13 = (ulong)uVar6;
  uVar14 = uVar13;
  if (uVar6 == (int)(uVar5 - 1) >> 8) {
    uVar2 = uVar5 + ~uVar3;
    bVar10 = true;
    goto SUB_10839c274;
  }
  bVar10 = (uVar3 & 0xff) == 0;
  if (!bVar10) {
    uVar2 = 0x100 - (uVar3 & 0xff);
    unaff_x30 = 0x10839bcc0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x19 = param_2;
    unaff_x20 = uVar11;
    unaff_x21 = uVar12;
    unaff_x22 = (ulong)uVar5;
    unaff_x23 = uVar13;
    unaff_x29 = puVar1;
    goto SUB_10839c274;
  }
  uVar3 = param_1[3] + 0x80 >> 0x10;
  uVar14 = (ulong)uVar3;
  iVar9 = uVar3 - uVar6;
  if (0 < iVar9) {
    iVar7 = *param_1 + 0x80 >> 0x10;
    if (iVar7 == (int)(uVar4 - 1) >> 8) {
      uVar13 = (ulong)(uVar4 + ~uVar2);
    }
    else {
      if ((uVar2 & 0xff) != 0) {
        func_0x00010839c438(-uVar2);
        iVar7 = iVar7 + 1;
      }
      iVar8 = (iVar8 + 0x80 >> 0x10) - iVar7;
      if (0 < iVar8) {
        (**(code **)(*param_2 + 0x28))(param_2,iVar7,uVar13,iVar8,iVar9);
      }
      uVar13 = uVar11;
      if ((uVar4 & 0xff) == 0) goto LAB_10839bd48;
    }
    func_0x00010839c438(uVar13);
  }
LAB_10839bd48:
  uVar2 = uVar5 & 0xff;
  if (uVar2 == 0) {
    return;
  }
  bVar10 = false;
SUB_10839c274:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010839c4e8(uVar12,uVar14,uVar11,uVar2,param_2);
  if (!bVar10) {
    if ((uVar12 & 0xff) != 0) {
      func_0x00010839c41c();
      (*extraout_x9)();
      unaff_x22 = (ulong)((int)unaff_x22 + 1);
    }
    if (0 < ((int)unaff_x23 >> 8) - (int)unaff_x22) {
      func_0x00010839c41c();
      FUN_10839bf40();
    }
    if ((unaff_x23 & 0xff) == 0) {
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x20);
  func_0x00010839c41c();
                    /* WARNING: Could not recover jumptable at 0x00010839c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10839b6e4; end: 10839b7a3;  */

/* WARNING: Possible PIC construction at 0x00010839b620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010839b684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010839bcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010839bcc0) */

void FUN_10839b6e4(int *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar17;
  code *extraout_x9;
  long *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  ulong uVar18;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar19;
  ulong uVar20;
  undefined8 unaff_x24;
  ulong uVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined8 unaff_x30;
  undefined8 uVar23;
  undefined1 auStack_4c8 [1064];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  undefined7 uStack_47;
  undefined1 auStack_40 [16];
  
  if ((char)param_2[6] != '\x01') {
    func_0x00010839b6c8(param_1,auStack_40);
    plVar14 = param_2;
    FUN_108349534(param_2,auStack_40);
    if ((int)plVar14 == 0) {
      FUN_1083876e8(auStack_4c8,param_2,param_3);
      FUN_10839b5ac(param_1,uStack_50,CONCAT71(uStack_47,bStack_48));
      func_0x00010839c458();
    }
    else {
      FUN_10839b5ac(param_1,0,param_3);
    }
    return;
  }
  piVar9 = (int *)&uStack_a0;
  puVar22 = &stack0xfffffffffffffff0;
  if (param_2 == (long *)0x0) {
    func_0x00010839c548();
    param_3 = param_2;
  }
  else {
    func_0x00010839b6c8(param_1,auStack_40);
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x21 = param_2;
    unaff_x29 = puVar22;
    if (param_2[2] == 0) {
      plVar14 = param_2;
      func_0x000108219544(param_2,auStack_40);
      if ((int)plVar14 == 0) {
        uStack_90 = CONCAT44((int)((ulong)*param_2 >> 0x20) << 0x10,(int)*param_2 << 0x10);
        uStack_88 = CONCAT44((int)((ulong)param_2[1] >> 0x20) << 0x10,(int)param_2[1] << 0x10);
        puVar13 = &uStack_90;
        func_0x00010821b838(puVar13,param_1);
        if ((int)puVar13 == 0) {
          return;
        }
        param_1 = (int *)&uStack_90;
      }
      unaff_x30 = 0x10839b688;
      register0x00000008 = (BADSPACEBASE *)&uStack_a0;
    }
    else {
      FUN_1083903d0(&uStack_90,param_2,auStack_40);
      while( true ) {
        if ((bStack_48 & 1) != 0) {
          return;
        }
        uStack_a0 = CONCAT44((int)((ulong)uStack_58 >> 0x20) << 0x10,(int)uStack_58 << 0x10);
        uStack_98 = CONCAT44((int)((ulong)uStack_50 >> 0x20) << 0x10,(int)uStack_50 << 0x10);
        iVar12 = (int)&uStack_a0;
        func_0x00010821b838(&uStack_a0,param_1);
        if (iVar12 != 0) break;
        FUN_108390454(&uStack_90);
      }
      unaff_x30 = 0x10839b624;
      register0x00000008 = (BADSPACEBASE *)&uStack_a0;
      param_1 = piVar9;
    }
  }
  iVar12 = *param_1;
  iVar7 = param_1[1];
  uVar1 = iVar12 + 0x80 >> 8;
  uVar17 = (ulong)uVar1;
  uVar2 = iVar7 + 0x80 >> 8;
  iVar6 = param_1[2];
  iVar8 = param_1[3];
  uVar3 = iVar6 + 0x80 >> 8;
  uVar15 = (ulong)uVar3;
  uVar4 = iVar8 + 0x80 >> 8;
  uVar16 = (ulong)uVar4;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar22 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((int)uVar3 <= (int)uVar1 || (int)uVar4 <= (int)uVar2) {
    return;
  }
  uVar5 = iVar7 + 0x80 >> 0x10;
  uVar19 = (ulong)uVar5;
  bVar11 = uVar5 == (int)(uVar4 - 1) >> 8;
  if (bVar11) {
    uVar4 = uVar4 + ~uVar2;
    uVar21 = uVar19;
  }
  else {
    bVar11 = (uVar2 & 0xff) == 0;
    if (!bVar11) {
      uVar4 = 0x100 - (uVar2 & 0xff);
      uVar23 = 0x10839bcc0;
      plVar14 = param_3;
      uVar21 = uVar15;
      uVar18 = uVar17;
      uVar20 = uVar19;
      goto SUB_10839c274;
    }
    uVar2 = iVar8 + 0x80 >> 0x10;
    uVar21 = (ulong)uVar2;
    iVar7 = uVar2 - uVar5;
    if (0 < iVar7) {
      iVar12 = iVar12 + 0x80 >> 0x10;
      if (iVar12 == (int)(uVar3 - 1) >> 8) {
        uVar16 = (ulong)(uVar3 + ~uVar1);
      }
      else {
        if ((uVar1 & 0xff) != 0) {
          func_0x00010839c438(-uVar1);
          iVar12 = iVar12 + 1;
        }
        iVar6 = (iVar6 + 0x80 >> 0x10) - iVar12;
        if (0 < iVar6) {
          (**(code **)(*param_3 + 0x28))(param_3,iVar12,uVar19,iVar6,iVar7);
        }
        uVar16 = uVar15;
        if ((uVar3 & 0xff) == 0) goto LAB_10839bd48;
      }
      func_0x00010839c438(uVar16);
    }
LAB_10839bd48:
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 0) {
      return;
    }
    bVar11 = false;
  }
  puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
  uVar23 = *(undefined8 *)((long)register0x00000008 + -8);
  uVar16 = *(ulong *)((long)register0x00000008 + -0x30);
  unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
  puVar10 = (undefined1 *)register0x00000008;
  uVar19 = uVar21;
  plVar14 = *(long **)((long)register0x00000008 + -0x18);
  uVar21 = *(ulong *)((long)register0x00000008 + -0x20);
  uVar18 = *(ulong *)((long)register0x00000008 + -0x28);
  uVar20 = *(ulong *)((long)register0x00000008 + -0x38);
SUB_10839c274:
  *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
  *(ulong *)(puVar10 + -0x38) = uVar20;
  *(ulong *)(puVar10 + -0x30) = uVar16;
  *(ulong *)(puVar10 + -0x28) = uVar18;
  *(ulong *)(puVar10 + -0x20) = uVar21;
  *(long **)(puVar10 + -0x18) = plVar14;
  *(undefined1 **)(puVar10 + -0x10) = puVar22;
  *(undefined8 *)(puVar10 + -8) = uVar23;
  func_0x00010839c4e8(uVar17,uVar19,uVar15,uVar4,param_3);
  if (!bVar11) {
    if ((uVar17 & 0xff) != 0) {
      func_0x00010839c41c();
      (*extraout_x9)();
      uVar16 = (ulong)((int)uVar16 + 1);
    }
    if (0 < ((int)uVar20 >> 8) - (int)uVar16) {
      func_0x00010839c41c();
      FUN_10839bf40();
    }
    if ((uVar20 & 0xff) == 0) {
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar14 + 0x20);
  func_0x00010839c41c();
                    /* WARNING: Could not recover jumptable at 0x00010839c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10839b7a4; end: 10839b83f;  */

void FUN_10839b7a4(float *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  byte bStack_58;
  undefined1 *puStack_50;
  undefined8 *puStack_48;
  undefined1 auStack_40 [16];
  
  puVar4 = auStack_a0;
  if (param_2 != (undefined8 *)0x0) {
    puVar5 = param_2;
    func_0x00010839c4b8(*param_2);
    if ((int)param_1 != 0) {
      puVar3 = auStack_40;
      func_0x00010812f180();
      puStack_50 = puVar3;
      puStack_48 = puVar5;
      if (param_2[2] == 0) {
        func_0x00010839c56c();
      }
      else {
        FUN_1083903d0(auStack_a0,param_2,&puStack_50);
        while( true ) {
          iVar2 = (int)puVar4;
          if ((bStack_58 & 1) != 0) break;
          func_0x00010839c4b8(uStack_68);
          if (iVar2 != 0) {
            func_0x00010839c56c();
          }
          puVar4 = auStack_a0;
          FUN_108390454();
        }
      }
    }
    return;
  }
  func_0x00010839c548();
  auVar6._0_4_ = *param_1 * 65536.0;
  auVar6._4_4_ = param_1[1] * 65536.0;
  auVar6._8_4_ = param_1[2] * 65536.0;
  auVar6._12_4_ = param_1[3] * 65536.0;
  auVar7._8_4_ = 0x4effffff;
  auVar7._0_8_ = 0x4effffff4effffff;
  auVar7._12_4_ = 0x4effffff;
  auVar7 = NEON_fminnm(auVar6,auVar7,4);
  auVar1._8_4_ = 0xceffffff;
  auVar1._0_8_ = 0xceffffffceffffff;
  auVar1._12_4_ = 0xceffffff;
  NEON_fmaxnm(auVar7,auVar1,4);
  FUN_10839b690(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10839b840; end: 10839b887;  */

void FUN_10839b840(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  auVar2._0_4_ = *param_1 * 65536.0;
  auVar2._4_4_ = param_1[1] * 65536.0;
  auVar2._8_4_ = param_1[2] * 65536.0;
  auVar2._12_4_ = param_1[3] * 65536.0;
  auVar3._8_4_ = 0x4effffff;
  auVar3._0_8_ = 0x4effffff4effffff;
  auVar3._12_4_ = 0x4effffff;
  auVar3 = NEON_fminnm(auVar2,auVar3,4);
  auVar1._8_4_ = 0xceffffff;
  auVar1._0_8_ = 0xceffffffceffffff;
  auVar1._12_4_ = 0xceffffff;
  auVar3 = NEON_fmaxnm(auVar3,auVar1,4);
  iStack_20 = (int)auVar3._0_4_;
  iStack_1c = (int)auVar3._4_4_;
  iStack_18 = (int)auVar3._8_4_;
  iStack_14 = (int)auVar3._12_4_;
  FUN_10839b690(&iStack_20);
  return;
}



/* Entry: 10839b888; end: 10839b8f3;  */

void FUN_10839b888(float *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_4a8 [1032];
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  byte bStack_58;
  undefined1 *puStack_50;
  undefined8 *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (*(char *)(param_2 + 6) != '\x01') {
    FUN_1083876e8(auStack_4a8);
    FUN_10839b7a4(param_1,in_stack_ffffffffffffffd0,in_stack_ffffffffffffffd8);
    func_0x00010839c458();
    return;
  }
  puVar4 = auStack_a0;
  if (param_2 != (undefined8 *)0x0) {
    puVar5 = param_2;
    func_0x00010839c4b8(*param_2);
    if ((int)param_1 != 0) {
      puVar3 = auStack_40;
      func_0x00010812f180();
      puStack_50 = puVar3;
      puStack_48 = puVar5;
      if (param_2[2] == 0) {
        func_0x00010839c56c();
      }
      else {
        FUN_1083903d0(auStack_a0,param_2,&puStack_50);
        while( true ) {
          iVar2 = (int)puVar4;
          if ((bStack_58 & 1) != 0) break;
          func_0x00010839c4b8(uStack_68);
          if (iVar2 != 0) {
            func_0x00010839c56c();
          }
          puVar4 = auStack_a0;
          FUN_108390454();
        }
      }
    }
    return;
  }
  func_0x00010839c548();
  auVar6._0_4_ = *param_1 * 65536.0;
  auVar6._4_4_ = param_1[1] * 65536.0;
  auVar6._8_4_ = param_1[2] * 65536.0;
  auVar6._12_4_ = param_1[3] * 65536.0;
  auVar7._8_4_ = 0x4effffff;
  auVar7._0_8_ = 0x4effffff4effffff;
  auVar7._12_4_ = 0x4effffff;
  auVar7 = NEON_fminnm(auVar6,auVar7,4);
  auVar1._8_4_ = 0xceffffff;
  auVar1._0_8_ = 0xceffffffceffffff;
  auVar1._12_4_ = 0xceffffff;
  NEON_fmaxnm(auVar7,auVar1,4);
  FUN_10839b690(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10839b8f4; end: 10839bc1f;  */

void FUN_10839b8f4(float *param_1,undefined8 *param_2,ulong param_3,undefined ***param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined ***pppuVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar15;
  uint uVar16;
  undefined1 auVar13 [16];
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar22;
  uint uVar23;
  float fVar24;
  undefined1 auVar21 [16];
  int iVar25;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auVar12 [12];
  undefined1 auVar14 [16];
  
  fVar18 = (float)*param_2 * 0.5;
  fVar22 = (float)((ulong)*param_2 >> 0x20) * 0.5;
  auVar21._12_4_ = param_1[3] + fVar22;
  auVar21._8_4_ = param_1[2] + fVar18;
  auVar21._0_4_ = *param_1 - fVar18;
  auVar21._4_4_ = param_1[1] - fVar22;
  auVar21 = NEON_fcvtzs(auVar21,8,4);
  uVar23 = auVar21._4_4_;
  iVar25 = auVar21._12_4_;
  uVar19 = auVar21._0_4_;
  iStack_70 = (int)uVar19 >> 8;
  iStack_6c = (int)uVar23 >> 8;
  iStack_68 = auVar21._8_4_ + 0xff >> 8;
  iStack_64 = iVar25 + 0xff >> 8;
  ppuStack_e0 = &PTR_DAT_110a3d3a8;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  ppuStack_c8 = &PTR_FUN_110a3d208;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  ppuStack_98 = &PTR_DAT_110a3d290;
  uStack_90 = 0;
  pppuVar6 = param_4;
  if (param_3 != 0) {
    uVar8 = param_3;
    FUN_10839b0a4(param_3,&iStack_70);
    if ((uVar8 & 1) != 0) goto LAB_10839bbe0;
    uVar8 = param_3;
    FUN_10838f998(param_3,&iStack_70);
    if ((uVar8 & 1) == 0) {
      pppuVar6 = &ppuStack_e0;
      func_0x000108335ba8(pppuVar6,param_4,param_3,&iStack_70);
    }
  }
  fVar20 = (float)*param_2;
  fVar18 = fVar20 - fVar18;
  fVar24 = (float)((ulong)*param_2 >> 0x20);
  auVar13._12_4_ = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) - (fVar24 - fVar22);
  auVar13._8_4_ = (float)*(undefined8 *)(param_1 + 2) - fVar18;
  auVar13._0_4_ = (float)*(undefined8 *)param_1 + fVar18;
  auVar13._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20) + (fVar24 - fVar22);
  auVar13 = NEON_fcvtzs(auVar13,8,4);
  uVar10 = auVar13._0_4_;
  uVar15 = auVar13._4_4_;
  uVar16 = auVar13._8_4_;
  uVar17 = auVar13._12_4_;
  uVar8 = auVar21._8_8_ & 0xffffffff;
  uVar9 = auVar21._0_8_ & 0xffffffff;
  bVar5 = true;
  if ((1.0 <= fVar20) && (bVar5 = false, !NAN(fVar24))) {
    bVar5 = fVar24 < 1.0;
  }
  uVar7 = uVar16;
  if (bVar5) {
    uVar11 = CONCAT13(auVar13[3] ^ auVar21[3],
                      CONCAT12(auVar13[2] ^ auVar21[2],
                               CONCAT11(auVar13[1] ^ auVar21[1],auVar13[0] ^ auVar21[0])));
    auVar12._0_8_ =
         CONCAT17(auVar13[7] ^ auVar21[7],
                  CONCAT16(auVar13[6] ^ auVar21[6],
                           CONCAT15(auVar13[5] ^ auVar21[5],CONCAT14(auVar13[4] ^ auVar21[4],uVar11)
                                   )));
    auVar12[8] = auVar13[8] ^ auVar21[8];
    auVar12[9] = auVar13[9] ^ auVar21[9];
    auVar12[10] = auVar13[10] ^ auVar21[10];
    auVar12[0xb] = auVar13[0xb] ^ auVar21[0xb];
    auVar14[0xc] = auVar13[0xc] ^ auVar21[0xc];
    auVar14._0_12_ = auVar12;
    auVar14[0xd] = auVar13[0xd] ^ auVar21[0xd];
    auVar14[0xe] = auVar13[0xe] ^ auVar21[0xe];
    auVar14[0xf] = auVar13[0xf] ^ auVar21[0xf];
    uVar7 = uVar19 & 0xff;
    uVar1 = uVar23 & 0xff;
    uVar2 = uVar16 & 0xff;
    uVar4 = uVar19 & 0xffffff00;
    if (0xff < uVar11) {
      uVar4 = uVar19;
    }
    uVar9 = (ulong)uVar4;
    if (0xff < uVar11) {
      uVar7 = 0;
    }
    uVar10 = uVar10 - uVar7;
    uVar19 = uVar23 & 0xffffff00;
    if (0xff < (uint)((ulong)auVar12._0_8_ >> 0x20)) {
      uVar1 = 0;
      uVar19 = uVar23;
    }
    uVar23 = uVar19;
    uVar15 = uVar15 - uVar1;
    uVar7 = uVar16 & 0xffffff00;
    if (0xff < auVar12._8_4_) {
      uVar2 = 0;
      uVar7 = uVar16;
    }
    uVar8 = (ulong)(auVar21._8_4_ - uVar2);
    if (auVar14._12_4_ < 0x100) {
      iVar25 = iVar25 - (uVar17 & 0xff);
      uVar17 = uVar17 & 0xffffff00;
    }
  }
  FUN_10839bc20(uVar9,uVar23,uVar8,iVar25,pppuVar6,0);
  iStack_70 = (int)uVar9 + 0xff >> 8;
  iStack_6c = (int)(uVar23 + 0xff) >> 8;
  iStack_68 = (int)uVar8 >> 8;
  iStack_64 = iVar25 >> 8;
  if ((int)uVar10 < (int)uVar7 && (int)uVar15 < (int)uVar17) {
    iVar25 = (int)uVar15 >> 8;
    func_0x00010839c4b0();
    iVar3 = (int)(uVar17 + 0xff) >> 8;
    func_0x00010839c4b0(iStack_70,iVar25,(int)uVar10 >> 8,iVar3);
    func_0x00010839c4b0((int)(uVar7 + 0xff) >> 8,iVar25,iStack_68,iVar3);
    func_0x00010839c4b0(iStack_70,iVar3,iStack_68,iStack_64);
    if (iVar25 == (int)(uVar17 - 1) >> 8) {
      if (uVar15 - uVar17 == -0x100) goto LAB_10839bbe0;
    }
    else {
      if ((uVar15 & 0xff) != 0) {
        func_0x00010839c4cc();
        iVar25 = iVar25 + 1;
      }
      if (0 < ((int)uVar17 >> 8) - iVar25) {
        if ((uVar10 & 0xff) != 0) {
          func_0x00010839c578((*pppuVar6)[4],pppuVar6,(int)uVar10 >> 8);
        }
        if ((uVar7 & 0xff) != 0) {
          func_0x00010839c578((*pppuVar6)[4],pppuVar6,(int)uVar7 >> 8);
        }
      }
      if ((uVar17 & 0xff) == 0) goto LAB_10839bbe0;
    }
    func_0x00010839c4cc();
  }
  else {
    func_0x00010839c4b0();
  }
LAB_10839bbe0:
  FUN_10839c3dc(&ppuStack_e0);
  return;
}



/* Entry: 10839bc20; end: 10839bd7b;  */

/* WARNING: Possible PIC construction at 0x00010839bcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010839bcc0) */

void FUN_10839bc20(ulong param_1,uint param_2,ulong param_3,ulong param_4,long *param_5,int param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar9;
  undefined8 unaff_x24;
  ulong uVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar6 = (uint)param_1;
  iVar7 = (int)param_3;
  uVar8 = (uint)param_4;
  if (iVar7 <= (int)uVar6 || (int)uVar8 <= (int)param_2) {
    return;
  }
  uVar2 = (int)param_2 >> 8;
  uVar9 = (ulong)uVar2;
  uVar10 = uVar9;
  if (uVar2 == (int)(uVar8 - 1) >> 8) {
    uVar8 = uVar8 + ~param_2;
    bVar5 = true;
    goto SUB_10839c274;
  }
  bVar5 = (param_2 & 0xff) == 0;
  if (!bVar5) {
    uVar8 = 0x100 - (param_2 & 0xff);
    unaff_x30 = 0x10839bcc0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x19 = param_5;
    unaff_x20 = param_3;
    unaff_x21 = param_1;
    unaff_x22 = param_4;
    unaff_x23 = uVar9;
    unaff_x29 = puVar1;
    goto SUB_10839c274;
  }
  uVar10 = (ulong)(uint)((int)uVar8 >> 8);
  iVar4 = ((int)uVar8 >> 8) - uVar2;
  if (0 < iVar4) {
    iVar3 = (int)uVar6 >> 8;
    if (iVar3 == iVar7 + -1 >> 8) {
      uVar9 = (ulong)(iVar7 + ~uVar6);
    }
    else {
      if ((param_1 & 0xff) != 0) {
        func_0x00010839c438(-uVar6);
        iVar3 = iVar3 + 1;
      }
      if ((param_6 != 0) && (iVar7 = (iVar7 >> 8) - iVar3, 0 < iVar7)) {
        (**(code **)(*param_5 + 0x28))(param_5,iVar3,uVar9,iVar7,iVar4);
      }
      uVar9 = param_3;
      if ((param_3 & 0xff) == 0) goto LAB_10839bd48;
    }
    func_0x00010839c438(uVar9);
  }
LAB_10839bd48:
  uVar8 = uVar8 & 0xff;
  if ((param_4 & 0xff) == 0) {
    return;
  }
  bVar5 = false;
SUB_10839c274:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010839c4e8(param_1,uVar10,param_3,uVar8,param_5);
  if (!bVar5) {
    if ((param_1 & 0xff) != 0) {
      func_0x00010839c41c();
      (*extraout_x9)();
      unaff_x22 = (ulong)((int)unaff_x22 + 1);
    }
    if (0 < ((int)unaff_x23 >> 8) - (int)unaff_x22) {
      func_0x00010839c41c();
      FUN_10839bf40();
    }
    if ((unaff_x23 & 0xff) == 0) {
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x20);
  func_0x00010839c41c();
                    /* WARNING: Could not recover jumptable at 0x00010839c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10839bd7c; end: 10839bdb3;  */

void FUN_10839bd7c(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long *param_5)

{
  int iVar1;
  
  iVar1 = param_3 - (int)param_1;
  if ((iVar1 == 0 || param_3 < (int)param_1) || param_4 <= (int)param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010839bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x28))(param_5,param_1,param_2,iVar1,param_4 - (int)param_2);
  return;
}



/* Entry: 10839bdb4; end: 10839be37;  */

void FUN_10839bdb4(float *param_1,undefined8 *param_2,ulong param_3,undefined ***param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined ***pppuVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar17;
  uint uVar18;
  undefined1 auVar15 [16];
  uint uVar19;
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  uint uVar23;
  int iVar24;
  undefined1 auStack_4b8 [952];
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auVar14 [12];
  undefined1 auVar16 [16];
  
  if (*(char *)(param_3 + 0x30) != '\x01') {
    FUN_1083876e8(auStack_4b8,param_3,param_4);
    func_0x00010839c548();
    FUN_10839b8f4();
    func_0x00010839c458();
    return;
  }
  func_0x00010839c548();
  fStack_100 = (float)*param_2 * 0.5;
  fStack_fc = (float)((ulong)*param_2 >> 0x20) * 0.5;
  uStack_f8 = 0;
  auVar21._12_4_ = param_1[3] + fStack_fc;
  auVar21._8_4_ = param_1[2] + fStack_100;
  auVar21._0_4_ = *param_1 - fStack_100;
  auVar21._4_4_ = param_1[1] - fStack_fc;
  auVar21 = NEON_fcvtzs(auVar21,8,4);
  uStack_e8 = auVar21._8_8_;
  uStack_f0 = auVar21._0_8_;
  iStack_70 = auVar21._0_4_ >> 8;
  iStack_6c = auVar21._4_4_ >> 8;
  iStack_68 = auVar21._8_4_ + 0xff >> 8;
  iStack_64 = auVar21._12_4_ + 0xff >> 8;
  ppuStack_e0 = &PTR_DAT_110a3d3a8;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  ppuStack_c8 = &PTR_FUN_110a3d208;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  ppuStack_98 = &PTR_DAT_110a3d290;
  uStack_90 = 0;
  pppuVar7 = param_4;
  if (param_3 != 0) {
    uVar9 = param_3;
    FUN_10839b0a4(param_3,&iStack_70);
    if ((uVar9 & 1) != 0) goto LAB_10839bbe0;
    uVar9 = param_3;
    FUN_10838f998(param_3,&iStack_70);
    if ((uVar9 & 1) == 0) {
      pppuVar7 = &ppuStack_e0;
      func_0x000108335ba8(pppuVar7,param_4,param_3,&iStack_70);
    }
  }
  fVar20 = (float)*param_2;
  fVar11 = fVar20 - fStack_100;
  fVar22 = (float)((ulong)*param_2 >> 0x20);
  auVar15._12_4_ = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) - (fVar22 - fStack_fc);
  auVar15._8_4_ = (float)*(undefined8 *)(param_1 + 2) - fVar11;
  auVar15._0_4_ = (float)*(undefined8 *)param_1 + fVar11;
  auVar15._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20) + (fVar22 - fStack_fc);
  auVar21 = NEON_fcvtzs(auVar15,8,4);
  uVar12 = auVar21._0_4_;
  uVar17 = auVar21._4_4_;
  uVar18 = auVar21._8_4_;
  uVar19 = auVar21._12_4_;
  uVar23 = (uint)(uStack_f0 >> 0x20);
  uVar9 = uStack_e8 & 0xffffffff;
  uVar5 = (uint)uStack_f0;
  uVar10 = uStack_f0 & 0xffffffff;
  iVar24 = (int)(uStack_e8 >> 0x20);
  bVar6 = true;
  if ((1.0 <= fVar20) && (bVar6 = false, !NAN(fVar22))) {
    bVar6 = fVar22 < 1.0;
  }
  uVar8 = uVar18;
  if (bVar6) {
    uVar13 = CONCAT13(auVar21[3] ^ (byte)(uStack_f0 >> 0x18),
                      CONCAT12(auVar21[2] ^ (byte)(uStack_f0 >> 0x10),
                               CONCAT11(auVar21[1] ^ (byte)(uStack_f0 >> 8),
                                        auVar21[0] ^ (byte)uStack_f0)));
    auVar14._0_8_ =
         CONCAT17(auVar21[7] ^ (byte)(uStack_f0 >> 0x38),
                  CONCAT16(auVar21[6] ^ (byte)(uStack_f0 >> 0x30),
                           CONCAT15(auVar21[5] ^ (byte)(uStack_f0 >> 0x28),
                                    CONCAT14(auVar21[4] ^ (byte)(uStack_f0 >> 0x20),uVar13))));
    auVar14[8] = auVar21[8] ^ (byte)uStack_e8;
    auVar14[9] = auVar21[9] ^ (byte)(uStack_e8 >> 8);
    auVar14[10] = auVar21[10] ^ (byte)(uStack_e8 >> 0x10);
    auVar14[0xb] = auVar21[0xb] ^ (byte)(uStack_e8 >> 0x18);
    auVar16[0xc] = auVar21[0xc] ^ (byte)(uStack_e8 >> 0x20);
    auVar16._0_12_ = auVar14;
    auVar16[0xd] = auVar21[0xd] ^ (byte)(uStack_e8 >> 0x28);
    auVar16[0xe] = auVar21[0xe] ^ (byte)(uStack_e8 >> 0x30);
    auVar16[0xf] = auVar21[0xf] ^ (byte)(uStack_e8 >> 0x38);
    uVar8 = uVar5 & 0xff;
    uVar1 = uVar23 & 0xff;
    uVar2 = uVar18 & 0xff;
    uVar4 = uVar5 & 0xffffff00;
    if (0xff < uVar13) {
      uVar4 = uVar5;
    }
    uVar10 = (ulong)uVar4;
    if (0xff < uVar13) {
      uVar8 = 0;
    }
    uVar12 = uVar12 - uVar8;
    uVar5 = uVar23 & 0xffffff00;
    if (0xff < (uint)((ulong)auVar14._0_8_ >> 0x20)) {
      uVar1 = 0;
      uVar5 = uVar23;
    }
    uVar23 = uVar5;
    uVar17 = uVar17 - uVar1;
    uVar8 = uVar18 & 0xffffff00;
    if (0xff < auVar14._8_4_) {
      uVar2 = 0;
      uVar8 = uVar18;
    }
    uVar9 = (ulong)((int)uStack_e8 - uVar2);
    if (auVar16._12_4_ < 0x100) {
      iVar24 = iVar24 - (uVar19 & 0xff);
      uVar19 = uVar19 & 0xffffff00;
    }
  }
  FUN_10839bc20(uVar10,uVar23,uVar9,iVar24,pppuVar7,0);
  iStack_70 = (int)uVar10 + 0xff >> 8;
  iStack_6c = (int)(uVar23 + 0xff) >> 8;
  iStack_68 = (int)uVar9 >> 8;
  iStack_64 = iVar24 >> 8;
  if ((int)uVar12 < (int)uVar8 && (int)uVar17 < (int)uVar19) {
    iVar24 = (int)uVar17 >> 8;
    func_0x00010839c4b0();
    iVar3 = (int)(uVar19 + 0xff) >> 8;
    func_0x00010839c4b0(iStack_70,iVar24,(int)uVar12 >> 8,iVar3);
    func_0x00010839c4b0((int)(uVar8 + 0xff) >> 8,iVar24,iStack_68,iVar3);
    func_0x00010839c4b0(iStack_70,iVar3,iStack_68,iStack_64);
    if (iVar24 == (int)(uVar19 - 1) >> 8) {
      if (uVar17 - uVar19 == -0x100) goto LAB_10839bbe0;
    }
    else {
      if ((uVar17 & 0xff) != 0) {
        func_0x00010839c4cc();
        iVar24 = iVar24 + 1;
      }
      if (0 < ((int)uVar19 >> 8) - iVar24) {
        if ((uVar12 & 0xff) != 0) {
          func_0x00010839c578((*pppuVar7)[4],pppuVar7,(int)uVar12 >> 8);
        }
        if ((uVar8 & 0xff) != 0) {
          func_0x00010839c578((*pppuVar7)[4],pppuVar7,(int)uVar8 >> 8);
        }
      }
      if ((uVar19 & 0xff) == 0) goto LAB_10839bbe0;
    }
    func_0x00010839c4cc();
  }
  else {
    func_0x00010839c4b0();
  }
LAB_10839bbe0:
  FUN_10839c3dc(&ppuStack_e0);
  return;
}



/* Entry: 10839be38; end: 10839be4b;  */

void FUN_10839be38(void)

{
  return;
}



/* Entry: 10839be4c; end: 10839beb3;  */

void FUN_10839be4c(void)

{
  undefined1 in_CY;
  long unaff_x21;
  int unaff_w23;
  uint unaff_w24;
  
  func_0x00010839c474();
  if ((bool)in_CY) {
    FUN_10839bf40(*(undefined8 *)(unaff_x21 + 8));
  }
  if (0x3f < (unaff_w24 ^ 0xff) * unaff_w23) {
    FUN_10839bf40(*(undefined8 *)(unaff_x21 + 8));
  }
  return;
}



/* Entry: 10839beb4; end: 10839bf3f;  */

undefined8 FUN_10839beb4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_3 = param_3 - (int)param_2;
  uVar1 = (int)param_4 + 0x8000;
  if ((uVar1 & 0xff00) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1 >> 8 & 0xff;
    FUN_10839bf40(*(undefined8 *)(param_1 + 8),param_2,(int)uVar1 >> 0x10,param_3,uVar2);
    if ((uVar1 & 0xff00) == 0xff00) {
      return param_4;
    }
  }
  FUN_10839bf40(*(undefined8 *)(param_1 + 8),param_2,((int)uVar1 >> 0x10) + -1,param_3,uVar2 ^ 0xff)
  ;
  return param_4;
}



/* Entry: 10839bf40; end: 10839bff3;  */

void FUN_10839bf40(long *param_1,ulong param_2,undefined8 param_3,int param_4,undefined1 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 extraout_x8;
  int iVar3;
  undefined1 auStack_196 [100];
  undefined2 auStack_132 [101];
  undefined8 uStack_68;
  
  func_0x00010839c538();
  uStack_68 = extraout_x8;
  do {
    iVar3 = param_4;
    if (99 < param_4) {
      iVar3 = 100;
    }
    auStack_132[0] = (undefined2)iVar3;
    auStack_132[iVar3] = 0;
    auStack_196[0] = param_5;
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,auStack_196,auStack_132);
    param_2 = (ulong)(uint)((int)param_2 + iVar3);
    bVar2 = param_4 - iVar3 == 0;
    bVar1 = iVar3 <= param_4;
    param_4 = param_4 - iVar3;
  } while (!bVar2 && bVar1);
  func_0x00010839c460(uStack_68);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839bff4; end: 10839bff7;  */

void FUN_10839bff4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839bff8; end: 10839c04b;  */

int FUN_10839bff8(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = param_3 + 0x8000U >> 8 & 0xff;
  (**(code **)(**(long **)(param_1 + 8) + 0x48))
            (*(long **)(param_1 + 8),param_2,((int)(param_3 + 0x8000U) >> 0x10) + -1,
             (int)((uVar1 ^ 0xff) * param_5) >> 6,(int)(uVar1 * param_5) >> 6);
  return param_4 + param_3;
}



/* Entry: 10839c04c; end: 10839c0ab;  */

int FUN_10839c04c(long param_1)

{
  uint uVar1;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  long *plVar2;
  
  func_0x00010839c58c();
  plVar2 = *(long **)(param_1 + 8);
  do {
    (**(code **)(*plVar2 + 0x48))
              (plVar2,unaff_x22,((int)(unaff_w19 + 0x8000U) >> 0x10) + -1,
               unaff_w19 + 0x8000U >> 8 & 0xff ^ 0xff);
    uVar1 = (int)unaff_x22 + 1;
    unaff_x22 = (ulong)uVar1;
    unaff_w19 = unaff_w19 + unaff_w20;
  } while ((int)uVar1 < unaff_w21);
  return unaff_w19;
}



/* Entry: 10839c0ac; end: 10839c0af;  */

void FUN_10839c0ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839c0b0; end: 10839c117;  */

void FUN_10839c0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 in_CY;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  
  func_0x00010839c474();
  if ((bool)in_CY) {
    func_0x00010839c42c();
  }
  uVar1 = (unaff_w24 ^ 0xff) * unaff_w23;
  if (0x3f < uVar1) {
    func_0x00010839c42c(*(undefined8 *)(unaff_x21 + 8),unaff_w22 + -1,param_3,param_4,
                        uVar1 >> 6 & 0xff);
  }
  return;
}



/* Entry: 10839c118; end: 10839c1b7;  */

undefined8 FUN_10839c118(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)param_4 + 0x8000;
  uVar2 = uVar1 >> 8 & 0xff;
  if (uVar2 == 0) {
    uVar2 = 0;
    param_3 = param_3 - (int)param_2;
  }
  else {
    param_3 = param_3 - (int)param_2;
    (**(code **)(**(long **)(param_1 + 8) + 0x20))
              (*(long **)(param_1 + 8),(int)uVar1 >> 0x10,param_2,param_3,uVar2);
    if (uVar2 == 0xff) {
      return param_4;
    }
    uVar2 = uVar1 >> 8;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x20))
            (*(long **)(param_1 + 8),((int)uVar1 >> 0x10) + -1,param_2,param_3,
             (uVar2 ^ 0xffffffff) & 0xff);
  return param_4;
}



/* Entry: 10839c1b8; end: 10839c1bb;  */

void FUN_10839c1b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839c1bc; end: 10839c213;  */

int FUN_10839c1bc(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = param_3 + 0x8000U >> 8 & 0xff;
  (**(code **)(**(long **)(param_1 + 8) + 0x40))
            (*(long **)(param_1 + 8),((int)(param_3 + 0x8000U) >> 0x10) + -1,param_2,
             (int)((uVar1 ^ 0xff) * param_5) >> 6,(int)(uVar1 * param_5) >> 6);
  return param_4 + param_3;
}



/* Entry: 10839c214; end: 10839c3db;  */

int FUN_10839c214(long param_1)

{
  uint uVar1;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  
  func_0x00010839c58c();
  do {
    (**(code **)(**(long **)(param_1 + 8) + 0x40))
              (*(long **)(param_1 + 8),((int)(unaff_w19 + 0x8000U) >> 0x10) + -1,unaff_x22,
               unaff_w19 + 0x8000U >> 8 & 0xff ^ 0xff);
    uVar1 = (int)unaff_x22 + 1;
    unaff_x22 = (ulong)uVar1;
    unaff_w19 = unaff_w19 + unaff_w20;
  } while ((int)uVar1 < unaff_w21);
  return unaff_w19;
}



/* Entry: 10839c3dc; end: 10839c40b;  */

undefined8 * FUN_10839c3dc(undefined8 *param_1)

{
  FUN_108334af4(param_1 + 9);
  FUN_108334af4(param_1 + 3);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10839c40c; end: 10839c59f;  */

void FUN_10839c40c(void)

{
  return;
}



/* Entry: 10839c5a0; end: 10839c8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10839c5a0(ulong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined ***param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar15;
  ulong extraout_x8_00;
  int iVar16;
  int extraout_w9;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w13;
  int extraout_w13_00;
  undefined ***unaff_x22;
  undefined1 (*unaff_x23) [16];
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  int iVar22;
  undefined1 *puStack_6a0;
  undefined1 (*pauStack_698) [16];
  int iStack_690;
  int iStack_68c;
  int iStack_688;
  int iStack_684;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined **ppuStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 (*pauStack_648) [16];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined **ppuStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 (*pauStack_618) [16];
  undefined1 (*pauStack_610) [16];
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined ***pppuStack_180;
  ulong uStack_178;
  undefined1 (*pauStack_170) [16];
  undefined ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  int aiStack_110 [4];
  int aiStack_100 [4];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  undefined1 (*pauStack_88) [16];
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  
  pauVar13 = param_3;
  func_0x00010839deb8();
  ppuStack_f0 = &PTR_DAT_110a3d3a8;
  uStack_e8 = 0;
  pppuStack_148 = &ppuStack_d8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  ppuStack_d8 = &PTR_FUN_110a3d208;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pppuStack_150 = &ppuStack_a8;
  uStack_98 = 0;
  ppuStack_a8 = &PTR_DAT_110a3d290;
  uStack_a0 = 0;
  aiStack_100[0] = 0;
  aiStack_100[1] = 0;
  aiStack_100[2] = 0;
  aiStack_100[3] = 0;
  aiStack_110[0] = 0;
  aiStack_110[1] = 0;
  aiStack_110[2] = 0;
  aiStack_110[3] = 0;
  auStack_120._8_8_ = UNK_10df1e6b0._8_8_;
  auStack_120._0_8_ = (undefined8)UNK_10df1e6b0;
  uStack_130 = 0;
  uStack_128 = 0;
  if (pauVar13 != (undefined1 (*) [16])0x0) {
    auVar20 = NEON_scvtf(*param_3,4);
    uStack_128 = auVar20._8_8_;
    uStack_130 = auVar20._0_8_;
  }
  uVar19 = 0;
  iVar12 = (int)param_2;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  uStack_70 = extraout_x8;
  do {
    uVar4 = uVar19 == iVar12 - 1;
    if ((bool)uVar4) {
      pppuVar7 = &ppuStack_f0;
      FUN_10839c3dc();
      func_0x00010839de28(uStack_70);
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      pppuVar8 = &ppuStack_f0;
      FUN_10839c3dc();
      func_0x00010839dfb0();
      pcStack_158 = FUN_10839c8a4;
      uStack_608 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      pauVar11 = param_2;
      pppuStack_180 = unaff_x22;
      uStack_178 = param_1;
      pauStack_170 = param_3;
      pppuStack_168 = pppuVar7;
      puStack_160 = &stack0xfffffffffffffff0;
      func_0x00010839e088(0xffffffffffffffff);
      lStack_5f0 = extraout_x9_00 + 0x10;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      func_0x00010839e07c(&uStack_608);
      uStack_198 = 0;
      ppuStack_678 = &PTR_DAT_110a3d3a8;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_650 = 0;
      uStack_668 = 0;
      ppuStack_660 = &PTR_FUN_110a3d208;
      uStack_640 = 0;
      uStack_638 = 0;
      uStack_620 = 0;
      ppuStack_630 = &PTR_DAT_110a3d290;
      uStack_628 = 0;
      uVar21 = NEON_fminnm(CONCAT44((int)(*(float *)(pppuVar8 + 1) + 1.0),(int)SUB84(*pppuVar8,0)),
                           0x4effffff4effffff,4);
      uVar21 = NEON_fmaxnm(uVar21,0xceffffffceffffff,4);
      iStack_690 = (int)(float)uVar21;
      iStack_688 = (int)(float)((ulong)uVar21 >> 0x20);
      uVar21 = NEON_fminnm(CONCAT44((int)(*(float *)((long)pppuVar8 + 0xc) + 1.0),
                                    (int)(float)((ulong)*pppuVar8 >> 0x20)),0x4effffff4effffff,4);
      uVar21 = NEON_fmaxnm(uVar21,0xceffffffceffffff,4);
      iStack_68c = (int)(float)uVar21;
      iStack_684 = (int)(float)((ulong)uVar21 >> 0x20);
      lVar15 = 0;
      if (pauVar11[3][0] == '\0') {
        lVar15 = 0x18;
      }
      puVar9 = *pauVar11 + lVar15;
      func_0x00010839dfb8();
      piVar10 = &iStack_690;
      puStack_6a0 = puVar9;
      pauStack_698 = pauVar11;
      func_0x00010821b838(piVar10,&puStack_6a0);
      if ((((ulong)piVar10 & 1) != 0) &&
         (pauVar11 = param_2, FUN_108349328(param_2,&iStack_690), ((ulong)pauVar11 & 1) == 0)) {
        pauVar11 = param_2;
        FUN_108349534(param_2,&iStack_690);
        if ((((ulong)pauVar11 & 1) == 0) &&
           ((pauVar11 = pauVar13, (param_2[3][0] & 1) != 0 ||
            (FUN_108387754(&uStack_608,param_2,pauVar13), pauVar13 = pauStack_188,
            pauVar11 = pauStack_188, param_2 = pauStack_190,
            pauStack_190 != (undefined1 (*) [16])0x0)))) {
          if (*(long *)param_2[1] == -1) {
            pauVar13 = (undefined1 (*) [16])&ppuStack_678;
          }
          else if (*(long *)param_2[1] == 0) {
            pauVar13 = (undefined1 (*) [16])&ppuStack_660;
            uStack_640 = *(undefined8 *)*param_2;
            uStack_638 = *(undefined8 *)(*param_2 + 8);
            pauStack_648 = pauVar11;
          }
          else {
            pauVar13 = (undefined1 (*) [16])&ppuStack_630;
            pauStack_618 = pauVar11;
            pauStack_610 = param_2;
          }
        }
        iVar12 = iStack_688 - iStack_690;
        iVar18 = iStack_684 - iStack_68c;
        if (iVar18 != 0 || iVar12 != 0) {
          if ((iVar12 >= 3 && iVar18 != 2) && (iVar12 < 3 || 1 < iVar18)) {
            func_0x00010839e124(*(undefined8 *)(*(long *)*pauVar13 + 0x10));
            (**(code **)(*(long *)*pauVar13 + 0x28))
                      (pauVar13,iStack_690,iStack_68c + 1,1,iVar18 + -2);
            (**(code **)(*(long *)*pauVar13 + 0x28))
                      (pauVar13,iStack_688 + -1,iStack_68c + 1,1,iVar18 + -2);
            func_0x00010839e124(*(undefined8 *)(*(long *)*pauVar13 + 0x10));
          }
          else {
            (**(code **)(*(long *)*pauVar13 + 0x28))(pauVar13,iStack_690,iStack_68c,iVar12,iVar18);
          }
        }
      }
      FUN_10839c3dc(&ppuStack_678);
      func_0x00010834950c(&uStack_608);
      return;
    }
    param_2 = &auStack_120;
    pauVar13 = (undefined1 (*) [16])&uStack_80;
    uVar6 = param_1;
    FUN_10835de90();
    if ((uVar6 & 1) != 0) {
      if (param_3 != (undefined1 (*) [16])0x0) {
        iVar18 = (int)&uStack_80;
        param_2 = (undefined1 (*) [16])&uStack_130;
        pauVar13 = (undefined1 (*) [16])&uStack_80;
        FUN_10835de90();
        if (iVar18 == 0) goto LAB_10839c848;
      }
      uVar21 = NEON_fcvtzs(uStack_80,6,4);
      iVar18 = (int)(fStack_78 * 64.0);
      iVar17 = (int)(fStack_74 * 64.0);
      unaff_x22 = param_4;
      pppuVar7 = pppuStack_90;
      pauVar11 = pauStack_88;
      if (param_3 != (undefined1 (*) [16])0x0) {
        aiStack_100[3] = *(int *)(*param_3 + 0xc) << 6;
        aiStack_100[2] = *(int *)(*param_3 + 8) << 6;
        aiStack_100[1] = *(int *)(*param_3 + 4) << 6;
        aiStack_100[0] = *(int *)*param_3 << 6;
        iVar22 = SUB84(uVar21,4);
        iVar14 = iVar18;
        aiStack_110._0_8_ = uVar21;
        if (iVar18 < (int)uVar21) {
          aiStack_110[1] = iVar22;
          aiStack_110[0] = iVar18;
          iVar14 = (int)uVar21;
        }
        iVar16 = iVar17;
        if (iVar17 < iVar22) {
          aiStack_110[1] = iVar17;
          iVar16 = iVar22;
        }
        aiStack_110[3] = iVar16 + 0x40;
        aiStack_110[2] = iVar14 + 0x40;
        uVar6 = 0;
        param_2 = (undefined1 (*) [16])aiStack_100;
        uStack_140 = uVar21;
        FUN_10821a044();
        if ((uVar6 & 1) == 0) goto LAB_10839c848;
        lVar15 = *(long *)param_3[1];
        if (lVar15 == 0) {
          uVar6 = 0;
          param_2 = (undefined1 (*) [16])aiStack_110;
          func_0x000108219544();
          uVar21 = uStack_140;
          pppuVar7 = pppuStack_90;
          pauVar11 = pauStack_88;
          if ((uVar6 & 1) != 0) goto LAB_10839c768;
          lVar15 = *(long *)param_3[1];
        }
        uVar21 = uStack_140;
        if (lVar15 == -1) {
          unaff_x22 = &ppuStack_f0;
          pppuVar7 = pppuStack_90;
          pauVar11 = pauStack_88;
        }
        else {
          unaff_x22 = pppuStack_150;
          pppuVar7 = param_4;
          pauVar11 = param_3;
          if (lVar15 == 0) {
            uStack_b8 = *(undefined8 *)*param_3;
            uStack_b0 = *(undefined8 *)(*param_3 + 8);
            unaff_x22 = pppuStack_148;
            pppuStack_c0 = param_4;
            pppuVar7 = pppuStack_90;
            pauVar11 = pauStack_88;
          }
        }
      }
LAB_10839c768:
      pauStack_88 = pauVar11;
      pppuStack_90 = pppuVar7;
      uVar3 = iVar18 - (int)uVar21;
      uVar2 = iVar17 - SUB84(uVar21,4);
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 < uVar1) {
        bVar5 = (int)uVar21 == iVar18;
        func_0x00010839e158();
        if (!bVar5) {
          lVar15 = 0;
          if ((long)extraout_w8 != 0) {
            lVar15 = (long)(-(extraout_x9 >> 0x1f & 1) & 0xffff000000000000 |
                           (extraout_x9 & 0xffffffff) << 0x10) / (long)extraout_w8;
          }
          func_0x00010839df7c(lVar15);
          do {
            pauVar13 = (undefined1 (*) [16])(ulong)(uint)(iVar18 >> 0x10);
            param_2 = unaff_x23;
            (*(code *)(*unaff_x22)[2])(unaff_x22,unaff_x23,pauVar13,1);
            iVar18 = iVar18 + iVar17;
            uVar1 = (int)unaff_x23 + 1;
            unaff_x23 = (undefined1 (*) [16])(ulong)uVar1;
          } while ((int)uVar1 < extraout_w13 >> 6);
        }
      }
      else {
        bVar5 = SUB84(uVar21,4) == iVar17;
        func_0x00010839e158();
        if (!bVar5) {
          lVar15 = 0;
          if ((long)extraout_w9 != 0) {
            lVar15 = (long)(-(extraout_x8_00 >> 0x1f & 1) & 0xffff000000000000 |
                           (extraout_x8_00 & 0xffffffff) << 0x10) / (long)extraout_w9;
          }
          func_0x00010839df7c(lVar15);
          do {
            param_2 = (undefined1 (*) [16])(ulong)(uint)(iVar18 >> 0x10);
            pauVar13 = unaff_x23;
            (*(code *)(*unaff_x22)[2])(unaff_x22,param_2,unaff_x23,1);
            iVar18 = iVar18 + iVar17;
            uVar1 = (int)unaff_x23 + 1;
            unaff_x23 = (undefined1 (*) [16])(ulong)uVar1;
          } while ((int)uVar1 < extraout_w13_00 >> 6);
        }
      }
    }
LAB_10839c848:
    uVar19 = uVar19 + 1;
  } while( true );
}



/* Entry: 10839c8a4; end: 10839cb1b;  */

void FUN_10839c8a4(undefined8 *param_1,undefined8 *param_2,undefined ***param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x9;
  undefined ***pppuVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined **ppuStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined **ppuStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined ***pppuStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined **ppuStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined ***pppuStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined ***pppuStack_38;
  
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_490 = 0;
  puVar3 = param_2;
  func_0x00010839e088(0xffffffffffffffff);
  lStack_4a0 = extraout_x9 + 0x10;
  uStack_478 = 0;
  uStack_470 = 0;
  func_0x00010839e07c(&uStack_4b8);
  uStack_48 = 0;
  ppuStack_528 = &PTR_DAT_110a3d3a8;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_518 = 0;
  ppuStack_510 = &PTR_FUN_110a3d208;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  uStack_4d0 = 0;
  ppuStack_4e0 = &PTR_DAT_110a3d290;
  uStack_4d8 = 0;
  uVar7 = NEON_fminnm(CONCAT44((int)(*(float *)(param_1 + 1) + 1.0),(int)(float)*param_1),
                      0x4effffff4effffff,4);
  uVar8 = NEON_fmaxnm(uVar7,0xceffffffceffffff,4);
  uVar7 = NEON_fminnm(CONCAT44((int)(*(float *)((long)param_1 + 0xc) + 1.0),
                               (int)(float)((ulong)*param_1 >> 0x20)),0x4effffff4effffff,4);
  uVar7 = NEON_fmaxnm(uVar7,0xceffffffceffffff,4);
  iVar5 = (int)(float)uVar7;
  iVar6 = (int)(float)((ulong)uVar7 >> 0x20);
  uStack_540 = CONCAT17((char)((uint)iVar5 >> 0x18),
                        CONCAT16((char)((uint)iVar5 >> 0x10),
                                 CONCAT15((char)((uint)iVar5 >> 8),
                                          CONCAT14((char)iVar5,(int)(float)uVar8))));
  uStack_538 = CONCAT17((char)((uint)iVar6 >> 0x18),
                        CONCAT16((char)((uint)iVar6 >> 0x10),
                                 CONCAT15((char)((uint)iVar6 >> 8),
                                          CONCAT14((char)iVar6,(int)(float)((ulong)uVar8 >> 0x20))))
                       );
  lVar1 = 0;
  if (*(char *)(puVar3 + 6) == '\0') {
    lVar1 = 0x18;
  }
  lVar1 = (long)puVar3 + lVar1;
  func_0x00010839dfb8();
  puVar2 = &uStack_540;
  lStack_550 = lVar1;
  puStack_548 = puVar3;
  func_0x00010821b838(puVar2,&lStack_550);
  if ((((ulong)puVar2 & 1) != 0) &&
     (puVar3 = param_2, FUN_108349328(param_2,&uStack_540), ((ulong)puVar3 & 1) == 0)) {
    puVar3 = param_2;
    FUN_108349534(param_2,&uStack_540);
    if ((((ulong)puVar3 & 1) == 0) &&
       ((pppuVar4 = param_3, (*(byte *)(param_2 + 6) & 1) != 0 ||
        (FUN_108387754(&uStack_4b8,param_2,param_3), param_3 = pppuStack_38, pppuVar4 = pppuStack_38
        , param_2 = puStack_40, puStack_40 != (undefined8 *)0x0)))) {
      if (param_2[2] == -1) {
        param_3 = &ppuStack_528;
      }
      else if (param_2[2] == 0) {
        pppuStack_4f8 = pppuVar4;
        param_3 = &ppuStack_510;
        uStack_4e8 = param_2[1];
        uStack_4f0 = *param_2;
      }
      else {
        param_3 = &ppuStack_4e0;
        pppuStack_4c8 = pppuVar4;
        puStack_4c0 = param_2;
      }
    }
    iVar5 = (int)uStack_538 - (int)uStack_540;
    iVar6 = uStack_538._4_4_ - uStack_540._4_4_;
    if (iVar6 != 0 || iVar5 != 0) {
      if ((iVar5 >= 3 && iVar6 != 2) && (iVar5 < 3 || 1 < iVar6)) {
        func_0x00010839e124((*param_3)[2]);
        (*(code *)(*param_3)[5])(param_3,uStack_540 & 0xffffffff,uStack_540._4_4_ + 1,1,iVar6 + -2);
        (*(code *)(*param_3)[5])(param_3,(int)uStack_538 + -1,uStack_540._4_4_ + 1,1,iVar6 + -2);
        func_0x00010839e124((*param_3)[2]);
      }
      else {
        (*(code *)(*param_3)[5])(param_3,uStack_540 & 0xffffffff,uStack_540._4_4_,iVar5,iVar6);
      }
    }
  }
  FUN_10839c3dc(&ppuStack_528);
  func_0x00010834950c(&uStack_4b8);
  return;
}



/* Entry: 10839cb1c; end: 10839cb27;  */

void FUN_10839cb1c(undefined1 *param_1,undefined1 (*param_2) [16],undefined1 *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 (*unaff_x21) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  byte *unaff_x25;
  undefined1 *unaff_x26;
  long *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(byte **)(puVar3 + -0x60) = unaff_x28;
    *(long **)(puVar3 + -0x58) = unaff_x27;
    *(undefined1 **)(puVar3 + -0x50) = unaff_x26;
    *(byte **)(puVar3 + -0x48) = unaff_x25;
    *(undefined1 **)(puVar3 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar3 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])(puVar3 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])(puVar3 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    func_0x00010839deb8();
    func_0x00010839e0b0();
    unaff_x19 = param_1;
    if (extraout_w8 != 0) {
      *(undefined8 *)(puVar3 + -0x518) = 0;
      *(undefined8 *)(puVar3 + -0x510) = 0;
      *(undefined8 *)(puVar3 + -0x4f8) = 0;
      *(undefined8 *)(puVar3 + -0x4f0) = 0;
      puVar4 = param_1;
      pauVar5 = param_2;
      puVar6 = param_3;
      func_0x00010839e088(0xffffffffffffffff);
      *(undefined8 *)(puVar3 + -0x508) = extraout_x8;
      *(long *)(puVar3 + -0x500) = extraout_x9 + 0x10;
      *(undefined8 *)(puVar3 + -0x4d8) = 0;
      *(undefined8 *)(puVar3 + -0x4d0) = 0;
      func_0x00010839e07c(puVar3 + -0x518);
      *(undefined8 *)(puVar3 + -0x4b8) = extraout_x8_00;
      *(undefined8 *)(puVar3 + -0x4b0) = extraout_x9_00;
      *(undefined8 *)(puVar3 + -0xa8) = 0;
      *(undefined8 *)(puVar3 + -0x530) = 0;
      *(undefined8 *)(puVar3 + -0x528) = 0;
      *(undefined8 *)(puVar3 + -0x540) = 0;
      *(undefined8 *)(puVar3 + -0x538) = 0;
      func_0x0001083773e0();
      func_0x00010812f180();
      *(undefined1 **)(puVar3 + -0x90) = puVar4;
      *(undefined1 (**) [16])(puVar3 + -0x88) = pauVar5;
      puVar4 = puVar3 + -0x90;
      func_0x00010839dfb8();
      *(undefined1 **)(puVar3 + -0x5f0) = puVar4;
      *(undefined1 (**) [16])(puVar3 + -0x5e8) = pauVar5;
      pauVar5 = (undefined1 (*) [16])(puVar3 + -0x5f0);
      func_0x00010839e13c();
      unaff_x20 = param_3;
      unaff_x22 = param_2;
      if (((ulong)puVar4 & 1) == 0) {
        pauVar5 = (undefined1 (*) [16])(puVar3 + -0x5f0);
        func_0x00010839e008();
        if (((ulong)puVar4 & 1) == 0) {
          unaff_x21 = param_2;
          if ((*(long *)param_2[3] & 1) == 0) {
            func_0x00010839dfc4(puVar3 + -0x518);
            param_3 = *(undefined1 **)(puVar3 + -0x98);
            unaff_x21 = *(undefined1 (**) [16])(puVar3 + -0xa0);
          }
          auVar7 = NEON_scvtf(*unaff_x21,4);
          *(ulong *)(puVar3 + -0x538) = CONCAT44(auVar7._12_4_ + 1.0,auVar7._8_4_ + 1.0);
          *(ulong *)(puVar3 + -0x540) = CONCAT44(auVar7._4_4_ + -1.0,auVar7._0_4_ + -1.0);
          *(float *)(puVar3 + -0x528) = auVar7._8_4_ + -1.0;
          *(float *)(puVar3 + -0x524) = auVar7._12_4_ + -1.0;
          *(float *)(puVar3 + -0x530) = auVar7._0_4_ + 1.0;
          *(float *)(puVar3 + -0x52c) = auVar7._4_4_ + 1.0;
          func_0x00010839df64();
          if ((extraout_x8_01 & 1) != 0) {
            *(undefined8 *)(puVar3 + -0x530) = 0;
            *(undefined8 *)(puVar3 + -0x528) = 0;
          }
          unaff_x23 = puVar3 + -0x530;
          if (*(char *)((long)param_2[3] + 2) == '\0') {
            unaff_x23 = (undefined1 *)0x0;
          }
          param_2 = (undefined1 (*) [16])(puVar3 + -0x540);
        }
        else {
          func_0x00010839e0c0();
        }
        func_0x00010839e118();
        unaff_x28 = *(byte **)(puVar3 + -0x5f0);
        *(byte **)(puVar3 + -0x558) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x548) = *(undefined8 *)(puVar3 + -0x5d8);
        *(undefined8 *)(puVar3 + -0x550) = *(undefined8 *)(puVar3 + -0x5e0);
        unaff_x26 = puVar3 + -0x5f0;
        func_0x00010839e118();
        unaff_x25 = *(byte **)(puVar3 + -0x5e8);
        *(undefined1 **)(puVar3 + -0x5f0) = puVar3 + -0x5e8;
        *(undefined4 *)(puVar3 + -0x560) = 0;
        while (in_ZR = unaff_x28 == unaff_x25, !(bool)in_ZR) {
          unaff_x27 = *(long **)(puVar3 + -0x550);
          unaff_x26 = *(undefined1 **)(puVar3 + -0x548);
          func_0x0001081e8ec8(puVar3 + -0x558);
          bVar1 = *unaff_x28;
          if (4 < bVar1 - 1) {
            if (bVar1 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10839cd9c);
              (*pcVar2)();
            }
            param_1 = (undefined1 *)*unaff_x27;
            *(undefined1 **)(puVar3 + -0x90) = param_1;
            *(undefined1 **)(puVar3 + -0x5f8) = param_1;
            goto LAB_10839cd68;
          }
          pauVar5 = (undefined1 (*) [16])(unaff_x27 + -1);
          puVar6 = (undefined1 *)((ulong)(byte)(&UNK_10df18dec)[bVar1] << 3);
          _memcpy(puVar3 + -0x90);
          switch(bVar1) {
          case 1:
            func_0x00010839dfe8();
            func_0x00010839dfdc();
            param_1 = *(undefined1 **)(puVar3 + -0x88);
            break;
          case 2:
            FUN_10839e1b8(puVar3 + -0x90);
            func_0x00010839de7c();
            func_0x00010839e130();
            goto code_r0x00010839cd64;
          case 3:
            puVar4 = puVar3 + -0x5f0;
            func_0x00010839dfd0(puVar4);
            for (unaff_x26 = (undefined1 *)0x0; (int)unaff_x26 < *(int *)(puVar3 + -0x560);
                unaff_x26 = (undefined1 *)(ulong)((int)unaff_x26 + 1)) {
              FUN_10839e1b8(puVar4);
              pauVar5 = unaff_x21;
              puVar6 = unaff_x23;
              func_0x00010839e130(puVar4,unaff_x21,unaff_x23,param_2);
              puVar4 = puVar4 + 0x10;
            }
code_r0x00010839cd64:
            param_1 = *(undefined1 **)(puVar3 + -0x80);
            break;
          case 4:
            func_0x00010839de7c();
            FUN_10839d804();
            param_1 = *(undefined1 **)(puVar3 + -0x78);
            break;
          case 5:
            *(undefined1 **)(puVar3 + -0x90) = param_1;
            *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x5f8);
            func_0x00010839dfe8();
            func_0x00010839dfdc();
          }
LAB_10839cd68:
          unaff_x28 = *(byte **)(puVar3 + -0x558);
        }
        FUN_1082d2744(puVar3 + -0x5f0);
        unaff_x20 = param_3;
        unaff_x22 = param_2;
      }
      unaff_x19 = puVar3 + -0x518;
      func_0x00010834950c();
      param_2 = pauVar5;
      param_3 = puVar6;
      unaff_x24 = param_1;
    }
    func_0x00010839de28(*(undefined8 *)(puVar3 + -0x70));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_1 = puVar3 + -0x518;
    func_0x00010834950c();
    unaff_x30 = FUN_10839cdd8;
    func_0x00010839dfb0();
    puVar3 = puVar3 + -0x600;
  } while( true );
}



/* Entry: 10839cb28; end: 10839cdd7;  */

void FUN_10839cb28(undefined1 *param_1,undefined1 (*param_2) [16],undefined1 *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 (*unaff_x21) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  byte *unaff_x25;
  undefined1 *unaff_x26;
  long *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar6 [16];
  
  do {
    *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010839deb8();
    func_0x00010839e0b0();
    unaff_x19 = param_1;
    if (extraout_w8 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x518) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x510) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4f8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4f0) = 0;
      puVar3 = param_1;
      pauVar4 = param_2;
      puVar5 = param_3;
      func_0x00010839e088(0xffffffffffffffff);
      *(undefined8 *)((long)register0x00000008 + -0x508) = extraout_x8;
      *(long *)((long)register0x00000008 + -0x500) = extraout_x9 + 0x10;
      *(undefined8 *)((long)register0x00000008 + -0x4d8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4d0) = 0;
      func_0x00010839e07c((undefined1 *)((long)register0x00000008 + -0x518));
      *(undefined8 *)((long)register0x00000008 + -0x4b8) = extraout_x8_00;
      *(undefined8 *)((long)register0x00000008 + -0x4b0) = extraout_x9_00;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x540) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
      func_0x0001083773e0();
      func_0x00010812f180();
      *(undefined1 **)((long)register0x00000008 + -0x90) = puVar3;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x88) = pauVar4;
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
      func_0x00010839dfb8();
      *(undefined1 **)((long)register0x00000008 + -0x5f0) = puVar3;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x5e8) = pauVar4;
      pauVar4 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
      func_0x00010839e13c();
      unaff_x20 = param_3;
      unaff_x22 = param_2;
      if (((ulong)puVar3 & 1) == 0) {
        pauVar4 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
        func_0x00010839e008();
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x21 = param_2;
          if ((*(long *)param_2[3] & 1) == 0) {
            func_0x00010839dfc4((undefined1 *)((long)register0x00000008 + -0x518));
            param_3 = *(undefined1 **)((long)register0x00000008 + -0x98);
            unaff_x21 = *(undefined1 (**) [16])((long)register0x00000008 + -0xa0);
          }
          auVar6 = NEON_scvtf(*unaff_x21,4);
          *(ulong *)((long)register0x00000008 + -0x538) =
               CONCAT44(auVar6._12_4_ + 1.0,auVar6._8_4_ + 1.0);
          *(ulong *)((long)register0x00000008 + -0x540) =
               CONCAT44(auVar6._4_4_ + -1.0,auVar6._0_4_ + -1.0);
          *(float *)((long)register0x00000008 + -0x528) = auVar6._8_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x524) = auVar6._12_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x530) = auVar6._0_4_ + 1.0;
          *(float *)((long)register0x00000008 + -0x52c) = auVar6._4_4_ + 1.0;
          func_0x00010839df64();
          if ((extraout_x8_01 & 1) != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
          }
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x530);
          if (*(char *)((long)param_2[3] + 2) == '\0') {
            unaff_x23 = (undefined1 *)0x0;
          }
          param_2 = (undefined1 (*) [16])((long)register0x00000008 + -0x540);
        }
        else {
          func_0x00010839e0c0();
        }
        func_0x00010839e118();
        unaff_x28 = *(byte **)((long)register0x00000008 + -0x5f0);
        *(byte **)((long)register0x00000008 + -0x558) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x548) =
             *(undefined8 *)((long)register0x00000008 + -0x5d8);
        *(undefined8 *)((long)register0x00000008 + -0x550) =
             *(undefined8 *)((long)register0x00000008 + -0x5e0);
        unaff_x26 = (undefined1 *)((long)register0x00000008 + -0x5f0);
        func_0x00010839e118();
        unaff_x25 = *(byte **)((long)register0x00000008 + -0x5e8);
        *(undefined1 **)((long)register0x00000008 + -0x5f0) =
             (undefined1 *)((long)register0x00000008 + -0x5e8);
        *(undefined4 *)((long)register0x00000008 + -0x560) = 0;
        while (in_ZR = unaff_x28 == unaff_x25, !(bool)in_ZR) {
          unaff_x27 = *(long **)((long)register0x00000008 + -0x550);
          unaff_x26 = *(undefined1 **)((long)register0x00000008 + -0x548);
          func_0x0001081e8ec8((undefined1 *)((long)register0x00000008 + -0x558));
          bVar1 = *unaff_x28;
          if (4 < bVar1 - 1) {
            if (bVar1 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10839cd9c);
              (*pcVar2)();
            }
            param_1 = (undefined1 *)*unaff_x27;
            *(undefined1 **)((long)register0x00000008 + -0x90) = param_1;
            *(undefined1 **)((long)register0x00000008 + -0x5f8) = param_1;
            goto LAB_10839cd68;
          }
          pauVar4 = (undefined1 (*) [16])(unaff_x27 + -1);
          puVar5 = (undefined1 *)((ulong)(byte)(&UNK_10df18dec)[bVar1] << 3);
          _memcpy((undefined1 *)((long)register0x00000008 + -0x90));
          switch(bVar1) {
          case 1:
            func_0x00010839dfe8();
            func_0x00010839dfdc();
            param_1 = *(undefined1 **)((long)register0x00000008 + -0x88);
            break;
          case 2:
            FUN_10839e1b8((undefined1 *)((long)register0x00000008 + -0x90));
            func_0x00010839de7c();
            func_0x00010839e130();
            goto code_r0x00010839cd64;
          case 3:
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x5f0);
            func_0x00010839dfd0(puVar3);
            for (unaff_x26 = (undefined1 *)0x0;
                (int)unaff_x26 < *(int *)((long)register0x00000008 + -0x560);
                unaff_x26 = (undefined1 *)(ulong)((int)unaff_x26 + 1)) {
              FUN_10839e1b8(puVar3);
              pauVar4 = unaff_x21;
              puVar5 = unaff_x23;
              func_0x00010839e130(puVar3,unaff_x21,unaff_x23,param_2);
              puVar3 = puVar3 + 0x10;
            }
code_r0x00010839cd64:
            param_1 = *(undefined1 **)((long)register0x00000008 + -0x80);
            break;
          case 4:
            func_0x00010839de7c();
            FUN_10839d804();
            param_1 = *(undefined1 **)((long)register0x00000008 + -0x78);
            break;
          case 5:
            *(undefined1 **)((long)register0x00000008 + -0x90) = param_1;
            *(undefined8 *)((long)register0x00000008 + -0x88) =
                 *(undefined8 *)((long)register0x00000008 + -0x5f8);
            func_0x00010839dfe8();
            func_0x00010839dfdc();
          }
LAB_10839cd68:
          unaff_x28 = *(byte **)((long)register0x00000008 + -0x558);
        }
        FUN_1082d2744((undefined1 *)((long)register0x00000008 + -0x5f0));
        unaff_x20 = param_3;
        unaff_x22 = param_2;
      }
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x518);
      func_0x00010834950c();
      param_2 = pauVar4;
      param_3 = puVar5;
      unaff_x24 = param_1;
    }
    func_0x00010839de28(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x518);
    func_0x00010834950c();
    unaff_x30 = FUN_10839cdd8;
    func_0x00010839dfb0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x600);
  } while( true );
}



/* Entry: 10839cdd8; end: 10839cdef;  */

void FUN_10839cdd8(undefined1 *param_1,undefined1 (*param_2) [16],undefined1 *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 (*unaff_x21) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  byte *unaff_x25;
  undefined1 *unaff_x26;
  long *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar6 [16];
  
  do {
    *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010839deb8();
    func_0x00010839e0b0();
    unaff_x19 = param_1;
    if (extraout_w8 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x518) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x510) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4f8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4f0) = 0;
      puVar3 = param_1;
      pauVar4 = param_2;
      puVar5 = param_3;
      func_0x00010839e088(0xffffffffffffffff);
      *(undefined8 *)((long)register0x00000008 + -0x508) = extraout_x8;
      *(long *)((long)register0x00000008 + -0x500) = extraout_x9 + 0x10;
      *(undefined8 *)((long)register0x00000008 + -0x4d8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4d0) = 0;
      func_0x00010839e07c((undefined1 *)((long)register0x00000008 + -0x518));
      *(undefined8 *)((long)register0x00000008 + -0x4b8) = extraout_x8_00;
      *(undefined8 *)((long)register0x00000008 + -0x4b0) = extraout_x9_00;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x540) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
      func_0x0001083773e0();
      func_0x00010812f180();
      *(undefined1 **)((long)register0x00000008 + -0x90) = puVar3;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x88) = pauVar4;
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
      func_0x00010839dfb8();
      *(undefined1 **)((long)register0x00000008 + -0x5f0) = puVar3;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x5e8) = pauVar4;
      pauVar4 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
      func_0x00010839e13c();
      unaff_x20 = param_3;
      unaff_x22 = param_2;
      if (((ulong)puVar3 & 1) == 0) {
        pauVar4 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
        func_0x00010839e008();
        if (((ulong)puVar3 & 1) == 0) {
          unaff_x21 = param_2;
          if ((*(long *)param_2[3] & 1) == 0) {
            func_0x00010839dfc4((undefined1 *)((long)register0x00000008 + -0x518));
            param_3 = *(undefined1 **)((long)register0x00000008 + -0x98);
            unaff_x21 = *(undefined1 (**) [16])((long)register0x00000008 + -0xa0);
          }
          auVar6 = NEON_scvtf(*unaff_x21,4);
          *(ulong *)((long)register0x00000008 + -0x538) =
               CONCAT44(auVar6._12_4_ + 1.0,auVar6._8_4_ + 1.0);
          *(ulong *)((long)register0x00000008 + -0x540) =
               CONCAT44(auVar6._4_4_ + -1.0,auVar6._0_4_ + -1.0);
          *(float *)((long)register0x00000008 + -0x528) = auVar6._8_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x524) = auVar6._12_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x530) = auVar6._0_4_ + 1.0;
          *(float *)((long)register0x00000008 + -0x52c) = auVar6._4_4_ + 1.0;
          func_0x00010839df64();
          if ((extraout_x8_01 & 1) != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
          }
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x530);
          if (*(char *)((long)param_2[3] + 2) == '\0') {
            unaff_x23 = (undefined1 *)0x0;
          }
          param_2 = (undefined1 (*) [16])((long)register0x00000008 + -0x540);
        }
        else {
          func_0x00010839e0c0();
        }
        func_0x00010839e118();
        unaff_x28 = *(byte **)((long)register0x00000008 + -0x5f0);
        *(byte **)((long)register0x00000008 + -0x558) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x548) =
             *(undefined8 *)((long)register0x00000008 + -0x5d8);
        *(undefined8 *)((long)register0x00000008 + -0x550) =
             *(undefined8 *)((long)register0x00000008 + -0x5e0);
        unaff_x26 = (undefined1 *)((long)register0x00000008 + -0x5f0);
        func_0x00010839e118();
        unaff_x25 = *(byte **)((long)register0x00000008 + -0x5e8);
        *(undefined1 **)((long)register0x00000008 + -0x5f0) =
             (undefined1 *)((long)register0x00000008 + -0x5e8);
        *(undefined4 *)((long)register0x00000008 + -0x560) = 0;
        while (in_ZR = unaff_x28 == unaff_x25, !(bool)in_ZR) {
          unaff_x27 = *(long **)((long)register0x00000008 + -0x550);
          unaff_x26 = *(undefined1 **)((long)register0x00000008 + -0x548);
          func_0x0001081e8ec8((undefined1 *)((long)register0x00000008 + -0x558));
          bVar1 = *unaff_x28;
          if (4 < bVar1 - 1) {
            if (bVar1 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10839cd9c);
              (*pcVar2)();
            }
            param_1 = (undefined1 *)*unaff_x27;
            *(undefined1 **)((long)register0x00000008 + -0x90) = param_1;
            *(undefined1 **)((long)register0x00000008 + -0x5f8) = param_1;
            goto LAB_10839cd68;
          }
          pauVar4 = (undefined1 (*) [16])(unaff_x27 + -1);
          puVar5 = (undefined1 *)((ulong)(byte)(&UNK_10df18dec)[bVar1] << 3);
          _memcpy((undefined1 *)((long)register0x00000008 + -0x90));
          switch(bVar1) {
          case 1:
            func_0x00010839dfe8();
            func_0x00010839dfdc();
            param_1 = *(undefined1 **)((long)register0x00000008 + -0x88);
            break;
          case 2:
            FUN_10839e1b8((undefined1 *)((long)register0x00000008 + -0x90));
            func_0x00010839de7c();
            func_0x00010839e130();
            goto code_r0x00010839cd64;
          case 3:
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x5f0);
            func_0x00010839dfd0(puVar3);
            for (unaff_x26 = (undefined1 *)0x0;
                (int)unaff_x26 < *(int *)((long)register0x00000008 + -0x560);
                unaff_x26 = (undefined1 *)(ulong)((int)unaff_x26 + 1)) {
              FUN_10839e1b8(puVar3);
              pauVar4 = unaff_x21;
              puVar5 = unaff_x23;
              func_0x00010839e130(puVar3,unaff_x21,unaff_x23,param_2);
              puVar3 = puVar3 + 0x10;
            }
code_r0x00010839cd64:
            param_1 = *(undefined1 **)((long)register0x00000008 + -0x80);
            break;
          case 4:
            func_0x00010839de7c();
            FUN_10839d804();
            param_1 = *(undefined1 **)((long)register0x00000008 + -0x78);
            break;
          case 5:
            *(undefined1 **)((long)register0x00000008 + -0x90) = param_1;
            *(undefined8 *)((long)register0x00000008 + -0x88) =
                 *(undefined8 *)((long)register0x00000008 + -0x5f8);
            func_0x00010839dfe8();
            func_0x00010839dfdc();
          }
LAB_10839cd68:
          unaff_x28 = *(byte **)((long)register0x00000008 + -0x558);
        }
        FUN_1082d2744((undefined1 *)((long)register0x00000008 + -0x5f0));
        unaff_x20 = param_3;
        unaff_x22 = param_2;
      }
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x518);
      func_0x00010834950c();
      param_2 = pauVar4;
      param_3 = puVar5;
      unaff_x24 = param_1;
    }
    func_0x00010839de28(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x518);
    func_0x00010834950c();
    unaff_x30 = FUN_10839cdd8;
    func_0x00010839dfb0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x600);
  } while( true );
}



/* Entry: 10839cdf0; end: 10839d083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_10839cdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
             float param_6,float param_7,undefined1 (*param_8) [16],undefined1 (*param_9) [16],
             undefined1 (*param_10) [16],code *param_11)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 (*pauVar29) [16];
  bool bVar30;
  undefined1 in_ZR;
  undefined1 uVar31;
  uint uVar32;
  int iVar33;
  undefined1 (*pauVar34) [16];
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  byte *pbVar35;
  undefined8 uVar36;
  undefined1 (*extraout_x8_01) [16];
  undefined1 (*pauVar37) [16];
  ulong extraout_x8_02;
  undefined1 (*unaff_x19) [16];
  undefined1 (*pauVar38) [16];
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x21) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  ulong unaff_x24;
  byte *unaff_x25;
  ulong uVar39;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined1 (*unaff_x28) [16];
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar40;
  undefined1 auVar41 [16];
  undefined8 extraout_var;
  float fVar42;
  ulong uVar43;
  undefined8 uVar44;
  float fVar45;
  ulong uVar46;
  undefined8 in_register_00005048;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  
  do {
    *(undefined1 (**) [16])((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    pauVar29 = (undefined1 (*) [16])((long)register0x00000008 + -0x610);
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x610);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x610);
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x610);
    *(undefined1 (**) [16])((long)register0x00000008 + -0x5f8) = param_10;
    func_0x00010839deb8();
    func_0x00010839e0b0();
    uVar39 = unaff_x24;
    if (extraout_w8 != 0) {
      func_0x00010839def0();
      func_0x0001083773e0();
      func_0x00010812f180();
      *(undefined1 (**) [16])((long)register0x00000008 + -0x90) = param_8;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x88) = param_9;
      func_0x00010839dfe8();
      param_10 = (undefined1 (*) [16])0x2;
      FUN_1082873f8();
      *(undefined1 (**) [16])((long)register0x00000008 + -0x5f0) = param_8;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x5e8) = param_9;
      param_9 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
      func_0x00010839e13c();
      if (((ulong)param_8 & 1) == 0) {
        param_9 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
        func_0x00010839e008();
        if (((ulong)param_8 & 1) == 0) {
          unaff_x21 = unaff_x22;
          if ((unaff_x22[3][0] & 1) == 0) {
            func_0x00010839e06c();
            *(undefined8 *)((long)register0x00000008 + -0x5f8) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            unaff_x21 = *(undefined1 (**) [16])((long)register0x00000008 + -0xa0);
          }
          auVar41 = NEON_scvtf(*unaff_x21,4);
          param_3 = CONCAT44(auVar41._4_4_ + -1.0,auVar41._0_4_ + -1.0);
          in_register_00005048 = CONCAT44(auVar41._12_4_ + 1.0,auVar41._8_4_ + 1.0);
          param_2 = 0x3f8000003f800000;
          *(undefined8 *)((long)register0x00000008 + -0x538) = in_register_00005048;
          *(undefined8 *)((long)register0x00000008 + -0x540) = param_3;
          *(float *)((long)register0x00000008 + -0x528) = auVar41._8_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x524) = auVar41._12_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x530) = auVar41._0_4_ + 1.0;
          *(float *)((long)register0x00000008 + -0x52c) = auVar41._4_4_ + 1.0;
          func_0x00010839df64();
          if ((extraout_x8_00 & 1) != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
          }
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x530);
          if ((code)unaff_x22[3][2] == (code)0x0) {
            unaff_x23 = (undefined1 *)0x0;
          }
          unaff_x22 = (undefined1 (*) [16])((long)register0x00000008 + -0x540);
        }
        else {
          func_0x00010839e0c0();
        }
        func_0x00010839dee4();
        func_0x00010839e180();
        func_0x00010839dee4();
        func_0x00010839e040();
        uVar39 = unaff_x27;
        while( true ) {
          unaff_x25 = *(byte **)((long)register0x00000008 + -0x558);
          in_ZR = unaff_x25 == *(byte **)((long)register0x00000008 + -0x600);
          if ((bool)in_ZR) break;
          unaff_x26 = *(ulong *)((long)register0x00000008 + -0x548);
          param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x558);
          func_0x0001081e8ec8();
          bVar1 = *unaff_x25;
          unaff_x27 = (ulong)bVar1;
          if (5 < bVar1) {
LAB_10839d04c:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10839d050);
            (*pcVar8)();
          }
          pbVar35 = *(byte **)((long)register0x00000008 + -0x558);
          uVar31 = *(byte **)((long)register0x00000008 + -0x600) <= pbVar35;
          in_ZR = pbVar35 == *(byte **)((long)register0x00000008 + -0x600);
          if ((bool)in_ZR) {
            unaff_x25 = (byte *)0x6;
          }
          else {
            unaff_x25 = (byte *)(ulong)*pbVar35;
          }
          unaff_x30 = (code *)0x10839cf28;
          auVar41._0_8_ = func_0x00010839df3c();
          auVar41._8_8_ = extraout_var;
          pauVar37 = (undefined1 (*) [16])
                     ((ulong)(byte)(&UNK_10df1e755)[unaff_x27] * 4 + 0x10839cf44);
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar13 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar28 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar14 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar15 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar16 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar17 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar18 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar19 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar20 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar21 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar23 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar22 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar27 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar5 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar24 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar26 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar25 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x610);
          unaff_x19 = unaff_x28;
          pauVar34 = unaff_x28;
          switch(bVar1) {
          default:
            unaff_x28 = *(undefined1 (**) [16])((long)register0x00000008 + -0x90);
          case 0x4b:
          case 0x4f:
            *(undefined1 (**) [16])((long)register0x00000008 + -0x608) = unaff_x28;
            goto code_r0x00010839d014;
          case 1:
          case 7:
            func_0x00010839de90();
            param_11 = (code *)0x2;
            FUN_10839dc50();
            func_0x00010839de54();
            uVar36 = *(undefined8 *)((long)register0x00000008 + -0x88);
            break;
          case 2:
          case 8:
            func_0x00010839de90();
            param_11 = (code *)0x3;
            FUN_10839dc50();
            FUN_10839e1b8((undefined1 *)((long)register0x00000008 + -0x90));
            param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x90);
            func_0x00010839de3c();
            goto code_r0x00010839cf90;
          case 3:
          case 9:
            func_0x00010839de90();
            param_11 = (code *)0x3;
            FUN_10839dc50();
            param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
            func_0x00010839dfd0();
            pauVar37 = param_8;
            for (unaff_x26 = 0; (int)unaff_x26 < *(int *)((long)register0x00000008 + -0x560);
                unaff_x26 = (ulong)((int)unaff_x26 + 1)) {
              FUN_10839e1b8(pauVar37);
              param_8 = pauVar37;
              func_0x00010839de3c();
              pauVar37 = pauVar37 + 1;
            }
code_r0x00010839cf90:
            uVar36 = *(undefined8 *)((long)register0x00000008 + -0x80);
            break;
          case 4:
          case 10:
            func_0x00010839de90();
            param_11 = (code *)0x4;
            FUN_10839dc50();
            param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x90);
            func_0x00010839de68();
            FUN_10839d804();
            uVar36 = *(undefined8 *)((long)register0x00000008 + -0x78);
            break;
          case 5:
          case 0xb:
            *(undefined8 *)((long)register0x00000008 + -0x90) =
                 *(undefined8 *)((long)register0x00000008 + -0x608);
            *(undefined1 (**) [16])((long)register0x00000008 + -0x88) = unaff_x28;
            if ((int)uVar39 == 0) goto code_r0x00010839d008;
          case 0xbf:
          case 0xc3:
          case 0xd2:
code_r0x00010839d010:
            func_0x00010839de54();
            goto code_r0x00010839d014;
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x4d:
          case 0x4e:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x57:
            goto code_r0x00010839d340;
          case 0x4c:
          case 0x50:
          case 0x70:
          case 0x78:
            goto code_r0x00010839d244;
          case 0x54:
          case 0x58:
          case 0x7a:
            goto code_r0x00010839d040;
          case 0x5c:
          case 0x60:
          case 100:
          case 0x68:
            goto code_r0x00010839d334;
          case 0x5d:
          case 0x61:
          case 0x65:
          case 0x69:
            goto code_r0x00010839d140;
          case 0x5e:
          case 0x62:
            goto code_r0x00010839d25c;
          case 0x66:
          case 0x6a:
            unaff_x19 = param_8;
            goto code_r0x00010839d068;
          case 0x71:
          case 0x79:
            goto code_r0x00010839d2c4;
          case 0x72:
            goto code_r0x00010839d240;
          case 0x7b:
          case 0x8c:
          case 0x9e:
          case 0xb5:
          case 0xd1:
          case 0xe1:
          case 0xf4:
code_r0x00010839d008:
            func_0x00010839e144();
          case 0x9d:
          case 0xc0:
          case 0xc4:
            FUN_10839dc50();
            goto code_r0x00010839d010;
          case 0x7c:
          case 0x8d:
          case 0xb6:
            goto code_r0x00010839d014;
          case 0x7d:
          case 0x97:
          case 0xa8:
            goto code_r0x00010839d068;
          case 0x7e:
            goto code_r0x00010839d0fc;
          case 0x7f:
            goto LAB_10839d11c;
          case 0x80:
          case 0x83:
          case 0x89:
          case 0x92:
          case 0x9b:
          case 0xa3:
          case 0xac:
          case 0xb2:
          case 0xbc:
          case 0xcd:
          case 0xd8:
          case 0xde:
          case 0xe8:
          case 0xec:
          case 0xed:
          case 0xf2:
          case 0xfb:
          case 0xff:
            goto code_r0x00010839d0d8;
          case 0x81:
          case 0x8a:
          case 0xb3:
          case 0xb9:
          case 0xcc:
          case 0xd7:
          case 0xe7:
          case 0xfa:
            goto LAB_10839d10c;
          case 0x82:
          case 0xb0:
          case 0xdc:
          case 0xdd:
            goto code_r0x00010839d110;
          case 0x84:
            goto LAB_10839d04c;
          case 0x85:
          case 0x96:
          case 0xa7:
          case 0xf1:
            goto code_r0x00010839d0f4;
          case 0x86:
          case 0x94:
          case 0xa5:
          case 0xba:
            goto code_r0x00010839d0e8;
          case 0x87:
          case 0x88:
          case 0xb1:
          case 0xbb:
          case 0xcb:
          case 0xd6:
          case 0xdf:
          case 0xe6:
          case 0xf9:
            goto code_r0x00010839d114;
          case 0x8e:
          case 0x90:
          case 0x9f:
          case 0xa1:
          case 0xb7:
          case 0xc2:
          case 199:
          case 0xca:
          case 0xd3:
          case 0xd5:
          case 0xe3:
          case 0xe5:
          case 0xeb:
          case 0xf6:
          case 0xf8:
            param_11 = FUN_10839c5a0;
            goto FUN_10839d09c;
          case 0x8f:
          case 0xa0:
          case 200:
          case 0xd4:
          case 0xe4:
          case 0xee:
          case 0xf7:
            goto code_r0x00010839d0f0;
          case 0x91:
          case 0xa2:
          case 0xb8:
            goto code_r0x00010839d104;
          case 0x93:
          case 0xa4:
            goto code_r0x00010839d0d0;
          case 0x95:
          case 0x99:
          case 0xa6:
          case 0xaa:
          case 0xaf:
          case 0xce:
          case 0xd9:
          case 0xe9:
          case 0xef:
          case 0xfc:
            goto code_r0x00010839d0c8;
          case 0x98:
          case 0xa9:
          case 0xcf:
          case 0xda:
          case 0xea:
          case 0xfd:
            goto code_r0x00010839d0f8;
          case 0x9a:
          case 0xab:
            goto code_r0x00010839d0e0;
          case 0xad:
          case 0xbd:
          case 0xc1:
            goto code_r0x00010839d0c0;
          case 0xae:
          case 0xfe:
            goto code_r0x00010839d08c;
          case 0xbe:
            goto code_r0x00010839d054;
          case 0xc6:
            goto code_r0x00010839d028;
          case 0xc9:
            goto code_r0x00010839d0a0;
          case 0xdb:
                    /* WARNING: Read-only address (ram,0x00010df1e6c0) is written */
            return param_8;
          case 0xe2:
            goto code_r0x00010839d01c;
          case 0xf0:
            goto code_r0x00010839d0cc;
          case 0xf5:
            goto code_r0x00010839d024;
          }
          *(undefined8 *)((long)register0x00000008 + -0x608) = uVar36;
code_r0x00010839d014:
          uVar31 = 3 < bVar1 - 1;
code_r0x00010839d01c:
          in_ZR = !(bool)uVar31 && (int)uVar39 == 0;
          pauVar37 = *(undefined1 (**) [16])((long)register0x00000008 + -0x90);
          pauVar34 = unaff_x28;
code_r0x00010839d024:
          unaff_x28 = pauVar37;
          if (!(bool)in_ZR) {
            unaff_x28 = pauVar34;
          }
code_r0x00010839d028:
          unaff_x24 = uVar39;
          uVar39 = unaff_x27;
        }
        func_0x00010839e05c();
        unaff_x27 = uVar39;
      }
      func_0x00010839e064();
      uVar39 = unaff_x24;
    }
    func_0x00010839de28(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)in_ZR) {
code_r0x00010839d040:
      return param_8;
                    /* WARNING: Read-only address (ram,0x00010df1e6c0) is written */
    }
    ___stack_chk_fail();
code_r0x00010839d054:
    unaff_x19 = param_8;
code_r0x00010839d068:
    func_0x00010839e064();
    unaff_x30 = FUN_10839d084;
    func_0x00010839dfb0();
    param_11 = FUN_10839aec8;
code_r0x00010839d08c:
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x610);
    unaff_x24 = uVar39;
  } while( true );
code_r0x00010839d244:
  func_0x00010839de90();
  param_11 = (code *)0x3;
  func_0x00010839dd34();
  param_8 = (undefined1 (*) [16])(puVar27 + 0x20);
  func_0x00010839dfd0();
  puVar6 = puVar27;
code_r0x00010839d25c:
  pauVar29 = (undefined1 (*) [16])puVar6;
  pauVar37 = param_8;
  for (unaff_x26 = 0; (int)unaff_x26 < *(int *)((long)pauVar29 + 0xb0);
      unaff_x26 = (ulong)((int)unaff_x26 + 1)) {
    FUN_10839e1b8(pauVar37);
    param_8 = pauVar37;
    func_0x00010839de3c();
    pauVar37 = pauVar37 + 1;
  }
code_r0x00010839d23c:
  pauVar37 = *(undefined1 (**) [16])(unaff_x29 + -0x70);
  puVar4 = *pauVar29;
code_r0x00010839d240:
  pauVar29 = (undefined1 (*) [16])puVar4;
code_r0x00010839d2a0:
  *(undefined1 (**) [16])((long)pauVar29 + 8) = pauVar37;
code_r0x00010839d2c0:
  pauVar37 = (undefined1 (*) [16])(ulong)((int)unaff_x27 - 1);
  puVar5 = *pauVar29;
code_r0x00010839d2c4:
  pauVar29 = (undefined1 (*) [16])puVar5;
  uVar31 = 3 < (uint)pauVar37;
code_r0x00010839d2c8:
  in_ZR = !(bool)uVar31 && (int)uVar39 == 0;
  pauVar37 = *(undefined1 (**) [16])(unaff_x29 + -0x80);
code_r0x00010839d2d0:
  pauVar34 = pauVar37;
  if (!(bool)in_ZR) {
    pauVar34 = unaff_x28;
  }
code_r0x00010839d2d4:
  uVar43 = uVar39;
  uVar39 = unaff_x27;
  unaff_x28 = pauVar34;
code_r0x00010839d184:
  unaff_x25 = *(byte **)((long)pauVar29 + 0xb8);
  in_ZR = unaff_x25 == *(byte **)((long)pauVar29 + 0x10);
  puVar12 = *pauVar29;
  if ((bool)in_ZR) {
    func_0x00010839e05c();
    unaff_x27 = uVar39;
    goto LAB_10839d2dc;
  }
  unaff_x26 = *(ulong *)((long)pauVar29 + 200);
  param_8 = (undefined1 (*) [16])((long)pauVar29 + 0xb8);
  func_0x0001081e8ec8();
  bVar1 = *unaff_x25;
  unaff_x27 = (ulong)bVar1;
  if (5 < bVar1) {
LAB_10839d2f8:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10839d2fc);
    (*pcVar8)();
  }
  pbVar35 = *(byte **)((long)pauVar29 + 0xb8);
  uVar31 = *(byte **)((long)pauVar29 + 0x10) <= pbVar35;
  in_ZR = pbVar35 == *(byte **)((long)pauVar29 + 0x10);
  if ((bool)in_ZR) {
    unaff_x25 = (byte *)0x6;
  }
  else {
    unaff_x25 = (byte *)(ulong)*pbVar35;
  }
  unaff_x30 = (code *)0x10839d1d4;
  fVar40 = (float)func_0x00010839df3c();
  fVar45 = (float)param_3;
  fVar42 = (float)param_2;
  pauVar37 = (undefined1 (*) [16])((ulong)(byte)(&UNK_10df1e75b)[unaff_x27] * 4 + 0x10839d1f0);
  puVar28 = *pauVar29;
  puVar27 = *pauVar29;
  pauVar38 = unaff_x28;
  pauVar34 = unaff_x28;
  switch(bVar1) {
  default:
    unaff_x28 = *(undefined1 (**) [16])(unaff_x29 + -0x80);
  case 0x45:
  case 0x49:
    *(undefined1 (**) [16])((long)pauVar29 + 8) = unaff_x28;
    goto code_r0x00010839d2c0;
  case 1:
    func_0x00010839de90();
    param_11 = (code *)0x2;
    func_0x00010839dd34();
    func_0x00010839de54();
    pauVar37 = *(undefined1 (**) [16])(unaff_x29 + -0x78);
    goto code_r0x00010839d2a0;
  case 2:
    func_0x00010839de90();
    param_11 = (code *)0x3;
    func_0x00010839dd34();
    FUN_10839e1b8(unaff_x29 + -0x80);
    param_8 = (undefined1 (*) [16])(unaff_x29 + -0x80);
    func_0x00010839de3c();
    goto code_r0x00010839d23c;
  case 3:
    goto code_r0x00010839d244;
  case 4:
    func_0x00010839de90();
    param_11 = (code *)0x4;
    func_0x00010839dd34();
    param_8 = (undefined1 (*) [16])(unaff_x29 + -0x80);
    func_0x00010839de68();
    FUN_10839d804();
    pauVar37 = *(undefined1 (**) [16])(unaff_x29 + -0x68);
    goto code_r0x00010839d2a0;
  case 5:
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)((long)pauVar29 + 8);
    *(undefined1 (**) [16])(unaff_x29 + -0x78) = unaff_x28;
    if ((int)uVar39 == 0) goto code_r0x00010839d2b4;
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x47:
  case 0x48:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x51:
    goto code_r0x00010839d5ec;
  case 0x46:
  case 0x4a:
  case 0x6a:
  case 0x72:
    goto LAB_10839d4f0;
  case 0x4e:
  case 0x52:
  case 0x74:
    return param_8;
  case 0x56:
  case 0x5a:
  case 0x5e:
  case 0x62:
    func_0x00010839e1ac();
    FUN_10839aec8();
code_r0x00010839d5ec:
    pauVar29 = (undefined1 (*) [16])((long)pauVar29 + 0x28);
    func_0x00010834950c(pauVar29);
    return pauVar29;
  case 0x57:
  case 0x5b:
  case 0x5f:
  case 99:
    goto code_r0x00010839d3ec;
  case 0x58:
  case 0x5c:
    goto code_r0x00010839d508;
  case 0x60:
  case 100:
    pauVar38 = param_8;
  case 0x77:
  case 0x91:
  case 0xa2:
    do {
      func_0x00010839e064();
      unaff_x30 = FUN_10839d330;
      func_0x00010839dfb0();
      param_11 = (code *)0x10839a000;
      puVar28 = *pauVar29;
      unaff_x28 = pauVar38;
code_r0x00010839d334:
      param_11 = (code *)(*(undefined1 (*) [16])((long)param_11 + 0xec0) + 8);
code_r0x00010839d338:
      puVar9 = puVar28;
FUN_10839d09c:
      puVar10 = puVar9 + -0x60;
      *(undefined1 (**) [16])(puVar9 + -0x60) = pauVar34;
      *(ulong *)(puVar9 + -0x58) = unaff_x27;
code_r0x00010839d0a0:
      *(ulong *)(puVar10 + 0x10) = unaff_x26;
      *(byte **)(puVar10 + 0x18) = unaff_x25;
      *(ulong *)(puVar10 + 0x20) = uVar39;
      *(undefined1 **)(puVar10 + 0x28) = unaff_x23;
      *(undefined1 (**) [16])(puVar10 + 0x30) = unaff_x22;
      *(undefined1 (**) [16])(puVar10 + 0x38) = unaff_x21;
      *(undefined1 (**) [16])(puVar10 + 0x40) = unaff_x20;
      *(undefined1 (**) [16])(puVar10 + 0x48) = unaff_x28;
      *(undefined1 **)(puVar10 + 0x50) = unaff_x29;
      *(code **)(puVar10 + 0x58) = unaff_x30;
      unaff_x29 = puVar10 + 0x50;
      puVar11 = puVar10 + -0x5b0;
      *(undefined1 (**) [16])(puVar10 + -0x598) = param_10;
code_r0x00010839d0c0:
      func_0x00010839deb8();
      func_0x00010839e0b0();
      puVar12 = puVar11;
      pauVar37 = extraout_x8_01;
code_r0x00010839d0c8:
      puVar13 = puVar12;
      unaff_x28 = pauVar34;
      if ((int)pauVar37 != 0) {
code_r0x00010839d0cc:
        func_0x00010839def0();
        puVar14 = puVar13;
code_r0x00010839d0d0:
        func_0x0001083773e0();
        func_0x00010812f180();
        puVar15 = puVar14;
code_r0x00010839d0d8:
        *(undefined1 (**) [16])(unaff_x29 + -0x80) = param_8;
        *(undefined1 (**) [16])(unaff_x29 + -0x78) = param_9;
        func_0x00010839dfe8();
        puVar16 = puVar15;
code_r0x00010839d0e0:
        param_10 = (undefined1 (*) [16])0x2;
        FUN_1082873f8();
        puVar17 = puVar16;
code_r0x00010839d0e8:
        *(undefined1 (**) [16])(puVar17 + 0x20) = param_8;
        *(undefined1 (**) [16])(puVar17 + 0x28) = param_9;
        param_9 = (undefined1 (*) [16])(puVar17 + 0x20);
        puVar18 = puVar17;
code_r0x00010839d0f0:
        func_0x00010839e13c();
        puVar19 = puVar18;
code_r0x00010839d0f4:
        puVar12 = puVar19;
        puVar20 = puVar19;
        uVar43 = uVar39;
        unaff_x28 = pauVar34;
        if (((ulong)param_8 & 1) == 0) goto code_r0x00010839d0f8;
LAB_10839d2dc:
        uVar39 = uVar43;
        func_0x00010839e064();
      }
      func_0x00010839de28(*(undefined8 *)(unaff_x29 + -0x60));
      if ((bool)in_ZR) {
        return param_8;
      }
      ___stack_chk_fail();
code_r0x00010839d300:
      pauVar29 = (undefined1 (*) [16])puVar12;
      pauVar38 = param_8;
      pauVar34 = unaff_x28;
    } while( true );
  case 0x6b:
  case 0x73:
    *(ulong *)((long)pauVar29 + -0x70) = unaff_d9;
    *(ulong *)((long)pauVar29 + -0x68) = unaff_d8;
    *(undefined1 (**) [16])((long)pauVar29 + -0x60) = unaff_x28;
    *(ulong *)((long)pauVar29 + -0x58) = unaff_x27;
    *(ulong *)((long)pauVar29 + -0x50) = unaff_x26;
    *(byte **)((long)pauVar29 + -0x48) = unaff_x25;
    *(ulong *)((long)pauVar29 + -0x40) = uVar39;
    *(undefined1 **)((long)pauVar29 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])((long)pauVar29 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])((long)pauVar29 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])((long)pauVar29 + -0x20) = unaff_x20;
    *(undefined1 (**) [16])((long)pauVar29 + -0x18) = unaff_x28;
    *(undefined1 **)((long)pauVar29 + -0x10) = unaff_x29;
    *(undefined8 *)((long)pauVar29 + -8) = 0x10839d1d4;
    pauVar37 = param_8;
    pauVar34 = param_10;
    func_0x00010839c538();
    *(undefined8 *)((long)pauVar29 + -0x80) = extraout_x8;
    if (pauVar34 == (undefined1 (*) [16])0x0) {
      *(undefined8 *)((long)pauVar29 + -0x98) = 0x46fffe0046fffe00;
      *(undefined8 *)((long)pauVar29 + -0xa0) = 0xc6fffe00c6fffe00;
      *(undefined8 *)((long)pauVar29 + -0xb0) = 0;
      *(undefined8 *)((long)pauVar29 + -0xa8) = 0;
    }
    else {
      if (*(long *)param_10[1] == -1) goto LAB_10839b070;
      *(undefined8 *)((long)pauVar29 + -0x98) = 0x46fffe0046fffe00;
      *(undefined8 *)((long)pauVar29 + -0xa0) = 0xc6fffe00c6fffe00;
      auVar41 = NEON_scvtf(*param_10,4);
      *(float *)((long)pauVar29 + -0xa8) = auVar41._8_4_ + 1.0;
      *(float *)((long)pauVar29 + -0xa4) = auVar41._12_4_ + 1.0;
      *(float *)((long)pauVar29 + -0xb0) = auVar41._0_4_ + -1.0;
      *(float *)((long)pauVar29 + -0xac) = auVar41._4_4_ + -1.0;
    }
    uVar39 = 0;
    iVar33 = (int)param_9;
    if (iVar33 < 2) {
      iVar33 = 1;
    }
    *(long *)((long)pauVar29 + -0x138) = UNK_10df1e6c0._8_8_;
    *(long *)((long)pauVar29 + -0x140) = (long)UNK_10df1e6c0;
    goto LAB_10839af6c;
  case 0x6c:
LAB_10839d4f0:
    func_0x00010839e1ac();
    FUN_10839c5a0();
    param_8 = (undefined1 (*) [16])((long)pauVar29 + 0x18);
    func_0x00010834950c(param_8);
code_r0x00010839d508:
    return param_8;
  case 0x75:
  case 0x86:
  case 0x98:
  case 0xaf:
  case 0xcb:
  case 0xdb:
  case 0xee:
code_r0x00010839d2b4:
    func_0x00010839e144();
  case 0x97:
  case 0xba:
  case 0xbe:
    func_0x00010839dd34();
    break;
  case 0x76:
  case 0x87:
  case 0xb0:
    goto code_r0x00010839d2c0;
  case 0x78:
  case 0xfc:
    goto code_r0x00010839d3a8;
  case 0x79:
    goto code_r0x00010839d3c8;
  case 0x7a:
  case 0x7d:
  case 0x83:
  case 0x8c:
  case 0x95:
  case 0x9d:
  case 0xa6:
  case 0xac:
  case 0xb6:
  case 199:
  case 0xd2:
  case 0xd8:
  case 0xe2:
  case 0xe6:
  case 0xe7:
  case 0xec:
  case 0xf5:
  case 0xf9:
    goto code_r0x00010839d384;
  case 0x7b:
  case 0x84:
  case 0xad:
  case 0xb3:
  case 0xc6:
  case 0xd1:
  case 0xe1:
  case 0xf4:
    goto code_r0x00010839d3b8;
  case 0x7c:
  case 0xaa:
  case 0xd6:
  case 0xd7:
    goto code_r0x00010839d3bc;
  case 0x7e:
    goto LAB_10839d2f8;
  case 0x7f:
  case 0x90:
  case 0xa1:
  case 0xeb:
    goto code_r0x00010839d3a0;
  case 0x80:
  case 0x8e:
  case 0x9f:
  case 0xb4:
  case 0xfb:
    goto code_r0x00010839d394;
  case 0x81:
  case 0x82:
  case 0xab:
  case 0xb5:
  case 0xc5:
  case 0xd0:
  case 0xd9:
  case 0xe0:
  case 0xf3:
    goto code_r0x00010839d3c0;
  case 0x88:
  case 0x8a:
  case 0x99:
  case 0x9b:
  case 0xb1:
  case 0xbc:
  case 0xc1:
  case 0xc4:
  case 0xcd:
  case 0xcf:
  case 0xdd:
  case 0xdf:
  case 0xe5:
  case 0xf0:
  case 0xf2:
    pauVar29 = (undefined1 (*) [16])((long)pauVar29 + -0x80);
    goto code_r0x00010839d340;
  case 0x89:
  case 0x9a:
  case 0xc2:
  case 0xce:
  case 0xde:
  case 0xe8:
  case 0xf1:
    goto code_r0x00010839d39c;
  case 0x8b:
  case 0x9c:
  case 0xb2:
    goto code_r0x00010839d3b0;
  case 0x8d:
  case 0x9e:
    goto code_r0x00010839d37c;
  case 0x8f:
  case 0x93:
  case 0xa0:
  case 0xa4:
  case 0xa9:
  case 200:
  case 0xd3:
  case 0xe3:
  case 0xe9:
  case 0xf6:
  case 0xfe:
    goto code_r0x00010839d374;
  case 0x92:
  case 0xa3:
  case 0xc9:
  case 0xd4:
  case 0xe4:
  case 0xf7:
    goto code_r0x00010839d3a4;
  case 0x94:
  case 0xa5:
    goto code_r0x00010839d38c;
  case 0xa7:
  case 0xb7:
  case 0xbb:
    goto code_r0x00010839d36c;
  case 0xa8:
  case 0xf8:
    goto code_r0x00010839d338;
  case 0xb8:
    goto code_r0x00010839d300;
  case 0xb9:
  case 0xbd:
  case 0xcc:
    break;
  case 0xc0:
    goto code_r0x00010839d2d4;
  case 0xc3:
    goto code_r0x00010839d34c;
  case 0xd5:
    return param_8;
  case 0xdc:
    goto code_r0x00010839d2c8;
  case 0xea:
  case 0xff:
    goto code_r0x00010839d378;
  case 0xef:
    goto code_r0x00010839d2d0;
  case 0xfa:
    goto code_r0x00010839d3cc;
  case 0xfd:
    goto code_r0x00010839d380;
  }
  func_0x00010839de54();
  goto code_r0x00010839d2c0;
LAB_10839af6c:
  if (uVar39 == iVar33 - 1) {
LAB_10839b070:
    bVar30 = true;
    func_0x00010839c460(*(undefined8 *)((long)pauVar29 + -0x80));
    if (bVar30) {
      return pauVar37;
    }
    ___stack_chk_fail();
    if (*(long *)pauVar37[1] == -1) {
      return (undefined1 (*) [16])0x1;
    }
    *(undefined1 (**) [16])((long)pauVar29 + -0x160) = param_10;
    *(code **)((long)pauVar29 + -0x158) = param_11;
    *(undefined1 **)((long)pauVar29 + -0x150) = (undefined1 *)((long)pauVar29 + -0x10);
    *(code **)((long)pauVar29 + -0x148) = FUN_10839b0a4;
    FUN_10821a6d8();
    uVar32 = (uint)param_9;
    if (((ulong)param_9 & 1) == 0) {
      func_0x00010839c548();
      FUN_10821a044();
      pauVar29 = (undefined1 (*) [16])(ulong)(uVar32 ^ 1);
    }
    else {
      pauVar29 = (undefined1 (*) [16])0x1;
    }
    return pauVar29;
  }
  pauVar37 = (undefined1 (*) [16])(*param_8 + uVar39 * 8);
  param_9 = (undefined1 (*) [16])((long)pauVar29 + -0xa0);
  FUN_10835de90(pauVar37,param_9,(undefined1 *)((long)pauVar29 + -0x90));
  if ((int)pauVar37 != 0) {
    if (param_10 != (undefined1 (*) [16])0x0) {
      pauVar37 = (undefined1 (*) [16])((long)pauVar29 + -0x90);
      param_9 = (undefined1 (*) [16])((long)pauVar29 + -0xb0);
      FUN_10835de90(pauVar37,param_9,(undefined1 *)((long)pauVar29 + -0x90));
      if ((int)pauVar37 == 0) goto LAB_10839b010;
    }
    uVar46 = NEON_fcvtzs(*(undefined8 *)((long)pauVar29 + -0x90),6,4);
    uVar43 = NEON_fcvtzs(*(undefined8 *)((long)pauVar29 + -0x88),6,4);
    if (param_10 == (undefined1 (*) [16])0x0) {
LAB_10839aff4:
      pauVar37 = (undefined1 (*) [16])(uVar46 & 0xffffffff);
      param_9 = (undefined1 (*) [16])(uVar46 >> 0x20);
      FUN_10839b0f4(pauVar37,param_9,uVar43 & 0xffffffff,uVar43 >> 0x20,0,param_11);
    }
    else {
      uVar36 = NEON_smin(uVar43,uVar46,4);
      *(undefined8 *)((long)pauVar29 + -0x128) = 0;
      *(ulong *)((long)pauVar29 + -0x130) = uVar43;
      *(undefined8 *)((long)pauVar29 + -0x118) = in_register_00005048;
      *(ulong *)((long)pauVar29 + -0x120) = uVar46;
      uVar44 = NEON_smax(uVar46,uVar43,4);
      *(ulong *)((long)pauVar29 + -0xb8) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)pauVar29 + -0x138) >> 0x20) +
                    ((int)((ulong)uVar44 >> 0x20) + 0x3f >> 6),
                    (int)*(undefined8 *)((long)pauVar29 + -0x138) + ((int)uVar44 + 0x3f >> 6));
      *(ulong *)((long)pauVar29 + -0xc0) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)pauVar29 + -0x140) >> 0x20) +
                    (int)((long)uVar36 >> 0x26),
                    (int)*(undefined8 *)((long)pauVar29 + -0x140) + ((int)uVar36 >> 6));
      param_9 = (undefined1 (*) [16])((long)pauVar29 + -0xc0);
      pauVar37 = param_10;
      FUN_10839b0a4();
      if (((ulong)pauVar37 & 1) == 0) {
        pauVar37 = param_10;
        func_0x00010834954c(param_10,(undefined1 *)((long)pauVar29 + -0xc0));
        if (((ulong)pauVar37 & 1) != 0) {
          uVar43 = *(ulong *)((long)pauVar29 + -0x130);
          in_register_00005048 = *(undefined8 *)((long)pauVar29 + -0x118);
          uVar46 = *(ulong *)((long)pauVar29 + -0x120);
          goto LAB_10839aff4;
        }
        pauVar37 = (undefined1 (*) [16])((long)pauVar29 + -0x110);
        param_9 = param_10;
        FUN_1083903d0(pauVar37,param_10,(undefined1 *)((long)pauVar29 + -0xc0));
        uVar2 = *(undefined4 *)((long)pauVar29 + -0x130);
        uVar3 = *(undefined4 *)((long)pauVar29 + -300);
        auVar41 = *(undefined1 (*) [16])((long)pauVar29 + -0x120);
        pauVar34 = (undefined1 (*) [16])(ulong)auVar41._4_4_;
        while ((*(byte *)((long)pauVar29 + -200) & 1) == 0) {
          param_9 = pauVar34;
          FUN_10839b0f4(auVar41._0_4_,pauVar34,uVar2,uVar3,(undefined1 *)((long)pauVar29 + -0xd8),
                        param_11);
          pauVar37 = (undefined1 (*) [16])((long)pauVar29 + -0x110);
          FUN_108390454();
        }
      }
    }
  }
LAB_10839b010:
  uVar39 = uVar39 + 1;
  goto LAB_10839af6c;
code_r0x00010839d0f8:
  param_9 = (undefined1 (*) [16])(puVar20 + 0x20);
  puVar21 = puVar20;
code_r0x00010839d0fc:
  func_0x00010839e008();
  puVar23 = puVar21;
  puVar22 = puVar21;
  if (((ulong)param_8 & 1) == 0) {
LAB_10839d10c:
    pauVar37 = (undefined1 (*) [16])(ulong)(byte)unaff_x22[3][0];
    puVar24 = puVar23;
code_r0x00010839d110:
    puVar26 = puVar24;
    puVar25 = puVar24;
    if (((ulong)pauVar37 & 1) == 0) {
LAB_10839d11c:
      func_0x00010839e06c();
      *(undefined8 *)(puVar26 + 0x18) = *(undefined8 *)(puVar26 + 0x578);
      unaff_x21 = *(undefined1 (**) [16])(puVar26 + 0x570);
    }
    else {
code_r0x00010839d114:
      unaff_x21 = unaff_x22;
      puVar26 = puVar25;
      unaff_x22 = unaff_x21;
    }
    auVar41 = NEON_scvtf(*unaff_x21,4);
    param_3 = CONCAT44(auVar41._4_4_ + -1.0,auVar41._0_4_ + -1.0);
    in_register_00005048 = CONCAT44(auVar41._12_4_ + 1.0,auVar41._8_4_ + 1.0);
    puVar7 = puVar26;
code_r0x00010839d140:
    puVar22 = puVar7;
    param_2 = 0x3f8000003f800000;
    *(undefined8 *)(puVar22 + 0xd8) = in_register_00005048;
    *(undefined8 *)(puVar22 + 0xd0) = param_3;
    *(float *)(puVar22 + 0xe8) = auVar41._8_4_ + -1.0;
    *(float *)(puVar22 + 0xec) = auVar41._12_4_ + -1.0;
    *(float *)(puVar22 + 0xe0) = auVar41._0_4_ + 1.0;
    *(float *)(puVar22 + 0xe4) = auVar41._4_4_ + 1.0;
    func_0x00010839df64();
    if ((extraout_x8_02 & 1) != 0) {
      *(undefined8 *)(puVar22 + 0xe0) = 0;
      *(undefined8 *)(puVar22 + 0xe8) = 0;
    }
    unaff_x23 = puVar22 + 0xe0;
    if ((code)unaff_x22[3][2] == (code)0x0) {
      unaff_x23 = (undefined1 *)0x0;
    }
    unaff_x22 = (undefined1 (*) [16])(puVar22 + 0xd0);
  }
  else {
code_r0x00010839d104:
    func_0x00010839e0c0();
  }
  func_0x00010839dee4();
  func_0x00010839e180();
  func_0x00010839dee4();
  func_0x00010839e040();
  pauVar29 = (undefined1 (*) [16])puVar22;
  uVar43 = uVar39;
  uVar39 = unaff_x27;
  unaff_x28 = pauVar34;
  goto code_r0x00010839d184;
code_r0x00010839d340:
  *(ulong *)((long)pauVar29 + 0x20) = unaff_d13;
  *(ulong *)((long)pauVar29 + 0x28) = unaff_d12;
  *(ulong *)((long)pauVar29 + 0x30) = unaff_d11;
  *(ulong *)((long)pauVar29 + 0x38) = unaff_d10;
  *(ulong *)((long)pauVar29 + 0x40) = unaff_d9;
  *(ulong *)((long)pauVar29 + 0x48) = unaff_d8;
code_r0x00010839d34c:
  *(undefined1 (**) [16])((long)pauVar29 + 0x50) = unaff_x22;
  *(undefined1 (**) [16])((long)pauVar29 + 0x58) = unaff_x21;
  *(undefined1 (**) [16])((long)pauVar29 + 0x60) = unaff_x20;
  *(undefined1 (**) [16])((long)pauVar29 + 0x68) = unaff_x28;
  *(undefined1 **)((long)pauVar29 + 0x70) = unaff_x29;
  *(code **)((long)pauVar29 + 0x78) = unaff_x30;
  unaff_d8 = (ulong)(uint)*(float *)*param_9;
  if (0.0 <= *(float *)*param_9) {
    unaff_d10 = (ulong)*(uint *)(*param_9 + 4);
code_r0x00010839d36c:
    if (0.0 <= (float)unaff_d10) {
code_r0x00010839d374:
      unaff_x28 = (undefined1 (*) [16])param_11;
code_r0x00010839d378:
      unaff_x20 = param_10;
code_r0x00010839d37c:
      fVar40 = 0.5;
code_r0x00010839d380:
      fVar42 = (float)unaff_d8 * fVar40;
code_r0x00010839d384:
      fVar45 = (float)unaff_d10 * fVar40;
      param_4 = *(float *)*param_8;
      param_5 = *(float *)(*param_8 + 4);
code_r0x00010839d38c:
      unaff_d11 = (ulong)(uint)(param_4 - fVar42);
      fVar40 = param_5 - fVar45;
code_r0x00010839d394:
      param_6 = *(float *)(*param_8 + 8);
      param_7 = *(float *)(*param_8 + 0xc);
      unaff_d9 = (ulong)(uint)(fVar42 + param_6);
code_r0x00010839d39c:
      unaff_d12 = (ulong)(uint)(fVar45 + param_7);
code_r0x00010839d3a0:
      *(int *)((long)pauVar29 + 0x10) = (int)unaff_d11;
      *(float *)((long)pauVar29 + 0x14) = fVar40;
code_r0x00010839d3a4:
      *(int *)((long)pauVar29 + 0x18) = (int)unaff_d9;
      *(int *)((long)pauVar29 + 0x1c) = (int)unaff_d12;
code_r0x00010839d3a8:
      fVar42 = param_6 - param_4;
      fVar45 = param_7 - param_5;
code_r0x00010839d3b0:
      in_ZR = false;
      uVar31 = false;
      if ((float)unaff_d8 < fVar42) {
        in_ZR = false;
        uVar31 = true;
        fVar42 = (float)unaff_d10;
        if (!NAN(fVar45) && !NAN(fVar42)) {
          in_ZR = fVar45 == fVar42;
          uVar31 = fVar42 <= fVar45;
        }
      }
code_r0x00010839d3b8:
      if ((bool)uVar31 && !(bool)in_ZR) {
        unaff_d13 = (ulong)(uint)((float)unaff_d10 + fVar40);
code_r0x00010839d3c8:
        *(int *)pauVar29 = (int)unaff_d11;
        *(float *)((long)pauVar29 + 4) = fVar40;
code_r0x00010839d3cc:
        *(int *)(*pauVar29 + 8) = (int)unaff_d9;
        *(int *)(*pauVar29 + 0xc) = (int)unaff_d13;
        func_0x00010839dec8();
        fVar40 = (float)unaff_d12 - (float)unaff_d10;
        unaff_d10 = (ulong)(uint)fVar40;
        *(float *)(*pauVar29 + 4) = fVar40;
        *(float *)(*pauVar29 + 0xc) = (float)unaff_d12;
        func_0x00010839dec8();
        fVar40 = (float)unaff_d8 + (float)unaff_d11;
        unaff_x21 = pauVar29;
code_r0x00010839d3ec:
        *(int *)pauVar29 = (int)unaff_d11;
        *(float *)((long)pauVar29 + 4) = (float)unaff_d13;
        *(float *)((long)pauVar29 + 8) = fVar40;
        *(float *)((long)pauVar29 + 0xc) = (float)unaff_d10;
        func_0x00010839dec8();
        *(float *)pauVar29 = (float)unaff_d9 - (float)unaff_d8;
        *(float *)((long)pauVar29 + 8) = (float)unaff_d9;
        param_8 = unaff_x21;
      }
      else {
code_r0x00010839d3bc:
        unaff_x21 = (undefined1 (*) [16])((long)pauVar29 + 0x10);
code_r0x00010839d3c0:
        param_8 = unaff_x21;
      }
      FUN_108397c28(param_8,unaff_x20,unaff_x28);
    }
  }
  return param_8;
}



/* Entry: 10839d084; end: 10839d09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_10839d084(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
             float param_6,float param_7,undefined1 (*param_8) [16],undefined1 (*param_9) [16],
             undefined1 (*param_10) [16])

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 (*pauVar31) [16];
  bool bVar32;
  undefined1 in_ZR;
  undefined1 uVar33;
  uint uVar34;
  int iVar35;
  undefined1 (*pauVar36) [16];
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  byte *pbVar37;
  undefined8 uVar38;
  undefined1 (*extraout_x8_01) [16];
  undefined1 (*pauVar39) [16];
  ulong extraout_x8_02;
  undefined1 (*unaff_x19) [16];
  undefined1 (*pauVar40) [16];
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x21) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  ulong unaff_x24;
  byte *unaff_x25;
  ulong uVar41;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined1 (*unaff_x28) [16];
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar42;
  undefined1 auVar43 [16];
  undefined8 extraout_var;
  float fVar44;
  ulong uVar45;
  undefined8 uVar46;
  float fVar47;
  ulong uVar48;
  undefined8 in_register_00005048;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  
  do {
    pcVar9 = FUN_10839aec8;
    puVar8 = (undefined1 *)register0x00000008;
FUN_10839cdf0:
    puVar10 = puVar8;
    *(undefined1 (**) [16])(puVar10 + -0x60) = unaff_x28;
    *(ulong *)(puVar10 + -0x58) = unaff_x27;
    *(ulong *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(ulong *)(puVar10 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar10 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])(puVar10 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])(puVar10 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0x20) = unaff_x20;
    *(undefined1 (**) [16])(puVar10 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x10) = unaff_x29;
    *(code **)(puVar10 + -8) = unaff_x30;
    unaff_x29 = puVar10 + -0x10;
    pauVar31 = (undefined1 (*) [16])(puVar10 + -0x610);
    puVar13 = puVar10 + -0x610;
    puVar12 = puVar10 + -0x610;
    puVar11 = puVar10 + -0x610;
    register0x00000008 = (BADSPACEBASE *)(puVar10 + -0x610);
    *(undefined1 (**) [16])(puVar10 + -0x5f8) = param_10;
    func_0x00010839deb8();
    func_0x00010839e0b0();
    unaff_x19 = unaff_x28;
    if (extraout_w8 != 0) {
      func_0x00010839def0();
      func_0x0001083773e0();
      func_0x00010812f180();
      *(undefined1 (**) [16])(puVar10 + -0x90) = param_8;
      *(undefined1 (**) [16])(puVar10 + -0x88) = param_9;
      func_0x00010839dfe8();
      param_10 = (undefined1 (*) [16])0x2;
      FUN_1082873f8();
      *(undefined1 (**) [16])(puVar10 + -0x5f0) = param_8;
      *(undefined1 (**) [16])(puVar10 + -0x5e8) = param_9;
      param_9 = (undefined1 (*) [16])(puVar10 + -0x5f0);
      func_0x00010839e13c();
      uVar41 = unaff_x24;
      if (((ulong)param_8 & 1) == 0) {
        param_9 = (undefined1 (*) [16])(puVar10 + -0x5f0);
        func_0x00010839e008();
        if (((ulong)param_8 & 1) == 0) {
          unaff_x21 = unaff_x22;
          if ((unaff_x22[3][0] & 1) == 0) {
            func_0x00010839e06c();
            *(undefined8 *)(puVar10 + -0x5f8) = *(undefined8 *)(puVar10 + -0x98);
            unaff_x21 = *(undefined1 (**) [16])(puVar10 + -0xa0);
          }
          auVar43 = NEON_scvtf(*unaff_x21,4);
          param_3 = CONCAT44(auVar43._4_4_ + -1.0,auVar43._0_4_ + -1.0);
          in_register_00005048 = CONCAT44(auVar43._12_4_ + 1.0,auVar43._8_4_ + 1.0);
          param_2 = 0x3f8000003f800000;
          *(undefined8 *)(puVar10 + -0x538) = in_register_00005048;
          *(undefined8 *)(puVar10 + -0x540) = param_3;
          *(float *)(puVar10 + -0x528) = auVar43._8_4_ + -1.0;
          *(float *)(puVar10 + -0x524) = auVar43._12_4_ + -1.0;
          *(float *)(puVar10 + -0x530) = auVar43._0_4_ + 1.0;
          *(float *)(puVar10 + -0x52c) = auVar43._4_4_ + 1.0;
          func_0x00010839df64();
          if ((extraout_x8_00 & 1) != 0) {
            *(undefined8 *)(puVar10 + -0x530) = 0;
            *(undefined8 *)(puVar10 + -0x528) = 0;
          }
          unaff_x23 = puVar10 + -0x530;
          if ((code)unaff_x22[3][2] == (code)0x0) {
            unaff_x23 = (undefined1 *)0x0;
          }
          unaff_x22 = (undefined1 (*) [16])(puVar10 + -0x540);
        }
        else {
          func_0x00010839e0c0();
        }
        func_0x00010839dee4();
        func_0x00010839e180();
        func_0x00010839dee4();
        func_0x00010839e040();
        unaff_x24 = unaff_x27;
        do {
          unaff_x25 = *(byte **)(puVar10 + -0x558);
          in_ZR = unaff_x25 == *(byte **)(puVar10 + -0x600);
          if ((bool)in_ZR) {
            func_0x00010839e05c();
            unaff_x27 = unaff_x24;
            break;
          }
          unaff_x26 = *(ulong *)(puVar10 + -0x548);
          param_8 = (undefined1 (*) [16])(puVar10 + -0x558);
          func_0x0001081e8ec8();
          bVar1 = *unaff_x25;
          unaff_x27 = (ulong)bVar1;
          if (5 < bVar1) {
LAB_10839d04c:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10839d050);
            (*pcVar9)();
          }
          pbVar37 = *(byte **)(puVar10 + -0x558);
          uVar33 = *(byte **)(puVar10 + -0x600) <= pbVar37;
          in_ZR = pbVar37 == *(byte **)(puVar10 + -0x600);
          if ((bool)in_ZR) {
            unaff_x25 = (byte *)0x6;
          }
          else {
            unaff_x25 = (byte *)(ulong)*pbVar37;
          }
          unaff_x30 = (code *)0x10839cf28;
          auVar43._0_8_ = func_0x00010839df3c();
          auVar43._8_8_ = extraout_var;
          pauVar39 = (undefined1 (*) [16])
                     ((ulong)(byte)(&UNK_10df1e755)[unaff_x27] * 4 + 0x10839cf44);
          puVar14 = puVar10 + -0x610;
          puVar15 = puVar10 + -0x610;
          puVar30 = puVar10 + -0x610;
          puVar16 = puVar10 + -0x610;
          puVar17 = puVar10 + -0x610;
          puVar18 = puVar10 + -0x610;
          puVar19 = puVar10 + -0x610;
          puVar20 = puVar10 + -0x610;
          puVar21 = puVar10 + -0x610;
          puVar22 = puVar10 + -0x610;
          puVar23 = puVar10 + -0x610;
          puVar25 = puVar10 + -0x610;
          puVar24 = puVar10 + -0x610;
          puVar29 = puVar10 + -0x610;
          puVar4 = puVar10 + -0x610;
          puVar5 = puVar10 + -0x610;
          puVar6 = puVar10 + -0x610;
          puVar26 = puVar10 + -0x610;
          puVar28 = puVar10 + -0x610;
          puVar27 = puVar10 + -0x610;
          puVar7 = puVar10 + -0x610;
          puVar8 = puVar10 + -0x610;
          pauVar36 = unaff_x19;
          unaff_x28 = unaff_x19;
          switch(bVar1) {
          default:
            unaff_x19 = *(undefined1 (**) [16])(puVar10 + -0x90);
          case 0x4b:
          case 0x4f:
            *(undefined1 (**) [16])(puVar10 + -0x608) = unaff_x19;
            goto code_r0x00010839d014;
          case 1:
          case 7:
            func_0x00010839de90();
            pcVar9 = (code *)0x2;
            FUN_10839dc50();
            func_0x00010839de54();
            uVar38 = *(undefined8 *)(puVar10 + -0x88);
            break;
          case 2:
          case 8:
            func_0x00010839de90();
            pcVar9 = (code *)0x3;
            FUN_10839dc50();
            FUN_10839e1b8(puVar10 + -0x90);
            param_8 = (undefined1 (*) [16])(puVar10 + -0x90);
            func_0x00010839de3c();
            goto code_r0x00010839cf90;
          case 3:
          case 9:
            func_0x00010839de90();
            pcVar9 = (code *)0x3;
            FUN_10839dc50();
            param_8 = (undefined1 (*) [16])(puVar10 + -0x5f0);
            func_0x00010839dfd0();
            pauVar39 = param_8;
            for (unaff_x26 = 0; (int)unaff_x26 < *(int *)(puVar10 + -0x560);
                unaff_x26 = (ulong)((int)unaff_x26 + 1)) {
              FUN_10839e1b8(pauVar39);
              param_8 = pauVar39;
              func_0x00010839de3c();
              pauVar39 = pauVar39 + 1;
            }
code_r0x00010839cf90:
            uVar38 = *(undefined8 *)(puVar10 + -0x80);
            break;
          case 4:
          case 10:
            func_0x00010839de90();
            pcVar9 = (code *)0x4;
            FUN_10839dc50();
            param_8 = (undefined1 (*) [16])(puVar10 + -0x90);
            func_0x00010839de68();
            FUN_10839d804();
            uVar38 = *(undefined8 *)(puVar10 + -0x78);
            break;
          case 5:
          case 0xb:
            *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x608);
            *(undefined1 (**) [16])(puVar10 + -0x88) = unaff_x19;
            if ((int)unaff_x24 == 0) goto code_r0x00010839d008;
          case 0xbf:
          case 0xc3:
          case 0xd2:
code_r0x00010839d010:
            func_0x00010839de54();
            goto code_r0x00010839d014;
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x4d:
          case 0x4e:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x57:
            goto code_r0x00010839d340;
          case 0x4c:
          case 0x50:
          case 0x70:
          case 0x78:
            goto code_r0x00010839d244;
          case 0x54:
          case 0x58:
          case 0x7a:
            goto code_r0x00010839d040;
          case 0x5c:
          case 0x60:
          case 100:
          case 0x68:
            goto code_r0x00010839d334;
          case 0x5d:
          case 0x61:
          case 0x65:
          case 0x69:
            goto code_r0x00010839d140;
          case 0x5e:
          case 0x62:
            goto code_r0x00010839d25c;
          case 0x66:
          case 0x6a:
            pauVar36 = param_8;
            goto code_r0x00010839d068;
          case 0x71:
          case 0x79:
            goto code_r0x00010839d2c4;
          case 0x72:
            goto code_r0x00010839d240;
          case 0x7b:
          case 0x8c:
          case 0x9e:
          case 0xb5:
          case 0xd1:
          case 0xe1:
          case 0xf4:
code_r0x00010839d008:
            func_0x00010839e144();
          case 0x9d:
          case 0xc0:
          case 0xc4:
            FUN_10839dc50();
            goto code_r0x00010839d010;
          case 0x7c:
          case 0x8d:
          case 0xb6:
            goto code_r0x00010839d014;
          case 0x7d:
          case 0x97:
          case 0xa8:
            goto code_r0x00010839d068;
          case 0x7e:
            goto code_r0x00010839d0fc;
          case 0x7f:
            goto LAB_10839d11c;
          case 0x80:
          case 0x83:
          case 0x89:
          case 0x92:
          case 0x9b:
          case 0xa3:
          case 0xac:
          case 0xb2:
          case 0xbc:
          case 0xcd:
          case 0xd8:
          case 0xde:
          case 0xe8:
          case 0xec:
          case 0xed:
          case 0xf2:
          case 0xfb:
          case 0xff:
            goto code_r0x00010839d0d8;
          case 0x81:
          case 0x8a:
          case 0xb3:
          case 0xb9:
          case 0xcc:
          case 0xd7:
          case 0xe7:
          case 0xfa:
            goto LAB_10839d10c;
          case 0x82:
          case 0xb0:
          case 0xdc:
          case 0xdd:
            goto code_r0x00010839d110;
          case 0x84:
            goto LAB_10839d04c;
          case 0x85:
          case 0x96:
          case 0xa7:
          case 0xf1:
            goto code_r0x00010839d0f4;
          case 0x86:
          case 0x94:
          case 0xa5:
          case 0xba:
            goto code_r0x00010839d0e8;
          case 0x87:
          case 0x88:
          case 0xb1:
          case 0xbb:
          case 0xcb:
          case 0xd6:
          case 0xdf:
          case 0xe6:
          case 0xf9:
            goto code_r0x00010839d114;
          case 0x8e:
          case 0x90:
          case 0x9f:
          case 0xa1:
          case 0xb7:
          case 0xc2:
          case 199:
          case 0xca:
          case 0xd3:
          case 0xd5:
          case 0xe3:
          case 0xe5:
          case 0xeb:
          case 0xf6:
          case 0xf8:
            pcVar9 = FUN_10839c5a0;
            goto FUN_10839d09c;
          case 0x8f:
          case 0xa0:
          case 200:
          case 0xd4:
          case 0xe4:
          case 0xee:
          case 0xf7:
            goto code_r0x00010839d0f0;
          case 0x91:
          case 0xa2:
          case 0xb8:
            goto code_r0x00010839d104;
          case 0x93:
          case 0xa4:
            goto code_r0x00010839d0d0;
          case 0x95:
          case 0x99:
          case 0xa6:
          case 0xaa:
          case 0xaf:
          case 0xce:
          case 0xd9:
          case 0xe9:
          case 0xef:
          case 0xfc:
            goto code_r0x00010839d0c8;
          case 0x98:
          case 0xa9:
          case 0xcf:
          case 0xda:
          case 0xea:
          case 0xfd:
            goto code_r0x00010839d0f8;
          case 0x9a:
          case 0xab:
            goto code_r0x00010839d0e0;
          case 0xad:
          case 0xbd:
          case 0xc1:
            goto code_r0x00010839d0c0;
          case 0xae:
          case 0xfe:
            goto FUN_10839cdf0;
          case 0xbe:
            goto code_r0x00010839d054;
          case 0xc6:
            goto code_r0x00010839d028;
          case 0xc9:
            goto code_r0x00010839d0a0;
          case 0xdb:
            goto code_r0x00010839d048;
          case 0xe2:
            goto code_r0x00010839d01c;
          case 0xf0:
            goto code_r0x00010839d0cc;
          case 0xf5:
            goto code_r0x00010839d024;
          }
          *(undefined8 *)(puVar10 + -0x608) = uVar38;
code_r0x00010839d014:
          uVar33 = 3 < bVar1 - 1;
code_r0x00010839d01c:
          in_ZR = !(bool)uVar33 && (int)unaff_x24 == 0;
          pauVar39 = *(undefined1 (**) [16])(puVar10 + -0x90);
          pauVar36 = unaff_x19;
code_r0x00010839d024:
          unaff_x19 = pauVar39;
          if (!(bool)in_ZR) {
            unaff_x19 = pauVar36;
          }
code_r0x00010839d028:
          uVar41 = unaff_x24;
          unaff_x24 = unaff_x27;
        } while( true );
      }
      func_0x00010839e064();
      unaff_x24 = uVar41;
    }
    func_0x00010839de28(*(undefined8 *)(puVar10 + -0x70));
    if ((bool)in_ZR) {
code_r0x00010839d040:
code_r0x00010839d048:
                    /* WARNING: Read-only address (ram,0x00010df1e6c0) is written */
      return param_8;
    }
    ___stack_chk_fail();
code_r0x00010839d054:
    pauVar36 = param_8;
    unaff_x28 = unaff_x19;
code_r0x00010839d068:
    func_0x00010839e064();
    unaff_x30 = FUN_10839d084;
    func_0x00010839dfb0();
    unaff_x19 = pauVar36;
  } while( true );
code_r0x00010839d244:
  func_0x00010839de90();
  pcVar9 = (code *)0x3;
  func_0x00010839dd34();
  param_8 = (undefined1 (*) [16])(puVar29 + 0x20);
  func_0x00010839dfd0();
  puVar6 = puVar29;
code_r0x00010839d25c:
  pauVar31 = (undefined1 (*) [16])puVar6;
  pauVar39 = param_8;
  for (unaff_x26 = 0; (int)unaff_x26 < *(int *)((long)pauVar31 + 0xb0);
      unaff_x26 = (ulong)((int)unaff_x26 + 1)) {
    FUN_10839e1b8(pauVar39);
    param_8 = pauVar39;
    func_0x00010839de3c();
    pauVar39 = pauVar39 + 1;
  }
code_r0x00010839d23c:
  pauVar39 = *(undefined1 (**) [16])(unaff_x29 + -0x70);
  puVar4 = *pauVar31;
code_r0x00010839d240:
  pauVar31 = (undefined1 (*) [16])puVar4;
code_r0x00010839d2a0:
  *(undefined1 (**) [16])((long)pauVar31 + 8) = pauVar39;
code_r0x00010839d2c0:
  pauVar39 = (undefined1 (*) [16])(ulong)((int)unaff_x27 - 1);
  puVar5 = *pauVar31;
code_r0x00010839d2c4:
  pauVar31 = (undefined1 (*) [16])puVar5;
  uVar33 = 3 < (uint)pauVar39;
code_r0x00010839d2c8:
  in_ZR = !(bool)uVar33 && (int)unaff_x24 == 0;
  pauVar39 = *(undefined1 (**) [16])(unaff_x29 + -0x80);
code_r0x00010839d2d0:
  pauVar36 = pauVar39;
  if (!(bool)in_ZR) {
    pauVar36 = unaff_x19;
  }
code_r0x00010839d2d4:
  uVar41 = unaff_x24;
  unaff_x24 = unaff_x27;
  unaff_x19 = pauVar36;
code_r0x00010839d184:
  unaff_x25 = *(byte **)((long)pauVar31 + 0xb8);
  in_ZR = unaff_x25 == *(byte **)((long)pauVar31 + 0x10);
  puVar14 = *pauVar31;
  if ((bool)in_ZR) {
    func_0x00010839e05c();
    unaff_x27 = unaff_x24;
    goto LAB_10839d2dc;
  }
  unaff_x26 = *(ulong *)((long)pauVar31 + 200);
  param_8 = (undefined1 (*) [16])((long)pauVar31 + 0xb8);
  func_0x0001081e8ec8();
  bVar1 = *unaff_x25;
  unaff_x27 = (ulong)bVar1;
  if (5 < bVar1) {
LAB_10839d2f8:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10839d2fc);
    (*pcVar9)();
  }
  pbVar37 = *(byte **)((long)pauVar31 + 0xb8);
  uVar33 = *(byte **)((long)pauVar31 + 0x10) <= pbVar37;
  in_ZR = pbVar37 == *(byte **)((long)pauVar31 + 0x10);
  if ((bool)in_ZR) {
    unaff_x25 = (byte *)0x6;
  }
  else {
    unaff_x25 = (byte *)(ulong)*pbVar37;
  }
  unaff_x30 = (code *)0x10839d1d4;
  fVar42 = (float)func_0x00010839df3c();
  fVar47 = (float)param_3;
  fVar44 = (float)param_2;
  pauVar39 = (undefined1 (*) [16])((ulong)(byte)(&UNK_10df1e75b)[unaff_x27] * 4 + 0x10839d1f0);
  puVar30 = *pauVar31;
  puVar29 = *pauVar31;
  pauVar40 = unaff_x19;
  pauVar36 = unaff_x19;
  switch(bVar1) {
  default:
    unaff_x19 = *(undefined1 (**) [16])(unaff_x29 + -0x80);
  case 0x45:
  case 0x49:
    *(undefined1 (**) [16])((long)pauVar31 + 8) = unaff_x19;
    goto code_r0x00010839d2c0;
  case 1:
    func_0x00010839de90();
    pcVar9 = (code *)0x2;
    func_0x00010839dd34();
    func_0x00010839de54();
    pauVar39 = *(undefined1 (**) [16])(unaff_x29 + -0x78);
    goto code_r0x00010839d2a0;
  case 2:
    func_0x00010839de90();
    pcVar9 = (code *)0x3;
    func_0x00010839dd34();
    FUN_10839e1b8(unaff_x29 + -0x80);
    param_8 = (undefined1 (*) [16])(unaff_x29 + -0x80);
    func_0x00010839de3c();
    goto code_r0x00010839d23c;
  case 3:
    goto code_r0x00010839d244;
  case 4:
    func_0x00010839de90();
    pcVar9 = (code *)0x4;
    func_0x00010839dd34();
    param_8 = (undefined1 (*) [16])(unaff_x29 + -0x80);
    func_0x00010839de68();
    FUN_10839d804();
    pauVar39 = *(undefined1 (**) [16])(unaff_x29 + -0x68);
    goto code_r0x00010839d2a0;
  case 5:
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)((long)pauVar31 + 8);
    *(undefined1 (**) [16])(unaff_x29 + -0x78) = unaff_x19;
    if ((int)unaff_x24 == 0) goto code_r0x00010839d2b4;
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x47:
  case 0x48:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x51:
    goto code_r0x00010839d5ec;
  case 0x46:
  case 0x4a:
  case 0x6a:
  case 0x72:
    goto LAB_10839d4f0;
  case 0x4e:
  case 0x52:
  case 0x74:
    return param_8;
  case 0x56:
  case 0x5a:
  case 0x5e:
  case 0x62:
    func_0x00010839e1ac();
    FUN_10839aec8();
code_r0x00010839d5ec:
    pauVar31 = (undefined1 (*) [16])((long)pauVar31 + 0x28);
    func_0x00010834950c(pauVar31);
    return pauVar31;
  case 0x57:
  case 0x5b:
  case 0x5f:
  case 99:
    goto code_r0x00010839d3ec;
  case 0x58:
  case 0x5c:
    goto code_r0x00010839d508;
  case 0x60:
  case 100:
    pauVar40 = param_8;
  case 0x77:
  case 0x91:
  case 0xa2:
    do {
      func_0x00010839e064();
      unaff_x30 = FUN_10839d330;
      func_0x00010839dfb0();
      pcVar9 = (code *)0x10839a000;
      puVar30 = *pauVar31;
      unaff_x19 = pauVar40;
code_r0x00010839d334:
      pcVar9 = (code *)(*(undefined1 (*) [16])((long)pcVar9 + 0xec0) + 8);
code_r0x00010839d338:
      puVar11 = puVar30;
FUN_10839d09c:
      puVar12 = puVar11 + -0x60;
      *(undefined1 (**) [16])(puVar11 + -0x60) = pauVar36;
      *(ulong *)(puVar11 + -0x58) = unaff_x27;
code_r0x00010839d0a0:
      *(ulong *)(puVar12 + 0x10) = unaff_x26;
      *(byte **)(puVar12 + 0x18) = unaff_x25;
      *(ulong *)(puVar12 + 0x20) = unaff_x24;
      *(undefined1 **)(puVar12 + 0x28) = unaff_x23;
      *(undefined1 (**) [16])(puVar12 + 0x30) = unaff_x22;
      *(undefined1 (**) [16])(puVar12 + 0x38) = unaff_x21;
      *(undefined1 (**) [16])(puVar12 + 0x40) = unaff_x20;
      *(undefined1 (**) [16])(puVar12 + 0x48) = unaff_x19;
      *(undefined1 **)(puVar12 + 0x50) = unaff_x29;
      *(code **)(puVar12 + 0x58) = unaff_x30;
      unaff_x29 = puVar12 + 0x50;
      puVar13 = puVar12 + -0x5b0;
      *(undefined1 (**) [16])(puVar12 + -0x598) = param_10;
code_r0x00010839d0c0:
      func_0x00010839deb8();
      func_0x00010839e0b0();
      puVar14 = puVar13;
      pauVar39 = extraout_x8_01;
code_r0x00010839d0c8:
      puVar15 = puVar14;
      unaff_x19 = pauVar36;
      if ((int)pauVar39 != 0) {
code_r0x00010839d0cc:
        func_0x00010839def0();
        puVar16 = puVar15;
code_r0x00010839d0d0:
        func_0x0001083773e0();
        func_0x00010812f180();
        puVar17 = puVar16;
code_r0x00010839d0d8:
        *(undefined1 (**) [16])(unaff_x29 + -0x80) = param_8;
        *(undefined1 (**) [16])(unaff_x29 + -0x78) = param_9;
        func_0x00010839dfe8();
        puVar18 = puVar17;
code_r0x00010839d0e0:
        param_10 = (undefined1 (*) [16])0x2;
        FUN_1082873f8();
        puVar19 = puVar18;
code_r0x00010839d0e8:
        *(undefined1 (**) [16])(puVar19 + 0x20) = param_8;
        *(undefined1 (**) [16])(puVar19 + 0x28) = param_9;
        param_9 = (undefined1 (*) [16])(puVar19 + 0x20);
        puVar20 = puVar19;
code_r0x00010839d0f0:
        func_0x00010839e13c();
        puVar21 = puVar20;
code_r0x00010839d0f4:
        puVar14 = puVar21;
        puVar22 = puVar21;
        uVar41 = unaff_x24;
        unaff_x19 = pauVar36;
        if (((ulong)param_8 & 1) == 0) goto code_r0x00010839d0f8;
LAB_10839d2dc:
        unaff_x24 = uVar41;
        func_0x00010839e064();
      }
      func_0x00010839de28(*(undefined8 *)(unaff_x29 + -0x60));
      if ((bool)in_ZR) {
        return param_8;
      }
      ___stack_chk_fail();
code_r0x00010839d300:
      pauVar31 = (undefined1 (*) [16])puVar14;
      pauVar40 = param_8;
      pauVar36 = unaff_x19;
    } while( true );
  case 0x6b:
  case 0x73:
    *(ulong *)((long)pauVar31 + -0x70) = unaff_d9;
    *(ulong *)((long)pauVar31 + -0x68) = unaff_d8;
    *(undefined1 (**) [16])((long)pauVar31 + -0x60) = unaff_x19;
    *(ulong *)((long)pauVar31 + -0x58) = unaff_x27;
    *(ulong *)((long)pauVar31 + -0x50) = unaff_x26;
    *(byte **)((long)pauVar31 + -0x48) = unaff_x25;
    *(ulong *)((long)pauVar31 + -0x40) = unaff_x24;
    *(undefined1 **)((long)pauVar31 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])((long)pauVar31 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])((long)pauVar31 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])((long)pauVar31 + -0x20) = unaff_x20;
    *(undefined1 (**) [16])((long)pauVar31 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pauVar31 + -0x10) = unaff_x29;
    *(undefined8 *)((long)pauVar31 + -8) = 0x10839d1d4;
    pauVar39 = param_8;
    pauVar36 = param_10;
    func_0x00010839c538();
    *(undefined8 *)((long)pauVar31 + -0x80) = extraout_x8;
    if (pauVar36 == (undefined1 (*) [16])0x0) {
      *(undefined8 *)((long)pauVar31 + -0x98) = 0x46fffe0046fffe00;
      *(undefined8 *)((long)pauVar31 + -0xa0) = 0xc6fffe00c6fffe00;
      *(undefined8 *)((long)pauVar31 + -0xb0) = 0;
      *(undefined8 *)((long)pauVar31 + -0xa8) = 0;
    }
    else {
      if (*(long *)param_10[1] == -1) goto LAB_10839b070;
      *(undefined8 *)((long)pauVar31 + -0x98) = 0x46fffe0046fffe00;
      *(undefined8 *)((long)pauVar31 + -0xa0) = 0xc6fffe00c6fffe00;
      auVar43 = NEON_scvtf(*param_10,4);
      *(float *)((long)pauVar31 + -0xa8) = auVar43._8_4_ + 1.0;
      *(float *)((long)pauVar31 + -0xa4) = auVar43._12_4_ + 1.0;
      *(float *)((long)pauVar31 + -0xb0) = auVar43._0_4_ + -1.0;
      *(float *)((long)pauVar31 + -0xac) = auVar43._4_4_ + -1.0;
    }
    uVar41 = 0;
    iVar35 = (int)param_9;
    if (iVar35 < 2) {
      iVar35 = 1;
    }
    *(long *)((long)pauVar31 + -0x138) = UNK_10df1e6c0._8_8_;
    *(long *)((long)pauVar31 + -0x140) = (long)UNK_10df1e6c0;
    goto LAB_10839af6c;
  case 0x6c:
LAB_10839d4f0:
    func_0x00010839e1ac();
    FUN_10839c5a0();
    param_8 = (undefined1 (*) [16])((long)pauVar31 + 0x18);
    func_0x00010834950c(param_8);
code_r0x00010839d508:
    return param_8;
  case 0x75:
  case 0x86:
  case 0x98:
  case 0xaf:
  case 0xcb:
  case 0xdb:
  case 0xee:
code_r0x00010839d2b4:
    func_0x00010839e144();
  case 0x97:
  case 0xba:
  case 0xbe:
    func_0x00010839dd34();
    break;
  case 0x76:
  case 0x87:
  case 0xb0:
    goto code_r0x00010839d2c0;
  case 0x78:
  case 0xfc:
    goto code_r0x00010839d3a8;
  case 0x79:
    goto code_r0x00010839d3c8;
  case 0x7a:
  case 0x7d:
  case 0x83:
  case 0x8c:
  case 0x95:
  case 0x9d:
  case 0xa6:
  case 0xac:
  case 0xb6:
  case 199:
  case 0xd2:
  case 0xd8:
  case 0xe2:
  case 0xe6:
  case 0xe7:
  case 0xec:
  case 0xf5:
  case 0xf9:
    goto code_r0x00010839d384;
  case 0x7b:
  case 0x84:
  case 0xad:
  case 0xb3:
  case 0xc6:
  case 0xd1:
  case 0xe1:
  case 0xf4:
    goto code_r0x00010839d3b8;
  case 0x7c:
  case 0xaa:
  case 0xd6:
  case 0xd7:
    goto code_r0x00010839d3bc;
  case 0x7e:
    goto LAB_10839d2f8;
  case 0x7f:
  case 0x90:
  case 0xa1:
  case 0xeb:
    goto code_r0x00010839d3a0;
  case 0x80:
  case 0x8e:
  case 0x9f:
  case 0xb4:
  case 0xfb:
    goto code_r0x00010839d394;
  case 0x81:
  case 0x82:
  case 0xab:
  case 0xb5:
  case 0xc5:
  case 0xd0:
  case 0xd9:
  case 0xe0:
  case 0xf3:
    goto code_r0x00010839d3c0;
  case 0x88:
  case 0x8a:
  case 0x99:
  case 0x9b:
  case 0xb1:
  case 0xbc:
  case 0xc1:
  case 0xc4:
  case 0xcd:
  case 0xcf:
  case 0xdd:
  case 0xdf:
  case 0xe5:
  case 0xf0:
  case 0xf2:
    pauVar31 = (undefined1 (*) [16])((long)pauVar31 + -0x80);
    goto code_r0x00010839d340;
  case 0x89:
  case 0x9a:
  case 0xc2:
  case 0xce:
  case 0xde:
  case 0xe8:
  case 0xf1:
    goto code_r0x00010839d39c;
  case 0x8b:
  case 0x9c:
  case 0xb2:
    goto code_r0x00010839d3b0;
  case 0x8d:
  case 0x9e:
    goto code_r0x00010839d37c;
  case 0x8f:
  case 0x93:
  case 0xa0:
  case 0xa4:
  case 0xa9:
  case 200:
  case 0xd3:
  case 0xe3:
  case 0xe9:
  case 0xf6:
  case 0xfe:
    goto code_r0x00010839d374;
  case 0x92:
  case 0xa3:
  case 0xc9:
  case 0xd4:
  case 0xe4:
  case 0xf7:
    goto code_r0x00010839d3a4;
  case 0x94:
  case 0xa5:
    goto code_r0x00010839d38c;
  case 0xa7:
  case 0xb7:
  case 0xbb:
    goto code_r0x00010839d36c;
  case 0xa8:
  case 0xf8:
    goto code_r0x00010839d338;
  case 0xb8:
    goto code_r0x00010839d300;
  case 0xb9:
  case 0xbd:
  case 0xcc:
    break;
  case 0xc0:
    goto code_r0x00010839d2d4;
  case 0xc3:
    goto code_r0x00010839d34c;
  case 0xd5:
    return param_8;
  case 0xdc:
    goto code_r0x00010839d2c8;
  case 0xea:
  case 0xff:
    goto code_r0x00010839d378;
  case 0xef:
    goto code_r0x00010839d2d0;
  case 0xfa:
    goto code_r0x00010839d3cc;
  case 0xfd:
    goto code_r0x00010839d380;
  }
  func_0x00010839de54();
  goto code_r0x00010839d2c0;
LAB_10839af6c:
  if (uVar41 == iVar35 - 1) {
LAB_10839b070:
    bVar32 = true;
    func_0x00010839c460(*(undefined8 *)((long)pauVar31 + -0x80));
    if (bVar32) {
      return pauVar39;
    }
    ___stack_chk_fail();
    if (*(long *)pauVar39[1] == -1) {
      return (undefined1 (*) [16])0x1;
    }
    *(undefined1 (**) [16])((long)pauVar31 + -0x160) = param_10;
    *(code **)((long)pauVar31 + -0x158) = pcVar9;
    *(undefined1 **)((long)pauVar31 + -0x150) = (undefined1 *)((long)pauVar31 + -0x10);
    *(code **)((long)pauVar31 + -0x148) = FUN_10839b0a4;
    FUN_10821a6d8();
    uVar34 = (uint)param_9;
    if (((ulong)param_9 & 1) == 0) {
      func_0x00010839c548();
      FUN_10821a044();
      pauVar31 = (undefined1 (*) [16])(ulong)(uVar34 ^ 1);
    }
    else {
      pauVar31 = (undefined1 (*) [16])0x1;
    }
    return pauVar31;
  }
  pauVar39 = (undefined1 (*) [16])(*param_8 + uVar41 * 8);
  param_9 = (undefined1 (*) [16])((long)pauVar31 + -0xa0);
  FUN_10835de90(pauVar39,param_9,(undefined1 *)((long)pauVar31 + -0x90));
  if ((int)pauVar39 != 0) {
    if (param_10 != (undefined1 (*) [16])0x0) {
      pauVar39 = (undefined1 (*) [16])((long)pauVar31 + -0x90);
      param_9 = (undefined1 (*) [16])((long)pauVar31 + -0xb0);
      FUN_10835de90(pauVar39,param_9,(undefined1 *)((long)pauVar31 + -0x90));
      if ((int)pauVar39 == 0) goto LAB_10839b010;
    }
    uVar48 = NEON_fcvtzs(*(undefined8 *)((long)pauVar31 + -0x90),6,4);
    uVar45 = NEON_fcvtzs(*(undefined8 *)((long)pauVar31 + -0x88),6,4);
    if (param_10 == (undefined1 (*) [16])0x0) {
LAB_10839aff4:
      pauVar39 = (undefined1 (*) [16])(uVar48 & 0xffffffff);
      param_9 = (undefined1 (*) [16])(uVar48 >> 0x20);
      FUN_10839b0f4(pauVar39,param_9,uVar45 & 0xffffffff,uVar45 >> 0x20,0,pcVar9);
    }
    else {
      uVar38 = NEON_smin(uVar45,uVar48,4);
      *(undefined8 *)((long)pauVar31 + -0x128) = 0;
      *(ulong *)((long)pauVar31 + -0x130) = uVar45;
      *(undefined8 *)((long)pauVar31 + -0x118) = in_register_00005048;
      *(ulong *)((long)pauVar31 + -0x120) = uVar48;
      uVar46 = NEON_smax(uVar48,uVar45,4);
      *(ulong *)((long)pauVar31 + -0xb8) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)pauVar31 + -0x138) >> 0x20) +
                    ((int)((ulong)uVar46 >> 0x20) + 0x3f >> 6),
                    (int)*(undefined8 *)((long)pauVar31 + -0x138) + ((int)uVar46 + 0x3f >> 6));
      *(ulong *)((long)pauVar31 + -0xc0) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)pauVar31 + -0x140) >> 0x20) +
                    (int)((long)uVar38 >> 0x26),
                    (int)*(undefined8 *)((long)pauVar31 + -0x140) + ((int)uVar38 >> 6));
      param_9 = (undefined1 (*) [16])((long)pauVar31 + -0xc0);
      pauVar39 = param_10;
      FUN_10839b0a4();
      if (((ulong)pauVar39 & 1) == 0) {
        pauVar39 = param_10;
        func_0x00010834954c(param_10,(undefined1 *)((long)pauVar31 + -0xc0));
        if (((ulong)pauVar39 & 1) != 0) {
          uVar45 = *(ulong *)((long)pauVar31 + -0x130);
          in_register_00005048 = *(undefined8 *)((long)pauVar31 + -0x118);
          uVar48 = *(ulong *)((long)pauVar31 + -0x120);
          goto LAB_10839aff4;
        }
        pauVar39 = (undefined1 (*) [16])((long)pauVar31 + -0x110);
        param_9 = param_10;
        FUN_1083903d0(pauVar39,param_10,(undefined1 *)((long)pauVar31 + -0xc0));
        uVar2 = *(undefined4 *)((long)pauVar31 + -0x130);
        uVar3 = *(undefined4 *)((long)pauVar31 + -300);
        auVar43 = *(undefined1 (*) [16])((long)pauVar31 + -0x120);
        pauVar36 = (undefined1 (*) [16])(ulong)auVar43._4_4_;
        while ((*(byte *)((long)pauVar31 + -200) & 1) == 0) {
          param_9 = pauVar36;
          FUN_10839b0f4(auVar43._0_4_,pauVar36,uVar2,uVar3,(undefined1 *)((long)pauVar31 + -0xd8),
                        pcVar9);
          pauVar39 = (undefined1 (*) [16])((long)pauVar31 + -0x110);
          FUN_108390454();
        }
      }
    }
  }
LAB_10839b010:
  uVar41 = uVar41 + 1;
  goto LAB_10839af6c;
code_r0x00010839d0f8:
  param_9 = (undefined1 (*) [16])(puVar22 + 0x20);
  puVar23 = puVar22;
code_r0x00010839d0fc:
  func_0x00010839e008();
  puVar25 = puVar23;
  puVar24 = puVar23;
  if (((ulong)param_8 & 1) == 0) {
LAB_10839d10c:
    pauVar39 = (undefined1 (*) [16])(ulong)(byte)unaff_x22[3][0];
    puVar26 = puVar25;
code_r0x00010839d110:
    puVar28 = puVar26;
    puVar27 = puVar26;
    if (((ulong)pauVar39 & 1) == 0) {
LAB_10839d11c:
      func_0x00010839e06c();
      *(undefined8 *)(puVar28 + 0x18) = *(undefined8 *)(puVar28 + 0x578);
      unaff_x21 = *(undefined1 (**) [16])(puVar28 + 0x570);
    }
    else {
code_r0x00010839d114:
      unaff_x21 = unaff_x22;
      puVar28 = puVar27;
      unaff_x22 = unaff_x21;
    }
    auVar43 = NEON_scvtf(*unaff_x21,4);
    param_3 = CONCAT44(auVar43._4_4_ + -1.0,auVar43._0_4_ + -1.0);
    in_register_00005048 = CONCAT44(auVar43._12_4_ + 1.0,auVar43._8_4_ + 1.0);
    puVar7 = puVar28;
code_r0x00010839d140:
    puVar24 = puVar7;
    param_2 = 0x3f8000003f800000;
    *(undefined8 *)(puVar24 + 0xd8) = in_register_00005048;
    *(undefined8 *)(puVar24 + 0xd0) = param_3;
    *(float *)(puVar24 + 0xe8) = auVar43._8_4_ + -1.0;
    *(float *)(puVar24 + 0xec) = auVar43._12_4_ + -1.0;
    *(float *)(puVar24 + 0xe0) = auVar43._0_4_ + 1.0;
    *(float *)(puVar24 + 0xe4) = auVar43._4_4_ + 1.0;
    func_0x00010839df64();
    if ((extraout_x8_02 & 1) != 0) {
      *(undefined8 *)(puVar24 + 0xe0) = 0;
      *(undefined8 *)(puVar24 + 0xe8) = 0;
    }
    unaff_x23 = puVar24 + 0xe0;
    if ((code)unaff_x22[3][2] == (code)0x0) {
      unaff_x23 = (undefined1 *)0x0;
    }
    unaff_x22 = (undefined1 (*) [16])(puVar24 + 0xd0);
  }
  else {
code_r0x00010839d104:
    func_0x00010839e0c0();
  }
  func_0x00010839dee4();
  func_0x00010839e180();
  func_0x00010839dee4();
  func_0x00010839e040();
  pauVar31 = (undefined1 (*) [16])puVar24;
  uVar41 = unaff_x24;
  unaff_x24 = unaff_x27;
  unaff_x19 = pauVar36;
  goto code_r0x00010839d184;
code_r0x00010839d340:
  *(ulong *)((long)pauVar31 + 0x20) = unaff_d13;
  *(ulong *)((long)pauVar31 + 0x28) = unaff_d12;
  *(ulong *)((long)pauVar31 + 0x30) = unaff_d11;
  *(ulong *)((long)pauVar31 + 0x38) = unaff_d10;
  *(ulong *)((long)pauVar31 + 0x40) = unaff_d9;
  *(ulong *)((long)pauVar31 + 0x48) = unaff_d8;
code_r0x00010839d34c:
  *(undefined1 (**) [16])((long)pauVar31 + 0x50) = unaff_x22;
  *(undefined1 (**) [16])((long)pauVar31 + 0x58) = unaff_x21;
  *(undefined1 (**) [16])((long)pauVar31 + 0x60) = unaff_x20;
  *(undefined1 (**) [16])((long)pauVar31 + 0x68) = unaff_x19;
  *(undefined1 **)((long)pauVar31 + 0x70) = unaff_x29;
  *(code **)((long)pauVar31 + 0x78) = unaff_x30;
  unaff_d8 = (ulong)(uint)*(float *)*param_9;
  if (0.0 <= *(float *)*param_9) {
    unaff_d10 = (ulong)*(uint *)(*param_9 + 4);
code_r0x00010839d36c:
    if (0.0 <= (float)unaff_d10) {
code_r0x00010839d374:
      unaff_x19 = (undefined1 (*) [16])pcVar9;
code_r0x00010839d378:
      unaff_x20 = param_10;
code_r0x00010839d37c:
      fVar42 = 0.5;
code_r0x00010839d380:
      fVar44 = (float)unaff_d8 * fVar42;
code_r0x00010839d384:
      fVar47 = (float)unaff_d10 * fVar42;
      param_4 = *(float *)*param_8;
      param_5 = *(float *)(*param_8 + 4);
code_r0x00010839d38c:
      unaff_d11 = (ulong)(uint)(param_4 - fVar44);
      fVar42 = param_5 - fVar47;
code_r0x00010839d394:
      param_6 = *(float *)(*param_8 + 8);
      param_7 = *(float *)(*param_8 + 0xc);
      unaff_d9 = (ulong)(uint)(fVar44 + param_6);
code_r0x00010839d39c:
      unaff_d12 = (ulong)(uint)(fVar47 + param_7);
code_r0x00010839d3a0:
      *(int *)((long)pauVar31 + 0x10) = (int)unaff_d11;
      *(float *)((long)pauVar31 + 0x14) = fVar42;
code_r0x00010839d3a4:
      *(int *)((long)pauVar31 + 0x18) = (int)unaff_d9;
      *(int *)((long)pauVar31 + 0x1c) = (int)unaff_d12;
code_r0x00010839d3a8:
      fVar44 = param_6 - param_4;
      fVar47 = param_7 - param_5;
code_r0x00010839d3b0:
      in_ZR = false;
      uVar33 = false;
      if ((float)unaff_d8 < fVar44) {
        in_ZR = false;
        uVar33 = true;
        fVar44 = (float)unaff_d10;
        if (!NAN(fVar47) && !NAN(fVar44)) {
          in_ZR = fVar47 == fVar44;
          uVar33 = fVar44 <= fVar47;
        }
      }
code_r0x00010839d3b8:
      if ((bool)uVar33 && !(bool)in_ZR) {
        unaff_d13 = (ulong)(uint)((float)unaff_d10 + fVar42);
code_r0x00010839d3c8:
        *(int *)pauVar31 = (int)unaff_d11;
        *(float *)((long)pauVar31 + 4) = fVar42;
code_r0x00010839d3cc:
        *(int *)(*pauVar31 + 8) = (int)unaff_d9;
        *(int *)(*pauVar31 + 0xc) = (int)unaff_d13;
        func_0x00010839dec8();
        fVar42 = (float)unaff_d12 - (float)unaff_d10;
        unaff_d10 = (ulong)(uint)fVar42;
        *(float *)(*pauVar31 + 4) = fVar42;
        *(float *)(*pauVar31 + 0xc) = (float)unaff_d12;
        func_0x00010839dec8();
        fVar42 = (float)unaff_d8 + (float)unaff_d11;
        unaff_x21 = pauVar31;
code_r0x00010839d3ec:
        *(int *)pauVar31 = (int)unaff_d11;
        *(float *)((long)pauVar31 + 4) = (float)unaff_d13;
        *(float *)((long)pauVar31 + 8) = fVar42;
        *(float *)((long)pauVar31 + 0xc) = (float)unaff_d10;
        func_0x00010839dec8();
        *(float *)pauVar31 = (float)unaff_d9 - (float)unaff_d8;
        *(float *)((long)pauVar31 + 8) = (float)unaff_d9;
        param_8 = unaff_x21;
      }
      else {
code_r0x00010839d3bc:
        unaff_x21 = (undefined1 (*) [16])((long)pauVar31 + 0x10);
code_r0x00010839d3c0:
        param_8 = unaff_x21;
      }
      FUN_108397c28(param_8,unaff_x20,unaff_x19);
    }
  }
  return param_8;
}



/* Entry: 10839d09c; end: 10839d32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_10839d09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
             float param_6,float param_7,undefined1 (*param_8) [16],undefined1 (*param_9) [16],
             undefined1 (*param_10) [16],code *param_11)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  bool bVar24;
  undefined1 in_ZR;
  undefined1 uVar25;
  uint uVar26;
  int iVar27;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  byte *pbVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*unaff_x19) [16];
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x21) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  ulong unaff_x24;
  byte *unaff_x25;
  ulong uVar30;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined1 (*unaff_x28) [16];
  undefined1 (*pauVar31) [16];
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  float fVar35;
  ulong uVar36;
  undefined8 uVar37;
  float fVar38;
  ulong uVar39;
  undefined8 in_register_00005048;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  
  do {
    *(undefined1 (**) [16])((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 (**) [16])((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x610);
    *(undefined1 (**) [16])((long)register0x00000008 + -0x5f8) = param_10;
    func_0x00010839deb8();
    func_0x00010839e0b0();
    uVar30 = unaff_x24;
    if (extraout_w8 != 0) {
      func_0x00010839def0();
      func_0x0001083773e0();
      func_0x00010812f180();
      *(undefined1 (**) [16])((long)register0x00000008 + -0x90) = param_8;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x88) = param_9;
      func_0x00010839dfe8();
      param_10 = (undefined1 (*) [16])0x2;
      FUN_1082873f8();
      *(undefined1 (**) [16])((long)register0x00000008 + -0x5f0) = param_8;
      *(undefined1 (**) [16])((long)register0x00000008 + -0x5e8) = param_9;
      param_9 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
      func_0x00010839e13c();
      if (((ulong)param_8 & 1) == 0) {
        param_9 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
        func_0x00010839e008();
        if (((ulong)param_8 & 1) == 0) {
          unaff_x21 = unaff_x22;
          if ((unaff_x22[3][0] & 1) == 0) {
            func_0x00010839e06c();
            *(undefined8 *)((long)register0x00000008 + -0x5f8) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            unaff_x21 = *(undefined1 (**) [16])((long)register0x00000008 + -0xa0);
          }
          auVar34 = NEON_scvtf(*unaff_x21,4);
          param_3 = CONCAT44(auVar34._4_4_ + -1.0,auVar34._0_4_ + -1.0);
          in_register_00005048 = CONCAT44(auVar34._12_4_ + 1.0,auVar34._8_4_ + 1.0);
          param_2 = 0x3f8000003f800000;
          *(undefined8 *)((long)register0x00000008 + -0x538) = in_register_00005048;
          *(undefined8 *)((long)register0x00000008 + -0x540) = param_3;
          *(float *)((long)register0x00000008 + -0x528) = auVar34._8_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x524) = auVar34._12_4_ + -1.0;
          *(float *)((long)register0x00000008 + -0x530) = auVar34._0_4_ + 1.0;
          *(float *)((long)register0x00000008 + -0x52c) = auVar34._4_4_ + 1.0;
          func_0x00010839df64();
          if ((extraout_x8_00 & 1) != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x530) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x528) = 0;
          }
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x530);
          if ((code)unaff_x22[3][2] == (code)0x0) {
            unaff_x23 = (undefined1 *)0x0;
          }
          unaff_x22 = (undefined1 (*) [16])((long)register0x00000008 + -0x540);
        }
        else {
          func_0x00010839e0c0();
        }
        func_0x00010839dee4();
        func_0x00010839e180();
        func_0x00010839dee4();
        func_0x00010839e040();
        uVar30 = unaff_x27;
        while( true ) {
          unaff_x25 = *(byte **)((long)register0x00000008 + -0x558);
          in_ZR = unaff_x25 == *(byte **)((long)register0x00000008 + -0x600);
          if ((bool)in_ZR) break;
          unaff_x26 = *(ulong *)((long)register0x00000008 + -0x548);
          param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x558);
          func_0x0001081e8ec8();
          bVar1 = *unaff_x25;
          unaff_x27 = (ulong)bVar1;
          if (5 < bVar1) {
LAB_10839d2f8:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10839d2fc);
            (*pcVar4)();
          }
          pbVar28 = *(byte **)((long)register0x00000008 + -0x558);
          uVar25 = *(byte **)((long)register0x00000008 + -0x600) <= pbVar28;
          in_ZR = pbVar28 == *(byte **)((long)register0x00000008 + -0x600);
          if ((bool)in_ZR) {
            unaff_x25 = (byte *)0x6;
          }
          else {
            unaff_x25 = (byte *)(ulong)*pbVar28;
          }
          unaff_x30 = (code *)0x10839d1d4;
          fVar32 = (float)func_0x00010839df3c();
          fVar38 = (float)param_3;
          fVar35 = (float)param_2;
          pauVar29 = (undefined1 (*) [16])
                     ((ulong)(byte)(&UNK_10df1e75b)[unaff_x27] * 4 + 0x10839d1f0);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar8 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar9 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar11 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar13 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar14 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar15 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar16 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar17 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar18 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar19 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar20 = (undefined1 *)((long)register0x00000008 + -0x610);
          puVar21 = (undefined4 *)((long)register0x00000008 + -0x610);
          pauVar22 = (undefined1 (*) [16])((long)register0x00000008 + -0x610);
          pauVar23 = (undefined1 (*) [16])((long)register0x00000008 + -0x610);
          unaff_x19 = unaff_x28;
          pauVar31 = unaff_x28;
          switch(bVar1) {
          default:
            unaff_x28 = *(undefined1 (**) [16])((long)register0x00000008 + -0x90);
          case 0x45:
          case 0x49:
            *(undefined1 (**) [16])((long)register0x00000008 + -0x608) = unaff_x28;
            goto code_r0x00010839d2c0;
          case 1:
            func_0x00010839de90();
            param_11 = (code *)0x2;
            func_0x00010839dd34();
            func_0x00010839de54();
            uVar33 = *(undefined8 *)((long)register0x00000008 + -0x88);
            break;
          case 2:
            func_0x00010839de90();
            param_11 = (code *)0x3;
            func_0x00010839dd34();
            FUN_10839e1b8((undefined1 *)((long)register0x00000008 + -0x90));
            param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x90);
            func_0x00010839de3c();
            goto code_r0x00010839d23c;
          case 3:
            func_0x00010839de90();
            param_11 = (code *)0x3;
            func_0x00010839dd34();
            param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f0);
            func_0x00010839dfd0();
            pauVar29 = param_8;
            for (unaff_x26 = 0; (int)unaff_x26 < *(int *)((long)register0x00000008 + -0x560);
                unaff_x26 = (ulong)((int)unaff_x26 + 1)) {
              FUN_10839e1b8(pauVar29);
              param_8 = pauVar29;
              func_0x00010839de3c();
              pauVar29 = pauVar29 + 1;
            }
code_r0x00010839d23c:
            uVar33 = *(undefined8 *)((long)register0x00000008 + -0x80);
            break;
          case 4:
            func_0x00010839de90();
            param_11 = (code *)0x4;
            func_0x00010839dd34();
            param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x90);
            func_0x00010839de68();
            FUN_10839d804();
            uVar33 = *(undefined8 *)((long)register0x00000008 + -0x78);
            break;
          case 5:
            *(undefined8 *)((long)register0x00000008 + -0x90) =
                 *(undefined8 *)((long)register0x00000008 + -0x608);
            *(undefined1 (**) [16])((long)register0x00000008 + -0x88) = unaff_x28;
            if ((int)uVar30 == 0) goto code_r0x00010839d2b4;
          case 0xb9:
          case 0xbd:
          case 0xcc:
code_r0x00010839d2bc:
            func_0x00010839de54();
            goto code_r0x00010839d2c0;
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x47:
          case 0x48:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x51:
            goto code_r0x00010839d5ec;
          case 0x46:
          case 0x4a:
          case 0x6a:
          case 0x72:
            goto LAB_10839d4f0;
          case 0x4e:
          case 0x52:
          case 0x74:
            goto code_r0x00010839d2ec;
          case 0x56:
          case 0x5a:
          case 0x5e:
          case 0x62:
            func_0x00010839e1ac();
            FUN_10839aec8();
code_r0x00010839d5ec:
            pauVar29 = (undefined1 (*) [16])((long)register0x00000008 + -0x5e8);
            func_0x00010834950c(pauVar29);
            return pauVar29;
          case 0x57:
          case 0x5b:
          case 0x5f:
          case 99:
            goto code_r0x00010839d3ec;
          case 0x58:
          case 0x5c:
            goto code_r0x00010839d508;
          case 0x60:
          case 100:
            unaff_x19 = param_8;
            goto code_r0x00010839d314;
          case 0x6b:
          case 0x73:
            *(ulong *)((long)register0x00000008 + -0x680) = unaff_d9;
            *(ulong *)((long)register0x00000008 + -0x678) = unaff_d8;
            *(undefined1 (**) [16])((long)register0x00000008 + -0x670) = unaff_x28;
            *(ulong *)((long)register0x00000008 + -0x668) = unaff_x27;
            *(ulong *)((long)register0x00000008 + -0x660) = unaff_x26;
            *(byte **)((long)register0x00000008 + -0x658) = unaff_x25;
            *(ulong *)((long)register0x00000008 + -0x650) = uVar30;
            *(undefined1 **)((long)register0x00000008 + -0x648) = unaff_x23;
            *(undefined1 (**) [16])((long)register0x00000008 + -0x640) = unaff_x22;
            *(undefined1 (**) [16])((long)register0x00000008 + -0x638) = unaff_x21;
            *(undefined1 (**) [16])((long)register0x00000008 + -0x630) = unaff_x20;
            *(undefined1 (**) [16])((long)register0x00000008 + -0x628) = unaff_x28;
            *(undefined1 **)((long)register0x00000008 + -0x620) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -0x618) = 0x10839d1d4;
            pauVar29 = param_8;
            pauVar22 = param_10;
            func_0x00010839c538();
            *(undefined8 *)((long)register0x00000008 + -0x690) = extraout_x8;
            if (pauVar22 == (undefined1 (*) [16])0x0) {
              *(undefined8 *)((long)register0x00000008 + -0x6a8) = 0x46fffe0046fffe00;
              *(undefined8 *)((long)register0x00000008 + -0x6b0) = 0xc6fffe00c6fffe00;
              *(undefined8 *)((long)register0x00000008 + -0x6c0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x6b8) = 0;
            }
            else {
              if (*(long *)param_10[1] == -1) goto LAB_10839b070;
              *(undefined8 *)((long)register0x00000008 + -0x6a8) = 0x46fffe0046fffe00;
              *(undefined8 *)((long)register0x00000008 + -0x6b0) = 0xc6fffe00c6fffe00;
              auVar34 = NEON_scvtf(*param_10,4);
              *(float *)((long)register0x00000008 + -0x6b8) = auVar34._8_4_ + 1.0;
              *(float *)((long)register0x00000008 + -0x6b4) = auVar34._12_4_ + 1.0;
              *(float *)((long)register0x00000008 + -0x6c0) = auVar34._0_4_ + -1.0;
              *(float *)((long)register0x00000008 + -0x6bc) = auVar34._4_4_ + -1.0;
            }
            uVar30 = 0;
            iVar27 = (int)param_9;
            if (iVar27 < 2) {
              iVar27 = 1;
            }
            *(long *)((long)register0x00000008 + -0x748) = UNK_10df1e6c0._8_8_;
            *(long *)((long)register0x00000008 + -0x750) = (long)UNK_10df1e6c0;
            goto LAB_10839af6c;
          case 0x6c:
LAB_10839d4f0:
            func_0x00010839e1ac();
            FUN_10839c5a0();
            param_8 = (undefined1 (*) [16])((long)register0x00000008 + -0x5f8);
            func_0x00010834950c(param_8);
code_r0x00010839d508:
            return param_8;
          case 0x75:
          case 0x86:
          case 0x98:
          case 0xaf:
          case 0xcb:
          case 0xdb:
          case 0xee:
code_r0x00010839d2b4:
            func_0x00010839e144();
          case 0x97:
          case 0xba:
          case 0xbe:
            func_0x00010839dd34();
            goto code_r0x00010839d2bc;
          case 0x76:
          case 0x87:
          case 0xb0:
            goto code_r0x00010839d2c0;
          case 0x77:
          case 0x91:
          case 0xa2:
            goto code_r0x00010839d314;
          case 0x78:
          case 0xfc:
            goto code_r0x00010839d3a8;
          case 0x79:
            goto code_r0x00010839d3c8;
          case 0x7a:
          case 0x7d:
          case 0x83:
          case 0x8c:
          case 0x95:
          case 0x9d:
          case 0xa6:
          case 0xac:
          case 0xb6:
          case 199:
          case 0xd2:
          case 0xd8:
          case 0xe2:
          case 0xe6:
          case 0xe7:
          case 0xec:
          case 0xf5:
          case 0xf9:
            goto code_r0x00010839d384;
          case 0x7b:
          case 0x84:
          case 0xad:
          case 0xb3:
          case 0xc6:
          case 0xd1:
          case 0xe1:
          case 0xf4:
            goto code_r0x00010839d3b8;
          case 0x7c:
          case 0xaa:
          case 0xd6:
          case 0xd7:
            goto code_r0x00010839d3bc;
          case 0x7e:
            goto LAB_10839d2f8;
          case 0x7f:
          case 0x90:
          case 0xa1:
          case 0xeb:
            goto code_r0x00010839d3a0;
          case 0x80:
          case 0x8e:
          case 0x9f:
          case 0xb4:
          case 0xfb:
            goto code_r0x00010839d394;
          case 0x81:
          case 0x82:
          case 0xab:
          case 0xb5:
          case 0xc5:
          case 0xd0:
          case 0xd9:
          case 0xe0:
          case 0xf3:
            goto code_r0x00010839d3c0;
          case 0x88:
          case 0x8a:
          case 0x99:
          case 0x9b:
          case 0xb1:
          case 0xbc:
          case 0xc1:
          case 0xc4:
          case 0xcd:
          case 0xcf:
          case 0xdd:
          case 0xdf:
          case 0xe5:
          case 0xf0:
          case 0xf2:
            puVar5 = (undefined1 *)((long)register0x00000008 + -0x690);
            *(ulong *)((long)register0x00000008 + -0x670) = unaff_d13;
            *(ulong *)((long)register0x00000008 + -0x668) = unaff_d12;
            *(ulong *)((long)register0x00000008 + -0x660) = unaff_d11;
            *(ulong *)((long)register0x00000008 + -0x658) = unaff_d10;
            *(ulong *)((long)register0x00000008 + -0x650) = unaff_d9;
            *(ulong *)((long)register0x00000008 + -0x648) = unaff_d8;
          case 0xc3:
            *(undefined1 (**) [16])(puVar5 + 0x50) = unaff_x22;
            *(undefined1 (**) [16])(puVar5 + 0x58) = unaff_x21;
            *(undefined1 (**) [16])(puVar5 + 0x60) = unaff_x20;
            *(undefined1 (**) [16])(puVar5 + 0x68) = unaff_x28;
            *(undefined1 **)(puVar5 + 0x70) = unaff_x29;
            *(undefined8 *)(puVar5 + 0x78) = 0x10839d1d4;
            unaff_d8 = (ulong)(uint)*(float *)*param_9;
            if (0.0 <= *(float *)*param_9) {
              unaff_d10 = (ulong)*(uint *)(*param_9 + 4);
              puVar6 = puVar5;
code_r0x00010839d36c:
              puVar7 = puVar6;
              if (0.0 <= (float)unaff_d10) {
code_r0x00010839d374:
                puVar8 = puVar7;
                unaff_x28 = (undefined1 (*) [16])param_11;
code_r0x00010839d378:
                puVar9 = puVar8;
                unaff_x20 = param_10;
code_r0x00010839d37c:
                fVar32 = 0.5;
                puVar10 = puVar9;
code_r0x00010839d380:
                fVar35 = (float)unaff_d8 * fVar32;
                puVar11 = puVar10;
code_r0x00010839d384:
                fVar38 = (float)unaff_d10 * fVar32;
                param_4 = *(float *)*param_8;
                param_5 = *(float *)(*param_8 + 4);
                puVar12 = puVar11;
code_r0x00010839d38c:
                unaff_d11 = (ulong)(uint)(param_4 - fVar35);
                fVar32 = param_5 - fVar38;
                puVar13 = puVar12;
code_r0x00010839d394:
                param_6 = *(float *)(*param_8 + 8);
                param_7 = *(float *)(*param_8 + 0xc);
                unaff_d9 = (ulong)(uint)(fVar35 + param_6);
                puVar14 = puVar13;
code_r0x00010839d39c:
                unaff_d12 = (ulong)(uint)(fVar38 + param_7);
                puVar15 = puVar14;
code_r0x00010839d3a0:
                *(int *)(puVar15 + 0x10) = (int)unaff_d11;
                *(float *)(puVar15 + 0x14) = fVar32;
                puVar16 = puVar15;
code_r0x00010839d3a4:
                *(int *)(puVar16 + 0x18) = (int)unaff_d9;
                *(int *)(puVar16 + 0x1c) = (int)unaff_d12;
                puVar17 = puVar16;
code_r0x00010839d3a8:
                fVar35 = param_6 - param_4;
                fVar38 = param_7 - param_5;
                puVar18 = puVar17;
code_r0x00010839d3b0:
                in_ZR = false;
                uVar25 = false;
                puVar19 = puVar18;
                if ((float)unaff_d8 < fVar35) {
                  in_ZR = false;
                  uVar25 = true;
                  fVar35 = (float)unaff_d10;
                  if (!NAN(fVar38) && !NAN(fVar35)) {
                    in_ZR = fVar38 == fVar35;
                    uVar25 = fVar35 <= fVar38;
                  }
                }
code_r0x00010839d3b8:
                puVar20 = puVar19;
                if ((bool)uVar25 && !(bool)in_ZR) {
                  unaff_d13 = (ulong)(uint)((float)unaff_d10 + fVar32);
                  puVar21 = (undefined4 *)puVar19;
code_r0x00010839d3c8:
                  *puVar21 = (int)unaff_d11;
                  puVar21[1] = fVar32;
                  pauVar22 = (undefined1 (*) [16])puVar21;
code_r0x00010839d3cc:
                  *(int *)(*pauVar22 + 8) = (int)unaff_d9;
                  *(int *)(*pauVar22 + 0xc) = (int)unaff_d13;
                  func_0x00010839dec8();
                  fVar32 = (float)unaff_d12 - (float)unaff_d10;
                  unaff_d10 = (ulong)(uint)fVar32;
                  *(float *)(*pauVar22 + 4) = fVar32;
                  *(float *)(*pauVar22 + 0xc) = (float)unaff_d12;
                  func_0x00010839dec8();
                  fVar32 = (float)unaff_d8 + (float)unaff_d11;
                  pauVar23 = pauVar22;
                  unaff_x21 = pauVar22;
code_r0x00010839d3ec:
                  *(int *)pauVar23 = (int)unaff_d11;
                  *(float *)((long)pauVar23 + 4) = (float)unaff_d13;
                  *(float *)((long)pauVar23 + 8) = fVar32;
                  *(float *)((long)pauVar23 + 0xc) = (float)unaff_d10;
                  func_0x00010839dec8();
                  *(float *)pauVar23 = (float)unaff_d9 - (float)unaff_d8;
                  *(float *)((long)pauVar23 + 8) = (float)unaff_d9;
                  param_8 = unaff_x21;
                }
                else {
code_r0x00010839d3bc:
                  unaff_x21 = (undefined1 (*) [16])(puVar20 + 0x10);
code_r0x00010839d3c0:
                  param_8 = unaff_x21;
                }
                FUN_108397c28(param_8,unaff_x20,unaff_x28);
              }
            }
            return param_8;
          case 0x89:
          case 0x9a:
          case 0xc2:
          case 0xce:
          case 0xde:
          case 0xe8:
          case 0xf1:
            goto code_r0x00010839d39c;
          case 0x8b:
          case 0x9c:
          case 0xb2:
            goto code_r0x00010839d3b0;
          case 0x8d:
          case 0x9e:
            goto code_r0x00010839d37c;
          case 0x8f:
          case 0x93:
          case 0xa0:
          case 0xa4:
          case 0xa9:
          case 200:
          case 0xd3:
          case 0xe3:
          case 0xe9:
          case 0xf6:
          case 0xfe:
            goto code_r0x00010839d374;
          case 0x92:
          case 0xa3:
          case 0xc9:
          case 0xd4:
          case 0xe4:
          case 0xf7:
            goto code_r0x00010839d3a4;
          case 0x94:
          case 0xa5:
            goto code_r0x00010839d38c;
          case 0xa7:
          case 0xb7:
          case 0xbb:
            goto code_r0x00010839d36c;
          case 0xa8:
          case 0xf8:
            goto code_r0x00010839d338;
          case 0xb8:
            goto code_r0x00010839d300;
          case 0xc0:
            goto code_r0x00010839d2d4;
          case 0xd5:
            goto code_r0x00010839d2f4;
          case 0xdc:
            goto code_r0x00010839d2c8;
          case 0xea:
          case 0xff:
            goto code_r0x00010839d378;
          case 0xef:
            goto code_r0x00010839d2d0;
          case 0xfa:
            goto code_r0x00010839d3cc;
          case 0xfd:
            goto code_r0x00010839d380;
          }
          *(undefined8 *)((long)register0x00000008 + -0x608) = uVar33;
code_r0x00010839d2c0:
          uVar25 = 3 < bVar1 - 1;
code_r0x00010839d2c8:
          in_ZR = !(bool)uVar25 && (int)uVar30 == 0;
          pauVar29 = *(undefined1 (**) [16])((long)register0x00000008 + -0x90);
          pauVar31 = unaff_x28;
code_r0x00010839d2d0:
          unaff_x28 = pauVar29;
          if (!(bool)in_ZR) {
            unaff_x28 = pauVar31;
          }
code_r0x00010839d2d4:
          unaff_x24 = uVar30;
          uVar30 = unaff_x27;
        }
        func_0x00010839e05c();
        unaff_x27 = uVar30;
      }
      func_0x00010839e064();
      uVar30 = unaff_x24;
    }
    func_0x00010839de28(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)in_ZR) {
code_r0x00010839d2ec:
code_r0x00010839d2f4:
      return param_8;
    }
    ___stack_chk_fail();
code_r0x00010839d300:
    unaff_x19 = param_8;
code_r0x00010839d314:
    func_0x00010839e064();
    unaff_x30 = FUN_10839d330;
    func_0x00010839dfb0();
    param_11 = FUN_10839aec8;
code_r0x00010839d338:
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x610);
    unaff_x24 = uVar30;
  } while( true );
LAB_10839af6c:
  if (uVar30 == iVar27 - 1) {
LAB_10839b070:
    bVar24 = true;
    func_0x00010839c460(*(undefined8 *)((long)register0x00000008 + -0x690));
    if (bVar24) {
      return pauVar29;
    }
    ___stack_chk_fail();
    if (*(long *)pauVar29[1] != -1) {
      *(undefined1 (**) [16])((long)register0x00000008 + -0x770) = param_10;
      *(code **)((long)register0x00000008 + -0x768) = param_11;
      *(undefined1 **)((long)register0x00000008 + -0x760) =
           (undefined1 *)((long)register0x00000008 + -0x620);
      *(code **)((long)register0x00000008 + -0x758) = FUN_10839b0a4;
      FUN_10821a6d8();
      uVar26 = (uint)param_9;
      if (((ulong)param_9 & 1) == 0) {
        func_0x00010839c548();
        FUN_10821a044();
        pauVar29 = (undefined1 (*) [16])(ulong)(uVar26 ^ 1);
      }
      else {
        pauVar29 = (undefined1 (*) [16])0x1;
      }
      return pauVar29;
    }
    return (undefined1 (*) [16])0x1;
  }
  pauVar29 = (undefined1 (*) [16])(*param_8 + uVar30 * 8);
  param_9 = (undefined1 (*) [16])((long)register0x00000008 + -0x6b0);
  FUN_10835de90(pauVar29,param_9,(undefined1 *)((long)register0x00000008 + -0x6a0));
  if ((int)pauVar29 != 0) {
    if (param_10 != (undefined1 (*) [16])0x0) {
      pauVar29 = (undefined1 (*) [16])((long)register0x00000008 + -0x6a0);
      param_9 = (undefined1 (*) [16])((long)register0x00000008 + -0x6c0);
      FUN_10835de90(pauVar29,param_9,(undefined1 *)((long)register0x00000008 + -0x6a0));
      if ((int)pauVar29 == 0) goto LAB_10839b010;
    }
    uVar39 = NEON_fcvtzs(*(undefined8 *)((long)register0x00000008 + -0x6a0),6,4);
    uVar36 = NEON_fcvtzs(*(undefined8 *)((long)register0x00000008 + -0x698),6,4);
    if (param_10 == (undefined1 (*) [16])0x0) {
LAB_10839aff4:
      pauVar29 = (undefined1 (*) [16])(uVar39 & 0xffffffff);
      param_9 = (undefined1 (*) [16])(uVar39 >> 0x20);
      FUN_10839b0f4(pauVar29,param_9,uVar36 & 0xffffffff,uVar36 >> 0x20,0,param_11);
    }
    else {
      uVar33 = NEON_smin(uVar36,uVar39,4);
      *(undefined8 *)((long)register0x00000008 + -0x738) = 0;
      *(ulong *)((long)register0x00000008 + -0x740) = uVar36;
      *(undefined8 *)((long)register0x00000008 + -0x728) = in_register_00005048;
      *(ulong *)((long)register0x00000008 + -0x730) = uVar39;
      uVar37 = NEON_smax(uVar39,uVar36,4);
      *(ulong *)((long)register0x00000008 + -0x6c8) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)register0x00000008 + -0x748) >> 0x20) +
                    ((int)((ulong)uVar37 >> 0x20) + 0x3f >> 6),
                    (int)*(undefined8 *)((long)register0x00000008 + -0x748) +
                    ((int)uVar37 + 0x3f >> 6));
      *(ulong *)((long)register0x00000008 + -0x6d0) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)register0x00000008 + -0x750) >> 0x20) +
                    (int)((long)uVar33 >> 0x26),
                    (int)*(undefined8 *)((long)register0x00000008 + -0x750) + ((int)uVar33 >> 6));
      param_9 = (undefined1 (*) [16])((long)register0x00000008 + -0x6d0);
      pauVar29 = param_10;
      FUN_10839b0a4();
      if (((ulong)pauVar29 & 1) == 0) {
        pauVar29 = param_10;
        func_0x00010834954c(param_10,(undefined1 *)((long)register0x00000008 + -0x6d0));
        if (((ulong)pauVar29 & 1) != 0) {
          uVar36 = *(ulong *)((long)register0x00000008 + -0x740);
          in_register_00005048 = *(undefined8 *)((long)register0x00000008 + -0x728);
          uVar39 = *(ulong *)((long)register0x00000008 + -0x730);
          goto LAB_10839aff4;
        }
        pauVar29 = (undefined1 (*) [16])((long)register0x00000008 + -0x720);
        param_9 = param_10;
        FUN_1083903d0(pauVar29,param_10,(undefined1 *)((long)register0x00000008 + -0x6d0));
        uVar2 = *(undefined4 *)((long)register0x00000008 + -0x740);
        uVar3 = *(undefined4 *)((long)register0x00000008 + -0x73c);
        auVar34 = *(undefined1 (*) [16])((long)register0x00000008 + -0x730);
        pauVar22 = (undefined1 (*) [16])(ulong)auVar34._4_4_;
        while ((*(byte *)((long)register0x00000008 + -0x6d8) & 1) == 0) {
          param_9 = pauVar22;
          FUN_10839b0f4(auVar34._0_4_,pauVar22,uVar2,uVar3,
                        (undefined1 *)((long)register0x00000008 + -0x6e8),param_11);
          pauVar29 = (undefined1 (*) [16])((long)register0x00000008 + -0x720);
          FUN_108390454();
        }
      }
    }
  }
LAB_10839b010:
  uVar30 = uVar30 + 1;
  goto LAB_10839af6c;
}



/* Entry: 10839d330; end: 10839d33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_10839d330(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
             float param_6,float param_7,undefined1 (*param_8) [16],undefined1 (*param_9) [16],
             undefined1 (*param_10) [16])

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  bool bVar26;
  undefined1 in_ZR;
  undefined1 uVar27;
  uint uVar28;
  int iVar29;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  byte *pbVar30;
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  undefined1 (*unaff_x19) [16];
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x21) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  ulong unaff_x24;
  byte *unaff_x25;
  ulong uVar33;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined1 (*unaff_x28) [16];
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  float fVar37;
  ulong uVar38;
  undefined8 uVar39;
  float fVar40;
  ulong uVar41;
  undefined8 in_register_00005048;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  
  do {
    pcVar5 = FUN_10839aec8;
    puVar4 = (undefined1 *)register0x00000008;
FUN_10839d09c:
    puVar6 = puVar4;
    *(undefined1 (**) [16])(puVar6 + -0x60) = unaff_x28;
    *(ulong *)(puVar6 + -0x58) = unaff_x27;
    *(ulong *)(puVar6 + -0x50) = unaff_x26;
    *(byte **)(puVar6 + -0x48) = unaff_x25;
    *(ulong *)(puVar6 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar6 + -0x38) = unaff_x23;
    *(undefined1 (**) [16])(puVar6 + -0x30) = unaff_x22;
    *(undefined1 (**) [16])(puVar6 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar6 + -0x20) = unaff_x20;
    *(undefined1 (**) [16])(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
    *(code **)(puVar6 + -8) = unaff_x30;
    unaff_x29 = puVar6 + -0x10;
    puVar7 = puVar6 + -0x610;
    register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x610);
    *(undefined1 (**) [16])(puVar6 + -0x5f8) = param_10;
    func_0x00010839deb8();
    func_0x00010839e0b0();
    unaff_x19 = unaff_x28;
    if (extraout_w8 != 0) {
      func_0x00010839def0();
      func_0x0001083773e0();
      func_0x00010812f180();
      *(undefined1 (**) [16])(puVar6 + -0x90) = param_8;
      *(undefined1 (**) [16])(puVar6 + -0x88) = param_9;
      func_0x00010839dfe8();
      param_10 = (undefined1 (*) [16])0x2;
      FUN_1082873f8();
      *(undefined1 (**) [16])(puVar6 + -0x5f0) = param_8;
      *(undefined1 (**) [16])(puVar6 + -0x5e8) = param_9;
      param_9 = (undefined1 (*) [16])(puVar6 + -0x5f0);
      func_0x00010839e13c();
      uVar33 = unaff_x24;
      if (((ulong)param_8 & 1) == 0) {
        param_9 = (undefined1 (*) [16])(puVar6 + -0x5f0);
        func_0x00010839e008();
        if (((ulong)param_8 & 1) == 0) {
          unaff_x21 = unaff_x22;
          if ((unaff_x22[3][0] & 1) == 0) {
            func_0x00010839e06c();
            *(undefined8 *)(puVar6 + -0x5f8) = *(undefined8 *)(puVar6 + -0x98);
            unaff_x21 = *(undefined1 (**) [16])(puVar6 + -0xa0);
          }
          auVar36 = NEON_scvtf(*unaff_x21,4);
          param_3 = CONCAT44(auVar36._4_4_ + -1.0,auVar36._0_4_ + -1.0);
          in_register_00005048 = CONCAT44(auVar36._12_4_ + 1.0,auVar36._8_4_ + 1.0);
          param_2 = 0x3f8000003f800000;
          *(undefined8 *)(puVar6 + -0x538) = in_register_00005048;
          *(undefined8 *)(puVar6 + -0x540) = param_3;
          *(float *)(puVar6 + -0x528) = auVar36._8_4_ + -1.0;
          *(float *)(puVar6 + -0x524) = auVar36._12_4_ + -1.0;
          *(float *)(puVar6 + -0x530) = auVar36._0_4_ + 1.0;
          *(float *)(puVar6 + -0x52c) = auVar36._4_4_ + 1.0;
          func_0x00010839df64();
          if ((extraout_x8_00 & 1) != 0) {
            *(undefined8 *)(puVar6 + -0x530) = 0;
            *(undefined8 *)(puVar6 + -0x528) = 0;
          }
          unaff_x23 = puVar6 + -0x530;
          if ((code)unaff_x22[3][2] == (code)0x0) {
            unaff_x23 = (undefined1 *)0x0;
          }
          unaff_x22 = (undefined1 (*) [16])(puVar6 + -0x540);
        }
        else {
          func_0x00010839e0c0();
        }
        func_0x00010839dee4();
        func_0x00010839e180();
        func_0x00010839dee4();
        func_0x00010839e040();
        unaff_x24 = unaff_x27;
        do {
          unaff_x25 = *(byte **)(puVar6 + -0x558);
          in_ZR = unaff_x25 == *(byte **)(puVar6 + -0x600);
          if ((bool)in_ZR) {
            func_0x00010839e05c();
            unaff_x27 = unaff_x24;
            break;
          }
          unaff_x26 = *(ulong *)(puVar6 + -0x548);
          param_8 = (undefined1 (*) [16])(puVar6 + -0x558);
          func_0x0001081e8ec8();
          bVar1 = *unaff_x25;
          unaff_x27 = (ulong)bVar1;
          if (5 < bVar1) {
LAB_10839d2f8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10839d2fc);
            (*pcVar5)();
          }
          pbVar30 = *(byte **)(puVar6 + -0x558);
          uVar27 = *(byte **)(puVar6 + -0x600) <= pbVar30;
          in_ZR = pbVar30 == *(byte **)(puVar6 + -0x600);
          if ((bool)in_ZR) {
            unaff_x25 = (byte *)0x6;
          }
          else {
            unaff_x25 = (byte *)(ulong)*pbVar30;
          }
          unaff_x30 = (code *)0x10839d1d4;
          fVar34 = (float)func_0x00010839df3c();
          fVar40 = (float)param_3;
          fVar37 = (float)param_2;
          pauVar31 = (undefined1 (*) [16])
                     ((ulong)(byte)(&UNK_10df1e75b)[unaff_x27] * 4 + 0x10839d1f0);
          puVar8 = puVar6 + -0x610;
          puVar9 = puVar6 + -0x610;
          puVar10 = puVar6 + -0x610;
          puVar11 = puVar6 + -0x610;
          puVar12 = puVar6 + -0x610;
          puVar13 = puVar6 + -0x610;
          puVar14 = puVar6 + -0x610;
          puVar15 = puVar6 + -0x610;
          puVar16 = puVar6 + -0x610;
          puVar17 = puVar6 + -0x610;
          puVar18 = puVar6 + -0x610;
          puVar19 = puVar6 + -0x610;
          puVar20 = puVar6 + -0x610;
          puVar21 = puVar6 + -0x610;
          puVar22 = puVar6 + -0x610;
          puVar23 = (undefined4 *)(puVar6 + -0x610);
          pauVar24 = (undefined1 (*) [16])(puVar6 + -0x610);
          pauVar25 = (undefined1 (*) [16])(puVar6 + -0x610);
          puVar4 = puVar6 + -0x610;
          pauVar32 = unaff_x19;
          unaff_x28 = unaff_x19;
          switch(bVar1) {
          default:
            unaff_x19 = *(undefined1 (**) [16])(puVar6 + -0x90);
          case 0x45:
          case 0x49:
            *(undefined1 (**) [16])(puVar6 + -0x608) = unaff_x19;
            goto code_r0x00010839d2c0;
          case 1:
            func_0x00010839de90();
            pcVar5 = (code *)0x2;
            func_0x00010839dd34();
            func_0x00010839de54();
            uVar35 = *(undefined8 *)(puVar6 + -0x88);
            break;
          case 2:
            func_0x00010839de90();
            pcVar5 = (code *)0x3;
            func_0x00010839dd34();
            FUN_10839e1b8(puVar6 + -0x90);
            param_8 = (undefined1 (*) [16])(puVar6 + -0x90);
            func_0x00010839de3c();
            goto code_r0x00010839d23c;
          case 3:
            func_0x00010839de90();
            pcVar5 = (code *)0x3;
            func_0x00010839dd34();
            param_8 = (undefined1 (*) [16])(puVar6 + -0x5f0);
            func_0x00010839dfd0();
            pauVar31 = param_8;
            for (unaff_x26 = 0; (int)unaff_x26 < *(int *)(puVar6 + -0x560);
                unaff_x26 = (ulong)((int)unaff_x26 + 1)) {
              FUN_10839e1b8(pauVar31);
              param_8 = pauVar31;
              func_0x00010839de3c();
              pauVar31 = pauVar31 + 1;
            }
code_r0x00010839d23c:
            uVar35 = *(undefined8 *)(puVar6 + -0x80);
            break;
          case 4:
            func_0x00010839de90();
            pcVar5 = (code *)0x4;
            func_0x00010839dd34();
            param_8 = (undefined1 (*) [16])(puVar6 + -0x90);
            func_0x00010839de68();
            FUN_10839d804();
            uVar35 = *(undefined8 *)(puVar6 + -0x78);
            break;
          case 5:
            *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x608);
            *(undefined1 (**) [16])(puVar6 + -0x88) = unaff_x19;
            if ((int)unaff_x24 == 0) goto code_r0x00010839d2b4;
          case 0xb9:
          case 0xbd:
          case 0xcc:
code_r0x00010839d2bc:
            func_0x00010839de54();
            goto code_r0x00010839d2c0;
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x47:
          case 0x48:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x51:
            goto code_r0x00010839d5ec;
          case 0x46:
          case 0x4a:
          case 0x6a:
          case 0x72:
            goto LAB_10839d4f0;
          case 0x4e:
          case 0x52:
          case 0x74:
            goto code_r0x00010839d2ec;
          case 0x56:
          case 0x5a:
          case 0x5e:
          case 0x62:
            func_0x00010839e1ac();
            FUN_10839aec8();
code_r0x00010839d5ec:
            pauVar31 = (undefined1 (*) [16])(puVar6 + -0x5e8);
            func_0x00010834950c(pauVar31);
            return pauVar31;
          case 0x57:
          case 0x5b:
          case 0x5f:
          case 99:
            goto code_r0x00010839d3ec;
          case 0x58:
          case 0x5c:
            goto code_r0x00010839d508;
          case 0x60:
          case 100:
            pauVar32 = param_8;
            goto code_r0x00010839d314;
          case 0x6b:
          case 0x73:
            *(ulong *)(puVar6 + -0x680) = unaff_d9;
            *(ulong *)(puVar6 + -0x678) = unaff_d8;
            *(undefined1 (**) [16])(puVar6 + -0x670) = unaff_x19;
            *(ulong *)(puVar6 + -0x668) = unaff_x27;
            *(ulong *)(puVar6 + -0x660) = unaff_x26;
            *(byte **)(puVar6 + -0x658) = unaff_x25;
            *(ulong *)(puVar6 + -0x650) = unaff_x24;
            *(undefined1 **)(puVar6 + -0x648) = unaff_x23;
            *(undefined1 (**) [16])(puVar6 + -0x640) = unaff_x22;
            *(undefined1 (**) [16])(puVar6 + -0x638) = unaff_x21;
            *(undefined1 (**) [16])(puVar6 + -0x630) = unaff_x20;
            *(undefined1 (**) [16])(puVar6 + -0x628) = unaff_x19;
            *(undefined1 **)(puVar6 + -0x620) = unaff_x29;
            *(undefined8 *)(puVar6 + -0x618) = 0x10839d1d4;
            pauVar31 = param_8;
            pauVar24 = param_10;
            func_0x00010839c538();
            *(undefined8 *)(puVar6 + -0x690) = extraout_x8;
            if (pauVar24 == (undefined1 (*) [16])0x0) {
              *(undefined8 *)(puVar6 + -0x6a8) = 0x46fffe0046fffe00;
              *(undefined8 *)(puVar6 + -0x6b0) = 0xc6fffe00c6fffe00;
              *(undefined8 *)(puVar6 + -0x6c0) = 0;
              *(undefined8 *)(puVar6 + -0x6b8) = 0;
            }
            else {
              if (*(long *)param_10[1] == -1) goto LAB_10839b070;
              *(undefined8 *)(puVar6 + -0x6a8) = 0x46fffe0046fffe00;
              *(undefined8 *)(puVar6 + -0x6b0) = 0xc6fffe00c6fffe00;
              auVar36 = NEON_scvtf(*param_10,4);
              *(float *)(puVar6 + -0x6b8) = auVar36._8_4_ + 1.0;
              *(float *)(puVar6 + -0x6b4) = auVar36._12_4_ + 1.0;
              *(float *)(puVar6 + -0x6c0) = auVar36._0_4_ + -1.0;
              *(float *)(puVar6 + -0x6bc) = auVar36._4_4_ + -1.0;
            }
            uVar33 = 0;
            iVar29 = (int)param_9;
            if (iVar29 < 2) {
              iVar29 = 1;
            }
            *(long *)(puVar6 + -0x748) = UNK_10df1e6c0._8_8_;
            *(long *)(puVar6 + -0x750) = (long)UNK_10df1e6c0;
            goto LAB_10839af6c;
          case 0x6c:
LAB_10839d4f0:
            func_0x00010839e1ac();
            FUN_10839c5a0();
            param_8 = (undefined1 (*) [16])(puVar6 + -0x5f8);
            func_0x00010834950c(param_8);
code_r0x00010839d508:
            return param_8;
          case 0x75:
          case 0x86:
          case 0x98:
          case 0xaf:
          case 0xcb:
          case 0xdb:
          case 0xee:
code_r0x00010839d2b4:
            func_0x00010839e144();
          case 0x97:
          case 0xba:
          case 0xbe:
            func_0x00010839dd34();
            goto code_r0x00010839d2bc;
          case 0x76:
          case 0x87:
          case 0xb0:
            goto code_r0x00010839d2c0;
          case 0x77:
          case 0x91:
          case 0xa2:
            goto code_r0x00010839d314;
          case 0x78:
          case 0xfc:
            goto code_r0x00010839d3a8;
          case 0x79:
            goto code_r0x00010839d3c8;
          case 0x7a:
          case 0x7d:
          case 0x83:
          case 0x8c:
          case 0x95:
          case 0x9d:
          case 0xa6:
          case 0xac:
          case 0xb6:
          case 199:
          case 0xd2:
          case 0xd8:
          case 0xe2:
          case 0xe6:
          case 0xe7:
          case 0xec:
          case 0xf5:
          case 0xf9:
            goto code_r0x00010839d384;
          case 0x7b:
          case 0x84:
          case 0xad:
          case 0xb3:
          case 0xc6:
          case 0xd1:
          case 0xe1:
          case 0xf4:
            goto code_r0x00010839d3b8;
          case 0x7c:
          case 0xaa:
          case 0xd6:
          case 0xd7:
            goto code_r0x00010839d3bc;
          case 0x7e:
            goto LAB_10839d2f8;
          case 0x7f:
          case 0x90:
          case 0xa1:
          case 0xeb:
            goto code_r0x00010839d3a0;
          case 0x80:
          case 0x8e:
          case 0x9f:
          case 0xb4:
          case 0xfb:
            goto code_r0x00010839d394;
          case 0x81:
          case 0x82:
          case 0xab:
          case 0xb5:
          case 0xc5:
          case 0xd0:
          case 0xd9:
          case 0xe0:
          case 0xf3:
            goto code_r0x00010839d3c0;
          case 0x88:
          case 0x8a:
          case 0x99:
          case 0x9b:
          case 0xb1:
          case 0xbc:
          case 0xc1:
          case 0xc4:
          case 0xcd:
          case 0xcf:
          case 0xdd:
          case 0xdf:
          case 0xe5:
          case 0xf0:
          case 0xf2:
            puVar7 = puVar6 + -0x690;
            *(ulong *)(puVar6 + -0x670) = unaff_d13;
            *(ulong *)(puVar6 + -0x668) = unaff_d12;
            *(ulong *)(puVar6 + -0x660) = unaff_d11;
            *(ulong *)(puVar6 + -0x658) = unaff_d10;
            *(ulong *)(puVar6 + -0x650) = unaff_d9;
            *(ulong *)(puVar6 + -0x648) = unaff_d8;
          case 0xc3:
            *(undefined1 (**) [16])(puVar7 + 0x50) = unaff_x22;
            *(undefined1 (**) [16])(puVar7 + 0x58) = unaff_x21;
            *(undefined1 (**) [16])(puVar7 + 0x60) = unaff_x20;
            *(undefined1 (**) [16])(puVar7 + 0x68) = unaff_x19;
            *(undefined1 **)(puVar7 + 0x70) = unaff_x29;
            *(undefined8 *)(puVar7 + 0x78) = 0x10839d1d4;
            unaff_d8 = (ulong)(uint)*(float *)*param_9;
            if (0.0 <= *(float *)*param_9) {
              unaff_d10 = (ulong)*(uint *)(*param_9 + 4);
              puVar8 = puVar7;
code_r0x00010839d36c:
              puVar9 = puVar8;
              if (0.0 <= (float)unaff_d10) {
code_r0x00010839d374:
                puVar10 = puVar9;
                unaff_x19 = (undefined1 (*) [16])pcVar5;
code_r0x00010839d378:
                puVar11 = puVar10;
                unaff_x20 = param_10;
code_r0x00010839d37c:
                fVar34 = 0.5;
                puVar12 = puVar11;
code_r0x00010839d380:
                fVar37 = (float)unaff_d8 * fVar34;
                puVar13 = puVar12;
code_r0x00010839d384:
                fVar40 = (float)unaff_d10 * fVar34;
                param_4 = *(float *)*param_8;
                param_5 = *(float *)(*param_8 + 4);
                puVar14 = puVar13;
code_r0x00010839d38c:
                unaff_d11 = (ulong)(uint)(param_4 - fVar37);
                fVar34 = param_5 - fVar40;
                puVar15 = puVar14;
code_r0x00010839d394:
                param_6 = *(float *)(*param_8 + 8);
                param_7 = *(float *)(*param_8 + 0xc);
                unaff_d9 = (ulong)(uint)(fVar37 + param_6);
                puVar16 = puVar15;
code_r0x00010839d39c:
                unaff_d12 = (ulong)(uint)(fVar40 + param_7);
                puVar17 = puVar16;
code_r0x00010839d3a0:
                *(int *)(puVar17 + 0x10) = (int)unaff_d11;
                *(float *)(puVar17 + 0x14) = fVar34;
                puVar18 = puVar17;
code_r0x00010839d3a4:
                *(int *)(puVar18 + 0x18) = (int)unaff_d9;
                *(int *)(puVar18 + 0x1c) = (int)unaff_d12;
                puVar19 = puVar18;
code_r0x00010839d3a8:
                fVar37 = param_6 - param_4;
                fVar40 = param_7 - param_5;
                puVar20 = puVar19;
code_r0x00010839d3b0:
                in_ZR = false;
                uVar27 = false;
                puVar21 = puVar20;
                if ((float)unaff_d8 < fVar37) {
                  in_ZR = false;
                  uVar27 = true;
                  fVar37 = (float)unaff_d10;
                  if (!NAN(fVar40) && !NAN(fVar37)) {
                    in_ZR = fVar40 == fVar37;
                    uVar27 = fVar37 <= fVar40;
                  }
                }
code_r0x00010839d3b8:
                puVar22 = puVar21;
                if ((bool)uVar27 && !(bool)in_ZR) {
                  unaff_d13 = (ulong)(uint)((float)unaff_d10 + fVar34);
                  puVar23 = (undefined4 *)puVar21;
code_r0x00010839d3c8:
                  *puVar23 = (int)unaff_d11;
                  puVar23[1] = fVar34;
                  pauVar24 = (undefined1 (*) [16])puVar23;
code_r0x00010839d3cc:
                  *(int *)(*pauVar24 + 8) = (int)unaff_d9;
                  *(int *)(*pauVar24 + 0xc) = (int)unaff_d13;
                  func_0x00010839dec8();
                  fVar34 = (float)unaff_d12 - (float)unaff_d10;
                  unaff_d10 = (ulong)(uint)fVar34;
                  *(float *)(*pauVar24 + 4) = fVar34;
                  *(float *)(*pauVar24 + 0xc) = (float)unaff_d12;
                  func_0x00010839dec8();
                  fVar34 = (float)unaff_d8 + (float)unaff_d11;
                  pauVar25 = pauVar24;
                  unaff_x21 = pauVar24;
code_r0x00010839d3ec:
                  *(int *)pauVar25 = (int)unaff_d11;
                  *(float *)((long)pauVar25 + 4) = (float)unaff_d13;
                  *(float *)((long)pauVar25 + 8) = fVar34;
                  *(float *)((long)pauVar25 + 0xc) = (float)unaff_d10;
                  func_0x00010839dec8();
                  *(float *)pauVar25 = (float)unaff_d9 - (float)unaff_d8;
                  *(float *)((long)pauVar25 + 8) = (float)unaff_d9;
                  param_8 = unaff_x21;
                }
                else {
code_r0x00010839d3bc:
                  unaff_x21 = (undefined1 (*) [16])(puVar22 + 0x10);
code_r0x00010839d3c0:
                  param_8 = unaff_x21;
                }
                FUN_108397c28(param_8,unaff_x20,unaff_x19);
              }
            }
            return param_8;
          case 0x89:
          case 0x9a:
          case 0xc2:
          case 0xce:
          case 0xde:
          case 0xe8:
          case 0xf1:
            goto code_r0x00010839d39c;
          case 0x8b:
          case 0x9c:
          case 0xb2:
            goto code_r0x00010839d3b0;
          case 0x8d:
          case 0x9e:
            goto code_r0x00010839d37c;
          case 0x8f:
          case 0x93:
          case 0xa0:
          case 0xa4:
          case 0xa9:
          case 200:
          case 0xd3:
          case 0xe3:
          case 0xe9:
          case 0xf6:
          case 0xfe:
            goto code_r0x00010839d374;
          case 0x92:
          case 0xa3:
          case 0xc9:
          case 0xd4:
          case 0xe4:
          case 0xf7:
            goto code_r0x00010839d3a4;
          case 0x94:
          case 0xa5:
            goto code_r0x00010839d38c;
          case 0xa7:
          case 0xb7:
          case 0xbb:
            goto code_r0x00010839d36c;
          case 0xa8:
          case 0xf8:
            goto FUN_10839d09c;
          case 0xb8:
            goto code_r0x00010839d300;
          case 0xc0:
            goto code_r0x00010839d2d4;
          case 0xd5:
            goto code_r0x00010839d2f4;
          case 0xdc:
            goto code_r0x00010839d2c8;
          case 0xea:
          case 0xff:
            goto code_r0x00010839d378;
          case 0xef:
            goto code_r0x00010839d2d0;
          case 0xfa:
            goto code_r0x00010839d3cc;
          case 0xfd:
            goto code_r0x00010839d380;
          }
          *(undefined8 *)(puVar6 + -0x608) = uVar35;
code_r0x00010839d2c0:
          uVar27 = 3 < bVar1 - 1;
code_r0x00010839d2c8:
          in_ZR = !(bool)uVar27 && (int)unaff_x24 == 0;
          pauVar31 = *(undefined1 (**) [16])(puVar6 + -0x90);
          pauVar32 = unaff_x19;
code_r0x00010839d2d0:
          unaff_x19 = pauVar31;
          if (!(bool)in_ZR) {
            unaff_x19 = pauVar32;
          }
code_r0x00010839d2d4:
          uVar33 = unaff_x24;
          unaff_x24 = unaff_x27;
        } while( true );
      }
      func_0x00010839e064();
      unaff_x24 = uVar33;
    }
    func_0x00010839de28(*(undefined8 *)(puVar6 + -0x70));
    if ((bool)in_ZR) {
code_r0x00010839d2ec:
code_r0x00010839d2f4:
      return param_8;
    }
    ___stack_chk_fail();
code_r0x00010839d300:
    pauVar32 = param_8;
    unaff_x28 = unaff_x19;
code_r0x00010839d314:
    func_0x00010839e064();
    unaff_x30 = FUN_10839d330;
    func_0x00010839dfb0();
    unaff_x19 = pauVar32;
  } while( true );
LAB_10839af6c:
  if (uVar33 == iVar29 - 1) {
LAB_10839b070:
    bVar26 = true;
    func_0x00010839c460(*(undefined8 *)(puVar6 + -0x690));
    if (bVar26) {
      return pauVar31;
    }
    ___stack_chk_fail();
    if (*(long *)pauVar31[1] != -1) {
      *(undefined1 (**) [16])(puVar6 + -0x770) = param_10;
      *(code **)(puVar6 + -0x768) = pcVar5;
      *(undefined1 **)(puVar6 + -0x760) = puVar6 + -0x620;
      *(code **)(puVar6 + -0x758) = FUN_10839b0a4;
      FUN_10821a6d8();
      uVar28 = (uint)param_9;
      if (((ulong)param_9 & 1) == 0) {
        func_0x00010839c548();
        FUN_10821a044();
        pauVar31 = (undefined1 (*) [16])(ulong)(uVar28 ^ 1);
      }
      else {
        pauVar31 = (undefined1 (*) [16])0x1;
      }
      return pauVar31;
    }
    return (undefined1 (*) [16])0x1;
  }
  pauVar31 = (undefined1 (*) [16])(*param_8 + uVar33 * 8);
  param_9 = (undefined1 (*) [16])(puVar6 + -0x6b0);
  FUN_10835de90(pauVar31,param_9,puVar6 + -0x6a0);
  if ((int)pauVar31 != 0) {
    if (param_10 != (undefined1 (*) [16])0x0) {
      pauVar31 = (undefined1 (*) [16])(puVar6 + -0x6a0);
      param_9 = (undefined1 (*) [16])(puVar6 + -0x6c0);
      FUN_10835de90(pauVar31,param_9,puVar6 + -0x6a0);
      if ((int)pauVar31 == 0) goto LAB_10839b010;
    }
    uVar41 = NEON_fcvtzs(*(undefined8 *)(puVar6 + -0x6a0),6,4);
    uVar38 = NEON_fcvtzs(*(undefined8 *)(puVar6 + -0x698),6,4);
    if (param_10 == (undefined1 (*) [16])0x0) {
LAB_10839aff4:
      pauVar31 = (undefined1 (*) [16])(uVar41 & 0xffffffff);
      param_9 = (undefined1 (*) [16])(uVar41 >> 0x20);
      FUN_10839b0f4(pauVar31,param_9,uVar38 & 0xffffffff,uVar38 >> 0x20,0,pcVar5);
    }
    else {
      uVar35 = NEON_smin(uVar38,uVar41,4);
      *(undefined8 *)(puVar6 + -0x738) = 0;
      *(ulong *)(puVar6 + -0x740) = uVar38;
      *(undefined8 *)(puVar6 + -0x728) = in_register_00005048;
      *(ulong *)(puVar6 + -0x730) = uVar41;
      uVar39 = NEON_smax(uVar41,uVar38,4);
      *(ulong *)(puVar6 + -0x6c8) =
           CONCAT44((int)((ulong)*(undefined8 *)(puVar6 + -0x748) >> 0x20) +
                    ((int)((ulong)uVar39 >> 0x20) + 0x3f >> 6),
                    (int)*(undefined8 *)(puVar6 + -0x748) + ((int)uVar39 + 0x3f >> 6));
      *(ulong *)(puVar6 + -0x6d0) =
           CONCAT44((int)((ulong)*(undefined8 *)(puVar6 + -0x750) >> 0x20) +
                    (int)((long)uVar35 >> 0x26),
                    (int)*(undefined8 *)(puVar6 + -0x750) + ((int)uVar35 >> 6));
      param_9 = (undefined1 (*) [16])(puVar6 + -0x6d0);
      pauVar31 = param_10;
      FUN_10839b0a4();
      if (((ulong)pauVar31 & 1) == 0) {
        pauVar31 = param_10;
        func_0x00010834954c(param_10,puVar6 + -0x6d0);
        if (((ulong)pauVar31 & 1) != 0) {
          uVar38 = *(ulong *)(puVar6 + -0x740);
          in_register_00005048 = *(undefined8 *)(puVar6 + -0x728);
          uVar41 = *(ulong *)(puVar6 + -0x730);
          goto LAB_10839aff4;
        }
        pauVar31 = (undefined1 (*) [16])(puVar6 + -0x720);
        param_9 = param_10;
        FUN_1083903d0(pauVar31,param_10,puVar6 + -0x6d0);
        uVar2 = *(undefined4 *)(puVar6 + -0x740);
        uVar3 = *(undefined4 *)(puVar6 + -0x73c);
        auVar36 = *(undefined1 (*) [16])(puVar6 + -0x730);
        pauVar24 = (undefined1 (*) [16])(ulong)auVar36._4_4_;
        while ((puVar6[-0x6d8] & 1) == 0) {
          param_9 = pauVar24;
          FUN_10839b0f4(auVar36._0_4_,pauVar24,uVar2,uVar3,puVar6 + -0x6e8,pcVar5);
          pauVar31 = (undefined1 (*) [16])(puVar6 + -0x720);
          FUN_108390454();
        }
      }
    }
  }
LAB_10839b010:
  uVar33 = uVar33 + 1;
  goto LAB_10839af6c;
}



/* Entry: 10839d33c; end: 10839d433;  */

void FUN_10839d33c(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  pfVar3 = &fStack_80;
  fVar5 = *param_2;
  if ((0.0 <= fVar5) && (fVar7 = param_2[1], 0.0 <= fVar7)) {
    fVar8 = *param_1 - fVar5 * 0.5;
    fStack_6c = param_1[1] - fVar7 * 0.5;
    fVar6 = fVar5 * 0.5 + param_1[2];
    fVar9 = fVar7 * 0.5 + param_1[3];
    fVar4 = param_1[3] - param_1[1];
    bVar1 = false;
    bVar2 = false;
    if (fVar5 < param_1[2] - *param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4) && !NAN(fVar7)) {
        bVar1 = fVar4 == fVar7;
        bVar2 = fVar7 <= fVar4;
      }
    }
    fStack_70 = fVar8;
    fStack_68 = fVar6;
    fStack_64 = fVar9;
    if (bVar2 && !bVar1) {
      fVar4 = fVar7 + fStack_6c;
      fStack_80 = fVar8;
      fStack_7c = fStack_6c;
      fStack_78 = fVar6;
      fStack_74 = fVar4;
      func_0x00010839dec8();
      fStack_7c = fVar9 - fVar7;
      fStack_74 = fVar9;
      func_0x00010839dec8();
      fStack_78 = fVar5 + fVar8;
      fStack_80 = fVar8;
      fStack_7c = fVar4;
      fStack_74 = fVar9 - fVar7;
      func_0x00010839dec8();
      fStack_80 = fVar6 - fVar5;
      fStack_78 = fVar6;
    }
    else {
      pfVar3 = &fStack_70;
    }
    FUN_108397c28(pfVar3,param_3,param_4);
  }
  return;
}



/* Entry: 10839d434; end: 10839d52f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10839d434(ulong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  int *piVar9;
  undefined1 (*pauVar10) [16];
  undefined1 *puVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int iVar15;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar16;
  ulong extraout_x8_00;
  int iVar17;
  int extraout_w9;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w13;
  int extraout_w13_00;
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x22) [16];
  undefined1 (*unaff_x23) [16];
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  int iVar23;
  undefined1 *puStack_6a0;
  undefined1 (*pauStack_698) [16];
  int iStack_690;
  int iStack_68c;
  int iStack_688;
  int iStack_684;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined **ppuStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 (*pauStack_648) [16];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined **ppuStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 (*pauStack_618) [16];
  undefined1 (*pauStack_610) [16];
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 *puStack_4e8;
  undefined1 (*pauStack_4e0) [16];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  ulong uStack_178;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  int aiStack_110 [4];
  int aiStack_100 [4];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010839e094();
  if (!(bool)in_ZR) {
    func_0x00010839dff4();
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    func_0x00010839e088(0xffffffffffffffff);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    lStack_4c0 = extraout_x9_01 + 0x10;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010839e07c(&uStack_4d8);
    uStack_68 = 0;
    puVar11 = &stack0xffffffffffffffb0;
    func_0x00010812f180();
    puStack_4e8 = puVar11;
    pauStack_4e0 = param_2;
    func_0x00010839e008();
    if (((ulong)puVar11 & 1) == 0) {
      func_0x00010839dfc4(&uStack_4d8);
    }
    func_0x00010839e1ac();
    FUN_10839c5a0();
    func_0x00010834950c(&uStack_4d8);
    return;
  }
  func_0x00010839e1ac();
  pauVar14 = unaff_x22;
  func_0x00010839deb8();
  ppuStack_f0 = &PTR_DAT_110a3d3a8;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  ppuStack_d8 = &PTR_FUN_110a3d208;
  uStack_98 = 0;
  ppuStack_a8 = &PTR_DAT_110a3d290;
  uStack_a0 = 0;
  aiStack_100[0] = 0;
  aiStack_100[1] = 0;
  aiStack_100[2] = 0;
  aiStack_100[3] = 0;
  aiStack_110[0] = 0;
  aiStack_110[1] = 0;
  aiStack_110[2] = 0;
  aiStack_110[3] = 0;
  auStack_120._8_8_ = UNK_10df1e6b0._8_8_;
  auStack_120._0_8_ = (undefined8)UNK_10df1e6b0;
  uStack_130 = 0;
  uStack_128 = 0;
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    auVar21 = NEON_scvtf(*unaff_x22,4);
    uStack_128 = auVar21._8_8_;
    uStack_130 = auVar21._0_8_;
  }
  uVar20 = 0;
  iVar12 = (int)param_2;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  pauVar10 = unaff_x22;
  uStack_70 = extraout_x8;
  do {
    uVar5 = uVar20 == iVar12 - 1;
    if ((bool)uVar5) {
      FUN_10839c3dc();
      func_0x00010839de28(uStack_70);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      pppuVar8 = &ppuStack_f0;
      FUN_10839c3dc();
      func_0x00010839dfb0();
      uStack_608 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      pauVar13 = param_2;
      pauStack_180 = pauVar10;
      uStack_178 = param_1;
      func_0x00010839e088(0xffffffffffffffff);
      lStack_5f0 = extraout_x9_00 + 0x10;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      func_0x00010839e07c(&uStack_608);
      uStack_198 = 0;
      ppuStack_678 = &PTR_DAT_110a3d3a8;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_650 = 0;
      uStack_668 = 0;
      ppuStack_660 = &PTR_FUN_110a3d208;
      uStack_640 = 0;
      uStack_638 = 0;
      uStack_620 = 0;
      ppuStack_630 = &PTR_DAT_110a3d290;
      uStack_628 = 0;
      uVar22 = NEON_fminnm(CONCAT44((int)(*(float *)(pppuVar8 + 1) + 1.0),(int)SUB84(*pppuVar8,0)),
                           0x4effffff4effffff,4);
      uVar22 = NEON_fmaxnm(uVar22,0xceffffffceffffff,4);
      iStack_690 = (int)(float)uVar22;
      iStack_688 = (int)(float)((ulong)uVar22 >> 0x20);
      uVar22 = NEON_fminnm(CONCAT44((int)(*(float *)((long)pppuVar8 + 0xc) + 1.0),
                                    (int)(float)((ulong)*pppuVar8 >> 0x20)),0x4effffff4effffff,4);
      uVar22 = NEON_fmaxnm(uVar22,0xceffffffceffffff,4);
      iStack_68c = (int)(float)uVar22;
      iStack_684 = (int)(float)((ulong)uVar22 >> 0x20);
      lVar16 = 0;
      if (pauVar13[3][0] == '\0') {
        lVar16 = 0x18;
      }
      puVar11 = *pauVar13 + lVar16;
      func_0x00010839dfb8();
      piVar9 = &iStack_690;
      puStack_6a0 = puVar11;
      pauStack_698 = pauVar13;
      func_0x00010821b838(piVar9,&puStack_6a0);
      if ((((ulong)piVar9 & 1) != 0) &&
         (pauVar10 = param_2, FUN_108349328(param_2,&iStack_690), ((ulong)pauVar10 & 1) == 0)) {
        pauVar10 = param_2;
        FUN_108349534(param_2,&iStack_690);
        if ((((ulong)pauVar10 & 1) == 0) &&
           ((pauVar10 = pauVar14, (param_2[3][0] & 1) != 0 ||
            (FUN_108387754(&uStack_608,param_2,pauVar14), pauVar14 = pauStack_188,
            pauVar10 = pauStack_188, param_2 = pauStack_190,
            pauStack_190 != (undefined1 (*) [16])0x0)))) {
          if (*(long *)param_2[1] == -1) {
            pauVar14 = (undefined1 (*) [16])&ppuStack_678;
          }
          else if (*(long *)param_2[1] == 0) {
            pauVar14 = (undefined1 (*) [16])&ppuStack_660;
            uStack_640 = *(undefined8 *)*param_2;
            uStack_638 = *(undefined8 *)(*param_2 + 8);
            pauStack_648 = pauVar10;
          }
          else {
            pauVar14 = (undefined1 (*) [16])&ppuStack_630;
            pauStack_618 = pauVar10;
            pauStack_610 = param_2;
          }
        }
        iVar12 = iStack_688 - iStack_690;
        iVar19 = iStack_684 - iStack_68c;
        if (iVar19 != 0 || iVar12 != 0) {
          if ((iVar12 >= 3 && iVar19 != 2) && (iVar12 < 3 || 1 < iVar19)) {
            func_0x00010839e124(*(undefined8 *)(*(long *)*pauVar14 + 0x10));
            (**(code **)(*(long *)*pauVar14 + 0x28))
                      (pauVar14,iStack_690,iStack_68c + 1,1,iVar19 + -2);
            (**(code **)(*(long *)*pauVar14 + 0x28))
                      (pauVar14,iStack_688 + -1,iStack_68c + 1,1,iVar19 + -2);
            func_0x00010839e124(*(undefined8 *)(*(long *)*pauVar14 + 0x10));
          }
          else {
            (**(code **)(*(long *)*pauVar14 + 0x28))(pauVar14,iStack_690,iStack_68c,iVar12,iVar19);
          }
        }
      }
      FUN_10839c3dc(&ppuStack_678);
      func_0x00010834950c(&uStack_608);
      return;
    }
    param_2 = &auStack_120;
    pauVar14 = (undefined1 (*) [16])&uStack_80;
    uVar7 = param_1;
    FUN_10835de90();
    if ((uVar7 & 1) != 0) {
      if (unaff_x22 != (undefined1 (*) [16])0x0) {
        iVar19 = (int)&uStack_80;
        param_2 = (undefined1 (*) [16])&uStack_130;
        pauVar14 = (undefined1 (*) [16])&uStack_80;
        FUN_10835de90();
        if (iVar19 == 0) goto LAB_10839c848;
      }
      uVar22 = NEON_fcvtzs(uStack_80,6,4);
      iVar19 = (int)(fStack_78 * 64.0);
      iVar18 = (int)(fStack_74 * 64.0);
      iVar4 = (int)uVar22;
      iVar23 = SUB84(uVar22,4);
      pauVar10 = unaff_x20;
      if (unaff_x22 != (undefined1 (*) [16])0x0) {
        aiStack_100[3] = *(int *)(*unaff_x22 + 0xc) << 6;
        aiStack_100[2] = *(int *)(*unaff_x22 + 8) << 6;
        aiStack_100[1] = *(int *)(*unaff_x22 + 4) << 6;
        aiStack_100[0] = *(int *)*unaff_x22 << 6;
        iVar15 = iVar19;
        aiStack_110._0_8_ = uVar22;
        if (iVar19 < iVar4) {
          aiStack_110[1] = iVar23;
          aiStack_110[0] = iVar19;
          iVar15 = iVar4;
        }
        iVar17 = iVar18;
        if (iVar18 < iVar23) {
          aiStack_110[1] = iVar18;
          iVar17 = iVar23;
        }
        aiStack_110[3] = iVar17 + 0x40;
        aiStack_110[2] = iVar15 + 0x40;
        uVar7 = 0;
        param_2 = (undefined1 (*) [16])aiStack_100;
        FUN_10821a044();
        if ((uVar7 & 1) == 0) goto LAB_10839c848;
        lVar16 = *(long *)unaff_x22[1];
        if (lVar16 == 0) {
          uVar7 = 0;
          param_2 = (undefined1 (*) [16])aiStack_110;
          func_0x000108219544();
          if ((uVar7 & 1) != 0) goto LAB_10839c768;
          lVar16 = *(long *)unaff_x22[1];
        }
        if (lVar16 == -1) {
          pauVar10 = (undefined1 (*) [16])&ppuStack_f0;
        }
        else {
          pauVar10 = (undefined1 (*) [16])&ppuStack_a8;
          if (lVar16 == 0) {
            pauVar10 = (undefined1 (*) [16])&ppuStack_d8;
          }
        }
      }
LAB_10839c768:
      uVar3 = iVar19 - iVar4;
      uVar2 = iVar18 - iVar23;
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 < uVar1) {
        bVar6 = iVar4 == iVar19;
        func_0x00010839e158();
        if (!bVar6) {
          lVar16 = 0;
          if ((long)extraout_w8 != 0) {
            lVar16 = (long)(-(extraout_x9 >> 0x1f & 1) & 0xffff000000000000 |
                           (extraout_x9 & 0xffffffff) << 0x10) / (long)extraout_w8;
          }
          func_0x00010839df7c(lVar16);
          do {
            pauVar14 = (undefined1 (*) [16])(ulong)(uint)(iVar19 >> 0x10);
            param_2 = unaff_x23;
            (**(code **)(*(long *)*pauVar10 + 0x10))(pauVar10,unaff_x23,pauVar14,1);
            iVar19 = iVar19 + iVar18;
            uVar1 = (int)unaff_x23 + 1;
            unaff_x23 = (undefined1 (*) [16])(ulong)uVar1;
          } while ((int)uVar1 < extraout_w13 >> 6);
        }
      }
      else {
        bVar6 = iVar23 == iVar18;
        func_0x00010839e158();
        if (!bVar6) {
          lVar16 = 0;
          if ((long)extraout_w9 != 0) {
            lVar16 = (long)(-(extraout_x8_00 >> 0x1f & 1) & 0xffff000000000000 |
                           (extraout_x8_00 & 0xffffffff) << 0x10) / (long)extraout_w9;
          }
          func_0x00010839df7c(lVar16);
          do {
            param_2 = (undefined1 (*) [16])(ulong)(uint)(iVar19 >> 0x10);
            pauVar14 = unaff_x23;
            (**(code **)(*(long *)*pauVar10 + 0x10))(pauVar10,param_2,unaff_x23,1);
            iVar19 = iVar19 + iVar18;
            uVar1 = (int)unaff_x23 + 1;
            unaff_x23 = (undefined1 (*) [16])(ulong)uVar1;
          } while ((int)uVar1 < extraout_w13_00 >> 6);
        }
      }
    }
LAB_10839c848:
    uVar20 = uVar20 + 1;
  } while( true );
}



/* Entry: 10839d530; end: 10839d61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_10839d530(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 (*unaff_x22) [16];
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 *puStack_4f8;
  undefined1 (*pauStack_4f0) [16];
  undefined1 **ppuStack_4e8;
  undefined1 (*pauStack_4e0) [16];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_12c;
  undefined1 auStack_110 [56];
  undefined1 auStack_d8 [16];
  byte bStack_c8;
  undefined1 auStack_c0 [16];
  float afStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  
  func_0x00010839e094();
  if (!(bool)in_ZR) {
    func_0x00010839dff4();
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    func_0x00010839e088(0xffffffffffffffff);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    lStack_4c0 = extraout_x9 + 0x10;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010839e07c(&uStack_4d8);
    puVar5 = &stack0xffffffffffffffb0;
    func_0x00010812f180();
    ppuVar6 = &puStack_4f8;
    puStack_4f8 = puVar5;
    pauStack_4f0 = param_2;
    func_0x00010839dfb8();
    ppuStack_4e8 = ppuVar6;
    pauStack_4e0 = param_2;
    func_0x00010839e008();
    if (((ulong)ppuVar6 & 1) == 0) {
      func_0x00010839dfc4(&uStack_4d8);
    }
    func_0x00010839e1ac();
    FUN_10839aec8();
    pauVar4 = (undefined1 (*) [16])&uStack_4d8;
    func_0x00010834950c(pauVar4);
    return pauVar4;
  }
  func_0x00010839e1ac();
  pauVar4 = param_1;
  pauVar8 = unaff_x22;
  func_0x00010839c538();
  auVar1 = _UNK_10df1e6c0;
  uStack_80 = extraout_x8;
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    afStack_b0[0] = 0.0;
    afStack_b0[1] = 0.0;
    afStack_b0[2] = 0.0;
    afStack_b0[3] = 0.0;
  }
  else {
    if (*(long *)unaff_x22[1] == -1) goto LAB_10839b070;
    auVar11 = NEON_scvtf(*unaff_x22,4);
    afStack_b0[3] = auVar11._12_4_ + 1.0;
    afStack_b0[2] = auVar11._8_4_ + 1.0;
    afStack_b0[1] = auVar11._4_4_ + -1.0;
    afStack_b0[0] = auVar11._0_4_ + -1.0;
  }
  uStack_98 = 0x46fffe0046fffe00;
  uStack_a0 = 0xc6fffe00c6fffe00;
  uVar9 = 0;
  iVar7 = (int)param_2;
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  for (; uVar9 != iVar7 - 1; uVar9 = uVar9 + 1) {
    pauVar4 = (undefined1 (*) [16])(*param_1 + uVar9 * 8);
    param_2 = (undefined1 (*) [16])&uStack_a0;
    FUN_10835de90(pauVar4,param_2,auStack_90);
    if ((int)pauVar4 != 0) {
      if (unaff_x22 != (undefined1 (*) [16])0x0) {
        pauVar4 = (undefined1 (*) [16])auStack_90;
        param_2 = (undefined1 (*) [16])afStack_b0;
        FUN_10835de90(pauVar4,param_2,auStack_90);
        if ((int)pauVar4 == 0) goto LAB_10839b010;
      }
      uVar14 = NEON_fcvtzs(auStack_90[0],6,4);
      uVar12 = NEON_fcvtzs(auStack_90[1],6,4);
      if (unaff_x22 == (undefined1 (*) [16])0x0) {
LAB_10839aff4:
        pauVar4 = (undefined1 (*) [16])(uVar14 & 0xffffffff);
        param_2 = (undefined1 (*) [16])(uVar14 >> 0x20);
        FUN_10839b0f4(pauVar4,param_2,uVar12 & 0xffffffff,uVar12 >> 0x20,0);
      }
      else {
        uVar10 = NEON_smin(uVar12,uVar14,4);
        uVar13 = NEON_smax(uVar14,uVar12,4);
        auStack_c0._0_4_ = auVar1._0_4_ + ((int)uVar10 >> 6);
        auStack_c0._4_4_ = auVar1._4_4_ + (int)((long)uVar10 >> 0x26);
        auStack_c0._8_4_ = auVar1._8_4_ + ((int)uVar13 + 0x3f >> 6);
        auStack_c0._12_4_ = auVar1._12_4_ + ((int)((ulong)uVar13 >> 0x20) + 0x3f >> 6);
        param_2 = &auStack_c0;
        pauVar4 = unaff_x22;
        FUN_10839b0a4();
        if (((ulong)pauVar4 & 1) == 0) {
          pauVar4 = unaff_x22;
          func_0x00010834954c();
          if (((ulong)pauVar4 & 1) != 0) goto LAB_10839aff4;
          pauVar4 = (undefined1 (*) [16])auStack_110;
          param_2 = unaff_x22;
          FUN_1083903d0();
          uStack_12c = (undefined4)(uVar12 >> 0x20);
          while ((bStack_c8 & 1) == 0) {
            param_2 = (undefined1 (*) [16])(uVar14 >> 0x20);
            FUN_10839b0f4((int)uVar14,(undefined1 (*) [16])(uVar14 >> 0x20),uVar12 & 0xffffffff,
                          uStack_12c,auStack_d8);
            pauVar4 = (undefined1 (*) [16])auStack_110;
            FUN_108390454();
          }
        }
      }
    }
LAB_10839b010:
  }
LAB_10839b070:
  bVar2 = true;
  func_0x00010839c460(uStack_80);
  if (bVar2) {
    return pauVar4;
  }
  ___stack_chk_fail();
  if (*(long *)pauVar4[1] == -1) {
    return (undefined1 (*) [16])0x1;
  }
  FUN_10821a6d8();
  uVar3 = (uint)param_2;
  if (((ulong)param_2 & 1) == 0) {
    func_0x00010839c548();
    FUN_10821a044();
    pauVar4 = (undefined1 (*) [16])(ulong)(uVar3 ^ 1);
  }
  else {
    pauVar4 = (undefined1 (*) [16])0x1;
  }
  return pauVar4;
}



/* Entry: 10839d620; end: 10839d797;  */

undefined8 *
FUN_10839d620(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
             undefined8 param_5,uint param_6)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  long extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar12;
  undefined8 uVar11;
  uint uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 auStack_160 [33];
  undefined8 uStack_58;
  
  puVar4 = param_1;
  func_0x00010839deb8();
  uStack_58 = extraout_x8;
  if (param_3 == 0) {
    uVar11 = CONCAT44(*(undefined4 *)((long)param_1 + 4),*(undefined4 *)puVar4);
  }
  else {
    lVar5 = 0;
    uVar10 = CONCAT44(*(undefined4 *)((long)param_1 + 4),*(undefined4 *)puVar4);
    uVar14 = uVar10;
    uVar11 = uVar10;
    while (uVar3 = lVar5 == 0x10, !(bool)uVar3) {
      func_0x00010839e0e8();
      lVar5 = extraout_x8_00;
    }
    auStack_160[0] = uVar10;
    auStack_160[1] = uVar14;
    FUN_10839d9b4(param_4,auStack_160);
    if ((int)param_4 == 0) goto LAB_10839d76c;
    func_0x00010839da00(param_3,auStack_160);
  }
  uVar14 = param_1[2];
  fVar8 = (float)param_1[1];
  fVar17 = (float)uVar11;
  fVar12 = (float)((ulong)param_1[1] >> 0x20);
  fVar18 = (float)((ulong)uVar11 >> 0x20);
  uVar9 = 1 << (ulong)(param_6 & 0x1f);
  uVar6 = (ulong)uVar9;
  fVar2 = (float)(param_6 * -0x800000 + 0x3f800000);
  auStack_160[0] = *param_1;
  fVar15 = 0.0;
  fVar16 = 0.0;
  for (uVar7 = 1; uVar3 = uVar7 == uVar6, uVar7 < uVar6; uVar7 = uVar7 + 1) {
    fVar15 = fVar2 + fVar15;
    fVar16 = fVar2 + fVar16;
    auStack_160[uVar7] =
         CONCAT44(fVar18 + fVar16 * (fVar16 * (fVar18 + ((float)((ulong)uVar14 >> 0x20) -
                                                        (fVar12 + fVar12))) +
                                    (fVar12 - fVar18) + (fVar12 - fVar18)),
                  fVar17 + fVar15 * (fVar15 * (fVar17 + ((float)uVar14 - (fVar8 + fVar8))) +
                                    (fVar8 - fVar17) + (fVar8 - fVar17)));
  }
  auStack_160[uVar6] = param_1[2];
  param_4 = auStack_160;
  func_0x00010839dfdc(param_4,uVar9 + 1);
LAB_10839d76c:
  func_0x00010839de28(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    uVar11 = NEON_fminnm(CONCAT44((int)ABS(-(float)((ulong)param_4[1] >> 0x20) +
                                           ((float)((ulong)*param_4 >> 0x20) +
                                           (float)((ulong)param_4[2] >> 0x20)) * 0.5),
                                  (int)ABS(-(float)param_4[1] +
                                           ((float)*param_4 + (float)param_4[2]) * 0.5)),
                         0x4effffff4effffff,4);
    uVar11 = NEON_fmaxnm(uVar11,0xceffffffceffffff,4);
    uVar9 = (uint)(float)uVar11;
    uVar13 = (uint)(float)((ulong)uVar11 >> 0x20);
    iVar1 = uVar9 + (uVar13 >> 1);
    if (uVar9 <= uVar13) {
      iVar1 = uVar13 + (uVar9 >> 1);
    }
    uVar9 = 0x21U - (int)LZCOUNT(iVar1) >> 1;
    if (4 < uVar9) {
      uVar9 = 5;
    }
    return (undefined8 *)(ulong)uVar9;
  }
  return param_4;
}



/* Entry: 10839d798; end: 10839d803;  */

uint FUN_10839d798(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = NEON_fminnm(CONCAT44((int)ABS(-(float)((ulong)param_1[1] >> 0x20) +
                                        ((float)((ulong)*param_1 >> 0x20) +
                                        (float)((ulong)param_1[2] >> 0x20)) * 0.5),
                               (int)ABS(-(float)param_1[1] +
                                        ((float)*param_1 + (float)param_1[2]) * 0.5)),
                      0x4effffff4effffff,4);
  uVar3 = NEON_fmaxnm(uVar3,0xceffffffceffffff,4);
  uVar2 = (uint)(float)uVar3;
  uVar4 = (uint)(float)((ulong)uVar3 >> 0x20);
  iVar1 = uVar2 + (uVar4 >> 1);
  if (uVar2 <= uVar4) {
    iVar1 = uVar4 + (uVar2 >> 1);
  }
  uVar2 = 0x21U - (int)LZCOUNT(iVar1) >> 1;
  if (4 < uVar2) {
    uVar2 = 5;
  }
  return uVar2;
}



/* Entry: 10839d804; end: 10839d9b3;  */

float * FUN_10839d804(float *param_1,float *param_2,float *param_3,float *param_4,ulong param_5,
                     code *param_6)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  undefined8 extraout_x8;
  long lVar7;
  long extraout_x8_00;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar22;
  ulong uVar21;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 auStack_1030 [492];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_bc [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_48;
  
  pfVar4 = param_1;
  pfVar5 = param_2;
  func_0x00010839deb8();
  uStack_48 = extraout_x8;
  if (param_3 == (float *)0x0) {
    param_4 = pfVar4;
    pfVar4 = param_2;
    uVar10 = *(undefined8 *)param_1;
LAB_10839d89c:
    fVar12 = param_1[6];
    fVar13 = param_1[7];
    fVar14 = (float)uVar10;
    fVar15 = (float)((ulong)uVar10 >> 0x20);
    fVar24 = (param_1[3] - fVar15) * (fVar13 - fVar15) + (fVar12 - fVar14) * (param_1[2] - fVar14);
    uVar2 = fVar24 == 0.0;
    if (0.0 <= fVar24) {
      fVar24 = (fVar13 - fVar15) * (param_1[5] - fVar15) + (fVar12 - fVar14) * (param_1[4] - fVar14)
      ;
      uVar2 = fVar24 == 0.0;
      if (0.0 <= fVar24) {
        fVar24 = (param_1[3] - fVar13) * (fVar15 - fVar13) +
                 (fVar14 - fVar12) * (param_1[2] - fVar12);
        uVar2 = fVar24 == 0.0;
        if ((0.0 <= fVar24) &&
           (fVar12 = (fVar15 - fVar13) * (param_1[5] - fVar13) +
                     (fVar14 - fVar12) * (param_1[4] - fVar12), uVar2 = fVar12 == 0.0, 0.0 <= fVar12
           )) {
          func_0x00010839de28(uStack_48);
          if ((bool)uVar2) {
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            uVar6 = (uint)pfVar4;
            pfVar5 = (float *)auStack_1030;
            uVar8 = 0;
            uVar10 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            fVar18 = (float)*(undefined8 *)(param_1 + 6);
            fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
            fVar13 = (float)*(undefined8 *)param_1;
            fVar24 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
            fVar26 = fVar13 * 0.6666667 + fVar18 * 0.33333334;
            fVar27 = fVar24 * 0.6666667 + fVar19 * 0.33333334;
            fVar12 = fVar13 * 0.33333334 + fVar18 * 0.6666667;
            fVar22 = fVar24 * 0.33333334 + fVar19 * 0.6666667;
            fVar14 = (float)*(undefined8 *)(param_1 + 2);
            fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
            fVar16 = (float)*(undefined8 *)(param_1 + 4);
            fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
            uVar11 = CONCAT44(ABS(fVar17 - fVar22),ABS(fVar16 - fVar12));
            uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(ABS(fVar15 - fVar27),ABS(fVar14 - fVar26))) &
                              ~CONCAT44(-(uint)(ABS(fVar15 - fVar27) < ABS(fVar17 - fVar22)),
                                        -(uint)(ABS(fVar14 - fVar26) < ABS(fVar16 - fVar12)));
            fVar12 = (float)(uVar11 >> 0x20);
            fVar22 = (float)uVar11;
            if (fVar12 <= fVar22) {
              fVar12 = fVar22;
            }
            fVar22 = 0.125;
            for (; uVar8 != 9; uVar8 = uVar8 + 1) {
              uVar2 = fVar22 <= fVar12;
              uVar3 = fVar12 == fVar22;
              if (fVar12 < fVar22) {
                if (uVar8 == 0) {
                  auStack_1030[0] = *(undefined8 *)param_1;
                  auStack_1030[1] = *(undefined8 *)(param_1 + 6);
                  uVar6 = 2;
                  goto LAB_10839dc28;
                }
                uVar8 = 1 << (ulong)(uVar8 & 0x1f);
                goto LAB_10839db24;
              }
              fVar22 = fVar22 * 4.0;
            }
            uVar8 = 0x200;
LAB_10839db24:
            uVar25 = NEON_fmov(0x40400000,4);
            fVar12 = (float)uVar25;
            fVar22 = (float)((ulong)uVar25 >> 0x20);
            auStack_1030[0] = *(undefined8 *)param_1;
            uVar21 = 0xffffffffffffffff;
            uVar9 = (ulong)uVar8;
            fVar26 = 0.0;
            fVar27 = 0.0;
            for (uVar11 = 1; uVar3 = uVar11 == uVar9, uVar11 < uVar9; uVar11 = uVar11 + 1) {
              fVar26 = 1.0 / (float)uVar8 + fVar26;
              fVar27 = 1.0 / (float)uVar8 + fVar27;
              fVar28 = fVar13 + fVar26 * (fVar26 * (fVar26 * ((fVar18 + (fVar14 - fVar16) * fVar12)
                                                             - fVar13) +
                                                   (fVar13 + (fVar16 - (fVar14 + fVar14))) * fVar12)
                                         + (fVar14 - fVar13) * fVar12);
              fVar29 = fVar24 + fVar27 * (fVar27 * (fVar27 * ((fVar19 + (fVar15 - fVar17) * fVar22)
                                                             - fVar24) +
                                                   (fVar24 + (fVar17 - (fVar15 + fVar15))) * fVar22)
                                         + (fVar15 - fVar24) * fVar22);
              auStack_1030[uVar11] = CONCAT44(fVar29,fVar28);
              uVar21 = CONCAT44(-(uint)((int)ABS(fVar29) < 0x7f800000),
                                -(uint)((int)ABS(fVar28) < 0x7f800000)) & uVar21;
            }
            uVar25 = NEON_uminp(uVar21,uVar21,4);
            uVar2 = true;
            if ((int)uVar25 != 0) {
              auStack_1030[uVar9] = *(undefined8 *)(param_1 + 6);
              uVar6 = uVar8 + 1;
LAB_10839dc28:
              (*param_6)();
              param_1 = pfVar5;
            }
            func_0x00010839de28(uVar10);
            if ((bool)uVar3) {
              return param_1;
            }
            ___stack_chk_fail();
            uVar11 = param_5;
            if ((int)param_1 == 0) {
              do {
                func_0x00010839e1a0();
                if ((!(bool)uVar3) || (func_0x00010839e194(), !(bool)uVar3)) {
                  func_0x00010839ded8();
                  break;
                }
                uVar8 = (int)uVar11 - 1;
                uVar2 = uVar8 != 0;
                uVar3 = uVar8 == 1;
                uVar11 = (ulong)uVar8;
              } while (1 < (int)uVar8);
              do {
                func_0x00010839e100();
              } while (!(bool)uVar2);
            }
            uVar6 = uVar6 & 0xff;
            uVar3 = 5 < uVar6;
            uVar2 = uVar6 == 6;
            if ((uVar6 < 7) && (func_0x00010839e16c(), !(bool)uVar2)) {
              func_0x00010839e010();
              do {
                func_0x00010839e1a0();
                if ((!(bool)uVar2) || (func_0x00010839e194(), !(bool)uVar2)) {
                  func_0x00010839ded8();
                  break;
                }
                uVar8 = (int)param_5 - 1;
                param_5 = (ulong)uVar8;
                uVar3 = uVar8 != 0;
                uVar2 = uVar8 == 1;
              } while (1 < (int)uVar8);
              do {
                func_0x00010839e0d0();
              } while (!(bool)uVar3);
            }
            return param_1;
          }
          goto LAB_10839d9b0;
        }
      }
    }
    pfVar1 = (float *)&uStack_b0;
    pfVar5 = (float *)&uStack_b0;
    FUN_1083525f4(param_1,pfVar5,auStack_bc);
    param_4 = param_1;
    for (uVar11 = (ulong)((uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
        uVar11 = uVar11 - 1) {
      param_4 = pfVar1;
      pfVar5 = pfVar4;
      FUN_10839da4c(pfVar1,pfVar4,param_5,param_6);
      pfVar1 = pfVar1 + 6;
    }
  }
  else {
    uVar20 = *(undefined8 *)param_1;
    uVar23 = 0;
    lVar7 = 8;
    uVar10 = uVar20;
    uVar25 = uVar20;
    while (uVar2 = lVar7 == 0x20, !(bool)uVar2) {
      func_0x00010839e0e8();
      lVar7 = extraout_x8_00;
    }
    pfVar5 = (float *)&uStack_b0;
    uStack_d0 = uVar25;
    uStack_c8 = uVar23;
    uStack_b0 = uVar20;
    uStack_a8 = uVar10;
    FUN_10839d9b4();
    if ((int)param_4 != 0) {
      pfVar5 = (float *)&uStack_b0;
      func_0x00010839da00();
      param_4 = param_3;
      pfVar4 = (float *)0x0;
      uVar10 = uStack_d0;
      if ((int)param_3 == 0) {
        pfVar4 = param_2;
      }
      goto LAB_10839d89c;
    }
  }
  func_0x00010839de28(uStack_48);
  if ((bool)uVar2) {
    return param_4;
  }
LAB_10839d9b0:
  ___stack_chk_fail();
  if (((*param_4 < pfVar5[2]) && (*pfVar5 < param_4[2])) && (param_4[1] < pfVar5[3])) {
    return (float *)(ulong)(pfVar5[1] < param_4[3]);
  }
  return (float *)0x0;
}



/* Entry: 10839d9b4; end: 10839da4b;  */

bool FUN_10839d9b4(float *param_1,float *param_2)

{
  if (((*param_1 < param_2[2]) && (*param_2 < param_1[2])) && (param_1[1] < param_2[3])) {
    return param_2[1] < param_1[3];
  }
  return false;
}



/* Entry: 10839da4c; end: 10839dc4f;  */

void FUN_10839da4c(undefined8 *param_1,uint param_2,ulong param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 auStack_1030 [513];
  undefined8 uStack_28;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = auStack_1030;
  uVar5 = 0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  fVar13 = (float)param_1[3];
  fVar14 = (float)((ulong)param_1[3] >> 0x20);
  fVar7 = (float)*param_1;
  fVar8 = (float)((ulong)*param_1 >> 0x20);
  fVar20 = fVar7 * 0.6666667 + fVar13 * 0.33333334;
  fVar21 = fVar8 * 0.6666667 + fVar14 * 0.33333334;
  fVar15 = fVar7 * 0.33333334 + fVar13 * 0.6666667;
  fVar18 = fVar8 * 0.33333334 + fVar14 * 0.6666667;
  fVar9 = (float)param_1[1];
  fVar10 = (float)((ulong)param_1[1] >> 0x20);
  fVar11 = (float)param_1[2];
  fVar12 = (float)((ulong)param_1[2] >> 0x20);
  uVar16 = CONCAT44(ABS(fVar12 - fVar18),ABS(fVar11 - fVar15));
  uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(ABS(fVar10 - fVar21),ABS(fVar9 - fVar20))) &
                    ~CONCAT44(-(uint)(ABS(fVar10 - fVar21) < ABS(fVar12 - fVar18)),
                              -(uint)(ABS(fVar9 - fVar20) < ABS(fVar11 - fVar15)));
  fVar15 = (float)(uVar16 >> 0x20);
  fVar18 = (float)uVar16;
  if (fVar15 <= fVar18) {
    fVar15 = fVar18;
  }
  fVar18 = 0.125;
  for (; uVar5 != 9; uVar5 = uVar5 + 1) {
    uVar1 = fVar18 <= fVar15;
    uVar2 = fVar15 == fVar18;
    if (fVar15 < fVar18) {
      if (uVar5 != 0) {
        uVar5 = 1 << (ulong)(uVar5 & 0x1f);
        goto LAB_10839db24;
      }
      auStack_1030[0] = *param_1;
      auStack_1030[1] = param_1[3];
      param_2 = 2;
      goto LAB_10839dc28;
    }
    fVar18 = fVar18 * 4.0;
  }
  uVar5 = 0x200;
LAB_10839db24:
  uVar19 = NEON_fmov(0x40400000,4);
  fVar15 = (float)uVar19;
  fVar18 = (float)((ulong)uVar19 >> 0x20);
  auStack_1030[0] = *param_1;
  uVar17 = 0xffffffffffffffff;
  uVar6 = (ulong)uVar5;
  fVar20 = 0.0;
  fVar21 = 0.0;
  for (uVar16 = 1; uVar2 = uVar16 == uVar6, uVar16 < uVar6; uVar16 = uVar16 + 1) {
    fVar20 = 1.0 / (float)uVar5 + fVar20;
    fVar21 = 1.0 / (float)uVar5 + fVar21;
    fVar22 = fVar7 + fVar20 * (fVar20 * (fVar20 * ((fVar13 + (fVar9 - fVar11) * fVar15) - fVar7) +
                                        (fVar7 + (fVar11 - (fVar9 + fVar9))) * fVar15) +
                              (fVar9 - fVar7) * fVar15);
    fVar23 = fVar8 + fVar21 * (fVar21 * (fVar21 * ((fVar14 + (fVar10 - fVar12) * fVar18) - fVar8) +
                                        (fVar8 + (fVar12 - (fVar10 + fVar10))) * fVar18) +
                              (fVar10 - fVar8) * fVar18);
    auStack_1030[uVar16] = CONCAT44(fVar23,fVar22);
    uVar17 = CONCAT44(-(uint)((int)ABS(fVar23) < 0x7f800000),-(uint)((int)ABS(fVar22) < 0x7f800000))
             & uVar17;
  }
  uVar19 = NEON_uminp(uVar17,uVar17,4);
  uVar1 = true;
  if ((int)uVar19 != 0) {
    auStack_1030[uVar6] = param_1[3];
    param_2 = uVar5 + 1;
LAB_10839dc28:
    (*param_4)();
    param_1 = puVar4;
  }
  iVar3 = (int)param_1;
  FUN_10839de28(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = param_3;
  if (iVar3 == 0) {
    do {
      func_0x00010839e1a0();
      if ((!(bool)uVar2) || (func_0x00010839e194(), !(bool)uVar2)) {
        func_0x00010839ded8();
        break;
      }
      uVar5 = (int)uVar16 - 1;
      uVar1 = uVar5 != 0;
      uVar2 = uVar5 == 1;
      uVar16 = (ulong)uVar5;
    } while (1 < (int)uVar5);
    do {
      func_0x00010839e100();
    } while (!(bool)uVar1);
  }
  param_2 = param_2 & 0xff;
  uVar2 = 5 < param_2;
  uVar1 = param_2 == 6;
  if ((param_2 < 7) && (func_0x00010839e16c(), !(bool)uVar1)) {
    func_0x00010839e010();
    do {
      func_0x00010839e1a0();
      if ((!(bool)uVar1) || (func_0x00010839e194(), !(bool)uVar1)) {
        func_0x00010839ded8();
        break;
      }
      uVar5 = (int)param_3 - 1;
      param_3 = (ulong)uVar5;
      uVar2 = uVar5 != 0;
      uVar1 = uVar5 == 1;
    } while (1 < (int)uVar5);
    do {
      func_0x00010839e0d0();
    } while (!(bool)uVar2);
  }
  return;
}



/* Entry: 10839dc50; end: 10839de27;  */

void FUN_10839dc50(int param_1,byte param_2,undefined8 param_3,int param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = param_4;
  if (param_1 == 0) {
    do {
      func_0x00010839e1a0();
      if ((!(bool)in_ZR) || (func_0x00010839e194(), !(bool)in_ZR)) {
        func_0x00010839ded8();
        break;
      }
      iVar3 = iVar3 + -1;
      in_CY = iVar3 != 0;
      in_ZR = iVar3 == 1;
    } while (1 < iVar3);
    do {
      func_0x00010839e100();
    } while (!(bool)in_CY);
  }
  uVar1 = 5 < param_2;
  uVar2 = param_2 == 6;
  if ((param_2 < 7) && (func_0x00010839e16c(), !(bool)uVar2)) {
    func_0x00010839e010();
    do {
      func_0x00010839e1a0();
      if ((!(bool)uVar2) || (func_0x00010839e194(), !(bool)uVar2)) {
        func_0x00010839ded8();
        break;
      }
      param_4 = param_4 + -1;
      uVar1 = param_4 != 0;
      uVar2 = param_4 == 1;
    } while (1 < param_4);
    do {
      func_0x00010839e0d0();
    } while (!(bool)uVar1);
  }
  return;
}



/* Entry: 10839de28; end: 10839e1b7;  */

void FUN_10839de28(void)

{
  return;
}



/* Entry: 10839e1b8; end: 10839e1cb;  */

void FUN_10839e1b8(void)

{
  FUN_10839d798();
  return;
}



/* Entry: 10839e1cc; end: 10839e257;  */

undefined8 FUN_10839e1cc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_2;
  if (1 < iVar3) {
    FUN_10839efdc((int)LZCOUNT(iVar3 + -2) * -2 + 0x40,param_1,param_2);
  }
  lVar4 = 0;
  while (lVar4 + 1 < (long)iVar3) {
    puVar1 = param_1 + lVar4;
    lVar2 = puVar1[1];
    *(long *)*puVar1 = lVar2;
    *(undefined8 *)(lVar2 + 8) = *puVar1;
    lVar4 = lVar4 + 1;
  }
  *param_3 = param_1[(long)iVar3 + -1];
  return *param_1;
}



/* Entry: 10839e258; end: 10839e293;  */

void FUN_10839e258(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
    return;
  }
  if (0 < *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00010839e28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
              (*(long **)(param_1 + 0x18),*(int *)(param_1 + 0x28),param_2);
    return;
  }
  return;
}



/* Entry: 10839e294; end: 10839e45b;  */

void FUN_10839e294(ulong *param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  int iVar9;
  ulong *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = (int)((ulong *)*param_1)[3];
  iVar9 = (int)param_1[3];
  if ((int)param_1[3] <= iVar12) {
    iVar9 = iVar12;
  }
  if (param_3 <= iVar9) {
    puVar8 = (ulong *)*param_1;
    do {
      puVar10 = (ulong *)*puVar8;
      do {
        if (param_4 <= iVar9) {
          return;
        }
        iVar12 = *(int *)((long)puVar8 + 0x1c);
        if (*(int *)((long)param_1 + 0x1c) <= *(int *)((long)puVar8 + 0x1c)) {
          iVar12 = *(int *)((long)param_1 + 0x1c);
        }
        iVar3 = param_4 + -1;
        if (iVar12 <= param_4 + -1) {
          iVar3 = iVar12;
        }
        if (iVar3 < iVar9) {
          return;
        }
        iVar12 = (int)param_1[2];
        iVar5 = *(int *)((long)param_1 + 0x14);
        iVar13 = (int)puVar8[2];
        iVar6 = *(int *)((long)puVar8 + 0x14);
        if (iVar6 == 0 && iVar5 == 0) {
          iVar5 = iVar12 + 0x8000 >> 0x10;
          iVar6 = iVar13 + 0x8000 >> 0x10;
          iVar11 = iVar5;
          if (iVar6 <= iVar5) {
            iVar11 = iVar6;
          }
          if (iVar5 <= iVar6) {
            iVar5 = iVar6;
          }
          if (iVar5 - iVar11 != 0 && iVar11 <= iVar5) {
            (**(code **)(*param_2 + 0x28))(param_2,iVar11,iVar9,iVar5 - iVar11,(iVar3 - iVar9) + 1);
          }
          iVar9 = iVar3 + 1;
        }
        else {
          iVar11 = (iVar3 - iVar9) + 1;
          do {
            iVar1 = iVar12 + 0x8000 >> 0x10;
            iVar2 = iVar13 + 0x8000 >> 0x10;
            iVar4 = iVar1;
            if (iVar2 <= iVar1) {
              iVar4 = iVar2;
            }
            if (iVar1 <= iVar2) {
              iVar1 = iVar2;
            }
            if (iVar1 - iVar4 != 0 && iVar4 <= iVar1) {
              (**(code **)(*param_2 + 0x10))(param_2,iVar4,iVar9,iVar1 - iVar4);
            }
            iVar12 = iVar12 + iVar5;
            iVar13 = iVar13 + iVar6;
            iVar9 = iVar9 + 1;
            iVar11 = iVar11 + -1;
          } while (0 < iVar11);
        }
        *(int *)(param_1 + 2) = iVar12;
        *(int *)(puVar8 + 2) = iVar13;
        puVar7 = param_1;
        FUN_10839f2e0(param_1,iVar3);
        if (((ulong)puVar7 & 1) == 0) {
          if (param_4 <= (int)puVar10[3]) {
            return;
          }
          if ((int)puVar10[3] != iVar9) {
            return;
          }
          param_1 = puVar10;
          puVar10 = (ulong *)*puVar10;
        }
        puVar7 = puVar8;
        FUN_10839f2e0(puVar8,iVar3);
      } while (((ulong)puVar7 & 1) != 0);
      puVar8 = puVar10;
    } while ((int)puVar10[3] < param_4 && (int)puVar10[3] == iVar9);
  }
  return;
}


