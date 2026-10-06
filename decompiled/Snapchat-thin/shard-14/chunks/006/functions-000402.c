/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b51a750; end: 10b51a763;  */

void FUN_10b51a750(void)

{
  FUN_10b51a720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51a764; end: 10b51a76f;  */

undefined ** FUN_10b51a764(void)

{
  return &PTR_DAT_110cfb0b0;
}



/* Entry: 10b51a770; end: 10b51a7a7;  */

void FUN_10b51a770(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b51a7a8; end: 10b51a937;  */

long * FUN_10b51a7a8(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = 8;
  plVar6 = param_3;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar2 = (ulong *)(uVar4 + lVar11 + -1);
    }
    plVar6 = (long *)*puVar2;
    lVar3 = (long)*(char *)((long)plVar6 + 0x17);
    plVar9 = plVar6;
    if (lVar3 < 0) {
      lVar3 = plVar6[1];
      plVar9 = (long *)*plVar6;
    }
    func_0x000107c303d4(plVar9,lVar3,1,&UNK_10f776a46);
    plVar9 = (long *)(long)*(char *)((long)plVar6 + 0x17);
    if ((((long)plVar9 < 0) && (plVar9 = (long *)plVar6[1], 0x7f < (long)plVar9)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar9)) {
      plVar9 = param_3;
      func_0x00010b4d5120(param_3,1,plVar6,param_2);
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)plVar9;
      plVar7 = plVar6;
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        plVar7 = (long *)*plVar6;
      }
      plVar6 = plVar9;
      _memcpy((undefined1 *)((long)param_2 + 2),plVar7);
      plVar9 = (long *)((undefined1 *)((long)param_2 + 2) + (long)plVar9);
    }
    lVar11 = lVar11 + 8;
    param_2 = plVar9;
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar9 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x28);
    func_0x00010b51b708();
    func_0x000107c280a8(param_2,plVar9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b51b6fc();
  if ((long)plVar6 < 0) {
    lVar11 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar11 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar11,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar5 - iVar8);
    if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar8);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 10b51a938; end: 10b51a9cf;  */

void FUN_10b51a938(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = (ulong)uVar2;
  lVar7 = 8;
  for (uVar6 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar7 + -1);
    }
    uVar4 = *puVar1;
    func_0x000107c282a0();
    uVar5 = uVar4 + uVar5;
    uVar2 = (uint)uVar5;
    lVar7 = lVar7 + 8;
  }
  iVar3 = uVar2 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar7 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar7 + iVar3;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  return;
}



/* Entry: 10b51a9d0; end: 10b51a9d3;  */

void FUN_10b51a9d0(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b51a9d4; end: 10b51aa2b;  */

void FUN_10b51a9d4(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b51aa2c; end: 10b51aa67;  */

void FUN_10b51aa2c(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
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



/* Entry: 10b51aa68; end: 10b51aa8b;  */

undefined8 FUN_10b51aa68(undefined8 param_1)

{
  func_0x00010b51b6d4();
  return param_1;
}



/* Entry: 10b51aa8c; end: 10b51aa8f;  */

undefined8 FUN_10b51aa8c(undefined8 param_1)

{
  func_0x00010b51b6d4();
  return param_1;
}



/* Entry: 10b51aa90; end: 10b51aaa3;  */

void FUN_10b51aa90(void)

{
  FUN_10b51aa68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51aaa4; end: 10b51aacb;  */

undefined ** FUN_10b51aaa4(void)

{
  return &PTR_DAT_110cfb120;
}



/* Entry: 10b51aacc; end: 10b51ab5b;  */

long * FUN_10b51aacc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b51b6c4();
  plVar2 = param_1;
  if ((char)param_1[3] == '\x01') {
    func_0x00010b51b680();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b51b6b0();
    param_4 = plVar2;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b51b680();
    func_0x00010b51b708();
    func_0x00010b51b6b0();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51b6fc();
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
  return param_4;
}



/* Entry: 10b51ab5c; end: 10b51abaf;  */

long FUN_10b51ab5c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6) + lVar1;
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



/* Entry: 10b51abb0; end: 10b51abdb;  */

undefined8 FUN_10b51abb0(undefined8 param_1)

{
  func_0x00010b51b6d4();
  FUN_10b51abdc(param_1);
  return param_1;
}



/* Entry: 10b51abdc; end: 10b51abf7;  */

void FUN_10b51abdc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b51aa68();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51abf8; end: 10b51abfb;  */

undefined8 FUN_10b51abf8(undefined8 param_1)

{
  func_0x00010b51b6d4();
  FUN_10b51abdc(param_1);
  return param_1;
}



/* Entry: 10b51abfc; end: 10b51ac0f;  */

void FUN_10b51abfc(void)

{
  FUN_10b51abb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51ac10; end: 10b51ac1b;  */

undefined ** FUN_10b51ac10(void)

{
  return &PTR_DAT_110cfb1a8;
}



/* Entry: 10b51ac1c; end: 10b51ac6f;  */

void FUN_10b51ac1c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010b51aab0(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 0x3e) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 10b51ac70; end: 10b51ad83;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b51ac70(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b51b6c4();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b51b680();
    lVar2 = 9;
    func_0x000107c280a8(9,param_1);
    func_0x00010b51b744();
    param_1 = lVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x00010b51b680();
    lVar2 = 0x11;
    func_0x000107c280a8(0x11,param_1);
    func_0x00010b51b744();
    param_1 = lVar2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x00010b51b680();
    lVar2 = 0x19;
    func_0x000107c280a8(0x19,param_1);
    func_0x00010b51b744();
    param_1 = lVar2;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    func_0x00010b51b680();
    lVar2 = 0x21;
    func_0x000107c280a8(0x21,param_1);
    func_0x00010b51b744();
    param_1 = lVar2;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    func_0x00010b51b680();
    param_4 = *(long **)(unaff_x20 + 0x40);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x000107c280ac(param_4,uVar3);
  }
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = (long *)0x6;
    func_0x00010b51b6f4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51b6fc();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
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
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b51ad84; end: 10b51ae43;  */

void FUN_10b51ad84(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_10b51ab5c();
      func_0x00010b51b68c();
      iVar2 = iVar2 + extraout_w8 + 1;
    }
    if ((uVar1 & 2) != 0) {
      iVar2 = iVar2 + 9;
    }
    if ((uVar1 & 4) != 0) {
      iVar2 = iVar2 + 9;
    }
    if ((uVar1 & 8) != 0) {
      iVar2 = iVar2 + 9;
    }
    if ((uVar1 & 0x10) != 0) {
      iVar2 = iVar2 + 9;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + iVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b51ae44; end: 10b51ae47;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b51ae44(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_10b51b484(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b51aa2c(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    }
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



/* Entry: 10b51ae48; end: 10b51af3b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b51ae48(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_10b51b484(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b51aa2c(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    }
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



/* Entry: 10b51af3c; end: 10b51af67;  */

undefined8 FUN_10b51af3c(undefined8 param_1)

{
  func_0x00010b51b6d4();
  FUN_10b51af68(param_1);
  return param_1;
}



/* Entry: 10b51af68; end: 10b51afaf;  */

void FUN_10b51af68(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b51a5f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b51a720();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b51abb0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51afb0; end: 10b51afb3;  */

undefined8 FUN_10b51afb0(undefined8 param_1)

{
  func_0x00010b51b6d4();
  FUN_10b51af68(param_1);
  return param_1;
}



/* Entry: 10b51afb4; end: 10b51afc7;  */

void FUN_10b51afb4(void)

{
  FUN_10b51af3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51afc8; end: 10b51afd3;  */

undefined ** FUN_10b51afc8(void)

{
  return &PTR_DAT_110cfb220;
}



/* Entry: 10b51afd4; end: 10b51b03f;  */

void FUN_10b51afd4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b51a640(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b51a770(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b51ac1c(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 10b51b040; end: 10b51b193;  */

long * FUN_10b51b040(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b51b6c4();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = (long *)0x1;
    func_0x00010b51b6f4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    param_4 = (long *)0x2;
    func_0x00010b51b6f4();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x3;
    func_0x00010b51b6f4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b51b6fc();
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



/* Entry: 10b51b194; end: 10b51b197;  */

void FUN_10b51b194(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b51b4f4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010b51a5c8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00010b51b568(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_10b51a9d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010b51b5e0(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_10b51ae48();
      }
    }
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



/* Entry: 10b51b198; end: 10b51b29b;  */

void FUN_10b51b198(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b51b4f4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010b51a5c8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00010b51b568(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_10b51a9d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010b51b5e0(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_10b51ae48();
      }
    }
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



/* Entry: 10b51b29c; end: 10b51b2d3;  */

void FUN_10b51b29c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b51afd4();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b51b4f4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010b51a5c8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00010b51b568(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_10b51a9d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010b51b5e0(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_10b51ae48();
      }
    }
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



/* Entry: 10b51b2d4; end: 10b51b327;  */

undefined1  [16] FUN_10b51b2d4(long param_1,long param_2)

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
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x30);
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



/* Entry: 10b51b328; end: 10b51b483;  */

void FUN_10b51b328(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfaec0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b51b484; end: 10b51b4f3;  */

undefined8 * FUN_10b51b484(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfaec0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10b51aa2c();
  return puVar1;
}



/* Entry: 10b51b4f4; end: 10b51b567;  */

undefined8 * FUN_10b51b4f4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfaf60;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  func_0x00010b51a5c8();
  return puVar1;
}



/* Entry: 10b51b568; end: 10b51b673;  */

undefined8 * FUN_10b51b568(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b51b730();
  }
  else {
    FUN_10b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cfaf10;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b51b738();
  }
  func_0x00010598fd00(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 10b51b674; end: 10b51b75f;  */

void FUN_10b51b674(void)

{
  return;
}



/* Entry: 10b51b760; end: 10b51b83b;  */

void FUN_10b51b760(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b51b83c; end: 10b51b83f;  */

long FUN_10b51b83c(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100625524(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51b840; end: 10b51b853;  */

void FUN_10b51b840(void)

{
  func_0x000107c3053c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51b854; end: 10b51b8a3;  */

void FUN_10b51b854(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b51b8a4; end: 10b51b8ab;  */

void FUN_10b51b8a4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfb350;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b51b8ac; end: 10b51b8f7;  */

void FUN_10b51b8ac(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfb350;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b51b8f8; end: 10b51b8fb;  */

long FUN_10b51b8f8(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x00010063175c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51b8fc; end: 10b51b90f;  */

void FUN_10b51b8fc(void)

{
  func_0x000107c30544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51b910; end: 10b51b91b;  */

undefined ** FUN_10b51b910(void)

{
  return &PTR_DAT_110cfb4b0;
}



/* Entry: 10b51b91c; end: 10b51b967;  */

void FUN_10b51b91c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  func_0x000107c282c0(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
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



/* Entry: 10b51b968; end: 10b51bbfb;  */

long * FUN_10b51b968(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ulong *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  
  uVar4 = *(uint *)(param_1 + 4);
  plVar5 = param_1;
  if (0 < (int)uVar4) {
    FUN_10b51be00();
    *(undefined1 *)plVar5 = 10;
    plVar6 = plVar5;
    while (0x7f < uVar4) {
      func_0x00010b51be20();
    }
    *(char *)((long)plVar5 + 1) = (char)uVar4;
    piVar13 = (int *)param_1[3];
    piVar2 = piVar13 + (int)param_1[2];
    do {
      FUN_10b51be00();
      uVar10 = (ulong)*piVar13;
      param_2 = (long *)((long)plVar6 + 1);
      plVar5 = plVar6;
      while (0x7f < uVar10) {
        func_0x00010b51be0c();
        uVar10 = extraout_x8;
      }
      piVar13 = piVar13 + 1;
      *(char *)plVar6 = (char)uVar10;
      plVar6 = plVar5;
    } while (piVar13 < piVar2);
  }
  if ((int)param_1[0xb] != 0) {
    plVar5 = param_3;
    func_0x00010598f43c(param_3,(int)param_1[0xb],param_2);
    param_2 = plVar5;
  }
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    plVar5 = param_3;
    func_0x000107c282ac(param_3,*(int *)((long)param_1 + 0x5c),param_2);
    param_2 = plVar5;
  }
  uVar4 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar4) {
    FUN_10b51be00();
    *(undefined1 *)plVar5 = 0x22;
    plVar6 = plVar5;
    while (0x7f < uVar4) {
      func_0x00010b51be20();
    }
    *(char *)((long)plVar5 + 1) = (char)uVar4;
    piVar13 = (int *)param_1[6];
    piVar2 = piVar13 + (int)param_1[5];
    do {
      FUN_10b51be00();
      uVar10 = (ulong)*piVar13;
      param_2 = (long *)((long)plVar6 + 1);
      plVar5 = plVar6;
      while (0x7f < uVar10) {
        func_0x00010b51be0c();
        uVar10 = extraout_x8_00;
      }
      piVar13 = piVar13 + 1;
      *(char *)plVar6 = (char)uVar10;
      plVar6 = plVar5;
    } while (piVar13 < piVar2);
  }
  if ((char)param_1[0xc] == '\x01') {
    FUN_10b51be00();
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0xc);
    uVar7 = 0x28;
    func_0x000107c280a8(0x28,plVar5);
    func_0x000107c280a8(param_2,uVar7);
  }
  lVar16 = 8;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 9) & ((int)*(uint *)(param_1 + 9) >> 0x1f ^ 0xffffffffU)
                       ); uVar10 != 0; uVar10 = uVar10 - 1) {
    uVar11 = param_1[8];
    puVar3 = (ulong *)(param_1 + 8);
    if ((uVar11 & 1) != 0) {
      puVar3 = (ulong *)(uVar11 + lVar16 + -1);
    }
    puVar14 = (undefined8 *)*puVar3;
    lVar9 = (long)*(char *)((long)puVar14 + 0x17);
    puVar8 = puVar14;
    if (lVar9 < 0) {
      lVar9 = puVar14[1];
      puVar8 = (undefined8 *)*puVar14;
    }
    func_0x000107c303d4(puVar8,lVar9,1,&UNK_10f776ae4);
    lVar9 = (long)*(char *)((long)puVar14 + 0x17);
    if (((lVar9 < 0) && (lVar9 = puVar14[1], 0x7f < lVar9)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar9)) {
      plVar5 = param_3;
      func_0x00010b4d5120(param_3,6,puVar14,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x32;
      *(char *)((long)param_2 + 1) = (char)lVar9;
      if (*(char *)((long)puVar14 + 0x17) < '\0') {
        puVar14 = (undefined8 *)*puVar14;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar14,lVar9);
      plVar5 = (long *)((undefined1 *)((long)param_2 + 2) + lVar9);
    }
    lVar16 = lVar16 + 8;
    param_2 = plVar5;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar11 = param_1[1] & 0xfffffffffffffffe;
  uVar10 = (ulong)*(char *)(uVar11 + 0x1f);
  if ((long)uVar10 < 0) {
    lVar16 = *(long *)(uVar11 + 8);
    uVar10 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    lVar16 = uVar11 + 8;
  }
  if ((long)(int)uVar10 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar16,uVar10 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar10);
  }
  while( true ) {
    iVar15 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar12 = (int)uVar10;
    uVar10 = (ulong)(uint)(iVar12 - iVar15);
    if (iVar12 - iVar15 == 0 || iVar12 < iVar15) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar15);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar12);
}



/* Entry: 10b51bbfc; end: 10b51bd2f;  */

void FUN_10b51bbfc(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = param_1 + 0x10;
  FUN_10b4d3e0c();
  *(int *)(param_1 + 0x20) = (int)lVar9;
  lVar2 = 0;
  if (lVar9 != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)(int)lVar9) * -9 + 0x280U >> 6) + 1;
  }
  lVar6 = param_1 + 0x28;
  FUN_10b4d3e0c();
  *(int *)(param_1 + 0x38) = (int)lVar6;
  lVar3 = 0;
  if (lVar6 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar6) * -9 + 0x280U >> 6) + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  lVar2 = lVar2 + lVar9 + lVar6 + lVar3 + (ulong)uVar4;
  iVar5 = (int)lVar2;
  lVar9 = 8;
  for (uVar8 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar8 != 0; uVar8 = uVar8 - 1) {
    uVar7 = *(ulong *)(param_1 + 0x40);
    puVar1 = (ulong *)(param_1 + 0x40);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + lVar9 + -1);
    }
    uVar7 = *puVar1;
    func_0x000107c282a0();
    lVar2 = uVar7 + lVar2;
    iVar5 = (int)lVar2;
    lVar9 = lVar9 + 8;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + iVar5;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x5c)) * -9 + 0x2c0U >> 6) + iVar5;
  }
  iVar5 = iVar5 + (uint)*(byte *)(param_1 + 0x60) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar8 + 0x10);
    }
    iVar5 = (int)lVar9 + iVar5;
  }
  *(int *)(param_1 + 100) = iVar5;
  return;
}



/* Entry: 10b51bd30; end: 10b51bdbb;  */

void FUN_10b51bd30(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x00010598fce8(param_1 + 0x40,param_2 + 0x40);
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 1;
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



/* Entry: 10b51bdbc; end: 10b51bdc3;  */

undefined8 * FUN_10b51bdbc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x68);
  }
  *puVar1 = &PTR_FUN_110cfb470;
  puVar1[1] = param_2;
  func_0x0001006312c0();
  return puVar1;
}



/* Entry: 10b51bdc4; end: 10b51bdff;  */

undefined8 * FUN_10b51bdc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x68);
  }
  *puVar1 = &PTR_FUN_110cfb470;
  puVar1[1] = param_1;
  func_0x0001006312c0();
  return puVar1;
}



/* Entry: 10b51be00; end: 10b51be33;  */

ulong * FUN_10b51be00(void)

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



/* Entry: 10b51be34; end: 10b51be67;  */

long FUN_10b51be34(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51be68; end: 10b51be6b;  */

long FUN_10b51be68(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51be6c; end: 10b51be7f;  */

void FUN_10b51be6c(void)

{
  FUN_10b51be34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51be80; end: 10b51be8b;  */

undefined ** FUN_10b51be80(void)

{
  return &PTR_DAT_110cfb570;
}



/* Entry: 10b51be8c; end: 10b51becf;  */

void FUN_10b51be8c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b51bed0; end: 10b51c08b;  */

long * FUN_10b51bed0(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  
  plVar8 = param_1;
  if ((int)param_1[5] != 0) {
    plVar3 = param_1;
    FUN_10b51c210();
    plVar8 = (long *)(ulong)*(uint *)(param_1 + 5);
    uVar4 = 8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280b8(plVar8,uVar4);
    param_2 = plVar8;
  }
  lVar13 = 8;
  for (uVar12 = (ulong)(*(uint *)(param_1 + 3) & ((int)*(uint *)(param_1 + 3) >> 0x1f ^ 0xffffffffU)
                       ); uVar12 != 0; uVar12 = uVar12 - 1) {
    uVar7 = param_1[2];
    puVar2 = (ulong *)(param_1 + 2);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + lVar13 + -1);
    }
    puVar10 = (undefined8 *)*puVar2;
    lVar6 = (long)*(char *)((long)puVar10 + 0x17);
    puVar5 = puVar10;
    if (lVar6 < 0) {
      lVar6 = puVar10[1];
      puVar5 = (undefined8 *)*puVar10;
    }
    func_0x000107c303d4(puVar5,lVar6,1,&UNK_10f776b22);
    lVar6 = (long)*(char *)((long)puVar10 + 0x17);
    if (((lVar6 < 0) && (lVar6 = puVar10[1], 0x7f < lVar6)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar6)) {
      plVar8 = param_3;
      func_0x00010b4d5120(param_3,2,puVar10,param_2);
      param_2 = plVar8;
    }
    else {
      *(undefined1 *)param_2 = 0x12;
      *(char *)((long)param_2 + 1) = (char)lVar6;
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        puVar10 = (undefined8 *)*puVar10;
      }
      param_2 = (long *)((long)param_2 + 2);
      plVar8 = param_2;
      _memcpy(param_2,puVar10,lVar6);
      param_2 = (long *)((long)param_2 + lVar6);
    }
    lVar13 = lVar13 + 8;
  }
  if ((*(byte *)((long)param_1 + 0x2c) & 1) != 0) {
    FUN_10b51c210();
    param_2 = (long *)(ulong)*(byte *)((long)param_1 + 0x2c);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,plVar8);
    func_0x000107c280a8(param_2,uVar4);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar7 = param_1[1] & 0xfffffffffffffffe;
  uVar12 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar12 < 0) {
    lVar13 = *(long *)(uVar7 + 8);
    uVar12 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar13 = uVar7 + 8;
  }
  if ((long)(int)uVar12 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar13,uVar12 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar12);
  }
  while( true ) {
    iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar9 = (int)uVar12;
    uVar12 = (ulong)(uint)(iVar9 - iVar11);
    if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar9);
}



/* Entry: 10b51c08c; end: 10b51c147;  */

void FUN_10b51c08c(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar5 = (ulong)uVar4;
  lVar7 = 8;
  for (uVar6 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar7 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar5 = uVar3 + uVar5;
    uVar4 = (uint)uVar5;
    lVar7 = lVar7 + 8;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = uVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = uVar4 + (uint)*(byte *)(param_1 + 0x2c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar7 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(uVar5 + 0x10);
    }
    iVar2 = (int)lVar7 + iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return;
}



/* Entry: 10b51c148; end: 10b51c1af;  */

void FUN_10b51c148(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
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



/* Entry: 10b51c1b0; end: 10b51c1b7;  */

void FUN_10b51c1b0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfb530;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}



/* Entry: 10b51c1b8; end: 10b51c20f;  */

void FUN_10b51c1b8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfb530;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}



/* Entry: 10b51c210; end: 10b51c21f;  */

ulong * FUN_10b51c210(void)

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



/* Entry: 10b51c220; end: 10b51c233;  */

void FUN_10b51c220(void)

{
  func_0x000107c3054c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51c234; end: 10b51c467;  */

long * FUN_10b51c234(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  
  puVar11 = (undefined8 *)(param_1[0xb] & 0xfffffffffffffffc);
  lVar7 = (long)*(char *)((long)puVar11 + 0x17);
  plVar6 = param_1;
  if (lVar7 < 0) {
    lVar7 = puVar11[1];
    if (lVar7 == 0) goto LAB_10b51c2a4;
    puVar4 = (undefined8 *)*puVar11;
  }
  else {
    puVar4 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10b51c2a4;
  }
  func_0x000107c303d4(puVar4,lVar7,1,&UNK_10f776b73);
  plVar6 = param_3;
  func_0x000107c280a0(param_3,1,puVar11,param_2);
  param_2 = plVar6;
LAB_10b51c2a4:
  plVar5 = plVar6;
  if ((char)param_1[0xc] == '\x01') {
    FUN_10b51c6b8();
    plVar5 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar6);
    func_0x00010b51c6fc();
    param_2 = plVar5;
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar2) {
    FUN_10b51c6b8();
    *(undefined1 *)plVar5 = 0x1a;
    plVar6 = plVar5;
    while (0x7f < uVar2) {
      func_0x00010b51c6c4();
    }
    *(char *)((long)plVar5 + 1) = (char)uVar2;
    piVar12 = (int *)param_1[3];
    plVar5 = plVar6;
    do {
      FUN_10b51c6b8();
      uVar8 = (ulong)*piVar12;
      param_2 = (long *)((long)plVar5 + 1);
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b51c6d8();
        uVar8 = extraout_x8;
      }
      func_0x00010b51c6ec();
    } while (!bVar3);
  }
  plVar6 = plVar5;
  if (*(char *)((long)param_1 + 0x61) == '\x01') {
    FUN_10b51c6b8();
    plVar6 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar5);
    func_0x00010b51c6fc();
    param_2 = plVar6;
  }
  uVar2 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar2) {
    FUN_10b51c6b8();
    *(undefined1 *)plVar6 = 0x2a;
    plVar5 = plVar6;
    while (0x7f < uVar2) {
      func_0x00010b51c6c4();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar2;
    piVar12 = (int *)param_1[6];
    plVar6 = plVar5;
    do {
      FUN_10b51c6b8();
      uVar8 = (ulong)*piVar12;
      param_2 = (long *)((long)plVar6 + 1);
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b51c6d8();
        uVar8 = extraout_x8_00;
      }
      func_0x00010b51c6ec();
    } while (!bVar3);
  }
  uVar2 = *(uint *)(param_1 + 10);
  if (0 < (int)uVar2) {
    FUN_10b51c6b8();
    *(undefined1 *)plVar6 = 0x32;
    plVar5 = plVar6;
    while (0x7f < uVar2) {
      func_0x00010b51c6c4();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar2;
    piVar12 = (int *)param_1[9];
    do {
      FUN_10b51c6b8();
      uVar8 = (ulong)*piVar12;
      param_2 = (long *)((long)plVar5 + 1);
      while (bVar3 = 0x7f < uVar8, bVar3) {
        func_0x00010b51c6d8();
        uVar8 = extraout_x8_01;
      }
      func_0x00010b51c6ec();
    } while (!bVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar9 = param_1[1] & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar7 = *(long *)(uVar9 + 8);
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      lVar7 = uVar9 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      while( true ) {
        iVar13 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar10 = (int)uVar8;
        uVar8 = (ulong)(uint)(iVar10 - iVar13);
        if (iVar10 - iVar13 == 0 || iVar10 < iVar13) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar13);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar10);
    }
    _memcpy(param_2,lVar7,uVar8 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar8);
  }
  return param_2;
}



/* Entry: 10b51c468; end: 10b51c583;  */

void FUN_10b51c468(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  lVar6 = param_1 + 0x10;
  FUN_10b4d3e0c();
  iVar7 = (int)lVar6;
  *(int *)(param_1 + 0x20) = iVar7;
  iVar4 = 0;
  if (lVar6 != 0) {
    iVar4 = ((int)LZCOUNT((long)iVar7) * -9 + 0x280U >> 6) + 1;
  }
  lVar6 = param_1 + 0x28;
  FUN_10b4d3e0c();
  iVar8 = (int)lVar6;
  *(int *)(param_1 + 0x38) = iVar8;
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = ((int)LZCOUNT((long)iVar8) * -9 + 0x280U >> 6) + 1;
  }
  lVar6 = param_1 + 0x40;
  FUN_10b4d3e0c();
  iVar3 = (int)lVar6;
  *(int *)(param_1 + 0x50) = iVar3;
  iVar2 = 0;
  if (lVar6 != 0) {
    iVar2 = ((int)LZCOUNT((long)iVar3) * -9 + 0x280U >> 6) + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  iVar4 = iVar4 + iVar7 + iVar8 + iVar1 + iVar3 + iVar2;
  if (lVar6 != 0) {
    func_0x000107c282a0();
    iVar4 = iVar4 + (int)uVar5 + 1;
  }
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0x60) * 2 + (uint)*(byte *)(param_1 + 0x61) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    iVar4 = (int)lVar6 + iVar4;
  }
  *(int *)(param_1 + 100) = iVar4;
  return;
}



/* Entry: 10b51c584; end: 10b51c587;  */

void FUN_10b51c584(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (*(char *)(param_2 + 0x61) == '\x01') {
    *(undefined1 *)(param_1 + 0x61) = 1;
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



/* Entry: 10b51c588; end: 10b51c673;  */

void FUN_10b51c588(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (*(char *)(param_2 + 0x61) == '\x01') {
    *(undefined1 *)(param_1 + 0x61) = 1;
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



/* Entry: 10b51c674; end: 10b51c67b;  */

undefined8 * FUN_10b51c674(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x68);
  }
  *puVar1 = &PTR_DAT_110cfb5f8;
  puVar1[1] = param_2;
  func_0x00010066f74c();
  return puVar1;
}



/* Entry: 10b51c67c; end: 10b51c6b7;  */

undefined8 * FUN_10b51c67c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x68);
  }
  *puVar1 = &PTR_DAT_110cfb5f8;
  puVar1[1] = param_1;
  func_0x00010066f74c();
  return puVar1;
}



/* Entry: 10b51c6b8; end: 10b51c707;  */

ulong * FUN_10b51c6b8(void)

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



/* Entry: 10b51c708; end: 10b51c737;  */

long FUN_10b51c708(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51c738; end: 10b51c73b;  */

long FUN_10b51c738(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51c73c; end: 10b51c74f;  */

void FUN_10b51c73c(void)

{
  FUN_10b51c708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51c750; end: 10b51c777;  */

undefined ** FUN_10b51c750(void)

{
  return &PTR_DAT_110cfb748;
}



/* Entry: 10b51c778; end: 10b51c897;  */

byte * FUN_10b51c778(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  pbVar2 = param_1;
  if (0 < (int)uVar7) {
    FUN_10b51ce34();
    pbVar4 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar4[-1] = (byte)uVar7 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar7;
    piVar8 = *(int **)(param_1 + 0x18);
    piVar1 = piVar8 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b51ce34();
      uVar5 = (ulong)*piVar8;
      pbVar4 = pbVar2;
      while( true ) {
        param_2 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_2;
      }
      piVar8 = piVar8 + 1;
      *pbVar4 = (byte)uVar5;
    } while (piVar8 < piVar1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b51ce48();
    func_0x00010598f43c();
    param_2 = pbVar2;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b51ce48();
    func_0x000107c282ac();
    param_2 = pbVar2;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x00010b51ce48();
    func_0x0001088bdd44();
    param_2 = pbVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        pbVar2 = param_2 + iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar2);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar3,uVar5 & 0xffffffff);
    return param_2 + (int)uVar5;
  }
  return param_2;
}



/* Entry: 10b51c898; end: 10b51c99f;  */

void FUN_10b51c898(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1 + 0x10;
  FUN_10b4d3e0c();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b51ce80();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b51ce80();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return;
}



/* Entry: 10b51c9a0; end: 10b51c9cf;  */

long FUN_10b51c9a0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b51cd6c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51c9d0; end: 10b51c9d3;  */

long FUN_10b51c9d0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b51cd6c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51c9d4; end: 10b51c9e7;  */

void FUN_10b51c9d4(void)

{
  FUN_10b51c9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51c9e8; end: 10b51c9f3;  */

undefined ** FUN_10b51c9e8(void)

{
  return &PTR_DAT_110cfb7b8;
}



/* Entry: 10b51c9f4; end: 10b51ca3f;  */

void FUN_10b51c9f4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
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



/* Entry: 10b51ca40; end: 10b51cc53;  */

long * FUN_10b51ca40(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar2 = param_1;
  if ((int)param_1[5] != 0) {
    plVar3 = param_1;
    FUN_10b51ce34();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x00010b51ceb8();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    FUN_10b51ce34();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b51ceb8();
    param_2 = plVar3;
  }
  if ((int)param_1[6] != 0) {
    func_0x00010b51ce48();
    func_0x000107c282ac();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b51ce48();
    func_0x0001088bdd44();
    param_2 = plVar3;
  }
  if ((int)param_1[7] != 0) {
    func_0x00010b51ce48();
    func_0x0001088b96ec();
    param_2 = plVar3;
  }
  lVar4 = param_1[3];
  for (iVar7 = 0; (int)lVar4 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = param_1[2];
    puVar1 = (ulong *)(param_1 + 2);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar2 = (long *)0x6;
    func_0x000107c303cc(6,*puVar1,*(undefined4 *)(*puVar1 + 0x30),param_2,param_3);
    param_2 = plVar2;
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



/* Entry: 10b51cc54; end: 10b51cc57;  */

void FUN_10b51cc54(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b51cec4();
  FUN_10b51ccd0();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
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



/* Entry: 10b51cc58; end: 10b51cccf;  */

void FUN_10b51cc58(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b51cec4();
  FUN_10b51ccd0();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
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



/* Entry: 10b51ccd0; end: 10b51ccdf;  */

void FUN_10b51ccd0(long *param_1,long param_2)

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



/* Entry: 10b51cce0; end: 10b51cd5b;  */

void FUN_10b51cce0(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b51c9f4();
  func_0x00010b51cec4(param_1,param_2);
  FUN_10b51ccd0();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
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



/* Entry: 10b51cd5c; end: 10b51cd6b;  */

void FUN_10b51cd5c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfb6b8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b51cd6c; end: 10b51cd9b;  */

long * FUN_10b51cd6c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b51cd9c; end: 10b51ce33;  */

void FUN_10b51cd9c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfb6b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b51ce34; end: 10b51cf0b;  */

ulong * FUN_10b51ce34(void)

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



/* Entry: 10b51cf0c; end: 10b51cf33;  */

long FUN_10b51cf0c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b51cf34; end: 10b51cf7f;  */

undefined8 * FUN_10b51cf34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cfb850;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b51ced8(param_1,param_3);
  return param_1;
}



/* Entry: 10b51cf80; end: 10b51cf83;  */

long FUN_10b51cf80(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b51cf84; end: 10b51cf97;  */

void FUN_10b51cf84(void)

{
  FUN_10b51cf0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51cf98; end: 10b51cfb7;  */

undefined ** FUN_10b51cf98(void)

{
  return &PTR_DAT_110cfb890;
}


