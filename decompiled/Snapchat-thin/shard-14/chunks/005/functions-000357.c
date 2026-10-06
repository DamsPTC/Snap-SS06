/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b484d6c; end: 10b484d77;  */

undefined ** FUN_10b484d6c(void)

{
  return &PTR_DAT_110ceb460;
}



/* Entry: 10b484d78; end: 10b484dcb;  */

void FUN_10b484d78(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b48a3a4(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b484dcc; end: 10b484ebf;  */

long * FUN_10b484dcc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,param_3);
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x28),plVar1);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b484e74;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b484e74;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f76ef18);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,3,puVar8,plVar2);
  plVar2 = plVar1;
LAB_10b484e74:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar2 + (long)iVar9;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar7);
  }
  _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)uVar5);
}



/* Entry: 10b484ec0; end: 10b484f63;  */

long FUN_10b484ec0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b484ef8;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b484ef8:
    lVar3 = 0;
    goto LAB_10b484efc;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b484efc:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b47ce34();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
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



/* Entry: 10b484f64; end: 10b484f67;  */

void FUN_10b484f64(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_10b47ce60(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b48a630();
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b484f68; end: 10b485047;  */

void FUN_10b484f68(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_10b47ce60(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b48a630();
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b485048; end: 10b48507f;  */

void FUN_10b485048(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b484d78();
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_10b47ce60(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b48a630();
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b485080; end: 10b4850c3;  */

undefined1  [16] FUN_10b485080(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  puVar4 = (undefined1 *)(param_2 + 0x20);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x20); puVar3 != (undefined1 *)(param_1 + 0x30);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x30);
  return auVar7;
}



/* Entry: 10b4850c4; end: 10b485117;  */

void FUN_10b4850c4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110ceb420;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &DAT_11383d918;
  return;
}



/* Entry: 10b485118; end: 10b48513b;  */

void FUN_10b485118(void)

{
  return;
}



/* Entry: 10b48513c; end: 10b48515f;  */

undefined8 FUN_10b48513c(undefined8 param_1)

{
  func_0x00010b4861b4();
  return param_1;
}



/* Entry: 10b485160; end: 10b485163;  */

undefined8 FUN_10b485160(undefined8 param_1)

{
  func_0x00010b4861b4();
  return param_1;
}



/* Entry: 10b485164; end: 10b485177;  */

void FUN_10b485164(void)

{
  FUN_10b48513c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b485178; end: 10b485197;  */

undefined ** FUN_10b485178(void)

{
  return &PTR_DAT_110ceb5b0;
}



/* Entry: 10b485198; end: 10b485227;  */

long * FUN_10b485198(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(param_2,uVar2);
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



/* Entry: 10b485228; end: 10b485293;  */

ulong FUN_10b485228(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b485294; end: 10b4852b7;  */

undefined8 FUN_10b485294(undefined8 param_1)

{
  func_0x00010b4861b4();
  return param_1;
}



/* Entry: 10b4852b8; end: 10b4852bb;  */

undefined8 FUN_10b4852b8(undefined8 param_1)

{
  func_0x00010b4861b4();
  return param_1;
}



/* Entry: 10b4852bc; end: 10b4852cf;  */

void FUN_10b4852bc(void)

{
  FUN_10b485294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4852d0; end: 10b4852ef;  */

undefined ** FUN_10b4852d0(void)

{
  return &PTR_DAT_110ceb5f0;
}



/* Entry: 10b4852f0; end: 10b485373;  */

long * FUN_10b4852f0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar1);
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar7;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 10b485374; end: 10b4853db;  */

ulong FUN_10b485374(long param_1)

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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b4853dc; end: 10b485407;  */

undefined8 * FUN_10b4853dc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ceb570;
  param_1[1] = param_2;
  FUN_10b485408();
  return param_1;
}



/* Entry: 10b485408; end: 10b485453;  */

void FUN_10b485408(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  return;
}



/* Entry: 10b485454; end: 10b4855b7;  */

undefined8 * FUN_10b485454(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceb570;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x00010598fd00(param_1 + 3,param_2,param_3 + 0x18);
  func_0x0001088f25c8(param_1 + 6,param_2,param_3 + 0x30);
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x0001088f25c8(param_1 + 9,param_2,param_3 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar2 = param_3 + 0x60;
  func_0x000107c2809c(lVar2,param_2);
  param_1[0xc] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b486030(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4861a0();
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4861a0();
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4861a0();
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b486098(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x98);
  uVar3 = *(undefined8 *)(param_3 + 0x90);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0xa0);
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  return param_1;
}



/* Entry: 10b4855b8; end: 10b4855e3;  */

undefined8 FUN_10b4855b8(undefined8 param_1)

{
  func_0x00010b4861b4();
  FUN_10b4855e4(param_1);
  return param_1;
}



/* Entry: 10b4855e4; end: 10b48565b;  */

long FUN_10b4855e4(long param_1)

{
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b485294();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b48513c();
  }
  __ZdlPv();
  func_0x0001088f2648(param_1 + 0x48);
  func_0x0001088f2648(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b48565c; end: 10b48565f;  */

undefined8 FUN_10b48565c(undefined8 param_1)

{
  func_0x00010b4861b4();
  FUN_10b4855e4(param_1);
  return param_1;
}



/* Entry: 10b485660; end: 10b485673;  */

void FUN_10b485660(void)

{
  FUN_10b4855b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b485674; end: 10b48567f;  */

undefined ** FUN_10b485674(void)

{
  return &PTR_DAT_110ceb638;
}



/* Entry: 10b485680; end: 10b485733;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b485680(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c282c0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  func_0x000107c3025c(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4852dc(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b485184(*(undefined8 *)(param_1 + 0x88));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
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



/* Entry: 10b485734; end: 10b485afb;  */

long * FUN_10b485734(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int iVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  
  uVar3 = *(uint *)(param_1 + 2);
  plVar5 = param_1;
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)0x1;
    func_0x00010b486128(1,param_1[0xd],*(undefined4 *)(param_1[0xd] + 0x18));
    param_2 = plVar5;
  }
  puVar11 = (undefined8 *)(param_1[0xc] & 0xfffffffffffffffc);
  lVar7 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar7 < 0) {
    lVar7 = puVar11[1];
    if (lVar7 == 0) goto LAB_10b4857d0;
    puVar13 = (undefined8 *)*puVar11;
  }
  else {
    puVar13 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10b4857d0;
  }
  func_0x000107c303d4(puVar13,lVar7,1,&UNK_10f76ef51);
  plVar5 = param_3;
  func_0x000107c280a0(param_3,2,puVar11,param_2);
  param_2 = plVar5;
LAB_10b4857d0:
  lVar7 = 8;
  for (uVar15 = (ulong)(*(uint *)(param_1 + 4) & ((int)*(uint *)(param_1 + 4) >> 0x1f ^ 0xffffffffU)
                       ); uVar15 != 0; uVar15 = uVar15 - 1) {
    uVar9 = param_1[3];
    puVar12 = (ulong *)(param_1 + 3);
    if ((uVar9 & 1) != 0) {
      puVar12 = (ulong *)(uVar9 + lVar7 + -1);
    }
    puVar13 = (undefined8 *)*puVar12;
    lVar8 = (long)*(char *)((long)puVar13 + 0x17);
    puVar11 = puVar13;
    if (lVar8 < 0) {
      lVar8 = puVar13[1];
      puVar11 = (undefined8 *)*puVar13;
    }
    func_0x000107c303d4(puVar11,lVar8,1,&UNK_10f76ef7f);
    lVar8 = (long)*(char *)((long)puVar13 + 0x17);
    if (((lVar8 < 0) && (lVar8 = puVar13[1], 0x7f < lVar8)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar8)) {
      plVar5 = param_3;
      func_0x00010b4d5120(param_3,3,puVar13,param_2);
      param_2 = plVar5;
    }
    else {
      *(undefined1 *)param_2 = 0x1a;
      *(char *)((long)param_2 + 1) = (char)lVar8;
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        puVar13 = (undefined8 *)*puVar13;
      }
      param_2 = (long *)((long)param_2 + 2);
      plVar5 = param_2;
      _memcpy(param_2,puVar13,lVar8);
      param_2 = (long *)((long)param_2 + lVar8);
    }
    lVar7 = lVar7 + 8;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar5 = (long *)0x4;
    func_0x00010b486128(4,param_1[0xe],*(undefined4 *)(param_1[0xe] + 0x1c));
    param_2 = plVar5;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    plVar5 = (long *)0x5;
    func_0x00010b486128(5,param_1[0xf],*(undefined4 *)(param_1[0xf] + 0x1c));
    param_2 = plVar5;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar4) {
    func_0x00010b48611c();
    *(undefined1 *)plVar5 = 0x32;
    plVar6 = plVar5;
    while (0x7f < uVar4) {
      func_0x00010b4861e8();
    }
    *(char *)((long)plVar5 + 1) = (char)uVar4;
    puVar12 = (ulong *)param_1[7];
    puVar2 = puVar12 + (int)param_1[6];
    do {
      func_0x00010b48611c();
      uVar15 = *puVar12;
      param_2 = (long *)((long)plVar6 + 1);
      plVar5 = plVar6;
      while (0x7f < uVar15) {
        func_0x00010b4861d4();
        uVar15 = extraout_x8;
      }
      puVar12 = puVar12 + 1;
      *(char *)plVar6 = (char)uVar15;
      plVar6 = plVar5;
    } while (puVar12 < puVar2);
  }
  uVar4 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar4) {
    func_0x00010b48611c();
    *(undefined1 *)plVar5 = 0x3a;
    plVar6 = plVar5;
    while (0x7f < uVar4) {
      func_0x00010b4861e8();
    }
    *(char *)((long)plVar5 + 1) = (char)uVar4;
    puVar12 = (ulong *)param_1[10];
    puVar2 = puVar12 + (int)param_1[9];
    do {
      func_0x00010b48611c();
      uVar15 = *puVar12;
      param_2 = (long *)((long)plVar6 + 1);
      plVar5 = plVar6;
      while (0x7f < uVar15) {
        func_0x00010b4861d4();
        uVar15 = extraout_x8_00;
      }
      puVar12 = puVar12 + 1;
      *(char *)plVar6 = (char)uVar15;
      plVar6 = plVar5;
    } while (puVar12 < puVar2);
  }
  if ((uVar3 >> 3 & 1) != 0) {
    plVar5 = (long *)0x8;
    func_0x00010b486128(8,param_1[0x10],*(undefined4 *)(param_1[0x10] + 0x1c));
    param_2 = plVar5;
  }
  plVar6 = plVar5;
  if ((int)param_1[0x12] != 0) {
    func_0x00010b48611c();
    plVar6 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar5);
    func_0x00010b486134();
    param_2 = plVar6;
  }
  plVar5 = plVar6;
  if (*(int *)((long)param_1 + 0x94) != 0) {
    func_0x00010b48611c();
    plVar5 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar6);
    func_0x00010b486134();
    param_2 = plVar5;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    plVar5 = (long *)0xb;
    func_0x00010b486128(0xb,param_1[0x11],*(undefined4 *)(param_1[0x11] + 0x18));
    param_2 = plVar5;
  }
  plVar6 = plVar5;
  if ((int)param_1[0x13] != 0) {
    func_0x00010b48611c();
    plVar6 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar5);
    func_0x00010b486134();
    param_2 = plVar6;
  }
  plVar5 = plVar6;
  if (*(int *)((long)param_1 + 0x9c) != 0) {
    func_0x00010b48611c();
    plVar5 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar6);
    func_0x00010b486134();
    param_2 = plVar5;
  }
  if ((int)param_1[0x14] != 0) {
    func_0x00010b48611c();
    param_2 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar5);
    func_0x00010b486134();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar9 = param_1[1] & 0xfffffffffffffffe;
  uVar15 = (ulong)*(char *)(uVar9 + 0x1f);
  if ((long)uVar15 < 0) {
    lVar7 = *(long *)(uVar9 + 8);
    uVar15 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    lVar7 = uVar9 + 8;
  }
  if ((long)(int)uVar15 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar7,uVar15 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar15);
  }
  while( true ) {
    iVar14 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar10 = (int)uVar15;
    uVar15 = (ulong)(uint)(iVar10 - iVar14);
    if (iVar10 - iVar14 == 0 || iVar10 < iVar14) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar14);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar10);
}



/* Entry: 10b485afc; end: 10b485cd3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b485afc(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar7 = (ulong)uVar2;
  lVar9 = 8;
  for (uVar8 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar8 != 0; uVar8 = uVar8 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar9 + -1);
    }
    uVar4 = *puVar1;
    func_0x000107c282a0();
    uVar7 = uVar4 + uVar7;
    lVar9 = lVar9 + 8;
  }
  lVar9 = param_1 + 0x30;
  func_0x00010b4d3edc();
  *(int *)(param_1 + 0x40) = (int)lVar9;
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (ulong)((int)LZCOUNT((long)(int)lVar9) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = param_1 + 0x48;
  func_0x00010b4d3edc();
  *(int *)(param_1 + 0x58) = (int)lVar3;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
  }
  uVar8 = *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar8 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar8 + 8);
  }
  lVar5 = lVar9 + uVar7 + lVar10 + lVar3 + lVar5;
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4861c8();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x1f) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b485374(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b486154();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x0001059918cc(*(undefined8 *)(param_1 + 0x70));
      func_0x00010b4861c8();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x0001059918cc(*(undefined8 *)(param_1 + 0x78));
      func_0x00010b4861c8();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x0001059918cc(*(undefined8 *)(param_1 + 0x80));
      func_0x00010b4861c8();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      FUN_10b485228(*(undefined8 *)(param_1 + 0x88));
      func_0x00010b486154();
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    func_0x00010b486100();
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    func_0x00010b486100();
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    func_0x00010b486100();
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    func_0x00010b486100();
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    func_0x00010b486100();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar7 + 0x10);
    }
    lVar5 = lVar9 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b485cd4; end: 10b485cd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b485cd4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x00010598fce8(param_1 + 0x18,param_2 + 0x18);
  func_0x0001088f1584(param_1 + 0x30,param_2 + 0x30);
  func_0x0001088f1584(param_1 + 0x48,param_2 + 0x48);
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        FUN_10b486030(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        func_0x00010b48526c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x70);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x70));
        *(long *)(param_1 + 0x70) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x78));
        *(long *)(param_1 + 0x78) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x80));
        *(long *)(param_1 + 0x80) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        FUN_10b486098(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      else {
        func_0x00010b485120();
      }
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(int *)(param_1 + 0xa0) = *(int *)(param_2 + 0xa0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b485cd8; end: 10b485eb7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b485cd8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x00010598fce8(param_1 + 0x18,param_2 + 0x18);
  func_0x0001088f1584(param_1 + 0x30,param_2 + 0x30);
  func_0x0001088f1584(param_1 + 0x48,param_2 + 0x48);
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        FUN_10b486030(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        func_0x00010b48526c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x70);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x70));
        *(long *)(param_1 + 0x70) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x78));
        *(long *)(param_1 + 0x78) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x80));
        *(long *)(param_1 + 0x80) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        FUN_10b486098(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      else {
        func_0x00010b485120();
      }
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(int *)(param_1 + 0xa0) = *(int *)(param_2 + 0xa0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b485eb8; end: 10b485f6b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b485eb8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b485680();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x00010598fce8(param_1 + 0x18,param_2 + 0x18);
  func_0x0001088f1584(param_1 + 0x30,param_2 + 0x30);
  func_0x0001088f1584(param_1 + 0x48,param_2 + 0x48);
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        FUN_10b486030(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        func_0x00010b48526c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x70);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x70));
        *(long *)(param_1 + 0x70) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x78));
        *(long *)(param_1 + 0x78) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0) {
        func_0x00010b486198(0,*(undefined8 *)(param_2 + 0x80));
        *(long *)(param_1 + 0x80) = lVar4;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        FUN_10b486098(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      else {
        func_0x00010b485120();
      }
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(int *)(param_1 + 0xa0) = *(int *)(param_2 + 0xa0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b485f6c; end: 10b485f83;  */

void FUN_10b485f6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b486178();
  }
  else {
    func_0x00010b486180();
  }
  *puVar1 = &PTR_FUN_110ceb4d0;
  puVar1[1] = param_2;
  func_0x00010b4861bc();
  return;
}



/* Entry: 10b485f84; end: 10b48602f;  */

long FUN_10b485f84(long param_1)

{
  func_0x0001088f2648(param_1 + 0x38);
  func_0x0001088f2648(param_1 + 0x20);
  func_0x000107c282b4(param_1 + 8);
  return param_1;
}



/* Entry: 10b486030; end: 10b486097;  */

undefined8 * FUN_10b486030(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b486178();
  }
  else {
    func_0x00010b486180();
  }
  *puVar1 = &PTR_FUN_110ceb520;
  puVar1[1] = param_1;
  func_0x00010b4861bc();
  func_0x00010b48526c();
  return puVar1;
}



/* Entry: 10b486098; end: 10b4860ff;  */

undefined8 * FUN_10b486098(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b486178();
  }
  else {
    func_0x00010b486180();
  }
  *puVar1 = &PTR_FUN_110ceb4d0;
  puVar1[1] = param_1;
  func_0x00010b4861bc();
  func_0x00010b485120();
  return puVar1;
}



/* Entry: 10b486100; end: 10b4861fb;  */

void FUN_10b486100(void)

{
  return;
}



/* Entry: 10b4861fc; end: 10b4862b7;  */

void FUN_10b4861fc(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 4) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b48627c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b484900();
    }
  }
  else if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b48627c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b486d14();
    }
  }
  else {
    if (iVar1 != 2) goto LAB_10b48627c;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b48627c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b4855b8();
    }
  }
  __ZdlPv();
LAB_10b48627c:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10b4862b8; end: 10b486377;  */

undefined8 * FUN_10b4862b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceb6d8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar1 = *(int *)(param_3 + 0x2c);
  *(int *)((long)param_1 + 0x2c) = iVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  if (iVar1 == 4) {
    func_0x00010b4868a0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  else if (iVar1 == 3) {
    func_0x00010b48685c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  else {
    if (iVar1 != 2) {
      return param_1;
    }
    FUN_10b484ca4(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b486378; end: 10b4863a7;  */

long FUN_10b486378(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4863a8(param_1);
  return param_1;
}



/* Entry: 10b4863a8; end: 10b4863df;  */

void FUN_10b4863a8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 4) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b48627c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b484900();
    }
  }
  else if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b48627c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b486d14();
    }
  }
  else {
    if (iVar1 != 2) goto LAB_10b48627c;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b48627c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b4855b8();
    }
  }
  __ZdlPv();
LAB_10b48627c:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10b4863e0; end: 10b4863e3;  */

long FUN_10b4863e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4863a8(param_1);
  return param_1;
}



/* Entry: 10b4863e4; end: 10b4863f7;  */

void FUN_10b4863e4(void)

{
  FUN_10b486378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4863f8; end: 10b486403;  */

undefined ** FUN_10b4863f8(void)

{
  return &PTR_DAT_110ceb718;
}



/* Entry: 10b486404; end: 10b4865c7;  */

void FUN_10b486404(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_10b4861fc(param_1);
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



/* Entry: 10b4865c8; end: 10b4865f7;  */

void FUN_10b4865c8(void)

{
  FUN_10b487058();
  FUN_10b4868e4();
  return;
}



/* Entry: 10b4865f8; end: 10b4865fb;  */

void FUN_10b4865f8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar3 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar4,uVar5);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 == 0) goto LAB_10b486738;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b4861fc(param_1);
    }
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      func_0x00010b486908();
      FUN_10b484bbc();
      goto LAB_10b486738;
    }
    func_0x00010b4868a0(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  else if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00010b486908();
      FUN_10b4871c0();
      goto LAB_10b486738;
    }
    func_0x00010b48685c(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    if (iVar1 != 2) goto LAB_10b486738;
    if (iVar2 == 2) {
      func_0x00010b486908();
      FUN_10b485cd8();
      goto LAB_10b486738;
    }
    FUN_10b484ca4(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  *(ulong *)(param_1 + 0x20) = uVar3;
LAB_10b486738:
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



/* Entry: 10b4865fc; end: 10b48677f;  */

void FUN_10b4865fc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar3 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar4,uVar5);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 == 0) goto LAB_10b486738;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b4861fc(param_1);
    }
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      func_0x00010b486908();
      FUN_10b484bbc();
      goto LAB_10b486738;
    }
    func_0x00010b4868a0(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  else if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00010b486908();
      FUN_10b4871c0();
      goto LAB_10b486738;
    }
    func_0x00010b48685c(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    if (iVar1 != 2) goto LAB_10b486738;
    if (iVar2 == 2) {
      func_0x00010b486908();
      FUN_10b485cd8();
      goto LAB_10b486738;
    }
    FUN_10b484ca4(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  *(ulong *)(param_1 + 0x20) = uVar3;
LAB_10b486738:
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



/* Entry: 10b486780; end: 10b4867b7;  */

void FUN_10b486780(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b486404();
  uVar5 = *(ulong *)(param_1 + 8);
  uVar3 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar4,uVar5);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 == 0) goto LAB_10b486738;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b4861fc(param_1);
    }
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      func_0x00010b486908();
      FUN_10b484bbc();
      goto LAB_10b486738;
    }
    func_0x00010b4868a0(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  else if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00010b486908();
      FUN_10b4871c0();
      goto LAB_10b486738;
    }
    func_0x00010b48685c(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    if (iVar1 != 2) goto LAB_10b486738;
    if (iVar2 == 2) {
      func_0x00010b486908();
      FUN_10b485cd8();
      goto LAB_10b486738;
    }
    FUN_10b484ca4(uVar3,*(undefined8 *)(param_2 + 0x20));
  }
  *(ulong *)(param_1 + 0x20) = uVar3;
LAB_10b486738:
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



/* Entry: 10b4867b8; end: 10b486807;  */

void FUN_10b4867b8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  return;
}



/* Entry: 10b486808; end: 10b4868e3;  */

void FUN_10b486808(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110ceb6d8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b4868e4; end: 10b48691f;  */

long FUN_10b4868e4(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b486920; end: 10b48698b;  */

undefined8 * FUN_10b486920(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceb780;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  if (iVar1 - 1U < 2) {
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
  }
  return param_1;
}



/* Entry: 10b48698c; end: 10b4869bf;  */

long FUN_10b48698c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 10b4869c0; end: 10b4869c3;  */

long FUN_10b4869c0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 10b4869c4; end: 10b4869d7;  */

void FUN_10b4869c4(void)

{
  FUN_10b48698c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4869d8; end: 10b4869fb;  */

undefined ** FUN_10b4869d8(void)

{
  return &PTR_DAT_110ceb7c0;
}



/* Entry: 10b4869fc; end: 10b486aa3;  */

long * FUN_10b4869fc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    plVar1 = param_3;
    func_0x000107c282cc(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  else {
    plVar1 = param_2;
    if (*(int *)(param_1 + 0x24) == 1) {
      plVar1 = param_3;
      func_0x000105991a14(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
    }
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar2 = param_3;
    func_0x00010599ccb0(param_3,*(long *)(param_1 + 0x10),plVar1);
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar7;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 10b486aa4; end: 10b486b67;  */

ulong FUN_10b486aa4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) - 1U < 2) {
    uVar1 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
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



/* Entry: 10b486b68; end: 10b486b9f;  */

void FUN_10b486b68(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b4869e4();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  uVar1 = *(uint *)(param_2 + 0x24);
  if (uVar1 != 0) {
    if (*(uint *)(param_1 + 0x24) != uVar1) {
      *(uint *)(param_1 + 0x24) = uVar1;
    }
    if (uVar1 < 3) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
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



/* Entry: 10b486ba0; end: 10b486bdb;  */

void FUN_10b486ba0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  return;
}



/* Entry: 10b486bdc; end: 10b486c23;  */

void FUN_10b486bdc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110ceb780;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b486c24; end: 10b486c37;  */

void FUN_10b486c24(void)

{
  return;
}



/* Entry: 10b486c38; end: 10b486d13;  */

undefined8 * FUN_10b486c38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceb828;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b487348(param_1 + 3,param_2,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x000107c2809c(lVar2,param_2);
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x000107c2809c(lVar2,param_2);
  param_1[7] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b484ca4(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b484ca4(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_3 + 0x58);
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 10b486d14; end: 10b486d43;  */

long FUN_10b486d14(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b486d44(param_1);
  return param_1;
}



/* Entry: 10b486d44; end: 10b486d93;  */

long * FUN_10b486d44(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b4855b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b4855b8();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b486d94; end: 10b486d97;  */

long FUN_10b486d94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b486d44(param_1);
  return param_1;
}



/* Entry: 10b486d98; end: 10b486dab;  */

void FUN_10b486d98(void)

{
  FUN_10b486d14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b486dac; end: 10b486db7;  */

undefined ** FUN_10b486dac(void)

{
  return &PTR_DAT_110ceb868;
}



/* Entry: 10b486db8; end: 10b486e3b;  */

void FUN_10b486db8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b485680(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b485680(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
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



/* Entry: 10b486e3c; end: 10b487057;  */

long * FUN_10b486e3c(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(param_1[6] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  plVar4 = param_1;
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)*puVar9;
      goto LAB_10b486e88;
    }
  }
  else if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_10b486e88:
    func_0x000107c303d4(puVar9,lVar5,1,&UNK_10f76efb5);
    param_2 = param_3;
    func_0x00010b4873e8(param_3,1);
    plVar4 = param_2;
  }
  plVar3 = plVar4;
  if ((char)param_1[10] == '\x01') {
    func_0x00010b4873a4();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar4);
    func_0x00010b4873c8();
    param_2 = plVar3;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)0x3;
    func_0x00010b4873b0(3,param_1[8],*(undefined4 *)(param_1[8] + 0x14));
    param_2 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)((long)param_1 + 0x54) != 0) {
    func_0x00010b4873a4();
    plVar4 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x00010b4873d4();
    param_2 = plVar4;
  }
  puVar9 = (undefined8 *)(param_1[7] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b486f58;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b486f58;
  func_0x000107c303d4(puVar9,lVar5,1,&UNK_10f76efe2);
  plVar4 = param_3;
  func_0x00010b4873e8(param_3,0xb);
  param_2 = plVar4;
LAB_10b486f58:
  lVar5 = param_1[4];
  for (iVar8 = 0; (int)lVar5 != iVar8; iVar8 = iVar8 + 1) {
    uVar6 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar8 * 8 + 7);
    }
    plVar4 = (long *)0x14;
    func_0x00010b4873b0(0x14,*puVar1,*(undefined4 *)(*puVar1 + 0x14));
    param_2 = plVar4;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar4 = (long *)0x1e;
    func_0x00010b4873b0(0x1e,param_1[9],*(undefined4 *)(param_1[9] + 0x14));
    param_2 = plVar4;
  }
  plVar3 = plVar4;
  if ((int)param_1[0xb] != 0) {
    func_0x00010b4873a4();
    plVar3 = (long *)0x140;
    func_0x000107c280a8(0x140,plVar4);
    func_0x00010b4873d4();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    func_0x00010b4873a4();
    param_2 = (long *)0x190;
    func_0x000107c280a8(400,plVar3);
    func_0x00010b4873c8();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar7 = param_1[1] & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b487058; end: 10b4871bb;  */

void FUN_10b487058(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  lVar6 = (long)*(int *)(param_1 + 0x20) << 1;
  iVar4 = (int)lVar6;
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar7 = (long)*(int *)(param_1 + 0x20) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar5 = *puVar1;
    FUN_10b47e350();
    lVar6 = uVar5 + lVar6;
    iVar4 = (int)lVar6;
    puVar1 = puVar1 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    iVar4 = iVar4 + (int)uVar5 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    iVar4 = iVar4 + (int)uVar5 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x40);
      FUN_10b484b8c();
      iVar4 = iVar4 + iVar3 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x48);
      FUN_10b484b8c();
      iVar4 = iVar4 + iVar3 + 2;
    }
  }
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0x50) * 2;
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT(*(int *)(param_1 + 0x5c)) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    iVar4 = (int)lVar6 + iVar4;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return;
}



/* Entry: 10b4871bc; end: 10b4871bf;  */

void FUN_10b4871bc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b487330(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        FUN_10b484ca4(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b485cd8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_10b484ca4(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar5;
      }
      else {
        FUN_10b485cd8();
      }
    }
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4871c0; end: 10b48732f;  */

void FUN_10b4871c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b487330(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        FUN_10b484ca4(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b485cd8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_10b484ca4(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar5;
      }
      else {
        FUN_10b485cd8();
      }
    }
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b487330; end: 10b487347;  */

void FUN_10b487330(long *param_1,long param_2)

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



/* Entry: 10b487348; end: 10b487373;  */

undefined8 * FUN_10b487348(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b487330(param_1,param_3);
  return param_1;
}



/* Entry: 10b487374; end: 10b4873a3;  */

long * FUN_10b487374(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4873a4; end: 10b4873f3;  */

ulong * FUN_10b4873a4(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b4873f4; end: 10b4874a3;  */

void FUN_10b4873f4(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0xb) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b488430();
      uVar2 = extraout_x8_00;
    }
    if (uVar2 != 0) goto LAB_10b487474;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b487fbc();
    }
  }
  else if (iVar1 == 10) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b488430();
      uVar2 = extraout_x8;
    }
    if (uVar2 != 0) goto LAB_10b487474;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b4855b8();
    }
  }
  else {
    if (iVar1 != 4) goto LAB_10b487474;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b488430();
      uVar2 = extraout_x8_01;
    }
    if (uVar2 != 0) goto LAB_10b487474;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b487c8c();
    }
  }
  __ZdlPv();
LAB_10b487474:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10b4874a4; end: 10b487567;  */

undefined8 * FUN_10b4874a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ceb970;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b488374();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar3 = *(int *)(param_3 + 0x30);
  *(int *)(param_1 + 6) = iVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b47cd6c(param_2,*(undefined8 *)(param_3 + 0x18));
    iVar3 = *(int *)(param_1 + 6);
  }
  param_1[3] = uVar2;
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  if (iVar3 == 0xb) {
    func_0x00010b4882dc(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  else if (iVar3 == 10) {
    FUN_10b484ca4(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    if (iVar3 != 4) {
      return param_1;
    }
    FUN_10b4881ec(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10b487568; end: 10b487593;  */

undefined8 FUN_10b487568(undefined8 param_1)

{
  func_0x00010b488404();
  FUN_10b487594(param_1);
  return param_1;
}



/* Entry: 10b487594; end: 10b4875d3;  */

void FUN_10b487594(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b488544();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0xb) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b488430();
      uVar2 = extraout_x8_00;
    }
    if (uVar2 != 0) goto LAB_10b487474;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b487fbc();
    }
  }
  else if (iVar1 == 10) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b488430();
      uVar2 = extraout_x8;
    }
    if (uVar2 != 0) goto LAB_10b487474;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b4855b8();
    }
  }
  else {
    if (iVar1 != 4) goto LAB_10b487474;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b488430();
      uVar2 = extraout_x8_01;
    }
    if (uVar2 != 0) goto LAB_10b487474;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b487c8c();
    }
  }
  __ZdlPv();
LAB_10b487474:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10b4875d4; end: 10b4875d7;  */

undefined8 FUN_10b4875d4(undefined8 param_1)

{
  func_0x00010b488404();
  FUN_10b487594(param_1);
  return param_1;
}



/* Entry: 10b4875d8; end: 10b4875eb;  */

void FUN_10b4875d8(void)

{
  FUN_10b487568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4875ec; end: 10b4875ff;  */

long FUN_10b4875ec(long param_1)

{
  func_0x00010b488404();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4855b8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b487c28(param_1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_10b487cf4(param_1);
  }
  return param_1;
}



/* Entry: 10b487600; end: 10b487647;  */

void FUN_10b487600(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b488388();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b4885ac(*(undefined8 *)(unaff_x19 + 0x18));
  }
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  FUN_10b4873f4();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b487648; end: 10b48772b;  */

long * FUN_10b487648(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar2 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x00010b488380(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,plVar2);
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x00010b4883e8();
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  plVar3 = (long *)(ulong)uVar1;
  if (uVar1 < 0xc && (1 << (ulong)(uVar1 & 0x1f) & 0xc10U) != 0) {
    func_0x00010b488380(plVar3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14));
    plVar2 = plVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(int)uVar5 <= *param_3 - (long)plVar2) {
    _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
    iVar7 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    lVar4 = (long)plVar2 + (long)iVar8;
    plVar2 = param_3;
    func_0x000107c303e4(param_3,lVar4);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar2 + (long)iVar7);
}



/* Entry: 10b48772c; end: 10b487807;  */

long FUN_10b48772c(void)

{
  int iVar1;
  long lVar2;
  ulong extraout_x8;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  
  func_0x00010b488388();
  if ((extraout_x8 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    func_0x00010b47cb58();
    lVar4 = lVar4 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = *(int *)(unaff_x19 + 0x30);
  if (iVar1 == 0xb) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    func_0x00010b487820();
  }
  else if (iVar1 == 10) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    FUN_10b484b8c();
  }
  else {
    if (iVar1 != 4) goto LAB_10b4877d8;
    lVar2 = *(long *)(unaff_x19 + 0x28);
    FUN_10b487808();
  }
  lVar4 = lVar4 + lVar2 + 1;
LAB_10b4877d8:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(unaff_x19 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b487808; end: 10b487837;  */

void FUN_10b487808(void)

{
  FUN_10b487ee4();
  func_0x00010b488394();
  return;
}



/* Entry: 10b487838; end: 10b48783b;  */

void FUN_10b487838(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  func_0x00010b4883d0();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar4;
      func_0x00010b47cd6c();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b488704();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 == 0) goto LAB_10b487988;
  iVar3 = (int)unaff_x21[6];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b4873f4();
    }
    *(int *)(unaff_x21 + 6) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      func_0x00010b4883c0();
      FUN_10b487b6c();
      goto LAB_10b487988;
    }
    func_0x00010b4882dc();
    param_1 = puVar4;
  }
  else if (iVar2 == 10) {
    if (iVar3 == 10) {
      func_0x00010b4883c0();
      FUN_10b485cd8();
      goto LAB_10b487988;
    }
    FUN_10b484ca4();
    param_1 = puVar4;
  }
  else {
    if (iVar2 != 4) goto LAB_10b487988;
    if (iVar3 == 4) {
      func_0x00010b4883c0();
      FUN_10b4879bc();
      goto LAB_10b487988;
    }
    FUN_10b4881ec();
    param_1 = puVar4;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_10b487988:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4883b0();
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



/* Entry: 10b48783c; end: 10b4879bb;  */

void FUN_10b48783c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  func_0x00010b4883d0();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar4;
      func_0x00010b47cd6c();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b488704();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 == 0) goto LAB_10b487988;
  iVar3 = (int)unaff_x21[6];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b4873f4();
    }
    *(int *)(unaff_x21 + 6) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      func_0x00010b4883c0();
      FUN_10b487b6c();
      goto LAB_10b487988;
    }
    func_0x00010b4882dc();
    param_1 = puVar4;
  }
  else if (iVar2 == 10) {
    if (iVar3 == 10) {
      func_0x00010b4883c0();
      FUN_10b485cd8();
      goto LAB_10b487988;
    }
    FUN_10b484ca4();
    param_1 = puVar4;
  }
  else {
    if (iVar2 != 4) goto LAB_10b487988;
    if (iVar3 == 4) {
      func_0x00010b4883c0();
      FUN_10b4879bc();
      goto LAB_10b487988;
    }
    FUN_10b4881ec();
    param_1 = puVar4;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_10b487988:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4883b0();
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



/* Entry: 10b4879bc; end: 10b487b6b;  */

void FUN_10b4879bc(ulong *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar5;
  
  func_0x00010b4883d0();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar5;
      FUN_10b484ca4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b485cd8();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar2;
  iVar3 = *(int *)(unaff_x20 + 0x30);
  if (iVar3 != 0) {
    iVar4 = (int)unaff_x21[6];
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        param_1 = unaff_x21;
        func_0x00010b487c28();
      }
      *(int *)(unaff_x21 + 6) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        unaff_x21[4] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x30) != 3) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 4;
      func_0x000107c30248(param_1,puVar1,puVar5);
    }
    else if (iVar3 == 2) {
      if (iVar4 == 2) {
        param_1 = (ulong *)unaff_x21[4];
        func_0x00010bd1b688();
      }
      else {
        param_1 = puVar5;
        func_0x000107c284d4();
        unaff_x21[4] = (ulong)param_1;
      }
    }
  }
  iVar3 = *(int *)(unaff_x20 + 0x34);
  if (iVar3 != 0) {
    iVar4 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        param_1 = unaff_x21;
        FUN_10b487cf4();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar3;
    }
    if (iVar3 == 5) {
      if (iVar4 != 5) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x34) != 5) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 5;
      func_0x000107c30248(param_1,puVar1,puVar5);
    }
    else if (iVar3 == 4) {
      *(undefined4 *)(unaff_x21 + 5) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4883b0();
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



/* Entry: 10b487b6c; end: 10b487bef;  */

void FUN_10b487b6c(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4883d0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b484ca4();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10b485cd8();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4883b0();
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



/* Entry: 10b487bf0; end: 10b487c8b;  */

void FUN_10b487bf0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b487600();
  func_0x00010b4883d0();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar4;
      func_0x00010b47cd6c();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b488704();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 == 0) goto LAB_10b487988;
  iVar3 = (int)unaff_x21[6];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b4873f4();
    }
    *(int *)(unaff_x21 + 6) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      func_0x00010b4883c0();
      FUN_10b487b6c();
      goto LAB_10b487988;
    }
    func_0x00010b4882dc();
    param_1 = puVar4;
  }
  else if (iVar2 == 10) {
    if (iVar3 == 10) {
      func_0x00010b4883c0();
      FUN_10b485cd8();
      goto LAB_10b487988;
    }
    FUN_10b484ca4();
    param_1 = puVar4;
  }
  else {
    if (iVar2 != 4) goto LAB_10b487988;
    if (iVar3 == 4) {
      func_0x00010b4883c0();
      FUN_10b4879bc();
      goto LAB_10b487988;
    }
    FUN_10b4881ec();
    param_1 = puVar4;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_10b487988:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4883b0();
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



/* Entry: 10b487c8c; end: 10b487cdf;  */

long FUN_10b487c8c(long param_1)

{
  func_0x00010b488404();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4855b8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b487c28(param_1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_10b487cf4(param_1);
  }
  return param_1;
}



/* Entry: 10b487ce0; end: 10b487cf3;  */

void FUN_10b487ce0(void)

{
  FUN_10b487c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


