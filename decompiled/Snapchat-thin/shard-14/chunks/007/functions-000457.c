/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5a9020; end: 10b5a9023;  */

undefined8 FUN_10b5a9020(undefined8 param_1)

{
  func_0x00010b5a9c78();
  FUN_10b5a8ff8(param_1);
  return param_1;
}



/* Entry: 10b5a9024; end: 10b5a9037;  */

void FUN_10b5a9024(void)

{
  FUN_10b5a8fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a9038; end: 10b5a9043;  */

undefined ** FUN_10b5a9038(void)

{
  return &PTR_DAT_110d14f98;
}



/* Entry: 10b5a9044; end: 10b5a91ab;  */

void FUN_10b5a9044(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
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



/* Entry: 10b5a91ac; end: 10b5a91af;  */

void FUN_10b5a91ac(long param_1,long param_2)

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



/* Entry: 10b5a91b0; end: 10b5a924b;  */

void FUN_10b5a91b0(long param_1,long param_2)

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



/* Entry: 10b5a924c; end: 10b5a9347;  */

undefined8 * FUN_10b5a924c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14e80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5a9cbc();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b5a99f4(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b5a9a78(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b5a99f4(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b5a9ab4(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b5a9b18(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5a9b7c(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = param_2;
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  return param_1;
}



/* Entry: 10b5a9348; end: 10b5a9373;  */

undefined8 FUN_10b5a9348(undefined8 param_1)

{
  func_0x00010b5a9c78();
  FUN_10b5a9374(param_1);
  return param_1;
}



/* Entry: 10b5a9374; end: 10b5a93eb;  */

void FUN_10b5a9374(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5a8fcc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5aa438();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5a8fcc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5a8c54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5a8d60();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5a8e78();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a93ec; end: 10b5a93ef;  */

undefined8 FUN_10b5a93ec(undefined8 param_1)

{
  func_0x00010b5a9c78();
  FUN_10b5a9374(param_1);
  return param_1;
}



/* Entry: 10b5a93f0; end: 10b5a9403;  */

void FUN_10b5a93f0(void)

{
  FUN_10b5a9348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a9404; end: 10b5a940f;  */

undefined ** FUN_10b5a9404(void)

{
  return &PTR_DAT_110d14ff8;
}



/* Entry: 10b5a9410; end: 10b5a94b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a9410(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5a9044(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5aa4d0(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5a9044(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5a8c9c(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b5a8da8(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010b5a8ec0(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 10b5a94b4; end: 10b5a970b;  */

long * FUN_10b5a94b4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar4;
  int iVar5;
  int iVar6;
  
  func_0x00010b5a9c60();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_1 = (long *)0x4;
    func_0x00010b5a9c70();
    param_4 = param_1;
  }
  plVar4 = param_1;
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b5a9c14();
    plVar4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
    uVar2 = 0x78;
    func_0x000107c280a8(0x78,param_1);
    func_0x000107c280a8(plVar4,uVar2);
    param_4 = plVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    plVar4 = (long *)0x12;
    func_0x00010b5a9c70();
    param_4 = plVar4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x20);
    plVar4 = (long *)0x13;
    func_0x00010b5a9c70();
    param_4 = plVar4;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00010b5a9c14();
    param_4 = (long *)0xa0;
    func_0x000107c280a8(0xa0,plVar4);
    func_0x00010b5a9c20();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x17;
    func_0x00010b5a9c70();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x18;
    func_0x00010b5a9c70();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_4 = (long *)0x19;
    func_0x00010b5a9c70();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5a9c90();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b5a970c; end: 10b5a9737;  */

long FUN_10b5a970c(long param_1)

{
  func_0x00010b5a911c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5a9738; end: 10b5a973b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a9738(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b5a99f4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b5a91b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9a78(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        func_0x00010b5aa410();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_10b5a99f4(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10b5a91b0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9ab4(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b5a8c38();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9b18(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010b5a8d44();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_10b5a9b7c(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar3;
      }
      else {
        func_0x00010b5a8e50();
      }
    }
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 10b5a973c; end: 10b5a98db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a973c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b5a99f4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b5a91b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9a78(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        func_0x00010b5aa410();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_10b5a99f4(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10b5a91b0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9ab4(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b5a8c38();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9b18(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010b5a8d44();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_10b5a9b7c(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar3;
      }
      else {
        func_0x00010b5a8e50();
      }
    }
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 10b5a98dc; end: 10b5a9913;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a98dc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b5a9410();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b5a99f4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b5a91b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9a78(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        func_0x00010b5aa410();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_10b5a99f4(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10b5a91b0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9ab4(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b5a8c38();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_10b5a9b18(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010b5a8d44();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_10b5a9b7c(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar3;
      }
      else {
        func_0x00010b5a8e50();
      }
    }
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 10b5a9914; end: 10b5a993b;  */

void FUN_10b5a9914(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b5a9cb4();
  }
  else {
    func_0x00010b5a9cc8();
  }
  *puVar1 = &PTR_FUN_110d14d40;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5a993c; end: 10b5a99f3;  */

void FUN_10b5a993c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a9cb4();
  }
  else {
    func_0x00010b5a9cc8();
  }
  *puVar1 = &PTR_FUN_110d14d40;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5a99f4; end: 10b5a9a77;  */

undefined8 * FUN_10b5a99f4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d14d90;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5a9cbc();
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[2] = lVar2;
  param_2 = param_2 + 0x18;
  func_0x000107c2809c(param_2,param_1);
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* Entry: 10b5a9a78; end: 10b5a9ab3;  */

undefined8 * FUN_10b5a9a78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a9cb4();
  }
  else {
    func_0x00010b5a9cc8();
  }
  *puVar1 = &PTR_FUN_110d152f8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x00010b5aa410();
  return puVar1;
}



/* Entry: 10b5a9ab4; end: 10b5a9b17;  */

undefined8 * FUN_10b5a9ab4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a9c80();
  }
  else {
    func_0x00010b5a9c88();
  }
  *puVar1 = &PTR_FUN_110d14e30;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b5a8c38();
  return puVar1;
}



/* Entry: 10b5a9b18; end: 10b5a9b7b;  */

undefined8 * FUN_10b5a9b18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a9c80();
  }
  else {
    func_0x00010b5a9c88();
  }
  *puVar1 = &PTR_FUN_110d14de0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b5a8d44();
  return puVar1;
}



/* Entry: 10b5a9b7c; end: 10b5a9be3;  */

undefined8 * FUN_10b5a9b7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a9cb4();
  }
  else {
    func_0x00010b5a9cc8();
  }
  *puVar1 = &PTR_FUN_110d14d40;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x00010b5a8e50();
  return puVar1;
}



/* Entry: 10b5a9be4; end: 10b5a9cf7;  */

void FUN_10b5a9be4(void)

{
  return;
}



/* Entry: 10b5a9cf8; end: 10b5a9da3;  */

undefined * FUN_10b5a9cf8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383e1e8 & 1) == 0) {
    iVar2 = 0x1383e1e8;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      func_0x00010b5a9f14();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383e1e0 = uVar1;
      param_1 = 0x1383e1e8;
      ___cxa_guard_release();
    }
  }
  func_0x00010b5a9f14();
  func_0x00010b5a9f0c();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383e1f0);
  }
  return puVar3;
}



/* Entry: 10b5a9da4; end: 10b5a9e4f;  */

undefined * FUN_10b5a9da4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383e258 & 1) == 0) {
    iVar2 = 0x1383e258;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      func_0x00010b5a9f3c();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383e250 = uVar1;
      param_1 = 0x1383e258;
      ___cxa_guard_release();
    }
  }
  func_0x00010b5a9f3c();
  func_0x00010b5a9f0c();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383e260);
  }
  return puVar3;
}



/* Entry: 10b5a9e50; end: 10b5a9efb;  */

undefined * FUN_10b5a9e50(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383e310 & 1) == 0) {
    iVar2 = 0x1383e310;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      func_0x00010b5a9f28();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383e308 = uVar1;
      param_1 = 0x1383e310;
      ___cxa_guard_release();
    }
  }
  func_0x00010b5a9f28();
  func_0x00010b5a9f0c();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383e318);
  }
  return puVar3;
}



/* Entry: 10b5a9efc; end: 10b5a9f4f;  */

void FUN_10b5a9efc(void)

{
  return;
}



/* Entry: 10b5a9f50; end: 10b5a9fe3;  */

undefined8 * FUN_10b5a9f50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d15248;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b5aa360(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5aa3a4(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5a9fe4; end: 10b5aa017;  */

long FUN_10b5a9fe4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5aa018(param_1);
  return param_1;
}



/* Entry: 10b5aa018; end: 10b5aa04f;  */

void FUN_10b5aa018(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5a86fc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5ac254();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5aa050; end: 10b5aa053;  */

long FUN_10b5aa050(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5aa018(param_1);
  return param_1;
}



/* Entry: 10b5aa054; end: 10b5aa067;  */

void FUN_10b5aa054(void)

{
  FUN_10b5a9fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5aa068; end: 10b5aa073;  */

undefined ** FUN_10b5aa068(void)

{
  return &PTR_DAT_110d15288;
}



/* Entry: 10b5aa074; end: 10b5aa0d3;  */

void FUN_10b5aa074(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5a874c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5ac2a4(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5aa0d4; end: 10b5aa247;  */

long * FUN_10b5aa0d4(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x30),param_2,param_3);
  }
  plVar3 = plVar2;
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),plVar2,param_3);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar3);
    plVar3 = *(long **)(param_1 + 0x28);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280ac(plVar3,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar3 + (long)iVar9;
        plVar3 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar8);
    }
    _memcpy(plVar3,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar6);
  }
  return plVar3;
}



/* Entry: 10b5aa248; end: 10b5aa277;  */

void FUN_10b5aa248(void)

{
  FUN_10b5a884c();
  func_0x00010b5aa3f4();
  return;
}



/* Entry: 10b5aa278; end: 10b5aa27b;  */

void FUN_10b5aa278(long param_1,long param_2)

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
        func_0x00010b5aa360(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b5a88dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x00010b5aa3a4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_10b5ac410();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b5aa27c; end: 10b5aa357;  */

void FUN_10b5aa27c(long param_1,long param_2)

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
        func_0x00010b5aa360(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b5a88dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x00010b5aa3a4(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_10b5ac410();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b5aa358; end: 10b5aa35f;  */

void FUN_10b5aa358(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010802be68();
  }
  *puVar1 = &PTR_FUN_110d15248;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5aa360; end: 10b5aa3e7;  */

undefined8 * FUN_10b5aa360(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d14bd0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5a8964(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[5] = *(undefined8 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 10b5aa3e8; end: 10b5aa437;  */

void FUN_10b5aa3e8(void)

{
  return;
}



/* Entry: 10b5aa438; end: 10b5aa45f;  */

long FUN_10b5aa438(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5aa460; end: 10b5aa4ab;  */

undefined8 * FUN_10b5aa460(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d152f8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5aa410(param_1,param_3);
  return param_1;
}



/* Entry: 10b5aa4ac; end: 10b5aa4af;  */

long FUN_10b5aa4ac(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5aa4b0; end: 10b5aa4c3;  */

void FUN_10b5aa4b0(void)

{
  FUN_10b5aa438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5aa4c4; end: 10b5aa4e3;  */

undefined ** FUN_10b5aa4c4(void)

{
  return &PTR_DAT_110d15338;
}



/* Entry: 10b5aa4e4; end: 10b5aa54f;  */

long * FUN_10b5aa4e4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
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
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5aa550; end: 10b5aa5a3;  */

ulong FUN_10b5aa550(long param_1)

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



/* Entry: 10b5aa5a4; end: 10b5aa5eb;  */

void FUN_10b5aa5a4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d152f8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5aa5ec; end: 10b5aa5f3;  */

void FUN_10b5aa5ec(void)

{
  return;
}



/* Entry: 10b5aa5f4; end: 10b5aa67b;  */

void FUN_10b5aa5f4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x38) == 4) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5aa650;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b55776c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 1) goto LAB_10b5aa650;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5aa650;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b5a9348();
    }
  }
  __ZdlPv();
LAB_10b5aa650:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10b5aa67c; end: 10b5aa6cf;  */

long FUN_10b5aa67c(long param_1)

{
  func_0x00010b5ab608();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5aac38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a7b1c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10b5aa5f4(param_1);
  }
  return param_1;
}



/* Entry: 10b5aa6d0; end: 10b5aa6d3;  */

long FUN_10b5aa6d0(long param_1)

{
  func_0x00010b5ab608();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5aac38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a7b1c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10b5aa5f4(param_1);
  }
  return param_1;
}



/* Entry: 10b5aa6d4; end: 10b5aa6e7;  */

void FUN_10b5aa6d4(void)

{
  FUN_10b5aa67c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5aa6e8; end: 10b5aa6f3;  */

undefined ** FUN_10b5aa6e8(void)

{
  return &PTR_DAT_110d15480;
}



/* Entry: 10b5aa6f4; end: 10b5aa7d7;  */

void FUN_10b5aa6f4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5aa754(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5a7b70(*(undefined8 *)(param_1 + 0x20));
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_10b5aa5f4(param_1);
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



/* Entry: 10b5aa7d8; end: 10b5aa987;  */

long * FUN_10b5aa7d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b5ab5cc();
  uVar1 = *(uint *)(param_1 + 0x38);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 4 || uVar1 == 1) {
    func_0x00010b5ab580(plVar2,*(long *)(unaff_x20 + 0x30),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x14));
    param_4 = plVar2;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x5;
    func_0x00010b5ab580(5,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5ab548();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b5ab554();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_4 = (long *)0x7;
    func_0x00010b5ab580(7,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x28));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if ((long)(int)uVar4 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  while( true ) {
    iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar6 = (int)uVar4;
    uVar1 = iVar6 - iVar7;
    uVar4 = (ulong)uVar1;
    if (uVar1 == 0 || iVar6 < iVar7) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar6);
}



/* Entry: 10b5aa988; end: 10b5aa98b;  */

void FUN_10b5aa988(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5ab588();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b5ab37c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        func_0x00010b5aaae0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b5a8ab4();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_10b5a7d18();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 5) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b5ab5bc();
  iVar2 = *(int *)(unaff_x20 + 0x38);
  if (iVar2 == 0) goto LAB_10b5aaac4;
  iVar3 = (int)unaff_x21[7];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b5aa5f4();
    }
    *(int *)(unaff_x21 + 7) = iVar2;
  }
  if (iVar2 == 4) {
    if (iVar3 == 4) {
      param_1 = (ulong *)unaff_x21[6];
      FUN_10b557a80();
      goto LAB_10b5aaac4;
    }
    func_0x000108930a60();
    param_1 = unaff_x22;
  }
  else {
    if (iVar2 != 1) goto LAB_10b5aaac4;
    if (iVar3 == 1) {
      param_1 = (ulong *)unaff_x21[6];
      FUN_10b5a973c();
      goto LAB_10b5aaac4;
    }
    FUN_10b5ab464();
    param_1 = unaff_x22;
  }
  unaff_x21[6] = (ulong)param_1;
LAB_10b5aaac4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ab5ac();
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



/* Entry: 10b5aa98c; end: 10b5aac03;  */

void FUN_10b5aa98c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5ab588();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b5ab37c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        func_0x00010b5aaae0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b5a8ab4();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_10b5a7d18();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 5) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b5ab5bc();
  iVar2 = *(int *)(unaff_x20 + 0x38);
  if (iVar2 == 0) goto LAB_10b5aaac4;
  iVar3 = (int)unaff_x21[7];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b5aa5f4();
    }
    *(int *)(unaff_x21 + 7) = iVar2;
  }
  if (iVar2 == 4) {
    if (iVar3 == 4) {
      param_1 = (ulong *)unaff_x21[6];
      FUN_10b557a80();
      goto LAB_10b5aaac4;
    }
    func_0x000108930a60();
    param_1 = unaff_x22;
  }
  else {
    if (iVar2 != 1) goto LAB_10b5aaac4;
    if (iVar3 == 1) {
      param_1 = (ulong *)unaff_x21[6];
      FUN_10b5a973c();
      goto LAB_10b5aaac4;
    }
    FUN_10b5ab464();
    param_1 = unaff_x22;
  }
  unaff_x21[6] = (ulong)param_1;
LAB_10b5aaac4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ab5ac();
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



/* Entry: 10b5aac04; end: 10b5aac37;  */

void FUN_10b5aac04(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5ab610();
  FUN_10b5aa6f4();
  puVar4 = unaff_x20;
  func_0x00010b5ab588();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = (uint)unaff_x20[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[3];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_10b5ab37c();
        unaff_x21[3] = (ulong)puVar4;
      }
      else {
        func_0x00010b5aaae0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[4];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x00010b5a8ab4();
        unaff_x21[4] = (ulong)puVar4;
      }
      else {
        FUN_10b5a7d18();
      }
    }
  }
  if ((int)unaff_x20[5] != 0) {
    *(int *)(unaff_x21 + 5) = (int)unaff_x20[5];
  }
  func_0x00010b5ab5bc();
  iVar2 = (int)unaff_x20[7];
  if (iVar2 == 0) goto LAB_10b5aaac4;
  iVar3 = (int)unaff_x21[7];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      puVar4 = unaff_x21;
      FUN_10b5aa5f4();
    }
    *(int *)(unaff_x21 + 7) = iVar2;
  }
  if (iVar2 == 4) {
    if (iVar3 == 4) {
      puVar4 = (ulong *)unaff_x21[6];
      FUN_10b557a80();
      goto LAB_10b5aaac4;
    }
    func_0x000108930a60();
    puVar4 = unaff_x22;
  }
  else {
    if (iVar2 != 1) goto LAB_10b5aaac4;
    if (iVar3 == 1) {
      puVar4 = (ulong *)unaff_x21[6];
      FUN_10b5a973c();
      goto LAB_10b5aaac4;
    }
    FUN_10b5ab464();
    puVar4 = unaff_x22;
  }
  unaff_x21[6] = (ulong)puVar4;
LAB_10b5aaac4:
  if ((unaff_x20[1] & 1) != 0) {
    func_0x00010b5ab5ac();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 10b5aac38; end: 10b5aac9b;  */

long FUN_10b5aac38(long param_1)

{
  func_0x00010b5ab608();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5acc50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5acc50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5ab7c8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b576d70();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5aac9c; end: 10b5aac9f;  */

long FUN_10b5aac9c(long param_1)

{
  func_0x00010b5ab608();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5acc50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5acc50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5ab7c8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b576d70();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5aaca0; end: 10b5aacb3;  */

void FUN_10b5aaca0(void)

{
  FUN_10b5aac38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5aacb4; end: 10b5aacbf;  */

undefined ** FUN_10b5aacb4(void)

{
  return &PTR_DAT_110d154c8;
}



/* Entry: 10b5aacc0; end: 10b5aaed3;  */

long * FUN_10b5aacc0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  int iVar8;
  int iVar9;
  
  func_0x00010b5ab5cc();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_1 = (long *)0x6;
    func_0x00010b5ab580(6,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x18));
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_1 = (long *)0x7;
    func_0x00010b5ab580(7,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x18));
    param_4 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b5ab548();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x38);
    plVar3 = (long *)0x4d;
    func_0x000107c280a8(0x4d,param_1);
    param_4 = (long *)((long)plVar3 + 4);
    *(undefined4 *)plVar3 = uVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar3 = (long *)0xa;
    func_0x00010b5ab580(10,*(long *)(unaff_x20 + 0x28),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x20));
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    func_0x00010b5ab548();
    plVar4 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar3);
    func_0x00010b5ab554();
    param_4 = plVar4;
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b5ab548();
    param_4 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar4);
    func_0x00010b5ab554();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_4 = (long *)0xd;
    func_0x00010b5ab580(0xd,*(long *)(unaff_x20 + 0x30),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x84));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar8 = (int)uVar6;
        uVar1 = iVar8 - iVar9;
        uVar6 = (ulong)uVar1;
        if (uVar1 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar8);
    }
    _memcpy(param_4,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar6);
  }
  return param_4;
}



/* Entry: 10b5aaed4; end: 10b5aaeef;  */

long FUN_10b5aaed4(long param_1)

{
  long extraout_x8;
  
  FUN_10b577018();
  FUN_10b5ab524();
  return param_1 + extraout_x8;
}



/* Entry: 10b5aaef0; end: 10b5aaef3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5aaef0(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5ab588();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b5a8a10();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b5acc28();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b5a8a10();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5acc28();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b5a8a80();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b5ab990();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5ab4a4();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b57714c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  func_0x00010b5ab5bc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ab5ac();
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



/* Entry: 10b5aaef4; end: 10b5aaf77;  */

undefined8 * FUN_10b5aaef4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d15440;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5ab5e8();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b5ab2d0(param_1 + 3,param_2,param_3 + 0x18);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5ab4e4(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 10b5aaf78; end: 10b5aafa3;  */

undefined8 FUN_10b5aaf78(undefined8 param_1)

{
  func_0x00010b5ab608();
  FUN_10b5aafa4(param_1);
  return param_1;
}



/* Entry: 10b5aafa4; end: 10b5aafd3;  */

long * FUN_10b5aafa4(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5a9fe4();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5aafd4; end: 10b5aafd7;  */

undefined8 FUN_10b5aafd4(undefined8 param_1)

{
  func_0x00010b5ab608();
  FUN_10b5aafa4(param_1);
  return param_1;
}



/* Entry: 10b5aafd8; end: 10b5aafeb;  */

void FUN_10b5aafd8(void)

{
  FUN_10b5aaf78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5aafec; end: 10b5aaff7;  */

undefined ** FUN_10b5aafec(void)

{
  return &PTR_DAT_110d15510;
}



/* Entry: 10b5aaff8; end: 10b5ab04f;  */

void FUN_10b5aaff8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5aa074(*(undefined8 *)(param_1 + 0x30));
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



/* Entry: 10b5ab050; end: 10b5ab13b;  */

long * FUN_10b5ab050(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b5ab5cc();
  lVar4 = param_1[4];
  puVar1 = (ulong *)(param_1 + 3);
  for (iVar7 = 0; (int)lVar4 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    param_1 = (long *)0x1;
    func_0x00010b5ab580(1,*puVar2,*(undefined4 *)(*puVar2 + 0x14));
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (long *)0x5;
    func_0x00010b5ab580(5,*(long *)(unaff_x20 + 0x30),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x14));
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b5ab548();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,param_1);
    func_0x00010b5ab554();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar3 = iVar7 - iVar8;
        uVar5 = (ulong)uVar3;
        if (uVar3 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b5ab13c; end: 10b5ab1e7;  */

long FUN_10b5ab13c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b5ab1e8();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5ab204(*(undefined8 *)(param_1 + 0x30));
    func_0x00010b5ab5dc();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5ab1e8; end: 10b5ab21f;  */

long FUN_10b5ab1e8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5aa89c();
  FUN_10b5ab524();
  return param_1 + extraout_x8;
}



/* Entry: 10b5ab220; end: 10b5ab223;  */

void FUN_10b5ab220(void)

{
  ulong *puVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5ab588();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_10b5ab2a8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x30);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b5ab4e4();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b5aa27c();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x00010b5ab5bc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ab5ac();
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



/* Entry: 10b5ab224; end: 10b5ab2a7;  */

void FUN_10b5ab224(void)

{
  ulong *puVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5ab588();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_10b5ab2a8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x30);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b5ab4e4();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b5aa27c();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x00010b5ab5bc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ab5ac();
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



/* Entry: 10b5ab2a8; end: 10b5ab2cf;  */

void FUN_10b5ab2a8(long *param_1,long param_2)

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



/* Entry: 10b5ab2d0; end: 10b5ab2fb;  */

undefined8 * FUN_10b5ab2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5ab2a8(param_1,param_3);
  return param_1;
}



/* Entry: 10b5ab2fc; end: 10b5ab32b;  */

long * FUN_10b5ab2fc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5ab32c; end: 10b5ab37b;  */

void FUN_10b5ab32c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110d153a0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10b5ab37c; end: 10b5ab463;  */

undefined8 * FUN_10b5ab37c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d153a0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5ab5e8();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5a8a10(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5a8a10(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5a8a80(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b5ab4a4(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40);
  puVar2[7] = uVar4;
  return puVar2;
}



/* Entry: 10b5ab464; end: 10b5ab523;  */

undefined8 * FUN_10b5ab464(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b5ab610();
  if (param_1 == 0) {
    puVar3 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar3 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar3[1] = unaff_x20;
  *puVar3 = &PTR_FUN_110d14e80;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5a9cbc();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar3 + 2) = uVar1;
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b5a99f4();
  }
  puVar3[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b5a9a78();
  }
  puVar3[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b5a99f4();
  }
  puVar3[5] = puVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b5a9ab4();
  }
  puVar3[6] = puVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b5a9b18();
  }
  puVar3[7] = puVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5a9b7c();
  }
  puVar3[8] = unaff_x20;
  puVar3[9] = *(undefined8 *)(unaff_x19 + 0x48);
  return puVar3;
}



/* Entry: 10b5ab524; end: 10b5ab61b;  */

void FUN_10b5ab524(void)

{
  return;
}



/* Entry: 10b5ab61c; end: 10b5ab683;  */

void FUN_10b5ab61c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  lVar1 = param_1;
  FUN_10b5ab684();
  if (param_2 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 != uVar2) {
      func_0x00010b5abaa0();
      param_2 = lVar1;
    }
    *(undefined4 *)(param_1 + 0x24) = 2;
    *(long *)(param_1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 10b5ab684; end: 10b5ab6e3;  */

void FUN_10b5ab684(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0x24) == 3) || (*(int *)(param_1 + 0x24) == 2)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5ab6e4; end: 10b5ab7c7;  */

void FUN_10b5ab6e4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  lVar1 = param_1;
  FUN_10b5ab684();
  if (param_2 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 != uVar2) {
      func_0x00010b5abaa0();
      param_2 = lVar1;
    }
    *(undefined4 *)(param_1 + 0x24) = 3;
    *(long *)(param_1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 10b5ab7c8; end: 10b5ab7fb;  */

long FUN_10b5ab7c8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5ab7fc(param_1);
  return param_1;
}



/* Entry: 10b5ab7fc; end: 10b5ab80f;  */

void FUN_10b5ab7fc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x24) == 3) || (*(int *)(param_1 + 0x24) == 2)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5ab810; end: 10b5ab823;  */

void FUN_10b5ab810(void)

{
  FUN_10b5ab7c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ab824; end: 10b5ab82f;  */

undefined ** FUN_10b5ab824(void)

{
  return &PTR_DAT_110d155f0;
}



/* Entry: 10b5ab830; end: 10b5ab86b;  */

void FUN_10b5ab830(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10b5ab684();
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



/* Entry: 10b5ab86c; end: 10b5ab917;  */

long * FUN_10b5ab86c(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    puVar2 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,plVar3);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  plVar3 = (long *)(ulong)*(uint *)(param_1 + 0x24);
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 2) {
    func_0x000107c303cc(plVar3,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x10),param_2,param_3);
    param_2 = plVar3;
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



/* Entry: 10b5ab918; end: 10b5ab98b;  */

long FUN_10b5ab918(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = 5;
  }
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010793598c();
    lVar3 = lVar3 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5ab98c; end: 10b5ab98f;  */

void FUN_10b5ab98c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 == 0) goto LAB_10b5aba44;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b5ab684(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 != 3) {
LAB_10b5aba34:
      func_0x000107c284d4(uVar3,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar3;
      goto LAB_10b5aba44;
    }
    func_0x00010b5aba88();
  }
  else {
    if (iVar1 != 2) goto LAB_10b5aba44;
    if (iVar2 != 2) goto LAB_10b5aba34;
    func_0x00010b5aba88();
  }
  func_0x00010bd1b688();
LAB_10b5aba44:
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


