/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b551cb4; end: 10b551ce3;  */

long FUN_10b551cb4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b551ce4(param_1);
  return param_1;
}



/* Entry: 10b551ce4; end: 10b551cf7;  */

void FUN_10b551ce4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b551bf4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b55253c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_10b551bf4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b551bf4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b552ac4();
    }
  }
  __ZdlPv();
LAB_10b551bf4:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b551cf8; end: 10b551d0b;  */

void FUN_10b551cf8(void)

{
  FUN_10b551cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b551d0c; end: 10b551d17;  */

undefined ** FUN_10b551d0c(void)

{
  return &PTR_DAT_110d056a0;
}



/* Entry: 10b551d18; end: 10b551d53;  */

void FUN_10b551d18(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10b551b98();
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



/* Entry: 10b551d54; end: 10b551e2b;  */

long * FUN_10b551d54(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    lVar5 = 0x14;
  }
  else {
    if (uVar1 != 2) goto LAB_10b551da4;
    lVar5 = 0x18;
  }
  func_0x000107c303cc(plVar2,*(long *)(param_1 + 0x18),
                      *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar5),param_2,param_3);
  param_2 = plVar2;
LAB_10b551da4:
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010b552144();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b55212c();
    param_2 = plVar3;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x00010b552144();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b55212c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b551e2c; end: 10b551ed3;  */

ulong FUN_10b551e2c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar4 = (ulong)uVar1;
  if (*(int *)(param_1 + 0x24) == 2) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010b551eec();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_10b551ea4;
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_10b551ed4();
  }
  uVar4 = uVar4 + lVar2 + 1;
LAB_10b551ea4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x20) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b551ed4; end: 10b551f03;  */

void FUN_10b551ed4(void)

{
  FUN_10b552c04();
  FUN_10b552110();
  return;
}



/* Entry: 10b551f04; end: 10b551f07;  */

void FUN_10b551f04(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_10b551ffc;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b551b98(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_113394558;
      }
      FUN_10b5526e8(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_10b551ffc;
    }
    func_0x00010b5520cc(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 1) goto LAB_10b551ffc;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_1133946a0;
      }
      func_0x00010b552a9c(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_10b551ffc;
    }
    func_0x00010b552088(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_10b551ffc:
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



/* Entry: 10b551f08; end: 10b552037;  */

void FUN_10b551f08(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_10b551ffc;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b551b98(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_113394558;
      }
      FUN_10b5526e8(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_10b551ffc;
    }
    func_0x00010b5520cc(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 1) goto LAB_10b551ffc;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_1133946a0;
      }
      func_0x00010b552a9c(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_10b551ffc;
    }
    func_0x00010b552088(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_10b551ffc:
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



/* Entry: 10b552038; end: 10b55203f;  */

void FUN_10b552038(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_DAT_110d05660;
  puVar1[1] = param_2;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b552040; end: 10b55210f;  */

void FUN_10b552040(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d05660;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b552110; end: 10b552157;  */

long FUN_10b552110(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b552158; end: 10b5521b7;  */

undefined8 * FUN_10b552158(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05710;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b55240c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b5521b8; end: 10b5521e7;  */

long FUN_10b5521b8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b552438(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5521e8; end: 10b5521eb;  */

long FUN_10b5521e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b552438(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5521ec; end: 10b5521ff;  */

void FUN_10b5521ec(void)

{
  FUN_10b5521b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b552200; end: 10b55220b;  */

undefined ** FUN_10b552200(void)

{
  return &PTR_DAT_110d05750;
}



/* Entry: 10b55220c; end: 10b552247;  */

void FUN_10b55220c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5524b4(param_1 + 0x10);
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



/* Entry: 10b552248; end: 10b5522ff;  */

long * FUN_10b552248(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b552300; end: 10b552377;  */

long FUN_10b552300(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b552378();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b552378; end: 10b5523a3;  */

long FUN_10b552378(long param_1)

{
  FUN_10b551e2c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5523a4; end: 10b5523a7;  */

void FUN_10b5523a4(long param_1,long param_2)

{
  FUN_10b5523f4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5523a8; end: 10b5523f3;  */

void FUN_10b5523a8(long param_1,long param_2)

{
  FUN_10b5523f4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5523f4; end: 10b55240b;  */

void FUN_10b5523f4(long *param_1,long param_2)

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



/* Entry: 10b55240c; end: 10b552437;  */

undefined8 * FUN_10b55240c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5523f4(param_1,param_3);
  return param_1;
}



/* Entry: 10b552438; end: 10b552467;  */

long * FUN_10b552438(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b552468; end: 10b5524b3;  */

void FUN_10b552468(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110d05710;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5524b4; end: 10b5524db;  */

void FUN_10b5524b4(ulong *param_1)

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



/* Entry: 10b5524dc; end: 10b55253b;  */

undefined8 * FUN_10b5524dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d057c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b55253c; end: 10b55256b;  */

long FUN_10b55253c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b55256c; end: 10b55256f;  */

long FUN_10b55256c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b552570; end: 10b552583;  */

void FUN_10b552570(void)

{
  FUN_10b55253c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b552584; end: 10b55258f;  */

undefined ** FUN_10b552584(void)

{
  return &PTR_DAT_110d05800;
}



/* Entry: 10b552590; end: 10b5525cb;  */

void FUN_10b552590(long param_1)

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



/* Entry: 10b5525cc; end: 10b55267b;  */

long * FUN_10b5525cc(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b552638;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b552638;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77959e);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b552638:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b55267c; end: 10b5526e3;  */

void FUN_10b55267c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5526b4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5526b4:
    iVar1 = 0;
    goto LAB_10b5526b8;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b5526b8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5526e4; end: 10b5526e7;  */

void FUN_10b5526e4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 10b5526e8; end: 10b552757;  */

void FUN_10b5526e8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 10b552758; end: 10b55275f;  */

void FUN_10b552758(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110d057c0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b552760; end: 10b5527af;  */

void FUN_10b552760(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d057c0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5527b0; end: 10b5527c3;  */

void FUN_10b5527b0(void)

{
  return;
}



/* Entry: 10b5527c4; end: 10b552823;  */

undefined8 * FUN_10b5527c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05878;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b55240c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b552824; end: 10b552857;  */

long FUN_10b552824(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b552438(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b552858; end: 10b55285b;  */

long FUN_10b552858(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b552438(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b55285c; end: 10b55286f;  */

void FUN_10b55285c(void)

{
  FUN_10b552824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b552870; end: 10b55287b;  */

undefined ** FUN_10b552870(void)

{
  return &PTR_DAT_110d058b8;
}



/* Entry: 10b55287c; end: 10b5528b7;  */

void FUN_10b55287c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5524b4(param_1 + 0x10);
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



/* Entry: 10b5528b8; end: 10b55296f;  */

long * FUN_10b5528b8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b552970; end: 10b5529e7;  */

long FUN_10b552970(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b552378();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5529e8; end: 10b5529eb;  */

void FUN_10b5529e8(long param_1,long param_2)

{
  FUN_10b5523f4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5529ec; end: 10b552a37;  */

void FUN_10b5529ec(long param_1,long param_2)

{
  FUN_10b5523f4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b552a38; end: 10b552a3f;  */

void FUN_10b552a38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110d05878;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b552a40; end: 10b552a8f;  */

void FUN_10b552a40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110d05878;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b552a90; end: 10b552ac3;  */

void FUN_10b552a90(void)

{
  return;
}



/* Entry: 10b552ac4; end: 10b552aeb;  */

long FUN_10b552ac4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b552aec; end: 10b552b33;  */

undefined8 * FUN_10b552aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d05928;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b552a9c(param_1,param_3);
  return param_1;
}



/* Entry: 10b552b34; end: 10b552b37;  */

long FUN_10b552b34(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b552b38; end: 10b552b4b;  */

void FUN_10b552b38(void)

{
  FUN_10b552ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b552b4c; end: 10b552b6b;  */

undefined ** FUN_10b552b4c(void)

{
  return &PTR_DAT_110d05968;
}



/* Entry: 10b552b6c; end: 10b552c03;  */

long * FUN_10b552b6c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b552c04; end: 10b552c5b;  */

ulong FUN_10b552c04(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b552c5c; end: 10b552c9f;  */

void FUN_10b552c5c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d05928;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b552ca0; end: 10b552ca7;  */

void FUN_10b552ca0(void)

{
  return;
}



/* Entry: 10b552ca8; end: 10b552d1b;  */

undefined8 * FUN_10b552ca8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d059e0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010b553118();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010b553118();
  param_1[3] = lVar1;
  param_3 = param_3 + 0x20;
  func_0x00010b553118();
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b552d1c; end: 10b552d4b;  */

long FUN_10b552d1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b552d4c(param_1);
  return param_1;
}



/* Entry: 10b552d4c; end: 10b552d7b;  */

/* WARNING: Possible PIC construction at 0x00010b552d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b552d64) */

void FUN_10b552d4c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b552d7c; end: 10b552d7f;  */

long FUN_10b552d7c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b552d4c(param_1);
  return param_1;
}



/* Entry: 10b552d80; end: 10b552d93;  */

void FUN_10b552d80(void)

{
  FUN_10b552d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b552d94; end: 10b552d9f;  */

undefined ** FUN_10b552d94(void)

{
  return &PTR_DAT_110d05a20;
}



/* Entry: 10b552da0; end: 10b552deb;  */

void FUN_10b552da0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
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



/* Entry: 10b552dec; end: 10b552f17;  */

long * FUN_10b552dec(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b552e30;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b552e30:
    func_0x00010b553110(puVar5,lVar1,param_3,&UNK_10f7795cc);
    param_2 = param_3;
    func_0x00010b5530fc(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b552e74;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b552e74:
    func_0x00010b553110(puVar5);
    param_2 = param_3;
    func_0x00010b5530fc(param_3,2);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_10b552ed4;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b552ed4;
  func_0x00010b553110(puVar5);
  param_2 = param_3;
  func_0x00010b5530fc(param_3,3);
LAB_10b552ed4:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b552f18; end: 10b552fcb;  */

long FUN_10b552f18(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b552f50;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b552f50:
    lVar3 = 0;
    goto LAB_10b552f54;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b552f54:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b552fcc; end: 10b552fcf;  */

void FUN_10b552fcc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
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



/* Entry: 10b552fd0; end: 10b55309f;  */

void FUN_10b552fd0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
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



/* Entry: 10b5530a0; end: 10b5530a7;  */

void FUN_10b5530a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110d059e0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5530a8; end: 10b5530fb;  */

void FUN_10b5530a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110d059e0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5530fc; end: 10b55312b;  */

long * FUN_10b5530fc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b55312c; end: 10b5531db;  */

undefined8 * FUN_10b55312c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05aa8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  func_0x000107c2a448(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 7) = 0;
  func_0x000107c2a448(param_1 + 8,param_2,param_3 + 0x40);
  param_1[10] = 0;
  return param_1;
}



/* Entry: 10b5531dc; end: 10b55320f;  */

long FUN_10b5531dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b553610(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b553210; end: 10b553213;  */

long FUN_10b553210(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b553610(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b553214; end: 10b553227;  */

void FUN_10b553214(void)

{
  FUN_10b5531dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b553228; end: 10b553233;  */

undefined ** FUN_10b553228(void)

{
  return &PTR_DAT_110d05ae8;
}



/* Entry: 10b553234; end: 10b553277;  */

void FUN_10b553234(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 10b553278; end: 10b5534ab;  */

long * FUN_10b553278(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulong *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int iVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  
  lVar15 = 8;
  plVar6 = param_1;
  for (uVar14 = (ulong)(*(uint *)(param_1 + 3) & ((int)*(uint *)(param_1 + 3) >> 0x1f ^ 0xffffffffU)
                       ); uVar14 != 0; uVar14 = uVar14 - 1) {
    uVar9 = param_1[2];
    puVar3 = (ulong *)(param_1 + 2);
    if ((uVar9 & 1) != 0) {
      puVar3 = (ulong *)(uVar9 + lVar15 + -1);
    }
    puVar12 = (undefined8 *)*puVar3;
    lVar8 = (long)*(char *)((long)puVar12 + 0x17);
    puVar5 = puVar12;
    if (lVar8 < 0) {
      lVar8 = puVar12[1];
      puVar5 = (undefined8 *)*puVar12;
    }
    func_0x000107c303d4(puVar5,lVar8,1,&UNK_10f7796ac);
    lVar8 = (long)*(char *)((long)puVar12 + 0x17);
    if (((lVar8 < 0) && (lVar8 = puVar12[1], 0x7f < lVar8)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar8)) {
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,1,puVar12,param_2);
      param_2 = plVar6;
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)lVar8;
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        puVar12 = (undefined8 *)*puVar12;
      }
      param_2 = (long *)((long)param_2 + 2);
      plVar6 = param_2;
      _memcpy(param_2,puVar12,lVar8);
      param_2 = (long *)((long)param_2 + lVar8);
    }
    lVar15 = lVar15 + 8;
  }
  uVar4 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar4) {
    FUN_10b5536a8();
    *(undefined1 *)plVar6 = 0x12;
    plVar7 = plVar6;
    while (0x7f < uVar4) {
      func_0x00010b5536b4();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar4;
    puVar11 = (uint *)param_1[6];
    puVar2 = puVar11 + (int)param_1[5];
    do {
      FUN_10b5536a8();
      uVar14 = (ulong)*puVar11;
      param_2 = (long *)((long)plVar7 + 1);
      plVar6 = plVar7;
      while (0x7f < (uint)uVar14) {
        func_0x00010b5536c8();
        uVar14 = extraout_x8;
      }
      puVar11 = puVar11 + 1;
      *(char *)plVar7 = (char)uVar14;
      plVar7 = plVar6;
    } while (puVar11 < puVar2);
  }
  uVar4 = *(uint *)(param_1 + 10);
  if (0 < (int)uVar4) {
    FUN_10b5536a8();
    *(undefined1 *)plVar6 = 0x1a;
    plVar7 = plVar6;
    while (0x7f < uVar4) {
      func_0x00010b5536b4();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar4;
    puVar11 = (uint *)param_1[9];
    puVar2 = puVar11 + (int)param_1[8];
    do {
      FUN_10b5536a8();
      uVar14 = (ulong)*puVar11;
      param_2 = (long *)((long)plVar7 + 1);
      plVar6 = plVar7;
      while (0x7f < (uint)uVar14) {
        func_0x00010b5536c8();
        uVar14 = extraout_x8_00;
      }
      puVar11 = puVar11 + 1;
      *(char *)plVar7 = (char)uVar14;
      plVar7 = plVar6;
    } while (puVar11 < puVar2);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar9 = param_1[1] & 0xfffffffffffffffe;
  uVar14 = (ulong)*(char *)(uVar9 + 0x1f);
  if ((long)uVar14 < 0) {
    lVar15 = *(long *)(uVar9 + 8);
    uVar14 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    lVar15 = uVar9 + 8;
  }
  if ((long)(int)uVar14 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar15,uVar14 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar14);
  }
  while( true ) {
    iVar13 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar10 = (int)uVar14;
    uVar14 = (ulong)(uint)(iVar10 - iVar13);
    if (iVar10 - iVar13 == 0 || iVar10 < iVar13) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar13);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar10);
}



/* Entry: 10b5534ac; end: 10b55359f;  */

void FUN_10b5534ac(long param_1)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar3;
  lVar10 = 8;
  for (uVar9 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + lVar10 + -1);
    }
    uVar6 = *puVar1;
    func_0x000107c282a0();
    uVar8 = uVar6 + uVar8;
    uVar3 = (uint)uVar8;
    lVar10 = lVar10 + 8;
  }
  lVar10 = param_1 + 0x28;
  func_0x00010b4d3e38();
  iVar7 = (int)lVar10;
  *(int *)(param_1 + 0x38) = iVar7;
  iVar2 = 0;
  if (lVar10 != 0) {
    iVar2 = ((int)LZCOUNT((long)iVar7) * -9 + 0x280U >> 6) + 1;
  }
  lVar10 = param_1 + 0x40;
  func_0x00010b4d3e38();
  iVar4 = (int)lVar10;
  *(int *)(param_1 + 0x50) = iVar4;
  iVar5 = 0;
  if (lVar10 != 0) {
    iVar5 = ((int)LZCOUNT((long)iVar4) * -9 + 0x280U >> 6) + 1;
  }
  iVar5 = iVar7 + uVar3 + iVar2 + iVar4 + iVar5;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar10 < 0) {
      lVar10 = *(long *)(uVar8 + 0x10);
    }
    iVar5 = (int)lVar10 + iVar5;
  }
  *(int *)(param_1 + 0x54) = iVar5;
  return;
}



/* Entry: 10b5535a0; end: 10b5535a3;  */

void FUN_10b5535a0(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  func_0x0001088ffb98(param_1 + 0x28,param_2 + 0x28);
  func_0x0001088ffb98(param_1 + 0x40,param_2 + 0x40);
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



/* Entry: 10b5535a4; end: 10b553607;  */

void FUN_10b5535a4(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  func_0x0001088ffb98(param_1 + 0x28,param_2 + 0x28);
  func_0x0001088ffb98(param_1 + 0x40,param_2 + 0x40);
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



/* Entry: 10b553608; end: 10b55360f;  */

void FUN_10b553608(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x58);
  }
  *puVar1 = &PTR_FUN_110d05aa8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = param_2;
  puVar1[10] = 0;
  return;
}



/* Entry: 10b553610; end: 10b5536a7;  */

long * FUN_10b553610(long *param_1)

{
  func_0x000107c2a450(param_1 + 6);
  func_0x000107c2a450(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000100069100(param_1);
  }
  return param_1;
}



/* Entry: 10b5536a8; end: 10b5536db;  */

ulong * FUN_10b5536a8(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  if (unaff_x20 < (ulong *)*unaff_x19) {
    return unaff_x20;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x20 = (ulong *)((long)puVar2 + (long)((int)unaff_x20 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x20);
  return unaff_x20;
}



/* Entry: 10b5536dc; end: 10b55377b;  */

undefined8 * FUN_10b5536dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05b70;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00010b553cac();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b553cac();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b553cac();
  param_1[5] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 10b55377c; end: 10b5537ab;  */

long FUN_10b55377c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5537ac(param_1);
  return param_1;
}



/* Entry: 10b5537ac; end: 10b5537eb;  */

void FUN_10b5537ac(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b54a368();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5537ec; end: 10b5537ef;  */

long FUN_10b5537ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5537ac(param_1);
  return param_1;
}



/* Entry: 10b5537f0; end: 10b553803;  */

void FUN_10b5537f0(void)

{
  FUN_10b55377c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b553804; end: 10b55380f;  */

undefined ** FUN_10b553804(void)

{
  return &PTR_DAT_110d05bb0;
}



/* Entry: 10b553810; end: 10b553873;  */

void FUN_10b553810(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
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



/* Entry: 10b553874; end: 10b5539f7;  */

long * FUN_10b553874(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b5538b8;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b5538b8:
    func_0x00010b553ca4(puVar8,lVar4,param_3,&UNK_10f7796ee);
    param_2 = param_3;
    func_0x00010b553c8c(param_3,1);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    if (puVar8[1] != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b5538fc;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b5538fc:
    func_0x00010b553ca4(puVar8);
    param_2 = param_3;
    func_0x00010b553c8c(param_3,2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    if (puVar8[1] == 0) goto LAB_10b55395c;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b55395c;
  func_0x00010b553ca4(puVar8);
  param_2 = param_3;
  func_0x00010b553c8c(param_3,3);
LAB_10b55395c:
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x30),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x38);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x000107c280b8(plVar1,uVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar1 + (long)iVar9;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar7);
    }
    _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar5);
  }
  return plVar1;
}



/* Entry: 10b5539f8; end: 10b553ae7;  */

long FUN_10b5539f8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b553a30;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b553a30:
    lVar3 = 0;
    goto LAB_10b553a34;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b553a34:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_10b5371f0();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}


