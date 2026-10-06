/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8cb644; end: 10b8cb823;  */

void FUN_10b8cb644(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long *plVar1;
  
  if ((((uint)param_1[0x39] >> 0x11 & 1) != 0) && (param_1[0x3b] != 0)) {
    if (((uint)param_1[0x39] >> 0x1e & 1) == 0) {
      plVar1 = param_1;
      func_0x00010b8cfc8c();
      (**(code **)(*plVar1 + 0x58))();
    }
    if ((param_5 != 0) && ((long *)param_1[0x3d] != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b8cb6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[0x3d] + 0x20))
                (*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc));
      return;
    }
  }
  return;
}



/* Entry: 10b8cb824; end: 10b8cb8df;  */

void FUN_10b8cb824(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  
  if (param_4 != 0) {
    func_0x00010b8c92b4(param_1);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = (undefined8 *)param_3[1];
    for (param_3 = (undefined8 *)*param_3; in_ZR = param_3 == puVar1, !(bool)in_ZR;
        param_3 = param_3 + 1) {
      (**(code **)(*(long *)(param_1 + 0x90) + 0x40))(param_1 + 0x90,param_2,*param_3);
    }
    (**(code **)(*(long *)(param_1 + 0x90) + 0x48))(param_1 + 0x90,param_2);
  }
  func_0x00010b8cff08();
  func_0x00010b8d007c();
  while (func_0x00010b8d0070(), !(bool)in_ZR) {
    func_0x00010b8cf90c();
    FUN_10b8cb824();
  }
  return;
}



/* Entry: 10b8cb8e0; end: 10b8cb91b;  */

void FUN_10b8cb8e0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b8cfcb4();
  if (!(bool)in_ZR) {
    func_0x00010b8d00c8();
    uVar1 = 0;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b8cff40();
        uVar1 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar1;
    func_0x00010b8a2000();
  }
  return;
}



/* Entry: 10b8cb91c; end: 10b8cb977;  */

void FUN_10b8cb91c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  func_0x00010b8cf878();
  uVar1 = *(long *)(param_1 + 0x1f0) == param_3;
  if ((bool)uVar1) {
    func_0x00010b8cf998();
    FUN_10b8c63b0();
  }
  func_0x00010b8cfed8();
  func_0x00010b8cfb8c();
  while (func_0x00010b8cfb80(), !(bool)uVar1) {
    func_0x00010b8cf90c();
    func_0x00010b8cf9e4();
    FUN_10b8cb91c();
    func_0x00010b8cfd2c();
  }
  return;
}



/* Entry: 10b8cb978; end: 10b8cb9d3;  */

/* WARNING: Possible PIC construction at 0x00010b8cb998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8cb99c) */
/* WARNING: Removing unreachable block (ram,0x00010b8cb9a4) */
/* WARNING: Removing unreachable block (ram,0x00010b8cb9ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8cb9bc) */
/* WARNING: Removing unreachable block (ram,0x00010b8cb9d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8cb9c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8cfecc) */

undefined8 * FUN_10b8cb978(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b8cf80c();
  puVar1 = (undefined8 *)(param_1 + 0x200);
  if (puVar1 != param_2) {
    uVar3 = *param_2;
    *param_2 = 0;
    uVar2 = *puVar1;
    *puVar1 = uVar3;
    func_0x000104bda3ac(uVar2);
  }
  return puVar1;
}



/* Entry: 10b8cb9d4; end: 10b8cb9db;  */

undefined8 * FUN_10b8cb9d4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x208);
  if (puVar1 != param_2) {
    uVar3 = *param_2;
    *param_2 = 0;
    uVar2 = *puVar1;
    *puVar1 = uVar3;
    func_0x000104bda3ac(uVar2);
  }
  return puVar1;
}



/* Entry: 10b8cb9dc; end: 10b8cba13;  */

/* WARNING: Removing unreachable block (ram,0x00010b8c6730) */

void FUN_10b8cb9dc(long *param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long alStack_60 [2];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x000104be7934(param_1 + 0x42);
  if (param_1[0x3b] == 0) {
    return;
  }
  plVar2 = alStack_60;
  func_0x00010b8cf80c();
  uStack_28 = extraout_x8;
  if (param_1[0x42] != 0) {
    FUN_10b8c649c(alStack_60);
    FUN_10b9a8f04(auStack_50,alStack_60);
    func_0x00010b8d00e0(auStack_40);
    func_0x0001080ecf98();
    func_0x000104bda914(auStack_40);
    func_0x00010b8cfeb8();
    FUN_10b9a8d98();
    param_1 = plVar2;
  }
  func_0x00010b8cf7e8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar1 = (uint)param_1[0x39];
    if ((uVar1 >> 7 & 1) != 0) {
      param_1[0x39] = param_1[0x39] & 0xffffffffffffff7f;
      if (param_1[0x3b] == 0) {
        if ((uVar1 >> 6 & 1) != 0) {
          plVar2 = param_1;
          FUN_10b8c6828();
          while (plVar2 = (long *)((long)plVar2 + -1), plVar2 != (long *)0xffffffffffffffff) {
            FUN_10b8c685c(param_1,plVar2);
            FUN_10b8c66c4();
          }
        }
      }
      else {
        plVar2 = param_1;
        FUN_10b8c5ea8();
        func_0x00010b8cfbe4();
        FUN_10b8c6798();
        func_0x00010b8cfe20();
        (**(code **)(*plVar2 + 0x48))();
      }
      param_1[0x33] = 0;
    }
    return;
  }
  return;
}



/* Entry: 10b8cba14; end: 10b8cba1b;  */

undefined8 * FUN_10b8cba14(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x218);
  if (puVar1 != param_2) {
    uVar3 = *param_2;
    *param_2 = 0;
    uVar2 = *puVar1;
    *puVar1 = uVar3;
    func_0x000104bda3ac(uVar2);
  }
  return puVar1;
}



/* Entry: 10b8cba1c; end: 10b8cba7b;  */

long * FUN_10b8cba1c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x00010b8cf9f0();
  FUN_10b8c9d5c();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 == *param_3) {
    return plVar1;
  }
  func_0x000104be7934(plVar1,param_3);
  func_0x00010b8cfac8();
  FUN_10b8c8cc0();
  func_0x00010b8c8e0c();
  plVar1 = (long *)0x0;
  if (*(byte **)(unaff_x19 + 0x18) != (byte *)0x0) {
    if ((**(byte **)(unaff_x19 + 0x18) >> 2 & 1) != 0) {
      return (long *)0x0;
    }
    func_0x00010b95a878();
    plVar1 = (long *)0x1;
  }
  return plVar1;
}



/* Entry: 10b8cba7c; end: 10b8cbbd3;  */

undefined8 * FUN_10b8cba7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  
  func_0x00010b8cfa3c();
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if (puVar1 != unaff_x19) {
    uVar3 = *unaff_x19;
    *unaff_x19 = 0;
    uVar2 = *puVar1;
    *puVar1 = uVar3;
    func_0x000104bda3ac(uVar2);
  }
  return puVar1;
}



/* Entry: 10b8cbbd4; end: 10b8cbcaf;  */

void FUN_10b8cbbd4(int param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x21;
  
  func_0x00010b8cf878();
  param_1 = param_1 + 0x48;
  func_0x00010b8ba880();
  if (param_1 == 0) {
    func_0x00010b8cfed8();
    func_0x00010b8cfb8c();
    while (func_0x00010b8cfb80(), !(bool)in_ZR) {
      func_0x00010b8cf90c();
      func_0x00010b8cf9e4();
      FUN_10b8cbbd4();
      func_0x00010b8cfd2c();
    }
  }
  else {
    func_0x0001080da434();
    func_0x00010b8cbb98();
    func_0x0001080d289c(unaff_x21);
  }
  return;
}



/* Entry: 10b8cbcb0; end: 10b8cbd13;  */

void FUN_10b8cbcb0(long *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[0x39];
  if (param_3 != ((uint)(uVar1 >> 0x10) & 1)) {
    if (param_3 == 0) {
      param_1[0x39] = uVar1 & 0xfffffffffffeffff;
      if (param_1[0x3b] != 0) {
        func_0x00010b8cfc8c();
                    /* WARNING: Could not recover jumptable at 0x00010b8cbd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x78))();
        return;
      }
    }
    else {
      param_1[0x39] = uVar1 | 0x10000;
    }
  }
  return;
}



/* Entry: 10b8cbd14; end: 10b8cbd2b;  */

void FUN_10b8cbd14(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = 0x80000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xfffffffffff7ffff | uVar1;
  return;
}



/* Entry: 10b8cbd2c; end: 10b8cbe03;  */

void FUN_10b8cbd2c(undefined8 param_1,undefined8 param_2)

{
  code *pcStack_28;
  
  FUN_10b8ce730();
  pcStack_28 = FUN_10b8ce7d8;
  func_0x00010b8ce7b8(param_1,param_2,&pcStack_28);
  return;
}



/* Entry: 10b8cbe04; end: 10b8cbf23;  */

void FUN_10b8cbe04(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,int *param_7)

{
  uint uVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_7 = *param_7 + 1;
  lVar2 = param_1 + 0x48;
  func_0x00010b8ba800(lVar2,param_5,param_6);
  if ((int)lVar2 != 0) {
    FUN_10b8c91c0(param_1);
  }
  if (((param_4 & 1) == 0) && (((uint)*(ulong *)(param_1 + 0x1c8) >> 0x14 & 1) == 0)) {
    uVar1 = (uint)(*(ulong *)(param_1 + 0x1c8) >> 0x15) & 1;
  }
  else {
    param_7[1] = param_7[1] + 1;
    lStack_68 = param_1 + 0x90;
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    lStack_70 = param_2;
    uStack_58 = param_3;
    FUN_10b8ba42c(param_1 + 0x48,&lStack_70);
    uVar1 = 1;
  }
  FUN_10b8b4aac(param_1 + 0x90);
  if (uVar1 != 0) {
    func_0x00010b8cfb2c();
    lStack_68 = 0;
    lStack_70 = param_1;
    func_0x00010b8cf970();
    lVar2 = 0;
    while (param_2 != lVar2) {
      func_0x00010b8cf90c();
      FUN_10b8cbe04();
      lVar2 = lVar2 + 1;
      lStack_68 = lVar2;
    }
  }
  *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xffffffffffcfffff;
  return;
}



/* Entry: 10b8cbf24; end: 10b8cbfb7;  */

void FUN_10b8cbf24(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [96];
  undefined8 uStack_38;
  
  func_0x00010b8cf878();
  func_0x00010b8cf80c();
  uStack_38 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b8cfa84();
  if (param_1 != 0) {
    FUN_10b8cbfb8(auStack_98,&UNK_10f7cb64c);
  }
  uStack_a0 = 0;
  FUN_10b8c7c30(&uStack_a8);
  func_0x00010b8cf9e4(uStack_a8);
  FUN_10b8cbe04();
  func_0x00010b8cfc30();
  func_0x00010b8cfea8();
  func_0x00010b8cf7e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8cf894();
  func_0x00010b8cf8b4();
  func_0x00010b8cd738();
  return;
}



/* Entry: 10b8cbfb8; end: 10b8cbfdb;  */

void FUN_10b8cbfb8(void)

{
  func_0x00010b8cf894();
  func_0x00010b8cf8b4();
  func_0x00010b8cd738();
  return;
}



/* Entry: 10b8cbfdc; end: 10b8cc04b;  */

void FUN_10b8cbfdc(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint unaff_w19;
  long unaff_x20;
  
  func_0x00010b8cfd20();
  uVar2 = 2;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  func_0x00010b8c8da8();
  if ((*(byte *)(param_1 + 0x28) >> 2 & 3) != uVar2) {
    lVar1 = unaff_x20;
    func_0x00010b8c8da8();
    *(uint *)(lVar1 + 0x28) =
         *(uint *)(lVar1 + 0x28) & 0xfffffff0 | *(uint *)(lVar1 + 0x28) & 3 | uVar2 << 2;
    FUN_10b8c9330();
    param_1 = unaff_x20;
  }
  func_0x00010b8cfc74();
  if (unaff_w19 != *(byte *)(param_1 + 0x48)) {
    *(char *)(param_1 + 0x48) = (char)unaff_w19;
    func_0x00010b8cfd50();
  }
  return;
}



/* Entry: 10b8cc04c; end: 10b8cc07b;  */

void FUN_10b8cc04c(long param_1,int param_2)

{
  func_0x00010b8c7e2c();
  if (*(int *)(param_1 + 0x40) != param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    func_0x00010b8cfd50();
  }
  return;
}



/* Entry: 10b8cc07c; end: 10b8cc0e3;  */

void FUN_10b8cc07c(float param_1,long param_2)

{
  func_0x00010b8c7e2c();
  if (*(float *)(param_2 + 0x38) != param_1) {
    *(float *)(param_2 + 0x38) = param_1;
    func_0x00010b8cfd50();
  }
  return;
}



/* Entry: 10b8cc0e4; end: 10b8cc0eb;  */

void FUN_10b8cc0e4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1b0) = param_2;
  return;
}



/* Entry: 10b8cc0ec; end: 10b8cc1db;  */

void FUN_10b8cc0ec(undefined ********param_1,undefined ********param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  int iVar9;
  int iVar10;
  undefined8 extraout_x8;
  undefined *******pppppppuVar11;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  undefined ********unaff_x19;
  undefined ********unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 unaff_s8;
  undefined1 auStack_139 [57];
  undefined ******ppppppuStack_c8;
  undefined ******ppppppuStack_c0;
  undefined *******pppppppuStack_b8;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *******pppppppuStack_58;
  undefined ******ppppppuStack_50;
  undefined *******pppppppuStack_48;
  undefined8 uStack_28;
  
  func_0x00010b8cf80c();
  iVar10 = (int)param_3;
  iVar2 = *(int *)((long)param_1 + 0x1b4);
  iVar9 = (int)param_2;
  *(int *)((long)param_1 + 0x1b4) = iVar9;
  uVar5 = iVar9 != 1 && iVar2 == 1;
  uStack_28 = extraout_x8_01;
  if ((bool)uVar5) {
    if (param_1[0x3a] != (undefined *******)0x0) {
      pppppppuStack_58 = (undefined *******)0x10b8cd780;
      ppppppuStack_50 = (undefined ******)&PTR_FUN_110d71dc0;
      param_2 = &pppppppuStack_58;
      pppppppuStack_48 = (undefined *******)param_1;
      FUN_10b8d2f54(param_1[0x3a]);
      func_0x00010b8d0114();
      param_1 = (undefined ********)&ppppppuStack_50;
      (*extraout_x8_02)();
    }
LAB_10b8cc190:
    func_0x00010b8cf7e8(uStack_28);
    if ((bool)uVar5) {
      return;
    }
  }
  else {
    uVar5 = iVar9 != 1 || iVar2 == 1;
    if ((iVar9 != 1 || iVar2 == 1) || (param_1[0x3a] == (undefined *******)0x0)) goto LAB_10b8cc190;
    do {
      ppppppppuVar8 = param_1;
      FUN_10b8c6b24(&pppppppuStack_58);
      pppppppuVar11 = pppppppuStack_58;
      func_0x00010b8cf8c8();
      iVar10 = (int)param_3;
      param_1 = ppppppppuVar8;
      if ((undefined ********)pppppppuVar11 == (undefined ********)0x0) goto LAB_10b8cc190;
      param_1 = (undefined ********)pppppppuVar11;
    } while ((*(byte *)((long)pppppppuVar11 + 0x1cb) & 1) == 0);
    param_1 = ppppppppuVar8;
    if ((undefined *******)pppppppuVar11[0x30] == (undefined *******)0x0) goto LAB_10b8cc190;
    uVar6 = *(char *)((long)pppppppuVar11[0x30] + 0x4c) == '\x01';
    uVar5 = 0;
    if (!(bool)uVar6) goto LAB_10b8cc190;
    func_0x00010b8cf7e8(uStack_28);
    param_1 = ppppppppuVar8;
    if ((bool)uVar6) {
      func_0x00010b8d00d4();
      puVar4 = (undefined1 *)register0x00000008;
      param_1 = unaff_x19;
      goto code_r0x00010b8cb2cc;
    }
  }
  uVar5 = 0;
  ___stack_chk_fail();
  puVar4 = &stack0xffffffffffffff30;
  pcStack_68 = FUN_10b8cc1dc;
  unaff_x29 = &puStack_70;
  ppppppppuVar8 = param_1;
  ppppppppuVar7 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010b8cf80c();
  uStack_98 = extraout_x8_03;
  func_0x00010b8c7e2c();
  bVar3 = *(byte *)((long)ppppppppuVar8 + 0x4c);
  *(char *)((long)ppppppppuVar8 + 0x4c) = (char)param_2;
  uVar1 = bVar3 ^ 1;
  unaff_x21 = (undefined1 *)(ulong)uVar1;
  if (((uint)param_2 != 0) && ((uVar1 & 1) != 0)) {
    func_0x00010b8d00d4();
    FUN_10b8cb2cc();
  }
  unaff_x20 = param_2;
  if (((((uint)param_2 | uVar1) & 1) == 0) &&
     (ppppppppuVar8 = (undefined ********)0x0, param_1[0x3a] != (undefined *******)0x0)) {
    unaff_x20 = (undefined ********)&ppppppuStack_c8;
    ppppppuStack_c8 = (undefined ******)FUN_10b8cd7ec;
    ppppppuStack_c0 = (undefined ******)&PTR_DAT_110d71e60;
    ppppppppuVar7 = (undefined ********)&ppppppuStack_c8;
    pppppppuStack_b8 = (undefined *******)param_1;
    FUN_10b8d2f54();
    func_0x00010b8d0114();
    ppppppppuVar8 = (undefined ********)&ppppppuStack_c0;
    (*extraout_x8_04)();
  }
  param_2 = ppppppppuVar7;
  func_0x00010b8cf7e8(uStack_98);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8cf850();
  *(undefined4 *)(ppppppppuVar8 + 10) = unaff_s8;
  uVar6 = *(char *)((long)ppppppppuVar8 + 0x4c) == '\x01';
  if (!(bool)uVar6) {
    return;
  }
  func_0x00010b8d00e0();
  unaff_x30 = FUN_10b8cc280;
code_r0x00010b8cb2cc:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar4 + -0x28) = unaff_x21;
  *(undefined *********)(puVar4 + -0x20) = unaff_x20;
  *(undefined *********)(puVar4 + -0x18) = param_1;
  *(undefined1 ***)(puVar4 + -0x10) = unaff_x29;
  *(code **)(puVar4 + -8) = unaff_x30;
  func_0x00010b8cf80c();
  *(undefined8 *)(puVar4 + -0x38) = extraout_x8;
  puVar4[-0x69] = (char)param_2;
  pppppppuVar11 = ppppppppuVar8[0x30];
  if (((pppppppuVar11 != (undefined *******)0x0) &&
      (uVar6 = *(char *)((long)pppppppuVar11 + 0x4c) == '\x01', (bool)uVar6)) &&
     (param_1 = (undefined ********)ppppppppuVar8[0x3a], unaff_x20 = ppppppppuVar8,
     param_1 != (undefined ********)0x0)) {
    uVar13 = *(undefined4 *)((long)pppppppuVar11 + 4);
    uVar12 = *(undefined4 *)((long)pppppppuVar11 + 0x54);
    *(undefined4 *)(puVar4 + -0x74) = *(undefined4 *)(pppppppuVar11 + 10);
    *(undefined4 *)(puVar4 + -0x70) = uVar13;
    *(undefined4 *)(puVar4 + -0x78) = uVar12;
    unaff_x21 = puVar4 + -0x68;
    *(code **)(puVar4 + -0x68) = FUN_10b8cd02c;
    *(undefined ***)(puVar4 + -0x60) = &PTR_FUN_110d71da0;
    ppppppppuVar7 = ppppppppuVar8;
    func_0x00010b8cfc18();
    *ppppppppuVar7 = (undefined *******)ppppppppuVar8;
    ppppppppuVar7[1] = (undefined *******)(puVar4 + -0x69);
    ppppppppuVar7[2] = (undefined *******)(puVar4 + -0x74);
    ppppppppuVar7[3] = (undefined *******)(puVar4 + -0x70);
    ppppppppuVar7[4] = (undefined *******)(puVar4 + -0x78);
    *(undefined *********)(puVar4 + -0x58) = ppppppppuVar7;
    param_2 = (undefined ********)(puVar4 + -0x68);
    FUN_10b8d2f54(param_1);
    ppppppppuVar8 = (undefined ********)(puVar4 + -0x60);
    (*(code *)**(undefined8 **)(puVar4 + -0x60))();
  }
  func_0x00010b8cf7e8(*(undefined8 *)(puVar4 + -0x38));
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x88) = FUN_10b8cb394;
  *(undefined *********)(puVar4 + -0x98) = param_2;
  *(int *)(puVar4 + -0x9c) = iVar10;
  if (ppppppppuVar8 != (undefined ********)0x0) {
    func_0x00010b8d0034();
    (*extraout_x8_00)();
    return;
  }
  func_0x000108141b38();
  if ((int)param_2 != 0) {
    *(undefined8 *)(puVar4 + -0xd0) = unaff_x22;
    *(undefined1 **)(puVar4 + -200) = unaff_x21;
    *(undefined *********)(puVar4 + -0xc0) = unaff_x20;
    *(undefined *********)(puVar4 + -0xb8) = param_1;
    *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x90;
    *(code **)(puVar4 + -0xa8) = FUN_10b8cb3c4;
    uVar5 = iVar10 == 1;
    if (0 < iVar10) {
      *(undefined *********)(puVar4 + -0xe0) = ppppppppuVar8;
      *(undefined8 *)(puVar4 + -0xd8) = 0;
      FUN_10b8c71d4();
      func_0x00010b8cfb8c();
      while (func_0x00010b8cfb80(), !(bool)uVar5) {
        func_0x00010b8cf90c();
        uVar5 = *(int *)((long)ppppppppuVar8 + 0x1ac) == (int)param_2;
        if ((bool)uVar5) {
          return;
        }
        FUN_10b8cb3c4();
        if (ppppppppuVar8 != (undefined ********)0x0) {
          return;
        }
        func_0x00010b8cfd2c();
      }
    }
  }
  return;
}



/* Entry: 10b8cc1dc; end: 10b8cc27f;  */

void FUN_10b8cc1dc(undefined ***param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  uint uVar6;
  undefined8 extraout_x8;
  undefined **ppuVar7;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined **ppuVar8;
  undefined4 unaff_s8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_d9;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  undefined8 uStack_38;
  
  pppuVar5 = param_1;
  uVar6 = param_2;
  func_0x00010b8cf80c();
  uStack_38 = extraout_x8_01;
  func_0x00010b8c7e2c();
  bVar2 = *(byte *)((long)pppuVar5 + 0x4c);
  *(char *)((long)pppuVar5 + 0x4c) = (char)param_2;
  uVar1 = bVar2 ^ 1;
  if ((param_2 != 0) && ((uVar1 & 1) != 0)) {
    func_0x00010b8d00d4();
    FUN_10b8cb2cc();
  }
  if ((((param_2 | uVar1) & 1) == 0) &&
     (pppuVar5 = (undefined ***)0x0, param_1[0x3a] != (undefined **)0x0)) {
    pcStack_68 = FUN_10b8cd7ec;
    ppuStack_60 = &PTR_DAT_110d71e60;
    uVar6 = (uint)&pcStack_68;
    pppuStack_58 = param_1;
    FUN_10b8d2f54();
    func_0x00010b8d0114();
    pppuVar5 = &ppuStack_60;
    (*extraout_x8_02)();
  }
  func_0x00010b8cf7e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8cf850();
  *(undefined4 *)(pppuVar5 + 10) = unaff_s8;
  uVar3 = *(char *)((long)pppuVar5 + 0x4c) == '\x01';
  if (!(bool)uVar3) {
    return;
  }
  func_0x00010b8d00e0();
  func_0x00010b8cf80c();
  uStack_d9 = (undefined1)uVar6;
  ppuVar7 = pppuVar5[0x30];
  uStack_a8 = extraout_x8;
  if (((ppuVar7 != (undefined **)0x0) &&
      (uVar3 = *(char *)((long)ppuVar7 + 0x4c) == '\x01', (bool)uVar3)) &&
     (ppuVar8 = pppuVar5[0x3a], ppuVar8 != (undefined **)0x0)) {
    uStack_e0 = *(undefined4 *)((long)ppuVar7 + 4);
    uStack_e4 = *(undefined4 *)(ppuVar7 + 10);
    uStack_e8 = *(undefined4 *)((long)ppuVar7 + 0x54);
    pcStack_d8 = FUN_10b8cd02c;
    ppuStack_d0 = &PTR_FUN_110d71da0;
    pppuVar4 = pppuVar5;
    func_0x00010b8cfc18();
    *pppuVar4 = (undefined **)pppuVar5;
    pppuVar4[1] = (undefined **)&uStack_d9;
    pppuVar4[2] = (undefined **)&uStack_e4;
    pppuVar4[3] = (undefined **)&uStack_e0;
    pppuVar4[4] = (undefined **)&uStack_e8;
    uVar6 = (uint)&pcStack_d8;
    pppuStack_c8 = pppuVar4;
    FUN_10b8d2f54(ppuVar8);
    pppuVar5 = &ppuStack_d0;
    (*(code *)*ppuStack_d0)();
  }
  func_0x00010b8cf7e8(uStack_a8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    if (pppuVar5 != (undefined ***)0x0) {
      func_0x00010b8d0034();
      (*extraout_x8_00)();
      return;
    }
    func_0x000108141b38();
    if ((uVar6 != 0) && (uVar3 = param_3 == 1, 0 < param_3)) {
      FUN_10b8c71d4();
      func_0x00010b8cfb8c();
      while (func_0x00010b8cfb80(), !(bool)uVar3) {
        func_0x00010b8cf90c();
        uVar3 = *(uint *)((long)pppuVar5 + 0x1ac) == uVar6;
        if ((bool)uVar3) {
          return;
        }
        FUN_10b8cb3c4();
        if (pppuVar5 != (undefined ***)0x0) {
          return;
        }
        func_0x00010b8cfd2c();
      }
    }
    return;
  }
  return;
}



/* Entry: 10b8cc280; end: 10b8cc2ef;  */

void FUN_10b8cc280(undefined ***param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined8 extraout_x8;
  undefined **ppuVar3;
  code *extraout_x8_00;
  undefined **ppuVar4;
  undefined4 unaff_s8;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_69;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010b8cf850();
  *(undefined4 *)(param_1 + 10) = unaff_s8;
  uVar1 = *(char *)((long)param_1 + 0x4c) == '\x01';
  if (!(bool)uVar1) {
    return;
  }
  func_0x00010b8d00e0();
  func_0x00010b8cf80c();
  uStack_69 = (undefined1)param_2;
  ppuVar3 = param_1[0x30];
  uStack_38 = extraout_x8;
  if (((ppuVar3 != (undefined **)0x0) &&
      (uVar1 = *(char *)((long)ppuVar3 + 0x4c) == '\x01', (bool)uVar1)) &&
     (ppuVar4 = param_1[0x3a], ppuVar4 != (undefined **)0x0)) {
    uStack_70 = *(undefined4 *)((long)ppuVar3 + 4);
    uStack_74 = *(undefined4 *)(ppuVar3 + 10);
    uStack_78 = *(undefined4 *)((long)ppuVar3 + 0x54);
    pcStack_68 = FUN_10b8cd02c;
    ppuStack_60 = &PTR_FUN_110d71da0;
    pppuVar2 = param_1;
    func_0x00010b8cfc18();
    *pppuVar2 = (undefined **)param_1;
    pppuVar2[1] = (undefined **)&uStack_69;
    pppuVar2[2] = (undefined **)&uStack_74;
    pppuVar2[3] = (undefined **)&uStack_70;
    pppuVar2[4] = (undefined **)&uStack_78;
    param_2 = (int)&pcStack_68;
    pppuStack_58 = pppuVar2;
    FUN_10b8d2f54(ppuVar4);
    param_1 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  func_0x00010b8cf7e8(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (param_1 != (undefined ***)0x0) {
    func_0x00010b8d0034();
    (*extraout_x8_00)();
    return;
  }
  func_0x000108141b38();
  if ((param_2 != 0) && (uVar1 = param_3 == 1, 0 < param_3)) {
    FUN_10b8c71d4();
    func_0x00010b8cfb8c();
    while (func_0x00010b8cfb80(), !(bool)uVar1) {
      func_0x00010b8cf90c();
      uVar1 = *(int *)((long)param_1 + 0x1ac) == param_2;
      if ((bool)uVar1) {
        return;
      }
      FUN_10b8cb3c4();
      if (param_1 != (undefined ***)0x0) {
        return;
      }
      func_0x00010b8cfd2c();
    }
  }
  return;
}



/* Entry: 10b8cc2f0; end: 10b8cc363;  */

void FUN_10b8cc2f0(long param_1,undefined1 param_2)

{
  func_0x00010b8c7e2c();
  *(undefined1 *)(param_1 + 0x49) = param_2;
  return;
}



/* Entry: 10b8cc364; end: 10b8cc3f3;  */

void FUN_10b8cc364(long param_1)

{
  long unaff_x19;
  long unaff_d8;
  
  func_0x00010b8cf850();
  *(int *)(param_1 + 0x30) = (int)unaff_d8;
  if (((uint)*(ulong *)(unaff_x19 + 0x1c8) >> 2 & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(unaff_x19 + 0x1c8) | 4);
    if (unaff_d8 == 0) {
      func_0x00010b8cfc9c();
    }
    else {
      func_0x00010b8c8724(unaff_d8);
    }
    func_0x00010b8cf9a4();
  }
  return;
}



/* Entry: 10b8cc3f4; end: 10b8cc4a3;  */

long FUN_10b8cc3f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x188);
  if (lVar2 == 0) {
    func_0x00010b8cc440(&uStack_28,param_1 + 0x90);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_10b8cdaf0(param_1 + 0x188,uVar1);
    FUN_10b8cdad0(&uStack_28);
    lVar2 = *(long *)(param_1 + 0x188);
  }
  return lVar2;
}



/* Entry: 10b8cc4a4; end: 10b8cc4b7;  */

int FUN_10b8cc4a4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  code *extraout_x9;
  undefined1 auStack_30 [8];
  char cStack_28;
  
  FUN_10b8cc3f4();
  iVar1 = (int)auStack_30;
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 == 0) {
    plVar2 = (long *)*param_1;
    (**(code **)(*plVar2 + 0x28))(plVar2,0xd);
    if (((int)plVar2 == 0) || (puVar3 = param_1, FUN_10b8d0254(), ((ulong)puVar3 & 1) == 0)) {
      plVar2 = (long *)*param_1;
      (**(code **)(*plVar2 + 0x28))(plVar2,0xc);
      if ((int)plVar2 == 0) {
        plVar2 = (long *)*param_1;
        (**(code **)(*plVar2 + 0x28))(plVar2,0xb);
        iVar4 = 1;
        if ((int)plVar2 != 0) {
          iVar4 = 2;
        }
      }
      else {
        func_0x00010b8d044c(*param_1);
        (*extraout_x9)();
        if ((cStack_28 == '\x01') || (FUN_10b9a9608(), iVar1 != 0)) {
          iVar4 = 6;
        }
        else {
          iVar4 = 2;
        }
        func_0x00010b8d045c();
      }
    }
    else {
      iVar4 = 4;
    }
  }
  return iVar4;
}



/* Entry: 10b8cc4b8; end: 10b8cc4db;  */

void FUN_10b8cc4b8(long param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x00010b8cfd20();
  FUN_10b8cc3f4();
  *(undefined4 *)(param_1 + 0xc) = unaff_w19;
  if (((uint)*(ulong *)(unaff_x20 + 0x1c8) >> 0x1d & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(unaff_x20 + 0x1c8) | 0x20000000);
    if (uStack_28 != 0) {
      FUN_10b8c8f5c(uStack_28);
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8cc4dc; end: 10b8cc4ef;  */

int FUN_10b8cc4dc(double param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x9;
  int iVar2;
  undefined1 auStack_30 [8];
  char cStack_28;
  
  FUN_10b8cc3f4();
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar2 == 0) {
    func_0x00010b8d044c(*param_2);
    (*extraout_x9)();
    if ((cStack_28 == '\x01') || (FUN_10b9a92f0(auStack_30), 0.0 < param_1)) {
      puVar1 = param_2;
      func_0x00010b8d0188();
      if ((int)puVar1 == 1) {
        puVar1 = param_2;
        FUN_10b8d0254();
        if ((int)puVar1 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
          if ((param_2[6] != 0) && (iVar2 = 3, *(int *)(param_2[6] + 0xc) != 0)) {
            iVar2 = 4;
          }
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 5;
    }
    func_0x00010b8d045c();
  }
  return iVar2;
}



/* Entry: 10b8cc4f0; end: 10b8cc523;  */

void FUN_10b8cc4f0(undefined4 param_1,long param_2)

{
  long lVar1;
  long unaff_d8;
  
  lVar1 = param_2;
  FUN_10b8cc3f4();
  *(undefined4 *)(lVar1 + 0x10) = param_1;
  if (((uint)*(ulong *)(param_2 + 0x1c8) >> 0x1d & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(param_2 + 0x1c8) | 0x20000000);
    if (unaff_d8 != 0) {
      FUN_10b8c8f5c(unaff_d8);
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8cc524; end: 10b8cc53b;  */

undefined4 FUN_10b8cc524(long param_1)

{
  FUN_10b8cc3f4();
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b8cc53c; end: 10b8cc64f;  */

void FUN_10b8cc53c(long param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x00010b8cf8a8();
  FUN_10b8cc3f4();
  func_0x00010b8cff5c(param_1 + 0x18);
  if (((uint)*(ulong *)(unaff_x20 + 0x1c8) >> 0x1d & 1) == 0) {
    func_0x00010b8cf844(*(ulong *)(unaff_x20 + 0x1c8) | 0x20000000);
    if (uStack_28 != 0) {
      FUN_10b8c8f5c(uStack_28);
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8cc650; end: 10b8cc667;  */

undefined1 FUN_10b8cc650(long param_1)

{
  FUN_10b8cc3f4();
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10b8cc668; end: 10b8cc683;  */

void FUN_10b8cc668(long param_1)

{
  undefined1 unaff_w19;
  
  func_0x00010b8cfe90();
  *(undefined1 *)(param_1 + 0x39) = unaff_w19;
  return;
}



/* Entry: 10b8cc684; end: 10b8cc69b;  */

undefined1 FUN_10b8cc684(long param_1)

{
  FUN_10b8cc3f4();
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 10b8cc69c; end: 10b8cc6b7;  */

void FUN_10b8cc69c(long param_1)

{
  undefined1 unaff_w19;
  
  func_0x00010b8cfe90();
  *(undefined1 *)(param_1 + 0x3a) = unaff_w19;
  return;
}



/* Entry: 10b8cc6b8; end: 10b8cc6cf;  */

undefined1 FUN_10b8cc6b8(long param_1)

{
  FUN_10b8cc3f4();
  return *(undefined1 *)(param_1 + 0x3a);
}



/* Entry: 10b8cc6d0; end: 10b8cc727;  */

void FUN_10b8cc6d0(long param_1)

{
  long *unaff_x20;
  undefined8 uStack_28;
  
  func_0x00010b8cf9f0();
  FUN_10b8cc3f4();
  func_0x000107c31068(param_1 + 0x30);
  FUN_10b8c8f5c();
  if ((*unaff_x20 != 0) && (*(int *)(*unaff_x20 + 0xc) != 0)) {
    func_0x00010b8cf888();
    if (uStack_28 != 0) {
      func_0x00010b8cffd8();
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8cc728; end: 10b8cc78f;  */

bool FUN_10b8cc728(int param_1)

{
  FUN_10b8cc4dc();
  return param_1 - 2U < 3;
}



/* Entry: 10b8cc790; end: 10b8cc8c3;  */

uint FUN_10b8cc790(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  FUN_10b8cc728();
  uVar3 = param_1;
  func_0x00010b8cc748(param_1);
  func_0x00010b8cc770(param_1);
  uVar1 = 0;
  if ((int)uVar2 != 0) {
    uVar1 = (uint)uVar3 ^ 1 | (uint)param_1;
  }
  return uVar1 & 1;
}



/* Entry: 10b8cc8c4; end: 10b8cc92b;  */

undefined8 * FUN_10b8cc8c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x00010b8d0100();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10b8cd9d0();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10b8cc92c; end: 10b8cca0f;  */

void FUN_10b8cc92c(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (((uint)*(ulong *)(param_1 + 0x1c8) >> 0x1d & 1) != 0) {
    *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xffffffffdfffffff;
    func_0x00010b8cfe98();
    for (lVar2 = 1; lVar2 - param_2 != 1; lVar2 = lVar2 + 1) {
      func_0x00010b8cf90c();
      uVar1 = param_1;
      FUN_10b8cca10();
      if ((uVar1 & 1) == 0) {
        FUN_10b8cc92c();
        uVar1 = param_1;
      }
      param_1 = uVar1;
    }
  }
  return;
}



/* Entry: 10b8cca10; end: 10b8cca53;  */

bool FUN_10b8cca10(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010b8c921c();
  if (((uVar1 & 1) == 0) &&
     ((*(long *)(param_1 + 0x1e0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x1e0) + 0xa8) & 1) == 0))
     )) {
    FUN_10b8cc4dc(param_1);
    return (int)param_1 - 2U < 3;
  }
  return true;
}



/* Entry: 10b8cca54; end: 10b8ccaaf;  */

void FUN_10b8cca54(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uStack_28;
  
  if (param_2 != ((uint)(*(ulong *)(param_1 + 0x1c8) >> 0x16) & 1)) {
    uVar1 = 0x400000;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    *(ulong *)(param_1 + 0x1c8) = *(ulong *)(param_1 + 0x1c8) & 0xffffffffffbfffff | uVar1;
    if (((uint)*(ulong *)(param_1 + 0x1c8) >> 2 & 1) == 0) {
      func_0x00010b8cf844(*(ulong *)(param_1 + 0x1c8) | 4);
      if (uStack_28 == 0) {
        func_0x00010b8cfc9c();
      }
      else {
        func_0x00010b8c8724(uStack_28);
      }
      func_0x00010b8cf9a4();
    }
    return;
  }
  return;
}



/* Entry: 10b8ccab0; end: 10b8ccb2f;  */

void FUN_10b8ccab0(float param_1,long param_2,uint param_3,float *param_4,ulong param_5)

{
  ulong uVar1;
  long lStack_28;
  
  uVar1 = 1L << (param_5 & 0x3f);
  if ((*param_4 != param_1) || (param_3 != ((*(ulong *)(param_2 + 0x1c8) & uVar1) != 0))) {
    *param_4 = param_1;
    if (param_3 == 0) {
      uVar1 = *(ulong *)(param_2 + 0x1c8) & (uVar1 ^ 0xffffffffffffffff);
    }
    else {
      uVar1 = *(ulong *)(param_2 + 0x1c8) | uVar1;
    }
    *(ulong *)(param_2 + 0x1c8) = uVar1;
    func_0x00010b8c86d4(param_2);
    func_0x00010b8cf888();
    if (lStack_28 != 0) {
      func_0x00010b8cffd0();
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8ccb30; end: 10b8ccb3b;  */

void FUN_10b8ccb30(float param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lStack_28;
  
  if ((*(float *)(param_2 + 0x174) != param_1) ||
     (param_3 != ((*(ulong *)(param_2 + 0x1c8) & 0x800000000) != 0))) {
    *(float *)(param_2 + 0x174) = param_1;
    if (param_3 == 0) {
      uVar1 = *(ulong *)(param_2 + 0x1c8) & 0xfffffff7ffffffff;
    }
    else {
      uVar1 = *(ulong *)(param_2 + 0x1c8) | 0x800000000;
    }
    *(ulong *)(param_2 + 0x1c8) = uVar1;
    func_0x00010b8c86d4(param_2);
    func_0x00010b8cf888();
    if (lStack_28 != 0) {
      func_0x00010b8cffd0();
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8ccb3c; end: 10b8ccbd3;  */

void FUN_10b8ccb3c(float param_1,long param_2)

{
  long lStack_28;
  
  if (*(float *)(param_2 + 0x178) != param_1) {
    *(float *)(param_2 + 0x178) = param_1;
    func_0x00010b8c86d4();
    func_0x00010b8cf888();
    if (lStack_28 != 0) {
      func_0x00010b8cffd0();
    }
    func_0x00010b8cf8c8();
  }
  return;
}



/* Entry: 10b8ccbd4; end: 10b8ccc4b;  */

long FUN_10b8ccbd4(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_d8;
  
  func_0x00010b8cfcc0();
  if (*(float *)(param_2 + 0x10) == param_1) {
    return param_2;
  }
  *(float *)(param_2 + 0x10) = param_1;
  do {
    lVar2 = unaff_x19;
    unaff_x19 = *(long *)(lVar2 + 0x128);
  } while (*(long *)(lVar2 + 0x128) != 0);
  if ((*(byte *)(lVar2 + 0x1cb) >> 6 & 1) == 0) {
    if ((*(long *)(lVar2 + 0x18) != 0) && (*(long *)(*(long *)(lVar2 + 0x18) + 0x10) != 0)) {
      lVar1 = 0;
      if (*(byte **)(lVar2 + 0x18) != (byte *)0x0) {
        if ((**(byte **)(lVar2 + 0x18) >> 2 & 1) != 0) {
          return 0;
        }
        func_0x00010b95a878();
        lVar1 = 1;
      }
      return lVar1;
    }
    unaff_d8 = 0;
  }
  else {
    func_0x00010b8cf8c0();
    FUN_10b8c9330(unaff_d8);
    func_0x00010b8cf8c8();
  }
  return unaff_d8;
}



/* Entry: 10b8ccc4c; end: 10b8ccd0f;  */

void FUN_10b8ccc4c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 **ppuVar2;
  undefined8 extraout_x8;
  code *pcVar3;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *apuStack_60 [5];
  undefined8 uStack_38;
  
  func_0x00010b8cf80c();
  uStack_38 = extraout_x8;
  if (param_1[0x3b] == 0) {
    ppuStack_80 = (undefined8 **)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x0001080c5668(param_3,&ppuStack_80);
    if (ppuStack_80 == (undefined8 **)0x0) goto LAB_10b8cccf0;
    pcVar3 = (code *)(*ppuStack_80)[3];
    ppuVar2 = ppuStack_80;
  }
  else {
    plVar1 = param_1;
    func_0x00010b8cfc8c();
    uStack_68 = *param_3;
    (**(code **)(param_3[1] + 0x10))(apuStack_60,param_3 + 1);
    (**(code **)(*plVar1 + 0x88))(plVar1,param_1 + 0x3b,&uStack_68);
    pcVar3 = (code *)*apuStack_60[0];
    ppuVar2 = apuStack_60;
  }
  (*pcVar3)(ppuVar2);
LAB_10b8cccf0:
  func_0x00010b8cf7e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b8ccd28();
  func_0x00010b8cfd44();
  return;
}



/* Entry: 10b8ccd10; end: 10b8ccd27;  */

void FUN_10b8ccd10(void)

{
  FUN_10b8ccd28();
  func_0x00010b8cfd44();
  return;
}



/* Entry: 10b8ccd28; end: 10b8ccd57;  */

void FUN_10b8ccd28(void)

{
  func_0x00010b8cf978();
  func_0x00010b8cf85c(0x14);
  FUN_10bd3f3dc();
  func_0x00010b8cfb50();
  return;
}



/* Entry: 10b8ccd58; end: 10b8ccd6f;  */

void FUN_10b8ccd58(void)

{
  FUN_10b8ccd70();
  func_0x00010b8cfd44();
  return;
}



/* Entry: 10b8ccd70; end: 10b8ccd9f;  */

void FUN_10b8ccd70(void)

{
  func_0x00010b8cf978();
  func_0x00010b8cf85c(0x16);
  FUN_10bd3f3dc();
  func_0x00010b8cfb50();
  return;
}



/* Entry: 10b8ccda0; end: 10b8ccdb7;  */

void FUN_10b8ccda0(void)

{
  FUN_10b8ccdb8();
  func_0x00010b8cfd44();
  return;
}



/* Entry: 10b8ccdb8; end: 10b8ccde7;  */

void FUN_10b8ccdb8(void)

{
  func_0x00010b8cf978();
  func_0x00010b8cf85c(0x1c);
  FUN_10bd3f3dc();
  func_0x00010b8cfb50();
  return;
}



/* Entry: 10b8ccde8; end: 10b8ccecb;  */

void FUN_10b8ccde8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [40];
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  lVar1 = puVar3[1];
  FUN_10b8d4720(auStack_68,*(undefined8 *)*puVar3);
  lVar2 = lVar1;
  func_0x00010b8c7e2c();
  fVar4 = *(float *)puVar3[2];
  fVar6 = ((float *)puVar3[2])[1];
  fVar5 = *(float *)(lVar2 + 0x20);
  fStack_70 = fVar5 - fVar4;
  if (fVar5 == 0.0) {
    fStack_70 = fVar4;
  }
  fVar4 = *(float *)puVar3[3];
  fStack_74 = ((float *)puVar3[3])[1];
  fStack_78 = fVar5 - fVar4;
  if (fVar5 == 0.0) {
    fStack_78 = fVar4;
  }
  fStack_6c = fVar6;
  FUN_10b8c9554(lVar1,8,0);
  FUN_10b8c9554(fVar6,lVar1,9,0);
  func_0x00010b8d2114(lVar2,&fStack_70,&fStack_78,puVar3[4]);
  if (*(char *)(lVar2 + 0x4a) == '\x01') {
    func_0x00010b8cfac8();
    FUN_10b8cb4d4(fVar6);
  }
  func_0x00010b8d00e0();
  FUN_10b8cb2cc();
  func_0x00010b8c86d4(lVar1);
  func_0x00010b8d49b4(auStack_68);
  return;
}



/* Entry: 10b8ccecc; end: 10b8ccedf;  */

void FUN_10b8ccecc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8ccee0; end: 10b8ccf77;  */

void FUN_10b8ccee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71cf0;
  func_0x00010b8cfc18();
  func_0x00010b8cfdc8();
  return;
}



/* Entry: 10b8ccf78; end: 10b8ccf7f;  */

void FUN_10b8ccf78(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8cf8a8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001080da474();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8ccf80; end: 10b8ccfb3;  */

void FUN_10b8ccf80(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8cf8a8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001080da474();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8ccfb4; end: 10b8ccffb;  */

/* WARNING: Possible PIC construction at 0x00010b8ccfd4: Changing call to branch */

long * FUN_10b8ccfb4(long *param_1,ulong param_2)

{
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 3)) {
    return (long *)(*param_1 + param_2 * 8);
  }
  _abort();
  FUN_10b8ccffc();
  func_0x00010b8cfd44();
  return param_1;
}



/* Entry: 10b8ccffc; end: 10b8cd02b;  */

void FUN_10b8ccffc(void)

{
  func_0x00010b8cf978();
  func_0x00010b8cf85c(0x15);
  FUN_10bd3f3dc();
  func_0x00010b8cfb50();
  return;
}



/* Entry: 10b8cd02c; end: 10b8cd0db;  */

void FUN_10b8cd02c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8cf80c();
  plVar6 = *(long **)(param_1 + 0x10);
  lVar5 = *plVar6;
  uVar1 = *(undefined8 *)(lVar5 + 0x1d0);
  uStack_48 = extraout_x8;
  func_0x00010b8d3398();
  uVar2 = uVar1;
  FUN_10b8a3f08();
  lVar7 = plVar6[1];
  lVar8 = plVar6[4];
  lVar10 = plVar6[3];
  lVar9 = plVar6[2];
  puVar3 = (undefined8 *)0x48;
  uStack_70 = uVar2;
  __Znwm();
  *puVar3 = &PTR_FUN_110d71d20;
  puVar3[1] = lVar7;
  puVar3[2] = lVar5;
  puVar3[4] = lVar10;
  puVar3[3] = lVar9;
  puVar3[5] = lVar8;
  puVar3[6] = uVar1;
  puVar3[7] = &uStack_70;
  puVar3[8] = auStack_68;
  puStack_50 = puVar3;
  func_0x00010b8cff64();
  puVar4 = auStack_68;
  FUN_10b8cd404();
  func_0x00010b8cf7e8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (puVar4 != (undefined1 *)0x0) {
    func_0x00010b8d0034();
    (*extraout_x8_00)();
    return;
  }
  func_0x000108141b38();
  return;
}



/* Entry: 10b8cd0dc; end: 10b8cd107;  */

void FUN_10b8cd0dc(long param_1)

{
  code *extraout_x8;
  
  if (param_1 != 0) {
    func_0x00010b8d0034();
    (*extraout_x8)();
    return;
  }
  func_0x000108141b38();
  return;
}



/* Entry: 10b8cd108; end: 10b8cd10f;  */

void FUN_10b8cd108(void)

{
  return;
}



/* Entry: 10b8cd110; end: 10b8cd15b;  */

void FUN_10b8cd110(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = &PTR_FUN_110d71d20;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = uVar2;
  return;
}



/* Entry: 10b8cd15c; end: 10b8cd19b;  */

void FUN_10b8cd15c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_FUN_110d71d20;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[7] = uVar7;
  param_2[6] = uVar6;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10b8cd19c; end: 10b8cd3cb;  */

void FUN_10b8cd19c(long param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x23;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  
  iVar1 = *param_3;
  if (0 < iVar1) {
    lVar5 = *(long *)(param_1 + 0x10);
    uStack_90 = *param_2;
    puStack_88 = (undefined8 *)0x0;
    FUN_10b8c71d4();
    fVar11 = 0.0;
    puVar6 = (undefined8 *)0x0;
    while (puVar6 != param_2) {
      puVar3 = &uStack_90;
      FUN_10b8c71f4();
      if (*(int *)((long)puVar3 + 0x1b4) == 1) {
        if ((**(byte **)(param_1 + 8) & 1) == 0) {
          fVar7 = *(float *)((long)puVar3 + 0x1bc);
          fVar9 = *(float *)(puVar3 + 0x38);
          fVar12 = *(float *)(puVar3 + 0x37);
        }
        else {
          FUN_10b8c6b24(&dStack_a0,puVar3);
          func_0x00010b8cff50();
          fVar9 = 0.0;
          if (unaff_x23 == lVar5) {
            fVar12 = 0.0;
            fVar13 = 3.4028235e+38;
          }
          else {
            fVar12 = 0.0;
            if (unaff_x23 == 0) {
              fVar13 = 0.0;
            }
            else {
              uVar8 = 0;
              fVar12 = 0.0;
              fVar13 = 0.0;
              if (*(long *)(unaff_x23 + 0x18) != 0) {
                fVar13 = *(float *)(*(long *)(unaff_x23 + 0x18) + 0x238);
                while (unaff_x23 != 0) {
                  fVar7 = (float)uVar8;
                  bVar2 = SBORROW8(unaff_x23,lVar5);
                  if (unaff_x23 == lVar5) break;
                  if (*(long *)(unaff_x23 + 0x18) != 0) {
                    func_0x00010b8cfbd8();
                    if (bVar2) {
                      fVar7 = fVar11;
                    }
                    uVar8 = (ulong)(uint)fVar7;
                    fVar12 = fVar12 + fVar7;
                  }
                  func_0x00010b8cff88();
                  func_0x00010b8cff50();
                }
                if (NAN(fVar13)) {
                  fVar13 = fVar11;
                }
              }
            }
          }
          lVar4 = puVar3[3];
          fVar10 = 0.0;
          if (lVar4 != 0) {
            fVar10 = *(float *)(lVar4 + 0x250);
            if (NAN(fVar10)) {
              fVar10 = 0.0;
            }
            fVar9 = *(float *)(lVar4 + 0x238);
            if (NAN(fVar9)) {
              fVar9 = 0.0;
            }
          }
          fVar12 = fVar12 + fVar10;
          *(float *)(puVar3 + 0x37) = fVar12;
          fVar10 = fVar13 - fVar10;
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          fVar7 = 3.4028235e+38;
          if (fVar13 != 3.4028235e+38) {
            fVar7 = fVar10;
          }
          *(float *)((long)puVar3 + 0x1bc) = fVar7;
          *(float *)(puVar3 + 0x38) = fVar9;
        }
        fVar7 = (fVar7 - fVar9) - **(float **)(param_1 + 0x18);
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        fVar12 = (**(float **)(param_1 + 0x20) - fVar12) + **(float **)(param_1 + 0x28);
        if (fVar12 <= fVar7) {
          fVar7 = fVar12;
        }
        if (fVar7 <= 0.0) {
          fVar7 = fVar11;
        }
        dStack_a0 = (double)fVar7;
        uStack_98 = 6;
        uStack_a8 = 0;
        func_0x00010b8cb6cc(puVar3,*(undefined8 *)(param_1 + 0x30),7,
                            **(undefined8 **)(param_1 + 0x38),&dStack_a0,&uStack_a8,0);
        func_0x00010b8cf9ac();
        func_0x00010b8cfeb8();
        (**(code **)(puVar3[0x12] + 0x48))(puVar3 + 0x12,*(undefined8 *)(param_1 + 0x30));
      }
      if ((*(byte *)((long)puVar3 + 0x1cb) & 1) == 0) {
        FUN_10b8cd0dc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),puVar3,iVar1 + -1);
      }
      puVar6 = (undefined8 *)((long)puVar6 + 1);
      puStack_88 = puVar6;
    }
  }
  return;
}



/* Entry: 10b8cd3cc; end: 10b8cd3f7;  */

void FUN_10b8cd3cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b8cfe18(param_2,param_1,&PTR_DAT_110d71d90);
  func_0x00010b8cfcd8();
  return;
}



/* Entry: 10b8cd3f8; end: 10b8cd403;  */

undefined ** FUN_10b8cd3f8(void)

{
  return &PTR_DAT_110d71d90;
}



/* Entry: 10b8cd404; end: 10b8cd43f;  */

long FUN_10b8cd404(long param_1)

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
  func_0x00010b8cffc4(uVar1);
  return param_1;
}



/* Entry: 10b8cd440; end: 10b8cd453;  */

void FUN_10b8cd440(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8cd454; end: 10b8cd483;  */

void FUN_10b8cd454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71da0;
  func_0x00010b8cfc18();
  func_0x00010b8cfdc8();
  return;
}



/* Entry: 10b8cd484; end: 10b8cd48f;  */

void FUN_10b8cd484(long *param_1,long param_2)

{
  _abort();
  func_0x00010b8cf8a8();
  FUN_10b8cd504(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x00010b8cf91c();
  return;
}



/* Entry: 10b8cd490; end: 10b8cd4c7;  */

void FUN_10b8cd490(long *param_1,long param_2)

{
  func_0x00010b8cf8a8();
  FUN_10b8cd504(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x00010b8cf91c();
  return;
}



/* Entry: 10b8cd4c8; end: 10b8cd4e7;  */

void FUN_10b8cd4c8(void)

{
  FUN_10b8cd4e8();
  return;
}



/* Entry: 10b8cd4e8; end: 10b8cd503;  */

void FUN_10b8cd4e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4 = param_4 + 1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x0001080da474();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b8cd504; end: 10b8cd523;  */

void FUN_10b8cd504(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x0001080da474();
  }
  return;
}



/* Entry: 10b8cd524; end: 10b8cd57f;  */

void FUN_10b8cd524(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x0001080da474();
  }
  return;
}



/* Entry: 10b8cd580; end: 10b8cd587;  */

void FUN_10b8cd580(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8cf8a8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001080da474();
  }
  return;
}



/* Entry: 10b8cd588; end: 10b8cd5bb;  */

void FUN_10b8cd588(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8cf8a8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001080da474();
  }
  return;
}



/* Entry: 10b8cd5bc; end: 10b8cd617;  */

undefined8 FUN_10b8cd5bc(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_58 [40];
  
  func_0x00010b8cf9f0();
  func_0x00010b8d0088();
  FUN_10b8cd618();
  func_0x00010b8d0048();
  if (param_2 != 0) {
    FUN_10b8cd4c8();
  }
  func_0x00010b8cfc50();
  *unaff_x20 = 0;
  func_0x00010b8cfa74();
  FUN_10b8cd490();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b8cd554(auStack_58);
  return uVar1;
}



/* Entry: 10b8cd618; end: 10b8cd64b;  */

long FUN_10b8cd618(long *param_1,ulong param_2)

{
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010b8d0120();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  FUN_10b8cd484();
  _abort();
  func_0x00010b8cf8a8();
  lVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar1);
  func_0x00010b8cf91c();
  return lVar1;
}



/* Entry: 10b8cd64c; end: 10b8cd683;  */

void FUN_10b8cd64c(long *param_1,long param_2)

{
  func_0x00010b8cf8a8();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x00010b8cf91c();
  return;
}



/* Entry: 10b8cd684; end: 10b8cd6a3;  */

void FUN_10b8cd684(void)

{
  FUN_10b8cd6a4();
  return;
}



/* Entry: 10b8cd6a4; end: 10b8cd6bf;  */

long * FUN_10b8cd6a4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_10b8cd6ec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8cd6c0; end: 10b8cd6eb;  */

long * FUN_10b8cd6c0(long *param_1)

{
  FUN_10b8cd6ec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8cd6ec; end: 10b8cd70f;  */

void FUN_10b8cd6ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b8cd710; end: 10b8cd74f;  */

undefined8 FUN_10b8cd710(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010b8d0120();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  func_0x00010b8cd640();
  FUN_10b8cd750();
  func_0x00010b8cfd44();
  return param_1;
}



/* Entry: 10b8cd750; end: 10b8cd7df;  */

void FUN_10b8cd750(void)

{
  func_0x00010b8cf978();
  func_0x00010b8cf85c(0xf);
  FUN_10bd3f3dc();
  func_0x00010b8cfb50();
  return;
}



/* Entry: 10b8cd7e0; end: 10b8cd7eb;  */

void FUN_10b8cd7e0(void)

{
  return;
}



/* Entry: 10b8cd7ec; end: 10b8cd863;  */

void FUN_10b8cd7ec(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *puStack_50;
  undefined1 auStack_48 [24];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b8cf80c();
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x1d0);
  uStack_28 = extraout_x8;
  func_0x00010b8d3398();
  puVar2 = puVar1;
  FUN_10b8a3f08();
  puStack_50 = puVar2;
  func_0x00010b8cfe10();
  *puVar2 = &PTR_FUN_110d71df0;
  puVar2[1] = puVar1;
  puVar2[2] = &puStack_50;
  puVar2[3] = auStack_48;
  puStack_30 = puVar2;
  func_0x00010b8cff64();
  FUN_10b8cd404(auStack_48);
  func_0x00010b8cf7e8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8cd864; end: 10b8cd86b;  */

void FUN_10b8cd864(void)

{
  return;
}



/* Entry: 10b8cd86c; end: 10b8cd8a3;  */

void FUN_10b8cd86c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010b8cfe10();
  *puVar1 = &PTR_FUN_110d71df0;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  puVar1[3] = param_1[3];
  return;
}



/* Entry: 10b8cd8a4; end: 10b8cd8d3;  */

void FUN_10b8cd8a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110d71df0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10b8cd8d4; end: 10b8cd98b;  */

void FUN_10b8cd8d4(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x23;
  long lVar5;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  iVar1 = *param_3 + -1;
  uVar2 = iVar1 == 0;
  if (0 < *param_3) {
    lVar3 = *param_2;
    lStack_48 = 0;
    lStack_50 = lVar3;
    FUN_10b8c71d4();
    func_0x00010b8d007c();
    while (lVar5 = unaff_x23, func_0x00010b8d0070(), !(bool)uVar2) {
      func_0x00010b8cfc38();
      uVar2 = *(int *)(lVar3 + 0x1b4) == 1;
      lVar4 = lVar3;
      if ((bool)uVar2) {
        uStack_58 = 0;
        FUN_10b8b4dbc(lVar3 + 0x90,*(undefined8 *)(param_1 + 8),7,**(undefined8 **)(param_1 + 0x10),
                      &uStack_58);
        func_0x00010b8cf9ac();
        lVar4 = lVar3 + 0x90;
        (**(code **)(*(long *)(lVar3 + 0x90) + 0x48))(lVar4,*(undefined8 *)(param_1 + 8));
      }
      if ((*(byte *)(lVar3 + 0x1cb) & 1) == 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
        FUN_10b8cd0dc(lVar4,lVar3,iVar1);
      }
      lVar3 = lVar4;
      unaff_x23 = lVar5 + 1;
      lStack_48 = lVar5;
    }
  }
  return;
}



/* Entry: 10b8cd98c; end: 10b8cd9b7;  */

void FUN_10b8cd98c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b8cfe18(param_2,param_1,&PTR_DAT_110d71e50);
  func_0x00010b8cfcd8();
  return;
}



/* Entry: 10b8cd9b8; end: 10b8cd9cf;  */

undefined ** FUN_10b8cd9b8(void)

{
  return &PTR_DAT_110d71e50;
}



/* Entry: 10b8cd9d0; end: 10b8cda27;  */

undefined8 FUN_10b8cd9d0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010b8cf9f0();
  func_0x00010b8d0088();
  FUN_10b8cd710();
  func_0x00010b8d0048();
  if (param_2 != 0) {
    FUN_10b8cd684();
  }
  func_0x00010b8cfc50();
  func_0x00010b8cfa74();
  FUN_10b8cd64c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10b8cd6c0(auStack_58);
  return uVar1;
}


