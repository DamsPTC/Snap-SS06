/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4f2bc8; end: 10b4f2beb;  */

void FUN_10b4f2bc8(void)

{
  return;
}



/* Entry: 10b4f2bec; end: 10b4f2c63;  */

void FUN_10b4f2bec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00010b4f61c0();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110cf4270;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b4f5fe8();
  }
  FUN_10b4f5814(unaff_x19 + 2);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c();
  unaff_x19[5] = param_3;
  *(undefined4 *)(unaff_x19 + 6) = 0;
  return;
}



/* Entry: 10b4f2c64; end: 10b4f2c8f;  */

undefined8 FUN_10b4f2c64(undefined8 param_1)

{
  func_0x00010b4f60a8();
  FUN_10b4f2c90(param_1);
  return param_1;
}



/* Entry: 10b4f2c90; end: 10b4f2cb7;  */

long * FUN_10b4f2c90(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b4f2cb8; end: 10b4f2cbb;  */

undefined8 FUN_10b4f2cb8(undefined8 param_1)

{
  func_0x00010b4f60a8();
  FUN_10b4f2c90(param_1);
  return param_1;
}



/* Entry: 10b4f2cbc; end: 10b4f2ccf;  */

void FUN_10b4f2cbc(void)

{
  FUN_10b4f2c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f2cd0; end: 10b4f2cdb;  */

undefined ** FUN_10b4f2cd0(void)

{
  return &PTR_DAT_110cf42b0;
}



/* Entry: 10b4f2cdc; end: 10b4f2d23;  */

void FUN_10b4f2cdc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4f2d24; end: 10b4f2dcb;  */

long * FUN_10b4f2d24(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long extraout_x8;
  long lVar3;
  ulong uVar4;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b4f5fac();
  func_0x00010b4f607c(param_1[5]);
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x00010b4f60ec();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x18);
  while (iVar5 != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    puVar1 = (ulong *)(unaff_x20 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    func_0x00010b4f603c(2);
    func_0x00010b4f621c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f60cc();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar2 = iVar5 - iVar6;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4f2dcc; end: 10b4f2e4b;  */

long FUN_10b4f2dcc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010b4f6088();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b4f2e4c();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b4f6044();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4f6120();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b4f2e4c; end: 10b4f2e67;  */

long FUN_10b4f2e4c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b4f330c();
  func_0x00010b4f5ef8();
  return param_1 + extraout_x8;
}



/* Entry: 10b4f2e68; end: 10b4f2e6b;  */

void FUN_10b4f2e68(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4f61c0();
  puVar1 = (ulong *)(param_1 + 0x10);
  param_2 = param_2 + 0x10;
  FUN_10b4f2ecc();
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f61a4();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f2e6c; end: 10b4f2ecb;  */

void FUN_10b4f2e6c(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4f61c0();
  puVar1 = (ulong *)(param_1 + 0x10);
  param_2 = param_2 + 0x10;
  FUN_10b4f2ecc();
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f61a4();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f2ecc; end: 10b4f2edb;  */

void FUN_10b4f2ecc(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4f2edc; end: 10b4f2f6b;  */

long FUN_10b4f2edc(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b4f5608();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4f36e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4f2f6c; end: 10b4f2f6f;  */

long FUN_10b4f2f6c(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b4f5608();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4f36e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4f2f70; end: 10b4f2f83;  */

void FUN_10b4f2f70(void)

{
  FUN_10b4f2edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f2f84; end: 10b4f2f8f;  */

undefined ** FUN_10b4f2f84(void)

{
  return &PTR_DAT_110cf42f8;
}



/* Entry: 10b4f2f90; end: 10b4f3033;  */

void FUN_10b4f2f90(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4f3034(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4f304c(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b4f3034; end: 10b4f304b;  */

void FUN_10b4f3034(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4f304c; end: 10b4f307f;  */

void FUN_10b4f304c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4f3080; end: 10b4f3647;  */

long * FUN_10b4f3080(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  int iVar8;
  long unaff_x22;
  undefined8 *puVar9;
  int iVar10;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x78);
  plVar6 = param_3;
  plVar3 = param_2;
  if (*(uint *)(param_1 + 0x78) != 0) {
    plVar3 = param_3;
    func_0x000107c282e4();
    plVar6 = param_2;
  }
  func_0x00010b4f607c(*(undefined8 *)(param_1 + 0x30));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = plVar6[1];
  }
  if (lVar7 != 0) {
    uVar5 = 2;
    plVar3 = param_3;
    func_0x00010b4f6064();
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x38));
  if ((long)uVar5 < 0) {
    uVar5 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4f3100;
  }
  else if ((int)uVar5 != 0) {
LAB_10b4f3100:
    func_0x00010b4f60a0();
    uVar5 = 3;
    plVar3 = param_3;
    func_0x00010b4f5f38();
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x40));
  if ((long)uVar5 < 0) {
    uVar5 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4f3140;
  }
  else if ((int)uVar5 != 0) {
LAB_10b4f3140:
    func_0x00010b4f60a0();
    uVar5 = 4;
    plVar3 = param_3;
    func_0x00010b4f5f38();
  }
  iVar8 = *(int *)(param_1 + 0x20);
  puVar9 = (undefined8 *)0x0;
  while (iVar10 = (int)puVar9, iVar8 != iVar10) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar10 * 8 + 7);
    }
    uVar5 = *puVar1;
    plVar6 = (long *)(ulong)*(uint *)(uVar5 + 0x14);
    plVar3 = (long *)0x5;
    func_0x00010b4f5f8c();
    puVar9 = (undefined8 *)(ulong)(iVar10 + 1);
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x48));
  if ((long)uVar5 < 0) {
    uVar5 = 0;
    if (puVar9[1] != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_10b4f31c4;
    }
  }
  else {
    puVar4 = puVar9;
    if ((int)uVar5 != 0) {
LAB_10b4f31c4:
      func_0x00010b4f60a0(puVar4);
      uVar5 = 6;
      plVar3 = param_3;
      func_0x00010b4f5f38();
    }
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x50));
  if ((long)uVar5 < 0) {
    uVar5 = 0;
    if (puVar9[1] != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_10b4f3204;
    }
  }
  else {
    puVar4 = puVar9;
    if ((int)uVar5 != 0) {
LAB_10b4f3204:
      func_0x00010b4f60a0(puVar4);
      uVar5 = 7;
      plVar3 = param_3;
      func_0x00010b4f5f38();
    }
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x58));
  if ((long)uVar5 < 0) {
    uVar5 = 0;
    if (puVar9[1] != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_10b4f3244;
    }
  }
  else {
    puVar4 = puVar9;
    if ((int)uVar5 != 0) {
LAB_10b4f3244:
      func_0x00010b4f60a0(puVar4);
      uVar5 = 8;
      plVar3 = param_3;
      func_0x00010b4f5f38();
    }
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x60));
  if ((long)uVar5 < 0) {
    if (puVar9[1] == 0) goto LAB_10b4f32a0;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if ((int)uVar5 == 0) goto LAB_10b4f32a0;
  func_0x00010b4f60a0(puVar9);
  plVar3 = param_3;
  func_0x00010b4f5f38(param_3,9);
LAB_10b4f32a0:
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x68) + 0x30);
    plVar3 = (long *)0xa;
    func_0x00010b4f5f8c();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0x18);
    plVar3 = (long *)0xb;
    func_0x00010b4f5f8c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar3;
  }
  func_0x00010b4f60cc();
  if ((long)plVar6 < 0) {
    lVar7 = *(long *)(extraout_x8_00 + 8);
    plVar6 = *(long **)(extraout_x8_00 + 0x10);
  }
  else {
    lVar7 = extraout_x8_00 + 8;
  }
  if (*param_3 - (long)plVar3 < (long)(int)plVar6) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar3) + 0x10;
      iVar8 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar7 = (long)plVar3 + (long)iVar10;
      plVar3 = param_3;
      func_0x000107c303e4(param_3,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar3 + (long)iVar8);
  }
  _memcpy(plVar3,lVar7,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)plVar3 + (long)(int)plVar6);
}



/* Entry: 10b4f3648; end: 10b4f36df;  */

void FUN_10b4f3648(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4f61c0();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598be78();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f61a4();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f36e0; end: 10b4f370b;  */

long FUN_10b4f36e0(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f370c; end: 10b4f370f;  */

long FUN_10b4f370c(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f3710; end: 10b4f3723;  */

void FUN_10b4f3710(void)

{
  FUN_10b4f36e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f3724; end: 10b4f372f;  */

undefined ** FUN_10b4f3724(void)

{
  return &PTR_DAT_110cf4348;
}



/* Entry: 10b4f3730; end: 10b4f37c7;  */

long * FUN_10b4f3730(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010b4f61b4();
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b4f3790;
  }
  else if ((int)param_2 == 0) goto LAB_10b4f3790;
  func_0x00010b4f60a0();
  unaff_x19 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar3 = unaff_x22;
LAB_10b4f3790:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010b4f60cc();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 10b4f37c8; end: 10b4f3827;  */

void FUN_10b4f37c8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4f6120();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b4f3828; end: 10b4f382b;  */

void FUN_10b4f3828(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4f61c0();
  func_0x00010b4f6024(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f61a4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f382c; end: 10b4f392f;  */

long FUN_10b4f382c(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  func_0x000107c30258(param_1 + 0x88);
  func_0x000107c30258(param_1 + 0x90);
  func_0x000107c30258(param_1 + 0x98);
  func_0x000107c30258(param_1 + 0xa0);
  func_0x000107c30258(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10b4f5000();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_10b4f4b90();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_10b4f0c74();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 200) != 0) {
    FUN_10b4f5178();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_10b4f5290();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10b4f6624();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b4f1f34(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4f3930; end: 10b4f3933;  */

long FUN_10b4f3930(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  func_0x000107c30258(param_1 + 0x88);
  func_0x000107c30258(param_1 + 0x90);
  func_0x000107c30258(param_1 + 0x98);
  func_0x000107c30258(param_1 + 0xa0);
  func_0x000107c30258(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10b4f5000();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_10b4f4b90();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_10b4f0c74();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 200) != 0) {
    FUN_10b4f5178();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_10b4f5290();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10b4f6624();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b4f1f34(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4f3934; end: 10b4f3947;  */

void FUN_10b4f3934(void)

{
  FUN_10b4f382c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f3948; end: 10b4f3953;  */

undefined ** FUN_10b4f3948(void)

{
  return &PTR_DAT_110cf43a0;
}



/* Entry: 10b4f3954; end: 10b4f3a83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f3954(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  FUN_10b4f205c(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  func_0x000107c3025c(param_1 + 0x70);
  func_0x000107c3025c(param_1 + 0x78);
  func_0x000107c3025c(param_1 + 0x80);
  func_0x000107c3025c(param_1 + 0x88);
  func_0x000107c3025c(param_1 + 0x90);
  func_0x000107c3025c(param_1 + 0x98);
  func_0x000107c3025c(param_1 + 0xa0);
  func_0x000107c3025c(param_1 + 0xa8);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4f3a84(*(undefined8 *)(param_1 + 0xb0));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4f3a9c(*(undefined8 *)(param_1 + 0xb8));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b4f0e5c(*(undefined8 *)(param_1 + 0xc0));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b4f3b3c(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b4f3b50(*(undefined8 *)(param_1 + 0xd0));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b4f66a8(*(undefined8 *)(param_1 + 0xd8));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b4f3a84; end: 10b4f3a9b;  */

void FUN_10b4f3a84(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4f3a9c; end: 10b4f3b3b;  */

void FUN_10b4f3a9c(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b4f6204();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  func_0x000107c3025c(unaff_x19 + 0x40);
  func_0x000107c3025c(unaff_x19 + 0x48);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb634(*(undefined8 *)(unaff_x19 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(unaff_x19 + 0x60));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x68) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b4f3b3c; end: 10b4f3b4f;  */

void FUN_10b4f3b3c(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4f3b50; end: 10b4f3b97;  */

void FUN_10b4f3b50(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4f6204();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b4f52f0(*(undefined8 *)(unaff_x19 + 0x20));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x19 + 0x2c) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4f3b98; end: 10b4f438f;  */

long * FUN_10b4f3b98(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
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
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b4f5fac();
  func_0x00010b4f607c(param_1[0xc]);
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    func_0x00010b4f60ec();
    param_4 = param_1;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0x68));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    param_2 = (long *)0x2;
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0x70));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    param_2 = (long *)0x3;
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0xb0);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x1c);
    param_1 = (long *)0x4;
    func_0x00010b4f603c();
    param_4 = param_1;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0x78));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    param_2 = (long *)0x5;
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0x80));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    param_2 = (long *)0x6;
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0x88));
  lVar5 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    param_2 = (long *)0x7;
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0xe0) != 0) {
    func_0x00010b4f5f10();
    plVar2 = (long *)0x40;
    func_0x000107c280a8();
    func_0x00010b4f5f44();
    param_2 = param_1;
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0xe4) != 0) {
    func_0x00010b4f5f10();
    plVar3 = (long *)0x50;
    func_0x000107c280a8();
    func_0x00010b4f5f44();
    param_2 = plVar2;
    param_4 = plVar3;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  while (iVar6 != 0) {
    func_0x00010b4f5ffc();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    plVar3 = (long *)0xb;
    func_0x00010b4f603c();
    func_0x00010b4f621c();
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0x90));
  lVar5 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    plVar3 = unaff_x19;
    func_0x000107c280a0();
    param_4 = plVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xb8) + 0x14);
    plVar3 = (long *)0xd;
    func_0x00010b4f603c();
    param_4 = plVar3;
  }
  plVar2 = *(long **)(unaff_x20 + 0xe8);
  if (plVar2 != (long *)0x0) {
    func_0x00010b4f6114();
    func_0x000106af6970();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0xf8) != 0) {
    func_0x00010b4f5f10();
    plVar4 = (long *)0x7d;
    func_0x000107c280a8();
    func_0x00010b4f6210();
    plVar2 = plVar3;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar2 = *(long **)(unaff_x20 + 0xc0);
    param_3 = (ulong)*(uint *)((long)plVar2 + 0x14);
    plVar4 = (long *)0x10;
    func_0x00010b4f603c();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    func_0x00010b4f5f10();
    plVar3 = *(long **)(unaff_x20 + 0xf0);
    plVar2 = (long *)0x88;
    func_0x000107c280a8(0x88,plVar4);
    func_0x000107c280ac();
    param_4 = plVar3;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar2 = *(long **)(unaff_x20 + 200);
    param_3 = (ulong)*(uint *)(plVar2 + 4);
    plVar3 = (long *)0x12;
    func_0x00010b4f603c();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0x100) == '\x01') {
    func_0x00010b4f5f10();
    plVar4 = (long *)0x98;
    func_0x000107c280a8();
    func_0x00010b4f5f50();
    plVar2 = plVar3;
    param_4 = plVar4;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    plVar2 = *(long **)(unaff_x20 + 0xd0);
    param_3 = (ulong)*(uint *)((long)plVar2 + 0x14);
    plVar4 = (long *)0x14;
    func_0x00010b4f603c();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)(unaff_x20 + 0x101) == '\x01') {
    func_0x00010b4f5f10();
    plVar3 = (long *)0xa8;
    func_0x000107c280a8();
    func_0x00010b4f5f50();
    plVar2 = plVar4;
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0xfc) != 0) {
    func_0x00010b4f5f10();
    plVar4 = (long *)0xb0;
    func_0x000107c280a8();
    func_0x00010b4f5f44();
    plVar2 = plVar3;
    param_4 = plVar4;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0x98));
  lVar5 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    plVar2 = (long *)0x17;
    plVar4 = unaff_x19;
    func_0x000107c280a0();
    param_4 = plVar4;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0xa0));
  lVar5 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    plVar2 = (long *)0x18;
    plVar4 = unaff_x19;
    func_0x000107c280a0();
    param_4 = plVar4;
  }
  func_0x00010b4f607c(*(undefined8 *)(unaff_x20 + 0xa8));
  lVar5 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    plVar2 = (long *)0x19;
    plVar4 = unaff_x19;
    func_0x000107c280a0();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0x104) != 0) {
    func_0x00010b4f5f10();
    plVar3 = (long *)0xd5;
    func_0x000107c280a8(0xd5);
    func_0x00010b4f6210();
    plVar2 = plVar4;
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  while (iVar6 != 0) {
    func_0x00010b4f5ffc();
    param_3 = (ulong)*(uint *)(plVar2 + 3);
    plVar3 = (long *)0x1b;
    func_0x00010b4f603c();
    func_0x00010b4f621c();
  }
  iVar6 = *(int *)(unaff_x20 + 0x50);
  while (iVar6 != 0) {
    func_0x00010b4f5ffc();
    param_3 = (ulong)*(uint *)(plVar2 + 4);
    plVar3 = (long *)0x1c;
    func_0x00010b4f603c();
    func_0x00010b4f621c();
  }
  plVar2 = plVar3;
  if (*(int *)(unaff_x20 + 0x108) != 0) {
    func_0x00010b4f5f10();
    plVar2 = (long *)0xe8;
    func_0x000107c280a8(0xe8,plVar3);
    func_0x00010b4f5f44();
    param_4 = plVar2;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xd8) + 0x38);
    plVar2 = (long *)0x1e;
    func_0x00010b4f603c();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x102) == '\x01') {
    func_0x00010b4f5f10();
    plVar3 = (long *)0xf8;
    func_0x000107c280a8(0xf8,plVar2);
    func_0x00010b4f5f50();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)(unaff_x20 + 0x10c) != 0) {
    func_0x00010b4f5f10();
    plVar2 = (long *)0x100;
    func_0x000107c280a8(0x100,plVar3);
    func_0x00010b4f5f44();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x110) != 0) {
    func_0x00010b4f5f10();
    param_4 = (long *)0x108;
    func_0x000107c280a8(0x108,plVar2);
    func_0x00010b4f5f44();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f60cc();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8_09 + 8);
      param_3 = *(ulong *)(extraout_x8_09 + 0x10);
    }
    else {
      lVar5 = extraout_x8_09 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4f4390; end: 10b4f43ab;  */

long FUN_10b4f4390(long param_1)

{
  long extraout_x8;
  
  FUN_10b4f4e80();
  func_0x00010b4f5ef8();
  return param_1 + extraout_x8;
}



/* Entry: 10b4f43ac; end: 10b4f476f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f43ac(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b4f6104();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b4f61f0();
  }
  lVar3 = unaff_x20 + 0x30;
  func_0x00010b4f1ab8(unaff_x21 + 0x30);
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    lVar3 = unaff_x20 + 0x48;
    func_0x000107c303c4(unaff_x21 + 0x48);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x60);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x68));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x68);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x70));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x70);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x78));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x78);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x80));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x80);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x88));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x88);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x90));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x90);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x98));
  lVar4 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x98);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0xa0));
  lVar4 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0xa0);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0xa8));
  lVar4 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0xa8);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xb0) == 0) {
        uVar2 = uVar5;
        FUN_10b4f5c4c();
        *(ulong *)(unaff_x21 + 0xb0) = uVar2;
      }
      else {
        FUN_10b4f4770();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xb8) == 0) {
        uVar2 = uVar5;
        func_0x00010b4f5cb0();
        *(ulong *)(unaff_x21 + 0xb8) = uVar2;
      }
      else {
        FUN_10b4f47a4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xc0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4f5cf0();
        *(ulong *)(unaff_x21 + 0xc0) = uVar2;
      }
      else {
        FUN_10b4f1694();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 200) == 0) {
        uVar2 = uVar5;
        FUN_10b4f5d30();
        *(ulong *)(unaff_x21 + 200) = uVar2;
      }
      else {
        FUN_10b4f49a0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xd0) == 0) {
        uVar2 = uVar5;
        FUN_10b4f5d94();
        *(ulong *)(unaff_x21 + 0xd0) = uVar2;
      }
      else {
        FUN_10b4f49c8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xd8) == 0) {
        FUN_10b4f5e34();
        *(ulong *)(unaff_x21 + 0xd8) = uVar5;
      }
      else {
        FUN_10b4f698c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xe0) != 0) {
    *(int *)(unaff_x21 + 0xe0) = *(int *)(unaff_x20 + 0xe0);
  }
  if (*(int *)(unaff_x20 + 0xe4) != 0) {
    *(int *)(unaff_x21 + 0xe4) = *(int *)(unaff_x20 + 0xe4);
  }
  if (*(long *)(unaff_x20 + 0xe8) != 0) {
    *(long *)(unaff_x21 + 0xe8) = *(long *)(unaff_x20 + 0xe8);
  }
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    *(long *)(unaff_x21 + 0xf0) = *(long *)(unaff_x20 + 0xf0);
  }
  if (*(int *)(unaff_x20 + 0xf8) != 0) {
    *(int *)(unaff_x21 + 0xf8) = *(int *)(unaff_x20 + 0xf8);
  }
  if (*(int *)(unaff_x20 + 0xfc) != 0) {
    *(int *)(unaff_x21 + 0xfc) = *(int *)(unaff_x20 + 0xfc);
  }
  if (*(char *)(unaff_x20 + 0x100) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x101) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x101) = 1;
  }
  if (*(char *)(unaff_x20 + 0x102) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x102) = 1;
  }
  if (*(int *)(unaff_x20 + 0x104) != 0) {
    *(int *)(unaff_x21 + 0x104) = *(int *)(unaff_x20 + 0x104);
  }
  if (*(int *)(unaff_x20 + 0x108) != 0) {
    *(int *)(unaff_x21 + 0x108) = *(int *)(unaff_x20 + 0x108);
  }
  if (*(int *)(unaff_x20 + 0x10c) != 0) {
    *(int *)(unaff_x21 + 0x10c) = *(int *)(unaff_x20 + 0x10c);
  }
  if (*(int *)(unaff_x20 + 0x110) != 0) {
    *(int *)(unaff_x21 + 0x110) = *(int *)(unaff_x20 + 0x110);
  }
  func_0x00010b4f6050();
  if ((extraout_x8_09 & 1) == 0) {
    return;
  }
  func_0x00010b4f60f8();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4f4770; end: 10b4f47a3;  */

void FUN_10b4f4770(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f47a4; end: 10b4f499f;  */

void FUN_10b4f47a4(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4f6104();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar3 = uVar2;
        func_0x000106af67c0();
        *(ulong *)(unaff_x21 + 0x50) = uVar3;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar3 = uVar2;
        func_0x000106af6730();
        *(ulong *)(unaff_x21 + 0x58) = uVar3;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        func_0x000106af67c0();
        *(ulong *)(unaff_x21 + 0x60) = uVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  func_0x00010b4f6050();
  if ((extraout_x8_06 & 1) == 0) {
    return;
  }
  func_0x00010b4f60f8();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4f49a0; end: 10b4f49c7;  */

void FUN_10b4f49a0(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f49c8; end: 10b4f4a8f;  */

void FUN_10b4f49c8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4f6104();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      FUN_10b4f5e74();
      *(ulong *)(unaff_x21 + 0x20) = uVar1;
    }
    else {
      FUN_10b4f547c();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x2d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2d) = 1;
  }
  func_0x00010b4f6050();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b4f60f8();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f4a90; end: 10b4f4b8f;  */

undefined8 * FUN_10b4f4a90(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf4130;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4f5fe8();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x00010b4f60b8();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00010b4f60b8();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x00010b4f60b8();
  param_1[5] = lVar2;
  lVar2 = param_3 + 0x30;
  func_0x00010b4f60b8();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010b4f60b8();
  param_1[7] = lVar2;
  lVar2 = param_3 + 0x40;
  func_0x00010b4f60b8();
  param_1[8] = lVar2;
  lVar2 = param_3 + 0x48;
  func_0x00010b4f60b8();
  param_1[9] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000106af67c0(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000106af6730(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000106af67c0(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = param_2;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 0x68);
  return param_1;
}



/* Entry: 10b4f4b90; end: 10b4f4bbb;  */

undefined8 FUN_10b4f4b90(undefined8 param_1)

{
  func_0x00010b4f60a8();
  FUN_10b4f4bbc(param_1);
  return param_1;
}



/* Entry: 10b4f4bbc; end: 10b4f4c3b;  */

void FUN_10b4f4bbc(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bceb594();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb834();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f4c3c; end: 10b4f4c3f;  */

undefined8 FUN_10b4f4c3c(undefined8 param_1)

{
  func_0x00010b4f60a8();
  FUN_10b4f4bbc(param_1);
  return param_1;
}



/* Entry: 10b4f4c40; end: 10b4f4c53;  */

void FUN_10b4f4c40(void)

{
  FUN_10b4f4b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f4c54; end: 10b4f4c5f;  */

undefined ** FUN_10b4f4c54(void)

{
  return &PTR_DAT_110cf43e8;
}



/* Entry: 10b4f4c60; end: 10b4f4e7f;  */

long * FUN_10b4f4c60(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar2 = param_2;
  plVar3 = param_3;
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4f4ca4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b4f4ca4:
    func_0x00010b4f60a0();
    plVar2 = (long *)0x3;
    param_2 = param_3;
    func_0x00010b4f5f38();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x50);
    plVar3 = (long *)(ulong)*(uint *)((long)plVar2 + 0x14);
    param_2 = (long *)0x4;
    func_0x00010b4f5f8c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x58);
    plVar3 = (long *)(ulong)*(uint *)(plVar2 + 3);
    param_2 = (long *)0x5;
    func_0x00010b4f5f8c();
  }
  func_0x00010b4f607c(*(undefined8 *)(param_1 + 0x20));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = plVar3[1];
  }
  if (lVar4 != 0) {
    plVar2 = (long *)0x6;
    param_2 = param_3;
    func_0x00010b4f6064();
  }
  func_0x00010b4f607c(*(undefined8 *)(param_1 + 0x28));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = plVar3[1];
  }
  if (lVar4 != 0) {
    plVar2 = (long *)0x7;
    param_2 = param_3;
    func_0x00010b4f6064();
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)0x40;
    func_0x000107c280a8();
    func_0x00010b4f5f44();
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4f4d8c;
  }
  else if ((int)plVar2 != 0) {
LAB_10b4f4d8c:
    func_0x00010b4f60a0();
    plVar2 = (long *)0x9;
    param_2 = param_3;
    func_0x00010b4f5f38();
  }
  func_0x00010b4f607c(*(undefined8 *)(param_1 + 0x38));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = plVar3[1];
  }
  if (lVar4 != 0) {
    plVar2 = (long *)0xa;
    param_2 = param_3;
    func_0x00010b4f6064();
  }
  func_0x00010b4f607c(*(undefined8 *)(param_1 + 0x40));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = plVar3[1];
  }
  if (lVar4 != 0) {
    plVar2 = (long *)0xb;
    param_2 = param_3;
    func_0x00010b4f6064();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x60);
    plVar3 = (long *)(ulong)*(uint *)((long)plVar2 + 0x14);
    param_2 = (long *)0xc;
    func_0x00010b4f5f8c();
  }
  func_0x00010b4f60c0(*(undefined8 *)(param_1 + 0x48));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4f4e48;
  }
  else if ((int)plVar2 == 0) goto LAB_10b4f4e48;
  func_0x00010b4f60a0();
  param_2 = param_3;
  func_0x00010b4f5f38(param_3,0xd);
LAB_10b4f4e48:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b4f60cc();
  if ((long)plVar3 < 0) {
    lVar4 = *(long *)(extraout_x8_03 + 8);
    plVar3 = *(long **)(extraout_x8_03 + 0x10);
  }
  else {
    lVar4 = extraout_x8_03 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar4,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar3);
}



/* Entry: 10b4f4e80; end: 10b4f4ffb;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b4f4e80(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar3;
  long extraout_x9;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar3 + 1;
  }
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b4f6044();
  }
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b4f6044();
  }
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f6044();
  }
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x38));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b4f6044();
  }
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x40));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b4f6044();
  }
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x48));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f6044();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b4f6044();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000106af66dc(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b4f6044();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x60));
      func_0x00010b4f6044();
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4f6120();
    lVar3 = extraout_x8_06;
    if (extraout_x8_06 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b4f4ffc; end: 10b4f4fff;  */

void FUN_10b4f4ffc(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4f6104();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar3 = uVar2;
        func_0x000106af67c0();
        *(ulong *)(unaff_x21 + 0x50) = uVar3;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar3 = uVar2;
        func_0x000106af6730();
        *(ulong *)(unaff_x21 + 0x58) = uVar3;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        func_0x000106af67c0();
        *(ulong *)(unaff_x21 + 0x60) = uVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  func_0x00010b4f6050();
  if ((extraout_x8_06 & 1) == 0) {
    return;
  }
  func_0x00010b4f60f8();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4f5000; end: 10b4f5023;  */

undefined8 FUN_10b4f5000(undefined8 param_1)

{
  func_0x00010b4f60a8();
  return param_1;
}



/* Entry: 10b4f5024; end: 10b4f5027;  */

undefined8 FUN_10b4f5024(undefined8 param_1)

{
  func_0x00010b4f60a8();
  return param_1;
}



/* Entry: 10b4f5028; end: 10b4f503b;  */

void FUN_10b4f5028(void)

{
  FUN_10b4f5000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f503c; end: 10b4f5047;  */

undefined ** FUN_10b4f503c(void)

{
  return &PTR_DAT_110cf4440;
}



/* Entry: 10b4f5048; end: 10b4f50eb;  */

long * FUN_10b4f5048(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b4f5fac();
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010b4f5f10();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b4f5f50();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b4f5f10();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b4f5f50();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b4f6114();
    func_0x000107c282ac();
    param_4 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f60cc();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4f50ec; end: 10b4f5177;  */

ulong FUN_10b4f50ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + (ulong)uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b4f5178; end: 10b4f519b;  */

undefined8 FUN_10b4f5178(undefined8 param_1)

{
  func_0x00010b4f60a8();
  return param_1;
}



/* Entry: 10b4f519c; end: 10b4f519f;  */

undefined8 FUN_10b4f519c(undefined8 param_1)

{
  func_0x00010b4f60a8();
  return param_1;
}



/* Entry: 10b4f51a0; end: 10b4f51b3;  */

void FUN_10b4f51a0(void)

{
  FUN_10b4f5178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f51b4; end: 10b4f51bf;  */

undefined ** FUN_10b4f51b4(void)

{
  return &PTR_DAT_110cf4488;
}



/* Entry: 10b4f51c0; end: 10b4f522f;  */

long * FUN_10b4f51c0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4f5fac();
  if (param_1[2] != 0) {
    func_0x00010b4f6114();
    func_0x000105991a14();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b4f6114();
    func_0x000107c282cc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f60cc();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4f5230; end: 10b4f528f;  */

ulong FUN_10b4f5230(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b4f5290; end: 10b4f52cb;  */

long FUN_10b4f5290(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4f54bc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4f52cc; end: 10b4f52cf;  */

long FUN_10b4f52cc(long param_1)

{
  func_0x00010b4f60a8();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4f54bc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4f52d0; end: 10b4f52e3;  */

void FUN_10b4f52d0(void)

{
  FUN_10b4f5290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f52e4; end: 10b4f5303;  */

undefined ** FUN_10b4f52e4(void)

{
  return &PTR_DAT_110cf44e0;
}



/* Entry: 10b4f5304; end: 10b4f53e7;  */

long * FUN_10b4f5304(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b4f5fac();
  func_0x00010b4f607c(param_1[3]);
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x00010b4f60ec();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b4f6114();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_1 = (long *)0x3;
    func_0x00010b4f603c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    func_0x00010b4f5f10();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b4f5f50();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x2d) == '\x01') {
    func_0x00010b4f5f10();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b4f5f50();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f60cc();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4f53e8; end: 10b4f547b;  */

void FUN_10b4f53e8(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b4f6030(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c28098();
    iVar1 = (int)lVar3 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b4f55a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010b4f5ed8();
    iVar1 = extraout_w8 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b4f615c();
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x2c) * 2 + (uint)*(byte *)(param_1 + 0x2d) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4f6120();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b4f547c; end: 10b4f54bb;  */

void FUN_10b4f547c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4f6104();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b4f6024(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010b4f6018();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      FUN_10b4f5e74();
      *(ulong *)(unaff_x21 + 0x20) = uVar1;
    }
    else {
      FUN_10b4f547c();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x2d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2d) = 1;
  }
  func_0x00010b4f6050();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b4f60f8();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f54bc; end: 10b4f54df;  */

undefined8 FUN_10b4f54bc(undefined8 param_1)

{
  func_0x00010b4f60a8();
  return param_1;
}



/* Entry: 10b4f54e0; end: 10b4f54e3;  */

undefined8 FUN_10b4f54e0(undefined8 param_1)

{
  func_0x00010b4f60a8();
  return param_1;
}



/* Entry: 10b4f54e4; end: 10b4f54f7;  */

void FUN_10b4f54e4(void)

{
  FUN_10b4f54bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f54f8; end: 10b4f5503;  */

undefined ** FUN_10b4f54f8(void)

{
  return &PTR_DAT_110cf4530;
}



/* Entry: 10b4f5504; end: 10b4f559f;  */

long * FUN_10b4f5504(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b4f5fac();
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010b4f5f10();
    plVar2 = (long *)0xd;
    func_0x000107c280a8(0xd,param_1);
    func_0x00010b4f6210();
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b4f5f10();
    plVar3 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar2);
    func_0x00010b4f6210();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b4f6114();
    func_0x00010599ccb0();
    param_4 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f60cc();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4f55a0; end: 10b4f5607;  */

long FUN_10b4f55a0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b4f5608; end: 10b4f5633;  */

long FUN_10b4f5608(long param_1)

{
  func_0x00010b4f60a8();
  func_0x00010598e0e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f5634; end: 10b4f5637;  */

long FUN_10b4f5634(long param_1)

{
  func_0x00010b4f60a8();
  func_0x00010598e0e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f5638; end: 10b4f564b;  */

void FUN_10b4f5638(void)

{
  FUN_10b4f5608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f564c; end: 10b4f5657;  */

undefined ** FUN_10b4f564c(void)

{
  return &PTR_DAT_110cf4590;
}



/* Entry: 10b4f5658; end: 10b4f5733;  */

byte * FUN_10b4f5658(byte *param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  ulong *puVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010b4f5fac();
  uVar5 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar5) {
    func_0x00010b4f5f10();
    pbVar3 = param_1 + 2;
    *param_1 = 10;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      pbVar3[-1] = (byte)uVar5 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar5;
    puVar6 = *(ulong **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010b4f5f10();
      uVar4 = *puVar6;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar4 < 0x80) break;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar3 = param_4;
      }
      puVar6 = puVar6 + 1;
      *pbVar3 = (byte)uVar4;
    } while (puVar6 < puVar1);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b4f6114();
    func_0x000106af6920();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f60cc();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar5 = iVar7 - iVar8;
        param_3 = (ulong)uVar5;
        if (uVar5 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 10b4f5734; end: 10b4f57bf;  */

void FUN_10b4f5734(long param_1)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3eb0();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4f6120();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return;
}



/* Entry: 10b4f57c0; end: 10b4f5813;  */

void FUN_10b4f57c0(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4f61c0();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598be78();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4f61a4();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4f5814; end: 10b4f583f;  */

undefined8 * FUN_10b4f5814(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b4f2ecc(param_1,param_3);
  return param_1;
}



/* Entry: 10b4f5840; end: 10b4f586f;  */

long * FUN_10b4f5840(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4f5870; end: 10b4f5b73;  */

void FUN_10b4f5870(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f6154();
  }
  else {
    func_0x00010b4f60e0();
  }
  *puVar1 = &PTR_FUN_110cf3fa0;
  puVar1[1] = param_1;
  func_0x00010b4f613c();
  puVar1[2] = extraout_x8;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b4f5b74; end: 10b4f5c4b;  */

undefined8 * FUN_10b4f5b74(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b4f6228();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f61d8();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b4f61e0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110cf4040;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4f5fe8();
  }
  func_0x00010598dec8(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 10b4f5c4c; end: 10b4f5caf;  */

undefined8 * FUN_10b4f5c4c(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b4f61b4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f6154();
  }
  else {
    param_1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *param_1 = &PTR_FUN_110cf4090;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10b4f4770();
  return param_1;
}



/* Entry: 10b4f5cb0; end: 10b4f5d2f;  */

undefined8 * FUN_10b4f5cb0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b4f6228();
  if (param_1 == 0) {
    puVar4 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar4 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar4[1] = unaff_x20;
  *puVar4 = &PTR_FUN_110cf4130;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4f5fe8();
  }
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)puVar4 + 0x14) = 0;
  lVar2 = unaff_x19 + 0x18;
  func_0x00010b4f60b8();
  puVar4[3] = lVar2;
  lVar2 = unaff_x19 + 0x20;
  func_0x00010b4f60b8();
  puVar4[4] = lVar2;
  lVar2 = unaff_x19 + 0x28;
  func_0x00010b4f60b8();
  puVar4[5] = lVar2;
  lVar2 = unaff_x19 + 0x30;
  func_0x00010b4f60b8();
  puVar4[6] = lVar2;
  lVar2 = unaff_x19 + 0x38;
  func_0x00010b4f60b8();
  puVar4[7] = lVar2;
  lVar2 = unaff_x19 + 0x40;
  func_0x00010b4f60b8();
  puVar4[8] = lVar2;
  lVar2 = unaff_x19 + 0x48;
  func_0x00010b4f60b8();
  puVar4[9] = lVar2;
  uVar1 = *(uint *)(puVar4 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x20;
    func_0x000106af67c0();
  }
  puVar4[10] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x20;
    func_0x000106af6730();
  }
  puVar4[0xb] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    func_0x000106af67c0();
  }
  puVar4[0xc] = unaff_x20;
  *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(unaff_x19 + 0x68);
  return puVar4;
}



/* Entry: 10b4f5d30; end: 10b4f5d93;  */

undefined8 * FUN_10b4f5d30(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b4f61b4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f612c();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4f6134();
  }
  *param_1 = &PTR_FUN_110cf40e0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b4f49a0();
  return param_1;
}



/* Entry: 10b4f5d94; end: 10b4f5e33;  */

undefined8 * FUN_10b4f5d94(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010b4f61b4();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_FUN_110cf4180;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4f5fe8();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  lVar3 = unaff_x19 + 0x18;
  func_0x00010b4f60b8();
  puVar2[3] = lVar3;
  if ((*(byte *)(puVar2 + 2) & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10b4f5e74();
  }
  puVar2[4] = unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined2 *)((long)puVar2 + 0x2c) = *(undefined2 *)(unaff_x19 + 0x2c);
  *(undefined4 *)(puVar2 + 5) = uVar1;
  return puVar2;
}



/* Entry: 10b4f5e34; end: 10b4f5e73;  */

undefined8 * FUN_10b4f5e34(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x00010b4f6228();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_FUN_110cf4798;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x00010b4f6aec();
  puVar1[2] = lVar2;
  lVar2 = unaff_x19 + 0x18;
  func_0x00010b4f6aec();
  puVar1[3] = lVar2;
  lVar2 = unaff_x19 + 0x20;
  func_0x00010b4f6aec();
  puVar1[4] = lVar2;
  *(undefined4 *)(puVar1 + 7) = 0;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  puVar1[6] = *(undefined8 *)(unaff_x19 + 0x30);
  puVar1[5] = uVar3;
  return puVar1;
}



/* Entry: 10b4f5e74; end: 10b4f5ed7;  */

undefined8 * FUN_10b4f5e74(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b4f61b4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f612c();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4f6134();
  }
  *param_1 = &PTR_FUN_110cf3ff0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b4f547c();
  return param_1;
}



/* Entry: 10b4f5ed8; end: 10b4f6233;  */

void FUN_10b4f5ed8(void)

{
  return;
}



/* Entry: 10b4f6234; end: 10b4f626b;  */

long FUN_10b4f6234(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4f626c; end: 10b4f626f;  */

long FUN_10b4f626c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}


