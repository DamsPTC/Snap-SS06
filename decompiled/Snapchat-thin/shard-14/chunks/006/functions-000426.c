/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b558e48; end: 10b558e8b;  */

void FUN_10b558e48(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d06a18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b558e8c; end: 10b558e93;  */

void FUN_10b558e8c(void)

{
  return;
}



/* Entry: 10b558e94; end: 10b558edf;  */

long FUN_10b558e94(long param_1)

{
  func_0x00010b55a53c();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b558ee0; end: 10b558ee3;  */

long FUN_10b558ee0(long param_1)

{
  func_0x00010b55a53c();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b558ee4; end: 10b558ef7;  */

void FUN_10b558ee4(void)

{
  FUN_10b558e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b558ef8; end: 10b558f03;  */

undefined ** FUN_10b558ef8(void)

{
  return &PTR_DAT_110d06c60;
}



/* Entry: 10b558f04; end: 10b558f5f;  */

void FUN_10b558f04(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x30));
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



/* Entry: 10b558f60; end: 10b5590bf;  */

uint * FUN_10b558f60(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint *puVar6;
  long extraout_x8;
  int iVar7;
  undefined8 *unaff_x22;
  int iVar8;
  
  puVar6 = param_3;
  puVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(uint **)(param_1 + 0x30);
    puVar6 = (uint *)(ulong)param_2[8];
    puVar2 = (uint *)0x1;
    func_0x00010b55a550();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    param_2 = param_3;
    func_0x000107c28094(param_3,puVar2);
    uVar1 = *(uint *)(param_1 + 0x38);
    unaff_x22 = (undefined8 *)(ulong)uVar1;
    puVar3 = (uint *)0x15;
    func_0x000107c280a8();
    puVar2 = puVar3 + 1;
    *puVar3 = uVar1;
  }
  func_0x00010b55a584(*(undefined8 *)(param_1 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (uint *)0x0;
    if (unaff_x22[1] != 0) {
      puVar4 = (undefined8 *)*unaff_x22;
      goto LAB_10b558fec;
    }
  }
  else {
    puVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b558fec:
      func_0x00010b55a534(puVar4);
      param_2 = (uint *)0x3;
      puVar2 = param_3;
      func_0x00010b55a528();
    }
  }
  func_0x00010b55a584(*(undefined8 *)(param_1 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (uint *)0x0;
    if (unaff_x22[1] != 0) {
      puVar4 = (undefined8 *)*unaff_x22;
      goto LAB_10b55902c;
    }
  }
  else {
    puVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b55902c:
      func_0x00010b55a534(puVar4);
      param_2 = (uint *)0x4;
      puVar2 = param_3;
      func_0x00010b55a528();
    }
  }
  func_0x00010b55a584(*(undefined8 *)(param_1 + 0x28));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b559088;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b559088;
  func_0x00010b55a534(unaff_x22);
  puVar2 = param_3;
  func_0x00010b55a528(param_3,5);
LAB_10b559088:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return puVar2;
  }
  func_0x00010b55a5dc();
  if ((long)puVar6 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    puVar6 = *(uint **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if (*(long *)param_3 - (long)puVar2 < (long)(int)puVar6) {
    while( true ) {
      iVar8 = ((int)*(undefined8 *)param_3 - (int)puVar2) + 0x10;
      iVar7 = (int)puVar6;
      puVar6 = (uint *)(ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      lVar5 = (long)puVar2 + (long)iVar8;
      puVar2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (uint *)((long)puVar2 + (long)iVar7);
  }
  _memcpy(puVar2,lVar5,(ulong)puVar6 & 0xffffffff);
  return (uint *)((long)puVar2 + (long)(int)puVar6);
}



/* Entry: 10b5590c0; end: 10b55916f;  */

void FUN_10b5590c0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b55a558(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b55a558(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b55a544();
  }
  func_0x00010b55a558(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b55a544();
  }
  iVar1 = (int)lVar3;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x000108c6cd50();
    func_0x00010b55a544();
  }
  func_0x00010b55a610(*(undefined4 *)(param_1 + 0x38));
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b55a604();
    lVar3 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b559170; end: 10b559173;  */

void FUN_10b559170(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b55a590();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b55a578(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b55a56c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b55a578(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b55a578(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x00010b55a624();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b55a5c0();
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



/* Entry: 10b559174; end: 10b55926b;  */

void FUN_10b559174(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b55a590();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b55a578(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b55a56c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b55a578(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b55a578(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x00010b55a624();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b55a5c0();
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



/* Entry: 10b55926c; end: 10b559293;  */

void FUN_10b55926c(long param_1,long param_2)

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



/* Entry: 10b559294; end: 10b5592b7;  */

undefined8 FUN_10b559294(undefined8 param_1)

{
  func_0x00010b55a53c();
  return param_1;
}



/* Entry: 10b5592b8; end: 10b5592bb;  */

undefined8 FUN_10b5592b8(undefined8 param_1)

{
  func_0x00010b55a53c();
  return param_1;
}



/* Entry: 10b5592bc; end: 10b5592cf;  */

void FUN_10b5592bc(void)

{
  FUN_10b559294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5592d0; end: 10b5592ef;  */

undefined ** FUN_10b5592d0(void)

{
  return &PTR_DAT_110d06cc0;
}



/* Entry: 10b5592f0; end: 10b55934f;  */

long * FUN_10b5592f0(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b55a5a0();
  plVar2 = param_4;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282e4();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return plVar2;
  }
  func_0x00010b55a5dc();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (long *)(ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      plVar2 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar4);
  }
  _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)param_3);
}



/* Entry: 10b559350; end: 10b55939f;  */

ulong FUN_10b559350(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5593a0; end: 10b5593e3;  */

long FUN_10b5593a0(long param_1)

{
  func_0x00010b55a53c();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5593e4; end: 10b5593e7;  */

long FUN_10b5593e4(long param_1)

{
  func_0x00010b55a53c();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5593e8; end: 10b5593fb;  */

void FUN_10b5593e8(void)

{
  FUN_10b5593a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5593fc; end: 10b559407;  */

undefined ** FUN_10b5593fc(void)

{
  return &PTR_DAT_110d06d20;
}



/* Entry: 10b559408; end: 10b559463;  */

void FUN_10b559408(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 10b559464; end: 10b559723;  */

long * FUN_10b559464(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  int iVar9;
  long unaff_x22;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  
  plVar4 = param_1;
  plVar6 = param_2;
  plVar10 = param_3;
  func_0x00010b55a584(param_1[5]);
  if ((long)plVar6 < 0) {
    plVar6 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5594b0;
  }
  else if ((int)plVar6 != 0) {
LAB_10b5594b0:
    func_0x00010b55a534();
    plVar6 = (long *)0x1;
    plVar4 = param_3;
    func_0x00010b55a51c();
    param_2 = plVar4;
  }
  func_0x00010b55a584(param_1[6]);
  if ((long)plVar6 < 0) {
    plVar6 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5594f0;
  }
  else if ((int)plVar6 != 0) {
LAB_10b5594f0:
    func_0x00010b55a534();
    plVar6 = (long *)0x2;
    plVar4 = param_3;
    func_0x00010b55a51c();
    param_2 = plVar4;
  }
  plVar3 = plVar4;
  if (param_1[8] != 0) {
    func_0x00010b55a4d4();
    plVar3 = (long *)0x19;
    func_0x000107c280a8();
    func_0x00010b55a5d0();
    plVar6 = plVar4;
  }
  plVar4 = plVar3;
  if (param_1[9] != 0) {
    func_0x00010b55a4d4();
    plVar4 = (long *)0x21;
    func_0x000107c280a8();
    func_0x00010b55a5d0();
    plVar6 = plVar3;
  }
  plVar3 = plVar4;
  if (param_1[10] != 0) {
    func_0x00010b55a4d4();
    plVar3 = (long *)0x29;
    func_0x000107c280a8();
    func_0x00010b55a5d0();
    plVar6 = plVar4;
  }
  plVar4 = plVar3;
  if (param_1[0xb] != 0) {
    func_0x00010b55a4d4();
    plVar4 = (long *)0x31;
    func_0x000107c280a8();
    func_0x00010b55a5d0();
    plVar6 = plVar3;
  }
  if (param_1[0xc] != 0) {
    func_0x00010b55a4d4();
    func_0x000107c280a8(0x39);
    func_0x00010b55a5d0();
    plVar6 = plVar4;
  }
  lVar13 = 8;
  puVar5 = &UNK_10f779b13;
  for (uVar12 = (ulong)(*(uint *)(param_1 + 3) & ((int)*(uint *)(param_1 + 3) >> 0x1f ^ 0xffffffffU)
                       ); uVar12 != 0; uVar12 = uVar12 - 1) {
    uVar8 = param_1[2];
    puVar2 = (ulong *)(param_1 + 2);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + lVar13 + -1);
    }
    plVar10 = (long *)*puVar2;
    lVar7 = (long)*(char *)((long)plVar10 + 0x17);
    plVar6 = plVar10;
    if (lVar7 < 0) {
      lVar7 = plVar10[1];
      plVar6 = (long *)*plVar10;
    }
    func_0x000107c303d4(plVar6,lVar7,1,&UNK_10f779b13);
    plVar4 = (long *)(long)*(char *)((long)plVar10 + 0x17);
    if ((((long)plVar4 < 0) && (plVar4 = (long *)plVar10[1], 0x7f < (long)plVar4)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar4)) {
      plVar6 = (long *)0x8;
      param_2 = param_3;
      func_0x00010b4d5120();
    }
    else {
      *(undefined1 *)param_2 = 0x42;
      *(char *)((long)param_2 + 1) = (char)plVar4;
      plVar6 = plVar10;
      if (*(char *)((long)plVar10 + 0x17) < '\0') {
        plVar6 = (long *)*plVar10;
      }
      plVar10 = plVar4;
      _memcpy((undefined1 *)((long)param_2 + 2));
      param_2 = (long *)((undefined1 *)((long)param_2 + 2) + (long)plVar4);
    }
    lVar13 = lVar13 + 8;
  }
  func_0x00010b55a584(param_1[7]);
  if ((long)plVar6 < 0) {
    puVar5 = (undefined *)0x7461686370616e73;
  }
  else if ((int)plVar6 == 0) goto LAB_10b5596c4;
  func_0x00010b55a534(puVar5);
  param_2 = param_3;
  func_0x00010b55a51c(param_3,9);
LAB_10b5596c4:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b55a5dc();
  if ((long)plVar10 < 0) {
    lVar13 = *(long *)(extraout_x8 + 8);
    plVar10 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar13 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar10) {
    while( true ) {
      iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar9 = (int)plVar10;
      plVar10 = (long *)(ulong)(uint)(iVar9 - iVar11);
      if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
      param_2 = param_3;
      func_0x000107c303e4(param_3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar9);
  }
  _memcpy(param_2,lVar13,(ulong)plVar10 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar10);
}



/* Entry: 10b559724; end: 10b55984b;  */

void FUN_10b559724(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  uVar3 = param_1;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    uVar2 = (uint)uVar4;
    lVar6 = lVar6 + 8;
  }
  func_0x00010b55a558(*(undefined8 *)(param_1 + 0x28));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b55a544();
  }
  func_0x00010b55a558(*(undefined8 *)(param_1 + 0x30));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b55a544();
  }
  func_0x00010b55a558(*(undefined8 *)(param_1 + 0x38));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b55a544();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = uVar2 + 9;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = uVar2 + 9;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = uVar2 + 9;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = uVar2 + 9;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar2 = uVar2 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b55a604();
    lVar6 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar2 = (int)lVar6 + uVar2;
  }
  *(uint *)(param_1 + 0x68) = uVar2;
  return;
}



/* Entry: 10b55984c; end: 10b55984f;  */

void FUN_10b55984c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  
  lVar1 = param_2 + 0x10;
  func_0x00010598fce8(param_1 + 0x10);
  func_0x00010b55a578(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b55a578(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b55a578(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x50);
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x60);
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



/* Entry: 10b559850; end: 10b559a1b;  */

void FUN_10b559850(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  
  lVar1 = param_2 + 0x10;
  func_0x00010598fce8(param_1 + 0x10);
  func_0x00010b55a578(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b55a578(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b55a578(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55a56c();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x50);
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x60);
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



/* Entry: 10b559a1c; end: 10b559a47;  */

undefined8 FUN_10b559a1c(undefined8 param_1)

{
  func_0x00010b55a53c();
  FUN_10b559a48(param_1);
  return param_1;
}



/* Entry: 10b559a48; end: 10b559a5b;  */

void FUN_10b559a48(long param_1)

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
    if (uVar2 != 0) goto LAB_10b5599e0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b5593a0();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b5599e0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b559294();
    }
  }
  else {
    if (iVar1 != 1) goto LAB_10b5599e0;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_10b5599e0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b558e94();
    }
  }
  __ZdlPv();
LAB_10b5599e0:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b559a5c; end: 10b559a6f;  */

void FUN_10b559a5c(void)

{
  FUN_10b559a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b559a70; end: 10b559a7b;  */

undefined ** FUN_10b559a70(void)

{
  return &PTR_DAT_110d06d88;
}



/* Entry: 10b559a7c; end: 10b559b9f;  */

void FUN_10b559a7c(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b559960();
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



/* Entry: 10b559ba0; end: 10b559be7;  */

void FUN_10b559ba0(void)

{
  FUN_10b5590c0();
  func_0x00010b55a4b8();
  return;
}



/* Entry: 10b559be8; end: 10b559beb;  */

void FUN_10b559be8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x00010b55a590();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b559cec;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x00010b559960();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00010b55a5b0();
      func_0x00010b559850();
      goto LAB_10b559cec;
    }
    FUN_10b55a33c();
    param_1 = puVar3;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b55a5b0();
      FUN_10b55926c();
      goto LAB_10b559cec;
    }
    FUN_10b55a2cc();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_10b559cec;
    if (iVar2 == 1) {
      func_0x00010b55a5b0();
      FUN_10b559174();
      goto LAB_10b559cec;
    }
    FUN_10b55a218();
    param_1 = puVar3;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b559cec:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b55a5c0();
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



/* Entry: 10b559bec; end: 10b559d07;  */

void FUN_10b559bec(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x00010b55a590();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b559cec;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x00010b559960();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00010b55a5b0();
      func_0x00010b559850();
      goto LAB_10b559cec;
    }
    FUN_10b55a33c();
    param_1 = puVar3;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b55a5b0();
      FUN_10b55926c();
      goto LAB_10b559cec;
    }
    FUN_10b55a2cc();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_10b559cec;
    if (iVar2 == 1) {
      func_0x00010b55a5b0();
      FUN_10b559174();
      goto LAB_10b559cec;
    }
    FUN_10b55a218();
    param_1 = puVar3;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b559cec:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b55a5c0();
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



/* Entry: 10b559d08; end: 10b559d93;  */

undefined8 * FUN_10b559d08(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d06c20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b55a508();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b55a3f8(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b559d94; end: 10b559dbf;  */

undefined8 FUN_10b559d94(undefined8 param_1)

{
  func_0x00010b55a53c();
  FUN_10b559dc0(param_1);
  return param_1;
}



/* Entry: 10b559dc0; end: 10b559df7;  */

void FUN_10b559dc0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b559a1c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b559df8; end: 10b559dfb;  */

undefined8 FUN_10b559df8(undefined8 param_1)

{
  func_0x00010b55a53c();
  FUN_10b559dc0(param_1);
  return param_1;
}



/* Entry: 10b559dfc; end: 10b559e0f;  */

void FUN_10b559dfc(void)

{
  FUN_10b559d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b559e10; end: 10b559e1b;  */

undefined ** FUN_10b559e10(void)

{
  return &PTR_DAT_110d06de8;
}



/* Entry: 10b559e1c; end: 10b559e73;  */

void FUN_10b559e1c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b559a7c(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b559e74; end: 10b559f9b;  */

long * FUN_10b559e74(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b55a5a0();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)0x1;
    func_0x00010b55a550();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    plVar3 = unaff_x19;
    func_0x000107c28094();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x28);
    puVar4 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,plVar3);
    param_4 = (long *)(puVar4 + 1);
    *puVar4 = uVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x3;
    func_0x00010b55a550();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b55a5dc();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
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



/* Entry: 10b559f9c; end: 10b559fb3;  */

void FUN_10b559f9c(void)

{
  func_0x00010b559b20();
  func_0x00010b55a4b8();
  return;
}



/* Entry: 10b559fb4; end: 10b559fb7;  */

void FUN_10b559fb4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b55a590();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b55a3f8();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b559bec();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b55a624();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b55a5c0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b559fb8; end: 10b55a063;  */

void FUN_10b559fb8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b55a590();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b55a3f8();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b559bec();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b55a624();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b55a5c0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b55a064; end: 10b55a08b;  */

void FUN_10b55a064(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x70);
  }
  *puVar1 = &PTR_FUN_110d06ae0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  return;
}



/* Entry: 10b55a08c; end: 10b55a217;  */

void FUN_10b55a08c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x70);
  }
  *puVar1 = &PTR_FUN_110d06ae0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  return;
}



/* Entry: 10b55a218; end: 10b55a2cb;  */

undefined8 * FUN_10b55a218(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d06b80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b55a508();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x00010b55a5e8();
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x00010b55a5e8();
  puVar1[4] = lVar2;
  lVar2 = param_2 + 0x28;
  func_0x00010b55a5e8();
  puVar1[5] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000108c6f470(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar1[6] = param_1;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10b55a2cc; end: 10b55a33b;  */

undefined8 * FUN_10b55a2cc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d06b30;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  FUN_10b55926c();
  return puVar1;
}



/* Entry: 10b55a33c; end: 10b55a3f7;  */

undefined8 * FUN_10b55a33c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x70);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d06ae0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b55a508();
  }
  func_0x00010598fd00(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x28;
  func_0x00010b55a5f0();
  puVar1[5] = lVar2;
  lVar2 = param_2 + 0x30;
  func_0x00010b55a5f0();
  puVar1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00010b55a5f0();
  puVar1[7] = lVar2;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  puVar1[0xc] = *(undefined8 *)(param_2 + 0x60);
  puVar1[9] = uVar4;
  puVar1[8] = uVar3;
  puVar1[0xb] = uVar6;
  puVar1[10] = uVar5;
  return puVar1;
}



/* Entry: 10b55a3f8; end: 10b55a4ab;  */

undefined8 * FUN_10b55a3f8(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110d06bd0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b55a508();
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  if (iVar1 == 3) {
    FUN_10b55a33c(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else if (iVar1 == 2) {
    FUN_10b55a2cc(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar1 != 1) {
      return puVar2;
    }
    FUN_10b55a218(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  puVar2[2] = param_1;
  return puVar2;
}



/* Entry: 10b55a4ac; end: 10b55a677;  */

void FUN_10b55a4ac(void)

{
  return;
}



/* Entry: 10b55a678; end: 10b55a69f;  */

long FUN_10b55a678(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b55a6a0; end: 10b55a6e7;  */

undefined8 * FUN_10b55a6a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d06ec8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010b55a638(param_1,param_3);
  return param_1;
}



/* Entry: 10b55a6e8; end: 10b55a6eb;  */

long FUN_10b55a6e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b55a6ec; end: 10b55a6ff;  */

void FUN_10b55a6ec(void)

{
  FUN_10b55a678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55a700; end: 10b55a723;  */

undefined ** FUN_10b55a700(void)

{
  return &PTR_DAT_110d06f08;
}



/* Entry: 10b55a724; end: 10b55a7ff;  */

long * FUN_10b55a724(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b55a8ec();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b55a8f8();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b55a8ec();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b55a8f8();
    param_2 = plVar2;
  }
  if ((int)param_1[3] != 0) {
    FUN_10b55a8ec();
    lVar4 = param_1[3];
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    param_2 = (long *)(ulong)(uint)((int)lVar4 << 1 ^ (int)lVar4 >> 0x1f);
    func_0x000107c280a8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b55a800; end: 10b55a8a7;  */

long FUN_10b55a800(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(iVar1 << 1 ^ iVar1 >> 0x1f) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b55a8a8; end: 10b55a8eb;  */

void FUN_10b55a8a8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d06ec8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b55a8ec; end: 10b55a933;  */

ulong * FUN_10b55a8ec(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b55a934; end: 10b55a95b;  */

long FUN_10b55a934(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b55a95c; end: 10b55a9a3;  */

undefined8 * FUN_10b55a95c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d06fa0;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b55a90c(param_1,param_3);
  return param_1;
}



/* Entry: 10b55a9a4; end: 10b55a9a7;  */

long FUN_10b55a9a4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b55a9a8; end: 10b55a9bb;  */

void FUN_10b55a9a8(void)

{
  FUN_10b55a934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55a9bc; end: 10b55a9db;  */

undefined ** FUN_10b55a9bc(void)

{
  return &PTR_DAT_110d06fe0;
}



/* Entry: 10b55a9dc; end: 10b55aa73;  */

long * FUN_10b55a9dc(long param_1,long *param_2,long *param_3)

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
    func_0x000107c280b8(param_2,uVar2);
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



/* Entry: 10b55aa74; end: 10b55aacb;  */

long FUN_10b55aa74(long param_1)

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



/* Entry: 10b55aacc; end: 10b55ab0f;  */

void FUN_10b55aacc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d06fa0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b55ab10; end: 10b55ab17;  */

void FUN_10b55ab10(void)

{
  return;
}



/* Entry: 10b55ab18; end: 10b55ab43;  */

long FUN_10b55ab18(long param_1)

{
  func_0x00010b55b728();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b55ab44; end: 10b55ab47;  */

long FUN_10b55ab44(long param_1)

{
  func_0x00010b55b728();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b55ab48; end: 10b55ab5b;  */

void FUN_10b55ab48(void)

{
  FUN_10b55ab18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55ab5c; end: 10b55ab67;  */

undefined ** FUN_10b55ab5c(void)

{
  return &PTR_DAT_110d07158;
}



/* Entry: 10b55ab68; end: 10b55ab97;  */

void FUN_10b55ab68(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b55b730();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b55ab98; end: 10b55ac37;  */

long * FUN_10b55ab98(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010b55b754(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b55abfc;
  }
  else if ((int)plVar1 == 0) goto LAB_10b55abfc;
  func_0x00010b55b700();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
LAB_10b55abfc:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b55ac38; end: 10b55ac93;  */

void FUN_10b55ac38(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b55b760();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b55ac94; end: 10b55ac97;  */

void FUN_10b55ac94(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x10);
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



/* Entry: 10b55ac98; end: 10b55acfb;  */

void FUN_10b55ac98(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x10);
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



/* Entry: 10b55acfc; end: 10b55ad2f;  */

void FUN_10b55acfc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 10b55ad30; end: 10b55ad53;  */

undefined8 FUN_10b55ad30(undefined8 param_1)

{
  func_0x00010b55b728();
  return param_1;
}



/* Entry: 10b55ad54; end: 10b55ad57;  */

undefined8 FUN_10b55ad54(undefined8 param_1)

{
  func_0x00010b55b728();
  return param_1;
}



/* Entry: 10b55ad58; end: 10b55ad6b;  */

void FUN_10b55ad58(void)

{
  FUN_10b55ad30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55ad6c; end: 10b55ad8b;  */

undefined ** FUN_10b55ad6c(void)

{
  return &PTR_DAT_110d071d8;
}



/* Entry: 10b55ad8c; end: 10b55ae37;  */

long * FUN_10b55ad8c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b55b714();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 2);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(plVar6,uVar2);
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b55b714();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x14);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar6);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
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
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b55ae38; end: 10b55aeab;  */

ulong FUN_10b55ae38(long param_1)

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
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = uVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b55aeac; end: 10b55af33;  */

void FUN_10b55aeac(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x3c) == 6) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b55af08;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b55ad30();
    }
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 5) goto LAB_10b55af08;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b55af08;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b55ab18();
    }
  }
  __ZdlPv();
LAB_10b55af08:
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10b55af34; end: 10b55afdf;  */

undefined8 * FUN_10b55af34(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d07118;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b55b708();
  }
  lVar2 = param_3 + 0x10;
  func_0x00010b55b720();
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x00010b55b720();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00010b55b720();
  param_1[4] = lVar2;
  *(undefined4 *)(param_1 + 7) = 0;
  iVar1 = *(int *)(param_3 + 0x3c);
  *(int *)((long)param_1 + 0x3c) = iVar1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  if (iVar1 == 6) {
    FUN_10b55b648(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  else {
    if (iVar1 != 5) {
      return param_1;
    }
    FUN_10b55b5e0(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 10b55afe0; end: 10b55b00b;  */

undefined8 FUN_10b55afe0(undefined8 param_1)

{
  func_0x00010b55b728();
  FUN_10b55b00c(param_1);
  return param_1;
}



/* Entry: 10b55b00c; end: 10b55b053;  */

void FUN_10b55b00c(long param_1)

{
  ulong uVar1;
  
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x3c) == 6) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b55af08;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b55ad30();
    }
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 5) goto LAB_10b55af08;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b55af08;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b55ab18();
    }
  }
  __ZdlPv();
LAB_10b55af08:
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10b55b054; end: 10b55b057;  */

undefined8 FUN_10b55b054(undefined8 param_1)

{
  func_0x00010b55b728();
  FUN_10b55b00c(param_1);
  return param_1;
}



/* Entry: 10b55b058; end: 10b55b06b;  */

void FUN_10b55b058(void)

{
  FUN_10b55afe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55b06c; end: 10b55b077;  */

undefined ** FUN_10b55b06c(void)

{
  return &PTR_DAT_110d07258;
}



/* Entry: 10b55b078; end: 10b55b0c3;  */

void FUN_10b55b078(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b55b730();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  FUN_10b55aeac();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b55b0c4; end: 10b55b237;  */

long * FUN_10b55b0c4(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar2 = param_2;
  func_0x00010b55b754(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55b104;
  }
  else if ((int)plVar2 != 0) {
LAB_10b55b104:
    func_0x00010b55b700();
    plVar2 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b55b6d8();
  }
  func_0x00010b55b754(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55b144;
  }
  else if ((int)plVar2 != 0) {
LAB_10b55b144:
    func_0x00010b55b700();
    plVar2 = (long *)0x2;
    param_2 = param_3;
    func_0x00010b55b6d8();
  }
  func_0x00010b55b754(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b55b1a0;
  }
  else if ((int)plVar2 == 0) goto LAB_10b55b1a0;
  func_0x00010b55b700();
  param_2 = param_3;
  func_0x00010b55b6d8(param_3,3);
LAB_10b55b1a0:
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar1 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280b8(param_2,uVar1);
  }
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x3c);
  if (*(uint *)(param_1 + 0x3c) - 5 < 2) {
    func_0x000107c303cc(plVar2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18),param_2,param_3);
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



/* Entry: 10b55b238; end: 10b55b34b;  */

long FUN_10b55b238(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010b55b760();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b55b264;
LAB_10b55b250:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b55b250;
LAB_10b55b264:
    param_1 = 0;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    param_1 = param_1 + uVar1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    param_1 = param_1 + uVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    param_1 = param_1 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6) +
              1;
  }
  if (*(int *)(unaff_x19 + 0x3c) == 6) {
    lVar2 = *(long *)(unaff_x19 + 0x30);
    FUN_10b55ae38();
  }
  else {
    if (*(int *)(unaff_x19 + 0x3c) != 5) goto LAB_10b55b31c;
    lVar2 = *(long *)(unaff_x19 + 0x30);
    FUN_10b55ac38();
  }
  param_1 = param_1 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
LAB_10b55b31c:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x38) = (int)param_1;
  return param_1;
}



/* Entry: 10b55b34c; end: 10b55b34f;  */

void FUN_10b55b34c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  lVar5 = param_2;
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x10));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x18));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x20));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) goto LAB_10b55b4a8;
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b55aeac(param_1);
    }
    *(int *)(param_1 + 0x3c) = iVar2;
  }
  if (iVar2 == 6) {
    if (iVar3 == 6) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x3c) != 6) {
        ppuVar1 = &PTR_PTR_1133966e0;
      }
      FUN_10b55acfc(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_10b55b4a8;
    }
    FUN_10b55b648(uVar4,*(undefined8 *)(param_2 + 0x30));
  }
  else {
    if (iVar2 != 5) goto LAB_10b55b4a8;
    if (iVar3 == 5) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x3c) != 5) {
        ppuVar1 = &PTR_PTR_1133966c0;
      }
      FUN_10b55ac98(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_10b55b4a8;
    }
    FUN_10b55b5e0(uVar4,*(undefined8 *)(param_2 + 0x30));
  }
  *(ulong *)(param_1 + 0x30) = uVar4;
LAB_10b55b4a8:
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



/* Entry: 10b55b350; end: 10b55b4ef;  */

void FUN_10b55b350(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  lVar5 = param_2;
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x10));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x18));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55b748(*(undefined8 *)(param_2 + 0x20));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55b73c();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) goto LAB_10b55b4a8;
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b55aeac(param_1);
    }
    *(int *)(param_1 + 0x3c) = iVar2;
  }
  if (iVar2 == 6) {
    if (iVar3 == 6) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x3c) != 6) {
        ppuVar1 = &PTR_PTR_1133966e0;
      }
      FUN_10b55acfc(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_10b55b4a8;
    }
    FUN_10b55b648(uVar4,*(undefined8 *)(param_2 + 0x30));
  }
  else {
    if (iVar2 != 5) goto LAB_10b55b4a8;
    if (iVar3 == 5) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x3c) != 5) {
        ppuVar1 = &PTR_PTR_1133966c0;
      }
      FUN_10b55ac98(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_10b55b4a8;
    }
    FUN_10b55b5e0(uVar4,*(undefined8 *)(param_2 + 0x30));
  }
  *(ulong *)(param_1 + 0x30) = uVar4;
LAB_10b55b4a8:
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



/* Entry: 10b55b4f0; end: 10b55b507;  */

void FUN_10b55b4f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b55b6f8();
  }
  else {
    func_0x00010b55b6e4();
  }
  *puVar1 = &PTR_FUN_110d07078;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}


