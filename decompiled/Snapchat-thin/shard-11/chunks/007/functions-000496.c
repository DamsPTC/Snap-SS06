/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088be36c; end: 1088be377;  */

undefined ** FUN_1088be36c(void)

{
  return &PTR_DAT_110a81d30;
}



/* Entry: 1088be378; end: 1088be4cb;  */

long * FUN_1088be378(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar4 = param_3;
  plVar2 = param_2;
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(param_1 + 0x30);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 3);
    plVar2 = (long *)0x1;
    func_0x0001088beaa4();
  }
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1088be3dc;
  }
  else if ((int)param_2 != 0) {
LAB_1088be3dc:
    func_0x0001088beab4();
    param_2 = (long *)0x2;
    plVar2 = param_3;
    func_0x0001088bea58();
  }
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1088be41c;
  }
  else if ((int)param_2 != 0) {
LAB_1088be41c:
    func_0x0001088beab4();
    param_2 = (long *)0x3;
    plVar2 = param_3;
    func_0x0001088bea58();
  }
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x28));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1088be478;
  }
  else if ((int)param_2 == 0) goto LAB_1088be478;
  func_0x0001088beab4();
  plVar2 = param_3;
  func_0x0001088bea58(param_3,4);
LAB_1088be478:
  if ((uVar1 >> 1 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x18);
    plVar2 = (long *)0x5;
    func_0x0001088beaa4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  func_0x0001088beb4c();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)plVar4) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar5 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar2 + (long)iVar6;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar5);
  }
  _memcpy(plVar2,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)plVar4);
}



/* Entry: 1088be4cc; end: 1088be597;  */

long FUN_1088be4cc(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  long lVar4;
  
  lVar3 = param_1;
  func_0x0001088beb28(*(undefined8 *)(param_1 + 0x18));
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
  func_0x0001088beb28(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088beabc();
  }
  func_0x0001088beb28(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088beabc();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x30));
      func_0x0001088beabc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x38));
      func_0x0001088beabc();
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088bebdc();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1088be598; end: 1088be5cb;  */

void FUN_1088be598(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088bebb4();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088bebf4();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088bebf4();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001088beb94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088beba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088be5cc; end: 1088be767;  */

void FUN_1088be5cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088beb34();
  }
  else {
    func_0x0001088bea6c();
  }
  *puVar1 = &PTR_FUN_110a819f0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((long)puVar1 + 0x1f) = 0;
  return;
}



/* Entry: 1088be768; end: 1088be9a7;  */

undefined8 * FUN_1088be768(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001088beb88();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    func_0x0001088bec14();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110a81b30;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bea4c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = unaff_x20 + 0x18;
  func_0x0001088beb44();
  param_1[3] = lVar2;
  lVar2 = unaff_x20 + 0x20;
  func_0x0001088beb44();
  param_1[4] = lVar2;
  lVar2 = unaff_x20 + 0x28;
  func_0x0001088beb44();
  param_1[5] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x19;
    func_0x000107c2a26c();
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x000107c2a26c();
  }
  param_1[7] = unaff_x19;
  return param_1;
}



/* Entry: 1088be9a8; end: 1088bea1b;  */

undefined8 * FUN_1088be9a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088beb34();
  }
  else {
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110a819f0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((long)puVar1 + 0x1f) = 0;
  func_0x0001088bdb34();
  return puVar1;
}



/* Entry: 1088bea1c; end: 1088bec43;  */

void FUN_1088bea1c(void)

{
  return;
}



/* Entry: 1088bec44; end: 1088bec57;  */

void FUN_1088bec44(void)

{
  func_0x000107c2a2cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bec58; end: 1088bec63;  */

undefined ** FUN_1088bec58(void)

{
  return &PTR_DAT_110a81ea0;
}



/* Entry: 1088bec64; end: 1088beccb;  */

void FUN_1088bec64(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088beccc(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088beccc(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088beccc; end: 1088bece3;  */

void FUN_1088beccc(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
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



/* Entry: 1088bece4; end: 1088bef37;  */

long * FUN_1088bece4(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar2 = param_1;
  if ((int)param_1[6] != 0) {
    plVar3 = param_1;
    FUN_1088bf304();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x0001088bf310();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[5] != 0) {
    FUN_1088bf304();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x0001088bf31c();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x34) != 0) {
    FUN_1088bf304();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x0001088bf310();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[7] != 0) {
    FUN_1088bf304();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x0001088bf31c();
    param_2 = plVar3;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)0x5;
    func_0x000107c303cc(5,param_1[3],*(undefined4 *)(param_1[3] + 0x1c),param_2,param_3);
    param_2 = plVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)0x6;
    func_0x000107c303cc(6,param_1[4],*(undefined4 *)(param_1[4] + 0x1c),param_2,param_3);
    param_2 = plVar3;
  }
  if ((char)param_1[8] == '\x01') {
    FUN_1088bf304();
    param_2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x0001088bf310();
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



/* Entry: 1088bef38; end: 1088bef63;  */

long FUN_1088bef38(long param_1)

{
  FUN_1088bf1d8();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088bef64; end: 1088bef67;  */

void FUN_1088bef64(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_1088bf294(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf078();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_1088bf294(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf078();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bef68; end: 1088bf077;  */

void FUN_1088bef68(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_1088bf294(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf078();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_1088bf294(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf078();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bf078; end: 1088bf0ab;  */

void FUN_1088bf078(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 1088bf0ac; end: 1088bf0e3;  */

void FUN_1088bf0ac(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_1088bec64();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_1088bf294(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf078();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_1088bf294(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf078();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bf0e4; end: 1088bf0ef;  */

undefined1  [16] FUN_1088bf0e4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x29;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1088bf0f0; end: 1088bf117;  */

long FUN_1088bf0f0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1088bf118; end: 1088bf11b;  */

long FUN_1088bf118(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1088bf11c; end: 1088bf12f;  */

void FUN_1088bf11c(void)

{
  FUN_1088bf0f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bf130; end: 1088bf13b;  */

undefined ** FUN_1088bf130(void)

{
  return &PTR_DAT_110a81ee8;
}



/* Entry: 1088bf13c; end: 1088bf1d7;  */

long * FUN_1088bf13c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[3] != 0) {
    plVar1 = param_1;
    FUN_1088bf304();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x0001088bf310();
    param_2 = plVar2;
  }
  if (param_1[2] != 0) {
    FUN_1088bf304();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x0001088bf31c();
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



/* Entry: 1088bf1d8; end: 1088bf24f;  */

ulong FUN_1088bf1d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 1088bf250; end: 1088bf293;  */

void FUN_1088bf250(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110a81e10;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1088bf294; end: 1088bf303;  */

undefined8 * FUN_1088bf294(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110a81e10;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_1088bf078();
  return puVar1;
}



/* Entry: 1088bf304; end: 1088bf337;  */

ulong * FUN_1088bf304(void)

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



/* Entry: 1088bf338; end: 1088bf34b;  */

void FUN_1088bf338(void)

{
  func_0x000107c2a2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bf34c; end: 1088bf357;  */

undefined ** FUN_1088bf34c(void)

{
  return &PTR_DAT_110a81fa8;
}



/* Entry: 1088bf358; end: 1088bf393;  */

void FUN_1088bf358(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 1088bf394; end: 1088bf397;  */

void FUN_1088bf394(long param_1,long param_2)

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



/* Entry: 1088bf398; end: 1088bf4eb;  */

void FUN_1088bf398(long param_1,long param_2)

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



/* Entry: 1088bf4ec; end: 1088bf517;  */

undefined8 FUN_1088bf4ec(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088bf518(param_1);
  return param_1;
}



/* Entry: 1088bf518; end: 1088bf52b;  */

void FUN_1088bf518(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088c37f4();
  if (extraout_w8 == 0x10) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088bf4bc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c0728();
    }
  }
  else if (extraout_w8 == 0xb) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088bf4bc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010b5ac7e0();
    }
  }
  else {
    if (extraout_w8 != 8) goto LAB_1088bf4bc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088bf4bc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c027c();
    }
  }
  __ZdlPv();
LAB_1088bf4bc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088bf52c; end: 1088bf53f;  */

void FUN_1088bf52c(void)

{
  FUN_1088bf4ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bf540; end: 1088bf553;  */

undefined8 FUN_1088bf540(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c02a8(param_1);
  return param_1;
}



/* Entry: 1088bf554; end: 1088bf687;  */

void FUN_1088bf554(long param_1)

{
  ulong *puVar1;
  
  func_0x0001088bf440();
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



/* Entry: 1088bf688; end: 1088bf6a3;  */

long FUN_1088bf688(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5ac9ac();
  FUN_1088c35dc();
  return param_1 + extraout_x8;
}



/* Entry: 1088bf6a4; end: 1088bf8df;  */

void FUN_1088bf6a4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088bf780;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x0001088bf440();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 0x10) {
    if (iVar2 == 0x10) {
      func_0x0001088c36d8();
      FUN_1088bf8e0();
      goto LAB_1088bf780;
    }
    func_0x0001088c37d0();
    FUN_1088c2dc4();
  }
  else if (iVar1 == 0xb) {
    if (iVar2 == 0xb) {
      func_0x0001088c36d8();
      func_0x0001088c3884();
      goto LAB_1088bf780;
    }
    func_0x0001088c37d0();
    FUN_1088c2d84();
  }
  else {
    if (iVar1 != 8) goto LAB_1088bf780;
    if (iVar2 == 8) {
      func_0x0001088c36d8();
      func_0x0001088bf79c();
      goto LAB_1088bf780;
    }
    func_0x0001088c37d0();
    FUN_1088c2ccc();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088bf780:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088bf8e0; end: 1088bfa33;  */

void FUN_1088bf8e0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088bfa34; end: 1088bfa5f;  */

undefined8 FUN_1088bfa34(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088bfa60(param_1);
  return param_1;
}



/* Entry: 1088bfa60; end: 1088bfa9f;  */

void FUN_1088bfa60(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c1870();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088bf9ec;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c090c();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088bf9ec;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c1134();
    }
    break;
  default:
    goto LAB_1088bf9ec;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088bf9ec;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c1460();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088bf9ec;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c169c();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088bf9ec;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010b5ac7e0();
    }
  }
  __ZdlPv();
LAB_1088bf9ec:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1088bfaa0; end: 1088bfaa3;  */

undefined8 FUN_1088bfaa0(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088bfa60(param_1);
  return param_1;
}



/* Entry: 1088bfaa4; end: 1088bfab7;  */

void FUN_1088bfaa4(void)

{
  FUN_1088bfa34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bfab8; end: 1088bfad3;  */

long FUN_1088bfab8(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088bfad4; end: 1088bfcb3;  */

void FUN_1088bfad4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088c37e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088bfb14(unaff_x19[3]);
  }
  func_0x0001088bf928();
  func_0x0001088c3918();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088bfcb4; end: 1088bfd07;  */

long FUN_1088bfcb4(long param_1)

{
  long extraout_x8;
  
  FUN_1088c0a4c();
  FUN_1088c35dc();
  return param_1 + extraout_x8;
}



/* Entry: 1088bfd08; end: 1088bfe9f;  */

void FUN_1088bfd08(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088c362c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      func_0x0001088c2e10();
      unaff_x21[3] = (ulong)unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_1088bfea0();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[5];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        func_0x0001088bf928();
      }
      *(int *)(unaff_x21 + 5) = iVar2;
    }
    switch(iVar2) {
    case 3:
      if (iVar3 == iVar2) {
        func_0x0001088c37b4();
        FUN_1088bff00();
        goto LAB_1088bfe84;
      }
      func_0x0001088c38e8();
      func_0x0001088c2e7c();
      break;
    case 4:
      if (iVar3 == iVar2) {
        func_0x0001088c37b4();
        func_0x0001088bff38();
        goto LAB_1088bfe84;
      }
      func_0x0001088c38e8();
      func_0x0001088c2ee4();
      break;
    default:
      goto LAB_1088bfe84;
    case 6:
      if (iVar3 == iVar2) {
        func_0x0001088c37b4();
        func_0x0001088bffbc();
        goto LAB_1088bfe84;
      }
      func_0x0001088c38e8();
      func_0x0001088c2f48();
      break;
    case 7:
      if (iVar3 == iVar2) {
        func_0x0001088c37b4();
        func_0x0001088c0040();
        goto LAB_1088bfe84;
      }
      func_0x0001088c38e8();
      func_0x0001088c2fac();
      break;
    case 0xb:
      if (iVar3 == iVar2) {
        func_0x0001088c37b4();
        func_0x0001088c3884();
        goto LAB_1088bfe84;
      }
      func_0x0001088c38e8();
      FUN_1088c2d84();
    }
    unaff_x21[4] = (ulong)param_1;
  }
LAB_1088bfe84:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088bfea0; end: 1088bfeff;  */

void FUN_1088bfea0(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c33b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088c19c4();
    }
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088bff00; end: 1088bff37;  */

void FUN_1088bff00(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001088c3790();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088c0ac0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
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



/* Entry: 1088bff38; end: 1088c019f;  */

void FUN_1088bff38(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x0001088c39bc();
    if ((bool)in_ZR) {
      if (iVar1 == 2) {
        func_0x0001088c38dc();
        FUN_1088c1088();
      }
    }
    else {
      if (extraout_w8 != 0) {
        param_1 = unaff_x21;
        FUN_1088c10e8();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 2) {
        func_0x0001088c37d0();
        func_0x0001088c32ec();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088c01a0; end: 1088c027b;  */

void FUN_1088c01a0(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  
  func_0x0001088c37f4();
  if (extraout_w8 == 0x1f) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c2688();
    }
  }
  else if (extraout_w8 == 0x16) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c0854();
    }
  }
  else if (extraout_w8 == 0x1e) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c255c();
    }
  }
  else {
    if (extraout_w8 != 5) goto LAB_1088c0240;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c0584();
    }
  }
  __ZdlPv();
LAB_1088c0240:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c027c; end: 1088c02a7;  */

undefined8 FUN_1088c027c(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c02a8(param_1);
  return param_1;
}



/* Entry: 1088c02a8; end: 1088c02b7;  */

void FUN_1088c02a8(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088c37f4();
  if (extraout_w8 == 0x1f) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c2688();
    }
  }
  else if (extraout_w8 == 0x16) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c0854();
    }
  }
  else if (extraout_w8 == 0x1e) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c255c();
    }
  }
  else {
    if (extraout_w8 != 5) goto LAB_1088c0240;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088c0240;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088c0584();
    }
  }
  __ZdlPv();
LAB_1088c0240:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c02b8; end: 1088c02cb;  */

void FUN_1088c02b8(void)

{
  FUN_1088c027c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c02cc; end: 1088c02e7;  */

undefined8 FUN_1088c02cc(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c05b0(param_1);
  return param_1;
}



/* Entry: 1088c02e8; end: 1088c043f;  */

void FUN_1088c02e8(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c01a0();
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



/* Entry: 1088c0440; end: 1088c0443;  */

void FUN_1088c0440(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088bf8c4;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1088c01a0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 0x1f) {
    if (iVar2 == 0x1f) {
      func_0x0001088c36d8();
      func_0x0001088c0508();
      goto LAB_1088bf8c4;
    }
    func_0x0001088c37d0();
    func_0x0001088c31a4();
  }
  else if (iVar1 == 0x16) {
    if (iVar2 == 0x16) {
      func_0x0001088c36d8();
      FUN_1088c04b0();
      goto LAB_1088bf8c4;
    }
    func_0x0001088c37d0();
    FUN_1088c30f8();
  }
  else if (iVar1 == 0x1e) {
    if (iVar2 == 0x1e) {
      func_0x0001088c36d8();
      FUN_1088c04c0();
      goto LAB_1088bf8c4;
    }
    func_0x0001088c37d0();
    FUN_1088c3158();
  }
  else {
    if (iVar1 != 5) goto LAB_1088bf8c4;
    if (iVar2 == 5) {
      func_0x0001088c36d8();
      FUN_1088c0444();
      goto LAB_1088bf8c4;
    }
    func_0x0001088c37d0();
    func_0x0001088c3074();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088bf8c4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088c0444; end: 1088c04af;  */

void FUN_1088c0444(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c04b0; end: 1088c04bf;  */

void FUN_1088c04b0(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 1088c04c0; end: 1088c0583;  */

void FUN_1088c04c0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088c0584; end: 1088c05af;  */

undefined8 FUN_1088c0584(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c05b0(param_1);
  return param_1;
}



/* Entry: 1088c05b0; end: 1088c05df;  */

void FUN_1088c05b0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c05e0; end: 1088c05eb;  */

undefined ** FUN_1088c05e0(void)

{
  return &PTR_DAT_110a82808;
}



/* Entry: 1088c05ec; end: 1088c062b;  */

void FUN_1088c05ec(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c37e8();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1088c062c; end: 1088c06b3;  */

long * FUN_1088c062c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c364c();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (long *)0x1;
    func_0x0001088c3744();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088c379c();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x0001088c3984();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c3784();
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



/* Entry: 1088c06b4; end: 1088c0723;  */

void FUN_1088c06b4(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088c37e8();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c2a268();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088c3858((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088c3898();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088c0724; end: 1088c0727;  */

void FUN_1088c0724(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c0728; end: 1088c074f;  */

undefined8 FUN_1088c0728(undefined8 param_1)

{
  func_0x0001088c3734();
  func_0x0001088c3874();
  return param_1;
}



/* Entry: 1088c0750; end: 1088c0763;  */

void FUN_1088c0750(void)

{
  FUN_1088c0728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c0764; end: 1088c076f;  */

undefined ** FUN_1088c0764(void)

{
  return &PTR_DAT_110a82860;
}



/* Entry: 1088c0770; end: 1088c084f;  */

void FUN_1088c0770(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c3720();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 1088c0850; end: 1088c0853;  */

void FUN_1088c0850(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088c0854; end: 1088c0877;  */

undefined8 FUN_1088c0854(undefined8 param_1)

{
  func_0x0001088c3734();
  return param_1;
}



/* Entry: 1088c0878; end: 1088c088b;  */

void FUN_1088c0878(void)

{
  FUN_1088c0854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c088c; end: 1088c090b;  */

undefined ** FUN_1088c088c(void)

{
  return &PTR_DAT_110a828b8;
}



/* Entry: 1088c090c; end: 1088c0943;  */

long FUN_1088c090c(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088c0944; end: 1088c0957;  */

void FUN_1088c0944(void)

{
  FUN_1088c090c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c0958; end: 1088c0963;  */

undefined ** FUN_1088c0958(void)

{
  return &PTR_DAT_110a82910;
}



/* Entry: 1088c0964; end: 1088c09a3;  */

void FUN_1088c0964(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
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



/* Entry: 1088c09a4; end: 1088c0a4b;  */

long * FUN_1088c09a4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001088c364c();
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    param_4 = (long *)0x3;
    func_0x0001088c3744();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c3784();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
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



/* Entry: 1088c0a4c; end: 1088c0abf;  */

long FUN_1088c0a4c(long param_1)

{
  ulong *puVar1;
  long extraout_x8;
  ulong uVar2;
  long extraout_x9;
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
    FUN_1088bf688();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088c3898();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088c0ac0; end: 1088c0ad3;  */

void FUN_1088c0ac0(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001088c3790();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088c0ac0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
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



/* Entry: 1088c0ad4; end: 1088c0b03;  */

long FUN_1088c0ad4(long param_1)

{
  func_0x0001088c3734();
  func_0x0001088c3874();
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088c0b04; end: 1088c0b07;  */

long FUN_1088c0b04(long param_1)

{
  func_0x0001088c3734();
  func_0x0001088c3874();
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088c0b08; end: 1088c0b1b;  */

void FUN_1088c0b08(void)

{
  FUN_1088c0ad4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c0b1c; end: 1088c0b27;  */

undefined ** FUN_1088c0b1c(void)

{
  return &PTR_DAT_110a82958;
}



/* Entry: 1088c0b28; end: 1088c0c5f;  */

void FUN_1088c0b28(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c3720();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 1088c0c60; end: 1088c0c63;  */

void FUN_1088c0c60(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088c0c64; end: 1088c0cd7;  */

void FUN_1088c0c64(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 1088c0cd8; end: 1088c0d17;  */

long FUN_1088c0cd8(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c0ad4();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 1088c0d18; end: 1088c0d1b;  */

long FUN_1088c0d18(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c0ad4();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 1088c0d1c; end: 1088c0d2f;  */

void FUN_1088c0d1c(void)

{
  FUN_1088c0cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c0d30; end: 1088c0d3b;  */

undefined ** FUN_1088c0d30(void)

{
  return &PTR_DAT_110a829b8;
}



/* Entry: 1088c0d3c; end: 1088c0d7b;  */

void FUN_1088c0d3c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c37e8();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088c0b28(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1088c0d7c; end: 1088c0e1b;  */

long * FUN_1088c0d7c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c364c();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_1 = (long *)0x4;
    func_0x0001088c3744();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) == 7) {
    func_0x0001088c379c();
    param_4 = (long *)0x38;
    func_0x000107c280a8(0x38,param_1);
    func_0x0001088c3990();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c3784();
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



/* Entry: 1088c0e1c; end: 1088c0e97;  */

void FUN_1088c0e1c(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088c37e8();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x0001088c0be0();
    func_0x0001088c35dc();
    func_0x0001088c3858();
  }
  if (*(int *)(unaff_x19 + 0x24) == 7) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(undefined4 *)(unaff_x19 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088c3898();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088c0e98; end: 1088c0e9b;  */

void FUN_1088c0e98(void)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001088c390c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c31f0();
      *(ulong **)(unaff_x21 + 0x18) = puVar3;
    }
    else {
      puVar3 = extraout_x8;
      FUN_1088c0c64();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x21 + 0x24) != iVar2) {
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 7) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 1088c0e9c; end: 1088c0f2f;  */

void FUN_1088c0e9c(void)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001088c390c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c31f0();
      *(ulong **)(unaff_x21 + 0x18) = puVar3;
    }
    else {
      puVar3 = extraout_x8;
      FUN_1088c0c64();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x21 + 0x24) != iVar2) {
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 7) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
    if ((*puVar3 & 1) == 0) {
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


