/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b50df70; end: 10b50df9f;  */

long FUN_10b50df70(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b50dfa0(param_1);
  return param_1;
}



/* Entry: 10b50dfa0; end: 10b50dfbb;  */

void FUN_10b50dfa0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b50dde4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50dfbc; end: 10b50dfbf;  */

long FUN_10b50dfbc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b50dfa0(param_1);
  return param_1;
}



/* Entry: 10b50dfc0; end: 10b50dfd3;  */

void FUN_10b50dfc0(void)

{
  FUN_10b50df70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50dfd4; end: 10b50dfdf;  */

undefined ** FUN_10b50dfd4(void)

{
  return &PTR_DAT_110cf85b8;
}



/* Entry: 10b50dfe0; end: 10b50e0f3;  */

void FUN_10b50dfe0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b50de30(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b50e0f4; end: 10b50e11f;  */

long FUN_10b50e0f4(long param_1)

{
  FUN_10b50deb0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b50e120; end: 10b50e123;  */

void FUN_10b50e120(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10b50e250(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b50ddbc(*(long *)(param_1 + 0x18));
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



/* Entry: 10b50e124; end: 10b50e1b7;  */

void FUN_10b50e124(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10b50e250(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b50ddbc(*(long *)(param_1 + 0x18));
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



/* Entry: 10b50e1b8; end: 10b50e1c7;  */

void FUN_10b50e1b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110cf84c0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b50e1c8; end: 10b50e24f;  */

void FUN_10b50e1c8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf84c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b50e250; end: 10b50e2bf;  */

undefined8 * FUN_10b50e250(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf84c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b50ddbc();
  return puVar1;
}



/* Entry: 10b50e2c0; end: 10b50e30f;  */

void FUN_10b50e2c0(void)

{
  return;
}



/* Entry: 10b50e310; end: 10b50e333;  */

undefined8 FUN_10b50e310(undefined8 param_1)

{
  func_0x00010b51022c();
  return param_1;
}



/* Entry: 10b50e334; end: 10b50e337;  */

undefined8 FUN_10b50e334(undefined8 param_1)

{
  func_0x00010b51022c();
  return param_1;
}



/* Entry: 10b50e338; end: 10b50e34b;  */

void FUN_10b50e338(void)

{
  FUN_10b50e310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50e34c; end: 10b50e36b;  */

undefined ** FUN_10b50e34c(void)

{
  return &PTR_DAT_110cf8770;
}



/* Entry: 10b50e36c; end: 10b50e41b;  */

long * FUN_10b50e36c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b510244();
  if ((char)param_1[2] == '\x01') {
    func_0x00010b510140();
    func_0x00010b5101fc();
    func_0x00010b510164();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b510140();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b510164();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b510140();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5101a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5102cc();
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



/* Entry: 10b50e41c; end: 10b50e487;  */

long FUN_10b50e41c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b510294(((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10)) &
                      3) << 1);
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b50e488; end: 10b50e4ab;  */

undefined8 FUN_10b50e488(undefined8 param_1)

{
  func_0x00010b51022c();
  return param_1;
}



/* Entry: 10b50e4ac; end: 10b50e4af;  */

undefined8 FUN_10b50e4ac(undefined8 param_1)

{
  func_0x00010b51022c();
  return param_1;
}



/* Entry: 10b50e4b0; end: 10b50e4c3;  */

void FUN_10b50e4b0(void)

{
  FUN_10b50e488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50e4c4; end: 10b50e4e3;  */

undefined ** FUN_10b50e4c4(void)

{
  return &PTR_DAT_110cf87c8;
}



/* Entry: 10b50e4e4; end: 10b50e56b;  */

long * FUN_10b50e4e4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b510244();
  if ((char)param_1[2] == '\x01') {
    func_0x00010b510140();
    func_0x00010b5101fc();
    func_0x00010b510164();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b510140();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b5101a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5102cc();
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



/* Entry: 10b50e56c; end: 10b50e5a3;  */

long FUN_10b50e56c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b510294((ulong)*(byte *)(param_1 + 0x10) << 1);
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b50e5a4; end: 10b50e5d7;  */

long FUN_10b50e5a4(long param_1)

{
  func_0x00010b51022c();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b50e5d8; end: 10b50e5db;  */

long FUN_10b50e5d8(long param_1)

{
  func_0x00010b51022c();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b50e5dc; end: 10b50e5ef;  */

void FUN_10b50e5dc(void)

{
  FUN_10b50e5a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50e5f0; end: 10b50e5fb;  */

undefined ** FUN_10b50e5f0(void)

{
  return &PTR_DAT_110cf8828;
}



/* Entry: 10b50e5fc; end: 10b50e63f;  */

void FUN_10b50e5fc(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b50e640; end: 10b50e6fb;  */

long * FUN_10b50e640(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b510244();
  lVar3 = (long)*(char *)((param_1[2] & 0xfffffffffffffffcU) + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)((param_1[2] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b510140();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b5101a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5102cc();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 10b50e6fc; end: 10b50e7ab;  */

long FUN_10b50e6fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b50e734;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b50e734:
    lVar3 = 0;
    goto LAB_10b50e738;
  }
  func_0x000107c28098();
  lVar3 = uVar1 + 1;
LAB_10b50e738:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00010b51017c((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * 9);
    lVar3 = lVar3 + extraout_x8 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b50e7ac; end: 10b50e7af;  */

void FUN_10b50e7ac(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b50e7b0; end: 10b50e883;  */

void FUN_10b50e7b0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b50e884; end: 10b50e8bb;  */

void FUN_10b50e884(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1 + 0x50,0xbc);
  return;
}



/* Entry: 10b50e8bc; end: 10b50e8e7;  */

undefined8 FUN_10b50e8bc(undefined8 param_1)

{
  func_0x00010b51022c();
  FUN_10b50e8e8(param_1);
  return param_1;
}



/* Entry: 10b50e8e8; end: 10b50ea93;  */

void FUN_10b50e8e8(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5b4ff0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b50e310();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b509884();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b50d2a8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b50e488();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b509558();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b51032c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b50d4d8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b5116f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b510608();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b510888();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10b510fc8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10b510d0c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_10b511364();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_10b50886c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 200) != 0) {
    FUN_10b509f10();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_10b50e5a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10b5119e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_10b511ce0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_10b50df70();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_10b510af0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_10b50d784();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c303ac();
  }
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x00010b510254();
  }
  return;
}



/* Entry: 10b50ea94; end: 10b50ea97;  */

undefined8 FUN_10b50ea94(undefined8 param_1)

{
  func_0x00010b51022c();
  FUN_10b50e8e8(param_1);
  return param_1;
}



/* Entry: 10b50ea98; end: 10b50eaab;  */

void FUN_10b50ea98(void)

{
  FUN_10b50e8bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50eaac; end: 10b50eab7;  */

undefined ** FUN_10b50eaac(void)

{
  return &PTR_DAT_110cf8880;
}



/* Entry: 10b50eab8; end: 10b50ec9f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b50eab8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x00010b510254(param_1,0x10400300010);
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    func_0x0001053936e4(param_1 + 0x38);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5b5148(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b50e358(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5098d8(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b50d33c(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b50e4d0(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010b5095f0(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010b5103c8(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00010b50d574(*(undefined8 *)(param_1 + 0x88));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_10b51174c(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x00010b5106a8(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x00010b510920(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_10b511020(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      func_0x00010b510da8(*(undefined8 *)(param_1 + 0xb0));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_10b5113bc(*(undefined8 *)(param_1 + 0xb8));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_10b50890c(*(undefined8 *)(param_1 + 0xc0));
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      FUN_10b509f68(*(undefined8 *)(param_1 + 200));
    }
  }
  if ((uVar1 & 0x3f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      FUN_10b50e5fc(*(undefined8 *)(param_1 + 0xd0));
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      FUN_10b511a34(*(undefined8 *)(param_1 + 0xd8));
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      FUN_10b511d60(*(undefined8 *)(param_1 + 0xe0));
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      FUN_10b50dfe0(*(undefined8 *)(param_1 + 0xe8));
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      func_0x00010b510b8c(*(undefined8 *)(param_1 + 0xf0));
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      FUN_10b50d7d8(*(undefined8 *)(param_1 + 0xf8));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
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



/* Entry: 10b50eca0; end: 10b50f11f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10b50eca0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puStack_70;
  long alStack_68 [3];
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar5 = param_1;
  uVar9 = param_3;
  if ((uVar2 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x50) + 0x14);
    param_2 = 1;
    func_0x00010b510134(1);
    uVar5 = param_2;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x58) + 0x18);
    uVar5 = 2;
    func_0x00010b510134(2);
    param_2 = uVar5;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x60) + 0x3c);
    uVar5 = 3;
    func_0x00010b510134(3);
    param_2 = uVar5;
  }
  uVar6 = uVar5;
  if (*(int *)(param_1 + 0x100) != 0) {
    func_0x00010b5101c4();
    uVar6 = 0x20;
    func_0x000107c280a8(0x20,uVar5);
    func_0x00010b5101a0();
    param_2 = uVar6;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 0x14);
    uVar6 = 5;
    func_0x00010b510134(5);
    param_2 = uVar6;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0x18);
    uVar6 = 6;
    func_0x00010b510134(6);
    param_2 = uVar6;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x78) + 0x20);
    uVar6 = 7;
    func_0x00010b510134(7);
    param_2 = uVar6;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x80) + 0x24);
    uVar6 = 8;
    func_0x00010b510134(8);
    param_2 = uVar6;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x88) + 0x14);
    uVar6 = 9;
    func_0x00010b510134(9);
    param_2 = uVar6;
  }
  uVar5 = uVar6;
  if (*(int *)(param_1 + 0x104) != 0) {
    func_0x00010b5101c4();
    uVar5 = 0x50;
    func_0x000107c280a8(0x50,uVar6);
    func_0x00010b510164();
    param_2 = uVar5;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x90) + 0x18);
    uVar5 = 0xb;
    func_0x00010b510134(0xb);
    param_2 = uVar5;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x98) + 0x18);
    uVar5 = 0xc;
    func_0x00010b510134(0xc);
    param_2 = uVar5;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    func_0x00010b5101c4();
    param_2 = 0x68;
    func_0x000107c280a8(0x68,uVar5);
    func_0x00010b510164();
  }
  if ((uVar2 >> 10 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x18);
    param_2 = 0xe;
    func_0x00010b510134(0xe);
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xa8) + 0x28);
    param_2 = 0xf;
    func_0x00010b510134(0xf);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xb0) + 0x1c);
    param_2 = 0x10;
    func_0x00010b510134(0x10);
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xb8) + 0x28);
    param_2 = 0x11;
    func_0x00010b510134(0x11);
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xc0) + 0xec);
    param_2 = 0x12;
    func_0x00010b510134(0x12);
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 200) + 0x28);
    param_2 = 0x13;
    func_0x00010b510134(0x13);
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xd0) + 0x24);
    param_2 = 0x14;
    func_0x00010b510134(0x14);
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar5 = (ulong)uVar4;
  if (uVar4 != 0) {
    if ((uVar4 == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b510268();
      while (alStack_68[0] != 0) {
        param_2 = alStack_68[0] + 8;
        func_0x00010b510288(param_2,alStack_68[0] + 0x10);
        func_0x000107c27d54(alStack_68);
      }
    }
    else {
      puVar7 = (undefined4 *)(uVar5 << 4);
      __Znam();
      puVar10 = puVar7;
      do {
        *puVar10 = 0;
        *(undefined8 *)(puVar10 + 2) = 0;
        puVar10 = puVar10 + 4;
      } while (puVar10 != puVar7 + uVar5 * 4);
      puStack_70 = puVar7;
      func_0x00010b510268();
      while (alStack_68[0] != 0) {
        *puVar7 = *(undefined4 *)(alStack_68[0] + 8);
        *(undefined4 **)(puVar7 + 2) = (undefined4 *)(alStack_68[0] + 8);
        func_0x000107c27d54(alStack_68);
        puVar7 = puVar7 + 4;
      }
      FUN_10b504f88(puStack_70,puStack_70 + uVar5 * 4);
      uVar6 = uVar5 << 4;
      puVar10 = puStack_70;
      while (uVar5 != 0) {
        param_2 = *(ulong *)(puVar10 + 2);
        func_0x00010b510288(param_2,param_2 + 8);
        puVar10 = puVar10 + 4;
        uVar6 = uVar6 - 0x10;
        uVar5 = uVar6;
      }
      FUN_10b504e60(&puStack_70);
    }
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + 0x18);
    param_2 = 0x16;
    func_0x00010b510134(0x16);
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xe0) + 0x28);
    param_2 = 0x17;
    func_0x00010b510134(0x17);
  }
  iVar3 = *(int *)(param_1 + 0x40);
  for (iVar11 = 0; iVar3 != iVar11; iVar11 = iVar11 + 1) {
    uVar9 = *(ulong *)(param_1 + 0x38);
    puVar1 = (ulong *)(param_1 + 0x38);
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(uVar9 + (long)iVar11 * 8 + 7);
    }
    uVar9 = (ulong)*(uint *)(*puVar1 + 0x24);
    param_2 = 0x18;
    func_0x00010b510134();
  }
  if ((uVar2 >> 0x13 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xe8) + 0x14);
    param_2 = 0x19;
    func_0x00010b510134(0x19);
  }
  if ((uVar2 >> 0x14 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xf0) + 0x14);
    param_2 = 0x1a;
    func_0x00010b510134(0x1a);
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xf8) + 0x28);
    param_2 = 0x1b;
    func_0x00010b510134(0x1b);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5102cc();
    if ((long)uVar9 < 0) {
      lVar8 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar8 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar8);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b50f120; end: 10b50f1c3;  */

void FUN_10b50f120(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = param_4;
  func_0x000107c28094(param_4,param_3);
  uVar1 = 0xaa;
  func_0x000107c280a8(0xaa,uVar3);
  uVar2 = (ulong)((int)param_2[3] + ((int)LZCOUNT((int)param_2[3]) * -9 + 0x160U >> 6) +
                  ((int)LZCOUNT((long)*param_1) * -9 + 0x280U >> 6) + 2);
  func_0x000107c280a8(uVar2,uVar1);
  uVar3 = 1;
  func_0x0001098cc8ac(1,param_1,uVar2,param_4);
  uVar1 = 2;
  func_0x00010b4f2be0(2,param_2,uVar3);
  uVar2 = (ulong)*(uint *)(param_2 + 3);
  uVar3 = param_4;
  func_0x0001001a597c(param_4,uVar1);
  uVar1 = 0x12;
  func_0x0001001a59d0(0x12,uVar3);
  func_0x0001001a59d0(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar2,param_4);
  return;
}



/* Entry: 10b50f1c4; end: 10b50f55f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b50f1c4(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long extraout_x8;
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
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long alStack_58 [3];
  
  lVar5 = (ulong)*(uint *)(param_1 + 0x18) << 1;
  func_0x00010564c19c(alStack_58);
  while (alStack_58[0] != 0) {
    iVar3 = *(int *)(alStack_58[0] + 8);
    lVar6 = alStack_58[0] + 0x10;
    FUN_10b4f2bac();
    lVar6 = lVar6 + (ulong)(((int)LZCOUNT((long)iVar3) * -9 + 0x280U >> 6) + 2);
    lVar5 = lVar6 + lVar5 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6);
    func_0x000107c27d54(alStack_58);
  }
  uVar4 = *(ulong *)(param_1 + 0x38);
  lVar5 = lVar5 + (long)*(int *)(param_1 + 0x40) * 2;
  puVar1 = (ulong *)(param_1 + 0x38);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  for (lVar6 = (long)*(int *)(param_1 + 0x40) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10b51d30c();
    lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x50);
      FUN_10b50f560();
      lVar5 = lVar5 + lVar6 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_10b50e41c(*(undefined8 *)(param_1 + 0x58));
      FUN_10b510114();
      lVar5 = extraout_x8_05 + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_10b509b90(*(undefined8 *)(param_1 + 0x60));
      FUN_10b510114();
      lVar5 = extraout_x8_06 + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      FUN_10b50d3e8(*(undefined8 *)(param_1 + 0x68));
      FUN_10b510114();
      lVar5 = extraout_x8_07 + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      FUN_10b50e56c(*(undefined8 *)(param_1 + 0x70));
      FUN_10b510114();
      lVar5 = extraout_x8_08 + 1;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      FUN_10b509704(*(undefined8 *)(param_1 + 0x78));
      FUN_10b510114();
      lVar5 = extraout_x8_09 + 1;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      FUN_10b5104dc(*(undefined8 *)(param_1 + 0x80));
      FUN_10b510114();
      lVar5 = extraout_x8_10 + 1;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      FUN_10b50d668(*(undefined8 *)(param_1 + 0x88));
      FUN_10b510114();
      lVar5 = extraout_x8 + 1;
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      FUN_10b511838(*(undefined8 *)(param_1 + 0x90));
      FUN_10b510114();
      lVar5 = extraout_x8_11 + 1;
    }
    if ((uVar2 >> 9 & 1) != 0) {
      FUN_10b510768(*(undefined8 *)(param_1 + 0x98));
      FUN_10b510114();
      lVar5 = extraout_x8_12 + 1;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      FUN_10b5109f0(*(undefined8 *)(param_1 + 0xa0));
      FUN_10b510114();
      lVar5 = extraout_x8_13 + 1;
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      FUN_10b5111c0(*(undefined8 *)(param_1 + 0xa8));
      FUN_10b510114();
      lVar5 = extraout_x8_14 + 1;
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      FUN_10b510e8c(*(undefined8 *)(param_1 + 0xb0));
      FUN_10b510114();
      lVar5 = extraout_x8_15 + 2;
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      FUN_10b51155c(*(undefined8 *)(param_1 + 0xb8));
      FUN_10b510114();
      lVar5 = extraout_x8_16 + 2;
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      FUN_10b5090f0(*(undefined8 *)(param_1 + 0xc0));
      FUN_10b510114();
      lVar5 = extraout_x8_17 + 2;
    }
    if ((uVar2 >> 0xf & 1) != 0) {
      FUN_10b50a108(*(undefined8 *)(param_1 + 200));
      FUN_10b510114();
      lVar5 = extraout_x8_00 + 2;
    }
  }
  if ((uVar2 & 0x3f0000) != 0) {
    if ((uVar2 >> 0x10 & 1) != 0) {
      FUN_10b50e6fc(*(undefined8 *)(param_1 + 0xd0));
      FUN_10b510114();
      lVar5 = extraout_x8_18 + 2;
    }
    if ((uVar2 >> 0x11 & 1) != 0) {
      FUN_10b511b20(*(undefined8 *)(param_1 + 0xd8));
      FUN_10b510114();
      lVar5 = extraout_x8_19 + 2;
    }
    if ((uVar2 >> 0x12 & 1) != 0) {
      FUN_10b511ef4(*(undefined8 *)(param_1 + 0xe0));
      FUN_10b510114();
      lVar5 = extraout_x8_20 + 2;
    }
    if ((uVar2 >> 0x13 & 1) != 0) {
      func_0x00010b50e09c(*(undefined8 *)(param_1 + 0xe8));
      FUN_10b510114();
      lVar5 = extraout_x8_21 + 2;
    }
    if ((uVar2 >> 0x14 & 1) != 0) {
      FUN_10b510c38(*(undefined8 *)(param_1 + 0xf0));
      FUN_10b510114();
      lVar5 = extraout_x8_22 + 2;
    }
    if ((uVar2 >> 0x15 & 1) != 0) {
      FUN_10b50d8d4(*(undefined8 *)(param_1 + 0xf8));
      FUN_10b510114();
      lVar5 = extraout_x8_01 + 2;
    }
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    func_0x00010b51017c((int)LZCOUNT((long)*(int *)(param_1 + 0x100)) * 9);
    lVar5 = lVar5 + extraout_x8_02 + 1;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    func_0x00010b51017c((int)LZCOUNT(*(int *)(param_1 + 0x104)) * 9);
    lVar5 = lVar5 + extraout_x8_03;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    func_0x00010b51017c((int)LZCOUNT(*(int *)(param_1 + 0x108)) * 9);
    lVar5 = lVar5 + extraout_x8_04;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b50f560; end: 10b50f587;  */

long FUN_10b50f560(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5b5620();
  func_0x00010b51017c((int)LZCOUNT((int)param_1) * 9);
  return param_1 + extraout_x8;
}



/* Entry: 10b50f588; end: 10b50fa1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b50f588(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_10b51003c(param_1 + 0x18,param_2 + 0x18);
  if (*(int *)(param_2 + 0x40) != 0) {
    func_0x000107c303c4(param_1 + 0x38,param_2 + 0x38);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fb3c(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10b5b5a30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar3;
        FUN_10b50fb78(uVar3,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        func_0x00010b50e2d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fbdc(uVar3,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_10b509ce0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fc18(uVar3,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        func_0x00010b50d280();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar3;
        FUN_10b50fc48(uVar3,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        func_0x00010b50e45c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fcac(uVar3,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        func_0x00010b509508();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fcdc(uVar3,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        func_0x00010b5102d8();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fd0c(uVar3,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        func_0x00010b50d48c();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fd3c(uVar3,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar2;
      }
      else {
        FUN_10b5118a4();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fd6c(uVar3,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar2;
      }
      else {
        func_0x00010b5105d4();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fd9c(uVar3,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar2;
      }
      else {
        func_0x00010b510854();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fdcc(uVar3,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar2;
      }
      else {
        FUN_10b511258();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fdfc(uVar3,*(undefined8 *)(param_2 + 0xb0));
        *(ulong *)(param_1 + 0xb0) = uVar2;
      }
      else {
        func_0x00010b510cc8();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fe2c(uVar3,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar2;
      }
      else {
        FUN_10b5115f4();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fe5c(uVar3,*(undefined8 *)(param_2 + 0xc0));
        *(ulong *)(param_1 + 0xc0) = uVar2;
      }
      else {
        func_0x00010b508598();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fe98(uVar3,*(undefined8 *)(param_2 + 200));
        *(ulong *)(param_1 + 200) = uVar2;
      }
      else {
        FUN_10b50a1a0();
      }
    }
  }
  if ((uVar1 & 0x3f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar2 = uVar3;
        FUN_10b50fec8(uVar3,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar2;
      }
      else {
        FUN_10b50e7b0();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
        uVar2 = uVar3;
        func_0x00010b50ff4c(uVar3,*(undefined8 *)(param_2 + 0xd8));
        *(ulong *)(param_1 + 0xd8) = uVar2;
      }
      else {
        FUN_10b511b8c();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        uVar2 = uVar3;
        func_0x00010b50ff7c(uVar3,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar2;
      }
      else {
        FUN_10b511fb4();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) {
        uVar2 = uVar3;
        func_0x00010b50ffac(uVar3,*(undefined8 *)(param_2 + 0xe8));
        *(ulong *)(param_1 + 0xe8) = uVar2;
      }
      else {
        FUN_10b50e124();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        uVar2 = uVar3;
        func_0x00010b50ffdc(uVar3,*(undefined8 *)(param_2 + 0xf0));
        *(ulong *)(param_1 + 0xf0) = uVar2;
      }
      else {
        func_0x00010b510ac8();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        func_0x00010b51000c(uVar3,*(undefined8 *)(param_2 + 0xf8));
        *(ulong *)(param_1 + 0xf8) = uVar3;
      }
      else {
        FUN_10b50d97c();
      }
    }
  }
  if (*(int *)(param_2 + 0x100) != 0) {
    *(int *)(param_1 + 0x100) = *(int *)(param_2 + 0x100);
  }
  if (*(int *)(param_2 + 0x104) != 0) {
    *(int *)(param_1 + 0x104) = *(int *)(param_2 + 0x104);
  }
  if (*(int *)(param_2 + 0x108) != 0) {
    *(int *)(param_1 + 0x108) = *(int *)(param_2 + 0x108);
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



/* Entry: 10b50fa1c; end: 10b50fa3b;  */

void FUN_10b50fa1c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b5101ac();
  }
  else {
    func_0x00010b5101b4();
  }
  *puVar1 = &PTR_FUN_110cf8640;
  puVar1[1] = param_2;
  func_0x00010b5102c0();
  return;
}



/* Entry: 10b50fa3c; end: 10b50fb77;  */

void FUN_10b50fa3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5101ac();
  }
  else {
    func_0x00010b5101b4();
  }
  *puVar1 = &PTR_FUN_110cf8640;
  puVar1[1] = param_1;
  func_0x00010b5102c0();
  return;
}



/* Entry: 10b50fb78; end: 10b50fbdb;  */

undefined8 * FUN_10b50fb78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5101ac();
  }
  else {
    func_0x00010b5101b4();
  }
  *puVar1 = &PTR_FUN_110cf8640;
  puVar1[1] = param_1;
  func_0x00010b5102c0();
  func_0x00010b50e2d4();
  return puVar1;
}



/* Entry: 10b50fbdc; end: 10b50fc47;  */

undefined8 * FUN_10b50fbdc(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010b510188();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    param_2 = 0x40;
    FUN_10b4d80e0();
  }
  func_0x00010b510194();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_FUN_110cf7978;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  unaff_x20[2] = lVar2;
  *(undefined4 *)((long)unaff_x20 + 0x3c) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  unaff_x20[4] = *(undefined8 *)(param_3 + 0x20);
  unaff_x20[3] = uVar5;
  unaff_x20[6] = uVar4;
  unaff_x20[5] = uVar3;
  *(undefined4 *)(unaff_x20 + 7) = uVar1;
  return unaff_x20;
}



/* Entry: 10b50fc48; end: 10b50fcab;  */

undefined8 * FUN_10b50fc48(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5101ac();
  }
  else {
    func_0x00010b5101b4();
  }
  *puVar1 = &PTR_FUN_110cf8690;
  puVar1[1] = param_1;
  func_0x00010b5102c0();
  func_0x00010b50e45c();
  return puVar1;
}



/* Entry: 10b50fcac; end: 10b50fec7;  */

undefined8 * FUN_10b50fcac(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010b510188();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b510224();
  }
  else {
    func_0x00010b5101dc();
  }
  func_0x00010b510194();
  *param_1 = &PTR_FUN_110cf78d0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b509508();
  return param_1;
}



/* Entry: 10b50fec8; end: 10b50ff4b;  */

undefined8 * FUN_10b50fec8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b510188();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b510224();
  }
  else {
    func_0x00010b5101dc();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110cf86e0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  lVar1 = unaff_x19 + 0x18;
  func_0x000107c2809c();
  param_1[3] = lVar1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 10b50ff4c; end: 10b51003b;  */

undefined8 * FUN_10b50ff4c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  func_0x00010b510188();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5101ac();
  }
  else {
    func_0x00010b51014c();
  }
  func_0x00010b510194();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf8e90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b51003c; end: 10b510113;  */

void FUN_10b51003c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long alStack_58 [3];
  
  plVar2 = alStack_58;
  func_0x00010564c19c();
  while (lVar1 = alStack_58[0], alStack_58[0] != 0) {
    func_0x00010b510214();
    if (plVar2 == (long *)0x0) {
      uVar3 = (ulong)((int)*param_1 + 1);
      plVar2 = param_1;
      func_0x000105689120(param_1,uVar3);
      if ((int)plVar2 != 0) {
        func_0x00010b510214();
        param_2 = uVar3;
      }
      plVar2 = param_1;
      func_0x000107c27d64(param_1,0x30);
      *(int *)(plVar2 + 1) = *(int *)(lVar1 + 8);
      lVar4 = param_1[3];
      plVar2[2] = (long)&PTR_FUN_110cfba88;
      plVar2[3] = lVar4;
      plVar2[5] = 0;
      func_0x0001056891b0(param_1,param_2,plVar2);
      *(int *)param_1 = (int)*param_1 + 1;
    }
    param_2 = lVar1 + 0x10;
    FUN_10b51e194(plVar2 + 2);
    plVar2 = alStack_58;
    func_0x000107c27d54();
  }
  return;
}



/* Entry: 10b510114; end: 10b51032b;  */

void FUN_10b510114(void)

{
  return;
}



/* Entry: 10b51032c; end: 10b510353;  */

long FUN_10b51032c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510354; end: 10b5103a3;  */

undefined8 * FUN_10b510354(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf8938;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  func_0x00010b5102d8(param_1,param_3);
  return param_1;
}



/* Entry: 10b5103a4; end: 10b5103a7;  */

long FUN_10b5103a4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5103a8; end: 10b5103bb;  */

void FUN_10b5103a8(void)

{
  FUN_10b51032c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5103bc; end: 10b5103df;  */

undefined ** FUN_10b5103bc(void)

{
  return &PTR_DAT_110cf8978;
}



/* Entry: 10b5103e0; end: 10b5104db;  */

long * FUN_10b5103e0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if (param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b5105a8();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5105c8();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[3] != 0) {
    FUN_10b5105a8();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b5105c8();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((char)param_1[4] == '\x01') {
    FUN_10b5105a8();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5105bc();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    FUN_10b5105a8();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b5105bc();
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



/* Entry: 10b5104dc; end: 10b51055b;  */

long FUN_10b5104dc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2 + (ulong)*(byte *)(param_1 + 0x21) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b51055c; end: 10b5105a7;  */

void FUN_10b51055c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8938;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5105a8; end: 10b510607;  */

ulong * FUN_10b5105a8(void)

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



/* Entry: 10b510608; end: 10b510633;  */

long FUN_10b510608(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510634; end: 10b510683;  */

undefined8 * FUN_10b510634(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf89e0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5105d4(param_1,param_3);
  return param_1;
}



/* Entry: 10b510684; end: 10b510687;  */

long FUN_10b510684(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510688; end: 10b51069b;  */

void FUN_10b510688(void)

{
  FUN_10b510608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51069c; end: 10b5106bb;  */

undefined ** FUN_10b51069c(void)

{
  return &PTR_DAT_110cf8a20;
}



/* Entry: 10b5106bc; end: 10b510767;  */

long * FUN_10b5106bc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b51083c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b510848();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b51083c();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b510848();
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



/* Entry: 10b510768; end: 10b5107df;  */

long FUN_10b510768(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5107e0; end: 10b510817;  */

void FUN_10b5107e0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5106a8();
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



/* Entry: 10b510818; end: 10b510887;  */

undefined1  [16] FUN_10b510818(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x18);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x18);
  return auVar6;
}



/* Entry: 10b510888; end: 10b5108af;  */

long FUN_10b510888(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5108b0; end: 10b5108fb;  */

undefined8 * FUN_10b5108b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf8a90;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b510854(param_1,param_3);
  return param_1;
}



/* Entry: 10b5108fc; end: 10b5108ff;  */

long FUN_10b5108fc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510900; end: 10b510913;  */

void FUN_10b510900(void)

{
  FUN_10b510888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b510914; end: 10b510933;  */

undefined ** FUN_10b510914(void)

{
  return &PTR_DAT_110cf8ad0;
}



/* Entry: 10b510934; end: 10b5109ef;  */

long * FUN_10b510934(long *param_1,long *param_2,long *param_3)

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
    func_0x00010b510abc();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 2);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(plVar6,uVar2);
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b510abc();
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



/* Entry: 10b5109f0; end: 10b510a6b;  */

ulong FUN_10b5109f0(long param_1)

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



/* Entry: 10b510a6c; end: 10b510ab3;  */

void FUN_10b510a6c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8a90;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b510ab4; end: 10b510aef;  */

void FUN_10b510ab4(void)

{
  return;
}



/* Entry: 10b510af0; end: 10b510b1b;  */

long FUN_10b510af0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510b1c; end: 10b510b67;  */

undefined8 * FUN_10b510b1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf8b38;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b510ac8(param_1,param_3);
  return param_1;
}



/* Entry: 10b510b68; end: 10b510b6b;  */

long FUN_10b510b68(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510b6c; end: 10b510b7f;  */

void FUN_10b510b6c(void)

{
  FUN_10b510af0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b510b80; end: 10b510b9f;  */

undefined ** FUN_10b510b80(void)

{
  return &PTR_DAT_110cf8b78;
}



/* Entry: 10b510ba0; end: 10b510c37;  */

long * FUN_10b510ba0(long param_1,long *param_2,long *param_3)

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



/* Entry: 10b510c38; end: 10b510c87;  */

long FUN_10b510c38(long param_1)

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



/* Entry: 10b510c88; end: 10b510cbf;  */

void FUN_10b510c88(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b510b8c();
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



/* Entry: 10b510cc0; end: 10b510d0b;  */

void FUN_10b510cc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110cf8b38;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b510d0c; end: 10b510d33;  */

long FUN_10b510d0c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510d34; end: 10b510d83;  */

undefined8 * FUN_10b510d34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf8be0;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x00010b510cc8(param_1,param_3);
  return param_1;
}



/* Entry: 10b510d84; end: 10b510d87;  */

long FUN_10b510d84(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b510d88; end: 10b510d9b;  */

void FUN_10b510d88(void)

{
  FUN_10b510d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b510d9c; end: 10b510dbf;  */

undefined ** FUN_10b510d9c(void)

{
  return &PTR_DAT_110cf8c20;
}



/* Entry: 10b510dc0; end: 10b510e8b;  */

long * FUN_10b510dc0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar6 = plVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar6 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar1);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar1 = param_3;
    func_0x000107c28094(param_3,plVar6);
    plVar6 = (long *)(ulong)*(byte *)(param_1 + 0x18);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x000107c280a8(plVar6,uVar2);
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
    if (*param_3 - (long)plVar6 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar6) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar6 + (long)iVar8;
        plVar6 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar6 + (long)iVar7);
    }
    _memcpy(plVar6,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar6 + (long)(int)uVar4);
  }
  return plVar6;
}



/* Entry: 10b510e8c; end: 10b510f0b;  */

long FUN_10b510e8c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b510f0c; end: 10b510f57;  */

void FUN_10b510f0c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8be0;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}


