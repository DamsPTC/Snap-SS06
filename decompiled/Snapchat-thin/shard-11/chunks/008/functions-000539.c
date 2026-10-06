/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10892a898; end: 10892a9ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10892a898(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar3 = uVar4;
        func_0x000107c2a26c(uVar4,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = uVar4;
        func_0x00010890161c(uVar4,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x0001088bc924();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar3 = uVar4;
        FUN_10892aa80(uVar4,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        func_0x00010892a2cc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010890161c(uVar4,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x0001088bc924();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != iVar2) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
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



/* Entry: 10892a9f0; end: 10892aa27;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10892a9f0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10892a600();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar3 = uVar4;
        func_0x000107c2a26c(uVar4,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = uVar4;
        func_0x00010890161c(uVar4,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x0001088bc924();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar3 = uVar4;
        FUN_10892aa80(uVar4,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        func_0x00010892a2cc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010890161c(uVar4,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x0001088bc924();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != iVar2) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
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



/* Entry: 10892aa28; end: 10892aa37;  */

void FUN_10892aa28(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110a98e20;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10892aa38; end: 10892aa7f;  */

void FUN_10892aa38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a98e20;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10892aa80; end: 10892aaf3;  */

undefined8 * FUN_10892aa80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a98e20;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010892a2cc();
  return puVar1;
}



/* Entry: 10892aaf4; end: 10892ab33;  */

void FUN_10892aaf4(void)

{
  return;
}



/* Entry: 10892ab34; end: 10892ac0f;  */

void FUN_10892ab34(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010892b1d4();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010892ab5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df71fd0)[extraout_x8] * 4 + 0x10892ab60))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10892ac10; end: 10892acc3;  */

undefined8 * FUN_10892ac10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *puVar2 = param_2;
  *param_1 = &PTR_DAT_110a98f98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
    func_0x00010892b1bc();
    func_0x00010892b098();
    break;
  case 2:
    func_0x00010892b1bc();
    func_0x00010892b0d4();
    break;
  case 3:
    func_0x00010892b1bc();
    func_0x00010892b110();
    break;
  case 4:
    func_0x00010892b1bc();
    func_0x00010892b14c();
    break;
  default:
    goto LAB_10892acb0;
  }
  param_1[2] = puVar2;
LAB_10892acb0:
  return param_1;
}



/* Entry: 10892acc4; end: 10892acf3;  */

long FUN_10892acc4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892acf4(param_1);
  return param_1;
}



/* Entry: 10892acf4; end: 10892ad07;  */

void FUN_10892acf4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010892b1d4();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010892ab5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df71fd0)[extraout_x8] * 4 + 0x10892ab60))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10892ad08; end: 10892ad1b;  */

void FUN_10892ad08(void)

{
  FUN_10892acc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892ad1c; end: 10892ad27;  */

undefined ** FUN_10892ad1c(void)

{
  return &PTR_DAT_110a98fd8;
}



/* Entry: 10892ad28; end: 10892ae73;  */

void FUN_10892ad28(long param_1)

{
  ulong *puVar1;
  
  FUN_10892ab34();
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



/* Entry: 10892ae74; end: 10892aed3;  */

void FUN_10892ae74(void)

{
  func_0x00010892c97c();
  FUN_10892b188();
  return;
}



/* Entry: 10892aed4; end: 10892aed7;  */

void FUN_10892aed4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar3 = param_1;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10892ab34();
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892cae8();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b098();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892c16c();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b0d4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892b63c();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b110();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892ba94();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b14c();
      break;
    default:
      goto LAB_10892b010;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
LAB_10892b010:
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



/* Entry: 10892aed8; end: 10892b04b;  */

void FUN_10892aed8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar3 = param_1;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10892ab34();
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892cae8();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b098();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892c16c();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b0d4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892b63c();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b110();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010892b1a4();
        FUN_10892ba94();
        goto LAB_10892b010;
      }
      func_0x00010892b1f4();
      func_0x00010892b14c();
      break;
    default:
      goto LAB_10892b010;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
LAB_10892b010:
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



/* Entry: 10892b04c; end: 10892b053;  */

void FUN_10892b04c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_DAT_110a98f98;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 10892b054; end: 10892b187;  */

void FUN_10892b054(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110a98f98;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10892b188; end: 10892b20b;  */

long FUN_10892b188(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10892b20c; end: 10892b2c3;  */

undefined8 * FUN_10892b20c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a99058;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  param_1[7] = *(undefined8 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 10892b2c4; end: 10892b2f7;  */

long FUN_10892b2c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892b2f8(param_1);
  return param_1;
}



/* Entry: 10892b2f8; end: 10892b33f;  */

void FUN_10892b2f8(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892b340; end: 10892b343;  */

long FUN_10892b340(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892b2f8(param_1);
  return param_1;
}



/* Entry: 10892b344; end: 10892b357;  */

void FUN_10892b344(void)

{
  FUN_10892b2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892b358; end: 10892b363;  */

undefined ** FUN_10892b358(void)

{
  return &PTR_DAT_110a99098;
}



/* Entry: 10892b364; end: 10892b3d3;  */

void FUN_10892b364(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 10892b3d4; end: 10892b637;  */

long * FUN_10892b3d4(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
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
    func_0x00010892b804(1,param_1[5],*(undefined4 *)(param_1[5] + 0x18));
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x00010892b804(2,param_1[6],*(undefined4 *)(param_1[6] + 0x18));
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[7] != 0) {
    func_0x00010892b7f8();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010892b810();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    func_0x00010892b7f8();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010892b810();
  }
  puVar9 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10892b4bc;
    puVar4 = (undefined8 *)*puVar9;
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10892b4bc;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f4ec5a6);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,5,puVar9,param_2);
  param_2 = plVar2;
LAB_10892b4bc:
  uVar6 = param_1[4] & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar6 + 8);
  }
  plVar2 = param_2;
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,6,uVar6,param_2);
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar2 + (long)iVar10;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar8);
    }
    _memcpy(plVar2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar6);
  }
  return plVar2;
}



/* Entry: 10892b638; end: 10892b63b;  */

void FUN_10892b638(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
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



/* Entry: 10892b63c; end: 10892b787;  */

void FUN_10892b63c(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
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



/* Entry: 10892b788; end: 10892b78f;  */

void FUN_10892b788(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110a99058;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10892b790; end: 10892b7eb;  */

void FUN_10892b790(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110a99058;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10892b7ec; end: 10892b81b;  */

void FUN_10892b7ec(void)

{
  return;
}



/* Entry: 10892b81c; end: 10892b88b;  */

undefined8 * FUN_10892b81c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a99120;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10892b88c; end: 10892b8bf;  */

long FUN_10892b88c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10892b8c0; end: 10892b8c3;  */

long FUN_10892b8c0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10892b8c4; end: 10892b8d7;  */

void FUN_10892b8c4(void)

{
  FUN_10892b88c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892b8d8; end: 10892b8e3;  */

undefined ** FUN_10892b8d8(void)

{
  return &PTR_DAT_110a99160;
}



/* Entry: 10892b8e4; end: 10892b923;  */

void FUN_10892b8e4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10892b924; end: 10892ba8f;  */

long * FUN_10892b924(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  for (uVar6 = (ulong)(*(uint *)(param_1 + 0x18) &
                      ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    func_0x00010892bb50();
    param_2 = param_3;
    FUN_108922b58(param_3,2,*extraout_x8);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
    uVar6 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar3 = uVar4 + 8;
  }
  if ((long)(int)uVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  while( true ) {
    iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)uVar6;
    uVar6 = (ulong)(uint)(iVar5 - iVar7);
    if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
    func_0x00010b4d5738();
    lVar3 = (long)param_2 + (long)iVar7;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 10892ba90; end: 10892ba93;  */

void FUN_10892ba90(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10892ba94; end: 10892baeb;  */

void FUN_10892ba94(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10892baec; end: 10892baf3;  */

void FUN_10892baec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110a99120;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  return;
}



/* Entry: 10892baf4; end: 10892bb3f;  */

void FUN_10892baf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110a99120;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  return;
}



/* Entry: 10892bb40; end: 10892bb67;  */

void FUN_10892bb40(void)

{
  return;
}



/* Entry: 10892bb68; end: 10892bc53;  */

undefined8 * FUN_10892bb68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a991f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar3 = param_3 + 0x18;
  func_0x00010892c3d0();
  param_1[3] = lVar3;
  lVar3 = param_3 + 0x20;
  func_0x00010892c3d0();
  param_1[4] = lVar3;
  lVar3 = param_3 + 0x28;
  func_0x00010892c3d0();
  param_1[5] = lVar3;
  lVar3 = param_3 + 0x30;
  func_0x00010892c3d0();
  param_1[6] = lVar3;
  lVar3 = param_3 + 0x38;
  func_0x00010892c3d0();
  param_1[7] = lVar3;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010892c41c();
  }
  param_1[8] = lVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010892c41c();
  }
  param_1[9] = lVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010892c41c();
  }
  param_1[10] = lVar3;
  uVar2 = *(undefined4 *)(param_3 + 0x58);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)(param_3 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  return param_1;
}



/* Entry: 10892bc54; end: 10892bc87;  */

long FUN_10892bc54(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892bc88(param_1);
  return param_1;
}



/* Entry: 10892bc88; end: 10892bcf7;  */

void FUN_10892bc88(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892bcf8; end: 10892bcfb;  */

long FUN_10892bcf8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892bc88(param_1);
  return param_1;
}



/* Entry: 10892bcfc; end: 10892bd0f;  */

void FUN_10892bcfc(void)

{
  FUN_10892bc54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892bd10; end: 10892bd1b;  */

undefined ** FUN_10892bd10(void)

{
  return &PTR_DAT_110a99230;
}



/* Entry: 10892bd1c; end: 10892bdbf;  */

void FUN_10892bd1c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10892bdc0; end: 10892c01b;  */

long * FUN_10892bdc0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long unaff_x22;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  plVar8 = param_2;
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)param_1[8];
    plVar2 = (long *)0x1;
    func_0x00010892c3c4(1,param_2,(int)param_2[3]);
    plVar8 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)param_1[9];
    plVar2 = (long *)0x2;
    func_0x00010892c3c4(2,param_2,(int)param_2[3]);
    plVar8 = plVar2;
  }
  func_0x00010892c3f8(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10892be38;
  }
  else if ((int)param_2 != 0) {
LAB_10892be38:
    func_0x00010892c3d8();
    param_2 = (long *)0x3;
    plVar2 = param_3;
    func_0x00010892c3b8();
    plVar8 = plVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)param_1[10];
    plVar2 = (long *)0x4;
    func_0x00010892c3c4(4,param_2,(int)param_2[3]);
    plVar8 = plVar2;
  }
  func_0x00010892c3f8(param_1[4]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10892be90;
  }
  else if ((int)param_2 != 0) {
LAB_10892be90:
    func_0x00010892c3d8();
    param_2 = (long *)0x5;
    plVar2 = param_3;
    func_0x00010892c3b8();
    plVar8 = plVar2;
  }
  plVar7 = plVar2;
  if ((int)param_1[0xb] != 0) {
    func_0x00010892c438();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 0xb);
    param_2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x000107c280b8();
    plVar8 = plVar7;
  }
  func_0x00010892c3f8(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10892befc;
  }
  else if ((int)param_2 != 0) {
LAB_10892befc:
    func_0x00010892c3d8();
    param_2 = (long *)0x7;
    plVar7 = param_3;
    func_0x00010892c3b8();
    plVar8 = plVar7;
  }
  func_0x00010892c3f8(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10892bf3c;
  }
  else if ((int)param_2 != 0) {
LAB_10892bf3c:
    func_0x00010892c3d8();
    param_2 = (long *)0x8;
    plVar7 = param_3;
    func_0x00010892c3b8();
    plVar8 = plVar7;
  }
  func_0x00010892c3f8(param_1[7]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10892bf98;
  }
  else if ((int)param_2 == 0) goto LAB_10892bf98;
  func_0x00010892c3d8();
  plVar7 = param_3;
  func_0x00010892c3b8(param_3,9);
  plVar8 = plVar7;
LAB_10892bf98:
  if (*(char *)((long)param_1 + 0x5c) == '\x01') {
    func_0x00010892c438();
    plVar8 = (long *)(ulong)*(byte *)((long)param_1 + 0x5c);
    uVar3 = 0x58;
    func_0x000107c280a8(0x58,plVar7);
    func_0x000107c280a8(plVar8,uVar3);
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar8;
  }
  uVar6 = param_1[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar8 < (long)(int)uVar5) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar8) + 0x10;
      iVar9 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar9 - iVar10);
      if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar8 + (long)iVar10;
      plVar8 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar8 + (long)iVar9);
  }
  _memcpy(plVar8,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar8 + (long)(int)uVar5);
}



/* Entry: 10892c01c; end: 10892c167;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10892c01c(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1;
  func_0x00010892c410(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar2 = (int)lVar4 + 1;
  }
  func_0x00010892c410(*(undefined8 *)(param_1 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010892c3e0();
  }
  func_0x00010892c410(*(undefined8 *)(param_1 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010892c3e0();
  }
  func_0x00010892c410(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010892c3e0();
  }
  func_0x00010892c410(*(undefined8 *)(param_1 + 0x38));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010892c3e0();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x40));
      func_0x00010892c3e0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x48));
      func_0x00010892c3e0();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x50));
      func_0x00010892c3e0();
    }
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x5c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10892c168; end: 10892c16b;  */

void FUN_10892c168(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  uVar3 = *(ulong *)(param_1 + 8);
  lVar2 = param_2;
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 == 0) {
        func_0x00010892c424(0,*(undefined8 *)(param_2 + 0x40));
        *(long *)(param_1 + 0x40) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 == 0) {
        func_0x00010892c424(0,*(undefined8 *)(param_2 + 0x48));
        *(long *)(param_1 + 0x48) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      if (lVar2 == 0) {
        func_0x00010892c424(0,*(undefined8 *)(param_2 + 0x50));
        *(long *)(param_1 + 0x50) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 1;
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



/* Entry: 10892c16c; end: 10892c34b;  */

void FUN_10892c16c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  uVar3 = *(ulong *)(param_1 + 8);
  lVar2 = param_2;
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010892c404(*(undefined8 *)(param_2 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892c3ec();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 == 0) {
        func_0x00010892c424(0,*(undefined8 *)(param_2 + 0x40));
        *(long *)(param_1 + 0x40) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 == 0) {
        func_0x00010892c424(0,*(undefined8 *)(param_2 + 0x48));
        *(long *)(param_1 + 0x48) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      if (lVar2 == 0) {
        func_0x00010892c424(0,*(undefined8 *)(param_2 + 0x50));
        *(long *)(param_1 + 0x50) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 1;
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



/* Entry: 10892c34c; end: 10892c353;  */

void FUN_10892c34c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x60);
  }
  *puVar1 = &PTR_FUN_110a991f0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x55) = 0;
  return;
}



/* Entry: 10892c354; end: 10892c3b7;  */

void FUN_10892c354(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110a991f0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x55) = 0;
  return;
}



/* Entry: 10892c3b8; end: 10892c443;  */

long * FUN_10892c3b8(long *param_1,undefined8 param_2)

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
  long *unaff_x21;
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
    if (lVar7 <= lVar10 + ~((long)unaff_x21 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x21 + 2;
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
     ((*param_1 - (long)unaff_x21) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x21);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x21 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x21) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x21 + (long)iVar9;
      unaff_x21 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar8);
  }
  _memcpy(unaff_x21);
  return (long *)((long)unaff_x21 + (long)iVar8);
}



/* Entry: 10892c444; end: 10892c53f;  */

undefined8 * FUN_10892c444(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a992c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x00010892cd98();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00010892cd98();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x00010892cd98();
  param_1[5] = lVar2;
  lVar2 = param_3 + 0x30;
  func_0x00010892cd98();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010892cd98();
  param_1[7] = lVar2;
  lVar2 = param_3 + 0x40;
  func_0x00010892cd98();
  param_1[8] = lVar2;
  lVar2 = param_3 + 0x48;
  func_0x00010892cd98();
  param_1[9] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010892ce1c();
  }
  param_1[10] = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010892ce1c();
  }
  param_1[0xb] = lVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010892ce1c();
  }
  param_1[0xc] = lVar2;
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_3 + 0x68);
  return param_1;
}



/* Entry: 10892c540; end: 10892c573;  */

long FUN_10892c540(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892c574(param_1);
  return param_1;
}



/* Entry: 10892c574; end: 10892c5f3;  */

void FUN_10892c574(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892c5f4; end: 10892c5f7;  */

long FUN_10892c5f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10892c574(param_1);
  return param_1;
}



/* Entry: 10892c5f8; end: 10892c60b;  */

void FUN_10892c5f8(void)

{
  FUN_10892c540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892c60c; end: 10892c617;  */

undefined ** FUN_10892c60c(void)

{
  return &PTR_DAT_110a99300;
}



/* Entry: 10892c618; end: 10892c6c7;  */

void FUN_10892c618(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x60));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x68) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10892c6c8; end: 10892cae3;  */

long * FUN_10892c6c8(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar10 = (undefined8 *)(ulong)uVar1;
  plVar2 = param_1;
  plVar5 = param_2;
  if ((uVar1 & 1) != 0) {
    plVar5 = (long *)param_1[10];
    param_2 = (long *)0x1;
    func_0x00010892cdc0(1,plVar5,(int)plVar5[3]);
    plVar2 = param_2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar5 = (long *)param_1[0xb];
    plVar2 = (long *)0x2;
    func_0x00010892cdc0(2,plVar5,(int)plVar5[3]);
    param_2 = plVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar5 = (long *)param_1[0xc];
    plVar2 = (long *)0x3;
    func_0x00010892cdc0(3,plVar5,(int)plVar5[3]);
    param_2 = plVar2;
  }
  func_0x00010892cdf0(param_1[3]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (undefined8 *)*puVar10;
      goto LAB_10892c760;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)plVar5 != 0) {
LAB_10892c760:
      func_0x00010892cda0(puVar3);
      plVar5 = (long *)0x4;
      plVar2 = param_3;
      func_0x00010892cd8c();
      param_2 = plVar2;
    }
  }
  func_0x00010892cdf0(param_1[4]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (undefined8 *)*puVar10;
      goto LAB_10892c7a0;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)plVar5 != 0) {
LAB_10892c7a0:
      func_0x00010892cda0(puVar3);
      plVar5 = (long *)0x5;
      plVar2 = param_3;
      func_0x00010892cd8c();
      param_2 = plVar2;
    }
  }
  func_0x00010892cdf0(param_1[5]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (undefined8 *)*puVar10;
      goto LAB_10892c7e0;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)plVar5 != 0) {
LAB_10892c7e0:
      func_0x00010892cda0(puVar3);
      plVar5 = (long *)0x7;
      plVar2 = param_3;
      func_0x00010892cd8c();
      param_2 = plVar2;
    }
  }
  func_0x00010892cdf0(param_1[6]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (undefined8 *)*puVar10;
      goto LAB_10892c820;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)plVar5 != 0) {
LAB_10892c820:
      func_0x00010892cda0(puVar3);
      plVar5 = (long *)0x8;
      plVar2 = param_3;
      func_0x00010892cd8c();
      param_2 = plVar2;
    }
  }
  func_0x00010892cdf0(param_1[7]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (undefined8 *)*puVar10;
      goto LAB_10892c860;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)plVar5 != 0) {
LAB_10892c860:
      func_0x00010892cda0(puVar3);
      plVar5 = (long *)0x9;
      plVar2 = param_3;
      func_0x00010892cd8c();
      param_2 = plVar2;
    }
  }
  plVar4 = plVar2;
  if ((char)param_1[0xd] == '\x01') {
    func_0x00010892cdfc();
    plVar4 = (long *)0x50;
    func_0x000107c280a8();
    func_0x00010892ce08();
    plVar5 = plVar2;
    param_2 = plVar4;
  }
  lVar7 = (long)*(char *)((param_1[8] & 0xfffffffffffffffcU) + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)((param_1[8] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar7 != 0) {
    plVar5 = (long *)0xb;
    plVar4 = param_3;
    func_0x000107c280a0();
    param_2 = plVar4;
  }
  func_0x00010892cdf0(param_1[9]);
  if ((long)plVar5 < 0) {
    if (puVar10[1] == 0) goto LAB_10892c910;
    puVar10 = (undefined8 *)*puVar10;
  }
  else if ((int)plVar5 == 0) goto LAB_10892c910;
  func_0x00010892cda0(puVar10);
  plVar4 = param_3;
  func_0x00010892cd8c(param_3,0xc);
  param_2 = plVar4;
LAB_10892c910:
  if (*(char *)((long)param_1 + 0x69) == '\x01') {
    func_0x00010892cdfc();
    param_2 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar4);
    func_0x00010892ce08();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar8 = param_1[1] & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar8 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar7 = *(long *)(uVar8 + 8);
    uVar6 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    lVar7 = uVar8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar6) {
    while( true ) {
      iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar9 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar9 - iVar11);
      if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
      func_0x00010b4d5738();
      lVar7 = (long)param_2 + (long)iVar11;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar9);
  }
  _memcpy(param_2,lVar7,uVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar6);
}



/* Entry: 10892cae4; end: 10892cae7;  */

void FUN_10892cae4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  
  uVar3 = *(ulong *)(param_1 + 8);
  lVar2 = param_2;
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x40));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x48));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      if (lVar2 == 0) {
        func_0x00010892ce14(0,*(undefined8 *)(param_2 + 0x50));
        *(long *)(param_1 + 0x50) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      if (lVar2 == 0) {
        func_0x00010892ce14(0,*(undefined8 *)(param_2 + 0x58));
        *(long *)(param_1 + 0x58) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x60);
      if (lVar2 == 0) {
        func_0x00010892ce14(0,*(undefined8 *)(param_2 + 0x60));
        *(long *)(param_1 + 0x60) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  if (*(char *)(param_2 + 0x69) == '\x01') {
    *(undefined1 *)(param_1 + 0x69) = 1;
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



/* Entry: 10892cae8; end: 10892cd1b;  */

void FUN_10892cae8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  
  uVar3 = *(ulong *)(param_1 + 8);
  lVar2 = param_2;
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x40));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010892cdcc(*(undefined8 *)(param_2 + 0x48));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010892cde4();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      if (lVar2 == 0) {
        func_0x00010892ce14(0,*(undefined8 *)(param_2 + 0x50));
        *(long *)(param_1 + 0x50) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      if (lVar2 == 0) {
        func_0x00010892ce14(0,*(undefined8 *)(param_2 + 0x58));
        *(long *)(param_1 + 0x58) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x60);
      if (lVar2 == 0) {
        func_0x00010892ce14(0,*(undefined8 *)(param_2 + 0x60));
        *(long *)(param_1 + 0x60) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  if (*(char *)(param_2 + 0x69) == '\x01') {
    *(undefined1 *)(param_1 + 0x69) = 1;
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



/* Entry: 10892cd1c; end: 10892cd23;  */

void FUN_10892cd1c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x70);
  }
  *puVar1 = &PTR_FUN_110a992c0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0xd) = 0;
  return;
}



/* Entry: 10892cd24; end: 10892cd8b;  */

void FUN_10892cd24(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x70);
  }
  *puVar1 = &PTR_FUN_110a992c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0xd) = 0;
  return;
}



/* Entry: 10892cd8c; end: 10892ce23;  */

long * FUN_10892cd8c(long *param_1,undefined8 param_2)

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
  long *unaff_x21;
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
    if (lVar7 <= lVar10 + ~((long)unaff_x21 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x21 + 2;
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
     ((*param_1 - (long)unaff_x21) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x21);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x21 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x21) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x21 + (long)iVar9;
      unaff_x21 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar8);
  }
  _memcpy(unaff_x21);
  return (long *)((long)unaff_x21 + (long)iVar8);
}



/* Entry: 10892ce24; end: 10892cf2f;  */

void FUN_10892ce24(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a993b8);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99408);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892e378(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892cf30; end: 10892d03b;  */

void FUN_10892cf30(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99470);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a994c0);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892e4c0(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d03c; end: 10892d147;  */

void FUN_10892d03c(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99528);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99578);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892e620(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d148; end: 10892d253;  */

void FUN_10892d148(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a995e0);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99630);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892e74c(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d254; end: 10892d35f;  */

void FUN_10892d254(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99698);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a996e8);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892e878(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d360; end: 10892d46b;  */

void FUN_10892d360(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99750);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a997a0);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892e9b8(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d46c; end: 10892d577;  */

void FUN_10892d46c(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99808);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99858);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892eafc(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d578; end: 10892d683;  */

void FUN_10892d578(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_DAT_110a99978);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a999c8);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892ec88(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d684; end: 10892d78f;  */

void FUN_10892d684(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99a30);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99a80);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892edc4(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d790; end: 10892d89b;  */

void FUN_10892d790(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99ae8);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99b38);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892eef0(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d89c; end: 10892d9a7;  */

void FUN_10892d89c(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99ba0);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99bf0);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f01c(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892d9a8; end: 10892dab3;  */

void FUN_10892d9a8(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99c58);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99ca8);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f148(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892dab4; end: 10892dbbf;  */

void FUN_10892dab4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_DAT_110a99dc8);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99e18);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f2e0(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892dbc0; end: 10892dccb;  */

void FUN_10892dbc0(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99e80);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99ed0);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f40c(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892dccc; end: 10892ddd7;  */

void FUN_10892dccc(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99f38);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a99f88);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f548(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892ddd8; end: 10892dee3;  */

void FUN_10892ddd8(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a99ff0);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a9a040);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f684(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892dee4; end: 10892dfef;  */

void FUN_10892dee4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a9a0a8);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a9a0f8);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f7b0(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892dff0; end: 10892e0fb;  */

void FUN_10892dff0(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a9a160);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a9a1b0);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892f8ec(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892e0fc; end: 10892e207;  */

void FUN_10892e0fc(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x000107c34b50();
  func_0x000107c34a94();
  func_0x000107c34adc();
  if (param_1 == 0) {
    func_0x00010892fad0();
    func_0x00010892fa50();
    func_0x00010892fac0();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34aac();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000107c34b28();
    func_0x000107c34b34();
    func_0x000107c34b38(&PTR_FUN_110a9a218);
    if (lVar1 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
      do {
        func_0x000107c34ac4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c34ad4();
    func_0x000107c34a90(&PTR_DAT_110a9a268);
    func_0x000107c34a80();
    func_0x000107c34b04();
    func_0x000107c34b00();
    FUN_10892fa2c(&stack0x00000158);
    func_0x000107c34b08();
  }
  func_0x000107c34afc();
  return;
}



/* Entry: 10892e208; end: 10892e217;  */

bool FUN_10892e208(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x000104ae2f28(lVar2,0);
    bVar1 = (int)lVar2 - 1U < 2;
  }
  return bVar1;
}



/* Entry: 10892e218; end: 10892e253;  */

void FUN_10892e218(void)

{
  func_0x00010892fbf0();
  return;
}



/* Entry: 10892e254; end: 10892e257;  */

void FUN_10892e254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a993b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10892e258; end: 10892e26b;  */

void FUN_10892e258(void)

{
  FUN_10892e36c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892e26c; end: 10892e277;  */

void FUN_10892e26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10892e278; end: 10892e28b;  */

void FUN_10892e278(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892e28c; end: 10892e36b;  */

void FUN_10892e28c(int param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_168 [256];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x000107c34b30();
  ppuStack_68 = &PTR_FUN_110a900d8;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  func_0x00010892fbb0();
  if (param_1 == 0) {
    func_0x00010892fb20();
    func_0x00010892fa50();
    func_0x00010892fb10();
    func_0x00010892fab0();
    func_0x00010892fb84();
    func_0x00010892fa6c();
    func_0x00010892fb6c();
    func_0x00010892fb64();
    func_0x00010892fb74();
  }
  else {
    func_0x000107c34b48();
    if (extraout_x8 != 0) {
      do {
        func_0x000107c34ac4();
      } while (extraout_w10 != 0);
    }
    func_0x000107c34b2c();
    func_0x000107c34b24();
    FUN_10884a410(auStack_168);
  }
  FUN_108902850(&ppuStack_68);
  return;
}



/* Entry: 10892e36c; end: 10892e377;  */

void FUN_10892e36c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a993b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10892e378; end: 10892e39b;  */

void FUN_10892e378(long param_1)

{
  func_0x000107c34b3c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10892e39c; end: 10892e39f;  */

void FUN_10892e39c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a99470;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


