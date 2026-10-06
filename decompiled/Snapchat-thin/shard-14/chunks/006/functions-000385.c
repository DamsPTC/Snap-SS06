/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4eba14; end: 10b4eba43;  */

void FUN_10b4eba14(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4ed9d0();
  func_0x000107c3025c();
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



/* Entry: 10b4eba44; end: 10b4ebadf;  */

long * FUN_10b4eba44(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b4ed91c(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b4ebaa8;
  }
  else if ((int)plVar1 == 0) goto LAB_10b4ebaa8;
  func_0x00010b4ed860();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar4 = unaff_x22;
LAB_10b4ebaa8:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b4ed938();
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



/* Entry: 10b4ebae0; end: 10b4ebb93;  */

void FUN_10b4ebae0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b4ed8c0(*(undefined8 *)(param_1 + 0x10));
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
    func_0x00010b4ed9b8();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b4ebb94; end: 10b4ebbdb;  */

void FUN_10b4ebb94(long param_1,long param_2)

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



/* Entry: 10b4ebbdc; end: 10b4ebbff;  */

undefined8 FUN_10b4ebbdc(undefined8 param_1)

{
  func_0x00010b4ed8e4();
  return param_1;
}



/* Entry: 10b4ebc00; end: 10b4ebc03;  */

undefined8 FUN_10b4ebc00(undefined8 param_1)

{
  func_0x00010b4ed8e4();
  return param_1;
}



/* Entry: 10b4ebc04; end: 10b4ebc17;  */

void FUN_10b4ebc04(void)

{
  FUN_10b4ebbdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ebc18; end: 10b4ebc3b;  */

undefined ** FUN_10b4ebc18(void)

{
  return &PTR_DAT_110cf34b8;
}



/* Entry: 10b4ebc3c; end: 10b4ebceb;  */

long * FUN_10b4ebc3c(undefined4 *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  int iVar6;
  long *plVar7;
  int iVar8;
  
  puVar2 = param_1;
  plVar7 = param_3;
  if (param_1[4] != 0) {
    puVar3 = param_1;
    func_0x00010b4edaa4();
    uVar1 = param_1[4];
    puVar2 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,puVar3);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  if (param_1[5] != 0) {
    func_0x00010b4edaa4();
    uVar1 = param_1[5];
    puVar3 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,puVar2);
    param_2 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  plVar4 = param_2;
  if (param_1[6] != 0) {
    plVar4 = param_3;
    func_0x000107c282ac();
    plVar7 = param_2;
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    func_0x00010b4ed938();
    if ((long)plVar7 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      plVar7 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar4 < (long)(int)plVar7) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar6 = (int)plVar7;
        plVar7 = (long *)(ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar4 + (long)iVar8;
        plVar4 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar4 + (long)iVar6);
    }
    _memcpy(plVar4,lVar5,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)plVar7);
  }
  return plVar4;
}



/* Entry: 10b4ebcec; end: 10b4ebd5b;  */

long FUN_10b4ebcec(long param_1)

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
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b4ebd5c; end: 10b4ebdcf;  */

long FUN_10b4ebd5c(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b4ec5ac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4ebbdc();
  }
  __ZdlPv();
  FUN_10b4ed224(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4ebdd0; end: 10b4ebdd3;  */

long FUN_10b4ebdd0(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b4ec5ac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4ebbdc();
  }
  __ZdlPv();
  FUN_10b4ed224(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4ebdd4; end: 10b4ebde7;  */

void FUN_10b4ebdd4(void)

{
  FUN_10b4ebd5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ebde8; end: 10b4ebdf3;  */

undefined ** FUN_10b4ebde8(void)

{
  return &PTR_DAT_110cf3510;
}



/* Entry: 10b4ebdf4; end: 10b4ebeeb;  */

void FUN_10b4ebdf4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c282c0(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4ebe88(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4ebc24(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 10b4ebeec; end: 10b4ec1df;  */

long * FUN_10b4ebeec(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x8;
  int iVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  
  lVar13 = 8;
  plVar5 = (long *)&UNK_10f7754a2;
  plVar9 = param_3;
  plVar4 = param_2;
  for (uVar12 = (ulong)(*(uint *)(param_1 + 0x20) &
                       ((int)*(uint *)(param_1 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
      uVar12 = uVar12 - 1) {
    uVar7 = *(ulong *)(param_1 + 0x18);
    puVar2 = (ulong *)(param_1 + 0x18);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + lVar13 + -1);
    }
    plVar9 = (long *)*puVar2;
    param_2 = (long *)(long)*(char *)((long)plVar9 + 0x17);
    plVar6 = plVar9;
    if ((long)param_2 < 0) {
      param_2 = (long *)plVar9[1];
      plVar6 = (long *)*plVar9;
    }
    func_0x000107c303d4(plVar6,param_2,1,&UNK_10f7754a2);
    plVar11 = (long *)(long)*(char *)((long)plVar9 + 0x17);
    if ((((long)plVar11 < 0) && (plVar11 = (long *)plVar9[1], 0x7f < (long)plVar11)) ||
       ((*param_3 - (long)plVar4) + 0xe < (long)plVar11)) {
      func_0x00010b4eda64();
      func_0x00010b4d5120();
    }
    else {
      *(undefined1 *)plVar4 = 10;
      *(char *)((long)plVar4 + 1) = (char)plVar11;
      param_2 = plVar9;
      if (*(char *)((long)plVar9 + 0x17) < '\0') {
        param_2 = (long *)*plVar9;
      }
      plVar9 = plVar11;
      _memcpy((undefined *)((long)plVar4 + 2));
      plVar6 = (long *)((undefined *)((long)plVar4 + 2) + (long)plVar11);
    }
    lVar13 = lVar13 + 8;
    plVar4 = plVar6;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    param_2 = *(long **)(param_1 + 0x68);
    plVar9 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    plVar4 = (long *)0x2;
    func_0x00010b4ed868();
  }
  func_0x00010b4ed91c(*(undefined8 *)(param_1 + 0x48));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x6e65722e7364612e;
    plVar6 = (long *)0x7461686370616e73;
LAB_10b4ec02c:
    func_0x00010b4ed860();
    func_0x00010b4edad4();
    func_0x00010b4ed870();
    plVar4 = plVar6;
  }
  else {
    plVar6 = plVar5;
    if ((int)param_2 != 0) goto LAB_10b4ec02c;
  }
  func_0x00010b4ed91c(*(undefined8 *)(param_1 + 0x50));
  if ((long)param_2 < 0) {
    plVar6 = (long *)0x7461686370616e73;
LAB_10b4ec068:
    func_0x00010b4ed860(plVar6);
    param_2 = (long *)0x4;
    plVar4 = param_3;
    func_0x00010b4ed870();
  }
  else {
    plVar6 = plVar5;
    if ((int)param_2 != 0) goto LAB_10b4ec068;
  }
  func_0x00010b4ed91c(*(undefined8 *)(param_1 + 0x58));
  if ((long)param_2 < 0) {
    plVar6 = (long *)0x7461686370616e73;
LAB_10b4ec0a8:
    func_0x00010b4ed860(plVar6);
    plVar4 = param_3;
    func_0x00010b4ed870(param_3,5);
  }
  else {
    plVar6 = plVar5;
    if ((int)param_2 != 0) goto LAB_10b4ec0a8;
  }
  lVar13 = *(long *)(param_1 + 0x78);
  plVar6 = plVar4;
  if (lVar13 != 0) {
    plVar6 = param_3;
    func_0x000106af68d0();
    plVar9 = plVar4;
  }
  func_0x00010b4ed91c(*(undefined8 *)(param_1 + 0x60));
  if (lVar13 < 0) {
    plVar5 = (long *)0x7461686370616e73;
  }
  else if ((int)lVar13 == 0) goto LAB_10b4ec11c;
  func_0x00010b4ed860(plVar5);
  plVar6 = param_3;
  func_0x00010b4ed870(param_3,7);
LAB_10b4ec11c:
  iVar10 = *(int *)(param_1 + 0x38);
  for (iVar8 = 0; iVar10 != iVar8; iVar8 = iVar8 + 1) {
    uVar12 = *(ulong *)(param_1 + 0x30);
    puVar2 = (ulong *)(param_1 + 0x30);
    if ((uVar12 & 1) != 0) {
      puVar2 = (ulong *)(uVar12 + (long)iVar8 * 8 + 7);
    }
    plVar9 = (long *)(ulong)*(uint *)(*puVar2 + 0x18);
    plVar6 = (long *)0x8;
    func_0x00010b4ed868();
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar9 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0x1c);
    plVar6 = (long *)0x9;
    func_0x00010b4ed868();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4ed938();
    if ((long)plVar9 < 0) {
      lVar13 = *(long *)(extraout_x8 + 8);
      plVar9 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar13 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar6 < (long)(int)plVar9) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar6) + 0x10;
        iVar8 = (int)plVar9;
        plVar9 = (long *)(ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)plVar6 + (long)iVar10);
        plVar6 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar6 + (long)iVar8);
    }
    _memcpy(plVar6,lVar13,(ulong)plVar9 & 0xffffffff);
    return (long *)((long)plVar6 + (long)(int)plVar9);
  }
  return plVar6;
}



/* Entry: 10b4ec1e0; end: 10b4ec343;  */

/* WARNING: Removing unreachable block (ram,0x00010b4ec248) */

ulong FUN_10b4ec1e0(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  uVar3 = param_1;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  func_0x00010b4ed9dc();
  func_0x00010b4ed8c0(*(undefined8 *)(param_1 + 0x48));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ed8b4();
  }
  func_0x00010b4ed8c0(*(undefined8 *)(param_1 + 0x50));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ed8b4();
  }
  func_0x00010b4ed8c0(*(undefined8 *)(param_1 + 0x58));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ed8b4();
  }
  func_0x00010b4ed8c0(*(undefined8 *)(param_1 + 0x60));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ed8b4();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x68);
      func_0x00010b4ec710();
      func_0x00010b4ed904();
      uVar4 = uVar4 + lVar6 + extraout_x8_03 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x70);
      FUN_10b4ebcec();
      func_0x00010b4ed904();
      uVar4 = uVar4 + lVar6 + extraout_x8_04 + 1;
    }
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010b4eda1c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4ed9b8();
    lVar6 = extraout_x8_05;
    if (extraout_x8_05 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x14) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b4ec344; end: 10b4ec347;  */

void FUN_10b4ec344(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b4ed944();
  puVar5 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x00010598fce8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  FUN_10b4ec4ac();
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x58));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b4ed524();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10b4ec4bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b4ed5e4();
        *(ulong **)(unaff_x21 + 0x70) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b4ebb94();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  func_0x00010b4ed958();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b4eda48();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4ec348; end: 10b4ec4ab;  */

void FUN_10b4ec348(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b4ed944();
  puVar5 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x00010598fce8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  FUN_10b4ec4ac();
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x58));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b4ed524();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10b4ec4bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b4ed5e4();
        *(ulong **)(unaff_x21 + 0x70) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b4ebb94();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  func_0x00010b4ed958();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b4eda48();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4ec4ac; end: 10b4ec4bb;  */

void FUN_10b4ec4ac(long *param_1,long param_2)

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



/* Entry: 10b4ec4bc; end: 10b4ec5ab;  */

void FUN_10b4ec4bc(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4ed944();
  puVar3 = (ulong *)param_1[1];
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000106af6730();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000106af6830();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x00010b4ed958();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b4eda48();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4ec5ac; end: 10b4ec5f7;  */

long FUN_10b4ec5ac(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb594();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4ec5f8; end: 10b4ec5fb;  */

long FUN_10b4ec5f8(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb594();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4ec5fc; end: 10b4ec60f;  */

void FUN_10b4ec5fc(void)

{
  FUN_10b4ec5ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ec610; end: 10b4ec61b;  */

undefined ** FUN_10b4ec610(void)

{
  return &PTR_DAT_110cf3560;
}



/* Entry: 10b4ec61c; end: 10b4ec7cb;  */

long * FUN_10b4ec61c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  func_0x00010b4ed848();
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000105991a14();
    param_3 = unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x00010b4ed91c(*(undefined8 *)(unaff_x21 + 0x18));
  if (lVar3 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4ec688;
  }
  else if ((int)lVar3 == 0) goto LAB_10b4ec688;
  param_4 = (long *)&UNK_10f7755ca;
  func_0x00010b4ed860();
  func_0x00010b4ed7f8();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b4ec688:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x18);
    param_1 = (long *)0x3;
    func_0x00010b4ed7ec();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x14);
    param_1 = (long *)0x4;
    func_0x00010b4ed7ec();
    unaff_x20 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x38) != 0) {
    func_0x00010b4edab0();
    unaff_x20 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x40) != 0) {
    func_0x00010b4ed978();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b4ed938();
    if ((long)param_3 < 0) {
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    func_0x00010b4eda10();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (long *)(ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar5);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b4ec7cc; end: 10b4ec7cf;  */

void FUN_10b4ec7cc(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4ed944();
  puVar3 = (ulong *)param_1[1];
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000106af6730();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x000106af6830();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x00010b4ed958();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b4eda48();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4ec7d0; end: 10b4ec80f;  */

long FUN_10b4ec7d0(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4ec810; end: 10b4ec813;  */

long FUN_10b4ec810(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4ec814; end: 10b4ec827;  */

void FUN_10b4ec814(void)

{
  FUN_10b4ec7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ec828; end: 10b4ec833;  */

undefined ** FUN_10b4ec828(void)

{
  return &PTR_DAT_110cf35a8;
}



/* Entry: 10b4ec834; end: 10b4ec877;  */

void FUN_10b4ec834(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x00010b4edac4();
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



/* Entry: 10b4ec878; end: 10b4ec99b;  */

long * FUN_10b4ec878(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int unaff_w23;
  int iVar4;
  
  func_0x00010b4ed848();
  func_0x00010b4ed91c(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_10b4ec8cc;
    plVar2 = (long *)*unaff_x22;
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 == 0) goto LAB_10b4ec8cc;
  }
  param_4 = (long *)&UNK_10f775600;
  func_0x00010b4ed860();
  func_0x00010b4eda64();
  func_0x00010b4ed7f8();
  param_1 = plVar2;
  unaff_x20 = plVar2;
LAB_10b4ec8cc:
  func_0x00010b4eda38();
  while (unaff_w23 != (int)unaff_x22) {
    func_0x00010b4ed7a0();
    param_3 = (ulong)*(uint *)(param_2 + 0x24);
    param_1 = (long *)0x2;
    func_0x00010b4ed7ec();
    func_0x00010b4eda58();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b4ed938();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b4eda10();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b4ec99c; end: 10b4ec9ff;  */

void FUN_10b4ec99c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ed9fc();
  if (*(int *)(param_2 + 0x18) != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x10);
    param_2 = unaff_x20 + 0x10;
    func_0x000107c303c4();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    func_0x00010b4edacc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4ed838();
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



/* Entry: 10b4eca00; end: 10b4eca33;  */

long FUN_10b4eca00(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4eca34; end: 10b4eca37;  */

long FUN_10b4eca34(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4eca38; end: 10b4eca4b;  */

void FUN_10b4eca38(void)

{
  FUN_10b4eca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4eca4c; end: 10b4eca57;  */

undefined ** FUN_10b4eca4c(void)

{
  return &PTR_DAT_110cf3600;
}



/* Entry: 10b4eca58; end: 10b4eca93;  */

void FUN_10b4eca58(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4ed9d0();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b4eca94; end: 10b4ecb8b;  */

long * FUN_10b4eca94(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b4ed848();
  func_0x00010b4ed91c(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b4ecacc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b4ecacc:
      param_4 = (long *)&UNK_10f77563d;
      func_0x00010b4ed860();
      func_0x00010b4eda64();
      func_0x00010b4ed7f8();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  if (*(char *)(unaff_x21 + 0x20) == '\x01') {
    func_0x000107c28094();
    param_1 = (long *)(ulong)*(byte *)(unaff_x21 + 0x20);
    param_2 = 0x10;
    func_0x000107c280a8(0x10,unaff_x19);
    func_0x000107c280a8();
    unaff_x20 = param_1;
  }
  func_0x00010b4ed91c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b4ecb58;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b4ecb58;
  param_4 = (long *)&UNK_10f77568d;
  func_0x00010b4ed860();
  func_0x00010b4edad4();
  func_0x00010b4ed7f8();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b4ecb58:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4ed938();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b4eda10();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b4ecb8c; end: 10b4ecc9b;  */

void FUN_10b4ecb8c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b4ed8c0(*(undefined8 *)(param_1 + 0x10));
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
  func_0x00010b4ed8c0(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ed8b4();
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4ed9b8();
    lVar3 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10b4ecc9c; end: 10b4ecd03;  */

long FUN_10b4ecc9c(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b4ebd5c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4ecd04; end: 10b4ecd07;  */

long FUN_10b4ecd04(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b4ebd5c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4ecd08; end: 10b4ecd1b;  */

void FUN_10b4ecd08(void)

{
  FUN_10b4ecc9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ecd1c; end: 10b4ecd27;  */

undefined ** FUN_10b4ecd1c(void)

{
  return &PTR_DAT_110cf3660;
}



/* Entry: 10b4ecd28; end: 10b4ecda3;  */

void FUN_10b4ecd28(long param_1)

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
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4ebdf4(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
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



/* Entry: 10b4ecda4; end: 10b4ed0d3;  */

long * FUN_10b4ecda4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010b4ed848();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x40);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (long *)0x1;
    func_0x00010b4ed7ec();
    unaff_x20 = param_1;
  }
  func_0x00010b4ed91c(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_10b4ecdfc;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b4ecdfc:
      param_4 = (long *)&UNK_10f7756cf;
      func_0x00010b4ed860();
      func_0x00010b4edad4();
      func_0x00010b4ed7f8();
      param_1 = plVar3;
      unaff_x20 = plVar3;
    }
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x48);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x4;
    func_0x00010b4ed7ec();
    unaff_x20 = param_1;
  }
  func_0x00010b4ed91c(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b4ece6c;
  }
  else if ((int)param_2 == 0) goto LAB_10b4ece6c;
  param_4 = (long *)&UNK_10f775704;
  func_0x00010b4ed860();
  func_0x00010b4ed7f8();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b4ece6c:
  lVar4 = *(long *)(unaff_x21 + 0x50);
  if (lVar4 != 0) {
    func_0x00010b4ed978();
    unaff_x20 = param_1;
  }
  iVar5 = *(int *)(unaff_x21 + 0x20);
  while (iVar5 != 0) {
    func_0x00010b4ed7a0();
    param_3 = (ulong)*(uint *)(lVar4 + 0x30);
    param_1 = (long *)0x7;
    func_0x00010b4ed7ec();
    func_0x00010b4eda58();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b4ed938();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b4eda10();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        param_3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar6);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b4ed0d4; end: 10b4ed123;  */

void FUN_10b4ed0d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  func_0x00010b4ed998();
  *puVar1 = &PTR_FUN_110cf3040;
  puVar1[1] = param_2;
  puVar1[2] = extraout_x8;
  puVar1[3] = extraout_x8;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4ed124; end: 10b4ed143;  */

void FUN_10b4ed124(void)

{
  func_0x00010b4ed984();
  FUN_10b4eb2cc();
  return;
}



/* Entry: 10b4ed144; end: 10b4ed16b;  */

void FUN_10b4ed144(void)

{
  long extraout_x8;
  
  func_0x00010b4edae0();
  if (extraout_x8 != 0) {
    func_0x00010b4eda08();
  }
  return;
}



/* Entry: 10b4ed16c; end: 10b4ed1ab;  */

void FUN_10b4ed16c(void)

{
  func_0x00010b4ed984();
  FUN_10b4eb9a4();
  return;
}



/* Entry: 10b4ed1ac; end: 10b4ed1d3;  */

void FUN_10b4ed1ac(void)

{
  long extraout_x8;
  
  func_0x00010b4edae0();
  if (extraout_x8 != 0) {
    func_0x00010b4eda08();
  }
  return;
}



/* Entry: 10b4ed1d4; end: 10b4ed1fb;  */

void FUN_10b4ed1d4(void)

{
  long extraout_x8;
  
  func_0x00010b4edae0();
  if (extraout_x8 != 0) {
    func_0x00010b4eda08();
  }
  return;
}



/* Entry: 10b4ed1fc; end: 10b4ed223;  */

undefined8 FUN_10b4ed1fc(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_10b4ed1ac(param_1 + 0x18);
  func_0x00010b4edae0(param_1);
  if (extraout_x8 != 0) {
    func_0x00010b4eda08();
  }
  return unaff_x19;
}



/* Entry: 10b4ed224; end: 10b4ed24b;  */

void FUN_10b4ed224(void)

{
  long extraout_x8;
  
  func_0x00010b4edae0();
  if (extraout_x8 != 0) {
    func_0x00010b4eda08();
  }
  return;
}



/* Entry: 10b4ed24c; end: 10b4ed50f;  */

void FUN_10b4ed24c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  func_0x00010b4ed998();
  *puVar1 = &PTR_FUN_110cf3040;
  puVar1[1] = param_1;
  puVar1[2] = extraout_x8;
  puVar1[3] = extraout_x8;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4ed510; end: 10b4ed523;  */

void FUN_10b4ed510(ulong *param_1)

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



/* Entry: 10b4ed524; end: 10b4ed5e3;  */

undefined8 * FUN_10b4ed524(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110cf3180;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4ed8a8();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  lVar3 = param_2 + 0x18;
  func_0x00010b4ed930();
  puVar2[3] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x000106af6730(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000106af6830(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  puVar2[8] = *(undefined8 *)(param_2 + 0x40);
  puVar2[7] = uVar6;
  puVar2[6] = uVar5;
  return puVar2;
}



/* Entry: 10b4ed5e4; end: 10b4ed64f;  */

undefined8 * FUN_10b4ed5e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4edabc();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cf3090;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10b4ebb94();
  return puVar1;
}



/* Entry: 10b4ed650; end: 10b4ed76f;  */

undefined8 * FUN_10b4ed650(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010b4ed944();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x80;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_FUN_110cf31d0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4ed8a8();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  func_0x00010598fd00(puVar2 + 3);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = unaff_x21;
  FUN_10b4ec4ac(puVar2 + 6,unaff_x20 + 0x30);
  lVar3 = unaff_x20 + 0x48;
  func_0x00010b4ed930();
  puVar2[9] = lVar3;
  lVar3 = unaff_x20 + 0x50;
  func_0x00010b4ed930();
  puVar2[10] = lVar3;
  lVar3 = unaff_x20 + 0x58;
  func_0x00010b4ed930();
  puVar2[0xb] = lVar3;
  lVar3 = unaff_x20 + 0x60;
  func_0x00010b4ed930();
  puVar2[0xc] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    FUN_10b4ed524();
  }
  puVar2[0xd] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10b4ed5e4();
  }
  puVar2[0xe] = unaff_x21;
  puVar2[0xf] = *(undefined8 *)(unaff_x20 + 0x78);
  return puVar2;
}



/* Entry: 10b4ed770; end: 10b4edaeb;  */

void FUN_10b4ed770(void)

{
  return;
}



/* Entry: 10b4edaec; end: 10b4edb5b;  */

undefined8 * FUN_10b4edaec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf37b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 10b4edb5c; end: 10b4edb8b;  */

long FUN_10b4edb5c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4edb8c; end: 10b4edb8f;  */

long FUN_10b4edb8c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4edb90; end: 10b4edba3;  */

void FUN_10b4edb90(void)

{
  FUN_10b4edb5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4edba4; end: 10b4edbaf;  */

undefined ** FUN_10b4edba4(void)

{
  return &PTR_DAT_110cf37f0;
}



/* Entry: 10b4edbb0; end: 10b4edd0b;  */

void FUN_10b4edbb0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b4edd0c; end: 10b4edd0f;  */

void FUN_10b4edd0c(long param_1,long param_2)

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



/* Entry: 10b4edd10; end: 10b4edd8b;  */

void FUN_10b4edd10(long param_1,long param_2)

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



/* Entry: 10b4edd8c; end: 10b4edd93;  */

void FUN_10b4edd8c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf37b0;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4edd94; end: 10b4edde3;  */

void FUN_10b4edd94(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf37b0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4edde4; end: 10b4eddeb;  */

void FUN_10b4edde4(void)

{
  return;
}



/* Entry: 10b4eddec; end: 10b4ede1b;  */

long FUN_10b4eddec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4ede1c; end: 10b4ede1f;  */

long FUN_10b4ede1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4ede20; end: 10b4ede33;  */

void FUN_10b4ede20(void)

{
  FUN_10b4eddec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ede34; end: 10b4ede3f;  */

undefined ** FUN_10b4ede34(void)

{
  return &PTR_DAT_110cf38a0;
}



/* Entry: 10b4ede40; end: 10b4ede7f;  */

void FUN_10b4ede40(long param_1)

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



/* Entry: 10b4ede80; end: 10b4edf6b;  */

long * FUN_10b4ede80(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b4edf20;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4edf20;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f775741);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_10b4edf20:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
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
  if (*param_3 - (long)param_2 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b4edf6c; end: 10b4ee073;  */

void FUN_10b4edf6c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b4edfa4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b4edfa4:
    iVar1 = 0;
    goto LAB_10b4edfa8;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b4edfa8:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b4ee074; end: 10b4ee07b;  */

void FUN_10b4ee074(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf3860;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4ee07c; end: 10b4ee0c7;  */

void FUN_10b4ee07c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf3860;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4ee0c8; end: 10b4ee0cf;  */

void FUN_10b4ee0c8(void)

{
  return;
}



/* Entry: 10b4ee0d0; end: 10b4ee177;  */

undefined8 * FUN_10b4ee0d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf3918;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b4e6cf0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000106af6730(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b4ee178; end: 10b4ee1ab;  */

long FUN_10b4ee178(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4ee1ac(param_1);
  return param_1;
}



/* Entry: 10b4ee1ac; end: 10b4ee1eb;  */

void FUN_10b4ee1ac(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4eac84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb594();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ee1ec; end: 10b4ee1ef;  */

long FUN_10b4ee1ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4ee1ac(param_1);
  return param_1;
}



/* Entry: 10b4ee1f0; end: 10b4ee203;  */

void FUN_10b4ee1f0(void)

{
  FUN_10b4ee178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ee204; end: 10b4ee20f;  */

undefined ** FUN_10b4ee204(void)

{
  return &PTR_DAT_110cf3958;
}



/* Entry: 10b4ee210; end: 10b4ee277;  */

void FUN_10b4ee210(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4eacd8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb634(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b4ee278; end: 10b4ee40f;  */

long * FUN_10b4ee278(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x00010b4ee6b0(1,param_1[4],*(undefined4 *)(param_1[4] + 0x2c));
    param_2 = plVar2;
  }
  puVar9 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b4ee304;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b4ee304;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f775774);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,param_2);
  param_2 = plVar2;
LAB_10b4ee304:
  plVar4 = plVar2;
  if ((char)param_1[6] == '\x01') {
    func_0x00010b4ee68c();
    plVar4 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b4ee698();
    param_2 = plVar4;
  }
  plVar2 = plVar4;
  if (*(char *)((long)param_1 + 0x31) == '\x01') {
    func_0x00010b4ee68c();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar4);
    func_0x00010b4ee698();
    param_2 = plVar2;
  }
  plVar4 = plVar2;
  if (*(char *)((long)param_1 + 0x32) == '\x01') {
    func_0x00010b4ee68c();
    plVar4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b4ee698();
    param_2 = plVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar4 = (long *)0x6;
    func_0x00010b4ee6b0(6,param_1[5],*(undefined4 *)(param_1[5] + 0x18));
    param_2 = plVar4;
  }
  if (*(char *)((long)param_1 + 0x33) == '\x01') {
    func_0x00010b4ee68c();
    param_2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar4);
    func_0x00010b4ee698();
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



/* Entry: 10b4ee410; end: 10b4ee4e3;  */

void FUN_10b4ee410(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar4 + 0x17) < '\0') {
    if (*(long *)(uVar4 + 8) == 0) goto LAB_10b4ee44c;
  }
  else if (*(char *)(uVar4 + 0x17) == '\0') {
LAB_10b4ee44c:
    iVar3 = 0;
    goto LAB_10b4ee450;
  }
  func_0x000107c282a0();
  iVar3 = (int)uVar4 + 1;
LAB_10b4ee450:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_10b4e6350();
      iVar3 = iVar3 + iVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x000106af66dc();
      iVar3 = iVar3 + iVar2 + 1;
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  iVar3 = ((ushort)((ushort)(byte)uVar6 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar6 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar6 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar6 >> 0x18) * '\x02') + iVar3;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b4ee4e4; end: 10b4ee4e7;  */

void FUN_10b4ee4e4(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        FUN_10b4e6cf0(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000106af6730(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        func_0x00010bceb618();
      }
    }
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(char *)(param_2 + 0x32) == '\x01') {
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  if (*(char *)(param_2 + 0x33) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = 1;
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



/* Entry: 10b4ee4e8; end: 10b4ee62b;  */

void FUN_10b4ee4e8(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        FUN_10b4e6cf0(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000106af6730(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        func_0x00010bceb618();
      }
    }
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(char *)(param_2 + 0x32) == '\x01') {
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  if (*(char *)(param_2 + 0x33) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = 1;
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



/* Entry: 10b4ee62c; end: 10b4ee633;  */

void FUN_10b4ee62c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110cf3918;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b4ee634; end: 10b4ee68b;  */

void FUN_10b4ee634(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110cf3918;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b4ee68c; end: 10b4ee6bb;  */

ulong * FUN_10b4ee68c(void)

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



/* Entry: 10b4ee6bc; end: 10b4ee757;  */

undefined8 * FUN_10b4ee6bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *puVar2 = param_2;
  *param_1 = &PTR_FUN_110cf39d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4eeb20();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4eeb20();
  }
  param_1[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4eeb20();
  }
  param_1[5] = puVar2;
  return param_1;
}



/* Entry: 10b4ee758; end: 10b4ee78b;  */

long FUN_10b4ee758(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4ee78c(param_1);
  return param_1;
}



/* Entry: 10b4ee78c; end: 10b4ee7d3;  */

void FUN_10b4ee78c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bcebc38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ee7d4; end: 10b4ee7d7;  */

long FUN_10b4ee7d4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4ee78c(param_1);
  return param_1;
}


