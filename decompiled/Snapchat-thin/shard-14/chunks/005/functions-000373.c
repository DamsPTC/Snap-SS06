/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4bc09c; end: 10b4bc0bf;  */

undefined8 FUN_10b4bc09c(undefined8 param_1)

{
  func_0x00010b4bd534();
  return param_1;
}



/* Entry: 10b4bc0c0; end: 10b4bc0c3;  */

undefined8 FUN_10b4bc0c0(undefined8 param_1)

{
  func_0x00010b4bd534();
  return param_1;
}



/* Entry: 10b4bc0c4; end: 10b4bc0d7;  */

void FUN_10b4bc0c4(void)

{
  FUN_10b4bc09c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bc0d8; end: 10b4bc0f7;  */

undefined ** FUN_10b4bc0d8(void)

{
  return &PTR_DAT_110cf05c8;
}



/* Entry: 10b4bc0f8; end: 10b4bc197;  */

long * FUN_10b4bc0f8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_1;
  plVar4 = param_3;
  if ((int)param_1[2] != 0) {
    func_0x00010b4bd594();
    func_0x000107c282e4();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b4bd594();
    func_0x00010598f43c();
    param_2 = plVar1;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b4bd594();
    func_0x000107c282ac();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b4bd594();
    func_0x0001088bdd44();
    param_2 = plVar1;
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b4bd5b4();
    if ((long)plVar4 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar3 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
        if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar5;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar3);
    }
    _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 10b4bc198; end: 10b4bc23f;  */

ulong FUN_10b4bc198(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar1;
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



/* Entry: 10b4bc240; end: 10b4bc26b;  */

undefined8 FUN_10b4bc240(undefined8 param_1)

{
  func_0x00010b4bd534();
  FUN_10b4bc26c(param_1);
  return param_1;
}



/* Entry: 10b4bc26c; end: 10b4bc2a3;  */

void FUN_10b4bc26c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b4bc09c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bc2a4; end: 10b4bc2a7;  */

undefined8 FUN_10b4bc2a4(undefined8 param_1)

{
  func_0x00010b4bd534();
  FUN_10b4bc26c(param_1);
  return param_1;
}



/* Entry: 10b4bc2a8; end: 10b4bc2bb;  */

void FUN_10b4bc2a8(void)

{
  FUN_10b4bc240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bc2bc; end: 10b4bc2c7;  */

undefined ** FUN_10b4bc2bc(void)

{
  return &PTR_DAT_110cf0608;
}



/* Entry: 10b4bc2c8; end: 10b4bc317;  */

void FUN_10b4bc2c8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b4bc0e4(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b4bc318; end: 10b4bc413;  */

long * FUN_10b4bc318(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  plVar2 = param_3;
  func_0x00010b4bd588();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    plVar2 = (long *)(ulong)*(uint *)(param_2 + 0x20);
    unaff_x20 = (long *)0x1;
    func_0x000107c303cc();
  }
  func_0x00010b4bd53c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4bc378;
  }
  else if ((int)param_2 != 0) {
LAB_10b4bc378:
    func_0x00010b4bd4b0();
    param_2 = 2;
    unaff_x20 = param_3;
    func_0x00010b4bd460();
  }
  func_0x00010b4bd53c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4bc3d4;
  }
  else if ((int)param_2 == 0) goto LAB_10b4bc3d4;
  func_0x00010b4bd4b0();
  unaff_x20 = param_3;
  func_0x00010b4bd460(param_3,3);
LAB_10b4bc3d4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4bd5b4();
  if ((long)plVar2 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar2 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar2) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar3 = (int)plVar2;
      plVar2 = (long *)(ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar4;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar1,(ulong)plVar2 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar2);
}



/* Entry: 10b4bc414; end: 10b4bc4b7;  */

long FUN_10b4bc414(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010b4bd4dc(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar1 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar1 + 1;
  }
  func_0x00010b4bd4dc(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4bd4d0();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_10b4bc198();
    func_0x00010b4bd478();
    lVar4 = lVar4 + lVar1 + extraout_x8_01 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar1 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b4bc4b8; end: 10b4bc4bb;  */

void FUN_10b4bc4b8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4bd588();
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
      FUN_10b4bd2f8(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
      *(ulong *)(unaff_x21 + 0x28) = uVar1;
    }
    else {
      func_0x00010b4bc050();
    }
  }
  func_0x00010b4bd5a0();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 10b4bc4bc; end: 10b4bc587;  */

void FUN_10b4bc4bc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4bd588();
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
      FUN_10b4bd2f8(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
      *(ulong *)(unaff_x21 + 0x28) = uVar1;
    }
    else {
      func_0x00010b4bc050();
    }
  }
  func_0x00010b4bd5a0();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 10b4bc588; end: 10b4bc5b3;  */

undefined8 * FUN_10b4bc588(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cf04e8;
  param_1[1] = param_2;
  FUN_10b4bc5b4();
  return param_1;
}



/* Entry: 10b4bc5b4; end: 10b4bc5e7;  */

void FUN_10b4bc5b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0x100000000;
  *(undefined **)(param_1 + 0x20) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10b4bc5e8; end: 10b4bc62b;  */

long FUN_10b4bc5e8(long param_1)

{
  func_0x00010b4bd534();
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x00010598e0e4(param_1 + 0x30);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4bc62c; end: 10b4bc62f;  */

long FUN_10b4bc62c(long param_1)

{
  func_0x00010b4bd534();
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x00010598e0e4(param_1 + 0x30);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4bc630; end: 10b4bc643;  */

void FUN_10b4bc630(void)

{
  FUN_10b4bc5e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bc644; end: 10b4bc64f;  */

undefined ** FUN_10b4bc644(void)

{
  return &PTR_DAT_110cf0638;
}



/* Entry: 10b4bc650; end: 10b4bc697;  */

void FUN_10b4bc650(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
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



/* Entry: 10b4bc698; end: 10b4bc90f;  */

undefined8 ** FUN_10b4bc698(undefined8 **param_1,long param_2,undefined8 **param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  long lVar6;
  undefined8 **ppuVar7;
  ulong uVar8;
  long extraout_x8;
  undefined8 **unaff_x20;
  byte *pbVar9;
  long unaff_x21;
  uint uVar10;
  long unaff_x22;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  ppuVar7 = param_3;
  func_0x00010b4bd588();
  func_0x00010b4bd53c(param_1[9]);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4bc6e4;
  }
  else if ((int)param_2 != 0) {
LAB_10b4bc6e4:
    func_0x00010b4bd4b0();
    param_2 = 1;
    param_1 = param_3;
    func_0x00010b4bd460();
    unaff_x20 = param_1;
  }
  func_0x00010b4bd53c(*(undefined8 *)(unaff_x21 + 0x50));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4bc740;
  }
  else if ((int)param_2 == 0) goto LAB_10b4bc740;
  func_0x00010b4bd4b0();
  param_1 = param_3;
  func_0x00010b4bd460(param_3,2);
  unaff_x20 = param_1;
LAB_10b4bc740:
  if (*(int *)(unaff_x21 + 0x10) != 0) {
    if ((*(int *)(unaff_x21 + 0x10) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      ppuVar5 = &puStack_78;
      func_0x00010564c19c();
      while (param_1 = ppuVar5, puVar2 = puStack_78, puStack_78 != (undefined8 *)0x0) {
        puVar4 = puStack_78 + 1;
        puVar12 = puStack_78 + 4;
        func_0x00010b4bd498();
        lVar13 = (long)*(char *)((long)puVar2 + 0x1f);
        if (lVar13 < 0) {
          puVar4 = (undefined8 *)puVar2[1];
          lVar13 = puVar2[2];
        }
        func_0x00010b4bd46c(puVar4,lVar13);
        lVar13 = (long)*(char *)((long)puVar2 + 0x37);
        if (lVar13 < 0) {
          puVar12 = (undefined8 *)puVar2[4];
          lVar13 = puVar2[5];
        }
        func_0x00010b4bd46c(puVar12,lVar13);
        ppuVar5 = &puStack_78;
        func_0x000107c27d54();
        unaff_x20 = param_1;
      }
    }
    else {
      ppuVar5 = &puStack_78;
      func_0x000105991b98(ppuVar5);
      puVar2 = apuStack_70[0];
      for (lVar13 = (long)puStack_78 << 3; ppuVar3 = ppuVar5, lVar13 != 0; lVar13 = lVar13 + -8) {
        puVar12 = (undefined8 *)*puVar2;
        ppuVar5 = (undefined8 **)(puVar12 + 3);
        func_0x00010b4bd498();
        lVar6 = (long)*(char *)((long)puVar12 + 0x17);
        puVar4 = puVar12;
        if (lVar6 < 0) {
          lVar6 = puVar12[1];
          puVar4 = (undefined8 *)*puVar12;
        }
        func_0x00010b4bd46c(puVar4,lVar6);
        lVar6 = (long)*(char *)((long)puVar12 + 0x2f);
        if (lVar6 < 0) {
          ppuVar5 = (undefined8 **)puVar12[3];
          lVar6 = puVar12[4];
        }
        func_0x00010b4bd46c(ppuVar5,lVar6);
        puVar2 = puVar2 + 1;
        unaff_x20 = ppuVar3;
      }
      param_1 = apuStack_70;
      func_0x000105991ac8();
    }
  }
  uVar10 = *(uint *)(unaff_x21 + 0x40);
  if (0 < (int)uVar10) {
    func_0x00010b4bd57c();
    pbVar9 = (byte *)((long)param_1 + 2);
    *(byte *)param_1 = 0x22;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      pbVar9[-1] = (byte)uVar10 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    pbVar9[-1] = (byte)uVar10;
    puVar11 = *(ulong **)(unaff_x21 + 0x38);
    puVar1 = puVar11 + *(int *)(unaff_x21 + 0x30);
    do {
      func_0x00010b4bd57c();
      uVar8 = *puVar11;
      ppuVar5 = param_1;
      while( true ) {
        unaff_x20 = (undefined8 **)((long)ppuVar5 + 1);
        if (uVar8 < 0x80) break;
        *(byte *)ppuVar5 = (byte)uVar8 | 0x80;
        uVar8 = uVar8 >> 7;
        ppuVar5 = unaff_x20;
      }
      puVar11 = puVar11 + 1;
      *(byte *)ppuVar5 = (byte)uVar8;
    } while (puVar11 < puVar1);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b4bd5b4();
    if ((long)ppuVar7 < 0) {
      lVar13 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar13 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar13);
    unaff_x20 = param_3;
  }
  return unaff_x20;
}



/* Entry: 10b4bc910; end: 10b4bcacf;  */

long FUN_10b4bc910(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long alStack_38 [3];
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x00010564c19c(alStack_38);
  while (alStack_38[0] != 0) {
    lVar2 = alStack_38[0] + 8;
    func_0x000105990b3c(lVar2,alStack_38[0] + 0x20);
    uVar4 = lVar2 + uVar4;
    func_0x000107c27d54(alStack_38);
  }
  lVar2 = param_1 + 0x30;
  func_0x00010b4d3eb0();
  *(int *)(param_1 + 0x40) = (int)lVar2;
  lVar5 = 0;
  if (lVar2 != 0) {
    lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  lVar5 = lVar2 + uVar4 + lVar5;
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b4bd4d0();
  }
  func_0x00010b4bd4dc(*(undefined8 *)(param_1 + 0x50));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4bd4d0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar2 + lVar5;
  }
  *(int *)(param_1 + 0x58) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b4bcad0; end: 10b4bcb03;  */

void FUN_10b4bcad0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x70) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x78) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 10b4bcb04; end: 10b4bcb2f;  */

undefined8 FUN_10b4bcb04(undefined8 param_1)

{
  func_0x00010b4bd534();
  FUN_10b4bcb30(param_1);
  return param_1;
}



/* Entry: 10b4bcb30; end: 10b4bcb7f;  */

long FUN_10b4bcb30(long param_1)

{
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b4bc240();
  }
  __ZdlPv();
  FUN_10b4bd244(param_1 + 0x48);
  FUN_10b4bd244(param_1 + 0x30);
  FUN_10b4bd244(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b4bcb80; end: 10b4bcb83;  */

undefined8 FUN_10b4bcb80(undefined8 param_1)

{
  func_0x00010b4bd534();
  FUN_10b4bcb30(param_1);
  return param_1;
}



/* Entry: 10b4bcb84; end: 10b4bcb97;  */

void FUN_10b4bcb84(void)

{
  FUN_10b4bcb04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bcb98; end: 10b4bcba3;  */

undefined ** FUN_10b4bcb98(void)

{
  return &PTR_DAT_110cf0660;
}



/* Entry: 10b4bcba4; end: 10b4bcc27;  */

void FUN_10b4bcba4(long param_1)

{
  ulong *puVar1;
  
  FUN_10b4bd2e4(param_1 + 0x18);
  FUN_10b4bd2e4(param_1 + 0x30);
  FUN_10b4bd2e4(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  func_0x000107c3025c(param_1 + 0x70);
  func_0x000107c3025c(param_1 + 0x78);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b4bc2c8(*(undefined8 *)(param_1 + 0x80));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b4bcc28; end: 10b4bced3;  */

uint * FUN_10b4bcc28(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  uVar1 = param_1[8];
  puVar2 = param_1;
  puVar4 = param_2;
  for (uVar8 = 0; uVar1 != uVar8; uVar8 = uVar8 + 1) {
    FUN_10b4bd41c();
    puVar2 = (uint *)0x1;
    func_0x00010b4bd448();
    puVar4 = puVar2;
  }
  uVar1 = param_1[0xe];
  for (uVar8 = 0; uVar1 != uVar8; uVar8 = uVar8 + 1) {
    FUN_10b4bd41c();
    puVar2 = (uint *)0x2;
    func_0x00010b4bd448();
    puVar4 = puVar2;
  }
  uVar8 = param_1[0x14];
  for (puVar10 = (undefined8 *)0x0; uVar8 != (uint)puVar10;
      puVar10 = (undefined8 *)(ulong)((uint)puVar10 + 1)) {
    FUN_10b4bd41c();
    puVar2 = (uint *)0x3;
    func_0x00010b4bd448();
    puVar4 = puVar2;
  }
  puVar7 = puVar2;
  if (param_1[0x26] != 0) {
    func_0x00010b4bd43c();
    puVar7 = (uint *)(ulong)param_1[0x26];
    param_2 = (uint *)0x20;
    func_0x000107c280a8(0x20,puVar2);
    func_0x000107c280a8();
    puVar4 = puVar7;
  }
  puVar2 = puVar7;
  if (*(long *)(param_1 + 0x22) != 0) {
    func_0x00010b4bd43c();
    puVar2 = (uint *)0x28;
    func_0x000107c280a8();
    func_0x00010b4bd570();
    param_2 = puVar7;
    puVar4 = puVar2;
  }
  puVar7 = puVar2;
  if (*(long *)(param_1 + 0x24) != 0) {
    func_0x00010b4bd43c();
    puVar7 = (uint *)0x30;
    func_0x000107c280a8();
    func_0x00010b4bd570();
    param_2 = puVar2;
    puVar4 = puVar7;
  }
  if ((param_1[4] & 1) != 0) {
    param_2 = *(uint **)(param_1 + 0x20);
    puVar7 = (uint *)0x7;
    func_0x00010b4bd448(7,param_2,param_2[5]);
    puVar4 = puVar7;
  }
  puVar2 = puVar7;
  if (param_1[0x27] != 0) {
    func_0x00010b4bd43c();
    puVar2 = (uint *)(ulong)param_1[0x27];
    param_2 = (uint *)0x40;
    func_0x000107c280a8(0x40,puVar7);
    func_0x000107c280b8();
    puVar4 = puVar2;
  }
  func_0x00010b4bd53c(*(undefined8 *)(param_1 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (uint *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (undefined8 *)*puVar10;
      goto LAB_10b4bcdac;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)param_2 != 0) {
LAB_10b4bcdac:
      func_0x00010b4bd4b0(puVar3);
      param_2 = (uint *)0x9;
      puVar2 = param_3;
      func_0x00010b4bd504(param_3,9,puVar10);
      puVar4 = puVar2;
    }
  }
  if (param_1[0x28] != 0) {
    func_0x00010b4bd43c();
    uVar8 = param_1[0x28];
    puVar10 = (undefined8 *)(ulong)uVar8;
    puVar7 = (uint *)0x55;
    func_0x000107c280a8();
    puVar4 = puVar7 + 1;
    *puVar7 = uVar8;
    param_2 = puVar2;
  }
  func_0x00010b4bd53c(*(undefined8 *)(param_1 + 0x1a));
  if ((long)param_2 < 0) {
    if (puVar10[1] == 0) goto LAB_10b4bce34;
    puVar3 = (undefined8 *)*puVar10;
  }
  else {
    puVar3 = puVar10;
    if ((int)param_2 == 0) goto LAB_10b4bce34;
  }
  func_0x00010b4bd4b0(puVar3);
  puVar4 = param_3;
  func_0x00010b4bd504(param_3,0xb,puVar10);
LAB_10b4bce34:
  lVar6 = (long)*(char *)((*(ulong *)(param_1 + 0x1c) & 0xfffffffffffffffc) + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)((*(ulong *)(param_1 + 0x1c) & 0xfffffffffffffffc) + 8);
  }
  if (lVar6 != 0) {
    puVar4 = param_3;
    func_0x00010b4bd504(param_3,0xc);
  }
  uVar5 = *(ulong *)(param_1 + 0x1e) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    puVar4 = param_3;
    func_0x00010b4bd504(param_3,0xe);
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    func_0x00010b4bd5b4();
    if ((long)uVar5 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      uVar5 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if (*(long *)param_3 - (long)puVar4 < (long)(int)uVar5) {
      while( true ) {
        iVar11 = ((int)*(undefined8 *)param_3 - (int)puVar4) + 0x10;
        iVar9 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar9 - iVar11);
        if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
        func_0x00010b4d5738();
        lVar6 = (long)puVar4 + (long)iVar11;
        puVar4 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (uint *)((long)puVar4 + (long)iVar9);
    }
    _memcpy(puVar4,lVar6,uVar5 & 0xffffffff);
    return (uint *)((long)puVar4 + (long)(int)uVar5);
  }
  return puVar4;
}



/* Entry: 10b4bced4; end: 10b4bd07f;  */

void FUN_10b4bced4(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)*(int *)(param_1 + 0x20);
  lVar3 = param_1;
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x00010b4bd560();
    lVar5 = lVar3 + lVar5;
  }
  func_0x00010b4bd4e8();
  for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x00010b4bd560();
    lVar5 = lVar3 + lVar5;
  }
  iVar2 = (int)lVar5;
  func_0x00010b4bd4e8();
  for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x00010b4bd560();
    lVar5 = lVar3 + lVar5;
    iVar2 = (int)lVar5;
  }
  func_0x00010b4bd4dc(*(undefined8 *)(param_1 + 0x60));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4bd4d0();
  }
  func_0x00010b4bd4dc(*(undefined8 *)(param_1 + 0x68));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4bd4d0();
  }
  func_0x00010b4bd4dc(*(undefined8 *)(param_1 + 0x70));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c28098();
    func_0x00010b4bd4d0();
  }
  func_0x00010b4bd4dc(*(undefined8 *)(param_1 + 0x78));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c28098();
    func_0x00010b4bd4d0();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
    FUN_10b4bc414();
    func_0x00010b4bd478();
    iVar2 = iVar2 + iVar1 + extraout_w8 + 1;
  }
  iVar1 = -9;
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010b4bd548();
    iVar1 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010b4bd548();
    iVar1 = extraout_w8_01;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT(*(int *)(param_1 + 0x98)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x9c)) * iVar1 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar5 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b4bd080; end: 10b4bd09b;  */

long FUN_10b4bd080(long param_1)

{
  long extraout_x8;
  
  FUN_10b4bc910();
  func_0x00010b4bd478();
  return param_1 + extraout_x8;
}



/* Entry: 10b4bd09c; end: 10b4bd213;  */

void FUN_10b4bd09c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  func_0x00010b4bd588();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_10b4bd214(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b4bd214(unaff_x21 + 0x30,unaff_x20 + 0x30);
  lVar1 = unaff_x20 + 0x48;
  FUN_10b4bd214(unaff_x21 + 0x48);
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x60));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x60);
  }
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x68));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x68);
  }
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x70));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x70);
  }
  func_0x00010b4bd4c4(*(undefined8 *)(unaff_x20 + 0x78));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4bd4b8();
    }
    func_0x000107c30248(unaff_x21 + 0x78);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x80) == 0) {
      FUN_10b4bd36c(uVar3,*(undefined8 *)(unaff_x20 + 0x80));
      *(ulong *)(unaff_x21 + 0x80) = uVar3;
    }
    else {
      FUN_10b4bc4bc();
    }
  }
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    *(long *)(unaff_x21 + 0x88) = *(long *)(unaff_x20 + 0x88);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    *(int *)(unaff_x21 + 0x9c) = *(int *)(unaff_x20 + 0x9c);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  func_0x00010b4bd5a0();
  if ((extraout_x8_03 & 1) != 0) {
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



/* Entry: 10b4bd214; end: 10b4bd243;  */

void FUN_10b4bd214(long *param_1,long param_2)

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



/* Entry: 10b4bd244; end: 10b4bd273;  */

long * FUN_10b4bd244(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4bd274; end: 10b4bd2e3;  */

long FUN_10b4bd274(long param_1)

{
  FUN_10b4bd244(param_1 + 0x38);
  FUN_10b4bd244(param_1 + 0x20);
  FUN_10b4bd244(param_1 + 8);
  return param_1;
}



/* Entry: 10b4bd2e4; end: 10b4bd2f7;  */

void FUN_10b4bd2e4(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b4bd2f8; end: 10b4bd36b;  */

undefined8 * FUN_10b4bd2f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf0498;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010b4bc050();
  return puVar1;
}



/* Entry: 10b4bd36c; end: 10b4bd41b;  */

undefined8 * FUN_10b4bd36c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf0538;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[4] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b4bd2f8(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar1[5] = param_1;
  return puVar1;
}



/* Entry: 10b4bd41c; end: 10b4bd5bf;  */

void FUN_10b4bd41c(void)

{
  return;
}



/* Entry: 10b4bd5c0; end: 10b4bd5eb;  */

undefined8 FUN_10b4bd5c0(undefined8 param_1)

{
  func_0x00010b4bebdc();
  FUN_10b4bd5ec(param_1);
  return param_1;
}



/* Entry: 10b4bd5ec; end: 10b4bd623;  */

void FUN_10b4bd5ec(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4bda78();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4be504();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bd624; end: 10b4bd627;  */

undefined8 FUN_10b4bd624(undefined8 param_1)

{
  func_0x00010b4bebdc();
  FUN_10b4bd5ec(param_1);
  return param_1;
}



/* Entry: 10b4bd628; end: 10b4bd63b;  */

void FUN_10b4bd628(void)

{
  FUN_10b4bd5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bd63c; end: 10b4bd647;  */

undefined ** FUN_10b4bd63c(void)

{
  return &PTR_DAT_110cf0920;
}



/* Entry: 10b4bd648; end: 10b4bd6c7;  */

void FUN_10b4bd648(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4bd698(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4bd6c8(param_1[4]);
    }
  }
  func_0x00010b4beca0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b4bd6c8; end: 10b4bd6db;  */

void FUN_10b4bd6c8(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b4bd6dc; end: 10b4bd7eb;  */

long * FUN_10b4bd6dc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4beb8c();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x1;
    func_0x00010b4bebcc();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x2;
    func_0x00010b4bebcc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4bec30();
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



/* Entry: 10b4bd7ec; end: 10b4bd993;  */

void FUN_10b4bd7ec(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b4beb9c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b4bec88();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b4be7fc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b4bd880();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b4be8a4();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b4bd994();
      }
    }
  }
  func_0x00010b4bec14();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b4bebbc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4bd994; end: 10b4bd9bb;  */

void FUN_10b4bd994(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 10b4bd9bc; end: 10b4bda77;  */

void FUN_10b4bd9bc(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b4bda3c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b4be300();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b4bda3c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b4be15c();
    }
  }
  else {
    if (iVar1 != 1) goto LAB_10b4bda3c;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b4bda3c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b4be008();
    }
  }
  __ZdlPv();
LAB_10b4bda3c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b4bda78; end: 10b4bdaa3;  */

undefined8 FUN_10b4bda78(undefined8 param_1)

{
  func_0x00010b4bebdc();
  FUN_10b4bdaa4(param_1);
  return param_1;
}



/* Entry: 10b4bdaa4; end: 10b4bdab7;  */

void FUN_10b4bdaa4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b4bda3c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b4be300();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b4bda3c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b4be15c();
    }
  }
  else {
    if (iVar1 != 1) goto LAB_10b4bda3c;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b4bda3c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b4be008();
    }
  }
  __ZdlPv();
LAB_10b4bda3c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b4bdab8; end: 10b4bdacb;  */

void FUN_10b4bdab8(void)

{
  FUN_10b4bda78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bdacc; end: 10b4bdae3;  */

long FUN_10b4bdacc(long param_1)

{
  func_0x00010b4bebdc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4bddac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4bdae4; end: 10b4bdbd3;  */

long * FUN_10b4bdae4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b4beb8c();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x1c) - 1 < 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x14);
    func_0x00010b4bebcc();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b4bec30();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
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



/* Entry: 10b4bdbd4; end: 10b4bdbd7;  */

void FUN_10b4bdbd4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b4beb9c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b4bec88();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b4bd978;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b4bd9bc();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00010b4bec48();
      func_0x00010b4bdcf0();
      goto LAB_10b4bd978;
    }
    func_0x00010b4bea04();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b4bec48();
      FUN_10b4bdc64();
      goto LAB_10b4bd978;
    }
    func_0x00010b4be980();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_10b4bd978;
    if (iVar2 == 1) {
      func_0x00010b4bec48();
      FUN_10b4bdbd8();
      goto LAB_10b4bd978;
    }
    FUN_10b4be914();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b4bd978:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4bebbc();
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



/* Entry: 10b4bdbd8; end: 10b4bdc63;  */

void FUN_10b4bdbd8(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x00010b4beaa4();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_10b4bdf94();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4bebbc();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b4bdc64; end: 10b4bddab;  */

void FUN_10b4bdc64(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b4beb9c();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b4bec88();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4bec28();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b4bdf94();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4bec28();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b4bdf94();
      }
    }
  }
  func_0x00010b4bec14();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b4bebbc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4bddac; end: 10b4bddd7;  */

long FUN_10b4bddac(long param_1)

{
  func_0x00010b4bebdc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4bddd8; end: 10b4bdddb;  */

long FUN_10b4bddd8(long param_1)

{
  func_0x00010b4bebdc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4bdddc; end: 10b4bddef;  */

void FUN_10b4bdddc(void)

{
  FUN_10b4bddac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bddf0; end: 10b4bddfb;  */

undefined ** FUN_10b4bddf0(void)

{
  return &PTR_DAT_110cf09a8;
}



/* Entry: 10b4bddfc; end: 10b4bde33;  */

void FUN_10b4bddfc(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b4bde34; end: 10b4bdf0b;  */

long * FUN_10b4bde34(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar5 + 0x17);
  plVar6 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar5[1];
    if (lVar3 == 0) goto LAB_10b4bdea0;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_10b4bdea0;
  }
  func_0x000107c303d4(plVar1,lVar3,1,&UNK_10f773c4b);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar5,param_2);
  plVar6 = plVar5;
  param_2 = plVar1;
LAB_10b4bdea0:
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar5 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar5);
    func_0x000107c280a8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b4bec30();
  if ((long)plVar6 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar6) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
      if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar6);
}



/* Entry: 10b4bdf0c; end: 10b4bdf8f;  */

void FUN_10b4bdf0c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b4bdf44;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b4bdf44:
    iVar1 = 0;
    goto LAB_10b4bdf48;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b4bdf48:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4bec3c();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b4bdf90; end: 10b4bdf93;  */

void FUN_10b4bdf90(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4bec94();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b4bdf94; end: 10b4be007;  */

void FUN_10b4bdf94(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4bec94();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b4be008; end: 10b4be03b;  */

long FUN_10b4be008(long param_1)

{
  func_0x00010b4bebdc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4bddac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4be03c; end: 10b4be04f;  */

void FUN_10b4be03c(void)

{
  FUN_10b4be008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4be050; end: 10b4be05b;  */

undefined ** FUN_10b4be050(void)

{
  return &PTR_DAT_110cf09e8;
}



/* Entry: 10b4be05c; end: 10b4be13b;  */

void FUN_10b4be05c(ulong *param_1)

{
  ulong extraout_x8;
  
  if ((param_1[2] & 1) != 0) {
    func_0x00010b4bec68();
  }
  func_0x00010b4beca0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b4be13c; end: 10b4be157;  */

long FUN_10b4be13c(long param_1)

{
  long extraout_x8;
  
  FUN_10b4bdf0c();
  func_0x00010b4beb20();
  return param_1 + extraout_x8;
}



/* Entry: 10b4be158; end: 10b4be15b;  */

void FUN_10b4be158(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x00010b4beaa4();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_10b4bdf94();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4bebbc();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b4be15c; end: 10b4be19f;  */

long FUN_10b4be15c(long param_1)

{
  func_0x00010b4bebdc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4bddac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4bddac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4be1a0; end: 10b4be1b3;  */

void FUN_10b4be1a0(void)

{
  FUN_10b4be15c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4be1b4; end: 10b4be1bf;  */

undefined ** FUN_10b4be1b4(void)

{
  return &PTR_DAT_110cf0a28;
}



/* Entry: 10b4be1c0; end: 10b4be20b;  */

void FUN_10b4be1c0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4bec68();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4bddfc(param_1[4]);
    }
  }
  func_0x00010b4beca0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b4be20c; end: 10b4be2fb;  */

long * FUN_10b4be20c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4beb8c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010b4beb58();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)0x2;
    func_0x00010b4bebcc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4bec30();
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



/* Entry: 10b4be2fc; end: 10b4be2ff;  */

void FUN_10b4be2fc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b4beb9c();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b4bec88();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4bec28();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b4bdf94();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4bec28();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b4bdf94();
      }
    }
  }
  func_0x00010b4bec14();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b4bebbc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4be300; end: 10b4be353;  */

long FUN_10b4be300(long param_1)

{
  func_0x00010b4bebdc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4bddac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4bddac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b4bddac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4be354; end: 10b4be367;  */

void FUN_10b4be354(void)

{
  FUN_10b4be300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4be368; end: 10b4be373;  */

undefined ** FUN_10b4be368(void)

{
  return &PTR_DAT_110cf0a70;
}



/* Entry: 10b4be374; end: 10b4be3d7;  */

void FUN_10b4be374(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4bec68();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4bddfc(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b4bddfc(param_1[5]);
    }
  }
  func_0x00010b4beca0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 10b4be3d8; end: 10b4be4ff;  */

long * FUN_10b4be3d8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4beb8c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010b4beb58();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)0x2;
    func_0x00010b4bebcc();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x1c);
    param_4 = (long *)0x3;
    func_0x00010b4bebcc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b4bec30();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b4be500; end: 10b4be503;  */

void FUN_10b4be500(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b4beb9c();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b4bec88();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4bec28();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b4bdf94();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4bec28();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b4bdf94();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4bec28();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b4bdf94();
      }
    }
  }
  func_0x00010b4bec14();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b4bebbc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4be504; end: 10b4be527;  */

undefined8 FUN_10b4be504(undefined8 param_1)

{
  func_0x00010b4bebdc();
  return param_1;
}



/* Entry: 10b4be528; end: 10b4be52b;  */

undefined8 FUN_10b4be528(undefined8 param_1)

{
  func_0x00010b4bebdc();
  return param_1;
}



/* Entry: 10b4be52c; end: 10b4be53f;  */

void FUN_10b4be52c(void)

{
  FUN_10b4be504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4be540; end: 10b4be54b;  */

undefined ** FUN_10b4be540(void)

{
  return &PTR_DAT_110cf0ac0;
}



/* Entry: 10b4be54c; end: 10b4be5c7;  */

long * FUN_10b4be54c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b4beb8c();
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b4bec30();
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



/* Entry: 10b4be5c8; end: 10b4be64f;  */

long FUN_10b4be5c8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b4be650; end: 10b4be7fb;  */

void FUN_10b4be650(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cf0700;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b4be7fc; end: 10b4be8a3;  */

undefined8 * FUN_10b4be7fc(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4bebf0();
  }
  else {
    func_0x00010b4bec70();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110cf0890;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4beb6c();
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  if (iVar1 == 3) {
    func_0x00010b4bea04(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else if (iVar1 == 2) {
    func_0x00010b4be980(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar1 != 1) {
      return puVar2;
    }
    FUN_10b4be914(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  puVar2[2] = param_1;
  return puVar2;
}



/* Entry: 10b4be8a4; end: 10b4be913;  */

undefined8 * FUN_10b4be8a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cf0700;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  FUN_10b4bd994();
  return puVar1;
}



/* Entry: 10b4be914; end: 10b4beb13;  */

undefined8 * FUN_10b4be914(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b4bec94();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4bebf0();
  }
  else {
    func_0x00010b4bebb0();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x19;
  *param_1 = &PTR_FUN_110cf0840;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4beb6c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4bebe4();
  }
  param_1[3] = puVar2;
  return param_1;
}



/* Entry: 10b4beb14; end: 10b4becab;  */

void FUN_10b4beb14(void)

{
  return;
}


