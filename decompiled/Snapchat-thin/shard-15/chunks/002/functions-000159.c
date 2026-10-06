/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b962370; end: 10b962373;  */

long FUN_10b962370(long param_1)

{
  func_0x00010b963084();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b962374; end: 10b962387;  */

void FUN_10b962374(void)

{
  FUN_10b962344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b962388; end: 10b962393;  */

undefined ** FUN_10b962388(void)

{
  return &PTR_DAT_110d79a38;
}



/* Entry: 10b962394; end: 10b9623c7;  */

void FUN_10b962394(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b963104();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10b9623c8; end: 10b9624bf;  */

long * FUN_10b9623c8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  plVar6 = (long *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)plVar6 + 0x17);
  plVar2 = param_1;
  plVar7 = param_3;
  if (lVar4 < 0) {
    lVar4 = plVar6[1];
    if (lVar4 == 0) goto LAB_10b962430;
    plVar1 = (long *)*plVar6;
  }
  else {
    plVar1 = plVar6;
    if (*(char *)((long)plVar6 + 0x17) == '\0') goto LAB_10b962430;
  }
  func_0x00010b9630d0(plVar1,lVar4,param_3,&UNK_10f7cf0ce);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,plVar6,param_2);
  plVar7 = plVar6;
  param_2 = plVar2;
LAB_10b962430:
  plVar6 = plVar2;
  if (param_1[3] != 0) {
    func_0x00010b9630d8();
    plVar6 = (long *)param_1[3];
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280ac(plVar6,uVar3);
    param_2 = plVar6;
  }
  if ((int)param_1[4] != 0) {
    func_0x00010b9630d8();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 4);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280a8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b96312c();
    if ((long)plVar7 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      plVar7 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar7) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar7;
        plVar7 = (long *)(ulong)(uint)(iVar5 - iVar8);
        if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar4,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar7);
  }
  return param_2;
}



/* Entry: 10b9624c0; end: 10b9625ab;  */

void FUN_10b9624c0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b963158();
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
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b96308c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b96314c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x24) = iVar1;
  return;
}



/* Entry: 10b9625ac; end: 10b9625d7;  */

long FUN_10b9625ac(long param_1)

{
  func_0x00010b963084();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9625d8; end: 10b9625db;  */

long FUN_10b9625d8(long param_1)

{
  func_0x00010b963084();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9625dc; end: 10b9625ef;  */

void FUN_10b9625dc(void)

{
  FUN_10b9625ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9625f0; end: 10b9625fb;  */

undefined ** FUN_10b9625f0(void)

{
  return &PTR_DAT_110d79a78;
}



/* Entry: 10b9625fc; end: 10b96262b;  */

void FUN_10b9625fc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b963104();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10b96262c; end: 10b9626e7;  */

long * FUN_10b96262c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(param_1[2] & 0xfffffffffffffffc);
  plVar1 = param_1;
  plVar6 = param_3;
  if (*(char *)((long)plVar5 + 0x17) < '\0') {
    if (plVar5[1] == 0) goto LAB_10b962684;
    plVar5 = (long *)*plVar5;
  }
  else if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_10b962684;
  func_0x00010b9630d0();
  func_0x00010b963040();
  plVar1 = plVar5;
  param_2 = plVar5;
LAB_10b962684:
  if ((int)param_1[3] != 0) {
    func_0x00010b962ff8();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x000107c280a8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b96312c();
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



/* Entry: 10b9626e8; end: 10b9627d3;  */

void FUN_10b9626e8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b963158();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b96308c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b96314c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b9627d4; end: 10b962803;  */

void FUN_10b9627d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x40) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b962804; end: 10b96283f;  */

long FUN_10b962804(long param_1)

{
  func_0x00010b963084();
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c2a450(param_1 + 0x28);
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b962840; end: 10b962843;  */

long FUN_10b962840(long param_1)

{
  func_0x00010b963084();
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c2a450(param_1 + 0x28);
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b962844; end: 10b962857;  */

void FUN_10b962844(void)

{
  FUN_10b962804();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b962858; end: 10b962863;  */

undefined ** FUN_10b962858(void)

{
  return &PTR_DAT_110d79ab0;
}



/* Entry: 10b962864; end: 10b96289f;  */

void FUN_10b962864(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  func_0x000107c3025c(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10b9628a0; end: 10b962acb;  */

long * FUN_10b9628a0(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  int iVar7;
  long *plVar8;
  uint *puVar9;
  long *plVar10;
  int iVar11;
  
  plVar8 = (long *)(param_1[8] & 0xfffffffffffffffc);
  plVar4 = param_1;
  plVar10 = param_3;
  if (*(char *)((long)plVar8 + 0x17) < '\0') {
    if (plVar8[1] == 0) goto LAB_10b9628fc;
    plVar8 = (long *)*plVar8;
  }
  else if (*(char *)((long)plVar8 + 0x17) == '\0') goto LAB_10b9628fc;
  func_0x00010b9630d0();
  func_0x00010b963040();
  plVar4 = plVar8;
  param_2 = plVar8;
LAB_10b9628fc:
  uVar3 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar3) {
    func_0x00010b962ff8();
    *(undefined1 *)plVar4 = 0x12;
    plVar8 = plVar4;
    while (0x7f < uVar3) {
      func_0x00010b96316c();
    }
    *(char *)((long)plVar4 + 1) = (char)uVar3;
    puVar9 = (uint *)param_1[3];
    puVar2 = puVar9 + (int)param_1[2];
    do {
      func_0x00010b962ff8();
      uVar6 = (ulong)*puVar9;
      param_2 = (long *)((long)plVar8 + 1);
      plVar4 = plVar8;
      while (0x7f < (uint)uVar6) {
        func_0x00010b963138();
        uVar6 = extraout_x8;
      }
      puVar9 = puVar9 + 1;
      *(char *)plVar8 = (char)uVar6;
      plVar8 = plVar4;
    } while (puVar9 < puVar2);
  }
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    func_0x00010b962ff8();
    *(undefined1 *)plVar4 = 0x1a;
    plVar8 = plVar4;
    while (0x7f < uVar3) {
      func_0x00010b96316c();
    }
    *(char *)((long)plVar4 + 1) = (char)uVar3;
    puVar9 = (uint *)param_1[6];
    puVar2 = puVar9 + (int)param_1[5];
    do {
      func_0x00010b962ff8();
      uVar6 = (ulong)*puVar9;
      param_2 = (long *)((long)plVar8 + 1);
      plVar4 = plVar8;
      while (0x7f < (uint)uVar6) {
        func_0x00010b963138();
        uVar6 = extraout_x8_00;
      }
      puVar9 = puVar9 + 1;
      *(char *)plVar8 = (char)uVar6;
      plVar8 = plVar4;
    } while (puVar9 < puVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b96312c();
    if ((long)plVar10 < 0) {
      lVar5 = *(long *)(extraout_x8_01 + 8);
      plVar10 = *(long **)(extraout_x8_01 + 0x10);
    }
    else {
      lVar5 = extraout_x8_01 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar10) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)plVar10;
        plVar10 = (long *)(ulong)(uint)(iVar7 - iVar11);
        if (iVar7 - iVar11 == 0 || iVar7 < iVar11) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar5,(ulong)plVar10 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar10);
  }
  return param_2;
}



/* Entry: 10b962acc; end: 10b962b37;  */

void FUN_10b962acc(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b963118();
  func_0x0001088ffb98();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  func_0x0001088ffb98(puVar1,unaff_x20 + 0x28);
  uVar2 = *(ulong *)(unaff_x20 + 0x40) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b963030();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b962b38; end: 10b962b5f;  */

void FUN_10b962b38(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d799f8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 10b962b60; end: 10b962b8b;  */

long FUN_10b962b60(long param_1)

{
  func_0x00010b963084();
  FUN_10b962f30(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b962b8c; end: 10b962b8f;  */

long FUN_10b962b8c(long param_1)

{
  func_0x00010b963084();
  FUN_10b962f30(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b962b90; end: 10b962ba3;  */

void FUN_10b962b90(void)

{
  FUN_10b962b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b962ba4; end: 10b962baf;  */

undefined ** FUN_10b962ba4(void)

{
  return &PTR_DAT_110d79ae8;
}



/* Entry: 10b962bb0; end: 10b962c17;  */

void FUN_10b962bb0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10b962c18; end: 10b962db3;  */

long * FUN_10b962c18(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x18);
  plVar3 = param_3;
  plVar1 = param_2;
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010b963004();
    plVar3 = (long *)(ulong)*(uint *)((long)param_2 + 0x24);
    plVar1 = (long *)0x1;
    func_0x00010b963110();
  }
  iVar5 = *(int *)(param_1 + 0x30);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010b963004();
    plVar3 = (long *)(ulong)*(uint *)((long)param_2 + 0x1c);
    plVar1 = (long *)0x2;
    func_0x00010b963110();
  }
  iVar5 = *(int *)(param_1 + 0x48);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010b963004();
    plVar3 = (long *)(ulong)*(uint *)(param_2 + 9);
    plVar1 = (long *)0x3;
    func_0x00010b963110();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b96312c();
    if ((long)plVar3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)plVar3) {
      while( true ) {
        iVar5 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar4 = (int)plVar3;
        plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        lVar2 = (long)plVar1 + (long)iVar5;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar4);
    }
    _memcpy(plVar1,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)plVar3);
  }
  return plVar1;
}



/* Entry: 10b962db4; end: 10b962db7;  */

void FUN_10b962db4(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b963118();
  FUN_10b962e00();
  func_0x00010b962e10(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b962e20();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b963030();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b962db8; end: 10b962dff;  */

void FUN_10b962db8(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b963118();
  FUN_10b962e00();
  func_0x00010b962e10(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b962e20();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b963030();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b962e00; end: 10b962e2f;  */

void FUN_10b962e00(long *param_1,long param_2)

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



/* Entry: 10b962e30; end: 10b962eb7;  */

void FUN_10b962e30(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b962bb0();
  func_0x00010b963118(param_1,param_2);
  FUN_10b962e00();
  func_0x00010b962e10(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b962e20();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b963030();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b962eb8; end: 10b962ed7;  */

void FUN_10b962eb8(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    param_2 = 0x20;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_2,0x20);
  }
  func_0x00010b95e7d0(&UNK_110d798f8);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10b962ed8; end: 10b962f03;  */

long * FUN_10b962ed8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b9630e4();
  }
  return param_1;
}



/* Entry: 10b962f04; end: 10b962f2f;  */

long * FUN_10b962f04(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b9630e4();
  }
  return param_1;
}



/* Entry: 10b962f30; end: 10b962f5f;  */

long * FUN_10b962f30(long *param_1)

{
  FUN_10b962f60(param_1 + 6);
  FUN_10b962ed8(param_1 + 3);
  if (*param_1 != 0) {
    func_0x00010b9630e4();
  }
  return param_1;
}



/* Entry: 10b962f60; end: 10b962f8b;  */

long * FUN_10b962f60(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b9630e4();
  }
  return param_1;
}



/* Entry: 10b962f8c; end: 10b962fc7;  */

void FUN_10b962f8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x60);
  }
  *puVar1 = &PTR_FUN_110d799f8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = param_1;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return;
}



/* Entry: 10b962fc8; end: 10b963183;  */

void FUN_10b962fc8(void)

{
  return;
}



/* Entry: 10b963184; end: 10b96326f;  */

void FUN_10b963184(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  FUN_10b963270();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class();
    FUN_10b963270();
    if (((ulong)puVar1 & 1) != 0) {
      _objc_retain(param_3);
      puVar1 = param_3;
      goto LAB_10b963254;
    }
  }
  else {
    puVar2 = param_3;
    func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110e06d58);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((int)puVar2 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010c25d0a0(param_3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_10b963254;
    }
  }
  puVar1 = (undefined *)0x0;
LAB_10b963254:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b963270; end: 10b96327b;  */

void FUN_10b963270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_isKindOfClass_11034d2a8)();
  return;
}



/* Entry: 10b96327c; end: 10b96329b; -[SCValdiActionCompat performWithSender:] */

void FUN_10b96327c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0f95a0(param_1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b96329c; end: 10b963437; -[SCValdiActionCompat performWithParameters:] */

void FUN_10b96329c(long *param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long *unaff_x20;
  long *plVar8;
  long *plVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar4 = param_1;
  puVar6 = PTR_s_performWithMarshaller__11261bf70;
  _objc_opt_respondsToSelector();
  if (((ulong)plVar4 & 1) == 0) {
    plVar8 = (long *)0x0;
    plVar4 = unaff_x20;
    goto LAB_10b9633b0;
  }
  FUN_10b97f424();
  plVar8 = param_3;
  _objc_retain();
  FUN_10b963438();
  lVar2 = lRam0000000000000000;
  while (plVar8 != (long *)0x0) {
    plVar9 = (long *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      plVar5 = plVar4;
      FUN_10b97f8a0(plVar4,*(undefined8 *)((long)plVar9 * 8));
      plVar9 = (long *)((long)plVar9 + 1);
    } while (plVar9 < plVar8);
    FUN_10b963438();
    plVar8 = plVar5;
  }
  _objc_release(param_3);
  func_0x00010b965dc0(param_1,plVar4);
  puVar6 = (undefined *)0xffffffffffffffff;
  plVar9 = plVar4;
  FUN_10b97fca0(plVar4);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  while( true ) {
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar8 = plVar9;
    if (bVar1) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b9633ac);
      (*pcVar3)();
    }
LAB_10b9633b0:
    plVar9 = param_3;
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) break;
    ___stack_chk_fail();
    _objc_end_catch();
    do {
      __Unwind_Resume(plVar9);
    } while ((int)puVar6 == 0);
    _objc_begin_catch(plVar9);
    bVar1 = true;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar8);
  return;
}



/* Entry: 10b963438; end: 10b96344b;  */

void FUN_10b963438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b96344c; end: 10b963463; -[SCValdiActionHandlerHolder actionHandler] */

void FUN_10b96344c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b963464; end: 10b96346f; -[SCValdiActionHandlerHolder setActionHandler:] */

void FUN_10b963464(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10b963470; end: 10b963477; -[SCValdiActionHandlerHolder .cxx_destruct] */

void FUN_10b963470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b963478; end: 10b963553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b963478(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f9dd98;
    lStack_48 = param_1;
    _objc_retain();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar1);
    unaff_x19 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_80;
    pcStack_58 = FUN_10b963554;
    puStack_70 = puVar2;
    lStack_68 = unaff_x19;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010b963694();
    puStack_78 = PTR_PTR_11270bff8;
    puStack_80 = puVar2;
    _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      lVar4 = unaff_x19;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112795d74);
      *(long *)((long)ppuVar3 + (long)_DAT_112795d74) = lVar4;
      _objc_release(uVar5);
    }
    _objc_release(unaff_x19);
    return (undefined1 *)ppuVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10b963554; end: 10b9635c7; -[SCValdiActionWithBlock initWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b963554(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b963694();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(puVar1 + _DAT_112795d74);
    *(undefined8 *)(puVar1 + _DAT_112795d74) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 10b9635c8; end: 10b963603; +[SCValdiActionWithBlock actionWithBlock:] */

void FUN_10b9635c8(void)

{
  undefined8 unaff_x20;
  
  func_0x00010b963694();
  _objc_alloc();
  func_0x00010bff8d00();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10b963604; end: 10b96364b; -[SCValdiActionWithBlock performWithSender:] */

void FUN_10b963604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b963478(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(param_1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b96364c; end: 10b96367f; -[SCValdiActionWithBlock performWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96364c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112795d74);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b963680; end: 10b9636a3; -[SCValdiActionWithBlock .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b963680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795d74,0);
  return;
}



/* Entry: 10b9636a4; end: 10b96374b; -[SCValdiActions initWithActionByName:actionHandlerHolder:] */

undefined1 *
FUN_10b9636a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270c000;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b96374c; end: 10b963763; -[SCValdiActions actionByName] */

void FUN_10b96374c(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b963764; end: 10b9637e7; -[SCValdiActions actionForName:] */

void FUN_10b963764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d5d90;
    _objc_alloc(PTR_PTR_1126d5d90);
    func_0x00010c044120();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b9637e8; end: 10b9637ef; -[SCValdiActions actionHandlerHolder] */

undefined8 FUN_10b9637e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b9637f0; end: 10b96381f; -[SCValdiActions .cxx_destruct] */

void FUN_10b9637f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b963820; end: 10b963837; -[SCValdiBridgeFunction callBlock] */

void FUN_10b963820(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x000107c30e20();
  uVar1 = *param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b963838; end: 10b96387b; +[SCValdiBridgeFunction modulePath] */

undefined8 FUN_10b963838(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f9ddd8);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b965c10();
  return 0;
}



/* Entry: 10b96387c; end: 10b963883; +[SCValdiBridgeFunction asyncStrictMode] */

undefined8 FUN_10b96387c(void)

{
  return 0;
}



/* Entry: 10b963884; end: 10b9639fb; +[SCValdiBridgeFunction functionWithJSRuntime:] */

/* WARNING: Removing unreachable block (ram,0x00010b9639d0) */

void FUN_10b963884(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  _objc_retain(param_3);
  plVar1 = param_1;
  func_0x00010bf0c1e0();
  FUN_10b97f424();
  plVar2 = plVar1;
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f68e0();
  func_0x00010c0d0ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c1a0(param_3);
  func_0x00010b963c90();
  plVar3 = plVar1;
  FUN_10b97f56c();
  if ((int)plVar3 == 0) {
    FUN_10b97f3b0(plVar1);
    func_0x00010c281860(plVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lRam00000001137fd240 != -1) {
      plVar3 = (long *)0x1137fd240;
      func_0x000107c27d9c(0x1137fd240,&PTR___NSConcreteGlobalBlock_110d79b90);
    }
    func_0x000107c30e68();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b963c9c();
    plVar2 = plVar3;
  }
  func_0x00010b963c88();
  (**(code **)(*plVar1 + 8))(plVar1);
  func_0x00010b963ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 10b9639fc; end: 10b963c67; +[SCValdiBridgeFunction resolveFunctionWithJSRuntime:error:] */

void FUN_10b9639fc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0c1e0(param_1);
  plVar2 = param_1;
  func_0x00010c0d0ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  plVar3 = plVar2;
  _objc_retain();
  FUN_10b97f424();
  plVar4 = plVar3;
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f68e0();
  func_0x00010c11c1c0(param_3,param_2,plVar2,plVar3);
  FUN_10b97f3b0(plVar3);
  func_0x00010c281860(plVar4,param_2,param_1,plVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b963c90();
  (**(code **)(*plVar3 + 8))(plVar3);
  func_0x00010b963c88();
  func_0x00010b963ca4();
  func_0x00010b963c88();
  func_0x00010b963ca4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b963b34);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b963c68; end: 10b963cab;  */

void FUN_10b963c68(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137fd238;
  ppuRam00000001137fd238 = &PTR___NSConcreteGlobalBlock_110d79bb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b963cac; end: 10b963d6f;  */

undefined8 FUN_10b963cac(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2);
  return 0;
}



/* Entry: 10b963d70; end: 10b963daf;  */

void FUN_10b963d70(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b963d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2);
  return;
}



/* Entry: 10b963db0; end: 10b963e67;  */

ulong FUN_10b963db0(code *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  (*param_1)(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 10b963e68; end: 10b963eb7;  */

void FUN_10b963e68(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b963eb8);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b963eb8; end: 10b963ebb;  */

void FUN_10b963eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9645e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b963ebc; end: 10b963f0b;  */

void FUN_10b963ebc(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b963f0c);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b963f0c; end: 10b963f27;  */

void FUN_10b963f0c(void)

{
  func_0x00010b96457c();
  return;
}



/* Entry: 10b963f28; end: 10b963f77;  */

void FUN_10b963f28(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b963f78);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b963f78; end: 10b963f93;  */

void FUN_10b963f78(void)

{
  func_0x00010b964568();
  return;
}



/* Entry: 10b963f94; end: 10b963fe3;  */

void FUN_10b963f94(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b963fe4);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b963fe4; end: 10b964007;  */

void FUN_10b963fe4(void)

{
  func_0x00010b9645bc();
  func_0x00010b964590();
  return;
}



/* Entry: 10b964008; end: 10b964057;  */

void FUN_10b964008(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b964058);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b964058; end: 10b96407f;  */

void FUN_10b964058(void)

{
  func_0x00010b9645bc();
  func_0x00010b9645b4();
  return;
}



/* Entry: 10b964080; end: 10b9640cf;  */

void FUN_10b964080(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b9640d0);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9640d0; end: 10b9640f7;  */

void FUN_10b9640d0(void)

{
  func_0x00010b9645bc();
  func_0x00010b964590();
  return;
}



/* Entry: 10b9640f8; end: 10b964147;  */

void FUN_10b9640f8(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b964148);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b964148; end: 10b96414b;  */

void FUN_10b964148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9645e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b96414c; end: 10b96419b;  */

void FUN_10b96414c(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b96419c);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96419c; end: 10b9641b7;  */

void FUN_10b96419c(void)

{
  func_0x00010b96457c();
  return;
}



/* Entry: 10b9641b8; end: 10b964207;  */

void FUN_10b9641b8(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b964208);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b964208; end: 10b964223;  */

void FUN_10b964208(void)

{
  func_0x00010b964568();
  return;
}



/* Entry: 10b964224; end: 10b964273;  */

void FUN_10b964224(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b964274);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b964274; end: 10b964297;  */

void FUN_10b964274(void)

{
  func_0x00010b9645bc();
  func_0x00010b964590();
  return;
}



/* Entry: 10b964298; end: 10b9642e7;  */

void FUN_10b964298(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b9642e8);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9642e8; end: 10b964303;  */

undefined8 FUN_10b9642e8(undefined8 param_1)

{
  func_0x00010b9645bc();
  func_0x00010b9645b4();
  return param_1;
}



/* Entry: 10b964304; end: 10b964353;  */

void FUN_10b964304(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b964354);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b964354; end: 10b964373;  */

undefined8 FUN_10b964354(undefined8 param_1)

{
  func_0x00010b96457c();
  return param_1;
}



/* Entry: 10b964374; end: 10b9643c3;  */

void FUN_10b964374(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b9643c4);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9643c4; end: 10b9643e3;  */

undefined8 FUN_10b9643c4(undefined8 param_1)

{
  func_0x00010b964568();
  return param_1;
}



/* Entry: 10b9643e4; end: 10b964433;  */

void FUN_10b9643e4(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b964434);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b964434; end: 10b96444f;  */

uint FUN_10b964434(uint param_1)

{
  func_0x00010b9645bc();
  func_0x00010b9645b4();
  return param_1 & 1;
}



/* Entry: 10b964450; end: 10b96449f;  */

void FUN_10b964450(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b9644a0);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9644a0; end: 10b9644bf;  */

uint FUN_10b9644a0(uint param_1)

{
  func_0x00010b96457c();
  return param_1 & 1;
}



/* Entry: 10b9644c0; end: 10b96450f;  */

void FUN_10b9644c0(void)

{
  func_0x00010b9645a4();
  func_0x00010b964558();
  func_0x00010b964530(FUN_10b964510);
  func_0x00010b9645ac();
  func_0x00010b96454c();
  func_0x00010b96459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b964510; end: 10b96452f;  */

uint FUN_10b964510(uint param_1)

{
  func_0x00010b964568();
  return param_1 & 1;
}



/* Entry: 10b964530; end: 10b9645fb;  */

void FUN_10b964530(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


