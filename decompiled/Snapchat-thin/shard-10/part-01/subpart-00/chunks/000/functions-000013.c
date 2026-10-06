/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078adb6c; end: 1078adb7f;  */

void FUN_1078adb6c(void)

{
  func_0x0001078ac204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFinish_11034b588)();
  return;
}



/* Entry: 1078ae1f0; end: 1078ae203;  */

long FUN_1078ae1f0(long param_1)

{
  return param_1 + 0x380;
}



/* Entry: 1078ae578; end: 1078ae59b;  */

void FUN_1078ae578(void)

{
  undefined1 in_ZR;
  
  func_0x0001078af35c();
  if ((bool)in_ZR) {
    func_0x0001078af350();
    FUN_1078aff9c();
  }
  return;
}



/* Entry: 1078ae680; end: 1078ae6c7;  */

long FUN_1078ae680(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078ae7bc; end: 1078ae83f;  */

void FUN_1078ae7bc(void)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001078af520();
  lVar1 = *unaff_x19;
  *unaff_x19 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078ae98c; end: 1078ae997;  */

void FUN_1078ae98c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078aeab8; end: 1078aeaeb;  */

long FUN_1078aeab8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001078af518(param_2,param_1,&PTR_DAT_1109e75f8);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078aec88; end: 1078aecab;  */

void FUN_1078aec88(void)

{
  undefined1 in_ZR;
  
  func_0x0001078af35c();
  if ((bool)in_ZR) {
    func_0x0001078af350();
    func_0x0001078b0004();
  }
  return;
}



/* Entry: 1078aee44; end: 1078aef0b;  */

void FUN_1078aee44(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001078aed90(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1078afd94; end: 1078afdc3;  */

undefined8 * FUN_1078afd94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e76d0;
  func_0x0001078aebc0(param_1 + 3);
  return param_1;
}



/* Entry: 1078aff9c; end: 1078b0023;  */

void FUN_1078aff9c(long *param_1,int param_2)

{
  if (param_2 != 0) {
    func_0x0001078b0024(*param_1 + 0x318);
  }
  return;
}



/* Entry: 1078b01ec; end: 1078b0363;  */

void FUN_1078b01ec(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 **ppuVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  
  ppuVar4 = &puStack_70;
  lVar7 = 0;
  lVar5 = 0;
  puStack_70 = (undefined4 *)0x0;
  lStack_68 = 0;
  uStack_60 = 0;
  plVar9 = *(long **)(param_1 + 0x50);
  for (plVar6 = plVar9; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    lVar5 = lVar5 + 1;
    lVar7 = lVar7 + -4;
  }
  if (lVar7 != 0) {
    func_0x00010014b1ac(&puStack_70,lVar5);
    func_0x00010014b1fc(&puStack_58,ppuVar4,-(long)puStack_70 >> 2,&uStack_60);
    puVar1 = puStack_48;
    for (lVar5 = -lVar7; lVar5 != 0; lVar5 = lVar5 + -4) {
      *puVar1 = *(undefined4 *)(plVar9 + 2);
      plVar9 = (long *)*plVar9;
      puVar1 = puVar1 + 1;
    }
    puStack_48 = (undefined4 *)((long)puStack_48 + (lStack_68 - lVar7));
    lStack_68 = 0;
    puVar1 = (undefined4 *)((long)puStack_50 + (long)puStack_70);
    _memcpy(puVar1,puStack_70,-(long)puStack_70);
    uVar3 = uStack_60;
    uStack_60 = uStack_40;
    lStack_68 = (long)puStack_48;
    puStack_48 = puStack_70;
    uStack_40 = uVar3;
    puStack_58 = puStack_70;
    puStack_50 = puStack_70;
    puStack_70 = puVar1;
    func_0x00010014b328(&puStack_58);
  }
  func_0x0001078b0364(&puStack_58,param_1);
  if (puStack_58 != (undefined4 *)0x0) {
    (**(code **)(puStack_58 + 2))((ulong)(lStack_68 - (long)puStack_70) >> 2);
  }
  FUN_1078ae680(&puStack_58);
  func_0x0001074b2c74(param_1 + 0x40);
  func_0x0001078b03a0(param_1 + 0x10);
  func_0x00010731e26c(&puStack_70);
  func_0x00010726f2e4(param_1 + 0x40);
  func_0x0001078b03a0(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  for (puVar8 = *(undefined8 **)(param_1 + 0x18); puVar8 != puVar2; puVar8 = puVar8 + 1) {
    __ZdlPv(*puVar8);
  }
  func_0x0001078b05a0(param_1 + 0x10);
  func_0x0001078b0578(param_1);
  return;
}



/* Entry: 1078b05cc; end: 1078b0623;  */

void FUN_1078b05cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1078b0b54; end: 1078b0b7b;  */

void FUN_1078b0b54(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1078b0f0c; end: 1078b0f6b;  */

void FUN_1078b0f0c(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 8);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x28) == '\x01')) && ((*(byte *)(lVar1 + 0x29) & 1) == 0))
  {
    func_0x0001078b1394();
    if (uStack_30 != 0) {
      (**(code **)(uStack_30 + 0x20))(0x88bf);
    }
    func_0x0001078b13a0();
    *(undefined2 *)(lVar1 + 0x28) = 0x100;
  }
  return;
}



/* Entry: 1078b1118; end: 1078b111f;  */

void FUN_1078b1118(void)

{
  return;
}



/* Entry: 1078b1274; end: 1078b12e3;  */

undefined1  [16] FUN_1078b1274(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  long lStack_38;
  undefined8 uStack_28;
  
  func_0x0001078b1418();
  if ((bool)in_ZR) {
    uStack_28 = 0;
    func_0x0001078b1404();
    if (lStack_38 != 0) {
      (**(code **)(lStack_38 + 0x50))(*(undefined4 *)(unaff_x19 + 0x10),0x8866,&uStack_28);
    }
    func_0x0001078b13a8();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    uStack_28 = 0;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = uStack_28;
  return auVar2;
}



/* Entry: 1078b1520; end: 1078b1533;  */

void FUN_1078b1520(void)

{
  func_0x0001078b14c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b1b24; end: 1078b1b27;  */

long FUN_1078b1b24(long param_1)

{
  FUN_1078b27f0(param_1 + 0x28);
  func_0x0001074996e0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1078b1fe8; end: 1078b208b;  */

long FUN_1078b1fe8(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((lVar2 != 0) &&
     (uVar1 = *(uint *)(*(long *)(lVar2 + 0xb0) + (param_2 & 0xffffffff) * 4),
     (uVar1 >> 0x10 & 1) != 0)) {
    (*(code *)PTR__glUniformBlockBinding_113230898)
              (*(undefined4 *)(lVar2 + 0x10),uVar1 & 0xffff,param_2);
    (*(code *)PTR__glBindBufferBase_1132308a0)
              (0x8a11,param_2,*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    func_0x0001078af15c(*(long *)(*(long *)(param_1 + 8) + 8) + 0x184,*(long *)(param_3 + 8) + 8);
    if (((extraout_x9 & 1) != 0) || (func_0x0001078af2d0(), !(bool)in_ZR)) {
      func_0x0001078af14c();
      func_0x0001078b663c();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 1078b27f0; end: 1078b2817;  */

undefined8 FUN_1078b27f0(undefined8 param_1)

{
  func_0x0001078b2818(param_1,0);
  return param_1;
}



/* Entry: 1078b3e1c; end: 1078b3f3b;  */

long * FUN_1078b3e1c(long *param_1,ulong param_2,long *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  
  lVar5 = param_1[2];
  plVar3 = (long *)*param_1;
  if (param_2 <= (ulong)((lVar5 - (long)plVar3) / 6)) {
    uVar7 = (param_1[1] - (long)plVar3) / 6;
    uVar4 = uVar7;
    if (param_2 <= uVar7) {
      uVar4 = param_2;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      lVar5 = *param_3;
      *(undefined1 *)((long)plVar3 + 4) = *(undefined1 *)((long)param_3 + 4);
      *(int *)plVar3 = (int)lVar5;
      plVar3 = (long *)((long)plVar3 + 6);
    }
    uVar4 = param_2 - uVar7;
    if (param_2 < uVar7 || uVar4 == 0) {
      param_1[1] = *param_1 + param_2 * 6;
      return plVar3;
    }
LAB_1078b3f0c:
    puVar6 = (undefined4 *)param_1[1];
    puVar1 = puVar6;
    for (lVar5 = uVar4 * 6; lVar5 != 0; lVar5 = lVar5 + -6) {
      lVar2 = *param_3;
      *(undefined2 *)(puVar1 + 1) = *(undefined2 *)((long)param_3 + 4);
      *puVar1 = (int)lVar2;
      puVar1 = (undefined4 *)((long)puVar1 + 6);
    }
    param_1[1] = (long)puVar6 + uVar4 * 6;
    return param_1;
  }
  if (plVar3 != (long *)0x0) {
    param_1[1] = (long)plVar3;
    __ZdlPv();
    lVar5 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_2 < 0x2aaaaaaaaaaaaaab) {
    uVar7 = (lVar5 / 6) * 2;
    if (uVar7 < param_2 || uVar7 - param_2 == 0) {
      uVar7 = param_2;
    }
    if (0x1555555555555554 < (ulong)(lVar5 / 6)) {
      uVar7 = 0x2aaaaaaaaaaaaaaa;
    }
    if (uVar7 < 0x2aaaaaaaaaaaaaab) {
      lVar5 = uVar7 * 6;
      __Znwm();
      *param_1 = lVar5;
      param_1[1] = lVar5;
      param_1[2] = lVar5 + uVar7 * 6;
      uVar4 = param_2;
      goto LAB_1078b3f0c;
    }
  }
  func_0x0001078b41bc();
  func_0x0001078b4690();
  if (plVar3 != (long *)0x0) {
    func_0x0001078b4644();
  }
  return param_3;
}



/* Entry: 1078b4180; end: 1078b418b;  */

void FUN_1078b4180(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  func_0x0001078b45e8();
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar2 = puVar3;
  for (lVar4 = param_2 * 6; lVar4 != 0; lVar4 = lVar4 + -6) {
    uVar1 = *param_3;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_3 + 1);
    *puVar2 = uVar1;
    puVar2 = (undefined4 *)((long)puVar2 + 6);
  }
  *(long *)(param_1 + 8) = (long)puVar3 + param_2 * 6;
  return;
}



/* Entry: 1078b436c; end: 1078b4467;  */

/* WARNING: Possible PIC construction at 0x0001078b443c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078b4440) */

void FUN_1078b436c(long *param_1,undefined *param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  puVar8 = param_2;
  func_0x000100061de0();
  lVar9 = *param_1;
  if ((*(long *)(lVar9 + -8) == 0) && (*(char *)(lVar9 + (long)plVar6) != -2)) {
    uVar11 = param_1[2];
    if ((uVar11 < 9) || (uVar11 * 0x19 < (ulong)(param_1[3] << 5))) {
      puVar8 = (undefined *)(uVar11 << 1 | 1);
      goto code_r0x0001078b4468;
    }
    puVar8 = &UNK_1109e7be8;
    plVar6 = param_1;
    func_0x00010ae6c914(param_1,&UNK_1109e7be8,auStack_38);
    func_0x0001078b477c();
    lVar9 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  bVar5 = *(char *)(lVar9 + (long)plVar6) == -0x80;
  *(ulong *)(lVar9 + -8) = *(long *)(lVar9 + -8) - (ulong)bVar5;
  bVar2 = (byte)param_2 & 0x7f;
  uVar11 = param_1[2];
  *(byte *)(lVar9 + (long)plVar6) = bVar2;
  *(byte *)(lVar9 + (uVar11 & (long)plVar6 - 7U) + (uVar11 & 7)) = bVar2;
  func_0x0001078b47cc(uStack_28);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  param_1 = plVar6;
code_r0x0001078b4468:
  lVar1 = *param_1;
  plVar6 = (long *)param_1[1];
  lVar12 = param_1[2];
  param_1[2] = (long)puVar8;
  plVar7 = param_1;
  func_0x000104ab30b8();
  lVar13 = param_1[1];
  for (lVar9 = 0; lVar12 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      lVar10 = *plVar6;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar10;
      func_0x0001078b477c();
      bVar2 = (SUB161(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + lVar10) * 'i') & 0x7f;
      uVar11 = param_1[2];
      lVar10 = *param_1;
      *(byte *)(lVar10 + (long)plVar7) = bVar2;
      *(byte *)(lVar10 + ((long)plVar7 - 7U & uVar11) + (uVar11 & 7)) = bVar2;
      lVar10 = *plVar6;
      plVar4 = (long *)(lVar13 + (long)plVar7 * 0x10);
      plVar4[1] = plVar6[1];
      *plVar4 = lVar10;
    }
    plVar6 = plVar6 + 2;
  }
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1078b4a34; end: 1078b4a7b;  */

void FUN_1078b4a34(long param_1,undefined8 param_2)

{
  func_0x0001078b4f58();
  func_0x000107892c2c(param_1 + 0x60,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 1078b4ef8; end: 1078b4f03;  */

undefined ** FUN_1078b4ef8(void)

{
  return &PTR_DAT_1109e7d28;
}



/* Entry: 1078b5130; end: 1078b5203;  */

/* WARNING: Possible PIC construction at 0x0001078b51dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078b51e0) */

ulong * FUN_1078b5130(ulong *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  ppuVar2 = (undefined1 **)auStack_80;
  uVar1 = *param_1;
  lVar6 = param_1[1] - uVar1;
  uVar7 = lVar6 + 1;
  if ((long)uVar7 < 0) {
    func_0x0001078b5204();
    ppuVar2 = &puStack_90;
    ppuVar9 = &puStack_90;
    puStack_88 = &SUB_1078b5204;
    puVar3 = (ulong *)&DAT_10f62a4d8;
    puVar10 = &SUB_1078b5218;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x000104bd47e8();
  }
  else {
    puStack_58 = param_1 + 2;
    uVar8 = *puStack_58;
    uVar4 = uVar8 - uVar1;
    uVar5 = uVar4 * 2;
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      uVar5 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5;
      __Znwm();
    }
    *(undefined1 *)(uVar7 + lVar6) = *param_2;
    _memcpy(uVar7,uVar1,lVar6);
    *param_1 = uVar7;
    param_1[1] = (ulong)((undefined1 *)(uVar7 + lVar6) + 1);
    param_1[2] = uVar7 + uVar5;
    uStack_68 = uVar1;
    uStack_60 = uVar8;
    uStack_78 = uVar1;
    uStack_70 = uVar1;
    puVar3 = &uStack_78;
    puVar10 = (undefined *)0x1078b51e0;
    unaff_x20 = param_1;
    ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  *(ulong **)((long)ppuVar2 + -0x20) = unaff_x20;
  *(ulong *)((long)ppuVar2 + -0x18) = uVar1;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar9;
  *(undefined **)((long)ppuVar2 + -8) = puVar10;
  uVar7 = puVar3[2];
  while (uVar7 != puVar3[1]) {
    uVar7 = uVar7 - 1;
    puVar3[2] = uVar7;
  }
  if (*puVar3 != 0) {
    __ZdlPv();
  }
  return puVar3;
}



/* Entry: 1078b5330; end: 1078b5333;  */

void FUN_1078b5330(void)

{
  return;
}



/* Entry: 1078b5428; end: 1078b5497;  */

undefined8 * FUN_1078b5428(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107891a5c(param_1,*(undefined8 *)(param_2[1] + 0x30),*(undefined8 *)(param_2[1] + 0x38))
  ;
  *puVar1 = &PTR_DAT_1109e7ec8;
  puVar1[4] = param_2;
  uVar2 = param_3;
  _strlen(param_3);
  param_1[5] = param_2;
  (**(code **)*param_2)(param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1078b5994; end: 1078b59d3;  */

int * FUN_1078b5994(int *param_1,int param_2)

{
  if (((*(byte *)(param_1 + 1) & 1) != 0) || (*param_1 != param_2)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = param_2;
    func_0x0001078b6630(param_1);
  }
  return param_1;
}



/* Entry: 1078b6278; end: 1078b6427;  */

undefined8 FUN_1078b6278(void)

{
  return 0;
}



/* Entry: 1078b6648; end: 1078b6697;  */

undefined8 * FUN_1078b6648(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_1109e7f80;
  lVar4 = param_1[4];
  plVar1 = (long *)(param_1[2] + 0x90);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae59c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b6828; end: 1078b6853;  */

void FUN_1078b6828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1078b6ad4(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1078b6ad4; end: 1078b6b87;  */

/* WARNING: Possible PIC construction at 0x0001078b6b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078b6b14) */
/* WARNING: Removing unreachable block (ram,0x0001078b6b6c) */
/* WARNING: Removing unreachable block (ram,0x0001078b6b84) */
/* WARNING: Removing unreachable block (ram,0x0001078b6b58) */

undefined1 * FUN_1078b6ad4(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 1;
  func_0x0001078b6bb4();
  return auStack_50;
}



/* Entry: 1078b6d14; end: 1078b6d63;  */

void FUN_1078b6d14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e7fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078b70a4; end: 1078b70a7;  */

undefined8 * FUN_1078b70a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8018;
  func_0x0001078b9a14(param_1 + 1);
  return param_1;
}



/* Entry: 1078b8e44; end: 1078b8ee7;  */

void FUN_1078b8e44(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  lVar1 = *(long *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001078b9e40();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1078b93bc; end: 1078b9a13;  */

undefined8 * FUN_1078b93bc(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = param_1;
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001078b9e50();
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078b9cf8();
  puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  func_0x00010c1606a0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *param_1;
  *param_1 = puVar4;
  func_0x0001078b9ec4(uVar7);
  if (cRam00000001137269e8 == '\x01') {
    uVar7 = uRam00000001137269d0;
    if (-1 < cRam00000001137269e7) {
      uVar7 = 0x1137269d0;
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1078b987c;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
LAB_1078b95d8:
    func_0x0001078b9d70();
  }
  else {
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001078b9d00();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      func_0x00010bfedc40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001078b9d40();
    func_0x0001078b9d00();
    func_0x0001078b9d08();
    func_0x0001078b9d50();
    if (puVar5 == (undefined *)0x0) {
      func_0x0001078b9d58();
      goto LAB_1078b95d8;
    }
  }
  func_0x0001078b9f10();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar6 = PTR_PTR_1126d5618;
  _objc_opt_class(PTR_PTR_1126d5618);
  func_0x00010bf249e0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bfedc40();
    iVar1 = (int)puVar6;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    func_0x0001078b9d08();
    func_0x0001078b9d00();
    puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    if (iVar1 == 0) {
      func_0x00010c114100(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf24ca0(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001078b9f10();
      func_0x0001078b9d08();
      func_0x0001078b9d00();
      puVar5 = puVar6;
      if (puVar6 == (undefined *)0x0) goto LAB_1078b9790;
    }
    puVar6 = puVar5;
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001078b9d00();
    if (puVar6 == (undefined *)0x0) {
      func_0x00010bfedc40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001078b9d00();
      if (puVar5 == (undefined *)0x0) goto LAB_1078b9790;
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    func_0x0001078b9d08();
    func_0x0001078b9d00();
    func_0x0001078b9d18();
    func_0x0001078b9d70();
  }
LAB_1078b9790:
  puVar5 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010c0eb960(&uStack_78,puVar5);
  }
  func_0x0001078b9d00();
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ea5198);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078b9d40();
  func_0x0001078b9d00();
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e45c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078b9d40();
  func_0x0001078b9d00();
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078b9d70();
  func_0x0001078b9f10();
  func_0x0001078b9d50();
  func_0x0001078b9cf8();
LAB_1078b987c:
  uVar7 = param_1[1];
  param_1[1] = puVar4;
  _objc_release(uVar7);
  func_0x0001078b9d18();
  _objc_autoreleasePoolPop(puVar2);
  return param_1;
}



/* Entry: 1078b9ab4; end: 1078b9ac7;  */

void FUN_1078b9ab4(void)

{
  func_0x0001078b9af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b9c70; end: 1078b9cf7;  */

undefined8 * FUN_1078b9c70(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_1109e80c8;
  lVar1 = param_1[0x11];
  func_0x0001072ab574(lVar1 + 0x18);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x18);
  if (param_1[0x13] != 0) {
    func_0x00010bf2dba0();
  }
  func_0x000107898014(param_1 + 0x18);
  func_0x0001072ad0c8(param_1 + 0x14);
  _objc_release(param_1[0x13]);
  func_0x0001078b9394(param_1 + 0x11);
  func_0x00010724b340(param_1 + 1);
  return param_1;
}



/* Entry: 1078ba548; end: 1078ba56b;  */

void FUN_1078ba548(void)

{
  func_0x0001078ba988();
  _CGImageRelease();
  return;
}



/* Entry: 1078baaf4; end: 1078bab33;  */

undefined8 * FUN_1078baaf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  *param_1 = &PTR_DAT_1109e81d0;
  param_1[1] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_release(*puVar1);
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 1078baf84; end: 1078bafa7;  */

void FUN_1078baf84(void)

{
  func_0x0001078bb6d8();
  _CFRelease();
  return;
}



/* Entry: 1078bb690; end: 1078bb72b;  */

void FUN_1078bb690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 1078bb978; end: 1078bb9af; -[MGLNativeNetworkManager stopDownloadEventForResponse:] */

void FUN_1078bb978(void)

{
  func_0x0001078bba4c();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078bba7c();
  func_0x00010c255ec0();
  func_0x0001078bba5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1078bbb40; end: 1078bbb8f;  */

void FUN_1078bbb40(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e62c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1078bbf90; end: 1078bbfb3;  */

void FUN_1078bbf90(void)

{
  long unaff_x19;
  
  func_0x0001078bd760();
  func_0x0001078bbfb4();
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 1078bc0c8; end: 1078bc0cf;  */

void FUN_1078bc0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long unaff_x19;
  
  func_0x0001078bd6f8(*param_4);
  *(undefined8 *)(unaff_x19 + 0x58) = param_1;
  *(undefined8 *)(unaff_x19 + 0x60) = param_2;
  *(undefined8 *)(unaff_x19 + 0x68) = param_3;
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc200; end: 1078bc207;  */

void FUN_1078bc200(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  __ZNSt3__15mutex4lockEv();
  func_0x0001078bd1b0(param_1,lVar1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1);
  return;
}



/* Entry: 1078bc540; end: 1078bc587;  */

void FUN_1078bc540(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  func_0x000107874cf4();
  if (1 < (long)puVar1) {
    func_0x0001078bc5c4(auStack_30,*param_1);
    func_0x0001078bc5a0(param_1,auStack_30);
    func_0x000107874d30(auStack_30);
  }
  return;
}



/* Entry: 1078bc68c; end: 1078bc6c7;  */

void FUN_1078bc68c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001078bc6c8();
  func_0x0001078bc710(*param_1,param_2,param_3);
  return;
}



/* Entry: 1078bca20; end: 1078bca2b;  */

long * FUN_1078bca20(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = *(long **)(param_1 + 0x28);
  while (plVar3 != (long *)0x0) {
    lVar2 = (long)(plVar3 + 2);
    plVar3 = (long *)*plVar3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2);
    func_0x0001078bd7b4();
  }
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1078bceb4; end: 1078bceb7;  */

void FUN_1078bceb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e82f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bd0a8; end: 1078bd0c3;  */

long FUN_1078bd0a8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  func_0x0001078bd0e8();
  return param_1;
}



/* Entry: 1078bd270; end: 1078bd28f;  */

void FUN_1078bd270(void)

{
  func_0x0001078bd760();
  func_0x0001078bd290();
  return;
}



/* Entry: 1078bd490; end: 1078bd4af;  */

void FUN_1078bd490(void)

{
  func_0x0001078bd760();
  func_0x0001078bd4b0();
  return;
}



/* Entry: 1078bd660; end: 1078bd81b;  */

void FUN_1078bd660(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *unaff_x20;
  
  *param_2 = param_1;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 7) = 0x3f800000;
  *unaff_x20 = param_2 + 3;
  unaff_x20[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_release_110346be8)(unaff_x20 + 2);
  return;
}



/* Entry: 1078bdb50; end: 1078bdb6f;  */

ulong FUN_1078bdb50(ulong param_1)

{
  func_0x0001078bdb70();
  if (param_1 >> 0x1f != 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078bdedc; end: 1078bdf03;  */

void FUN_1078bdedc(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078be0a8; end: 1078be163;  */

/* WARNING: Possible PIC construction at 0x0001078be124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078be128) */
/* WARNING: Removing unreachable block (ram,0x0001078be148) */
/* WARNING: Removing unreachable block (ram,0x0001078be134) */
/* WARNING: Removing unreachable block (ram,0x0001078be17c) */

undefined1 * FUN_1078be0a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *unaff_x19;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  
  func_0x0001078bf4e8();
  uStack_48 = 1;
  puVar1 = (undefined8 *)0x350;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e83f0;
  puStack_40 = puVar1;
  func_0x0001074698a0(puVar1 + 3,param_2);
  puVar1[3] = &PTR_SUB_1109e8440;
  puVar1[0x69] = 0;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001078be8f8(auStack_50);
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  return auStack_50;
}



/* Entry: 1078be8a8; end: 1078be8cb;  */

undefined8 FUN_1078be8a8(undefined8 param_1)

{
  func_0x0001078be880(param_1,0);
  return param_1;
}



/* Entry: 1078be9e4; end: 1078be9f7;  */

void FUN_1078be9e4(void)

{
  func_0x0001078be9b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bece4; end: 1078bede7;  */

void FUN_1078bece4(long param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long alStack_40 [2];
  
  func_0x0001078bee98(alStack_40,param_1 + 0x18);
  FUN_1078beedc(param_1 + 0x1a8,alStack_40);
  func_0x0001078bee2c(alStack_40);
  func_0x0001078bf56c(*(undefined8 *)(param_1 + 0x1a8));
  func_0x0001078bef0c(alStack_40,param_1 + 0x18);
  func_0x0001078bef50(param_1 + 0x1b0,alStack_40);
  func_0x0001078bedfc(alStack_40);
  func_0x00010811e790(*(undefined8 *)(param_1 + 0x1b0),3);
  func_0x0001078bf56c(*(undefined8 *)(param_1 + 0x1b0));
  lVar1 = *(long *)(param_1 + 0x1b0);
  func_0x000108120484(-*(float *)(lVar1 + 0xc0),*(undefined8 *)(param_1 + 0x1a8));
  func_0x0001081204c0(-*(float *)(lVar1 + 0xc4),*(undefined8 *)(param_1 + 0x1a8));
  alStack_40[0] = *(long *)(param_1 + 0x1b0);
  if ((alStack_40[0] != 0) && (*(long *)(alStack_40[0] + 0x10) != 0)) {
    do {
      func_0x0001078bf55c();
      alStack_40[0] = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010811f0b8();
  func_0x0001078bee2c(alStack_40);
  func_0x000108122b44(param_1,param_1 + 0x1a8,1);
  func_0x000108122c38(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c),
                      **(undefined4 **)(param_1 + 0x1b8),param_1);
  return;
}



/* Entry: 1078beedc; end: 1078bef0b;  */

long FUN_1078beedc(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001078bf5c0();
    func_0x0001078bee50();
  }
  return param_1;
}



/* Entry: 1078bf090; end: 1078bf0bf;  */

undefined8 * FUN_1078bf090(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x7e07e07e07e07f) {
    puVar1 = (undefined8 *)(param_2 * 0x208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e8568;
  param_1[1] = 0;
  func_0x00010811e8f8(param_1 + 3);
  return param_1;
}



/* Entry: 1078bf1c8; end: 1078bf1e7;  */

void FUN_1078bf1c8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078bf1e8(&uStack_11,param_1);
  return;
}



/* Entry: 1078bf318; end: 1078bf32f;  */

void FUN_1078bf318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078bf520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078c1f90; end: 1078c2063;  */

undefined1 * FUN_1078c1f90(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 *puStack_78;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar6 = param_2;
  func_0x0001078c5bdc();
  puStack_78 = (undefined1 *)0x0;
  plVar3 = (long *)*puVar6;
  uStack_38 = extraout_x8;
  (**(code **)(*plVar3 + 0x18))();
  func_0x000104c2fe00(auStack_70,plVar3);
  ppuVar4 = &puStack_78;
  func_0x0001073f26dc(ppuVar4,auStack_70);
  lVar1 = param_2[2];
  for (lVar7 = param_2[1]; puVar5 = puStack_78, uVar2 = lVar7 == lVar1, !(bool)uVar2;
      lVar7 = lVar7 + 0x20) {
    FUN_1078c1f90();
    puStack_78 = (undefined1 *)
                 ((long)ppuVar4 +
                  ((ulong)puStack_78 >> 4) + (long)puStack_78 * 0x1000 + -0x61c8864680b583eb ^
                 (ulong)puStack_78);
  }
  func_0x000104c2f714(auStack_70);
  func_0x0001078c5b3c(uStack_38);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = auStack_70;
  func_0x000104c2f714(puVar5);
  func_0x0001078c5cc8();
  return puVar5;
}



/* Entry: 1078c22cc; end: 1078c22d3;  */

void FUN_1078c22cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078c6054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078c2fc8; end: 1078c3003;  */

void FUN_1078c2fc8(undefined8 *param_1)

{
  func_0x0001078c3258();
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}



/* Entry: 1078c329c; end: 1078c32bf;  */

void FUN_1078c329c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078c32c0(&uStack_11,param_1);
  return;
}



/* Entry: 1078c3710; end: 1078c395b;  */

/* WARNING: Possible PIC construction at 0x0001078c37c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c37fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c38e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c3920) */
/* WARNING: Removing unreachable block (ram,0x0001078c38e8) */
/* WARNING: Removing unreachable block (ram,0x0001078c3840) */
/* WARNING: Removing unreachable block (ram,0x0001078c3800) */
/* WARNING: Removing unreachable block (ram,0x0001078c380c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3848) */
/* WARNING: Removing unreachable block (ram,0x0001078c3820) */
/* WARNING: Removing unreachable block (ram,0x0001078c3830) */
/* WARNING: Removing unreachable block (ram,0x0001078c384c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3854) */
/* WARNING: Removing unreachable block (ram,0x0001078c37cc) */
/* WARNING: Removing unreachable block (ram,0x0001078c37d8) */
/* WARNING: Removing unreachable block (ram,0x0001078c37e4) */
/* WARNING: Removing unreachable block (ram,0x0001078c3838) */
/* WARNING: Removing unreachable block (ram,0x0001078c37fc) */
/* WARNING: Removing unreachable block (ram,0x0001078c3798) */

void FUN_1078c3710(long param_1,long param_2,ulong param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  puVar7 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 2) {
    puStack_60 = &uStack_58;
    uStack_58 = 0;
    lVar5 = param_2 + -0x68;
    puVar1 = (uint *)(param_2 + -0x28);
    param_2 = param_1;
    if (*(uint *)(param_1 + 0x40) <= *puVar1) {
      param_2 = lVar5;
      lVar5 = param_1;
    }
    unaff_x30 = 0x1078c3798;
    lVar4 = param_4;
  }
  else {
    if (param_3 != 1) {
      lVar5 = param_2;
      lStack_68 = param_4;
      if ((long)param_3 < 9) {
        if (param_1 != param_2) {
          puStack_60 = &uStack_58;
          uStack_58 = 0;
          func_0x0001078c5f10();
          unaff_x30 = 0x1078c37cc;
          puVar3 = auStack_70;
          lVar4 = param_1;
          goto code_r0x0001078c3378;
        }
      }
      else {
        param_3 = param_3 >> 1;
        lVar2 = param_3 * 0x68 + param_1;
        func_0x0001078c33e8(param_1,lVar2,param_3,param_4,param_3);
        lVar4 = lVar2;
        func_0x0001078c33e8();
        puStack_60 = &uStack_58;
        uStack_58 = 0;
        lVar6 = lVar2;
        while (param_1 != lVar2) {
          if (lVar6 == param_2) {
            if (param_1 == lVar2) goto LAB_1078c3934;
            func_0x0001078c5f10();
            unaff_x30 = 0x1078c3920;
            puVar3 = auStack_70;
            goto code_r0x0001078c3378;
          }
          lVar4 = param_4;
          if (*(uint *)(param_1 + 0x40) <= *(uint *)(lVar6 + 0x40)) {
            unaff_x30 = 0x1078c38e8;
            puVar3 = auStack_70;
            lVar5 = param_1;
            goto code_r0x0001078c3378;
          }
          func_0x0001078c60b8();
          lVar6 = lVar6 + 0x68;
          func_0x0001078c5c88();
          param_4 = param_4 + 0x68;
        }
        for (; lVar6 != param_2; lVar6 = lVar6 + 0x68) {
          func_0x0001078c60b8(param_4);
          param_4 = param_4 + 0x68;
          func_0x0001078c5c88();
        }
LAB_1078c3934:
        lStack_68 = 0;
        func_0x0001078c395c(&lStack_68);
      }
      return;
    }
    func_0x0001078c5f10();
    puVar3 = (undefined1 *)register0x00000008;
    lVar4 = param_1;
    lVar5 = param_2;
    param_4 = unaff_x19;
    param_2 = unaff_x20;
    puVar7 = unaff_x29;
  }
code_r0x0001078c3378:
  *(long *)(puVar3 + -0x20) = param_2;
  *(long *)(puVar3 + -0x18) = param_4;
  *(undefined1 **)(puVar3 + -0x10) = puVar7;
  *(undefined8 *)(puVar3 + -8) = unaff_x30;
  func_0x000104c318bc();
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x38) = 0;
  uVar9 = *(undefined8 *)(lVar5 + 0x48);
  uVar8 = *(undefined8 *)(lVar5 + 0x40);
  uVar11 = *(undefined8 *)(lVar5 + 0x58);
  uVar10 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(lVar4 + 0x48) = uVar9;
  *(undefined8 *)(lVar4 + 0x40) = uVar8;
  *(undefined8 *)(lVar4 + 0x58) = uVar11;
  *(undefined8 *)(lVar4 + 0x50) = uVar10;
  return;
}



/* Entry: 1078c41f0; end: 1078c4217;  */

void FUN_1078c41f0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1078c4538; end: 1078c4573;  */

undefined8 * FUN_1078c4538(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001078c4574(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x38);
  return param_1;
}



/* Entry: 1078c4784; end: 1078c479f;  */

void FUN_1078c4784(long param_1)

{
  func_0x0001074704d4();
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1078c4a08; end: 1078c55bb;  */

void FUN_1078c4a08(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,char **param_6)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char **ppcVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_1fe;
  undefined1 uStack_1fd;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [56];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [96];
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *apcStack_b0 [13];
  undefined8 uStack_48;
  
  func_0x0001078c5bdc();
  apcStack_b0[0] = "image";
  ppcVar2 = apcStack_b0;
  uStack_48 = extraout_x8;
  func_0x0001078c55bc();
  if (param_6 == (char **)0x0) {
    func_0x0001077e3670(auStack_170);
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9730)[extraout_x8_00] * 4 + 0x1078c4a68))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_00;
    in_ZR = (uint)extraout_x8_00 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b8c();
      func_0x0001078c5d9c();
      func_0x0001078c5b6c();
    }
    else {
      func_0x0001078c5b8c();
      func_0x0001078c5d9c();
      func_0x0001078c5b6c();
    }
    func_0x00010726b164(&uStack_110);
    param_6 = apcStack_b0;
    func_0x00010726b144();
  }
  apcStack_b0[0] = "encryption-key";
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    func_0x0001077e3748(auStack_1a8);
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9738)[extraout_x8_01] * 4 + 0x1078c4b5c))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_01;
    in_ZR = (uint)extraout_x8_01 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b2c();
    }
    else {
      func_0x0001078c5b2c();
    }
    func_0x0001077e3748(&uStack_110);
    func_0x0001078c6078(auStack_1a8);
    func_0x000104c2f714(&uStack_110);
    param_6 = apcStack_b0;
    func_0x00010724b3d8();
  }
  apcStack_b0[0] = "encryption-iv";
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    FUN_1077e37f4(auStack_1e0);
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9740)[extraout_x8_02] * 4 + 0x1078c4c18))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_02;
    in_ZR = (uint)extraout_x8_02 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b2c();
    }
    else {
      func_0x0001078c5b2c();
    }
    FUN_1077e37f4(&uStack_110);
    func_0x0001078c6078(auStack_1e0);
    func_0x000104c2f714(&uStack_110);
    param_6 = apcStack_b0;
    func_0x00010724b3d8();
  }
  apcStack_b0[0] = "x";
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1e4 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9748)[extraout_x8_03] * 4 + 0x1078c4cd4))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_03;
    in_ZR = (uint)extraout_x8_03 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uStack_1e4 = 0;
    if (!(bool)in_ZR) {
      uStack_1e4 = param_2;
    }
  }
  apcStack_b0[0] = "y";
  uVar4 = uStack_1e4;
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1e8 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9750)[extraout_x8_04] * 4 + 0x1078c4d74))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_04;
    in_ZR = (uint)extraout_x8_04 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uStack_1e8 = 0;
    if (!(bool)in_ZR) {
      uStack_1e8 = uVar4;
    }
  }
  apcStack_b0[0] = "anchor";
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1f0 = 0xbf800000;
    uVar4 = 0xbf800000;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9758)[extraout_x8_05] * 4 + 0x1078c4e14))();
      return;
    }
    if ((int)extraout_x8_05 == 8) {
      func_0x0001078c5c38();
    }
    else {
      func_0x0001078c5c38();
    }
    uVar4 = (undefined4)((ulong)param_6 >> 0x20);
    in_ZR = ((ulong)ppcVar2 & 1) == 0;
    in_CY = 0;
    param_4 = 0xbf800000;
    uStack_1f0 = SUB84(param_6,0);
    if ((bool)in_ZR) {
      uVar4 = 0xbf800000;
      uStack_1f0 = 0xbf800000;
    }
  }
  apcStack_b0[0] = "z-index";
  uStack_1ec = uVar4;
  uVar3 = uStack_1f0;
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1f4 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9760)[extraout_x8_06] * 4 + 0x1078c4ec8))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_06;
    in_ZR = (uint)extraout_x8_06 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_1f4 = 0;
    if (!(bool)in_ZR) {
      uStack_1f4 = uVar3;
    }
  }
  apcStack_b0[0] = "width";
  uVar3 = uStack_1f4;
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1f8 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c4f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9768)[extraout_x8_07] * 4 + 0x1078c4f68))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_07;
    in_ZR = (uint)extraout_x8_07 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_1f8 = 0;
    if (!(bool)in_ZR) {
      uStack_1f8 = uVar3;
    }
  }
  apcStack_b0[0] = "height";
  uVar3 = uStack_1f8;
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1fc = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c5004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9770)[extraout_x8_08] * 4 + 0x1078c5008))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_08;
    in_ZR = (uint)extraout_x8_08 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_1fc = 0;
    if (!(bool)in_ZR) {
      uStack_1fc = uVar3;
    }
  }
  apcStack_b0[0] = "mirror-x";
  uVar3 = uStack_1fc;
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1fd = false;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c50a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9778)[extraout_x8_09] * 4 + 0x1078c50a8))();
      return;
    }
    if ((int)extraout_x8_09 == 8) {
      func_0x0001078c5b9c();
    }
    else {
      func_0x0001078c5b9c();
    }
    in_ZR = (((uint)param_6 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_1fd = in_ZR;
  }
  apcStack_b0[0] = "mirror-y";
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_1fe = false;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c5148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9780)[extraout_x8_10] * 4 + 0x1078c514c))();
      return;
    }
    if ((int)extraout_x8_10 == 8) {
      func_0x0001078c5b9c();
    }
    else {
      func_0x0001078c5b9c();
    }
    in_ZR = (((uint)param_6 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_1fe = in_ZR;
  }
  apcStack_b0[0] = "rotation";
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_204 = 0;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c51ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9788)[extraout_x8_11] * 4 + 0x1078c51f0))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_11;
    in_ZR = (uint)extraout_x8_11 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0;
    uStack_204 = 0;
    if (!(bool)in_ZR) {
      uStack_204 = uVar3;
    }
  }
  apcStack_b0[0] = "scale";
  uVar3 = uStack_204;
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uStack_208 = 0x3f800000;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9790)[extraout_x8_12] * 4 + 0x1078c5290))();
      return;
    }
    in_CY = 7 < (uint)extraout_x8_12;
    in_ZR = (uint)extraout_x8_12 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0x3f800000;
    uStack_208 = 0x3f800000;
    if (!(bool)in_ZR) {
      uStack_208 = uVar3;
    }
  }
  apcStack_b0[0] = "tint-color";
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    param_5 = 0;
    uVar3 = 0x3f800000;
    uVar4 = 0x3f800000;
    param_4 = 0x3f800000;
  }
  else {
    uVar1 = *(uint *)(ppcVar2 + 0x14);
    in_CY = 6 < uVar1;
    in_ZR = uVar1 == 7;
    switch(uVar1) {
    case 0:
      func_0x0001078c5b7c();
      break;
    case 1:
      func_0x0001078c5b7c();
      break;
    case 2:
      func_0x0001078c5b7c();
      break;
    case 3:
      func_0x0001078c5b7c();
      break;
    case 4:
      uVar3 = *(undefined4 *)(ppcVar2 + 8);
      uVar4 = *(undefined4 *)((long)ppcVar2 + 0x44);
      param_4 = *(undefined4 *)(ppcVar2 + 9);
      param_5 = *(undefined4 *)((long)ppcVar2 + 0x4c);
      goto LAB_1078c53bc;
    case 5:
      func_0x0001078c5b7c();
      break;
    case 6:
      func_0x0001078c5b7c();
      break;
    case 7:
      func_0x0001078c5b7c();
      break;
    default:
      in_CY = 7 < uVar1;
      in_ZR = uVar1 == 8;
      if ((bool)in_ZR) {
        func_0x0001078c5b7c();
      }
      else {
        func_0x0001078c5b7c();
      }
    }
    uVar3 = 0x3f800000;
    uStack_108 = 0x3f800000;
    uStack_110 = 0x3f8000003f800000;
    param_6 = apcStack_b0;
    func_0x0001078c5674(param_6,&uStack_110);
  }
LAB_1078c53bc:
  apcStack_b0[0] = "opacity";
  uStack_218 = uVar3;
  uStack_214 = uVar4;
  uStack_210 = param_4;
  uStack_20c = param_5;
  func_0x0001078c5bc0();
  if (param_6 == (char **)0x0) {
    uVar4 = 0x3f800000;
  }
  else {
    func_0x0001078c5d6c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078c53f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded97a0)[extraout_x8_13] * 4 + 0x1078c53f8))();
      return;
    }
    in_ZR = (int)extraout_x8_13 == 8;
    if ((bool)in_ZR) {
      func_0x0001078c5b50();
    }
    else {
      func_0x0001078c5b50();
    }
    func_0x0001078c5c78();
    uVar4 = 0x3f800000;
    if (!(bool)in_ZR) {
      uVar4 = uVar3;
    }
  }
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar4);
  func_0x0001077e32d8(param_1,auStack_170,auStack_1a8,auStack_1e0,&uStack_1e4,&uStack_1e8,
                      &uStack_1f0,&uStack_1f4,&uStack_1f8,&uStack_1fc,&uStack_1fd,&uStack_1fe,
                      &uStack_204,&uStack_208,&uStack_218,&uStack_110);
  func_0x000104c2f714(auStack_1e0);
  func_0x000104c2f714(auStack_1a8);
  func_0x00010726b164(auStack_170);
  func_0x0001078c5b3c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b164(&uStack_110);
  func_0x00010726b144(apcStack_b0);
  do {
    func_0x0001078c5cc8();
  } while( true );
}



/* Entry: 1078c5828; end: 1078c58a7;  */

void FUN_1078c5828(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [32];
  
  if (*(int *)(param_1 + 0x68) == 8) {
    lVar4 = *param_2;
    lVar1 = (*(long **)(param_1 + 8))[1];
    for (lVar3 = **(long **)(param_1 + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x70) {
      if (*(int *)(lVar3 + 0x68) == 9) {
        lVar2 = lVar3;
        func_0x0001074d2730(lVar3);
        func_0x0001078c47e8(auStack_50,lVar2);
        func_0x0001077e3a14(lVar4 + 8,auStack_50);
        func_0x0001078c6084();
      }
    }
  }
  return;
}



/* Entry: 1078c595c; end: 1078c5a97;  */

/* WARNING: Possible PIC construction at 0x0001078c5a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c5a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c5a24) */
/* WARNING: Removing unreachable block (ram,0x0001078c5a5c) */
/* WARNING: Removing unreachable block (ram,0x0001078c5a84) */
/* WARNING: Removing unreachable block (ram,0x0001078c5a54) */
/* WARNING: Removing unreachable block (ram,0x0001078c5c44) */
/* WARNING: Removing unreachable block (ram,0x0001078c5a94) */
/* WARNING: Removing unreachable block (ram,0x0001078c5ab0) */

undefined1 * FUN_1078c595c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  
  func_0x0001078c5bdc();
  lVar3 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x150);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uStack_58 = 1;
  puVar1 = (undefined8 *)0x160;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e87e0;
  puStack_50 = puVar1;
  func_0x0001077e3cf8(puVar1 + 4,lVar3 + 8);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar3 + 0x28);
  *(undefined4 *)((long)puVar1 + 0x44) = *(undefined4 *)(lVar3 + 0x2c);
  *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(lVar3 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 10,lVar3 + 0x38)
  ;
  puVar1[3] = &PTR_FUN_1109de838;
  puVar1[0xd] = *(undefined8 *)(lVar3 + 0x50);
  func_0x000104c2fe00(puVar1 + 0xe,lVar3 + 0x58);
  puVar1[0x15] = uVar2;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar1 + 0x16);
  puVar1[0x2b] = 0;
  return auStack_60;
}



/* Entry: 1078caebc; end: 1078caf2b;  */

undefined8 * FUN_1078caebc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001078caf08(&uStack_30);
  return param_1;
}



/* Entry: 1078cbdbc; end: 1078ccdab;  */

void FUN_1078cbdbc(long *param_1,long param_2,float *param_3,long param_4,long *param_5,uint param_6
                  )

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  float fVar7;
  bool bVar8;
  code *pcVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  long *plVar16;
  long **pplVar17;
  long lVar18;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long *extraout_x8_07;
  long extraout_x8_08;
  long *extraout_x8_09;
  long extraout_x8_10;
  long *extraout_x8_11;
  long extraout_x8_12;
  long *extraout_x8_13;
  ulong extraout_x8_14;
  long extraout_x8_15;
  long *extraout_x8_16;
  long extraout_x8_17;
  long *extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong uVar19;
  long extraout_x8_21;
  long *extraout_x8_22;
  ulong extraout_x8_23;
  long lVar20;
  long extraout_x8_24;
  long *extraout_x8_25;
  long extraout_x8_26;
  long *extraout_x8_27;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  int extraout_w11_16;
  int iVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  long *unaff_x26;
  uint uVar28;
  long unaff_x27;
  float fVar29;
  float fVar30;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  long *plStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  float fStack_1b0;
  byte bStack_1ac;
  float fStack_1a8;
  char cStack_1a4;
  long *plStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined1 auStack_180 [24];
  undefined1 uStack_168;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  byte bStack_149;
  float fStack_144;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [5];
  long *plStack_c0;
  undefined8 uStack_a8;
  
  plVar13 = param_1;
  lVar20 = param_2;
  func_0x0001078d2214();
  *(undefined1 *)(plVar13 + 0xc) = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  *(undefined1 *)(plVar13 + 0x10) = 0;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x13] = 0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = 0;
  *(undefined1 *)(plVar13 + 3) = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  lStack_118 = 0;
  lStack_120 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_f8 = (long *)(lVar20 + 8);
  uStack_f0 = (long *)0x0;
  uStack_a8 = extraout_x8;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x10) != 0)) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10 != 0);
  }
  alStack_e8[0] = param_4;
  func_0x0001078d2934();
  func_0x0001078bee2c(alStack_e8);
  fVar7 = 1.0;
  if (*(char *)(param_2 + 0x28) == '\0') {
    fVar7 = *param_3;
  }
  puVar14 = auStack_160;
  fStack_144 = fVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar14,param_2 + 0x30);
  uVar10 = bStack_149 == 0;
  if (-1 < (char)bStack_149) {
    uStack_158 = (ulong)bStack_149;
  }
  if (uStack_158 == 0) {
    auStack_180[0] = 0;
    uStack_168 = 0;
  }
  else {
    puVar14 = auStack_180;
    func_0x0001002a82b4(puVar14,auStack_160);
  }
  func_0x00010785f1f4();
  uStack_f8 = (long *)((ulong)uStack_f8 & 0xffffffffffffff00);
  puVar14 = puVar14 + 0xa90;
  func_0x00010724e2c8(puVar14,&uStack_f8);
  uVar12 = (uint)puVar14;
  uVar25 = 0;
  do {
    if (lStack_118 == 0) {
      func_0x0001001148fc(auStack_180);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
      func_0x0001078cdedc(&uStack_140);
      func_0x0001078d208c(uStack_a8);
      if ((bool)uVar10) {
        return;
      }
      ___stack_chk_fail();
code_r0x0001078ccc48:
      func_0x000104bd35f4();
code_r0x0001078ccc4c:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1078ccc50);
      (*pcVar9)();
    }
    uVar21 = (lStack_118 + lStack_120) - 1;
    uVar19 = uVar21 / 0xaa;
    uVar21 = uVar21 % 0xaa;
    puVar22 = (undefined8 *)(*(long *)(lStack_138 + uVar19 * 8) + uVar21 * 0x18);
    lStack_198 = puVar22[1];
    plStack_1a0 = (long *)*puVar22;
    plStack_190 = (long *)puVar22[2];
    if ((plStack_190 != (long *)0x0) && (plStack_190[2] != 0)) {
      plVar16 = (long *)(plStack_190[2] + 8);
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = *plVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      uVar21 = (lStack_118 + lStack_120) - 1;
      uVar19 = uVar21 / 0xaa;
      uVar21 = uVar21 % 0xaa;
    }
    func_0x0001078bee2c(*(long *)(lStack_138 + uVar19 * 8) + uVar21 * 0x18 + 0x10);
    lStack_118 = lStack_118 + -1;
    puVar22 = &uStack_140;
    func_0x0001078cdff0();
    if ((undefined8 *)0x153 < puVar22) {
      __ZdlPv(*(undefined8 *)(lStack_130 + -8));
      lStack_130 = lStack_130 + -8;
    }
    plVar15 = (long *)*plStack_1a0;
    (**(code **)(*plVar15 + 0x10))();
    plVar16 = &uStack_f8;
    uStack_f8 = plVar15;
    func_0x0001057f9264(plVar13 + 0x11);
    if (plStack_190 == (long *)0x0) {
      bVar11 = true;
    }
    else if (uVar25 < (ulong)(param_5[1] - *param_5 >> 3)) {
      bVar11 = *(long *)(*param_5 + uVar25 * 8) != *(long *)(param_1[0x12] + -8);
    }
    else {
      bVar11 = false;
    }
    func_0x0001078d26fc();
    cVar6 = *(char *)(extraout_x8_00 + 8);
    lVar20 = extraout_x8_00 + 0xd0;
    func_0x0001078d2808();
    fStack_1a8 = (float)lVar20;
    cStack_1a4 = (char)((ulong)lVar20 >> 0x20);
    func_0x0001078d26fc();
    lVar20 = extraout_x8_01 + 0xd8;
    func_0x0001078d2808();
    fStack_1b0 = (float)lVar20;
    bStack_1ac = (byte)((ulong)lVar20 >> 0x20);
    func_0x0001078d26fc();
    lVar20 = extraout_x8_02 + 0xf0;
    func_0x0001078d2808();
    uStack_1b8 = (undefined4)lVar20;
    uStack_1b4 = (undefined1)((ulong)lVar20 >> 0x20);
    func_0x0001078d26fc();
    lVar20 = extraout_x8_03 + 0xf8;
    func_0x0001078d2808();
    uStack_1c0 = (undefined4)lVar20;
    uStack_1bc = (undefined1)((ulong)lVar20 >> 0x20);
    uVar10 = cVar6 == '\x03';
    switch(cVar6) {
    case '\0':
      uStack_108 = (long *)0x0;
      if (plStack_190 == (long *)0x0) {
        func_0x0001078d26b4();
        plVar15 = (long *)0x0;
        if (extraout_x8_21 != 0) {
          do {
            func_0x0001078d22f0();
            plVar15 = extraout_x8_22;
          } while (extraout_w11_07 != 0);
        }
        plStack_110 = plVar15;
        func_0x0001078d29f8();
        func_0x0001078d2a48();
        func_0x0001078ce204(uStack_f8);
        func_0x0001078d2578();
        unaff_x26 = uStack_108;
code_r0x0001078cc49c:
        lVar20 = 0;
        func_0x0001078d2830();
        if ((extraout_x8_23 & 1) != 0) goto code_r0x0001078cc4a8;
      }
      else {
        func_0x0001078d28c4();
        func_0x0001078d26c8();
        func_0x0001078d267c();
        iVar24 = 0;
        if ((bool)uVar10) {
          iVar24 = extraout_w8;
        }
        if (iVar24 != 1) goto code_r0x0001078cc49c;
        func_0x0001078d26b4();
        plVar16 = (long *)0x0;
        if (extraout_x8_04 != 0) {
          do {
            func_0x0001078d22f0();
            plVar16 = extraout_x8_05;
          } while (extraout_w11 != 0);
        }
        plStack_110 = plVar16;
        func_0x0001078d29f8();
        func_0x0001078d2a48();
        func_0x0001078ce204(uStack_f8);
        func_0x0001078d2578();
        lVar20 = 1;
        unaff_x26 = uStack_108;
code_r0x0001078cc4a8:
        func_0x0001078d26fc();
        func_0x0001078d27c8();
        func_0x0001078d26a0();
        func_0x0001078d2354();
        func_0x00010811d94c(unaff_x26);
        plVar16 = plStack_1a0;
        func_0x0001078d22cc();
        func_0x0001078d2800();
        unaff_x27 = lVar20;
      }
      uVar28 = (uint)unaff_x27;
      if (lStack_198 == 0) {
        func_0x0001078d2820();
        if ((((extraout_w8_03 & (uVar28 ^ 0xffffffff) & 1) != 0) ||
            (plVar16 = uStack_108, uStack_108 != (long *)0x0)) && (plVar16[2] != 0)) {
          do {
            func_0x0001078d2394();
          } while (extraout_w10_00 != 0);
        }
        plStack_110 = plVar16;
        func_0x0001078d22cc(&uStack_f8);
        func_0x0001078d2a10();
        func_0x0001078d2a04();
        func_0x0001078d29d8();
        pplVar17 = &plStack_110;
code_r0x0001078cc6f8:
        func_0x0001078bee2c(pplVar17);
      }
      else {
        if ((uVar12 & uVar28) == 1) {
          func_0x0001078d27c0();
          func_0x0001078d24cc();
          if ((uStack_108 != (long *)0x0) && (uStack_108[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_08 != 0);
          }
          func_0x0001078d2344();
code_r0x0001078cc6f4:
          pplVar17 = (long **)&uStack_f8;
          goto code_r0x0001078cc6f8;
        }
        if (plStack_190 == (long *)0x0) {
          if ((uStack_108 != (long *)0x0) && (uStack_108[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_10 != 0);
          }
          func_0x0001078d24d8();
          goto code_r0x0001078cc6f4;
        }
      }
      if (plStack_190 == (long *)0x0) {
        uVar28 = 1;
      }
      if ((uVar28 & 1) == 0) {
        iVar24 = (int)((ulong)(unaff_x26[6] - unaff_x26[5]) >> 3) + -1;
      }
      else {
        iVar24 = -1;
      }
      plVar16 = (long *)plStack_1a0[1];
      plVar15 = (long *)plStack_1a0[2];
      while (uVar10 = plVar15 == plVar16, !(bool)uVar10) {
        plVar15 = plVar15 + -4;
        uStack_f8 = plVar15;
        uStack_f0 = unaff_x26;
        if (iVar24 < 0) {
          alStack_e8[0] = 0;
        }
        else {
          func_0x00010811f618(alStack_e8,unaff_x26,iVar24);
        }
        func_0x0001078d2934();
        func_0x0001078bee2c(alStack_e8);
        iVar24 = iVar24 + -1;
      }
      func_0x0001078ce204(uStack_108);
      break;
    case '\x01':
      uVar10 = cStack_1a4 == '\x01';
      if ((!(bool)uVar10) || ((bStack_1ac & 1) == 0)) goto code_r0x0001078cca04;
      uStack_108 = (long *)0x0;
      if (plStack_190 == (long *)0x0) {
        func_0x0001078d26b4();
        plVar15 = (long *)0x0;
        if (extraout_x8_24 != 0) {
          do {
            func_0x0001078d22f0();
            plVar15 = extraout_x8_25;
          } while (extraout_w11_11 != 0);
        }
        plStack_110 = plVar15;
        func_0x0001078d2a28();
        func_0x0001078d2a3c();
        func_0x0001078bedfc(&uStack_f8);
        func_0x0001078d2578();
        unaff_x26 = uStack_108;
code_r0x0001078cc7b8:
        unaff_x27 = 0;
        bVar8 = false;
        if (((param_6 ^ 1) & 1) != 0 || bVar11) goto code_r0x0001078cc7cc;
      }
      else {
        func_0x0001078d28c4();
        func_0x0001078d26c8();
        func_0x0001078d267c();
        iVar24 = 0;
        if ((bool)uVar10) {
          iVar24 = extraout_w8_02;
        }
        if (iVar24 != 1) goto code_r0x0001078cc7b8;
        func_0x0001078d26b4();
        plVar16 = (long *)0x0;
        if (extraout_x8_10 != 0) {
          do {
            func_0x0001078d22f0();
            plVar16 = extraout_x8_11;
          } while (extraout_w11_02 != 0);
        }
        plStack_110 = plVar16;
        func_0x0001078d2a28();
        func_0x0001078d2a3c();
        func_0x0001078bedfc(&uStack_f8);
        func_0x0001078d2578();
        unaff_x27 = 1;
        unaff_x26 = uStack_108;
code_r0x0001078cc7cc:
        plVar15 = plStack_1a0;
        unaff_s12 = fStack_1a8;
        unaff_s13 = fStack_1b0;
        if ((cStack_1a4 != '\x01') || ((bStack_1ac & 1) == 0)) {
          func_0x000104bdc2c8();
          goto code_r0x0001078ccc4c;
        }
        lVar20 = *plStack_1a0;
        cVar6 = *(char *)(lVar20 + 0x1d8);
        cVar4 = *(char *)(lVar20 + 0x1d9);
        bVar5 = *(byte *)(lVar20 + 0x1ec);
        func_0x00010811e7a8(unaff_x26,
                            (ulong)(uint)(int)(*(float *)(lVar20 + 0x1dc) * 255.0) << 0x10 |
                            (ulong)(uint)(int)(*(float *)(lVar20 + 0x1e8) * 255.0) << 0x18 |
                            (ulong)(uint)(int)(*(float *)(lVar20 + 0x1e0) * 255.0) << 8 |
                            (ulong)(uint)(int)(*(float *)(lVar20 + 0x1e4) * 255.0));
        uVar28 = bVar5 - 1;
        iVar24 = 0;
        if (uVar28 < 3) {
          iVar24 = (uVar28 & 0xff) + 1;
        }
        func_0x00010811e790(unaff_x26,iVar24);
        uStack_f8 = (long *)0x0;
        uStack_f0 = (long *)CONCAT44(unaff_s13 + 0.0,unaff_s12 + 0.0);
        plVar16 = &uStack_f8;
        func_0x00010811fa78(unaff_x26);
        func_0x0001078d27c8(*plVar15);
        func_0x0001078d26a0();
        if (cVar6 == '\x01') {
          func_0x0001081204fc(0xbf800000,unaff_x26);
        }
        if (cVar4 != '\0') {
          func_0x000108120568(0xbf800000,unaff_x26);
        }
        func_0x0001078d2354();
        bVar8 = true;
      }
      uVar28 = (uint)unaff_x27;
      if (lStack_198 == 0) {
        func_0x0001078d2820();
        if ((extraout_w8_05 & (uVar28 ^ 0xffffffff) & 1) == 0) {
          plVar16 = uStack_108;
          if (uStack_108 != (long *)0x0) {
            lVar20 = uStack_108[2];
            goto joined_r0x0001078cca14;
          }
        }
        else {
          lVar20 = plVar16[2];
joined_r0x0001078cca14:
          if (lVar20 != 0) {
            do {
              func_0x0001078d2394();
            } while (extraout_w10_02 != 0);
          }
        }
        plStack_110 = plVar16;
        func_0x0001078d22cc(&uStack_f8);
        func_0x0001078d2a10();
        func_0x0001078cdc08(param_1 + 3,&uStack_f8);
        func_0x0001078d29d8();
        func_0x0001078bee2c(&plStack_110);
      }
      else {
        if ((uVar12 & uVar28) == 1) {
          func_0x0001078d27c0();
          func_0x0001078d24cc();
          if ((uStack_108 != (long *)0x0) && (uStack_108[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_12 != 0);
          }
          func_0x0001078d2344();
          func_0x0001078d27b0();
        }
        else if (plStack_190 == (long *)0x0) {
          if ((uStack_108 != (long *)0x0) && (uStack_108[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_16 != 0);
          }
          func_0x0001078d24d8();
          func_0x0001078d27b0();
        }
        if (bVar8) {
          func_0x0001078d2694();
          func_0x0001078d22cc();
          func_0x0001078d2800();
        }
      }
      func_0x0001078d26fc();
      func_0x000104c2fe00(&uStack_f8,extraout_x8_26 + 0x108);
      plVar16 = plStack_190;
      if (((((uint)(plStack_190 != (long *)0x0) & (uVar28 ^ 0xffffffff)) != 0) ||
          (plVar16 = uStack_108, uStack_108 != (long *)0x0)) && (plVar16[2] != 0)) {
        do {
          func_0x0001078d2300();
          plVar16 = extraout_x8_27;
        } while (extraout_w11_15 != 0);
      }
      uVar19 = param_1[1];
      uVar21 = param_1[2];
      uVar10 = uVar19 == uVar21;
      plStack_c0 = plVar16;
      if (uVar19 < uVar21) {
        func_0x0001078ce4e0(uVar19,&uStack_f8);
        lVar20 = uVar19 + 0x40;
      }
      else {
        lVar20 = uVar19 - *param_1;
        uVar19 = (lVar20 >> 6) + 1;
        if (uVar19 >> 0x3a != 0) {
          func_0x0001078ce508();
          goto code_r0x0001078ccc4c;
        }
        uVar21 = uVar21 - *param_1;
        uVar23 = (long)uVar21 >> 5;
        if (uVar23 <= uVar19) {
          uVar23 = uVar19;
        }
        if (0x7fffffffffffffbf < uVar21) {
          uVar23 = 0x3ffffffffffffff;
        }
        if (uVar23 == 0) {
          unaff_x26 = (long *)0x0;
        }
        else {
          if (uVar23 >> 0x3a != 0) goto code_r0x0001078ccc48;
          unaff_x26 = (long *)(uVar23 << 6);
          __Znwm();
        }
        lVar20 = (long)unaff_x26 + lVar20;
        func_0x0001078ce4e0(lVar20,&uStack_f8);
        lVar26 = *param_1;
        lVar3 = param_1[1];
        lVar1 = lVar20 + (lVar26 - lVar3);
        lVar18 = lVar1;
        for (unaff_x27 = lVar26; unaff_x27 != lVar3; unaff_x27 = unaff_x27 + 0x40) {
          func_0x0001078ce4e0(lVar18,unaff_x27);
          lVar18 = lVar18 + 0x40;
        }
        for (; uVar10 = lVar26 == lVar3, !(bool)uVar10; lVar26 = lVar26 + 0x40) {
          func_0x0001078cddf8(lVar26);
        }
        lVar20 = lVar20 + 0x40;
        lVar18 = *param_1;
        *param_1 = lVar1;
        param_1[1] = lVar20;
        param_1[2] = (long)(unaff_x26 + uVar23 * 8);
        if (lVar18 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = lVar20;
      func_0x0001078cddf8(&uStack_f8);
      func_0x0001078bedfc(&uStack_108);
      break;
    case '\x02':
      plStack_1c8 = (long *)0x0;
      if (plStack_190 == (long *)0x0) {
        func_0x0001078d26b4();
        plVar15 = (long *)0x0;
        if (extraout_x8_12 != 0) {
          do {
            func_0x0001078d22f0();
            plVar15 = extraout_x8_13;
          } while (extraout_w11_03 != 0);
        }
        uStack_108 = plVar15;
        func_0x0001078d29e0();
        func_0x0001078d2920();
        func_0x0001078ce46c(&uStack_f8);
        func_0x0001078d26ac();
        unaff_x26 = plStack_1c8;
code_r0x0001078cc278:
        uVar27 = 0;
        func_0x0001078d2830();
        uVar28 = 0;
        if ((extraout_x8_14 & 1) != 0) goto code_r0x0001078cc284;
      }
      else {
        func_0x0001078d28c4();
        func_0x0001078d26c8();
        func_0x0001078d267c();
        iVar24 = 0;
        if ((bool)uVar10) {
          iVar24 = extraout_w8_00;
        }
        uVar10 = iVar24 == 1;
        if (!(bool)uVar10) goto code_r0x0001078cc278;
        func_0x0001078d26b4();
        plVar16 = (long *)0x0;
        if (extraout_x8_06 != 0) {
          do {
            func_0x0001078d22f0();
            plVar16 = extraout_x8_07;
          } while (extraout_w11_00 != 0);
        }
        uStack_108 = plVar16;
        func_0x0001078d29e0();
        func_0x0001078d2920();
        func_0x0001078ce46c(&uStack_f8);
        func_0x0001078d26ac();
        unaff_x26 = plStack_1c8;
        uVar28 = 1;
code_r0x0001078cc284:
        uVar27 = uVar28;
        plVar15 = plStack_1a0;
        func_0x0001072787e4(&uStack_f8,*plStack_1a0 + 0x1f0);
        func_0x0001078d26b4();
        plVar16 = (long *)0x0;
        if (extraout_x8_15 != 0) {
          do {
            func_0x0001078d22f0();
            plVar16 = extraout_x8_16;
          } while (extraout_w11_04 != 0);
        }
        plStack_110 = plVar16;
        func_0x0001078d2d24(&uStack_108,fVar7,&plStack_110,&uStack_f8);
        func_0x0001078d2578();
        func_0x000108128324(unaff_x26,&uStack_108);
        func_0x0001081284e8(unaff_x26,2);
        plVar16 = (long *)(ulong)(uint)(int)*(float *)(*plVar15 + 0x208);
        func_0x0001081286c0(unaff_x26);
        func_0x00010812872c(*(undefined4 *)(*plVar15 + 0x20c),unaff_x26);
        func_0x0001078d27c8(*plVar15);
        func_0x0001078d26a0();
        func_0x0001078ce490(&uStack_108);
        func_0x00010726afc0(&uStack_f8);
        func_0x0001078d2354();
        unaff_x27 = 1;
      }
      if (lStack_198 == 0) {
        func_0x0001078d2820();
        if ((((extraout_w8_04 & (uVar27 ^ 0xffffffff) & 1) != 0) ||
            (plVar16 = plStack_1c8, plStack_1c8 != (long *)0x0)) && (plVar16[2] != 0)) {
          do {
            func_0x0001078d2394();
          } while (extraout_w10_01 != 0);
        }
        uStack_108 = plVar16;
        func_0x0001078d22cc(&uStack_f8);
        func_0x0001078d2a10();
        func_0x0001078d2a04();
        func_0x0001078d29d8();
        func_0x0001078bee2c(&uStack_108);
      }
      else {
        uVar10 = (uVar12 & uVar27) == 1;
        if ((bool)uVar10) {
          func_0x0001078d27c0();
          func_0x0001078d24cc();
          if ((plStack_1c8 != (long *)0x0) && (plStack_1c8[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_05 != 0);
          }
          func_0x0001078d2344();
code_r0x0001078cc9dc:
          func_0x0001078d27b0();
        }
        else if (plStack_190 == (long *)0x0) {
          if ((plStack_1c8 != (long *)0x0) && (plStack_1c8[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_14 != 0);
          }
          func_0x0001078d24d8();
          goto code_r0x0001078cc9dc;
        }
        if ((int)unaff_x27 != 0) {
          func_0x0001078d2694();
          func_0x0001078d22cc();
          func_0x0001078d2800();
        }
      }
      func_0x0001078ce46c(&plStack_1c8);
      break;
    case '\x03':
      plStack_110 = (long *)0x0;
      if (plStack_190 == (long *)0x0) {
        func_0x0001078d26b4();
        plVar16 = (long *)0x0;
        if (extraout_x8_17 != 0) {
          do {
            func_0x0001078d22f0();
            plVar16 = extraout_x8_18;
          } while (extraout_w11_06 != 0);
        }
        uStack_108 = plVar16;
        func_0x0001078d29ec();
        func_0x0001078d2a60();
        func_0x0001078ce630(&uStack_f8);
        func_0x0001078d26ac();
        unaff_x26 = plStack_110;
code_r0x0001078cc3a0:
        uVar27 = 0;
        func_0x0001078d2830();
        uVar28 = 0;
        if ((extraout_x8_19 & 1) != 0) goto code_r0x0001078cc3ac;
      }
      else {
        func_0x0001078d28c4();
        func_0x0001078d26c8();
        func_0x0001078d267c();
        iVar24 = 0;
        if ((bool)uVar10) {
          iVar24 = extraout_w8_01;
        }
        uVar10 = iVar24 == 1;
        if (!(bool)uVar10) goto code_r0x0001078cc3a0;
        func_0x0001078d26b4();
        plVar16 = (long *)0x0;
        if (extraout_x8_08 != 0) {
          do {
            func_0x0001078d22f0();
            plVar16 = extraout_x8_09;
          } while (extraout_w11_01 != 0);
        }
        uStack_108 = plVar16;
        func_0x0001078d29ec();
        func_0x0001078d2a60();
        func_0x0001078ce630(&uStack_f8);
        func_0x0001078d26ac();
        unaff_x26 = plStack_110;
        uVar28 = 1;
code_r0x0001078cc3ac:
        uVar27 = uVar28;
        plVar15 = plStack_1a0;
        plVar16 = &uStack_f8;
        func_0x0001072f64f4(plVar16,*plStack_1a0 + 0x210);
        if (((uint)((int)uStack_f8[1] - (int)*uStack_f8) >> 2 & 1) == 0) {
          func_0x000108376ad8(&uStack_108);
          bVar11 = false;
          func_0x0001078d2bf0(0);
          uVar19 = extraout_x8_20;
          while( true ) {
            pfVar2 = (float *)*uStack_f8;
            uVar21 = uStack_f8[1] - (long)pfVar2 >> 2;
            if (uVar21 <= (uVar19 & 0xffffffff)) break;
            iVar24 = (int)uVar19;
            fVar29 = fVar7 * pfVar2[uVar19 & 0xffffffff];
            fVar30 = fVar7 * pfVar2[iVar24 + 1];
            if (!bVar11) {
              unaff_s10 = fVar30;
              unaff_s11 = fVar29;
              unaff_s13 = fVar30;
              unaff_s12 = fVar29;
            }
            if (fVar29 <= unaff_s12) {
              unaff_s12 = fVar29;
            }
            if (fVar30 <= unaff_s13) {
              unaff_s13 = fVar30;
            }
            if (unaff_s11 <= fVar29) {
              unaff_s11 = fVar29;
            }
            if (unaff_s10 <= fVar30) {
              unaff_s10 = fVar30;
            }
            if (iVar24 == 0) {
              func_0x000108377934(&uStack_108);
            }
            else {
              func_0x000108377c8c();
            }
            uVar19 = (ulong)(iVar24 + 2);
            bVar11 = true;
          }
          if (2 < uVar21) {
            func_0x000108377c8c(fVar7 * *pfVar2,fVar7 * pfVar2[1],&uStack_108);
          }
          func_0x000108126dbc(unaff_x26,&uStack_108);
          plVar16 = uStack_108;
          func_0x00010837ca5c(uStack_108);
        }
        else {
          bVar11 = false;
          func_0x0001078d2bf0();
        }
        lVar20 = *plVar15;
        if (0.0 < *(float *)(lVar20 + 0x220)) {
          func_0x0001081158c4(&uStack_108,0);
          func_0x000108126f64(unaff_x26,&uStack_108);
          plVar16 = &uStack_108;
          func_0x00010810c718(plVar16);
          lVar20 = *plVar15;
        }
        func_0x0001078d27c8(lVar20);
        func_0x000108126c24(unaff_x26,(ulong)plVar16 & 0xffffffff);
        func_0x0001072dbd40(&uStack_f8);
        func_0x0001078d2354();
        fVar29 = unaff_s10 - unaff_s13;
        if (!bVar11) {
          fVar29 = 0.0;
        }
        fVar30 = unaff_s11 - unaff_s12;
        if (!bVar11) {
          fVar30 = 0.0;
        }
        unaff_s10 = fStack_1a8;
        if (cStack_1a4 == '\0') {
          unaff_s10 = fVar30;
        }
        uVar10 = bStack_1ac == 0;
        unaff_s11 = fStack_1b0;
        if ((bool)uVar10) {
          unaff_s11 = fVar29;
        }
        unaff_x27 = 1;
      }
      if (lStack_198 != 0) {
        uVar10 = (uVar12 & uVar27) == 1;
        if ((bool)uVar10) {
          func_0x0001078d27c0();
          func_0x0001078d24cc();
          if ((plStack_110 != (long *)0x0) && (plStack_110[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_09 != 0);
          }
          func_0x0001078d2344();
code_r0x0001078cc978:
          func_0x0001078d27b0();
        }
        else if (plStack_190 == (long *)0x0) {
          if ((plStack_110 != (long *)0x0) && (plStack_110[2] != 0)) {
            do {
              func_0x0001078d2300();
            } while (extraout_w11_13 != 0);
          }
          func_0x0001078d24d8();
          goto code_r0x0001078cc978;
        }
        if ((int)unaff_x27 != 0) {
          func_0x0001078d2694();
          uStack_f8._0_5_ = CONCAT14(1,unaff_s10);
          uStack_108._0_5_ = CONCAT14(1,unaff_s11);
          func_0x0001078d2800();
        }
      }
      func_0x0001078ce630(&plStack_110);
    }
    uVar25 = uVar25 + 1;
code_r0x0001078cca04:
    func_0x0001078d2960();
  } while( true );
}



/* Entry: 1078cd480; end: 1078cd543;  */

void FUN_1078cd480(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plStack_50;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0x208;
  __Znwm();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109e8890;
  plVar1 = puVar4 + 3;
  func_0x00010811d59c(plVar1,param_2);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_50 = plVar1;
    puStack_48 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&plStack_50);
    func_0x0001078d2a80();
  }
  *param_1 = (long)plVar1;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}



/* Entry: 1078cdd40; end: 1078cddcb;  */

void FUN_1078cdd40(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001078d25ec();
  func_0x0001078d2214();
  uStack_28 = extraout_x8;
  func_0x0001078ce374(auStack_40,1);
  *(undefined8 *)(lStack_30 + 0x10) = 0;
  func_0x0001078d2b34();
  func_0x000108127608();
  func_0x0001078d2b14();
  func_0x0001078ce358();
  FUN_1078ce450();
  func_0x0001078d2b00();
  (*extraout_x8_00)();
  func_0x0001078d208c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078ce46c();
  func_0x0001078d25c0();
  func_0x0001078d2bd8();
  if (!(bool)in_ZR) {
    func_0x0001078d2480();
    func_0x0001078ce460();
  }
  return;
}



/* Entry: 1078ce0f0; end: 1078ce147;  */

void FUN_1078ce0f0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001078d25ec();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
      func_0x0001078d26f0();
      *unaff_x19 = 0;
      if (param_1 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 8;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 8;
  return;
}



/* Entry: 1078ce2c8; end: 1078ce2ef;  */

undefined8 FUN_1078ce2c8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001001148fc(param_1 + 0x28);
  func_0x0001078bf5b4(param_1);
  func_0x0001078bee50();
  return unaff_x19;
}



/* Entry: 1078ce450; end: 1078ce46b;  */

void FUN_1078ce450(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078ce560; end: 1078ce58f;  */

void FUN_1078ce560(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x5397829cbc14e6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x310);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e88e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078ce718; end: 1078ce723;  */

void FUN_1078ce718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8930;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078cea54; end: 1078cebfb;  */

long * FUN_1078cea54(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (plVar8 > param_2 || param_2 == plVar8) {
    if (plVar8 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar8 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = param_1;
      func_0x0001078cec3c(param_1,0);
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    plVar8 = param_1;
    func_0x0001078cec3c(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar6 = plVar5;
      if (param_2 <= plVar5) {
        plVar6 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar6 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar7 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar4);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar6) {
          if (*(long *)(lVar2 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar7 * 8) = plVar5;
            plVar6 = plVar7;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar7 * 8);
            **(long **)(lVar2 + (long)plVar7 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return plVar8;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    if ((char)plVar3[2] == '\x01') {
      func_0x0001078cea28(lVar2 + 0x10);
    }
    func_0x0001078d29c0();
  }
  return plVar3;
}



/* Entry: 1078cf0ac; end: 1078cf147;  */

void FUN_1078cf0ac(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001078d26f0();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078cf430; end: 1078d160f;  */

/* WARNING: Type propagation algorithm not settling */

mach_header *
FUN_1078cf430(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,mach_header *param_6)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  mach_header *pmVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  mach_header *pmVar4;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  undefined8 uVar5;
  uint uVar6;
  dword dVar7;
  dword dVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  mach_header mStack_358;
  undefined1 uStack_325;
  dword dStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined1 uStack_312;
  undefined1 uStack_311;
  undefined4 uStack_310;
  undefined1 uStack_30c;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined4 uStack_300;
  undefined1 uStack_2fc;
  undefined4 uStack_2f8;
  undefined1 uStack_2f4;
  undefined4 uStack_2f0;
  undefined1 uStack_2ec;
  undefined4 uStack_2e8;
  undefined1 uStack_2e4;
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined4 uStack_2d0;
  undefined1 uStack_2cc;
  undefined4 uStack_2c8;
  undefined1 uStack_2c4;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined1 uStack_2b4;
  undefined1 uStack_2b3;
  undefined1 uStack_2b2;
  undefined1 uStack_2b1;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 uStack_1e1;
  undefined1 auStack_1e0 [56];
  undefined1 auStack_1a8 [56];
  mach_header amStack_170 [3];
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *apcStack_b0 [13];
  undefined8 uStack_48;
  
  func_0x0001078d2214();
  apcStack_b0[0] = "type";
  pmVar1 = (mach_header *)apcStack_b0;
  uStack_48 = extraout_x8;
  func_0x0001078c55bc();
  if (param_6 == (mach_header *)0x0) {
    uStack_1e1 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded992c)[extraout_x8_00] * 4 + 0x1078cf490))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_00;
    in_ZR = (uint)extraout_x8_00 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2230();
    }
    else {
      func_0x0001078d2230();
    }
    func_0x0001078d2710();
    uStack_1e1 = extraout_w8;
  }
  apcStack_b0[0] = "fill-color";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    func_0x0001078d2810();
    param_5 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9934)[extraout_x8_01] * 4 + 0x1078cf528))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_01;
    in_ZR = (uint)extraout_x8_01 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d1fe8();
    }
    else {
      func_0x0001078d1fe8();
    }
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x0001078d24c0();
  }
  apcStack_b0[0] = "border-radius";
  uStack_1f4 = param_2;
  uStack_1f0 = param_3;
  uStack_1ec = param_4;
  uStack_1e8 = param_5;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_1f8 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded993c)[extraout_x8_02] * 4 + 0x1078cf5d4))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_02;
    in_ZR = (uint)extraout_x8_02 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    param_3 = 0;
    uStack_1f8 = 0;
    if (!(bool)in_ZR) {
      uStack_1f8 = param_2;
    }
  }
  apcStack_b0[0] = "border-width";
  uVar11 = uStack_1f8;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_1fc = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9944)[extraout_x8_03] * 4 + 0x1078cf674))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_03;
    in_ZR = (uint)extraout_x8_03 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    param_3 = 0;
    uStack_1fc = 0;
    if (!(bool)in_ZR) {
      uStack_1fc = uVar11;
    }
  }
  apcStack_b0[0] = "border-color";
  uVar11 = uStack_1fc;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    param_5 = 0x3f800000;
    func_0x0001078d2810();
  }
  else {
    uVar6 = pmVar1[5].magic;
    in_CY = 6 < uVar6;
    in_ZR = uVar6 == 7;
    switch(uVar6) {
    case 0:
      func_0x0001078d1fe8();
      break;
    case 1:
      func_0x0001078d1fe8();
      break;
    case 2:
      func_0x0001078d1fe8();
      break;
    case 3:
      func_0x0001078d1fe8();
      break;
    case 4:
      func_0x0001078d2acc();
      goto LAB_1078cf78c;
    case 5:
      func_0x0001078d1fe8();
      break;
    case 6:
      func_0x0001078d1fe8();
      break;
    case 7:
      func_0x0001078d1fe8();
      break;
    default:
      in_CY = 7 < uVar6;
      in_ZR = uVar6 == 8;
      if ((bool)in_ZR) {
        func_0x0001078d1fe8();
      }
      else {
        func_0x0001078d1fe8();
      }
    }
    uVar11 = 0;
    uStack_108 = 0x3f80000000000000;
    uStack_110 = 0;
    func_0x0001078d24c0();
  }
LAB_1078cf78c:
  apcStack_b0[0] = "opacity";
  uStack_20c = uVar11;
  uStack_208 = param_3;
  uStack_204 = param_4;
  uStack_200 = param_5;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_210 = 0x3f800000;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9954)[extraout_x8_04] * 4 + 0x1078cf7d0))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_04;
    in_ZR = (uint)extraout_x8_04 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    uStack_210 = 0x3f800000;
    if (!(bool)in_ZR) {
      uStack_210 = uVar11;
    }
  }
  apcStack_b0[0] = "drop-shadow-offset";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_214 = 0x3f800000;
    uVar11 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded995c)[extraout_x8_05] * 4 + 0x1078cf870))();
      return param_6;
    }
    if ((int)extraout_x8_05 == 8) {
      func_0x0001078d2278();
    }
    else {
      func_0x0001078d2278();
    }
    uVar11 = SUB84(param_6,0);
    uStack_214 = (uint)((ulong)param_6 >> 0x20);
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    if ((bool)in_ZR) {
      uStack_214 = 0x3f800000;
    }
    param_4 = 0;
    if ((bool)in_ZR) {
      uVar11 = 0;
    }
  }
  apcStack_b0[0] = "drop-shadow-blur";
  uStack_218 = uVar11;
  uVar6 = uStack_214;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uVar9 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9964)[extraout_x8_06] * 4 + 0x1078cf92c))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_06;
    in_ZR = (uint)extraout_x8_06 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    uVar11 = 0;
    uVar9 = 0;
    if (!(bool)in_ZR) {
      uVar9 = (ulong)uVar6;
    }
  }
  uVar5 = 0;
  uStack_21c = (undefined4)uVar9;
  apcStack_b0[0] = "drop-shadow-color";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    func_0x0001078d2810();
    param_5 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cf9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded996c)[extraout_x8_07] * 4 + 0x1078cf9cc))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_07;
    in_ZR = (uint)extraout_x8_07 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d1fe8();
    }
    else {
      func_0x0001078d1fe8();
    }
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x0001078d24c0();
  }
  uStack_22c = (undefined4)uVar9;
  apcStack_b0[0] = "direction";
  uStack_228 = uVar11;
  uStack_224 = param_4;
  uStack_220 = param_5;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_22d = 1;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9974)[extraout_x8_08] * 4 + 0x1078cfa78))();
      return param_6;
    }
    if ((int)extraout_x8_08 == 8) {
      func_0x0001078d2260();
    }
    else {
      func_0x0001078d2260();
    }
    uStack_22d = SUB81(param_6,0);
    in_ZR = ((ulong)param_6 & 0x100) == 0;
    in_CY = 0;
    if ((bool)in_ZR) {
      uStack_22d = 1;
    }
  }
  apcStack_b0[0] = "flex-direction";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_22e = 2;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded997c)[extraout_x8_09] * 4 + 0x1078cfb14))();
      return param_6;
    }
    if ((int)extraout_x8_09 == 8) {
      func_0x0001078d223c();
    }
    else {
      func_0x0001078d223c();
    }
    in_ZR = ((ulong)param_6 & 0x100) == 0;
    in_CY = 0;
    uStack_22e = 2;
    if (!(bool)in_ZR) {
      uStack_22e = (char)param_6;
    }
  }
  apcStack_b0[0] = "justify-content";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_22f = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9984)[extraout_x8_10] * 4 + 0x1078cfbb4))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_10;
    in_ZR = (uint)extraout_x8_10 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2254();
    }
    else {
      func_0x0001078d2254();
    }
    func_0x0001078d2710();
    uStack_22f = extraout_w8_00;
  }
  apcStack_b0[0] = "align-items";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_230 = 4;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded998c)[extraout_x8_11] * 4 + 0x1078cfc4c))();
      return param_6;
    }
    if ((int)extraout_x8_11 == 8) {
      func_0x0001078d21bc();
    }
    else {
      func_0x0001078d21bc();
    }
    in_ZR = ((ulong)param_6 & 0x100) == 0;
    in_CY = 0;
    uStack_230 = 4;
    if (!(bool)in_ZR) {
      uStack_230 = (char)param_6;
    }
  }
  apcStack_b0[0] = "align-content";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_231 = 1;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9994)[extraout_x8_12] * 4 + 0x1078cfcec))();
      return param_6;
    }
    if ((int)extraout_x8_12 == 8) {
      func_0x0001078d21bc();
    }
    else {
      func_0x0001078d21bc();
    }
    uStack_231 = SUB81(param_6,0);
    in_ZR = ((ulong)param_6 & 0x100) == 0;
    in_CY = 0;
    if ((bool)in_ZR) {
      uStack_231 = 1;
    }
  }
  apcStack_b0[0] = "align-self";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_232 = 4;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded999c)[extraout_x8_13] * 4 + 0x1078cfd88))();
      return param_6;
    }
    if ((int)extraout_x8_13 == 8) {
      func_0x0001078d21bc();
    }
    else {
      func_0x0001078d21bc();
    }
    in_ZR = ((ulong)param_6 & 0x100) == 0;
    in_CY = 0;
    uStack_232 = 4;
    if (!(bool)in_ZR) {
      uStack_232 = (char)param_6;
    }
  }
  apcStack_b0[0] = "padding";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_250 = (ulong)uStack_250._4_4_ << 0x20;
    uStack_240 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99a4)[extraout_x8_14] * 4 + 0x1078cfe28))();
      return param_6;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_240 = *(undefined4 *)(extraout_x8_15 + 0x10);
    uStack_250 = uVar9;
    uStack_248 = uVar5;
  }
  apcStack_b0[0] = "margin";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_270 = (ulong)uStack_270._4_4_ << 0x20;
    uStack_260 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99ad)[extraout_x8_16] * 4 + 0x1078cfec4))();
      return param_6;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_260 = *(undefined4 *)(extraout_x8_17 + 0x10);
    uStack_270 = uVar9;
    uStack_268 = uVar5;
  }
  apcStack_b0[0] = "border";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_290 = (ulong)uStack_290._4_4_ << 0x20;
    uStack_280 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99b6)[extraout_x8_18] * 4 + 0x1078cff60))();
      return param_6;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_280 = *(undefined4 *)(extraout_x8_19 + 0x10);
    uStack_290 = uVar9;
    uStack_288 = uVar5;
  }
  apcStack_b0[0] = "position";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_2b0 = (ulong)uStack_2b0._4_4_ << 0x20;
    uStack_2a0 = 0;
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078cfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99bf)[extraout_x8_20] * 4 + 0x1078cfffc))();
      return param_6;
    }
    func_0x0001078d1f64();
    func_0x0001078d22b0();
    uStack_2a0 = *(undefined4 *)(extraout_x8_21 + 0x10);
    uStack_2b0 = uVar9;
    uStack_2a8 = uVar5;
  }
  dVar7 = (dword)uVar9;
  apcStack_b0[0] = "position-type";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_2b1 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99c8)[extraout_x8_22] * 4 + 0x1078d0098))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_22;
    in_ZR = (uint)extraout_x8_22 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2224();
    }
    else {
      func_0x0001078d2224();
    }
    func_0x0001078d2710();
    uStack_2b1 = extraout_w8_01;
  }
  apcStack_b0[0] = "flex-wrap";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_2b2 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d012c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99d0)[extraout_x8_23] * 4 + 0x1078d0130))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_23;
    in_ZR = (uint)extraout_x8_23 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2248();
    }
    else {
      func_0x0001078d2248();
    }
    func_0x0001078d2710();
    uStack_2b2 = extraout_w8_02;
  }
  apcStack_b0[0] = "overflow";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_2b3 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d01c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99d8)[extraout_x8_24] * 4 + 0x1078d01c8))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_24;
    in_ZR = (uint)extraout_x8_24 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d226c();
    }
    else {
      func_0x0001078d226c();
    }
    func_0x0001078d2710();
    uStack_2b3 = extraout_w8_03;
  }
  apcStack_b0[0] = "display";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_2b4 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99e0)[extraout_x8_25] * 4 + 0x1078d0260))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_25;
    in_ZR = (uint)extraout_x8_25 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2290();
    }
    else {
      func_0x0001078d2290();
    }
    func_0x0001078d2710();
    uStack_2b4 = extraout_w8_04;
  }
  apcStack_b0[0] = "flex";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d02f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99e8)[extraout_x8_26] * 4 + 0x1078d02f8))();
      return param_6;
    }
    if ((int)extraout_x8_26 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_2c0 = SUB84(pmVar4,0);
  uStack_2bc = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "flex-grow";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = &MACH_HEADER;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99f0)[extraout_x8_27] * 4 + 0x1078d039c))();
      return param_6;
    }
    if ((int)extraout_x8_27 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = &MACH_HEADER;
    }
  }
  uStack_2c8 = SUB84(pmVar4,0);
  uStack_2c4 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "flex-shrink";
  func_0x0001078d2128();
  pmVar4 = (mach_header *)0x13f800000;
  if (param_6 != (mach_header *)0x0) {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded99f8)[extraout_x8_28] * 4 + 0x1078d044c))();
      return param_6;
    }
    if ((int)extraout_x8_28 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x13f800000;
    }
  }
  uStack_2d0 = SUB84(pmVar4,0);
  uStack_2cc = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "flex-basis";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d04e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a00)[extraout_x8_29] * 4 + 0x1078d04e8))();
      return param_6;
    }
    if ((int)extraout_x8_29 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_2d8 = SUB84(pmVar4,0);
  uStack_2d4 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "width";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a08)[extraout_x8_30] * 4 + 0x1078d058c))();
      return param_6;
    }
    if ((int)extraout_x8_30 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_2e0 = SUB84(pmVar4,0);
  uStack_2dc = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "height";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d062c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a10)[extraout_x8_31] * 4 + 0x1078d0630))();
      return param_6;
    }
    if ((int)extraout_x8_31 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_2e8 = SUB84(pmVar4,0);
  uStack_2e4 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "min-width";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a18)[extraout_x8_32] * 4 + 0x1078d06d4))();
      return param_6;
    }
    if ((int)extraout_x8_32 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_2f0 = SUB84(pmVar4,0);
  uStack_2ec = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "min-height";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a20)[extraout_x8_33] * 4 + 0x1078d0778))();
      return param_6;
    }
    if ((int)extraout_x8_33 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_2f8 = SUB84(pmVar4,0);
  uStack_2f4 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "max-width";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a28)[extraout_x8_34] * 4 + 0x1078d081c))();
      return param_6;
    }
    if ((int)extraout_x8_34 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_300 = SUB84(pmVar4,0);
  uStack_2fc = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "max-height";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d08bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a30)[extraout_x8_35] * 4 + 0x1078d08c0))();
      return param_6;
    }
    if ((int)extraout_x8_35 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_308 = SUB84(pmVar4,0);
  uStack_304 = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "aspect-ratio";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar4 = (mach_header *)0x0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a38)[extraout_x8_36] * 4 + 0x1078d0964))();
      return param_6;
    }
    if ((int)extraout_x8_36 == 8) {
      func_0x0001078d20c4();
    }
    else {
      func_0x0001078d20c4();
    }
    in_ZR = ((ulong)pmVar1 & 1) == 0;
    in_CY = 0;
    pmVar4 = param_6;
    if ((bool)in_ZR) {
      pmVar4 = (mach_header *)0x0;
    }
  }
  uStack_310 = SUB84(pmVar4,0);
  uStack_30c = (undefined1)((ulong)pmVar4 >> 0x20);
  apcStack_b0[0] = "image";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    func_0x0001077e8c44(amStack_170);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a40)[extraout_x8_37] * 4 + 0x1078d0a08))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_37;
    in_ZR = (uint)extraout_x8_37 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20d0();
      func_0x000107777548();
      func_0x0001078d2548();
      func_0x0001078d2144();
    }
    else {
      func_0x0001078d20d0();
      func_0x000107777548();
      func_0x0001078d2548();
      func_0x0001078d2144();
    }
    func_0x00010726b164(&uStack_110);
    param_6 = (mach_header *)apcStack_b0;
    func_0x00010726b144();
  }
  apcStack_b0[0] = "encryption-key";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    func_0x0001077e8d1c(auStack_1a8);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a48)[extraout_x8_38] * 4 + 0x1078d0b20))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_38;
    in_ZR = (uint)extraout_x8_38 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2060();
    }
    else {
      func_0x0001078d2060();
    }
    func_0x0001077e8d1c(&uStack_110);
    func_0x0001078d28ec(auStack_1a8);
    func_0x000104c2f714(&uStack_110);
    param_6 = (mach_header *)apcStack_b0;
    func_0x00010724b3d8();
  }
  apcStack_b0[0] = "encryption-iv";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    func_0x0001077e8dc8(auStack_1e0);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a50)[extraout_x8_39] * 4 + 0x1078d0bdc))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_39;
    in_ZR = (uint)extraout_x8_39 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d2060();
    }
    else {
      func_0x0001078d2060();
    }
    func_0x0001077e8dc8(&uStack_110);
    func_0x0001078d28ec(auStack_1e0);
    func_0x000104c2f714(&uStack_110);
    param_6 = (mach_header *)apcStack_b0;
    func_0x00010724b3d8();
  }
  apcStack_b0[0] = "mirror-x";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_311 = false;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a58)[extraout_x8_40] * 4 + 0x1078d0c98))();
      return param_6;
    }
    if ((int)extraout_x8_40 == 8) {
      func_0x0001078d21e4();
    }
    else {
      func_0x0001078d21e4();
    }
    in_ZR = (((uint)param_6 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_311 = in_ZR;
  }
  apcStack_b0[0] = "mirror-y";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_312 = false;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a60)[extraout_x8_41] * 4 + 0x1078d0d3c))();
      return param_6;
    }
    if ((int)extraout_x8_41 == 8) {
      func_0x0001078d21e4();
    }
    else {
      func_0x0001078d21e4();
    }
    in_ZR = (((uint)param_6 ^ 0xffffffff) & 0x101) == 0;
    in_CY = 0;
    uStack_312 = in_ZR;
  }
  apcStack_b0[0] = "tint-color";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    param_5 = 0;
    dVar7 = 0x3f800000;
    uVar11 = 0x3f800000;
    param_4 = 0x3f800000;
  }
  else {
    uVar6 = pmVar1[5].magic;
    in_CY = 6 < uVar6;
    in_ZR = uVar6 == 7;
    switch(uVar6) {
    case 0:
      func_0x0001078d1fe8();
      break;
    case 1:
      func_0x0001078d1fe8();
      break;
    case 2:
      func_0x0001078d1fe8();
      break;
    case 3:
      func_0x0001078d1fe8();
      break;
    case 4:
      func_0x0001078d2acc();
      goto LAB_1078d0e5c;
    case 5:
      func_0x0001078d1fe8();
      break;
    case 6:
      func_0x0001078d1fe8();
      break;
    case 7:
      func_0x0001078d1fe8();
      break;
    default:
      in_CY = 7 < uVar6;
      in_ZR = uVar6 == 8;
      if ((bool)in_ZR) {
        func_0x0001078d1fe8();
      }
      else {
        func_0x0001078d1fe8();
      }
    }
    dVar7 = 0x3f800000;
    uStack_108 = 0x3f800000;
    uStack_110 = 0x3f8000003f800000;
    func_0x0001078d24c0();
  }
LAB_1078d0e5c:
  apcStack_b0[0] = "fitting-mode";
  dStack_324 = dVar7;
  uStack_320 = uVar11;
  uStack_31c = param_4;
  uStack_318 = param_5;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    uStack_325 = 3;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a70)[extraout_x8_42] * 4 + 0x1078d0ea0))();
      return param_6;
    }
    if ((int)extraout_x8_42 == 8) {
      func_0x0001078d2284();
    }
    else {
      func_0x0001078d2284();
    }
    in_ZR = ((ulong)param_6 & 0x100) == 0;
    in_CY = 0;
    uStack_325 = 3;
    if (!(bool)in_ZR) {
      uStack_325 = (char)param_6;
    }
  }
  apcStack_b0[0] = "text-field";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    func_0x0001077e8f74(&mStack_358.flags);
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d0f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a78)[extraout_x8_43] * 4 + 0x1078d0f40))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_43;
    in_ZR = (uint)extraout_x8_43 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20d0();
      func_0x0001074040e8();
      func_0x0001078d2540();
      func_0x0001078d2134();
    }
    else {
      func_0x0001078d20d0();
      func_0x0001074040e8();
      func_0x0001078d2540();
      func_0x0001078d2134();
    }
    func_0x00010726afc0(&uStack_110);
    param_6 = (mach_header *)apcStack_b0;
    func_0x0001074030e4();
  }
  apcStack_b0[0] = "max-num-lines";
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    mStack_358.sizeofcmds = 0x3f800000;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d1054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a80)[extraout_x8_44] * 4 + 0x1078d1058))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_44;
    in_ZR = (uint)extraout_x8_44 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    mStack_358.sizeofcmds = 0x3f800000;
    if (!(bool)in_ZR) {
      mStack_358.sizeofcmds = dVar7;
    }
  }
  apcStack_b0[0] = "line-height-multiplier";
  dVar7 = mStack_358.sizeofcmds;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    mStack_358.ncmds = 0x3f800000;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d10f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a88)[extraout_x8_45] * 4 + 0x1078d10f8))();
      return param_6;
    }
    in_CY = 7 < (uint)extraout_x8_45;
    in_ZR = (uint)extraout_x8_45 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    mStack_358.ncmds = 0x3f800000;
    if (!(bool)in_ZR) {
      mStack_358.ncmds = dVar7;
    }
  }
  apcStack_b0[0] = "points";
  dVar7 = mStack_358.ncmds;
  func_0x0001078d2128();
  if (param_6 == (mach_header *)0x0) {
    pmVar1 = &mStack_358;
    func_0x0001072f6da0();
  }
  else {
    func_0x0001078d2858();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a90)[extraout_x8_46] * 4 + 0x1078d1198))();
      return param_6;
    }
    func_0x0001078d20d0();
    func_0x0001077754c8();
    func_0x0001078d2510();
    func_0x0001078d20ec();
    func_0x0001072dbd40(&uStack_110);
    pmVar1 = (mach_header *)apcStack_b0;
    func_0x0001072dbe34();
  }
  apcStack_b0[0] = "shape-blur";
  func_0x0001078d2128();
  if (pmVar1 == (mach_header *)0x0) {
    dVar8 = 0;
  }
  else {
    func_0x0001078d2440();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078d12a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ded9a99)[extraout_x8_47] * 4 + 0x1078d12ac))();
      return pmVar1;
    }
    in_ZR = (int)extraout_x8_47 == 8;
    if ((bool)in_ZR) {
      func_0x0001078d20e0();
    }
    else {
      func_0x0001078d20e0();
    }
    func_0x0001078d23e4();
    dVar8 = 0;
    if (!(bool)in_ZR) {
      dVar8 = dVar7;
    }
  }
  uStack_110 = CONCAT44(uStack_110._4_4_,dVar8);
  puVar2 = &uStack_1e1;
  puVar3 = (undefined8 *)&uStack_1f4;
  func_0x0001077e770c(param_1,puVar2,puVar3,&uStack_1f8,&uStack_1fc,&uStack_20c,&uStack_210,
                      &uStack_218,&uStack_21c,&uStack_22c,&uStack_22d,&uStack_22e,&uStack_22f,
                      &uStack_230,&uStack_231,&uStack_232,&uStack_250,&uStack_270,&uStack_290,
                      &uStack_2b0,&uStack_2b1,&uStack_2b2,&uStack_2b3,&uStack_2b4,&uStack_2c0,
                      &uStack_2c8,&uStack_2d0,&uStack_2d8,&uStack_2e0,&uStack_2e8,&uStack_2f0,
                      &uStack_2f8,&uStack_300,&uStack_308,&uStack_310,amStack_170,auStack_1a8,
                      auStack_1e0,&uStack_311,&uStack_312,&dStack_324,&uStack_325,&mStack_358.flags,
                      &mStack_358.sizeofcmds,&mStack_358.ncmds,&mStack_358,&uStack_110);
  func_0x0001072dbd40(&mStack_358);
  func_0x00010726afc0(&mStack_358.flags);
  func_0x000104c2f714(auStack_1e0);
  func_0x000104c2f714(auStack_1a8);
  pmVar1 = amStack_170;
  func_0x00010726b164();
  func_0x0001078d208c(uStack_48);
  if ((bool)in_ZR) {
    return pmVar1;
  }
  ___stack_chk_fail();
  func_0x00010726afc0(&uStack_110);
  func_0x0001074030e4((mach_header *)apcStack_b0);
  func_0x000104c2f714(auStack_1e0);
  func_0x000104c2f714(auStack_1a8);
  pmVar1 = amStack_170;
  func_0x00010726b164();
  func_0x0001078d2494();
  if (puVar2[0x18] == '\x01') {
    pmVar1->magic = 0;
    pmVar1->cputype = 0;
    pmVar1->cpusubtype = 0;
    pmVar1->filetype = 0;
    pmVar1->ncmds = 0;
    pmVar1->sizeofcmds = 0;
    func_0x000107278820();
    return pmVar1;
  }
  uVar10 = puVar3[1];
  uVar5 = *puVar3;
  pmVar1->cpusubtype = (int)uVar10;
  pmVar1->filetype = (int)((ulong)uVar10 >> 0x20);
  pmVar1->magic = (int)uVar5;
  pmVar1->cputype = (int)((ulong)uVar5 >> 0x20);
  uVar5 = puVar3[2];
  pmVar1->ncmds = (int)uVar5;
  pmVar1->sizeofcmds = (int)((ulong)uVar5 >> 0x20);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  return pmVar1;
}



/* Entry: 1078d19d4; end: 1078d19fb;  */

void FUN_1078d19d4(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d22e0();
  if ((bool)in_ZR) {
    func_0x0001075603d8();
  }
  return;
}



/* Entry: 1078d1bc8; end: 1078d1c53;  */

void FUN_1078d1bc8(void)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001078d28a0();
  func_0x0001078d1bf8();
  lVar1 = *unaff_x19;
  *unaff_x19 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078d1eb0; end: 1078d1ebb;  */

void FUN_1078d1eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8af8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d30ec; end: 1078d30ff;  */

void FUN_1078d30ec(long param_1,ulong param_2)

{
  long unaff_x23;
  
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    func_0x0001078d4afc();
    func_0x0001078d3ac4();
    func_0x0001078d4a24();
    func_0x0001078d4b6c();
    func_0x0001078d3fc8();
    if (unaff_x23 != 0) {
      func_0x0001078d4b20();
      func_0x0001078d4b14();
    }
    func_0x0001078d4a6c();
    return;
  }
  return;
}



/* Entry: 1078d3950; end: 1078d3987;  */

undefined8 * FUN_1078d3950(undefined8 *param_1)

{
  *param_1 = 0;
  func_0x0001078d3988(param_1 + 1);
  return param_1;
}



/* Entry: 1078d3b40; end: 1078d3b6f;  */

void FUN_1078d3b40(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xba2e8ba2e8ba2f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  FUN_10772e264();
  func_0x0001078d4ac4();
  func_0x0001078d3c24();
  _bzero();
  FUN_1078d3950(param_1);
  func_0x0001078d4aa4();
  func_0x0001078d4abc();
  return;
}



/* Entry: 1078d3d24; end: 1078d3d63;  */

void FUN_1078d3d24(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[8] = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x0001078d4b54();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 1078d3f18; end: 1078d3f33;  */

void FUN_1078d3f18(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1078d41e0; end: 1078d4207;  */

void FUN_1078d41e0(undefined8 *param_1)

{
  func_0x0001078d3bd8(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 1078d448c; end: 1078d44b7;  */

void FUN_1078d448c(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d4af0();
  if (!(bool)in_ZR) {
    func_0x0001078d49f8();
    func_0x0001078d39e8();
  }
  return;
}


