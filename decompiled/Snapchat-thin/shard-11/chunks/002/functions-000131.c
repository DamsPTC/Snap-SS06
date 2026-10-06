/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10827f308; end: 10827f31f;  */

long FUN_10827f308(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  FUN_10827eddc();
  func_0x00010827ffd8();
  func_0x00010827fd78();
  if (param_4 != 0) {
    func_0x00010827ffc4();
  }
  return param_1;
}



/* Entry: 10827f320; end: 10827f37b;  */

undefined8 FUN_10827f320(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_10827eddc();
  func_0x00010827ffd8();
  func_0x00010827fd78();
  if (param_4 != 0) {
    func_0x00010827ffc4();
  }
  return param_1;
}



/* Entry: 10827f37c; end: 10827f407;  */

long * FUN_10827f37c(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010827fd08();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    lVar3 = *unaff_x20;
    plVar1 = (long *)(*unaff_x19 + (long)iVar2 * 8);
    *unaff_x20 = 0;
    *plVar1 = lVar3;
  }
  else {
    plVar1 = unaff_x19;
    FUN_10827f408(0x3ff8000000000000);
    lVar3 = *unaff_x20;
    plVar1 = plVar1 + (int)unaff_x19[1];
    *unaff_x20 = 0;
    *plVar1 = lVar3;
    FUN_10827f42c();
    iVar2 = (int)unaff_x19[1];
  }
  *(int *)(unaff_x19 + 1) = iVar2 + 1;
  return plVar1;
}



/* Entry: 10827f408; end: 10827f42b;  */

void FUN_10827f408(long param_1,int param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10827f42c;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010827fd08();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010827ffa0();
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10827f42c; end: 10827f497;  */

void FUN_10827f42c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010827fd08();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010827ffa0();
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10827f498; end: 10827f4c7;  */

void FUN_10827f498(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10827f4c8; end: 10827f4d3;  */

void FUN_10827f4c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001082c8ab0(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  FUN_1082c8b74(&uStack_28);
  return;
}



/* Entry: 10827f4d4; end: 10827f503;  */

long FUN_10827f4d4(long param_1)

{
  FUN_10827f504();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010827ffa0();
  }
  return param_1;
}



/* Entry: 10827f504; end: 10827f587;  */

void FUN_10827f504(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      func_0x00010827f53c();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10827f588; end: 10827f5a3;  */

void FUN_10827f588(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10827f5a4; end: 10827f5e3;  */

void FUN_10827f5a4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010827fe08();
  if (param_1 != 0) {
    do {
      func_0x00010827ff44();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010827ff5c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10827f5e4; end: 10827f607;  */

undefined8 FUN_10827f5e4(undefined8 param_1)

{
  FUN_10827f608(param_1,0);
  return param_1;
}



/* Entry: 10827f608; end: 10827f61f;  */

void FUN_10827f608(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1082c02d4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10827f620; end: 10827f63b;  */

void FUN_10827f620(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1082c02d4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827f63c; end: 10827f67b;  */

void FUN_10827f63c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010827fe08();
  if (param_1 != 0) {
    do {
      func_0x00010827ff44();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010827ff5c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10827f67c; end: 10827f6c7;  */

void FUN_10827f67c(long param_1)

{
  if ((*(int *)(param_1 + 0x34) != 2) && (*(int *)(param_1 + 0x34) != 0)) {
    func_0x00010827f6a0();
  }
  return;
}



/* Entry: 10827f6c8; end: 10827f70b;  */

float FUN_10827f6c8(float *param_1)

{
  if (param_1[3] == 0.0) {
    return 0.0;
  }
  return (1.0 / param_1[3]) * *param_1;
}



/* Entry: 10827f70c; end: 10827f73f;  */

long FUN_10827f70c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108376024();
  }
  else {
    FUN_10827f740();
  }
  return param_1;
}



/* Entry: 10827f740; end: 10827f75b;  */

void FUN_10827f740(long param_1)

{
  FUN_108375f34();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10827f75c; end: 10827f77f;  */

undefined8 FUN_10827f75c(undefined8 param_1)

{
  FUN_10827f780(param_1,0);
  return param_1;
}



/* Entry: 10827f780; end: 10827f797;  */

void FUN_10827f780(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10827f7b4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10827f798; end: 10827f7b3;  */

void FUN_10827f798(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10827f7b4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827f7b4; end: 10827f8e7;  */

long FUN_10827f7b4(long param_1)

{
  FUN_108266274(param_1 + 0x50);
  func_0x00010827f7fc(param_1 + 0x40);
  FUN_1081842d4(param_1 + 0x30);
  FUN_1081842d4(param_1 + 0x20);
  FUN_1081f8340(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001081f87ac();
  }
  return param_1;
}



/* Entry: 10827f8e8; end: 10827f927;  */

void FUN_10827f8e8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010827fe08();
  if (param_1 != 0) {
    do {
      func_0x00010827ff44();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010827ff5c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10827f928; end: 10827f967;  */

void FUN_10827f928(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010827fe08();
  if (param_1 != 0) {
    do {
      func_0x00010827ff44();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010827ff5c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10827f968; end: 10827f96f;  */

void FUN_10827f968(void)

{
  return;
}



/* Entry: 10827f970; end: 10827f99f;  */

void FUN_10827f970(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a34c38;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10827f9a0; end: 10827f9cb;  */

void FUN_10827f9a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a34c38;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10827f9cc; end: 10827fad3;  */

undefined8 *
FUN_10827f9cc(long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010827fc60();
  plVar4 = (long *)*param_2;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uStack_68 = *param_5;
  *param_5 = 0;
  lVar5 = *(long *)(param_1 + 8);
  lVar3 = lVar5 + 0x140;
  uStack_28 = extraout_x8;
  (**(code **)(*plVar4 + 0x40))(&lStack_58,uVar6,uVar7,plVar4,lVar3,lVar5 + 0xf8);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    lStack_50 = 0;
    lStack_60 = lVar1;
    uStack_30 = 0;
    FUN_1082c0f08(*(undefined8 *)(lVar5 + 0x138),lStack_58,&lStack_60,auStack_48);
    FUN_10827fb18(auStack_48);
    lVar1 = lStack_60;
    lStack_60 = 0;
    lVar3 = lStack_58;
    if (lVar1 != 0) {
      func_0x00010827fc1c();
      lVar3 = lStack_58;
    }
    lVar1 = lStack_50;
    lStack_50 = 0;
    if (lVar1 != 0) {
      func_0x00010827fc1c();
    }
  }
  puVar2 = &uStack_68;
  FUN_10827fb54();
  func_0x00010827fc08(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_10827fb18(auStack_48);
  lVar1 = lStack_60;
  lStack_60 = 0;
  if (lVar1 != 0) {
    func_0x00010827fc1c();
  }
  lVar1 = lStack_50;
  lStack_50 = 0;
  if (lVar1 != 0) {
    func_0x00010827fc1c();
  }
  puVar2 = &uStack_68;
  FUN_10827fb54(puVar2);
  func_0x00010827fca0();
  func_0x0001004a5364(lVar3,&PTR_DAT_110a34c98);
  puVar2 = puVar2 + 1;
  if ((int)lVar3 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



/* Entry: 10827fad4; end: 10827fb0b;  */

long FUN_10827fad4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a34c98);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10827fb0c; end: 10827fb17;  */

undefined ** FUN_10827fb0c(void)

{
  return &PTR_DAT_110a34c98;
}



/* Entry: 10827fb18; end: 10827fb53;  */

long FUN_10827fb18(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x000108280010(uVar1);
  return param_1;
}



/* Entry: 10827fb54; end: 10827fb93;  */

void FUN_10827fb54(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x00010827fe08();
  if (param_1 != 0) {
    do {
      func_0x00010827ff44();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010827ff5c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 10827fb94; end: 10827fbcf;  */

long FUN_10827fb94(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x000108280010(uVar1);
  return param_1;
}



/* Entry: 10827fbd0; end: 108280067;  */

void FUN_10827fbd0(void)

{
  return;
}



/* Entry: 108280068; end: 108280c4b;  */

void FUN_108280068(float param_1,float param_2,float param_3,float param_4,long param_5,
                  ulong param_6,float *param_7,undefined8 param_8,long param_9,int param_10,
                  undefined8 param_11,ulong *param_12,long param_13,int param_14,undefined4 param_15
                  ,undefined8 param_16,int param_17)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  long lStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined1 uStack_308;
  undefined8 uStack_304;
  undefined8 uStack_2fc;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined4 uStack_2a0;
  undefined2 uStack_29c;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_14c [4];
  undefined1 uStack_148;
  double dStack_140;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined1 uStack_f0;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(param_5 + 0x128);
  uVar18 = *(ulong *)(param_5 + 0x138);
  if (((param_17 == 0) && (uVar10 = param_6, FUN_108280c4c(), (uVar10 & 1) == 0)) &&
     (lVar11 = param_13, FUN_108280c9c(param_13,param_12), (int)lVar11 != 0)) {
    func_0x000108281c30(&uStack_320,uVar17,param_6);
    if (uStack_320 != 0) {
      FUN_10828ae78(&lStack_2d0,param_6 + 0x10);
      FUN_10828afe0(&uStack_180,&lStack_2d0,uStack_310 & 0xffffffff);
      FUN_10828af38(&lStack_2d0,&uStack_180);
      func_0x000108281c04();
      uStack_2a8 = uStack_320;
      uVar10 = param_12[2];
      uStack_320 = 0;
      uStack_2a0 = (undefined4)uStack_318;
      uStack_29c = uStack_318._4_2_;
      bVar7 = (uint)uStack_2c0 == 0x23;
      if (0x23 < (uint)uStack_2c0) goto LAB_108280a98;
      func_0x000108281c9c();
      if (bVar7) {
        FUN_108266014(&uStack_180,&UNK_10f481050);
        func_0x0001082b2838(&uStack_2a8,uStack_180 & 0xffff);
      }
      FUN_10828b188(&lStack_290,&lStack_2d0,uVar18 + 0x20);
      uVar5 = uStack_2a8;
      if ((param_14 != 0) && (uVar12 = uStack_2a8, FUN_1082b1e14(), (uVar12 & 1) == 0)) {
        fVar20 = 1.0;
        fVar19 = fVar20;
        if (param_10 == 0) {
          fVar19 = 0.0;
        }
        if ((int)uVar10 != 1) {
          fVar20 = 0.0;
        }
        param_4 = fVar20 * 0.5 + fVar19 * 0.5;
        param_3 = param_4 + 0.0;
        uStack_180 = CONCAT44(param_3,param_3);
        param_1 = (float)*(int *)(uVar5 + 0x90) - param_4;
        param_2 = (float)*(int *)(uVar5 + 0x94) - param_4;
        uStack_178 = CONCAT44(param_2,param_1);
        FUN_108281a6c(&uStack_180,param_7);
      }
      FUN_10819a67c(param_13);
      FUN_108281a00(uStack_2c0 & 0xffffffff,uVar18 + 0x20);
      uVar10 = uStack_2a8;
      uStack_98 = CONCAT44(param_2,param_1);
      uStack_90 = CONCAT44(param_4,param_3);
      if (param_9 == 0) {
        uStack_2a8 = 0;
        uStack_180 = uVar10;
        uStack_178._0_6_ = CONCAT24(uStack_29c,uStack_2a0);
        func_0x000108281c3c();
        lStack_260 = lStack_290;
        lStack_290 = 0;
        func_0x000108281c90();
        FUN_1082c15f0(uVar18);
        FUN_10827f5a4(&lStack_260);
        puVar15 = &uStack_180;
      }
      else {
        FUN_108280cf4(param_8,param_7,param_9,&lStack_260);
        uStack_288 = uStack_2a8;
        uStack_2a8 = 0;
        uStack_280._0_6_ = CONCAT24(uStack_29c,uStack_2a0);
        func_0x000108281c3c();
        lStack_298 = lStack_290;
        lStack_290 = 0;
        FUN_1082d3a0c(&uStack_180,param_9,param_11);
        FUN_1082d3a0c(auStack_14c,&lStack_260,0x113254e20);
        uStack_270 = uStack_288;
        lStack_278 = lStack_298;
        uStack_288 = 0;
        uStack_268._0_6_ = (undefined6)uStack_280;
        lStack_298 = 0;
        iStack_118 = param_10;
        func_0x000108281c90();
        FUN_1082c19c4(uVar18);
        FUN_10827f5a4(&lStack_278);
        FUN_1082764bc(&uStack_270);
        FUN_10827f5a4(&lStack_298);
        puVar15 = &uStack_288;
      }
      FUN_1082764bc(puVar15);
      FUN_10827f5a4(&lStack_290);
      FUN_1082764bc(&uStack_2a8);
      func_0x00010828afb8(&lStack_2d0);
    }
    FUN_1082764bc(&uStack_320);
  }
  else {
    if (0x1a < *(uint *)(param_6 + 0x18)) goto LAB_108280a98;
    lVar11 = *(long *)(param_13 + 0x10);
    uVar1 = 0x500002U >> (ulong)(*(uint *)(param_6 + 0x18) & 0x1f) &
            (uint)(*(long *)(param_13 + 8) != 0);
    lVar13 = lVar11;
    FUN_108298d90();
    bVar7 = param_14 == 0;
    uVar8 = (uint)lVar13;
    if (lVar11 == 0) {
      uVar8 = 1;
    }
    else {
      uVar1 = 1;
    }
    uVar2 = param_10 == 0 & uVar8;
    dVar21 = (double)NEON_fmov(0x3f800000,4);
    if ((((int)*param_12 != 0) && ((*param_12 & 0x100000000) == 0)) &&
       ((param_14 == 0 && ((int)param_12[2] == 1)))) {
      if ((*(int *)((long)param_12 + 0x14) == 0 & uVar2) == 1) {
        uVar10 = param_6;
        FUN_108280c4c();
        if ((uVar10 & 1) == 0) {
          uStack_178 = 0;
          uStack_180 = 0x3f800000;
          uStack_168 = 0;
          uStack_170 = 0x3f800000;
          uStack_160 = 0x103f800000;
          FUN_108364350(&uStack_180,param_11,param_16);
          plVar14 = *(long **)(uVar18 + 0x10);
          (**(code **)(*plVar14 + 0x28))();
          lVar13 = plVar14[1];
          iVar9 = (int)&uStack_180;
          FUN_10827a0d8();
          if (iVar9 != 0) {
            uStack_288 = 0;
            uStack_280 = 0;
            FUN_108364f90(&uStack_180,&uStack_288,param_7,1);
            if (((ABS((float)(double)(long)((float)uStack_288 + 0.5) - (float)uStack_288) < 0.001)
                && (ABS((float)(double)(long)(uStack_288._4_4_ + 0.5) - uStack_288._4_4_) < 0.001))
               && ((ABS(((float)uStack_280 - (float)uStack_288) - (param_7[2] - *param_7)) < 0.001
                   && (ABS((uStack_280._4_4_ - uStack_288._4_4_) - (param_7[3] - param_7[1])) <
                       0.001)))) {
LAB_108280a8c:
              bVar7 = false;
              goto LAB_1082805e8;
            }
            uStack_320 = 0;
            uStack_318 = 0;
            uStack_2c8 = uStack_280;
            lStack_2d0 = uStack_288;
            uVar16 = (uint)('\x01' < (char)lVar13);
            uVar10 = ((ulong)-dVar21 ^ 0xbf0000003f000000) &
                     CONCAT44(-(uint)((int)(uVar16 << 0x1f) < 0),-(uint)((int)(uVar16 << 0x1f) < 0))
                     ^ 0xbf0000003f000000;
            fVar19 = (float)uVar10;
            fVar20 = (float)(uVar10 >> 0x20);
            uStack_258 = CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(param_7 + 2) >> 0x20),
                                  fVar20 + (float)*(undefined8 *)(param_7 + 2));
            lStack_260 = CONCAT44(fVar19 + (float)((ulong)*(undefined8 *)param_7 >> 0x20),
                                  fVar19 + (float)*(undefined8 *)param_7);
            FUN_108364f90(&uStack_180,&uStack_320,&lStack_260,1);
            uStack_2c8 = CONCAT44((float)((ulong)uStack_2c8 >> 0x20) + -0.001,
                                  (float)uStack_2c8 + -0.001);
            lStack_2d0 = CONCAT44((float)((ulong)lStack_2d0 >> 0x20) + 0.001,
                                  (float)lStack_2d0 + 0.001);
            uStack_318 = CONCAT44((float)((ulong)uStack_318 >> 0x20) + 0.001,
                                  (float)uStack_318 + 0.001);
            uStack_320 = CONCAT44((float)(uStack_320 >> 0x20) + -0.001,(float)uStack_320 + -0.001);
            uStack_270 = 0;
            uStack_268 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            func_0x00010827a188(&lStack_2d0,&uStack_270);
            func_0x00010827a188(&uStack_320,&uStack_98);
            if ((int)uStack_98 == (int)uStack_270) {
              if (uStack_98._4_4_ == uStack_270._4_4_) {
                if ((int)uStack_90 == (int)uStack_268) {
                  if (uStack_90._4_4_ == uStack_268._4_4_) goto LAB_108280a8c;
                }
              }
            }
          }
        }
        bVar7 = true;
      }
      else {
        bVar7 = true;
      }
    }
LAB_1082805e8:
    uStack_2c8 = 0;
    lStack_2d0 = 0x3f800000;
    uStack_2b8 = 0;
    uStack_2c0 = 0x3f800000;
    uStack_2b0 = 0x103f800000;
    if (uVar1 == 0) {
      uStack_2c8 = uRam0000000113254e28;
      lStack_2d0 = lRam0000000113254e20;
      uStack_2b8 = uRam0000000113254e38;
      uStack_2c0 = uRam0000000113254e30;
      uStack_2b0 = uRam0000000113254e40;
    }
    else {
      FUN_10818cfd0(param_16,&lStack_2d0);
      if ((int)param_16 == 0) goto LAB_108280960;
    }
    pfVar3 = param_7;
    if (!bVar7) {
      pfVar3 = (float *)0x0;
    }
    pfVar4 = param_7;
    if (uVar2 == 0) {
      pfVar4 = (float *)0x0;
    }
    uStack_98 = CONCAT44(param_17,param_17);
    uStack_178 = param_12[1];
    uStack_180 = *param_12;
    uStack_170 = param_12[2];
    FUN_1082e0e64(&uStack_288,uVar18,param_6,&uStack_180,&uStack_98,&lStack_2d0,pfVar3,pfVar4);
    lStack_2d8 = uStack_288;
    uStack_288 = 0;
    FUN_10828ae78(&uStack_180,param_6 + 0x10);
    FUN_10828b764(&lStack_260,&lStack_2d8,&uStack_180,uVar18 + 0x20);
    lVar13 = uStack_288;
    uStack_288 = lStack_260;
    if (lVar13 != 0) {
      func_0x000108281be8();
    }
    func_0x000108281c04();
    lVar13 = lStack_2d8;
    lStack_2d8 = 0;
    if (lVar13 != 0) {
      func_0x000108281be8();
    }
    lVar13 = uStack_288;
    if (0x1a < *(uint *)(param_6 + 0x18)) goto LAB_108280a98;
    if ((1 << (ulong)(*(uint *)(param_6 + 0x18) & 0x1f) & 0x7affffdU) == 0) {
      if (*(long *)(param_13 + 8) == 0) {
        uStack_288 = 0;
        lStack_2f0 = lVar13;
        plVar14 = &lStack_2f0;
        FUN_108296588(&uStack_180);
        func_0x000108281c7c();
        lVar13 = lStack_2f0;
        if (plVar14 != (long *)0x0) {
          func_0x000108281be8();
          uVar10 = uStack_180;
          uStack_180 = 0;
          lVar13 = lStack_2f0;
          if (uVar10 != 0) {
            func_0x000108281be8();
            lVar13 = lStack_2f0;
          }
        }
joined_r0x0001082809d4:
        if (lVar13 != 0) {
          func_0x000108281be8();
        }
        goto LAB_1082806f4;
      }
      uStack_170 = uVar18 + 0x50;
      uStack_168 = uStack_168 & 0xffffffff00000000;
      uStack_180 = uVar18;
      uStack_178 = uVar18 + 0x20;
      FUN_10829b838(&lStack_260,*(long *)(param_13 + 8),&uStack_180,param_11);
      lVar13 = uStack_288;
      if (lStack_260 != 0) {
        uStack_288 = 0;
        lStack_2e8 = lStack_260;
        lStack_2e0 = lVar13;
        lStack_260 = 0;
        plVar14 = &lStack_2e0;
        FUN_108279f74(&uStack_180,plVar14,&lStack_2e8);
        func_0x000108281c7c();
        if (plVar14 != (long *)0x0) {
          func_0x000108281be8();
          uVar10 = uStack_180;
          uStack_180 = 0;
          if (uVar10 != 0) {
            func_0x000108281be8();
          }
        }
        lVar13 = lStack_2e8;
        lStack_2e8 = 0;
        if (lVar13 != 0) {
          func_0x000108281be8();
        }
        lVar13 = lStack_2e0;
        lStack_2e0 = 0;
        if (lVar13 != 0) {
          func_0x000108281be8();
        }
        lVar13 = lStack_260;
        lStack_260 = 0;
        goto joined_r0x0001082809d4;
      }
    }
    else {
LAB_1082806f4:
      lStack_328 = uStack_288;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_308 = 1;
      uStack_2fc = 0x3f8000003f800000;
      uStack_304 = 0x3f8000003f800000;
      uStack_288 = 0;
      uVar10 = uVar18;
      FUN_1082b9108(uVar18,param_13,param_11,&lStack_328,&uStack_320);
      lVar13 = lStack_328;
      if (lStack_328 != 0) {
        func_0x000108281be8();
      }
      if ((uVar10 & 1) != 0) {
        if (uVar8 == 0) {
          uStack_148 = 0;
          dStack_140 = -dVar21;
          uStack_134 = 0;
          uStack_124 = 0;
          uStack_12c = 0;
          uStack_138 = 0x40800000;
          uStack_11c = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0;
          uStack_a8 = 0;
          if (param_9 == 0) {
            FUN_10827e874();
            FUN_10827efc4(&lStack_260,param_8,lVar13,1);
            func_0x000108281c70();
            func_0x000108281bfc();
          }
          else {
            FUN_108376ad8(&uStack_270);
            FUN_108378060(&uStack_270,param_9,4,1);
            FUN_108280d3c(&lStack_260,&uStack_270,1);
            func_0x000108281c70();
            func_0x000108281bfc();
            FUN_10837ca5c(uStack_270);
          }
          FUN_108283ae0(uVar17,uVar18,param_5 + 0x140,&uStack_320,param_11,lVar11,&uStack_180);
          func_0x00010827f18c(&uStack_180);
        }
        else if (param_9 == 0) {
          func_0x000108281c90();
          func_0x00010827c684(uVar18);
        }
        else {
          if (uVar1 == 0) {
            FUN_108280cf4(param_8,param_7,param_9,&uStack_180);
          }
          func_0x000108281c90();
          FUN_10827c60c(uVar18);
        }
      }
      func_0x00010827ee54(&uStack_320);
    }
    lVar11 = uStack_288;
    uStack_288 = 0;
    if (lVar11 != 0) {
      func_0x000108281be8();
    }
  }
LAB_108280960:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_108280a98:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x108280a9c);
  (*pcVar6)();
}



/* Entry: 108280c4c; end: 108280c9b;  */

bool FUN_108280c4c(long *param_1)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xf0))();
  if ((int)plVar2 == 5) {
    bVar1 = true;
  }
  else {
    (**(code **)(*param_1 + 0xf0))(param_1);
    bVar1 = (int)param_1 == 7;
  }
  return bVar1;
}



/* Entry: 108280c9c; end: 108280cf3;  */

bool FUN_108280c9c(long param_1,int *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  bVar5 = false;
  lVar3 = -(ulong)(*(long *)(param_1 + 0x18) == 0);
  lVar4 = -(ulong)(*(long *)(param_1 + 0x20) == 0);
  lVar6 = -(ulong)(*(long *)(param_1 + 8) == 0);
  lVar7 = -(ulong)(*(long *)(param_1 + 0x10) == 0);
  auVar1[1] = ~(byte)((ulong)lVar6 >> 8);
  auVar1[0] = ~(byte)lVar6;
  auVar1[2] = ~(byte)((ulong)lVar6 >> 0x10);
  auVar1[3] = ~(byte)((ulong)lVar6 >> 0x18);
  auVar1[4] = ~(byte)lVar7;
  auVar1[5] = ~(byte)((ulong)lVar7 >> 8);
  auVar1[6] = ~(byte)((ulong)lVar7 >> 0x10);
  auVar1[7] = ~(byte)((ulong)lVar7 >> 0x18);
  auVar1[8] = ~(byte)lVar3;
  auVar1[9] = ~(byte)((ulong)lVar3 >> 8);
  auVar1[10] = ~(byte)((ulong)lVar3 >> 0x10);
  auVar1[0xb] = ~(byte)((ulong)lVar3 >> 0x18);
  auVar1[0xc] = ~(byte)lVar4;
  auVar1[0xd] = ~(byte)((ulong)lVar4 >> 8);
  auVar1[0xe] = ~(byte)((ulong)lVar4 >> 0x10);
  auVar1[0xf] = ~(byte)((ulong)lVar4 >> 0x18);
  uVar2 = NEON_umaxv(auVar1,4);
  if (((((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x28) == 0)) && (bVar5 = false, *param_2 == 0))
     && ((*(byte *)(param_2 + 1) & 1) == 0)) {
    bVar5 = param_2[5] == 0;
  }
  return bVar5;
}



/* Entry: 108280cf4; end: 108280d3b;  */

void FUN_108280cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  
  FUN_10814c9e0(auStack_48,param_1,param_2,0);
  FUN_1083645e0(auStack_48,param_4,param_3,4);
  return;
}



/* Entry: 108280d3c; end: 108280d7b;  */

undefined8 FUN_108280d3c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10827e874();
  FUN_10827eddc(param_1,param_2,uVar1);
  func_0x00010827ffd8();
  func_0x00010827fd78();
  if (param_3 != 0) {
    func_0x00010827ffc4();
  }
  return param_1;
}



/* Entry: 108280d7c; end: 108280fc3;  */

void FUN_108280d7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6,undefined8 param_7,int *param_8,long param_9,
                  int param_10)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piStack_168;
  long lStack_160;
  long lStack_158;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined8 uStack_148;
  long *plStack_140;
  long alStack_138 [13];
  long lStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_70 = param_1;
  uStack_6c = param_2;
  FUN_10817500c((long)param_6 + 0xc);
  uStack_78 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)((long)param_6 + 0x14) >> 0x20) -
                                  (int)((ulong)*(undefined8 *)((long)param_6 + 0xc) >> 0x20),
                                  (int)*(undefined8 *)((long)param_6 + 0x14) -
                                  (int)*(undefined8 *)((long)param_6 + 0xc)),4);
  uStack_80 = 0;
  uStack_68 = param_3;
  uStack_64 = param_4;
  FUN_10814c9e0(auStack_a8,&uStack_70,&uStack_80,0);
  iStack_b0 = param_8[4];
  if ((*param_8 != 0 || (*(byte *)(param_8 + 1) & 1) != 0) || param_8[5] != 0) {
    iStack_b0 = 1;
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_ac = 0;
  if (((*(byte *)(param_9 + 0x48) & 1) == 0) &&
     ((*(uint *)(*(long *)(param_5 + 0x138) + 0x50) >> 1 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xf;
  }
  FUN_1082e49f0(&lStack_d0,*(undefined8 *)(param_5 + 0x128),param_6);
  if (lStack_d0 != 0) {
    if (param_10 == 1) {
      alStack_138[0] = lStack_d0;
      FUN_1082b2348(alStack_138);
    }
    plVar5 = param_6;
    (**(code **)(*param_6 + 0x48))();
    lStack_158 = lStack_d0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_148 = 0;
    uVar2 = *(undefined4 *)((long)param_6 + 0x1c);
    lStack_d0 = 0;
    uStack_150 = uStack_c8;
    uStack_14c = uStack_c4;
    piStack_168 = (int *)param_6[4];
    if (piStack_168 != (int *)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piStack_168,0x10);
        if (bVar4) {
          *piStack_168 = *piStack_168 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_160 = param_6[5];
    plStack_140 = plVar5;
    FUN_1082e230c(alStack_138,&plStack_140,uVar2,&lStack_158,&piStack_168);
    FUN_10810a400(&piStack_168);
    func_0x000108281c5c();
    FUN_108281b98(&plStack_140);
    FUN_10827f63c(&uStack_148);
    FUN_108280068(param_5,alStack_138,&uStack_70,&uStack_80,0,uVar6,param_7,&uStack_c0,param_9,
                  param_10);
    FUN_1082e2774(alStack_138);
  }
  FUN_1082764bc(&lStack_d0);
  return;
}



/* Entry: 108280fc4; end: 108281143;  */

void FUN_108280fc4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong *param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0x3f800000;
  uStack_98 = 0;
  uStack_a0 = 0x3f800000;
  uStack_90 = 0x103f800000;
  uStack_e0 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = &uStack_e0;
  FUN_108321410(puVar1,param_3,param_4,param_5,&uStack_70,&uStack_80,&uStack_b0);
  if ((int)puVar1 != 2) {
    uStack_d8 = *(undefined8 *)(param_2 + 0x20);
    uStack_e0 = 0;
    puVar1 = &uStack_70;
    FUN_108281144(puVar1,&uStack_e0);
    if ((int)puVar1 != 0) {
      param_10 = 1;
    }
    uStack_d8 = *(undefined8 *)(param_1 + 0x100);
    uStack_e0 = *(undefined8 *)(param_1 + 0xf8);
    uStack_c8 = *(undefined8 *)(param_1 + 0x110);
    uStack_d0 = *(undefined8 *)(param_1 + 0x108);
    uStack_c0 = *(undefined8 *)(param_1 + 0x118);
    if (param_7 != 0) {
      FUN_108363e94(&uStack_e0,param_7);
    }
    uStack_f0 = param_8[2];
    uStack_f8 = param_8[1];
    uStack_100 = *param_8;
    if ((int)(uStack_f0 >> 0x20) != 0) {
      puVar1 = &uStack_e0;
      FUN_108321588(puVar1,&uStack_b0,
                    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x128) + 0x10) + 0x9f));
      if ((int)puVar1 != 0) {
        uStack_100 = uStack_100 & 0xffffff0000000000;
        uStack_f8 = 0;
        uStack_f0 = uStack_f0 & 0xffffffff;
      }
    }
    FUN_108280068(param_1,param_2,&uStack_70,&uStack_80,param_5,param_6,&uStack_e0,&uStack_100,
                  param_9,param_10);
  }
  return;
}



/* Entry: 108281144; end: 1082811d7;  */

bool FUN_108281144(float *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  FUN_10821a6d8();
  if (((ulong)piVar1 & 1) == 0) {
    if (*param_1 < param_1[2]) {
      if ((((param_1[1] < param_1[3]) && (*param_1 <= (float)*param_2)) &&
          (param_1[1] <= (float)param_2[1])) && ((float)param_2[2] <= param_1[2])) {
        return (float)param_2[3] <= param_1[3];
      }
    }
  }
  return false;
}



/* Entry: 1082811d8; end: 108281877;  */

void FUN_1082811d8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,ulong param_7,long param_8,long param_9,long param_10,
                  ulong param_11,undefined4 param_12)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long extraout_x9;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_17a [2];
  ulong uStack_178;
  uint uStack_170;
  undefined2 uStack_16c;
  undefined8 *puStack_168;
  long *plStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 **ppuStack_148;
  int *piStack_140;
  uint *puStack_138;
  undefined4 *puStack_130;
  undefined4 *puStack_128;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  ulong uStack_f8;
  uint uStack_f0;
  undefined2 uStack_ec;
  undefined1 uStack_a0;
  undefined4 uStack_94;
  long alStack_90 [2];
  
  uVar12 = param_11;
  uStack_94 = param_12;
  alStack_90[0] = param_6;
  FUN_108280c9c(param_11,param_10);
  uVar14 = (uint)param_7;
  if ((uVar12 & 1) == 0) {
    lVar15 = 0;
    for (lVar10 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x38 - lVar10 != 0;
        lVar10 = lVar10 + 0x38) {
      uStack_f0 = uStack_f0 & 0xffffff00;
      uStack_a0 = 0;
      lVar8 = alStack_90[0];
      uStack_f8 = param_11;
      if (*(float *)(alStack_90[0] + lVar10 + 0x2c) != 1.0) {
        FUN_10827d610(&uStack_f8);
        func_0x000108281c0c(*(undefined4 *)(alStack_90[0] + lVar10 + 0x2c));
        lVar8 = extraout_x9;
      }
      puVar4 = (undefined8 *)(lVar8 + lVar10);
      lVar8 = param_8 + lVar15 * 8;
      if (*(char *)((long)puVar4 + 0x34) == '\0') {
        lVar8 = 0;
      }
      lVar9 = 0;
      if (-1 < (int)*(uint *)(puVar4 + 5)) {
        lVar9 = param_9 + (ulong)*(uint *)(puVar4 + 5) * 0x28;
      }
      FUN_108280fc4(param_5,*puVar4,puVar4 + 1,puVar4 + 3,lVar8,*(undefined4 *)(puVar4 + 6),lVar9,
                    param_10,uStack_f8,uStack_94);
      lVar15 = lVar15 + (ulong)*(byte *)(alStack_90[0] + lVar10 + 0x34) * 4;
      FUN_10819a688(&uStack_f0);
    }
  }
  else {
    uStack_fc = (uint)(*(int *)(param_10 + 0x10) != 0);
    uVar12 = param_11;
    FUN_108376298(param_11,3);
    uStack_100 = (undefined4)uVar12;
    puStack_110 = (undefined8 *)0x0;
    if ((int)uVar14 < 0) {
LAB_1082817fc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108281800);
      (*pcVar3)();
    }
    uVar12 = (ulong)(int)uVar14;
    uStack_108 = uVar12;
    if (uVar14 == 0) {
      puStack_110 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(uVar12 * 0x60 | 0x10);
      __Znam();
      *puVar4 = 0x60;
      puVar4[1] = uVar12;
      puStack_110 = puVar4 + 2;
      lVar10 = uVar12 * 0x60;
      puVar4 = puVar4 + 3;
      do {
        puVar4[-1] = 0;
        *(undefined4 *)puVar4 = 0;
        *(undefined2 *)((long)puVar4 + 4) = 0x3210;
        *(undefined8 *)((long)puVar4 + 0x14) = 0;
        *(undefined8 *)((long)puVar4 + 0xc) = 0;
        *(undefined8 *)((long)puVar4 + 0x24) = 0;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0;
        puVar4 = puVar4 + 0xc;
        lVar10 = lVar10 + -0x60;
      } while (lVar10 != 0);
    }
    uVar12 = 0;
    lVar10 = 0;
    uVar13 = 0;
    uStack_118 = 0;
    puStack_168 = &uStack_118;
    iStack_11c = 0;
    plStack_160 = alStack_90;
    lStack_158 = (long)&uStack_118 + 4;
    ppuStack_148 = &puStack_110;
    piStack_140 = &iStack_11c;
    puStack_138 = &uStack_fc;
    puStack_130 = &uStack_100;
    puStack_128 = &uStack_94;
    lStack_150 = param_5;
    for (lVar15 = 0; (param_7 & 0xffffffff) * 0x38 != lVar15; lVar15 = lVar15 + 0x38) {
      puVar7 = (ulong *)(alStack_90[0] + lVar15);
      bVar2 = *(byte *)((long)puVar7 + 0x34);
      lVar8 = param_8 + uVar13 * 8;
      if (bVar2 == 0) {
        lVar8 = 0;
      }
      if ((*(float *)(puVar7 + 2) < *(float *)(puVar7 + 1)) ||
         (fVar18 = *(float *)((long)puVar7 + 0x14), fVar18 < *(float *)((long)puVar7 + 0xc))) {
        func_0x000108281c24();
      }
      else {
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_16c = 0x3210;
        uVar16 = *puVar7;
        uVar6 = uVar16;
        FUN_108280c4c();
        if ((uVar6 & 1) == 0) {
          func_0x000108281c30(&uStack_f8,*(undefined8 *)(param_5 + 0x128),uVar16);
          func_0x000108281c50();
          func_0x000108281c48();
          if (0x1a < *(uint *)(uVar16 + 0x18)) goto LAB_1082817fc;
          if ((1 << (ulong)(*(uint *)(uVar16 + 0x18) & 0x1f) & 0x7affffdU) == 0) {
            uStack_f8 = CONCAT62(uStack_f8._2_6_,uStack_16c);
            FUN_108266014(auStack_17a,&UNK_10f481050);
            puVar7 = &uStack_f8;
            FUN_1082819b0(puVar7,auStack_17a);
            uStack_f8 = uStack_178;
            uStack_178 = 0;
            uStack_f0 = uStack_170;
            uStack_ec = SUB82(puVar7,0);
            func_0x000108281c50();
            func_0x000108281c48();
            func_0x000108281c5c();
          }
        }
        if (uStack_178 == 0) {
          func_0x000108281c24();
          uStack_f0 = uStack_f0 & 0xffffff00;
          uStack_a0 = 0;
          lVar9 = alStack_90[0];
          uStack_f8 = param_11;
          if (*(float *)(alStack_90[0] + lVar15 + 0x2c) != 1.0) {
            FUN_10827d610(&uStack_f8);
            func_0x000108281c0c(*(undefined4 *)(alStack_90[0] + lVar15 + 0x2c));
            lVar9 = extraout_x8;
          }
          lVar9 = lVar9 + lVar15;
          lVar1 = 0;
          if (-1 < (int)*(uint *)(lVar9 + 0x28)) {
            lVar1 = param_9 + (ulong)*(uint *)(lVar9 + 0x28) * 0x28;
          }
          FUN_108280fc4(param_5,uVar16,lVar9 + 8,lVar9 + 0x18,lVar8,*(undefined4 *)(lVar9 + 0x30),
                        lVar1,param_10,uStack_f8,uStack_94);
          func_0x000108281c64();
        }
        else {
          if ((uStack_108 <= uVar12) ||
             (FUN_108279f20((long)puStack_110 + lVar10,&uStack_178), uStack_108 <= uVar12))
          goto LAB_1082817fc;
          *(undefined4 *)((long)puStack_110 + lVar10 + 0x10) = *(undefined4 *)(uVar16 + 0x1c);
          lVar9 = alStack_90[0] + lVar15;
          uVar5 = *(undefined8 *)(lVar9 + 8);
          *(undefined8 *)((long)puStack_110 + lVar10 + 0x1c) = *(undefined8 *)(lVar9 + 0x10);
          *(undefined8 *)((long)puStack_110 + lVar10 + 0x14) = uVar5;
          if (uStack_108 <= uVar12) goto LAB_1082817fc;
          uVar5 = *(undefined8 *)(lVar9 + 0x18);
          *(undefined8 *)((long)puStack_110 + lVar10 + 0x2c) = *(undefined8 *)(lVar9 + 0x20);
          *(undefined8 *)((long)puStack_110 + lVar10 + 0x24) = uVar5;
          if (uStack_108 <= uVar12) goto LAB_1082817fc;
          *(long *)((long)puStack_110 + lVar10 + 0x38) = lVar8;
          uVar14 = *(uint *)(alStack_90[0] + lVar15 + 0x28);
          lVar8 = 0;
          if (-1 < (int)uVar14) {
            lVar8 = param_9 + (ulong)uVar14 * 0x28;
          }
          *(long *)((long)puStack_110 + lVar10 + 0x40) = lVar8;
          FUN_10819a67c(param_11);
          uVar17 = (undefined4)uVar5;
          if ((0x1a < *(uint *)(uVar16 + 0x18)) ||
             (FUN_108281a00(*(undefined4 *)(&UNK_10df13080 + (ulong)*(uint *)(uVar16 + 0x18) * 4),
                            *(long *)(param_5 + 0x138) + 0x20), uStack_108 <= uVar12))
          goto LAB_1082817fc;
          puVar4 = (undefined8 *)((long)puStack_110 + lVar10);
          *(undefined4 *)(puVar4 + 9) = uVar17;
          *(float *)((long)puVar4 + 0x4c) = fVar18;
          *(undefined4 *)(puVar4 + 10) = param_3;
          *(undefined4 *)((long)puVar4 + 0x54) = param_4;
          *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(alStack_90[0] + lVar15 + 0x30);
          iVar11 = (int)uStack_118;
          if (0 < (int)uStack_118) {
            if (uStack_108 <= (ulong)(long)uStack_118._4_4_) goto LAB_1082817fc;
            uVar5 = *puVar4;
            func_0x0001082b3460(uVar5,puStack_110[(long)uStack_118._4_4_ * 0xc]);
            if ((int)uVar5 == 0) {
LAB_108281654:
              FUN_108281878(&puStack_168,uVar12);
            }
            else {
              if ((uStack_108 <= uVar12) || (uStack_108 <= (ulong)(long)uStack_118._4_4_))
              goto LAB_1082817fc;
              if (*(short *)((long)puStack_110 + lVar10 + 0xc) !=
                  *(short *)((long)puStack_110 + (long)uStack_118._4_4_ * 0x60 + 0xc))
              goto LAB_108281654;
              lVar8 = *(long *)(alStack_90[0] + (long)uStack_118._4_4_ * 0x38);
              if (*(int *)(*(long *)(alStack_90[0] + lVar15) + 0x1c) != *(int *)(lVar8 + 0x1c))
              goto LAB_108281654;
              uVar6 = *(ulong *)(*(long *)(alStack_90[0] + lVar15) + 0x10);
              FUN_108343f98(uVar6,*(undefined8 *)(lVar8 + 0x10));
              if ((uVar6 & 1) == 0) goto LAB_108281654;
            }
            iVar11 = (int)uStack_118;
          }
          uStack_118 = CONCAT44(uStack_118._4_4_,iVar11 + 1);
          if (iVar11 != 0) {
            if ((uStack_108 <= uVar12 - 1) || (uStack_108 <= uVar12)) goto LAB_1082817fc;
            if (((long *)((long)puStack_110 + lVar10))[-0xc] ==
                *(long *)((long)puStack_110 + lVar10)) goto LAB_108281754;
          }
          iStack_11c = iStack_11c + 1;
        }
LAB_108281754:
        FUN_1082764bc(&uStack_178);
      }
      lVar10 = lVar10 + 0x60;
      uVar12 = uVar12 + 1;
      uVar13 = (ulong)((int)uVar13 + (uint)bVar2 * 4);
    }
    FUN_108281878(&puStack_168,param_7);
    FUN_108281b1c(&puStack_110);
  }
  return;
}



/* Entry: 108281878; end: 1082819af;  */

void FUN_108281878(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  piVar2 = (int *)*param_1;
  if (0 < *piVar2) {
    lVar1 = param_1[3];
    FUN_10828ae78(auStack_50,*(long *)(*(long *)param_1[1] + (long)*(int *)param_1[2] * 0x38) + 0x10
                 );
    FUN_10828b188(&uStack_38,auStack_50,*(long *)(lVar1 + 0x138) + 0x20);
    func_0x00010828afb8(auStack_50);
    uStack_58 = uStack_38;
    uStack_38 = 0;
    FUN_1082c2544(*(undefined8 *)(lVar1 + 0x138),lVar1 + 0x140,
                  *(long *)param_1[4] + (long)*(int *)param_1[2] * 0x60,*(undefined4 *)*param_1,
                  *(undefined4 *)param_1[5],*(undefined4 *)param_1[6],0,*(undefined4 *)param_1[7],
                  *(undefined4 *)param_1[8]);
    FUN_10827f5a4(&uStack_58);
    FUN_10827f5a4(&uStack_38);
    piVar2 = (int *)*param_1;
  }
  *(undefined4 *)param_1[2] = param_2;
  *piVar2 = 0;
  *(undefined4 *)param_1[5] = 0;
  return;
}



/* Entry: 1082819b0; end: 1082819ff;  */

uint FUN_1082819b0(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = 0; uVar3 != 0x10; uVar3 = uVar3 + 4) {
    uVar1 = (uint)(*param_2 >> (ulong)(uVar3 & 0x1f));
    if ((uVar1 & 0xe) != 4) {
      uVar1 = (uint)(*param_1 >> (ulong)((uVar1 & 7) << 2));
    }
    uVar2 = uVar2 | (uVar1 & 0xf) << (ulong)(uVar3 & 0x1f);
  }
  return uVar2;
}



/* Entry: 108281a00; end: 108281a6b;  */

float FUN_108281a00(float param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
                   uint param_6,undefined8 param_7)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = param_6 == 0x23;
  if (0x23 < param_6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108281a6c);
    (*pcVar1)();
  }
  param_4 = param_4 * param_5;
  func_0x000108281c9c(param_6);
  if (!bVar2) {
    fVar3 = 1.0;
    if (param_4 <= 1.0) {
      fVar3 = param_4;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
  FUN_1082b8a20(param_7);
  return param_1 * param_4;
}



/* Entry: 108281a6c; end: 108281b1b;  */

bool FUN_108281a6c(float *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_2[2];
  if (*param_2 < fVar3) {
    if (param_2[1] < param_2[3]) {
      fVar4 = param_1[2];
      if (*param_1 < fVar4) {
        fVar6 = param_1[1];
        fVar5 = param_1[3];
        bVar1 = false;
        if ((*param_1 <= *param_2) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
          bVar1 = fVar6 < fVar5;
        }
        if (bVar1) {
          bVar1 = true;
          bVar2 = false;
          if (param_2[3] <= fVar5) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(fVar4) && !NAN(fVar3)) {
              bVar1 = fVar4 < fVar3;
              bVar2 = false;
            }
          }
          return bVar1 == bVar2 && fVar6 <= param_2[1];
        }
      }
    }
  }
  return false;
}



/* Entry: 108281b1c; end: 108281b97;  */

long * FUN_108281b1c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000108281b4c();
  }
  return param_1;
}



/* Entry: 108281b98; end: 108281be7;  */

long * FUN_108281b98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108281be8; end: 108281cb7;  */

void FUN_108281be8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108281bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108281cb8; end: 108281dbf;  */

undefined1 * FUN_108281cb8(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  uint extraout_w8;
  undefined1 *puVar3;
  undefined1 auStack_188 [8];
  long lStack_120;
  undefined1 auStack_118 [112];
  undefined1 auStack_a8 [88];
  char cStack_50;
  
  func_0x0001082820fc();
  if (((extraout_w8 >> 2 & 1) == 0) && ((*(byte *)((long)param_1 + 0xd2) & 1) == 0)) {
    (**(code **)(*param_1 + 0x50))(auStack_a8,param_1);
    puVar3 = auStack_a8;
    func_0x00010828398c();
    func_0x000108320820();
    (**(code **)(*param_1 + 0x50))(auStack_118,param_1);
    puVar2 = auStack_118;
    func_0x0001082839c8();
    func_0x00010828212c();
    if ((bool)in_ZR) {
      func_0x000108282088();
    }
    puVar3 = (undefined1 *)((long)puVar2 * (long)puVar3 * (long)*(int *)((long)param_1 + 0xcc));
    in_ZR = cStack_50 == '\x01';
    if ((bool)in_ZR) {
      func_0x00010828209c(auStack_a8);
    }
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  func_0x000108282114();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010828212c();
  if ((bool)in_ZR) {
    func_0x000108282088();
  }
  if (cStack_50 == '\x01') {
    func_0x00010828209c(auStack_a8);
  }
  func_0x0001082820f4();
  func_0x0001082820cc();
  if ((bRam0000000113826ae0 & 1) == 0) {
    iVar1 = 0x13826ae0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108320d60();
      iRam0000000113826ad8 = iVar1;
      ___cxa_guard_release(0x113826ae0);
    }
  }
  puVar3 = auStack_188;
  FUN_10827a280(puVar3,lStack_120,iRam0000000113826ad8,5);
  *(undefined8 *)(lStack_120 + 0x30) = 0;
  func_0x0001082820a8();
  func_0x0001082820ec();
  return puVar3;
}



/* Entry: 108281dc0; end: 108281e83;  */

void FUN_108281dc0(void)

{
  int iVar1;
  long in_stack_00000000;
  undefined1 auStack_68 [8];
  
  func_0x0001082820cc();
  if ((bRam0000000113826ae0 & 1) == 0) {
    iVar1 = 0x13826ae0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108320d60();
      iRam0000000113826ad8 = iVar1;
      ___cxa_guard_release(0x113826ae0);
    }
  }
  FUN_10827a280(auStack_68,in_stack_00000000,iRam0000000113826ad8,5);
  *(undefined8 *)(in_stack_00000000 + 0x30) = 0;
  func_0x0001082820a8();
  func_0x0001082820ec();
  return;
}



/* Entry: 108281e84; end: 108281f13;  */

void FUN_108281e84(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,uint param_7,int param_8)

{
  long lVar1;
  uint uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2,param_3);
  lVar1 = *(long *)*param_1;
  *(int *)(lVar1 + 8) = (int)param_4;
  *(int *)(lVar1 + 0xc) = (int)((ulong)param_4 >> 0x20);
  *(int *)(lVar1 + 0x10) = (int)param_2;
  *(int *)(lVar1 + 0x14) = (int)((ulong)param_2 >> 0x20);
  uVar2 = 2;
  if (param_8 == 0) {
    uVar2 = 0;
  }
  *(uint *)(lVar1 + 0x18) = uVar2 | param_7 | param_5 << 2 | param_6 << 10;
  return;
}



/* Entry: 108281f14; end: 108281fc7;  */

void FUN_108281f14(void)

{
  int iVar1;
  undefined8 in_stack_00000000;
  undefined1 auStack_58 [8];
  
  func_0x0001082820cc();
  if ((bRam0000000113826af0 & 1) == 0) {
    iVar1 = 0x13826af0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108320d08();
      iRam0000000113826ae8 = iVar1;
      ___cxa_guard_release(0x113826af0);
    }
  }
  FUN_10827a280(auStack_58,in_stack_00000000,iRam0000000113826ae8,5);
  func_0x0001082820a8();
  func_0x0001082820ec();
  return;
}



/* Entry: 108281fc8; end: 10828207b;  */

void FUN_108281fc8(long *param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 in_x5;
  uint extraout_w8;
  undefined8 uVar4;
  undefined1 auStack_a8 [120];
  
  func_0x0001082820fc();
  uVar3 = (extraout_w8 & 5) == 0;
  if ((bool)uVar3) {
    bVar1 = *(byte *)((long)param_1 + 0xbc);
    uVar4 = *(undefined8 *)(param_1[0x10] + 0x10);
    (**(code **)(*param_1 + 0x50))(auStack_a8);
    FUN_108281f14(uVar4,auStack_a8,param_1[0x16],(char)param_1[0x19],
                  *(undefined4 *)((long)param_1 + 0xcc),in_x5,bVar1 & 1,
                  *(undefined1 *)((long)param_1 + 0xd2),param_2);
    func_0x00010828212c();
    if ((bool)uVar3) {
      func_0x000108282088();
    }
  }
  func_0x000108282114();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010828212c();
  if ((bool)uVar3) {
    func_0x000108282088();
  }
  func_0x0001082820f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108282080);
  (*pcVar2)();
}



/* Entry: 10828207c; end: 108282137;  */

void FUN_10828207c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108282080);
  (*pcVar1)();
}



/* Entry: 108282138; end: 1082822b3;  */

void FUN_108282138(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long unaff_x19;
  long *unaff_x20;
  int *piVar3;
  long lVar4;
  long *plStack_60;
  undefined8 *puStack_58;
  
  func_0x00010828315c();
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = 0x1138270b0;
  puVar1[1] = 0;
  puVar1[2] = 0x100000000;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puStack_58 = puVar1;
  FUN_1082822b4();
  plVar2 = unaff_x20;
  (**(code **)(*unaff_x20 + 0x10))();
  func_0x0001083a3534(puStack_58,plVar2);
  lVar4 = unaff_x20[4];
  puStack_58[4] = unaff_x20[5];
  puStack_58[3] = lVar4;
  puStack_58[5] = 0xffffffffffffffff;
  *(undefined4 *)(puStack_58 + 6) = 0xffffffff;
  FUN_1082822fc(puStack_58 + 1,unaff_x19 + 0x40);
  puVar1 = (undefined8 *)(unaff_x19 + 0x40);
  func_0x000108282350(puVar1);
  piVar3 = (int *)(unaff_x19 + 0x50);
  if (*piVar3 != -1) {
    *(int *)(puStack_58 + 5) = *piVar3;
    puVar1 = (undefined8 *)(unaff_x19 + 0x20);
    FUN_108282374(puVar1,piVar3);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x10;
      __Znwm();
      *puVar1 = 0;
      puVar1[1] = 0x100000000;
      func_0x000108282394(unaff_x19 + 0x20,*piVar3,puVar1);
    }
    else {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_1082823b0(puVar1,&puStack_58);
  }
  *(undefined4 *)((long)puStack_58 + 0x2c) = *(undefined4 *)(unaff_x19 + 0x38);
  *(undefined4 *)(puStack_58 + 6) = 0;
  func_0x000108283214();
  FUN_1082823f8(unaff_x19 + 0x10,puVar1,*(undefined4 *)((long)puStack_58 + 0x2c));
  plVar2 = (long *)0x28;
  __Znwm();
  *(undefined4 *)(plVar2 + 4) = param_3;
  plVar2[3] = 0x100000000;
  lVar4 = unaff_x20[4];
  plVar2[1] = unaff_x20[5];
  *plVar2 = lVar4;
  plVar2[2] = 0;
  plStack_60 = plVar2;
  FUN_1082823b0(plVar2 + 2,&puStack_58);
  FUN_108282444(unaff_x19 + 0x30,&plStack_60);
  return;
}



/* Entry: 1082822b4; end: 1082822fb;  */

void FUN_1082822b4(long param_1)

{
  func_0x00010828315c();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    func_0x00010828312c();
  }
  else {
    func_0x0001082831cc();
    func_0x000108282628();
    func_0x000108283098();
    FUN_10828264c();
  }
  func_0x0001082831ec();
  return;
}



/* Entry: 1082822fc; end: 108282373;  */

undefined8 * FUN_1082822fc(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x000108282350(param_1);
    FUN_1082826ac(0x3ff0000000000000,param_1,*(undefined4 *)(param_2 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    FUN_1082826f8(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 108282374; end: 1082823af;  */

long FUN_108282374(long param_1)

{
  long lVar1;
  
  FUN_108282748();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 1082823b0; end: 1082823f7;  */

void FUN_1082823b0(long param_1)

{
  func_0x00010828315c();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    func_0x00010828312c();
  }
  else {
    func_0x0001082831cc();
    FUN_108282a14();
    func_0x000108283098();
    FUN_108282a38();
  }
  func_0x0001082831ec();
  return;
}



/* Entry: 1082823f8; end: 108282417;  */

long FUN_1082823f8(long param_1,ulong param_2,long param_3)

{
  FUN_108282a98(param_1,param_2 & 0xffffffff | param_3 << 0x20);
  return param_1 + 4;
}



/* Entry: 108282418; end: 108282443;  */

void FUN_108282418(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x0001082825cc();
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  return;
}



/* Entry: 108282444; end: 10828248b;  */

void FUN_108282444(long param_1)

{
  func_0x00010828315c();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    func_0x00010828312c();
  }
  else {
    func_0x0001082831cc();
    FUN_108282ca4();
    func_0x000108283098();
    FUN_108282cc8();
  }
  func_0x0001082831ec();
  return;
}



/* Entry: 10828248c; end: 108282593;  */

void FUN_10828248c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_58;
  
  puVar5 = param_2;
  FUN_108282418();
  func_0x0001082831ac();
  uVar1 = *puVar5;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x38))) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8);
    func_0x000108283214();
    func_0x0001082831ac();
    uVar2 = *puVar5;
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x38))) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar2 * 8);
      for (lVar7 = 0; lVar7 < *(int *)(lVar8 + 0x18); lVar7 = lVar7 + 1) {
        lStack_58 = *(long *)(*(long *)(lVar8 + 0x10) + lVar7 * 8);
        *(uint *)(lStack_58 + 0x2c) = uVar1;
        *(undefined4 *)(lStack_58 + 0x30) = *(undefined4 *)(puVar6 + 3);
        FUN_1082823b0(puVar6 + 2,&lStack_58);
      }
      uVar9 = *(undefined8 *)(param_2 + 8);
      puVar6[1] = *(undefined8 *)(param_2 + 10);
      *puVar6 = uVar9;
      if ((int)uVar2 < *(int *)(param_1 + 0x38)) {
        lVar7 = *(long *)(param_1 + 0x30) + (ulong)uVar2 * 8;
        FUN_1082825b4(lVar7,0);
        uVar4 = (undefined4)lVar7;
        func_0x000108283214();
        lStack_58 = CONCAT44(lStack_58._4_4_,uVar4);
        FUN_108282dd0(param_1 + 0x10,&lStack_58);
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108282594);
  (*pcVar3)();
}



/* Entry: 108282594; end: 1082825b3;  */

long FUN_108282594(long param_1)

{
  long lVar1;
  
  FUN_108282d28();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 4;
  }
  return lVar1;
}



/* Entry: 1082825b4; end: 1082825d7;  */

void FUN_1082825b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000108282da8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1082825d8; end: 10828264b;  */

void FUN_1082825d8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 0) {
    return;
  }
  FUN_10841076c(&UNK_10f481179);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108282628);
  (*pcVar4)();
}



/* Entry: 10828264c; end: 108282687;  */

void FUN_10828264c(long param_1)

{
  long unaff_x19;
  
  func_0x00010828315c();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108283108();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082831a4();
  }
  func_0x0001082830bc();
  return;
}



/* Entry: 108282688; end: 1082826ab;  */

void FUN_108282688(undefined8 param_1,undefined8 param_2)

{
  func_0x000108283174(param_1,8,param_2,param_2);
  return;
}



/* Entry: 1082826ac; end: 1082826f7;  */

void FUN_1082826ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  ulong unaff_x21;
  
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)param_2) {
    lVar1 = param_1;
    FUN_10815ecac();
    func_0x00010815ef94(param_1,lVar1,param_2);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x00010815f068();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x00010815f060();
    }
    func_0x00010815ed78(unaff_x21 >> 3);
    return;
  }
  return;
}



/* Entry: 1082826f8; end: 108282747;  */

void FUN_1082826f8(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  for (lVar4 = 0; lVar4 < (int)param_1[1]; lVar4 = lVar4 + 1) {
    lVar5 = *param_1;
    lVar6 = *(long *)(param_2 + lVar4 * 8);
    if (lVar6 != 0 && lVar6 != 0x1138270b0) {
      piVar1 = (int *)(lVar6 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(long *)(lVar5 + lVar4 * 8) = lVar6;
  }
  return;
}



/* Entry: 108282748; end: 1082827a3;  */

long FUN_108282748(undefined8 param_1,undefined8 param_2)

{
  int extraout_w10;
  int extraout_w11;
  int iVar1;
  int extraout_w11_00;
  long extraout_x13;
  int extraout_w14;
  
  func_0x00010828315c();
  FUN_1082827a4();
  func_0x000108283144();
  iVar1 = extraout_w11;
  while( true ) {
    if ((iVar1 == 0) || (func_0x0001082831dc(), extraout_w14 == 0)) {
      return 0;
    }
    if (((int)param_2 == extraout_w14) && (extraout_w10 == *(int *)(extraout_x13 + 8))) break;
    func_0x0001082830e0();
    iVar1 = extraout_w11_00;
  }
  return extraout_x13 + 8;
}



/* Entry: 1082827a4; end: 1082827bf;  */

uint FUN_1082827a4(uint param_1)

{
  FUN_1082827c0();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1082827c0; end: 1082827ef;  */

uint FUN_1082827c0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 ^ *param_1 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}



/* Entry: 1082827f0; end: 108282843;  */

void FUN_1082827f0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_30 = param_2;
  uStack_28 = param_3;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_108282844(param_1,iVar2);
  }
  FUN_1082828fc(param_1,&uStack_30);
  return;
}



/* Entry: 108282844; end: 1082828fb;  */

void FUN_108282844(void)

{
  int iVar1;
  undefined8 *puVar2;
  int extraout_w8;
  long extraout_x9;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lStack_38;
  
  func_0x000108283180();
  func_0x0001082831fc(0x18);
  puVar2 = (undefined8 *)(extraout_x9 * 8 + 0x10);
  iVar1 = extraout_w8;
  if (0xffffffffffffffef < (ulong)(extraout_x9 * 8)) {
    iVar1 = 1;
  }
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x18;
  puVar2[1] = unaff_x22;
  if ((int)unaff_x20 != 0) {
    lVar3 = unaff_x22 * 0x18;
    puVar2 = puVar2 + 2;
    do {
      *(undefined4 *)puVar2 = 0;
      lVar3 = lVar3 + -0x18;
      puVar2 = puVar2 + 3;
    } while (lVar3 != 0);
  }
  func_0x00010828323c();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 0x18) {
    if (*(int *)(lStack_38 + unaff_x20) != 0) {
      FUN_1082828fc();
    }
  }
  FUN_1082829e0(&lStack_38);
  return;
}



/* Entry: 1082828fc; end: 1082829a7;  */

int * FUN_1082828fc(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  ulong extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  uint extraout_w11;
  undefined8 uVar6;
  undefined8 extraout_x12;
  int *piVar7;
  
  puVar3 = param_2;
  FUN_1082827a4();
  uVar1 = param_1[1];
  uVar4 = (ulong)(uVar1 - 1 & (uint)puVar3);
  uVar5 = (ulong)*param_2;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar6 = 0x18;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar7 = (int *)(*(long *)(param_1 + 2) + (long)(int)uVar4 * (long)(int)uVar6);
    iVar2 = (int)puVar3;
    if (*piVar7 == 0) break;
    if ((iVar2 == *piVar7) && ((int)uVar5 == piVar7[2])) {
      *piVar7 = 0;
      uVar6 = *(undefined8 *)param_2;
      *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(piVar7 + 2) = uVar6;
      *piVar7 = iVar2;
      return piVar7 + 2;
    }
    func_0x0001082830e0();
    uVar4 = extraout_x9;
    uVar5 = extraout_x10;
    uVar6 = extraout_x12;
    uVar1 = extraout_w11;
  }
  uVar6 = *(undefined8 *)param_2;
  *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(piVar7 + 2) = uVar6;
  *piVar7 = iVar2;
  *param_1 = *param_1 + 1;
  return piVar7 + 2;
}



/* Entry: 1082829a8; end: 1082829df;  */

void FUN_1082829a8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar1 = *(long *)(param_2 + -8) * 0x18;
      do {
        if (*(int *)(param_2 + -0x18 + lVar1) != 0) {
          *(undefined4 *)(param_2 + -0x18 + lVar1) = 0;
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 1082829e0; end: 1082829ff;  */

void FUN_1082829e0(void)

{
  func_0x000108283230();
  FUN_108282a00();
  return;
}



/* Entry: 108282a00; end: 108282a13;  */

void FUN_108282a00(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108282a14; end: 108282a37;  */

void FUN_108282a14(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x000108283174(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010828315c();
  if (*(int *)(param_2 + 8) != 0) {
    func_0x000108283108();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082831a4();
  }
  func_0x0001082830bc();
  return;
}



/* Entry: 108282a38; end: 108282a73;  */

void FUN_108282a38(long param_1)

{
  long unaff_x19;
  
  func_0x00010828315c();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108283108();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082831a4();
  }
  func_0x0001082830bc();
  return;
}



/* Entry: 108282a74; end: 108282a97;  */

void FUN_108282a74(undefined8 param_1,undefined8 param_2)

{
  func_0x000108283174(param_1,8,param_2,param_2);
  return;
}



/* Entry: 108282a98; end: 108282aeb;  */

void FUN_108282a98(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_28 = param_2;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_108282aec(param_1,iVar2);
  }
  FUN_108282ba4(param_1,&uStack_28);
  return;
}



/* Entry: 108282aec; end: 108282ba3;  */

void FUN_108282aec(void)

{
  int iVar1;
  undefined8 *puVar2;
  int extraout_w8;
  long extraout_x9;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lStack_38;
  
  func_0x000108283180();
  func_0x0001082831fc(0xc);
  puVar2 = (undefined8 *)(extraout_x9 * 4 + 0x10);
  iVar1 = extraout_w8;
  if (0xffffffffffffffef < (ulong)(extraout_x9 * 4)) {
    iVar1 = 1;
  }
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0xc;
  puVar2[1] = unaff_x22;
  if ((int)unaff_x20 != 0) {
    lVar3 = unaff_x22 * 0xc;
    puVar2 = puVar2 + 2;
    do {
      *(undefined4 *)puVar2 = 0;
      lVar3 = lVar3 + -0xc;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    } while (lVar3 != 0);
  }
  func_0x00010828323c();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 0xc) {
    if (*(int *)(lStack_38 + unaff_x20) != 0) {
      FUN_108282ba4();
    }
  }
  FUN_108282c4c(&lStack_38);
  return;
}



/* Entry: 108282ba4; end: 108282c13;  */

undefined8 FUN_108282ba4(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int iVar1;
  int extraout_w11_00;
  undefined4 *extraout_x13;
  int extraout_w14;
  int *unaff_x19;
  
  func_0x0001082830f8();
  func_0x000108283144();
  iVar1 = extraout_w11;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    func_0x0001082831dc();
    if (extraout_w14 == 0) break;
    if (((int)param_1 == extraout_w14) && (extraout_w10 == extraout_x13[1])) {
      *extraout_x13 = 0;
      func_0x000108283250();
      return extraout_x8_00;
    }
    func_0x0001082830e0();
    iVar1 = extraout_w11_00;
  }
  func_0x000108283250();
  *unaff_x19 = *unaff_x19 + 1;
  return extraout_x8;
}



/* Entry: 108282c14; end: 108282c4b;  */

void FUN_108282c14(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar1 = *(long *)(param_2 + -8) * 0xc;
      do {
        if (*(int *)(param_2 + -0xc + lVar1) != 0) {
          *(undefined4 *)(param_2 + -0xc + lVar1) = 0;
        }
        lVar1 = lVar1 + -0xc;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 108282c4c; end: 108282c6b;  */

void FUN_108282c4c(void)

{
  func_0x000108283230();
  FUN_108282c6c();
  return;
}



/* Entry: 108282c6c; end: 108282c7f;  */

void FUN_108282c6c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0xc;
      do {
        if (*(int *)(lVar1 + -0xc + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0xc + lVar2) = 0;
        }
        lVar2 = lVar2 + -0xc;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108282c80; end: 108282c9b;  */

uint FUN_108282c80(uint param_1)

{
  FUN_108282c9c();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 108282c9c; end: 108282ca3;  */

uint FUN_108282c9c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 ^ *param_1 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}



/* Entry: 108282ca4; end: 108282cc7;  */

void FUN_108282ca4(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x000108283174(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010828315c();
  if (*(int *)(param_2 + 8) != 0) {
    func_0x000108283108();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082831a4();
  }
  func_0x0001082830bc();
  return;
}



/* Entry: 108282cc8; end: 108282d03;  */

void FUN_108282cc8(long param_1)

{
  long unaff_x19;
  
  func_0x00010828315c();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108283108();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082831a4();
  }
  func_0x0001082830bc();
  return;
}



/* Entry: 108282d04; end: 108282d27;  */

void FUN_108282d04(undefined8 param_1,undefined8 param_2)

{
  func_0x000108283174(param_1,8,param_2,param_2);
  return;
}



/* Entry: 108282d28; end: 108282dcf;  */

long FUN_108282d28(undefined8 param_1)

{
  int extraout_w10;
  int extraout_w11;
  int iVar1;
  int extraout_w11_00;
  long extraout_x13;
  int extraout_w14;
  
  func_0x0001082830f8();
  func_0x000108283144();
  iVar1 = extraout_w11;
  while( true ) {
    if ((iVar1 == 0) || (func_0x0001082831dc(), extraout_w14 == 0)) {
      return 0;
    }
    if (((int)param_1 == extraout_w14) && (extraout_w10 == *(int *)(extraout_x13 + 4))) break;
    func_0x0001082830e0();
    iVar1 = extraout_w11_00;
  }
  return extraout_x13 + 4;
}



/* Entry: 108282dd0; end: 108282f47;  */

undefined4 FUN_108282dd0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *unaff_x19;
  uint *unaff_x20;
  
  func_0x0001082830f8();
  uVar6 = 0;
  uVar4 = unaff_x19[1];
  uVar1 = uVar4 - 1 & param_1;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  do {
    if (uVar2 == uVar6) {
      uVar7 = 0;
      uVar6 = uVar2;
LAB_108282e88:
      uVar3 = 0;
      if ((int)uVar6 < (int)uVar4) {
        uVar3 = uVar7;
      }
      return uVar3;
    }
    puVar8 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)uVar1 * 0xc);
    uVar5 = *puVar8;
    if (uVar5 == 0) {
      uVar7 = 0;
      goto LAB_108282e88;
    }
    if ((param_1 == uVar5) && (*unaff_x20 == puVar8[1])) {
      func_0x000108282ea0();
      if ((4 < unaff_x19[1]) && (*unaff_x19 * 4 <= unaff_x19[1])) {
        FUN_108282aec();
      }
      uVar7 = 1;
      goto LAB_108282e88;
    }
    uVar5 = 0;
    if ((int)uVar1 < 1) {
      uVar5 = uVar4;
    }
    uVar1 = (uVar1 + uVar5) - 1;
    uVar6 = uVar6 + 1;
  } while( true );
}



/* Entry: 108282f48; end: 108282f8b;  */

void FUN_108282f48(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    if (*param_1 == 0) {
      if (iVar1 == 0) {
        return;
      }
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
      iVar1 = *param_2;
    }
    else if (iVar1 != 0) {
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
    }
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 108282f8c; end: 10828303b;  */

void FUN_108282f8c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      func_0x000108282fc4();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}


