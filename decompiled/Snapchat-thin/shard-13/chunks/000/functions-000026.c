/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d7e5ec; end: 109d7e72b;  */

void FUN_109d7e5ec(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7e66c(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7e72c(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7e72c; end: 109d7e7d3;  */

long * FUN_109d7e72c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7e778;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7e7d4(param_1,uVar1);
  func_0x000109d7e66c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7e778:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7e7d4; end: 109d7e92b;  */

void FUN_109d7e7d4(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7e88c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7e92c; end: 109d7ea57;  */

ulong * FUN_109d7e92c(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1[2];
  if ((int)lVar1 == 0) {
    puVar6 = (ulong *)0x0;
    puVar4 = (ulong *)0x0;
  }
  else {
    lVar7 = *param_1;
    FUN_109d2fb48(auStack_e8);
    puVar2 = auStack_e8;
    func_0x000109d74e64(puVar2,0,auStack_e8,auStack_a8,param_2,param_2 + 8);
    uVar9 = (uint)puVar2;
    iVar10 = 1;
    puVar8 = (ulong *)0x0;
    while( true ) {
      uVar9 = (int)lVar1 - 1U & uVar9;
      puVar6 = (ulong *)(lVar7 + (ulong)uVar9 * 8);
      uVar5 = *puVar6;
      if ((uVar5 | 0x1000) != 0xfffffffffffff000) {
        uVar3 = param_2;
        FUN_109d7ea58();
        if ((uVar3 & 1) != 0) {
          puVar4 = (ulong *)0x1;
          param_2 = uVar5;
          goto LAB_109d7ea18;
        }
        uVar5 = *puVar6;
      }
      if (uVar5 == 0xfffffffffffff000) break;
      if (puVar8 != (ulong *)0x0 || uVar5 != 0xffffffffffffe000) {
        puVar6 = puVar8;
      }
      uVar9 = uVar9 + iVar10;
      iVar10 = iVar10 + 1;
      puVar8 = puVar6;
    }
    puVar4 = (ulong *)0x0;
    if (puVar8 != (ulong *)0x0) {
      puVar6 = puVar8;
    }
    param_2 = 0xfffffffffffff000;
  }
LAB_109d7ea18:
  *param_3 = (long)puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  uVar5 = *(ulong *)(param_2 - 0x10);
  if (((uint)uVar5 >> 1 & 1) == 0) {
    puVar6 = (ulong *)(param_2 - 0x10) + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar6 = *(ulong **)(param_2 - 0x20);
  }
  if (*puVar4 != *puVar6) {
    return (ulong *)0x0;
  }
  return (ulong *)(ulong)(puVar4[1] == puVar6[1]);
}



/* Entry: 109d7ea58; end: 109d7ea9f;  */

bool FUN_109d7ea58(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  if (*param_1 != *puVar1) {
    return false;
  }
  return param_1[1] == puVar1[1];
}



/* Entry: 109d7eaa0; end: 109d7ebdb;  */

void FUN_109d7eaa0(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7eb20(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    func_0x000109d7ec78(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7ebdc; end: 109d7ed1f;  */

long * FUN_109d7ebdc(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long alStack_a8 [8];
  long alStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(ulong *)(param_1 + -0x10);
  if (((uint)uVar6 >> 1 & 1) == 0) {
    puVar5 = (ulong *)(param_1 + -0x10) + -(uVar6 >> 2 & 0xf);
  }
  else {
    puVar5 = *(ulong **)(param_1 + -0x20);
  }
  uStack_b8 = puVar5[1];
  uStack_c0 = *puVar5;
  FUN_109d2fb48(alStack_a8);
  plVar2 = alStack_a8;
  plVar3 = alStack_a8;
  plVar4 = alStack_68;
  func_0x000109d74e64(plVar2,0,plVar3,plVar4,&uStack_c0,(ulong)&uStack_c0 | 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  uStack_c8 = 0x109d7ec78;
  uVar1 = *(uint *)(plVar2 + 2);
  if (*(uint *)(plVar2 + 1) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(plVar2 + 1)) - *(int *)((long)plVar2 + 0xc))
    goto LAB_109d7ecc4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  plStack_e0 = alStack_a8;
  puStack_d8 = (undefined1 *)&uStack_c0;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_109d7ed20(plVar2,uVar1);
  func_0x000109d7eb20(plVar2,plVar3,&plStack_e8);
  plVar4 = plStack_e8;
LAB_109d7ecc4:
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  if (*plVar4 != -0x1000) {
    *(int *)((long)plVar2 + 0xc) = *(int *)((long)plVar2 + 0xc) + -1;
  }
  return plVar4;
}



/* Entry: 109d7ed20; end: 109d7ee77;  */

void FUN_109d7ed20(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7edd8(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7ee78; end: 109d7ef4b;  */

undefined8 FUN_109d7ee78(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7ef4c();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7f11c();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7ef2c;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7ef2c:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7ef4c; end: 109d7efe7;  */

void FUN_109d7ef4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_128;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(&uStack_b8);
  uStack_b8 = *param_1;
  puVar1 = &uStack_b8;
  puVar5 = auStack_78;
  puVar6 = param_1 + 2;
  puVar7 = param_1 + 3;
  puVar8 = param_1 + 4;
  uVar4 = 0;
  FUN_109d7efe8(puVar1,0,auStack_b0,puVar5,param_1 + 1,puVar6,puVar7,puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d73d64();
  puVar3 = puVar1;
  uStack_128 = uVar4;
  FUN_109d35318(puVar1,&uStack_128,puVar2,puVar5,*(undefined4 *)puVar6);
  FUN_109d7f08c(puVar1,uStack_128,puVar3,puVar5,puVar7,puVar8,param_1 + 5,param_1 + 6);
  return;
}



/* Entry: 109d7efe8; end: 109d7f08b;  */

void FUN_109d7efe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1;
  uStack_60 = param_2;
  FUN_109d73d64(param_1,&uStack_60,param_3,param_4,*param_5);
  uStack_58 = uStack_60;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_58,uVar1,param_4,*param_6);
  FUN_109d7f08c(param_1,uStack_58,uVar2,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 109d7f08c; end: 109d7f11b;  */

void FUN_109d7f08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  func_0x000109d74504(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  func_0x000109d74504(param_1,&uStack_48,uVar1,param_4,*param_6);
  FUN_109d7d8d4(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7f11c; end: 109d7f1db;  */

bool FUN_109d7f11c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  uVar3 = *puVar1;
  uVar2 = (uint)uVar3;
  if ((uVar2 >> 1 & 1) == 0) {
    puVar4 = puVar1 + -(uVar3 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  if (((*param_1 == *puVar4) && (param_1[1] == puVar4[1])) &&
     ((int)param_1[2] == *(int *)(param_2 + 0x10))) {
    if ((uVar2 >> 1 & 1) == 0) {
      puVar4 = puVar1 + -(uVar3 >> 2 & 0xf);
    }
    else {
      puVar4 = *(ulong **)(param_2 + -0x20);
    }
    if (((param_1[3] == puVar4[2]) && (param_1[4] == puVar4[3])) &&
       ((int)param_1[5] == *(int *)(param_2 + 0x14))) {
      if ((uVar2 >> 1 & 1) == 0) {
        puVar1 = puVar1 + -(uVar3 >> 2 & 0xf);
      }
      else {
        puVar1 = *(ulong **)(param_2 + -0x20);
      }
      return param_1[6] == puVar1[4];
    }
  }
  return false;
}



/* Entry: 109d7f1dc; end: 109d7f32b;  */

void FUN_109d7f1dc(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7f25c(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7f3e4(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7f32c; end: 109d7f3e3;  */

void FUN_109d7f32c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[3] = puVar2[2];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[4] = puVar2[3];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x14);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[6] = puVar1[4];
  return;
}



/* Entry: 109d7f3e4; end: 109d7f48b;  */

long * FUN_109d7f3e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7f430;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7f48c(param_1,uVar1);
  func_0x000109d7f25c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7f430:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7f48c; end: 109d7f5e3;  */

void FUN_109d7f48c(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7f544(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7f5e4; end: 109d7f6b7;  */

undefined8 FUN_109d7f5e4(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7f6b8();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7f888();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7f698;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7f698:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7f6b8; end: 109d7f753;  */

void FUN_109d7f6b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uStack_128;
  undefined4 auStack_b8 [16];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_b8);
  auStack_b8[0] = *param_1;
  puVar1 = auStack_b8;
  puVar5 = auStack_78;
  puVar6 = (undefined8 *)(param_1 + 4);
  puVar7 = param_1 + 6;
  puVar8 = param_1 + 8;
  uVar4 = 0;
  FUN_109d7f754(puVar1,0,(ulong)auStack_b8 | 4,puVar5,param_1 + 2,puVar6,puVar7,puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d73d64();
  puVar3 = puVar1;
  uStack_128 = uVar4;
  FUN_109d73d64(puVar1,&uStack_128,puVar2,puVar5,*puVar6);
  FUN_109d7f7f8(puVar1,uStack_128,puVar3,puVar5,puVar7,puVar8,param_1 + 10,param_1 + 0xc);
  return;
}



/* Entry: 109d7f754; end: 109d7f7f7;  */

void FUN_109d7f754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1;
  uStack_60 = param_2;
  FUN_109d73d64(param_1,&uStack_60,param_3,param_4,*param_5);
  uStack_58 = uStack_60;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_58,uVar1,param_4,*param_6);
  FUN_109d7f7f8(param_1,uStack_58,uVar2,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 109d7f7f8; end: 109d7f887;  */

void FUN_109d7f7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d73d64(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d7735c(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7f888; end: 109d7f933;  */

bool FUN_109d7f888(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (*param_1 == (uint)*(ushort *)(param_2 + 2)) {
    puVar1 = (ulong *)(param_2 + -0x10);
    uVar2 = *puVar1;
    if (((uint)uVar2 >> 1 & 1) == 0) {
      puVar3 = puVar1 + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar3 = *(ulong **)(param_2 + -0x20);
    }
    if ((((*(ulong *)(param_1 + 2) == *puVar3) && (*(ulong *)(param_1 + 4) == puVar3[1])) &&
        (*(ulong *)(param_1 + 6) == puVar3[3])) && (param_1[8] == *(uint *)(param_2 + 0x10))) {
      if (((uint)uVar2 >> 1 & 1) == 0) {
        puVar1 = puVar1 + -(uVar2 >> 2 & 0xf);
      }
      else {
        puVar1 = *(ulong **)(param_2 + -0x20);
      }
      if (*(ulong *)(param_1 + 10) == puVar1[2]) {
        return *(ulong *)(param_1 + 0xc) == puVar1[4];
      }
    }
  }
  return false;
}



/* Entry: 109d7f934; end: 109d7fa83;  */

void FUN_109d7f934(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d7f9b4(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7fb3c(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d7fa84; end: 109d7fb3b;  */

void FUN_109d7fa84(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  *param_1 = (uint)*(ushort *)(param_2 + 2);
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 4) = puVar2[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 6) = puVar2[3];
  param_1[8] = *(uint *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 10) = puVar2[2];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0xc) = puVar1[4];
  return;
}



/* Entry: 109d7fb3c; end: 109d7fbe3;  */

long * FUN_109d7fb3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7fb88;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d7fbe4(param_1,uVar1);
  func_0x000109d7f9b4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7fb88:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d7fbe4; end: 109d7fd3b;  */

void FUN_109d7fbe4(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7fc9c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7fd3c; end: 109d7fe0f;  */

undefined8 FUN_109d7fd3c(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7fe10();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d7ff20();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7fdf0;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7fdf0:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7fe10; end: 109d7fe8f;  */

void FUN_109d7fe10(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_f8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  puVar6 = (undefined4 *)(param_1 + 4);
  lVar7 = param_1 + 8;
  lVar8 = param_1 + 0x10;
  uVar4 = 0;
  FUN_109d7fe90(puVar1,0,auStack_a8,puVar5,param_1,puVar6,lVar7,lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d35318();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  FUN_109d35318(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  func_0x000109d78ef8(puVar1,uStack_f8,puVar3,puVar5,lVar7,lVar8);
  return;
}



/* Entry: 109d7fe90; end: 109d7ff1f;  */

void FUN_109d7fe90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d35318(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d78ef8(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d7ff20; end: 109d7ff87;  */

bool FUN_109d7ff20(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((*param_1 == (uint)*(ushort *)(param_2 + 2)) && (param_1[1] == *(uint *)(param_2 + 0x10))) {
    uVar2 = *(ulong *)(param_2 + -0x10);
    if (((uint)uVar2 >> 1 & 1) == 0) {
      puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar1 = *(ulong **)(param_2 + -0x20);
    }
    if (*(ulong *)(param_1 + 2) == *puVar1) {
      return *(ulong *)(param_1 + 4) == puVar1[1];
    }
  }
  return false;
}



/* Entry: 109d7ff88; end: 109d800d7;  */

void FUN_109d7ff88(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d80008(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d8012c(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d800d8; end: 109d8012b;  */

void FUN_109d800d8(uint *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  *param_1 = (uint)*(ushort *)(param_2 + 2);
  param_1[1] = uVar1;
  puVar2 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = *puVar3;
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar2 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 4) = puVar2[1];
  return;
}



/* Entry: 109d8012c; end: 109d801d3;  */

long * FUN_109d8012c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d80178;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d801d4(param_1,uVar1);
  func_0x000109d80008(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d80178:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d801d4; end: 109d8032b;  */

void FUN_109d801d4(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d8028c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d8032c; end: 109d803ff;  */

undefined8 FUN_109d8032c(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d80400();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d80510();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d803e0;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d803e0:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d80400; end: 109d8047f;  */

void FUN_109d80400(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_f8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  puVar6 = (undefined4 *)(param_1 + 4);
  lVar7 = param_1 + 8;
  lVar8 = param_1 + 0x10;
  uVar4 = 0;
  FUN_109d80480(puVar1,0,auStack_a8,puVar5,param_1,puVar6,lVar7,lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d35318();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  FUN_109d35318(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  func_0x000109d74e64(puVar1,uStack_f8,puVar3,puVar5,lVar7,lVar8);
  return;
}



/* Entry: 109d80480; end: 109d8050f;  */

void FUN_109d80480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d35318(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d74e64(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d80510; end: 109d80577;  */

bool FUN_109d80510(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((*param_1 == (uint)*(ushort *)(param_2 + 2)) && (param_1[1] == *(uint *)(param_2 + 0x10))) {
    uVar2 = *(ulong *)(param_2 + -0x10);
    if (((uint)uVar2 >> 1 & 1) == 0) {
      puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar1 = *(ulong **)(param_2 + -0x20);
    }
    if (*(ulong *)(param_1 + 2) == *puVar1) {
      return *(ulong *)(param_1 + 4) == puVar1[1];
    }
  }
  return false;
}



/* Entry: 109d80578; end: 109d806c7;  */

void FUN_109d80578(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d805f8(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d8071c(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d806c8; end: 109d8071b;  */

void FUN_109d806c8(uint *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  *param_1 = (uint)*(ushort *)(param_2 + 2);
  param_1[1] = uVar1;
  puVar2 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = *puVar3;
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar2 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 4) = puVar2[1];
  return;
}



/* Entry: 109d8071c; end: 109d807c3;  */

long * FUN_109d8071c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d80768;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d807c4(param_1,uVar1);
  func_0x000109d805f8(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d80768:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d807c4; end: 109d8091b;  */

void FUN_109d807c4(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d8087c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d8091c; end: 109d80a0b;  */

undefined8 FUN_109d8091c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  
  lVar3 = param_1[2];
  if ((int)lVar3 == 0) {
    uVar6 = 0;
    plVar9 = (long *)0x0;
  }
  else {
    lVar10 = *param_1;
    lVar4 = *param_2;
    FUN_109d80a58(lVar4,lVar4 + param_2[1] * 8);
    uVar2 = (int)lVar3 - 1;
    uVar11 = uVar2 & (uint)lVar4;
    plVar9 = (long *)(lVar10 + (ulong)uVar11 * 8);
    plVar5 = param_2;
    FUN_109d80a0c(param_2,*plVar9);
    if (((ulong)plVar5 & 1) == 0) {
      plVar5 = (long *)0x0;
      iVar8 = 1;
      do {
        if (*plVar9 == -0x1000) {
          uVar6 = 0;
          if (plVar5 != (long *)0x0) {
            plVar9 = plVar5;
          }
          goto LAB_109d80984;
        }
        plVar1 = plVar9;
        if (plVar5 != (long *)0x0 || *plVar9 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar11 = uVar11 + iVar8 & uVar2;
        plVar9 = (long *)(lVar10 + (ulong)uVar11 * 8);
        plVar7 = param_2;
        FUN_109d80a0c(param_2,*plVar9);
        plVar5 = plVar1;
        iVar8 = iVar8 + 1;
      } while ((int)plVar7 == 0);
    }
    uVar6 = 1;
  }
LAB_109d80984:
  *param_3 = (long)plVar9;
  return uVar6;
}



/* Entry: 109d80a0c; end: 109d80a57;  */

bool FUN_109d80a0c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (((param_2 | 0x1000) != 0xfffffffffffff000) && (param_1[1] == (ulong)*(uint *)(param_2 + 0x18))
     ) {
    uVar1 = *param_1;
    _memcmp(uVar1,*(undefined8 *)(param_2 + 0x10),param_1[1] << 3);
    return (int)uVar1 == 0;
  }
  return false;
}



/* Entry: 109d80a58; end: 109d80cab;  */

undefined1 * FUN_109d80a58(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_68 [56];
  
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar6 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  uVar12 = param_2 - (long)param_1;
  if (0x40 < uVar12) {
    uVar8 = uVar12 & 0xffffffffffffffc0;
    FUN_109d35128(auStack_68,param_1,uRam00000001132fee80);
    while (uVar8 = uVar8 - 0x40, uVar8 != 0) {
      param_1 = param_1 + 8;
      FUN_109d351b0(auStack_68,param_1);
    }
    if ((uVar12 & 0x3f) != 0) {
      FUN_109d351b0(auStack_68,param_2 + -0x40);
    }
    puVar7 = auStack_68;
    func_0x000109d356d0(puVar7,uVar12);
    return puVar7;
  }
  if (uVar12 - 4 < 5) {
    uVar8 = uRam00000001132fee80 ^ *(uint *)((long)param_1 + (uVar12 - 4));
    uVar12 = (uVar8 ^ uVar12 + (ulong)(uint)*param_1 * 8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  else {
    if (uVar12 - 9 < 8) {
      uVar9 = *(ulong *)((long)param_1 + (uVar12 - 8));
      uVar8 = uVar9 + uVar12;
      uVar8 = uVar8 >> (uVar12 & 0x3f) | uVar8 << 0x40 - (uVar12 & 0x3f);
      uVar12 = (*param_1 ^ uRam00000001132fee80 ^ uVar8) * -0x622015f714c7d297;
      uVar12 = (uVar8 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297 ^ uVar9);
    }
    if (0xf < uVar12 - 0x11) {
      if (uVar12 < 0x21) {
        if (uVar12 == 0) {
          return (undefined1 *)(uRam00000001132fee80 ^ 0x9ae16a3b2f90404f);
        }
        uVar12 = (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (uVar12 >> 1)),(char)*param_1) *
                 -0x651e95c4d06fbfb1 ^
                 (uVar12 + (ulong)*(byte *)((long)param_1 + (uVar12 - 1)) * 4) * -0x36b62838af619aa9
                 ^ uRam00000001132fee80;
      }
      else {
        lVar3 = *(long *)((long)param_1 + (uVar12 - 0x10));
        lVar5 = *(long *)((long)param_1 + (uVar12 - 8));
        uVar10 = *param_1 + (lVar3 + uVar12) * -0x3c5a37a36834ced9;
        uVar8 = uVar10 + param_1[3];
        uVar9 = uVar10 + param_1[1];
        uVar11 = uVar9 + param_1[2];
        uVar1 = *(long *)((long)param_1 + (uVar12 - 0x20)) + param_1[2];
        uVar2 = uVar1 + lVar5;
        lVar4 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                (uVar8 >> 0x34 | uVar8 * 0x1000) + (uVar11 >> 0x1f | uVar11 << 0x21);
        uVar12 = *(long *)((long)param_1 + (uVar12 - 0x18)) + uVar1;
        uVar8 = uVar12 + lVar3;
        uVar12 = (uVar8 + lVar5 + lVar4) * -0x3c5a37a36834ced9 +
                 (uVar11 + param_1[3] + (uVar1 >> 0x25 | uVar1 * 0x8000000) +
                           (uVar2 >> 0x34 | uVar2 * 0x1000) + (uVar12 >> 7 | uVar12 << 0x39) +
                           (uVar8 >> 0x1f | uVar8 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar12 = ((uVar12 ^ uVar12 >> 0x2f) * -0x3c5a37a36834ced9 ^ uRam00000001132fee80) + lVar4;
      }
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x651e95c4d06fbfb1);
    }
    lVar4 = *(long *)((long)param_1 + (uVar12 - 8));
    uVar9 = *param_1 * -0x4b6d499041670d8d - param_1[1];
    uVar11 = lVar4 * -0x651e95c4d06fbfb1 ^ uRam00000001132fee80;
    uVar8 = param_1[1] ^ 0xc949d7c7509e6557;
    uVar8 = uRam00000001132fee80 + uVar12 + (uVar8 >> 0x14 | uVar8 << 0x2c) +
            *param_1 * -0x4b6d499041670d8d + lVar4 * 0x651e95c4d06fbfb1;
    uVar12 = ((uVar9 >> 0x2b | uVar9 * 0x200000) +
              *(long *)((long)param_1 + (uVar12 - 0x10)) * -0x3c5a37a36834ced9 +
              (uVar11 >> 0x1e | uVar11 << 0x22) ^ uVar8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  return (undefined1 *)
         ((uVar12 * -0x622015f714c7d297 ^ uVar12 * -0x622015f714c7d297 >> 0x2f) *
         -0x622015f714c7d297);
}



/* Entry: 109d80cac; end: 109d80d53;  */

long * FUN_109d80cac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d80cf8;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d80d54(param_1,uVar1);
  func_0x000109d80be4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d80cf8:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d80d54; end: 109d80eab;  */

void FUN_109d80d54(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d80e0c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d80eac; end: 109d80f5b;  */

long FUN_109d80eac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109d80f5c; end: 109d80feb;  */

/* WARNING: Removing unreachable block (ram,0x000109dfbf10) */
/* WARNING: Removing unreachable block (ram,0x000109dfbf3c) */
/* WARNING: Removing unreachable block (ram,0x000109dfbf98) */
/* WARNING: Removing unreachable block (ram,0x000109dfbf48) */
/* WARNING: Removing unreachable block (ram,0x000109dfbf68) */
/* WARNING: Removing unreachable block (ram,0x000109dfbeb8) */
/* WARNING: Removing unreachable block (ram,0x000109dfbedc) */
/* WARNING: Removing unreachable block (ram,0x000109dfbee4) */
/* WARNING: Removing unreachable block (ram,0x000109dfbec0) */
/* WARNING: Removing unreachable block (ram,0x000109dfbec4) */
/* WARNING: Removing unreachable block (ram,0x000109dfbeec) */
/* WARNING: Removing unreachable block (ram,0x000109dfbef0) */
/* WARNING: Removing unreachable block (ram,0x000109dfbef8) */
/* WARNING: Removing unreachable block (ram,0x000109dfc000) */
/* WARNING: Removing unreachable block (ram,0x000109dfc008) */
/* WARNING: Removing unreachable block (ram,0x000109dfc010) */
/* WARNING: Removing unreachable block (ram,0x000109dfc034) */
/* WARNING: Removing unreachable block (ram,0x000109dfc020) */
/* WARNING: Removing unreachable block (ram,0x000109dfc03c) */
/* WARNING: Removing unreachable block (ram,0x000109dfbfe4) */
/* WARNING: Removing unreachable block (ram,0x000109dfc060) */

uint * FUN_109d80f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint *unaff_x19;
  uint *puVar50;
  uint *puStack_e8;
  uint auStack_d8 [2];
  undefined8 uStack_d0;
  long lStack_58;
  
  puVar50 = puRam00000001137e60e0;
  if (puRam00000001137e60e0 == (uint *)0x0) {
    return (uint *)0x0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puRam00000001137e60e0[2] == 0) {
    puVar49 = auStack_d8;
    _bzero(auStack_d8,0x10);
    unaff_x19 = auStack_d8;
    auStack_d8[0] = 0;
    auStack_d8[1] = 0;
    uVar48 = *(undefined8 *)puVar50;
    uStack_d0 = param_3;
    FUN_109e08ce4(uVar48,param_2,0,puVar49,4);
    puStack_e8 = puVar49;
    if ((int)uVar48 == 0) {
      puVar50 = (uint *)0x1;
    }
    else {
      puVar50 = (uint *)0x0;
    }
  }
  else {
    puVar50 = (uint *)0x0;
    puVar49 = puRam00000001137e60e0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar50;
  }
  ___stack_chk_fail();
  if (puStack_e8 != unaff_x19) {
    _free();
  }
  __Unwind_Resume();
  uVar9 = puVar49[0x10];
  uVar17 = puVar49[0x11];
  uVar26 = uVar17 >> 2 | uVar17 << 0x1e;
  uVar10 = puVar49[0x12];
  uVar18 = puVar49[0x13];
  uVar1 = (uVar9 >> 0x1b | uVar9 << 5) + puVar49[0x14] + *puVar49 +
          (uVar10 & uVar17 | uVar18 & (uVar17 ^ 0xffffffff)) + 0x5a827999;
  uVar27 = uVar9 >> 2 | uVar9 << 0x1e;
  uVar2 = uVar18 + puVar49[1] +
          (uVar9 & (uVar17 >> 2 | uVar17 << 0x1e) | uVar10 & (uVar9 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar28 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = puVar49[2];
  uVar19 = puVar49[3];
  uVar3 = uVar10 + uVar11 + (uVar1 & (uVar9 >> 2 | uVar9 << 0x1e) | uVar26 & (uVar1 ^ 0xffffffff)) +
          0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar29 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar26 + uVar19 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar27 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar30 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar26 = puVar49[4];
  uVar20 = puVar49[5];
  uVar2 = uVar27 + uVar26 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar28 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar27 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar3 = uVar28 + uVar20 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar29 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar12 = puVar49[6];
  uVar21 = puVar49[7];
  uVar1 = uVar29 + uVar12 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar30 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar29 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar2 = uVar21 + uVar30 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar27 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar30 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar13 = puVar49[8];
  uVar22 = puVar49[9];
  uVar3 = uVar13 + uVar27 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar28 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar27 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar22 + uVar28 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar29 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar28 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar14 = puVar49[10];
  uVar23 = puVar49[0xb];
  uVar2 = uVar14 + uVar29 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar30 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar29 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar3 = uVar23 + uVar30 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar27 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar30 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar15 = puVar49[0xc];
  uVar24 = puVar49[0xd];
  uVar1 = uVar15 + uVar27 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar28 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar31 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar2 = uVar24 + uVar28 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar29 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar32 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar16 = puVar49[0xe];
  uVar25 = puVar49[0xf];
  uVar3 = uVar16 + uVar29 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar30 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar33 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar27 = uVar11 ^ *puVar49 ^ uVar13 ^ uVar24;
  uVar1 = uVar25 + uVar30 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar31 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar30 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar28 = uVar19 ^ puVar49[1] ^ uVar22 ^ uVar16;
  uVar2 = (uVar27 >> 0x1f | uVar27 << 1) + uVar31 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar32 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar31 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar29 = uVar26 ^ uVar11 ^ uVar14 ^ uVar25;
  uVar34 = uVar29 >> 0x1f | uVar29 << 1;
  uVar3 = (uVar28 >> 0x1f | uVar28 << 1) + uVar32 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar33 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar19 = uVar20 ^ uVar19 ^ uVar23 ^ (uVar27 >> 0x1f | uVar27 << 1);
  uVar1 = uVar34 + uVar33 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar30 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar32 = uVar19 >> 0x1f | uVar19 << 1;
  uVar33 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar11 = uVar32 + uVar30 +
           (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar31 & (uVar3 ^ 0xffffffff)) + 0x5a827999
           + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar30 = uVar12 ^ uVar26 ^ uVar15 ^ (uVar28 >> 0x1f | uVar28 << 1);
  uVar35 = uVar30 >> 0x1f | uVar30 << 1;
  uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar26 = uVar35 + uVar31 + (uVar33 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar20 = uVar21 ^ uVar20 ^ uVar24 ^ (uVar29 >> 0x1f | uVar29 << 1);
  uVar31 = uVar20 >> 0x1f | uVar20 << 1;
  uVar2 = uVar31 + (uVar2 >> 2 | uVar2 * 0x40000000) +
          (uVar36 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
          (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar37 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar12 = uVar13 ^ uVar12 ^ uVar16 ^ (uVar19 >> 0x1f | uVar19 << 1);
  uVar38 = uVar12 >> 0x1f | uVar12 << 1;
  uVar39 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar1 = uVar38 + uVar33 + (uVar37 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar26) + 0x6ed9eba1 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar21 = uVar22 ^ uVar21 ^ uVar25 ^ (uVar30 >> 0x1f | uVar30 << 1);
  uVar33 = uVar21 >> 0x1f | uVar21 << 1;
  uVar3 = uVar33 + uVar36 + (uVar39 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar36 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar13 = uVar14 ^ uVar13 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1);
  uVar40 = uVar13 >> 0x1f | uVar13 << 1;
  uVar41 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = uVar40 + uVar37 + (uVar36 ^ (uVar26 >> 2 | uVar26 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar26 = uVar23 ^ uVar22 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1);
  uVar37 = uVar26 >> 0x1f | uVar26 << 1;
  uVar2 = uVar37 + uVar39 + (uVar41 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + 0x6ed9eba1 +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar39 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar14 = uVar15 ^ uVar14 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1);
  uVar42 = uVar14 >> 0x1f | uVar14 << 1;
  uVar43 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar1 = uVar42 + uVar36 + (uVar39 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar22 = uVar24 ^ uVar23 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1);
  uVar36 = uVar22 >> 0x1f | uVar22 << 1;
  uVar3 = uVar36 + uVar41 + (uVar43 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar41 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar15 = uVar16 ^ uVar15 ^ (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1);
  uVar44 = uVar15 >> 0x1f | uVar15 << 1;
  uVar45 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = uVar44 + uVar39 + (uVar41 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar23 = uVar25 ^ uVar24 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1);
  uVar39 = uVar23 >> 0x1f | uVar23 << 1;
  uVar2 = uVar39 + uVar43 + (uVar45 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + 0x6ed9eba1 +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar43 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar16 = uVar16 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  uVar46 = uVar16 >> 0x1f | uVar16 << 1;
  uVar47 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar1 = uVar46 + uVar41 + (uVar43 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar24 = uVar25 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar15 >> 0x1f | uVar15 << 1);
  uVar41 = uVar24 >> 0x1f | uVar24 << 1;
  uVar3 = uVar41 + uVar45 + (uVar47 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar25 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar27 = uVar34 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
           (uVar23 >> 0x1f | uVar23 << 1);
  uVar34 = uVar27 >> 0x1f | uVar27 << 1;
  uVar11 = uVar34 + uVar43 + (uVar25 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar43 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar28 = uVar32 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
           (uVar16 >> 0x1f | uVar16 << 1);
  uVar32 = uVar28 >> 0x1f | uVar28 << 1;
  uVar2 = uVar32 + uVar47 + (uVar43 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + 0x6ed9eba1 +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar45 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar29 = uVar35 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
           (uVar24 >> 0x1f | uVar24 << 1);
  uVar35 = uVar29 >> 0x1f | uVar29 << 1;
  uVar1 = uVar35 + uVar25 + (uVar45 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar19 = uVar31 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  uVar31 = uVar19 >> 0x1f | uVar19 << 1;
  uVar3 = uVar31 + uVar43 + (uVar25 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar43 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar30 = uVar38 ^ (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar38 = uVar30 >> 0x1f | uVar30 << 1;
  uVar11 = uVar38 + uVar45 + (uVar43 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar45 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar20 = uVar33 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar29 >> 0x1f | uVar29 << 1);
  uVar33 = uVar20 >> 0x1f | uVar20 << 1;
  uVar2 = uVar33 + uVar25 + (uVar45 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + 0x6ed9eba1 +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar25 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar12 = uVar40 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
           (uVar19 >> 0x1f | uVar19 << 1);
  uVar40 = uVar12 >> 0x1f | uVar12 << 1;
  uVar1 = uVar40 + uVar43 + (uVar25 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar43 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar21 = uVar37 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
           (uVar30 >> 0x1f | uVar30 << 1);
  uVar37 = uVar21 >> 0x1f | uVar21 << 1;
  uVar3 = uVar37 + uVar45 + (uVar43 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar13 = uVar42 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
           (uVar20 >> 0x1f | uVar20 << 1);
  uVar42 = uVar13 >> 0x1f | uVar13 << 1;
  uVar11 = uVar42 + uVar25 +
           ((uVar1 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar11 >> 2 | uVar11 * 0x40000000) |
           uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20) + 0x8f1bbcdc;
  uVar25 = uVar36 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
           (uVar12 >> 0x1f | uVar12 << 1);
  uVar36 = uVar25 >> 0x1f | uVar25 << 1;
  iVar4 = uVar36 + uVar43 +
          ((uVar3 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
          uVar3 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar14 = uVar44 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
           (uVar21 >> 0x1f | uVar21 << 1);
  uVar43 = uVar14 >> 0x1f | uVar14 << 1;
  uVar26 = iVar4 + 0x8f1bbcdc;
  iVar5 = uVar43 + (uVar2 >> 2 | uVar2 * 0x40000000) +
          ((uVar11 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
          uVar11 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar22 = uVar39 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
           (uVar13 >> 0x1f | uVar13 << 1);
  uVar39 = uVar22 >> 0x1f | uVar22 << 1;
  uVar2 = iVar5 + 0x8f1bbcdc;
  iVar6 = uVar39 + (uVar1 >> 2 | uVar1 * 0x40000000) +
          ((uVar26 | uVar11 >> 2 | uVar11 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
          uVar26 & (uVar11 >> 2 | uVar11 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar15 = uVar46 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
           (uVar25 >> 0x1f | uVar25 << 1);
  uVar44 = uVar15 >> 0x1f | uVar15 << 1;
  uVar1 = iVar6 + 0x8f1bbcdc;
  iVar7 = uVar44 + (uVar3 >> 2 | uVar3 * 0x40000000) +
          ((uVar2 | uVar26 >> 2 | iVar4 * 0x40000000) & (uVar11 >> 2 | uVar11 * 0x40000000) |
          uVar2 & (uVar26 >> 2 | iVar4 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar23 = uVar41 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
           (uVar14 >> 0x1f | uVar14 << 1);
  uVar41 = uVar23 >> 0x1f | uVar23 << 1;
  uVar3 = iVar7 + 0x8f1bbcdc;
  iVar8 = uVar41 + (uVar11 >> 2 | uVar11 * 0x40000000) +
          ((uVar1 | uVar2 >> 2 | iVar5 * 0x40000000) & (uVar26 >> 2 | iVar4 * 0x40000000) |
          uVar1 & (uVar2 >> 2 | iVar5 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar16 = uVar34 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  uVar34 = uVar16 >> 0x1f | uVar16 << 1;
  uVar11 = iVar8 + 0x8f1bbcdc;
  iVar4 = uVar34 + (uVar26 >> 2 | iVar4 * 0x40000000) +
          ((uVar3 | uVar1 >> 2 | iVar6 * 0x40000000) & (uVar2 >> 2 | iVar5 * 0x40000000) |
          uVar3 & (uVar1 >> 2 | iVar6 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar26 = iVar4 + 0x8f1bbcdc;
  uVar24 = uVar32 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar15 >> 0x1f | uVar15 << 1);
  uVar32 = uVar24 >> 0x1f | uVar24 << 1;
  iVar5 = uVar32 + (uVar2 >> 2 | iVar5 * 0x40000000) +
          ((uVar11 | uVar3 >> 2 | iVar7 * 0x40000000) & (uVar1 >> 2 | iVar6 * 0x40000000) |
          uVar11 & (uVar3 >> 2 | iVar7 * 0x40000000)) + (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar27 = uVar35 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
           (uVar23 >> 0x1f | uVar23 << 1);
  uVar35 = uVar27 >> 0x1f | uVar27 << 1;
  uVar2 = iVar5 + 0x8f1bbcdc;
  iVar6 = uVar35 + (uVar1 >> 2 | iVar6 * 0x40000000) +
          ((uVar26 | uVar11 >> 2 | iVar8 * 0x40000000) & (uVar3 >> 2 | iVar7 * 0x40000000) |
          uVar26 & (uVar11 >> 2 | iVar8 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar28 = uVar31 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
           (uVar16 >> 0x1f | uVar16 << 1);
  uVar31 = uVar28 >> 0x1f | uVar28 << 1;
  uVar1 = iVar6 + 0x8f1bbcdc;
  iVar7 = uVar31 + (uVar3 >> 2 | iVar7 * 0x40000000) +
          ((uVar2 | uVar26 >> 2 | iVar4 * 0x40000000) & (uVar11 >> 2 | iVar8 * 0x40000000) |
          uVar2 & (uVar26 >> 2 | iVar4 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar29 = uVar38 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
           (uVar24 >> 0x1f | uVar24 << 1);
  uVar38 = uVar29 >> 0x1f | uVar29 << 1;
  uVar3 = iVar7 + 0x8f1bbcdc;
  iVar8 = uVar38 + (uVar11 >> 2 | iVar8 * 0x40000000) +
          ((uVar1 | uVar2 >> 2 | iVar5 * 0x40000000) & (uVar26 >> 2 | iVar4 * 0x40000000) |
          uVar1 & (uVar2 >> 2 | iVar5 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar19 = uVar33 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  uVar33 = uVar19 >> 0x1f | uVar19 << 1;
  uVar11 = iVar8 + 0x8f1bbcdc;
  iVar4 = uVar33 + (uVar26 >> 2 | iVar4 * 0x40000000) +
          ((uVar3 | uVar1 >> 2 | iVar6 * 0x40000000) & (uVar2 >> 2 | iVar5 * 0x40000000) |
          uVar3 & (uVar1 >> 2 | iVar6 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar30 = uVar40 ^ (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar40 = uVar30 >> 0x1f | uVar30 << 1;
  uVar26 = iVar4 + 0x8f1bbcdc;
  iVar5 = uVar40 + (uVar2 >> 2 | iVar5 * 0x40000000) +
          ((uVar11 | uVar3 >> 2 | iVar7 * 0x40000000) & (uVar1 >> 2 | iVar6 * 0x40000000) |
          uVar11 & (uVar3 >> 2 | iVar7 * 0x40000000)) + (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar2 = iVar5 + 0x8f1bbcdc;
  uVar20 = uVar37 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar29 >> 0x1f | uVar29 << 1);
  uVar37 = uVar20 >> 0x1f | uVar20 << 1;
  iVar6 = uVar37 + (uVar1 >> 2 | iVar6 * 0x40000000) +
          ((uVar26 | uVar11 >> 2 | iVar8 * 0x40000000) & (uVar3 >> 2 | iVar7 * 0x40000000) |
          uVar26 & (uVar11 >> 2 | iVar8 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar12 = uVar42 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
           (uVar19 >> 0x1f | uVar19 << 1);
  uVar42 = uVar12 >> 0x1f | uVar12 << 1;
  uVar1 = iVar6 + 0x8f1bbcdc;
  iVar7 = uVar42 + (uVar3 >> 2 | iVar7 * 0x40000000) +
          ((uVar2 | uVar26 >> 2 | iVar4 * 0x40000000) & (uVar11 >> 2 | iVar8 * 0x40000000) |
          uVar2 & (uVar26 >> 2 | iVar4 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar21 = uVar36 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
           (uVar30 >> 0x1f | uVar30 << 1);
  uVar36 = uVar21 >> 0x1f | uVar21 << 1;
  uVar3 = iVar7 + 0x8f1bbcdc;
  iVar8 = uVar36 + (uVar11 >> 2 | iVar8 * 0x40000000) +
          ((uVar1 | uVar2 >> 2 | iVar5 * 0x40000000) & (uVar26 >> 2 | iVar4 * 0x40000000) |
          uVar1 & (uVar2 >> 2 | iVar5 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar13 = uVar43 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
           (uVar20 >> 0x1f | uVar20 << 1);
  uVar43 = uVar13 >> 0x1f | uVar13 << 1;
  uVar11 = iVar8 + 0x8f1bbcdc;
  iVar4 = uVar43 + (uVar26 >> 2 | iVar4 * 0x40000000) +
          ((uVar3 | uVar1 >> 2 | iVar6 * 0x40000000) & (uVar2 >> 2 | iVar5 * 0x40000000) |
          uVar3 & (uVar1 >> 2 | iVar6 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar25 = uVar39 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
           (uVar12 >> 0x1f | uVar12 << 1);
  uVar39 = uVar25 >> 0x1f | uVar25 << 1;
  uVar26 = iVar4 + 0x8f1bbcdc;
  iVar5 = uVar39 + (uVar2 >> 2 | iVar5 * 0x40000000) +
          ((uVar11 | uVar3 >> 2 | iVar7 * 0x40000000) & (uVar1 >> 2 | iVar6 * 0x40000000) |
          uVar11 & (uVar3 >> 2 | iVar7 * 0x40000000)) + (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar14 = uVar44 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
           (uVar21 >> 0x1f | uVar21 << 1);
  uVar44 = uVar14 >> 0x1f | uVar14 << 1;
  uVar2 = iVar5 + 0x8f1bbcdc;
  iVar6 = uVar44 + (uVar1 >> 2 | iVar6 * 0x40000000) +
          ((uVar26 | uVar11 >> 2 | iVar8 * 0x40000000) & (uVar3 >> 2 | iVar7 * 0x40000000) |
          uVar26 & (uVar11 >> 2 | iVar8 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = iVar6 + 0x8f1bbcdc;
  uVar22 = uVar41 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
           (uVar13 >> 0x1f | uVar13 << 1);
  uVar41 = uVar22 >> 0x1f | uVar22 << 1;
  iVar7 = uVar41 + (uVar3 >> 2 | iVar7 * 0x40000000) +
          ((uVar2 | uVar26 >> 2 | iVar4 * 0x40000000) & (uVar11 >> 2 | iVar8 * 0x40000000) |
          uVar2 & (uVar26 >> 2 | iVar4 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar3 = iVar7 + 0x8f1bbcdc;
  uVar45 = uVar2 >> 2 | iVar5 * 0x40000000;
  uVar15 = uVar34 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
           (uVar25 >> 0x1f | uVar25 << 1);
  uVar34 = uVar15 >> 0x1f | uVar15 << 1;
  uVar11 = uVar34 + (uVar11 >> 2 | iVar8 * 0x40000000) +
           (uVar45 ^ (uVar26 >> 2 | iVar4 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar46 = uVar1 >> 2 | iVar6 * 0x40000000;
  uVar23 = uVar32 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
           (uVar14 >> 0x1f | uVar14 << 1);
  uVar32 = uVar23 >> 0x1f | uVar23 << 1;
  uVar2 = uVar32 + (uVar26 >> 2 | iVar4 * 0x40000000) +
          (uVar46 ^ (uVar2 >> 2 | iVar5 * 0x40000000) ^ uVar3) + -0x359d3e2a +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar47 = uVar3 >> 2 | iVar7 * 0x40000000;
  uVar26 = uVar35 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  uVar35 = uVar26 >> 0x1f | uVar26 << 1;
  uVar1 = uVar35 + uVar45 + (uVar47 ^ (uVar1 >> 2 | iVar6 * 0x40000000) ^ uVar11) + -0x359d3e2a +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar45 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar16 = uVar31 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar15 >> 0x1f | uVar15 << 1);
  uVar24 = uVar16 >> 0x1f | uVar16 << 1;
  uVar3 = uVar24 + uVar46 + (uVar45 ^ (uVar3 >> 2 | iVar7 * 0x40000000) ^ uVar2) + -0x359d3e2a +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar31 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar27 = uVar38 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
           (uVar23 >> 0x1f | uVar23 << 1);
  uVar38 = uVar27 >> 0x1f | uVar27 << 1;
  uVar11 = uVar38 + uVar47 + (uVar31 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar46 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar28 = uVar33 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
           (uVar26 >> 0x1f | uVar26 << 1);
  uVar33 = uVar28 >> 0x1f | uVar28 << 1;
  uVar2 = uVar33 + uVar45 + (uVar46 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + -0x359d3e2a +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar45 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar29 = uVar40 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
           (uVar16 >> 0x1f | uVar16 << 1);
  uVar40 = uVar29 >> 0x1f | uVar29 << 1;
  uVar1 = uVar40 + uVar31 + (uVar45 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + -0x359d3e2a +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar19 = uVar37 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  uVar31 = uVar19 >> 0x1f | uVar19 << 1;
  puVar49[2] = uVar40;
  puVar49[3] = uVar31;
  uVar37 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar3 = uVar31 + uVar46 + (uVar37 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + -0x359d3e2a +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar31 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar30 = uVar42 ^ (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar40 = uVar30 >> 0x1f | uVar30 << 1;
  uVar11 = uVar40 + uVar45 + (uVar31 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar20 = uVar36 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar29 >> 0x1f | uVar29 << 1);
  uVar36 = uVar20 >> 0x1f | uVar20 << 1;
  puVar49[4] = uVar40;
  puVar49[5] = uVar36;
  uVar40 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar36 + uVar37 + (uVar40 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + -0x359d3e2a +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar36 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar12 = uVar43 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
           (uVar19 >> 0x1f | uVar19 << 1);
  uVar37 = uVar12 >> 0x1f | uVar12 << 1;
  uVar1 = uVar37 + uVar31 + (uVar36 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + -0x359d3e2a +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar21 = uVar39 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
           (uVar30 >> 0x1f | uVar30 << 1);
  uVar31 = uVar21 >> 0x1f | uVar21 << 1;
  puVar49[6] = uVar37;
  puVar49[7] = uVar31;
  uVar37 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar3 = uVar31 + uVar40 + (uVar37 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + -0x359d3e2a +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar31 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar27 = uVar44 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
           (uVar20 >> 0x1f | uVar20 << 1);
  uVar13 = uVar27 >> 0x1f | uVar27 << 1;
  uVar11 = uVar13 + uVar36 + (uVar31 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar28 = uVar41 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
           (uVar12 >> 0x1f | uVar12 << 1);
  uVar25 = uVar28 >> 0x1f | uVar28 << 1;
  puVar49[8] = uVar13;
  puVar49[9] = uVar25;
  uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar25 + uVar37 + (uVar13 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + -0x359d3e2a +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar25 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar29 = uVar34 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
           (uVar21 >> 0x1f | uVar21 << 1);
  uVar14 = uVar29 >> 0x1f | uVar29 << 1;
  uVar1 = uVar14 + uVar31 + (uVar25 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + -0x359d3e2a +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar27 = uVar32 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  uVar19 = uVar27 >> 0x1f | uVar27 << 1;
  puVar49[10] = uVar14;
  puVar49[0xb] = uVar19;
  uVar14 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar3 = uVar19 + uVar13 + (uVar14 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + -0x359d3e2a +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar28 = uVar35 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar29 = uVar24 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
           (uVar29 >> 0x1f | uVar29 << 1);
  uVar30 = uVar28 >> 0x1f | uVar28 << 1;
  uVar29 = uVar29 >> 0x1f | uVar29 << 1;
  puVar49[0xc] = uVar30;
  puVar49[0xd] = uVar29;
  uVar11 = uVar30 + uVar25 + (uVar19 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar30 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar29 + uVar14 + (uVar30 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + -0x359d3e2a +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar29 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar26 = uVar38 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  uVar27 = uVar26 >> 0x1f | uVar26 << 1;
  uVar1 = uVar27 + uVar19 + (uVar29 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + -0x359d3e2a +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  *puVar49 = uVar38;
  puVar49[1] = uVar33;
  uVar26 = uVar33 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  puVar49[0xe] = uVar27;
  puVar49[0xf] = uVar26;
  uVar11 = uVar11 >> 2 | uVar11 * 0x40000000;
  puVar49[0x10] =
       uVar9 + uVar26 + uVar30 + (uVar11 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + -0x359d3e2a
       + (uVar1 >> 0x1b | uVar1 * 0x20);
  puVar49[0x11] = uVar1 + uVar17;
  puVar49[0x12] = (uVar2 >> 2 | uVar2 * 0x40000000) + uVar10;
  puVar49[0x13] = uVar11 + uVar18;
  puVar49[0x14] = uVar29 + puVar49[0x14];
  return puVar49;
}



/* Entry: 109d80fec; end: 109d81023;  */

bool FUN_109d80fec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 8));
  }
  return pcVar1 != (code *)0x0;
}



/* Entry: 109d81024; end: 109d81267;  */

ulong FUN_109d81024(long param_1,undefined2 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 **ppuStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 *apuStack_190 [4];
  undefined2 uStack_170;
  undefined *apuStack_168 [4];
  undefined2 uStack_148;
  undefined8 **appuStack_140 [4];
  undefined2 uStack_120;
  undefined *apuStack_118 [4];
  undefined2 uStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuStack_1a8 = (undefined8 ***)0x0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uVar9 = param_1 + 0x90;
  FUN_109d81368(uVar9,param_1);
  uVar7 = uStack_198;
  if ((uVar9 & 1) == 0) {
    uVar2 = uStack_1a0;
    if (-1 < (long)uStack_198) {
      uVar2 = uStack_198 >> 0x38;
    }
    if (uVar2 != 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x80);
      puVar10 = (undefined8 *)0x28;
      __Znwm();
      pppuVar3 = (undefined8 ***)ppuStack_1a8;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_FUN_110b41258;
      puVar11 = (undefined8 *)0x20;
      __Znwm();
      puVar10[3] = puVar11;
      if (-1 < (long)uVar7) {
        pppuVar3 = &ppuStack_1a8;
      }
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[2] = (long)pppuVar3 + uVar2;
      FUN_109e06548();
      *(int *)(puVar10 + 4) = (int)puVar11;
      plVar13 = (long *)puVar14[1];
      *puVar14 = puVar10 + 3;
      puVar14[1] = puVar10;
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 1;
        do {
          lVar12 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      iVar4 = *(int *)((undefined8 *)*puVar14 + 1);
      if (iVar4 != 0) {
        FUN_109dfbe0c(iVar4,*(undefined8 *)*puVar14,&uStack_78);
        apuStack_118[0] = &UNK_10f5affa2;
        uStack_f8 = 0x103;
        uStack_120 = 0x104;
        appuStack_140[0] = &ppuStack_1a8;
        FUN_109d35b30(auStack_f0,apuStack_118,appuStack_140);
        apuStack_168[0] = &UNK_10f5affbf;
        uStack_148 = 0x103;
        FUN_109d35b30(auStack_c8,auStack_f0,apuStack_168);
        uStack_170 = 0x104;
        apuStack_190[0] = &uStack_78;
        FUN_109d35b30(auStack_a0,auStack_c8,apuStack_190);
        FUN_109df7858(auStack_a0,0);
        goto LAB_109d81214;
      }
    }
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar13 = *(long **)(param_1 + 0xb0);
    if (plVar13 == (long *)0x0) {
      func_0x000104c501e4();
LAB_109d81214:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109d81218);
      (*pcVar8)();
    }
    (**(code **)(*plVar13 + 0x30))(plVar13,&ppuStack_1a8);
  }
  if ((long)uStack_198 < 0) {
    __ZdlPv(ppuStack_1a8);
  }
  return uVar9;
}



/* Entry: 109d81268; end: 109d8126f;  */

undefined8 FUN_109d81268(void)

{
  return 2;
}



/* Entry: 109d81270; end: 109d812cb;  */

void FUN_109d81270(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b411a8;
  plVar1 = (long *)param_1[0x16];
  if (plVar1 == param_1 + 0x13) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d812b8;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d812b8:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d812cc; end: 109d81303;  */

long FUN_109d812cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x90) + 0x10))();
  if (lVar2 != 0) {
    lVar1 = 3;
    if ((*(ushort *)(param_1 + 10) & 0x400) != 0) {
      lVar1 = 6;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
    }
    lVar3 = lVar1 + lVar3 + lVar2;
  }
  return lVar3;
}



/* Entry: 109d81304; end: 109d81363;  */

void FUN_109d81304(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x80);
  plVar6 = (long *)puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 109d81364; end: 109d81367;  */

void FUN_109d81364(void)

{
  return;
}



/* Entry: 109d81368; end: 109d813cf;  */

undefined8 FUN_109d81368(void)

{
  long in_x4;
  undefined8 in_x5;
  undefined8 *in_x6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (in_x4 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x000104c54c8c(&uStack_38,in_x4,in_x5);
  }
  if (*(char *)((long)in_x6 + 0x17) < '\0') {
    __ZdlPv(*in_x6);
  }
  in_x6[1] = uStack_30;
  *in_x6 = uStack_38;
  in_x6[2] = uStack_28;
  return 0;
}



/* Entry: 109d813d0; end: 109d813df;  */

void FUN_109d813d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b41258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d813e0; end: 109d813ff;  */

void FUN_109d813e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b41258;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d81400; end: 109d8141b;  */

long * FUN_109d81400(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    FUN_109e0b9b8();
    if (*plVar1 != 0) {
      __ZdlPv();
    }
  }
  return plVar1;
}



/* Entry: 109d8141c; end: 109d8143f;  */

void FUN_109d8141c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b412f8;
  return;
}



/* Entry: 109d81440; end: 109d8145b;  */

void FUN_109d81440(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b412f8;
  return;
}



/* Entry: 109d8145c; end: 109d81497;  */

long FUN_109d8145c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b41358);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d81498; end: 109d81543;  */

undefined ** FUN_109d81498(void)

{
  return &PTR_DAT_110b41358;
}



/* Entry: 109d81544; end: 109d81753;  */

undefined8 * FUN_109d81544(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    uVar1 = param_2;
    _strlen();
    *param_1 = param_2;
    param_2 = uVar1;
  }
  else {
    *param_1 = param_2;
    _strlen();
    *(undefined1 *)(param_1 + 2) = 1;
  }
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 109d81754; end: 109d8179f;  */

undefined8 * FUN_109d81754(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  iVar1 = (int)param_2;
  if (iVar1 == 0) {
    puVar3 = &UNK_10f5b006a;
  }
  else {
    if (iVar1 == 1) {
      puVar3 = &UNK_10f5b007a;
      if (*(char *)(param_1 + 2) == '\x01') {
        _strlen();
        *param_1 = &UNK_10f5b007a;
      }
      else {
        *param_1 = &UNK_10f5b007a;
        _strlen();
        *(undefined1 *)(param_1 + 2) = 1;
      }
      param_1[1] = puVar3;
      return param_1;
    }
    if (iVar1 != 2) {
      return param_2;
    }
    puVar3 = &UNK_10f5b008b;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    puVar2 = puVar3;
    _strlen();
    *param_1 = puVar3;
    puVar3 = puVar2;
  }
  else {
    *param_1 = puVar3;
    _strlen();
    *(undefined1 *)(param_1 + 2) = 1;
  }
  param_1[1] = puVar3;
  return param_1;
}



/* Entry: 109d817a0; end: 109d817f7;  */

undefined8 *
FUN_109d817a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x15;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xc0000000;
  param_1[3] = param_4;
  *(undefined4 *)(param_1 + 4) = param_5;
  FUN_109da2b08(param_1,param_3);
  return param_1;
}



/* Entry: 109d817f8; end: 109d8186f;  */

byte FUN_109d817f8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (((*(char *)(*param_1 + 8) == '\x0f') && (lVar2 = *(long *)(param_1[3] + 0x70), lVar2 != 0)) &&
     (uVar1 = (int)param_1[4] + 2, uVar1 < *(uint *)(lVar2 + 8))) {
    lVar2 = lVar2 + 0x28;
    lVar3 = *(long *)(lVar2 + (ulong)uVar1 * 8);
    if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x14) >> 6 & 1) != 0)) ||
       ((lVar3 = *(long *)(lVar2 + (ulong)uVar1 * 8), lVar3 != 0 &&
        ((*(byte *)(lVar3 + 0x15) & 1) != 0)))) {
      return 1;
    }
    lVar2 = *(long *)(lVar2 + (ulong)uVar1 * 8);
    if (lVar2 != 0) {
      return *(byte *)(lVar2 + 0x15) >> 1 & 1;
    }
  }
  return 0;
}



/* Entry: 109d81870; end: 109d8199b;  */

undefined8 FUN_109d81870(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x70);
  if ((lVar3 == 0) || (uVar1 = *(int *)(param_1 + 0x20) + 2, *(uint *)(lVar3 + 8) <= uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(lVar3 + (ulong)uVar1 * 8 + 0x28);
  }
  func_0x000109d818f0();
  if (uVar2 == 0) {
    param_2 = 0;
  }
  else {
    FUN_109d2feb0(param_2);
    if ((uVar2 & 1) != 0) {
      FUN_109e0486c(&UNK_10f602449);
    }
  }
  return param_2;
}



/* Entry: 109d8199c; end: 109d819eb;  */

byte FUN_109d8199c(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((((*(char *)(*param_1 + 8) == '\x0f') && (lVar2 = *(long *)(param_1[3] + 0x70), lVar2 != 0))
      && (uVar1 = (int)param_1[4] + 2, uVar1 < *(uint *)(lVar2 + 8))) &&
     (lVar2 = *(long *)(lVar2 + (ulong)uVar1 * 8 + 0x28), lVar2 != 0)) {
    return *(byte *)(lVar2 + 0x15) >> 2 & 1;
  }
  return 0;
}



/* Entry: 109d819ec; end: 109d81a4b;  */

undefined8 FUN_109d819ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  lVar5 = param_2 + -0x38;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = lVar5;
  }
  func_0x000109d88c9c(param_1,lVar5);
  lVar2 = *(long *)(lVar1 + 0x38);
  plVar3 = *(long **)(param_2 + 8);
  *plVar3 = lVar2;
  *(long **)(lVar2 + 8) = plVar3;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  FUN_109d85128(lVar5);
  FUN_109da2380();
  return uVar4;
}



/* Entry: 109d81a4c; end: 109d81c1f;  */

ulong * FUN_109d81a4c(ulong *param_1,long param_2,undefined8 param_3,ulong param_4,
                     undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(uint *)((long)param_1 + 0x14) >> 0x1e & 1) == 0) {
    puVar5 = param_1 + ((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4;
  }
  else {
    puVar5 = (ulong *)param_1[-1];
  }
  if ((int)param_4 == -1) {
    if (param_6 == 0) {
      param_4 = 0;
    }
    else {
      param_4 = (ulong)*(uint *)(param_6 + 0x10c);
    }
  }
  FUN_109d87ecc(param_1,param_2,0,puVar5,0,param_3,param_5,param_4);
  param_1[6] = 0;
  param_1[7] = 0;
  uVar7 = (uint)param_1[4] & 0x1ffff;
  *(uint *)(param_1 + 4) = uVar7;
  param_1[8] = 0;
  param_1[9] = (ulong)(param_1 + 9);
  param_1[10] = (ulong)(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = (ulong)(*(int *)(param_2 + 0xc) - 1);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 4) = uVar7;
  if ((*(byte *)(**(long **)*param_1 + 0xa68) & 1) == 0) {
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    uVar2 = uRam00000001137e6460;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0x1000000000;
    *(undefined4 *)(puVar3 + 3) = uVar2;
    *(undefined4 *)((long)puVar3 + 0x1c) = 0;
    FUN_109d88cec(param_1 + 0xd);
  }
  if (*(int *)(param_2 + 0xc) != 1) {
    *(undefined2 *)((long)param_1 + 0x12) = 1;
  }
  if (param_6 != 0) {
    FUN_109d88d14(param_6 + 0x18,param_6 + 0x18,param_1);
  }
  if (((*(byte *)((long)param_1 + 0x17) >> 4 & 1) == 0) ||
     (puVar5 = param_1, func_0x000109da271c(), *puVar5 < 5)) {
    uVar7 = 0;
  }
  else {
    uVar4 = ((ulong)(uint5)puVar5[2] & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)(uint5)puVar5[2] & 0xff00ff00ff00ff) << 8;
    uVar1 = uVar4 & 0xffff0000ffff;
    uVar4 = uVar1 >> 0x10 | ((uVar4 & 0xffff0000ffff0000) >> 0x10 | uVar1 << 0x10) << 0x20;
    uVar6 = (uint)(0x6c6c766d2e000000 < uVar4);
    if (uVar4 < 0x6c6c766d2e000000) {
      uVar6 = 0xffffffff;
    }
    uVar7 = 0x2000;
    if (uVar6 != 0) {
      uVar7 = 0;
    }
  }
  *(uint *)(param_1 + 4) = (uint)param_1[4] & 0xffffdfff | uVar7;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    uVar4 = *(ulong *)*param_1;
    FUN_109d81c20();
    param_1[0xe] = uVar4;
  }
  return param_1;
}



/* Entry: 109d81c20; end: 109d85127;  */

long FUN_109d81c20(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 auStack_1b0 [2];
  long alStack_1a8 [41];
  
  lVar2 = 0;
  alStack_1a8[0x27] = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    *(undefined4 *)((long)auStack_1b0 + lVar2) = 0;
    *(undefined8 *)((long)alStack_1a8 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x140);
  if (param_2 != 0) {
    lVar2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000109d81cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)
                       (&UNK_10e0442ec +
                       (ulong)(*(ushort *)(&UNK_10e0534a0 + (ulong)(param_2 - 1) * 2) - 1) * 2) * 4
              + 0x109d81ccc))(0);
    return lVar2;
  }
  FUN_109d5a9e0(param_1,auStack_1b0,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_1a8[0x27]) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_109d8517c();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_109d85250(param_1);
  }
  FUN_109d852c4(param_1);
  FUN_109d88cec(param_1 + 0x68,0);
  FUN_109d87f7c(param_1 + 0x48);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109d31ef4(*(long *)(param_1 + 0x30) + 0x10,param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_109d67674();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109d85128; end: 109d8517b;  */

long FUN_109d85128(long param_1)

{
  uint uVar1;
  
  FUN_109d8517c();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_109d85250(param_1);
  }
  FUN_109d852c4(param_1);
  FUN_109d88cec(param_1 + 0x68,0);
  FUN_109d87f7c(param_1 + 0x48);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109d31ef4(*(long *)(param_1 + 0x30) + 0x10,param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_109d67674();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109d8517c; end: 109d8524f;  */

void FUN_109d8517c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfeffffff;
  puVar1 = param_1 + 9;
  for (puVar4 = (undefined8 *)param_1[10]; puVar4 != puVar1; puVar4 = (undefined8 *)puVar4[1]) {
    for (puVar5 = (undefined8 *)puVar4[3]; puVar5 != puVar4 + 2; puVar5 = (undefined8 *)puVar5[1]) {
      func_0x000109d34fec(puVar5 + -3);
    }
  }
  puVar4 = (undefined8 *)*puVar1;
  while (puVar4 != puVar1) {
    lVar3 = param_1[10];
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + -0x18;
    }
    func_0x000109d5d89c(*(long *)(lVar3 + 0x20) + 0x48,lVar2 + 0x18);
    puVar4 = (undefined8 *)param_1[9];
  }
  if ((*(uint *)((long)param_1 + 0x14) & 0x7ffffff) != 0) {
    func_0x000109d34fec(param_1);
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xf8000000;
    *(ushort *)((long)param_1 + 0x12) = *(ushort *)((long)param_1 + 0x12) & 0xfff1;
  }
  if ((*(byte *)((long)param_1 + 0x17) >> 5 & 1) != 0) {
    func_0x000109d97d30(**(long **)*param_1 + 0x990,&stack0xffffffffffffffd8);
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xdfffffff;
  }
  return;
}



/* Entry: 109d85250; end: 109d852c3;  */

void FUN_109d85250(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [32];
  undefined2 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar2 = *(long *)(param_1 + 0x60) * 0x28;
    do {
      uStack_38 = 0x101;
      FUN_109da2b08(lVar1,auStack_58);
      FUN_109da2438(lVar1);
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
    lVar1 = *(long *)(param_1 + 0x58);
  }
  __ZdlPv(lVar1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 109d852c4; end: 109d85317;  */

void FUN_109d852c4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if ((*(ushort *)((long)param_1 + 0x12) >> 0xe & 1) != 0) {
    puStack_28 = param_1;
    FUN_109d8df34(**(long **)*param_1 + 0xa50,&puStack_28);
    *(ushort *)((long)param_1 + 0x12) = *(ushort *)((long)param_1 + 0x12) & 0xbfff;
  }
  return;
}



/* Entry: 109d85318; end: 109d853eb;  */

void FUN_109d85318(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [32];
  undefined2 uStack_58;
  
  uVar5 = param_1[0xc];
  if (uVar5 != 0) {
    if (0x666666666666666 < uVar5) {
      func_0x000104c4f740();
      uVar2 = *(undefined8 *)*param_1;
      FUN_109d59ae0(uVar2,0x50,param_2 & 0xffffffff);
      puVar3 = param_1 + 0xe;
      FUN_109d5b020(puVar3,*(undefined8 *)*param_1,0xffffffff,uVar2);
      param_1[0xe] = puVar3;
      return;
    }
    lVar6 = param_1[3];
    lVar1 = uVar5 * 0x28;
    __Znwm();
    param_1[0xb] = lVar1;
    if ((uVar5 & 0xffffffff) != 0) {
      lVar1 = 0;
      iVar4 = 0;
      lVar7 = 8;
      do {
        uStack_58 = 0x101;
        FUN_109d817a0(param_1[0xb] + lVar1,*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar7),
                      auStack_78,param_1,iVar4);
        iVar4 = iVar4 + 1;
        lVar1 = lVar1 + 0x28;
        lVar7 = lVar7 + 8;
      } while ((uVar5 & 0xffffffff) * 0x28 - lVar1 != 0);
    }
  }
  *(ushort *)((long)param_1 + 0x12) = *(ushort *)((long)param_1 + 0x12) & 0xfffe;
  return;
}



/* Entry: 109d853ec; end: 109d85437;  */

void FUN_109d853ec(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)*param_1;
  FUN_109d59ae0(uVar1,0x50,param_2);
  puVar2 = param_1 + 0xe;
  FUN_109d5b020(puVar2,*(undefined8 *)*param_1,0xffffffff,uVar1);
  param_1[0xe] = puVar2;
  return;
}



/* Entry: 109d85438; end: 109d855a3;  */

uint FUN_109d85438(long param_1,undefined *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 uStack_61;
  
  puStack_a0 = param_2;
  if ((undefined *)0x4 < param_2) {
    puStack_a0 = (undefined *)0x5;
  }
  lStack_98 = (long)param_2 - (long)puStack_a0;
  puStack_a0 = puStack_a0 + param_1;
  uStack_61 = 0x2e;
  func_0x000109d39ec8(&puStack_90,&puStack_a0,&uStack_61,1);
  puVar2 = puStack_88;
  puVar6 = puStack_90;
  uVar9 = 0x13;
  ppuVar7 = &PTR_s__110b576f8;
  do {
    uVar10 = uVar9 >> 1;
    ppuVar8 = ppuVar7 + uVar10 * 4;
    puStack_88 = ppuVar8[1];
    puStack_90 = *ppuVar8;
    ppuVar4 = &puStack_90;
    func_0x000109d31f54(ppuVar4,puVar6,puVar2);
    ppuVar8 = ppuVar8 + 4;
    uVar9 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
    if (-1 < (int)ppuVar4) {
      ppuVar8 = ppuVar7;
      uVar9 = uVar10;
    }
    ppuVar7 = ppuVar8;
  } while (uVar9 != 0);
  if ((ppuVar8 != &PTR_DAT_110b57958) && (ppuVar8[1] == puVar2)) {
    if (puVar2 == (undefined *)0x0) goto LAB_109d8551c;
    puVar5 = *ppuVar8;
    _memcmp(puVar5,puVar6,puVar2);
    if ((int)puVar5 == 0) goto LAB_109d8551c;
  }
  ppuVar8 = &PTR_s__110b576f8;
LAB_109d8551c:
  puVar6 = ppuVar8[2];
  ppuVar7 = &PTR_DAT_110b41370 + (long)puVar6;
  ppuVar4 = ppuVar7;
  FUN_109d8d558(ppuVar7,ppuVar8[3],param_1,param_2);
  iVar3 = (int)ppuVar4;
  if (iVar3 != -1) {
    uVar1 = (int)puVar6 + iVar3 + 1;
    puVar6 = ppuVar7[iVar3];
    _strlen();
    if (param_2 == puVar6) {
      return uVar1;
    }
    if (((byte)(&UNK_10e052f11)[uVar1 >> 3] >> (ulong)(uVar1 & 7) & 1) != 0) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 109d855a4; end: 109d85623;  */

void FUN_109d855a4(ulong *param_1)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) != 0) {
    puVar2 = param_1;
    func_0x000109da271c();
    puVar3 = puVar2 + 2;
    if ((4 < *puVar2) && ((int)*puVar3 == 0x6d766c6c && *(char *)((long)puVar2 + 0x14) == '.')) {
      *(uint *)(param_1 + 4) = (uint)param_1[4] | 0x2000;
      FUN_109d85438();
      uVar1 = SUB84(puVar3,0);
      goto LAB_109d85600;
    }
  }
  uVar1 = 0;
  *(uint *)(param_1 + 4) = (uint)param_1[4] & 0xffffdfff;
LAB_109d85600:
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  return;
}



/* Entry: 109d85624; end: 109d85877;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109d85624(ulong *param_1,ulong param_2,long *param_3,long param_4,long *param_5,
                  long param_6)

{
  bool bVar1;
  undefined8 *******pppppppuVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 *******pppppppuVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  uint *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  uint uVar18;
  segment_command *psVar19;
  section *psVar20;
  section *psVar21;
  section *psVar22;
  section *psVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined1 uStack_178;
  uint uStack_11c;
  uint *puStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  uint auStack_100 [2];
  long lStack_f8;
  long lStack_f0;
  ulong *puStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_b8 [2];
  char cStack_a1;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  byte bStack_61;
  
  bStack_61 = 0;
  puVar25 = (&PTR_DAT_110b41368)[param_2 & 0xffffffff];
  if (puVar25 == (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    pppppppuVar5 = &pppppppuStack_80;
  }
  else {
    puVar24 = puVar25;
    plVar8 = param_3;
    _strlen();
    if ((undefined *)0x7ffffffffffffff7 < puVar24) {
      func_0x000104c4f6b8();
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppppuStack_80);
      }
      puVar25 = puVar24;
      __Unwind_Resume();
      pcStack_c8 = FUN_109d85878;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_11c = *(uint *)(&UNK_10e044690 + (ulong)((int)puVar25 - 1) * 4);
      uStack_108 = 8;
      uStack_110 = 0;
      puStack_118 = auStack_100;
      lStack_f0 = param_6;
      puStack_e8 = param_1;
      plStack_e0 = param_5;
      puStack_d8 = puVar24;
      puStack_d0 = &stack0xfffffffffffffff0;
      if ((int)uStack_11c < 0) {
        uStack_11c = uStack_11c & 0x7fffffff;
        puVar7 = (uint *)&UNK_10e04f858;
        uVar16 = 0x36b9;
      }
      else {
        do {
          func_0x000109d360b8(&puStack_118,uStack_11c & 0xf);
          bVar1 = 0xf < uStack_11c;
          uStack_11c = uStack_11c >> 4;
        } while (bVar1);
        uStack_11c = 0;
        puVar7 = puStack_118;
        uVar16 = uStack_110;
      }
      uVar14 = 0;
      puVar9 = puVar7;
      uVar12 = uVar16;
      plVar6 = plVar8;
      FUN_109d859b0(&uStack_11c);
      while( true ) {
        iVar13 = (int)uVar14;
        if ((uVar16 == uStack_11c) || (*(char *)((long)puVar7 + (ulong)uStack_11c) == '\0')) break;
        uVar14 = 0;
        puVar9 = puVar7;
        uVar12 = uVar16;
        plVar6 = plVar8;
        FUN_109d859b0(&uStack_11c);
      }
      puVar7 = puStack_118;
      if (puStack_118 != auStack_100) {
        _free();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
        return;
      }
      ___stack_chk_fail();
      if (puStack_118 != auStack_100) {
        _free();
      }
      __Unwind_Resume();
      psVar23 = (section *)0x100000002;
      uVar4 = iVar13 == 0x2b;
      psVar22 = (section *)(ulong)(byte)uVar4;
code_r0x000109d859f4:
      psVar21 = psVar22;
      goto code_r0x000109d859f8;
    }
    if (puVar24 < (undefined *)0x17) {
      uStack_70 = CONCAT17((char)puVar24,(undefined7)uStack_70);
      pppppppuVar5 = &pppppppuStack_80;
      if (puVar24 == (undefined *)0x0) goto LAB_109d856e8;
    }
    else {
      pppppppuVar2 = (undefined8 *******)0x19;
      if (((ulong)puVar24 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)(((ulong)puVar24 | 7) + 1);
      }
      pppppppuVar5 = pppppppuVar2;
      __Znwm();
      uStack_70 = (ulong)pppppppuVar2 | 0x8000000000000000;
      pppppppuStack_80 = pppppppuVar5;
      puStack_78 = puVar24;
    }
    _memmove(pppppppuVar5,puVar25,puVar24);
  }
LAB_109d856e8:
  *(undefined1 *)((long)pppppppuVar5 + (long)puVar24) = 0;
  if (param_4 != 0) {
    lVar26 = param_4 << 3;
    plVar8 = param_3;
    do {
      FUN_109d87fc0(alStack_b8,*plVar8,&bStack_61);
      plVar6 = alStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,&DAT_10f62a9de,1);
      uStack_98 = plVar6[1];
      pppppppuStack_a0 = (undefined8 *******)*plVar6;
      uStack_90 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar16 = uStack_98;
      pppppppuVar5 = pppppppuStack_a0;
      if (-1 < (long)uStack_90) {
        uVar16 = uStack_90 >> 0x38;
        pppppppuVar5 = &pppppppuStack_a0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppppuStack_80,pppppppuVar5,uVar16);
      if ((long)uStack_90 < 0) {
        __ZdlPv(pppppppuStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(alStack_b8[0]);
      }
      plVar8 = plVar8 + 1;
      lVar26 = lVar26 + -8;
    } while (lVar26 != 0);
  }
  if ((bStack_61 & 1) == 0) {
    param_1[1] = (ulong)puStack_78;
    *param_1 = (ulong)pppppppuStack_80;
    param_1[2] = uStack_70;
  }
  else {
    if (param_6 == 0) {
      param_6 = *param_5;
      FUN_109d85f4c(param_6,param_2,param_3,param_4);
    }
    pppppppuVar5 = pppppppuStack_80;
    if (-1 < (long)uStack_70._7_1_) {
      pppppppuVar5 = &pppppppuStack_80;
    }
    puVar25 = puStack_78;
    if (-1 < (long)uStack_70) {
      puVar25 = (undefined *)(long)uStack_70._7_1_;
    }
    FUN_109d9d9d4(param_1,param_5,pppppppuVar5,puVar25,param_2,param_6);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppppuStack_80);
    }
  }
  return;
code_r0x000109d859f8:
  uVar18 = *puVar7;
  psVar19 = (segment_command *)(ulong)uVar18;
code_r0x000109d859fc:
  uVar15 = uVar18 + 1;
  uVar16 = (ulong)uVar15;
code_r0x000109d85a00:
  *puVar7 = uVar15;
code_r0x000109d85a04:
  psVar22 = (section *)0x1;
  goto code_r0x000109d85a0c;
code_r0x000109d85d88:
  do {
code_r0x000109d85d9c:
    FUN_109d859b0();
    uVar18 = (int)psVar23 - 1;
    psVar23 = (section *)(ulong)uVar18;
  } while (uVar18 != 0);
  return;
code_r0x000109d85a0c:
  uVar10 = 0xc;
code_r0x000109d85a10:
  psVar20 = (section *)psVar19;
  uVar11 = 0;
  switch(*(undefined *)((long)puVar9 + (long)psVar19)) {
  case 0:
    uVar10 = 0;
    break;
  case 1:
  case 0x4f:
    uVar10 = 0x10000000a;
    break;
  case 2:
    goto code_r0x000109d85d60;
  case 3:
  case 0x5a:
    uVar10 = 0x100000000a;
  case 0x9e:
    break;
  case 4:
  case 0x66:
  case 0xf8:
    uVar10 = 0x200000000a;
    break;
  case 5:
  case 0x40:
    uVar10 = 0x400000000a;
  case 0x51:
    break;
  case 6:
    uVar10 = 5;
  case 0xa6:
    break;
  case 7:
  case 0xc6:
  case 0xb4:
  case 0xe0:
    uVar10 = 7;
    break;
  case 8:
    uVar10 = 8;
    break;
  case 9:
    uVar15 = 0xb;
    uVar4 = (int)psVar21 == 0;
    psVar20 = (section *)0x2;
  case 100:
  case 0xd4:
    psVar19 = (segment_command *)psVar23;
    if ((bool)uVar4) {
      psVar19 = (segment_command *)psVar20;
    }
    goto code_r0x000109d85b30;
  case 10:
    uVar15 = 0xb;
    psVar19 = (segment_command *)0x100000004;
    uVar4 = psVar21 == (section *)0x0;
  case 0x6c:
  case 0xb2:
  case 0xb6:
    psVar21 = (section *)0x4;
code_r0x000109d85adc:
    goto code_r0x000109d85b2c;
  case 0xb:
    uVar15 = 0xb;
    psVar19 = (segment_command *)0x100000008;
    uVar4 = psVar21 == (section *)0x0;
    psVar21 = (section *)0x8;
    goto code_r0x000109d85b2c;
  case 0xc:
    uVar15 = 0xb;
    psVar19 = (segment_command *)0x100000010;
    uVar4 = psVar21 == (section *)0x0;
    psVar21 = (section *)0x10;
    goto code_r0x000109d85b2c;
  case 0xd:
  case 0x88:
  case 0xba:
    uVar15 = 0xb;
  case 0xfd:
    psVar19 = &segment_command_100000020;
    uVar4 = psVar21 == (section *)0x0;
    psVar21 = (section *)0x20;
code_r0x000109d85b2c:
    if ((bool)uVar4) {
      psVar19 = (segment_command *)psVar21;
    }
code_r0x000109d85b30:
    uStack_17c = SUB84(psVar19,0);
    uStack_180 = uVar15;
code_r0x000109d85b34:
    uStack_178 = (undefined1)((ulong)psVar19 >> 0x20);
code_r0x000109d85b3c:
    uVar10 = CONCAT44(uStack_17c,uStack_180);
    uVar11 = uStack_178;
code_r0x000109d85b44:
    FUN_109d88ae8(plVar6,uVar10,uVar11);
    psVar22 = (section *)0x0;
code_r0x000109d85b50:
    goto code_r0x000109d859f4;
  case 0xe:
    goto code_r0x000109d85b44;
  case 0xf:
    if (uVar12 == uVar15) goto code_r0x000109d85bac;
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0xe;
    goto code_r0x000109d85ee4;
  case 0x10:
  case 0x4b:
    uVar15 = 0xb;
  case 0x5c:
  case 0xfe:
    psVar19 = (segment_command *)0x100000040;
    uVar4 = psVar21 == (section *)0x0;
code_r0x000109d85a6c:
    psVar21 = (section *)0x40;
    goto code_r0x000109d85b2c;
  case 0x11:
    uVar10 = 2;
    break;
  case 0x12:
    uVar10 = 3;
    break;
  case 0x13:
    uVar10 = 4;
    break;
  case 0x14:
    goto code_r0x000109d85dd8;
  case 0x15:
    psVar23 = (section *)0x2;
  case 0x43:
code_r0x000109d85d78:
code_r0x000109d85d7c:
code_r0x000109d85d84:
    FUN_109d88ae8();
    goto code_r0x000109d85d88;
  case 0x16:
  case 0xea:
    psVar23 = (section *)0x3;
    goto code_r0x000109d85d78;
  case 0x17:
  case 0x8a:
  case 0xb0:
    psVar23 = (section *)0x4;
    goto code_r0x000109d85d78;
  case 0x18:
    psVar23 = (section *)0x5;
    goto code_r0x000109d85d78;
  case 0x19:
    if (uVar12 == uVar15) {
      uVar10 = 0xf;
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0xf;
    goto code_r0x000109d85ee4;
  case 0x1a:
    if (uVar12 == uVar15) {
      uVar10 = 0x10;
      goto code_r0x000109d85bcc;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x10;
    goto code_r0x000109d85ee4;
  case 0x1b:
    uVar18 = uVar18 + 2;
  case 0x78:
  case 0xce:
  case 0xff:
    *puVar7 = uVar18;
    uVar10 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15) << 0x20 | 0xc;
code_r0x000109d85a8c:
    uVar11 = 0;
    goto code_r0x000109d85b44;
  case 0x1c:
    uVar15 = 0xb;
    uVar4 = psVar21 == (section *)0x0;
  case 0x82:
    psVar19 = (segment_command *)0x100000001;
code_r0x000109d85a9c:
    if ((bool)uVar4) {
      psVar19 = (segment_command *)(section *)0x1;
    }
    goto code_r0x000109d85b30;
  case 0x1d:
    uVar10 = 1;
    break;
  case 0x1e:
    if (uVar12 == uVar15) {
      uVar10 = 0x11;
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x11;
    goto code_r0x000109d85ee4;
  case 0x1f:
  case 0x41:
    uVar4 = uVar12 == uVar15;
  case 0x7e:
    if ((bool)uVar4) {
      uVar10 = 0x12;
code_r0x000109d85cc0:
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x12;
    goto code_r0x000109d85ee4;
  case 0x20:
    uVar4 = uVar12 == uVar15;
  case 0x4c:
    if ((bool)uVar4) {
      uVar10 = 0x13;
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x13;
    goto code_r0x000109d85ee4;
  case 0x21:
    uVar4 = uVar12 == uVar15;
  case 0xd8:
    if ((bool)uVar4) {
      uVar10 = 0x14;
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x14;
    goto code_r0x000109d85ee4;
  case 0x22:
    if (uVar12 == uVar15) {
      psVar19 = (segment_command *)0x0;
      goto code_r0x000109d85cd0;
    }
    *puVar7 = uVar18 + 2;
    bVar3 = *(byte *)((long)puVar9 + (ulong)uVar15);
    uVar16 = 0x15;
code_r0x000109d85f1c:
    uVar16 = uVar16 | (ulong)bVar3 << 0x30;
    if (uVar12 == uVar18 + 2) {
      psVar19 = (segment_command *)0x0;
    }
    else {
      *puVar7 = uVar18 + 3;
      psVar19 = (segment_command *)((ulong)*(byte *)((long)puVar9 + (ulong)(uVar18 + 2)) << 0x20);
    }
    goto code_r0x000109d85f40;
  case 0x23:
    uVar10 = 0x800000000a;
    break;
  case 0x24:
  case 0xee:
    uVar15 = 0xb;
    psVar19 = (segment_command *)0x100000200;
  case 0x50:
  case 0x57:
    uVar4 = psVar21 == (section *)0x0;
    psVar21 = (section *)0x200;
code_r0x000109d85a5c:
    goto code_r0x000109d85b2c;
  case 0x25:
    uVar15 = 0xb;
    psVar19 = (segment_command *)0x100000400;
    uVar4 = psVar21 == (section *)0x0;
  case 0x80:
    psVar21 = (section *)0x400;
code_r0x000109d85a48:
    goto code_r0x000109d85b2c;
  case 0x26:
  case 0x74:
    psVar23 = (section *)0x6;
    goto code_r0x000109d85d78;
  case 0x27:
  case 0x42:
    psVar23 = (section *)0x7;
    goto code_r0x000109d85d78;
  case 0x28:
    psVar23 = (section *)0x8;
    goto code_r0x000109d85d78;
  case 0x29:
  case 0x6a:
  case 0x7a:
    uVar10 = 9;
code_r0x000109d85b88:
    break;
  case 0x2a:
  case 0x48:
    if (uVar12 == uVar15) {
      uVar10 = 0x16;
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x16;
    goto code_r0x000109d85ee4;
  default:
    goto code_r0x000109d859f4;
  case 0x2c:
  case 0x76:
  case 0x84:
  case 0xe2:
    uVar4 = uVar12 == uVar15;
  case 0xf4:
    if ((bool)uVar4) {
      uVar10 = 0x17;
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x17;
code_r0x000109d85ee4:
    uVar10 = uVar10 | uVar16 << 0x20;
    break;
  case 0x2d:
    if (uVar12 == uVar15) goto code_r0x000109d85d2c;
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x18;
    goto code_r0x000109d85ee4;
  case 0x2e:
  case 0xbc:
    uVar4 = uVar12 == uVar15;
  case 0x58:
    if ((bool)uVar4) {
code_r0x000109d85b94:
      uVar10 = 0x19;
      break;
    }
    *puVar7 = uVar18 + 2;
    uVar16 = (ulong)*(byte *)((long)puVar9 + (ulong)uVar15);
    uVar10 = 0x19;
    goto code_r0x000109d85ee4;
  case 0x2f:
    uVar15 = 0xb;
    psVar19 = (segment_command *)0x100000080;
  case 0x54:
    uVar4 = psVar21 == (section *)0x0;
    psVar21 = (section *)0x80;
    goto code_r0x000109d85b2c;
  case 0x30:
    uVar10 = 6;
    break;
  case 0x31:
    psVar23 = (section *)0x9;
    goto code_r0x000109d85d78;
  case 0x32:
    uVar15 = 0xb;
  case 0x46:
    uVar4 = psVar21 == (section *)0x0;
    psVar21 = (section *)0x100;
    psVar19 = (segment_command *)&section_100000100;
    goto code_r0x000109d85b2c;
  case 0x33:
  case 0xe8:
  case 0x68:
  case 0xe6:
    uVar10 = 0x1a;
    break;
  case 0x34:
  case 0x45:
  case 0xc4:
    uVar10 = 0x1b;
  case 0xb8:
    break;
  case 0x35:
    uVar15 = 0xb;
  case 0xde:
    uVar4 = psVar21 == (section *)0x0;
code_r0x000109d85afc:
    psVar19 = (segment_command *)0x3;
    if (!(bool)uVar4) {
      psVar19 = (segment_command *)0x100000003;
    }
code_r0x000109d85b04:
    goto code_r0x000109d85b30;
  case 0x36:
    FUN_109d88ae8(plVar6,0xa0000000c,0);
code_r0x000109d85dd8:
    uVar10 = 0xd;
    break;
  case 0x37:
    FUN_109d88ae8(plVar6,0x140000000c,0);
code_r0x000109d85d60:
code_r0x000109d85d64:
    uVar10 = 0x80000000a;
    break;
  case 0x38:
    if (uVar12 != uVar15) {
      *puVar7 = uVar18 + 2;
      bVar3 = *(byte *)((long)puVar9 + (ulong)uVar15);
      uVar16 = 0x1c;
      goto code_r0x000109d85f1c;
    }
    psVar19 = (segment_command *)0x0;
  case 0xc2:
    uVar16 = 0x1c;
    goto code_r0x000109d85f40;
  case 0x39:
  case 0x98:
    uVar10 = 0x20000000a;
    break;
  case 0x3a:
  case 0x44:
  case 0xd2:
    uVar10 = 10;
  case 0x90:
  case 0x96:
    uVar10 = uVar10 | 0x400000000;
code_r0x000109d85b7c:
    break;
  case 0x3b:
  case 0x3c:
    goto code_r0x000109d85a48;
  case 0x3d:
    goto code_r0x000109d85b7c;
  case 0x3e:
  case 0xf0:
  case 0xf6:
code_r0x000109d85bcc:
    break;
  case 0x3f:
    goto code_r0x000109d85b30;
  case 0x47:
  case 0x72:
    goto code_r0x000109d85b3c;
  case 0x49:
    goto code_r0x000109d85a9c;
  case 0x4a:
    goto code_r0x000109d85b88;
  case 0x4d:
    goto code_r0x000109d85cc0;
  case 0x4e:
    goto code_r0x000109d85d84;
  case 0x55:
    goto code_r0x000109d85adc;
  case 0x56:
  case 0xd6:
    return;
  case 0x59:
  case 0x5b:
  case 0x5d:
  case 0x5f:
  case 0x6d:
  case 0x71:
  case 0x77:
  case 0x8b:
  case 0xcb:
  case 0xcd:
  case 0xd3:
  case 0xd5:
  case 0xd7:
    goto code_r0x000109d859fc;
  case 0x5e:
    goto code_r0x000109d85afc;
  case 0x62:
  case 0x65:
  case 0x73:
  case 0x75:
  case 0x7b:
  case 0x85:
  case 0x87:
  case 0x89:
  case 0x8f:
  case 0x9a:
  case 0x9f:
  case 0xc5:
  case 0xc9:
  case 0xd1:
  case 0xf2:
    goto code_r0x000109d85a00;
  case 0x67:
  case 0x6b:
  case 0x6f:
  case 0x7d:
  case 0x7f:
  case 0x83:
  case 0x93:
  case 0x95:
  case 0xa1:
  case 0xaf:
  case 0xb1:
  case 199:
  case 0xd0:
  case 0xdb:
  case 0xdf:
  case 0xef:
    goto code_r0x000109d859f8;
  case 0x6e:
    goto code_r0x000109d85b2c;
  case 0x70:
code_r0x000109d85cd0:
    uVar16 = 0x15;
  case 0xec:
code_r0x000109d85f40:
    uVar10 = (ulong)psVar19 | uVar16;
    break;
  case 0x7c:
code_r0x000109d85d2c:
    uVar10 = 0x18;
  case 0xdc:
    break;
  case 0x81:
  case 0x9d:
  case 0xb5:
  case 0xbb:
  case 0xbd:
  case 0xdd:
  case 0xe9:
  case 0xeb:
  case 0xed:
  case 0xf5:
    goto code_r0x000109d85a04;
  case 0x86:
    return;
  case 0x8e:
    goto code_r0x000109d85b04;
  case 0x92:
    goto code_r0x000109d85a6c;
  case 0x94:
    goto code_r0x000109d85a8c;
  case 0x9c:
    goto code_r0x000109d85a0c;
  case 0xa0:
    goto code_r0x000109d85d9c;
  case 0xa2:
  case 0xa4:
code_r0x000109d85bac:
    uVar10 = 0xe;
    break;
  case 0xa8:
  case 0xaa:
  case 0xbe:
    goto code_r0x000109d85a5c;
  case 0xac:
    goto code_r0x000109d85d7c;
  case 0xae:
    goto code_r0x000109d85b94;
  case 200:
    goto code_r0x000109d85d88;
  case 0xca:
    goto code_r0x000109d85a10;
  case 0xcc:
    goto code_r0x000109d85d64;
  case 0xda:
    goto code_r0x000109d85b50;
  case 0xe4:
  case 0xfa:
    goto code_r0x000109d85b34;
  }
  uVar16 = (ulong)*(uint *)(plVar6 + 1);
  if (*(uint *)((long)plVar6 + 0xc) <= *(uint *)(plVar6 + 1)) {
    func_0x000107c2b01c(plVar6,plVar6 + 2,uVar16 + 1,0xc);
    uVar16 = (ulong)*(uint *)(plVar6 + 1);
  }
  puVar17 = (ulong *)(*plVar6 + uVar16 * 0xc);
  *puVar17 = uVar10;
  *(undefined4 *)(puVar17 + 1) = 0;
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  return;
}



/* Entry: 109d85878; end: 109d859af;  */

void FUN_109d85878(int param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  segment_command *psVar15;
  section *psVar16;
  section *psVar17;
  section *psVar18;
  uint uVar19;
  section *psVar20;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  uint uStack_5c;
  uint *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(uint *)(&UNK_10e044690 + (ulong)(param_1 - 1) * 4);
  uStack_48 = 8;
  uStack_50 = 0;
  puStack_58 = auStack_40;
  if ((int)uVar19 < 0) {
    uStack_5c = uVar19 & 0x7fffffff;
    puVar4 = (uint *)&UNK_10e04f858;
    uVar13 = 0x36b9;
  }
  else {
    do {
      func_0x000109d360b8(&puStack_58,uVar19 & 0xf);
      bVar1 = 0xf < uVar19;
      uVar19 = uVar19 >> 4;
    } while (bVar1);
    uStack_5c = 0;
    puVar4 = puStack_58;
    uVar13 = uStack_50;
  }
  uVar10 = 0;
  puVar5 = puVar4;
  uVar8 = uVar13;
  plVar11 = param_2;
  FUN_109d859b0(&uStack_5c);
  while( true ) {
    iVar9 = (int)uVar10;
    if ((uVar13 == uStack_5c) || (*(char *)((long)puVar4 + (ulong)uStack_5c) == '\0')) break;
    uVar10 = 0;
    puVar5 = puVar4;
    uVar8 = uVar13;
    plVar11 = param_2;
    FUN_109d859b0(&uStack_5c);
  }
  puVar4 = puStack_58;
  if (puStack_58 != auStack_40) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_58 != auStack_40) {
    _free();
  }
  __Unwind_Resume();
  psVar20 = (section *)0x100000002;
  uVar3 = iVar9 == 0x2b;
  psVar18 = (section *)(ulong)(byte)uVar3;
code_r0x000109d859f4:
  psVar17 = psVar18;
code_r0x000109d859f8:
  uVar19 = *puVar4;
  psVar15 = (segment_command *)(ulong)uVar19;
code_r0x000109d859fc:
  uVar12 = uVar19 + 1;
  uVar13 = (ulong)uVar12;
code_r0x000109d85a00:
  *puVar4 = uVar12;
code_r0x000109d85a04:
  psVar18 = (section *)0x1;
  goto code_r0x000109d85a0c;
code_r0x000109d85d88:
  do {
code_r0x000109d85d9c:
    FUN_109d859b0();
    uVar19 = (int)psVar20 - 1;
    psVar20 = (section *)(ulong)uVar19;
  } while (uVar19 != 0);
  return;
code_r0x000109d85a0c:
  uVar6 = 0xc;
code_r0x000109d85a10:
  psVar16 = (section *)psVar15;
  uVar7 = 0;
  switch(*(undefined *)((long)puVar5 + (long)psVar15)) {
  case 0:
    uVar6 = 0;
    break;
  case 1:
  case 0x4f:
    uVar6 = 0x10000000a;
    break;
  case 2:
    goto code_r0x000109d85d60;
  case 3:
  case 0x5a:
    uVar6 = 0x100000000a;
  case 0x9e:
    break;
  case 4:
  case 0x66:
  case 0xf8:
    uVar6 = 0x200000000a;
    break;
  case 5:
  case 0x40:
    uVar6 = 0x400000000a;
  case 0x51:
    break;
  case 6:
    uVar6 = 5;
  case 0xa6:
    break;
  case 7:
  case 0xc6:
  case 0xb4:
  case 0xe0:
    uVar6 = 7;
    break;
  case 8:
    uVar6 = 8;
    break;
  case 9:
    uVar12 = 0xb;
    uVar3 = (int)psVar17 == 0;
    psVar16 = (section *)0x2;
  case 100:
  case 0xd4:
    psVar15 = (segment_command *)psVar20;
    if ((bool)uVar3) {
      psVar15 = (segment_command *)psVar16;
    }
    goto code_r0x000109d85b30;
  case 10:
    uVar12 = 0xb;
    psVar15 = (segment_command *)0x100000004;
    uVar3 = psVar17 == (section *)0x0;
  case 0x6c:
  case 0xb2:
  case 0xb6:
    psVar17 = (section *)0x4;
code_r0x000109d85adc:
    goto code_r0x000109d85b2c;
  case 0xb:
    uVar12 = 0xb;
    psVar15 = (segment_command *)0x100000008;
    uVar3 = psVar17 == (section *)0x0;
    psVar17 = (section *)0x8;
    goto code_r0x000109d85b2c;
  case 0xc:
    uVar12 = 0xb;
    psVar15 = (segment_command *)0x100000010;
    uVar3 = psVar17 == (section *)0x0;
    psVar17 = (section *)0x10;
    goto code_r0x000109d85b2c;
  case 0xd:
  case 0x88:
  case 0xba:
    uVar12 = 0xb;
  case 0xfd:
    psVar15 = &segment_command_100000020;
    uVar3 = psVar17 == (section *)0x0;
    psVar17 = (section *)0x20;
code_r0x000109d85b2c:
    if ((bool)uVar3) {
      psVar15 = (segment_command *)psVar17;
    }
code_r0x000109d85b30:
    uStack_bc = SUB84(psVar15,0);
    uStack_c0 = uVar12;
code_r0x000109d85b34:
    uStack_b8 = (undefined1)((ulong)psVar15 >> 0x20);
code_r0x000109d85b3c:
    uVar6 = CONCAT44(uStack_bc,uStack_c0);
    uVar7 = uStack_b8;
code_r0x000109d85b44:
    FUN_109d88ae8(plVar11,uVar6,uVar7);
    psVar18 = (section *)0x0;
code_r0x000109d85b50:
    goto code_r0x000109d859f4;
  case 0xe:
    goto code_r0x000109d85b44;
  case 0xf:
    if (uVar8 == uVar12) goto code_r0x000109d85bac;
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0xe;
    goto code_r0x000109d85ee4;
  case 0x10:
  case 0x4b:
    uVar12 = 0xb;
  case 0x5c:
  case 0xfe:
    psVar15 = (segment_command *)0x100000040;
    uVar3 = psVar17 == (section *)0x0;
code_r0x000109d85a6c:
    psVar17 = (section *)0x40;
    goto code_r0x000109d85b2c;
  case 0x11:
    uVar6 = 2;
    break;
  case 0x12:
    uVar6 = 3;
    break;
  case 0x13:
    uVar6 = 4;
    break;
  case 0x14:
    goto code_r0x000109d85dd8;
  case 0x15:
    psVar20 = (section *)0x2;
  case 0x43:
code_r0x000109d85d78:
code_r0x000109d85d7c:
code_r0x000109d85d84:
    FUN_109d88ae8();
    goto code_r0x000109d85d88;
  case 0x16:
  case 0xea:
    psVar20 = (section *)0x3;
    goto code_r0x000109d85d78;
  case 0x17:
  case 0x8a:
  case 0xb0:
    psVar20 = (section *)0x4;
    goto code_r0x000109d85d78;
  case 0x18:
    psVar20 = (section *)0x5;
    goto code_r0x000109d85d78;
  case 0x19:
    if (uVar8 == uVar12) {
      uVar6 = 0xf;
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0xf;
    goto code_r0x000109d85ee4;
  case 0x1a:
    if (uVar8 == uVar12) {
      uVar6 = 0x10;
      goto code_r0x000109d85bcc;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x10;
    goto code_r0x000109d85ee4;
  case 0x1b:
    uVar19 = uVar19 + 2;
  case 0x78:
  case 0xce:
  case 0xff:
    *puVar4 = uVar19;
    uVar6 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12) << 0x20 | 0xc;
code_r0x000109d85a8c:
    uVar7 = 0;
    goto code_r0x000109d85b44;
  case 0x1c:
    uVar12 = 0xb;
    uVar3 = psVar17 == (section *)0x0;
  case 0x82:
    psVar15 = (segment_command *)0x100000001;
code_r0x000109d85a9c:
    if ((bool)uVar3) {
      psVar15 = (segment_command *)(section *)0x1;
    }
    goto code_r0x000109d85b30;
  case 0x1d:
    uVar6 = 1;
    break;
  case 0x1e:
    if (uVar8 == uVar12) {
      uVar6 = 0x11;
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x11;
    goto code_r0x000109d85ee4;
  case 0x1f:
  case 0x41:
    uVar3 = uVar8 == uVar12;
  case 0x7e:
    if ((bool)uVar3) {
      uVar6 = 0x12;
code_r0x000109d85cc0:
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x12;
    goto code_r0x000109d85ee4;
  case 0x20:
    uVar3 = uVar8 == uVar12;
  case 0x4c:
    if ((bool)uVar3) {
      uVar6 = 0x13;
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x13;
    goto code_r0x000109d85ee4;
  case 0x21:
    uVar3 = uVar8 == uVar12;
  case 0xd8:
    if ((bool)uVar3) {
      uVar6 = 0x14;
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x14;
    goto code_r0x000109d85ee4;
  case 0x22:
    if (uVar8 == uVar12) {
      psVar15 = (segment_command *)0x0;
      goto code_r0x000109d85cd0;
    }
    *puVar4 = uVar19 + 2;
    bVar2 = *(byte *)((long)puVar5 + (ulong)uVar12);
    uVar13 = 0x15;
code_r0x000109d85f1c:
    uVar13 = uVar13 | (ulong)bVar2 << 0x30;
    if (uVar8 == uVar19 + 2) {
      psVar15 = (segment_command *)0x0;
    }
    else {
      *puVar4 = uVar19 + 3;
      psVar15 = (segment_command *)((ulong)*(byte *)((long)puVar5 + (ulong)(uVar19 + 2)) << 0x20);
    }
    goto code_r0x000109d85f40;
  case 0x23:
    uVar6 = 0x800000000a;
    break;
  case 0x24:
  case 0xee:
    uVar12 = 0xb;
    psVar15 = (segment_command *)0x100000200;
  case 0x50:
  case 0x57:
    uVar3 = psVar17 == (section *)0x0;
    psVar17 = (section *)0x200;
code_r0x000109d85a5c:
    goto code_r0x000109d85b2c;
  case 0x25:
    uVar12 = 0xb;
    psVar15 = (segment_command *)0x100000400;
    uVar3 = psVar17 == (section *)0x0;
  case 0x80:
    psVar17 = (section *)0x400;
code_r0x000109d85a48:
    goto code_r0x000109d85b2c;
  case 0x26:
  case 0x74:
    psVar20 = (section *)0x6;
    goto code_r0x000109d85d78;
  case 0x27:
  case 0x42:
    psVar20 = (section *)0x7;
    goto code_r0x000109d85d78;
  case 0x28:
    psVar20 = (section *)0x8;
    goto code_r0x000109d85d78;
  case 0x29:
  case 0x6a:
  case 0x7a:
    uVar6 = 9;
code_r0x000109d85b88:
    break;
  case 0x2a:
  case 0x48:
    if (uVar8 == uVar12) {
      uVar6 = 0x16;
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x16;
    goto code_r0x000109d85ee4;
  default:
    goto code_r0x000109d859f4;
  case 0x2c:
  case 0x76:
  case 0x84:
  case 0xe2:
    uVar3 = uVar8 == uVar12;
  case 0xf4:
    if ((bool)uVar3) {
      uVar6 = 0x17;
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x17;
code_r0x000109d85ee4:
    uVar6 = uVar6 | uVar13 << 0x20;
    break;
  case 0x2d:
    if (uVar8 == uVar12) goto code_r0x000109d85d2c;
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x18;
    goto code_r0x000109d85ee4;
  case 0x2e:
  case 0xbc:
    uVar3 = uVar8 == uVar12;
  case 0x58:
    if ((bool)uVar3) {
code_r0x000109d85b94:
      uVar6 = 0x19;
      break;
    }
    *puVar4 = uVar19 + 2;
    uVar13 = (ulong)*(byte *)((long)puVar5 + (ulong)uVar12);
    uVar6 = 0x19;
    goto code_r0x000109d85ee4;
  case 0x2f:
    uVar12 = 0xb;
    psVar15 = (segment_command *)0x100000080;
  case 0x54:
    uVar3 = psVar17 == (section *)0x0;
    psVar17 = (section *)0x80;
    goto code_r0x000109d85b2c;
  case 0x30:
    uVar6 = 6;
    break;
  case 0x31:
    psVar20 = (section *)0x9;
    goto code_r0x000109d85d78;
  case 0x32:
    uVar12 = 0xb;
  case 0x46:
    uVar3 = psVar17 == (section *)0x0;
    psVar17 = (section *)0x100;
    psVar15 = (segment_command *)&section_100000100;
    goto code_r0x000109d85b2c;
  case 0x33:
  case 0xe8:
  case 0x68:
  case 0xe6:
    uVar6 = 0x1a;
    break;
  case 0x34:
  case 0x45:
  case 0xc4:
    uVar6 = 0x1b;
  case 0xb8:
    break;
  case 0x35:
    uVar12 = 0xb;
  case 0xde:
    uVar3 = psVar17 == (section *)0x0;
code_r0x000109d85afc:
    psVar15 = (segment_command *)0x3;
    if (!(bool)uVar3) {
      psVar15 = (segment_command *)0x100000003;
    }
code_r0x000109d85b04:
    goto code_r0x000109d85b30;
  case 0x36:
    FUN_109d88ae8(plVar11,0xa0000000c,0);
code_r0x000109d85dd8:
    uVar6 = 0xd;
    break;
  case 0x37:
    FUN_109d88ae8(plVar11,0x140000000c,0);
code_r0x000109d85d60:
code_r0x000109d85d64:
    uVar6 = 0x80000000a;
    break;
  case 0x38:
    if (uVar8 != uVar12) {
      *puVar4 = uVar19 + 2;
      bVar2 = *(byte *)((long)puVar5 + (ulong)uVar12);
      uVar13 = 0x1c;
      goto code_r0x000109d85f1c;
    }
    psVar15 = (segment_command *)0x0;
  case 0xc2:
    uVar13 = 0x1c;
    goto code_r0x000109d85f40;
  case 0x39:
  case 0x98:
    uVar6 = 0x20000000a;
    break;
  case 0x3a:
  case 0x44:
  case 0xd2:
    uVar6 = 10;
  case 0x90:
  case 0x96:
    uVar6 = uVar6 | 0x400000000;
code_r0x000109d85b7c:
    break;
  case 0x3b:
  case 0x3c:
    goto code_r0x000109d85a48;
  case 0x3d:
    goto code_r0x000109d85b7c;
  case 0x3e:
  case 0xf0:
  case 0xf6:
code_r0x000109d85bcc:
    break;
  case 0x3f:
    goto code_r0x000109d85b30;
  case 0x47:
  case 0x72:
    goto code_r0x000109d85b3c;
  case 0x49:
    goto code_r0x000109d85a9c;
  case 0x4a:
    goto code_r0x000109d85b88;
  case 0x4d:
    goto code_r0x000109d85cc0;
  case 0x4e:
    goto code_r0x000109d85d84;
  case 0x55:
    goto code_r0x000109d85adc;
  case 0x56:
  case 0xd6:
    return;
  case 0x59:
  case 0x5b:
  case 0x5d:
  case 0x5f:
  case 0x6d:
  case 0x71:
  case 0x77:
  case 0x8b:
  case 0xcb:
  case 0xcd:
  case 0xd3:
  case 0xd5:
  case 0xd7:
    goto code_r0x000109d859fc;
  case 0x5e:
    goto code_r0x000109d85afc;
  case 0x62:
  case 0x65:
  case 0x73:
  case 0x75:
  case 0x7b:
  case 0x85:
  case 0x87:
  case 0x89:
  case 0x8f:
  case 0x9a:
  case 0x9f:
  case 0xc5:
  case 0xc9:
  case 0xd1:
  case 0xf2:
    goto code_r0x000109d85a00;
  case 0x67:
  case 0x6b:
  case 0x6f:
  case 0x7d:
  case 0x7f:
  case 0x83:
  case 0x93:
  case 0x95:
  case 0xa1:
  case 0xaf:
  case 0xb1:
  case 199:
  case 0xd0:
  case 0xdb:
  case 0xdf:
  case 0xef:
    goto code_r0x000109d859f8;
  case 0x6e:
    goto code_r0x000109d85b2c;
  case 0x70:
code_r0x000109d85cd0:
    uVar13 = 0x15;
  case 0xec:
code_r0x000109d85f40:
    uVar6 = (ulong)psVar15 | uVar13;
    break;
  case 0x7c:
code_r0x000109d85d2c:
    uVar6 = 0x18;
  case 0xdc:
    break;
  case 0x81:
  case 0x9d:
  case 0xb5:
  case 0xbb:
  case 0xbd:
  case 0xdd:
  case 0xe9:
  case 0xeb:
  case 0xed:
  case 0xf5:
    goto code_r0x000109d85a04;
  case 0x86:
    return;
  case 0x8e:
    goto code_r0x000109d85b04;
  case 0x92:
    goto code_r0x000109d85a6c;
  case 0x94:
    goto code_r0x000109d85a8c;
  case 0x9c:
    goto code_r0x000109d85a0c;
  case 0xa0:
    goto code_r0x000109d85d9c;
  case 0xa2:
  case 0xa4:
code_r0x000109d85bac:
    uVar6 = 0xe;
    break;
  case 0xa8:
  case 0xaa:
  case 0xbe:
    goto code_r0x000109d85a5c;
  case 0xac:
    goto code_r0x000109d85d7c;
  case 0xae:
    goto code_r0x000109d85b94;
  case 200:
    goto code_r0x000109d85d88;
  case 0xca:
    goto code_r0x000109d85a10;
  case 0xcc:
    goto code_r0x000109d85d64;
  case 0xda:
    goto code_r0x000109d85b50;
  case 0xe4:
  case 0xfa:
    goto code_r0x000109d85b34;
  }
  uVar13 = (ulong)*(uint *)(plVar11 + 1);
  if (*(uint *)((long)plVar11 + 0xc) <= *(uint *)(plVar11 + 1)) {
    func_0x000107c2b01c(plVar11,plVar11 + 2,uVar13 + 1,0xc);
    uVar13 = (ulong)*(uint *)(plVar11 + 1);
  }
  puVar14 = (ulong *)(*plVar11 + uVar13 * 0xc);
  *puVar14 = uVar6;
  *(undefined4 *)(puVar14 + 1) = 0;
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  return;
}



/* Entry: 109d859b0; end: 109d85f4b;  */

void FUN_109d859b0(uint *param_1,long param_2,ulong param_3,int param_4,long *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  segment_command *psVar9;
  section *psVar10;
  section *psVar11;
  section *psVar12;
  section *psVar13;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  
  psVar13 = (section *)0x100000002;
  uVar2 = param_4 == 0x2b;
  psVar12 = (section *)(ulong)(byte)uVar2;
code_r0x000109d859f4:
  psVar11 = psVar12;
code_r0x000109d859f8:
  uVar8 = *param_1;
  psVar9 = (segment_command *)(ulong)uVar8;
code_r0x000109d859fc:
  uVar5 = uVar8 + 1;
  uVar6 = (ulong)uVar5;
code_r0x000109d85a00:
  *param_1 = uVar5;
code_r0x000109d85a04:
  psVar12 = (section *)0x1;
  goto code_r0x000109d85a0c;
code_r0x000109d85d88:
  do {
code_r0x000109d85d9c:
    FUN_109d859b0();
    uVar8 = (int)psVar13 - 1;
    psVar13 = (section *)(ulong)uVar8;
  } while (uVar8 != 0);
  return;
code_r0x000109d85a0c:
  uVar3 = 0xc;
code_r0x000109d85a10:
  psVar10 = (section *)psVar9;
  uVar4 = 0;
  switch(((section *)psVar9)->sectname[param_2]) {
  case '\0':
    uVar3 = 0;
    break;
  case '\x01':
  case 'O':
    uVar3 = 0x10000000a;
    break;
  case '\x02':
    goto code_r0x000109d85d60;
  case '\x03':
  case 'Z':
    uVar3 = 0x100000000a;
  case -0x62:
    break;
  case '\x04':
  case 'f':
  case -8:
    uVar3 = 0x200000000a;
    break;
  case '\x05':
  case '@':
    uVar3 = 0x400000000a;
  case 'Q':
    break;
  case '\x06':
    uVar3 = 5;
  case -0x5a:
    break;
  case '\a':
  case -0x3a:
  case -0x4c:
  case -0x20:
    uVar3 = 7;
    break;
  case '\b':
    uVar3 = 8;
    break;
  case '\t':
    uVar5 = 0xb;
    uVar2 = (int)psVar11 == 0;
    psVar10 = (section *)0x2;
  case 'd':
  case -0x2c:
    psVar9 = (segment_command *)psVar13;
    if ((bool)uVar2) {
      psVar9 = (segment_command *)psVar10;
    }
    goto code_r0x000109d85b30;
  case '\n':
    uVar5 = 0xb;
    psVar9 = (segment_command *)0x100000004;
    uVar2 = psVar11 == (section *)0x0;
  case 'l':
  case -0x4e:
  case -0x4a:
    psVar11 = (section *)0x4;
code_r0x000109d85adc:
    goto code_r0x000109d85b2c;
  case '\v':
    uVar5 = 0xb;
    psVar9 = (segment_command *)0x100000008;
    uVar2 = psVar11 == (section *)0x0;
    psVar11 = (section *)0x8;
    goto code_r0x000109d85b2c;
  case '\f':
    uVar5 = 0xb;
    psVar9 = (segment_command *)0x100000010;
    uVar2 = psVar11 == (section *)0x0;
    psVar11 = (section *)0x10;
    goto code_r0x000109d85b2c;
  case '\r':
  case -0x78:
  case -0x46:
    uVar5 = 0xb;
  case -3:
    psVar9 = &segment_command_100000020;
    uVar2 = psVar11 == (section *)0x0;
    psVar11 = (section *)0x20;
code_r0x000109d85b2c:
    if ((bool)uVar2) {
      psVar9 = (segment_command *)psVar11;
    }
code_r0x000109d85b30:
    uStack_5c = SUB84(psVar9,0);
    uStack_60 = uVar5;
code_r0x000109d85b34:
    uStack_58 = (undefined1)((ulong)psVar9 >> 0x20);
code_r0x000109d85b3c:
    uVar3 = CONCAT44(uStack_5c,uStack_60);
    uVar4 = uStack_58;
code_r0x000109d85b44:
    FUN_109d88ae8(param_5,uVar3,uVar4);
    psVar12 = (section *)0x0;
code_r0x000109d85b50:
    goto code_r0x000109d859f4;
  case '\x0e':
    goto code_r0x000109d85b44;
  case '\x0f':
    if (param_3 == uVar5) goto code_r0x000109d85bac;
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0xe;
    goto code_r0x000109d85ee4;
  case '\x10':
  case 'K':
    uVar5 = 0xb;
  case '\\':
  case -2:
    psVar9 = (segment_command *)0x100000040;
    uVar2 = psVar11 == (section *)0x0;
code_r0x000109d85a6c:
    psVar11 = (section *)0x40;
    goto code_r0x000109d85b2c;
  case '\x11':
    uVar3 = 2;
    break;
  case '\x12':
    uVar3 = 3;
    break;
  case '\x13':
    uVar3 = 4;
    break;
  case '\x14':
    goto code_r0x000109d85dd8;
  case '\x15':
    psVar13 = (section *)0x2;
  case 'C':
code_r0x000109d85d78:
code_r0x000109d85d7c:
code_r0x000109d85d84:
    FUN_109d88ae8();
    goto code_r0x000109d85d88;
  case '\x16':
  case -0x16:
    psVar13 = (section *)0x3;
    goto code_r0x000109d85d78;
  case '\x17':
  case -0x76:
  case -0x50:
    psVar13 = (section *)0x4;
    goto code_r0x000109d85d78;
  case '\x18':
    psVar13 = (section *)0x5;
    goto code_r0x000109d85d78;
  case '\x19':
    if (param_3 == uVar5) {
      uVar3 = 0xf;
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0xf;
    goto code_r0x000109d85ee4;
  case '\x1a':
    if (param_3 == uVar5) {
      uVar3 = 0x10;
      goto code_r0x000109d85bcc;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x10;
    goto code_r0x000109d85ee4;
  case '\x1b':
    uVar8 = uVar8 + 2;
  case 'x':
  case -0x32:
  case -1:
    *param_1 = uVar8;
    uVar3 = (ulong)*(byte *)(param_2 + (ulong)uVar5) << 0x20 | 0xc;
code_r0x000109d85a8c:
    uVar4 = 0;
    goto code_r0x000109d85b44;
  case '\x1c':
    uVar5 = 0xb;
    uVar2 = psVar11 == (section *)0x0;
  case -0x7e:
    psVar9 = (segment_command *)0x100000001;
code_r0x000109d85a9c:
    if ((bool)uVar2) {
      psVar9 = (segment_command *)(section *)0x1;
    }
    goto code_r0x000109d85b30;
  case '\x1d':
    uVar3 = 1;
    break;
  case '\x1e':
    if (param_3 == uVar5) {
      uVar3 = 0x11;
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x11;
    goto code_r0x000109d85ee4;
  case '\x1f':
  case 'A':
    uVar2 = param_3 == uVar5;
  case '~':
    if ((bool)uVar2) {
      uVar3 = 0x12;
code_r0x000109d85cc0:
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x12;
    goto code_r0x000109d85ee4;
  case ' ':
    uVar2 = param_3 == uVar5;
  case 'L':
    if ((bool)uVar2) {
      uVar3 = 0x13;
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x13;
    goto code_r0x000109d85ee4;
  case '!':
    uVar2 = param_3 == uVar5;
  case -0x28:
    if ((bool)uVar2) {
      uVar3 = 0x14;
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x14;
    goto code_r0x000109d85ee4;
  case '\"':
    if (param_3 == uVar5) {
      psVar9 = (segment_command *)0x0;
      goto code_r0x000109d85cd0;
    }
    *param_1 = uVar8 + 2;
    bVar1 = *(byte *)(param_2 + (ulong)uVar5);
    uVar6 = 0x15;
code_r0x000109d85f1c:
    uVar6 = uVar6 | (ulong)bVar1 << 0x30;
    if (param_3 == uVar8 + 2) {
      psVar9 = (segment_command *)0x0;
    }
    else {
      *param_1 = uVar8 + 3;
      psVar9 = (segment_command *)((ulong)*(byte *)(param_2 + (ulong)(uVar8 + 2)) << 0x20);
    }
    goto code_r0x000109d85f40;
  case '#':
    uVar3 = 0x800000000a;
    break;
  case '$':
  case -0x12:
    uVar5 = 0xb;
    psVar9 = (segment_command *)0x100000200;
  case 'P':
  case 'W':
    uVar2 = psVar11 == (section *)0x0;
    psVar11 = (section *)0x200;
code_r0x000109d85a5c:
    goto code_r0x000109d85b2c;
  case '%':
    uVar5 = 0xb;
    psVar9 = (segment_command *)0x100000400;
    uVar2 = psVar11 == (section *)0x0;
  case -0x80:
    psVar11 = (section *)0x400;
code_r0x000109d85a48:
    goto code_r0x000109d85b2c;
  case '&':
  case 't':
    psVar13 = (section *)0x6;
    goto code_r0x000109d85d78;
  case '\'':
  case 'B':
    psVar13 = (section *)0x7;
    goto code_r0x000109d85d78;
  case '(':
    psVar13 = (section *)0x8;
    goto code_r0x000109d85d78;
  case ')':
  case 'j':
  case 'z':
    uVar3 = 9;
code_r0x000109d85b88:
    break;
  case '*':
  case 'H':
    if (param_3 == uVar5) {
      uVar3 = 0x16;
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x16;
    goto code_r0x000109d85ee4;
  default:
    goto code_r0x000109d859f4;
  case ',':
  case 'v':
  case -0x7c:
  case -0x1e:
    uVar2 = param_3 == uVar5;
  case -0xc:
    if ((bool)uVar2) {
      uVar3 = 0x17;
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x17;
code_r0x000109d85ee4:
    uVar3 = uVar3 | uVar6 << 0x20;
    break;
  case '-':
    if (param_3 == uVar5) goto code_r0x000109d85d2c;
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x18;
    goto code_r0x000109d85ee4;
  case '.':
  case -0x44:
    uVar2 = param_3 == uVar5;
  case 'X':
    if ((bool)uVar2) {
code_r0x000109d85b94:
      uVar3 = 0x19;
      break;
    }
    *param_1 = uVar8 + 2;
    uVar6 = (ulong)*(byte *)(param_2 + (ulong)uVar5);
    uVar3 = 0x19;
    goto code_r0x000109d85ee4;
  case '/':
    uVar5 = 0xb;
    psVar9 = (segment_command *)0x100000080;
  case 'T':
    uVar2 = psVar11 == (section *)0x0;
    psVar11 = (section *)0x80;
    goto code_r0x000109d85b2c;
  case '0':
    uVar3 = 6;
    break;
  case '1':
    psVar13 = (section *)0x9;
    goto code_r0x000109d85d78;
  case '2':
    uVar5 = 0xb;
  case 'F':
    uVar2 = psVar11 == (section *)0x0;
    psVar11 = (section *)0x100;
    psVar9 = (segment_command *)&section_100000100;
    goto code_r0x000109d85b2c;
  case '3':
  case -0x18:
  case 'h':
  case -0x1a:
    uVar3 = 0x1a;
    break;
  case '4':
  case 'E':
  case -0x3c:
    uVar3 = 0x1b;
  case -0x48:
    break;
  case '5':
    uVar5 = 0xb;
  case -0x22:
    uVar2 = psVar11 == (section *)0x0;
code_r0x000109d85afc:
    psVar9 = (segment_command *)0x3;
    if (!(bool)uVar2) {
      psVar9 = (segment_command *)0x100000003;
    }
code_r0x000109d85b04:
    goto code_r0x000109d85b30;
  case '6':
    FUN_109d88ae8(param_5,0xa0000000c,0);
code_r0x000109d85dd8:
    uVar3 = 0xd;
    break;
  case '7':
    FUN_109d88ae8(param_5,0x140000000c,0);
code_r0x000109d85d60:
code_r0x000109d85d64:
    uVar3 = 0x80000000a;
    break;
  case '8':
    if (param_3 != uVar5) {
      *param_1 = uVar8 + 2;
      bVar1 = *(byte *)(param_2 + (ulong)uVar5);
      uVar6 = 0x1c;
      goto code_r0x000109d85f1c;
    }
    psVar9 = (segment_command *)0x0;
  case -0x3e:
    uVar6 = 0x1c;
    goto code_r0x000109d85f40;
  case '9':
  case -0x68:
    uVar3 = 0x20000000a;
    break;
  case ':':
  case 'D':
  case -0x2e:
    uVar3 = 10;
  case -0x70:
  case -0x6a:
    uVar3 = uVar3 | 0x400000000;
code_r0x000109d85b7c:
    break;
  case ';':
  case '<':
    goto code_r0x000109d85a48;
  case '=':
    goto code_r0x000109d85b7c;
  case '>':
  case -0x10:
  case -10:
code_r0x000109d85bcc:
    break;
  case '?':
    goto code_r0x000109d85b30;
  case 'G':
  case 'r':
    goto code_r0x000109d85b3c;
  case 'I':
    goto code_r0x000109d85a9c;
  case 'J':
    goto code_r0x000109d85b88;
  case 'M':
    goto code_r0x000109d85cc0;
  case 'N':
    goto code_r0x000109d85d84;
  case 'U':
    goto code_r0x000109d85adc;
  case 'V':
  case -0x2a:
    return;
  case 'Y':
  case '[':
  case ']':
  case '_':
  case 'm':
  case 'q':
  case 'w':
  case -0x75:
  case -0x35:
  case -0x33:
  case -0x2d:
  case -0x2b:
  case -0x29:
    goto code_r0x000109d859fc;
  case '^':
    goto code_r0x000109d85afc;
  case 'b':
  case 'e':
  case 's':
  case 'u':
  case '{':
  case -0x7b:
  case -0x79:
  case -0x77:
  case -0x71:
  case -0x66:
  case -0x61:
  case -0x3b:
  case -0x37:
  case -0x2f:
  case -0xe:
    goto code_r0x000109d85a00;
  case 'g':
  case 'k':
  case 'o':
  case '}':
  case '\x7f':
  case -0x7d:
  case -0x6d:
  case -0x6b:
  case -0x5f:
  case -0x51:
  case -0x4f:
  case -0x39:
  case -0x30:
  case -0x25:
  case -0x21:
  case -0x11:
    goto code_r0x000109d859f8;
  case 'n':
    goto code_r0x000109d85b2c;
  case 'p':
code_r0x000109d85cd0:
    uVar6 = 0x15;
  case -0x14:
code_r0x000109d85f40:
    uVar3 = (ulong)psVar9 | uVar6;
    break;
  case '|':
code_r0x000109d85d2c:
    uVar3 = 0x18;
  case -0x24:
    break;
  case -0x7f:
  case -99:
  case -0x4b:
  case -0x45:
  case -0x43:
  case -0x23:
  case -0x17:
  case -0x15:
  case -0x13:
  case -0xb:
    goto code_r0x000109d85a04;
  case -0x7a:
    return;
  case -0x72:
    goto code_r0x000109d85b04;
  case -0x6e:
    goto code_r0x000109d85a6c;
  case -0x6c:
    goto code_r0x000109d85a8c;
  case -100:
    goto code_r0x000109d85a0c;
  case -0x60:
    goto code_r0x000109d85d9c;
  case -0x5e:
  case -0x5c:
code_r0x000109d85bac:
    uVar3 = 0xe;
    break;
  case -0x58:
  case -0x56:
  case -0x42:
    goto code_r0x000109d85a5c;
  case -0x54:
    goto code_r0x000109d85d7c;
  case -0x52:
    goto code_r0x000109d85b94;
  case -0x38:
    goto code_r0x000109d85d88;
  case -0x36:
    goto code_r0x000109d85a10;
  case -0x34:
    goto code_r0x000109d85d64;
  case -0x26:
    goto code_r0x000109d85b50;
  case -0x1c:
  case -6:
    goto code_r0x000109d85b34;
  }
  uVar6 = (ulong)*(uint *)(param_5 + 1);
  if (*(uint *)((long)param_5 + 0xc) <= *(uint *)(param_5 + 1)) {
    func_0x000107c2b01c(param_5,param_5 + 2,uVar6 + 1,0xc);
    uVar6 = (ulong)*(uint *)(param_5 + 1);
  }
  puVar7 = (ulong *)(*param_5 + uVar6 * 0xc);
  *puVar7 = uVar3;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  return;
}



/* Entry: 109d85f4c; end: 109d860ef;  */

long *****
FUN_109d85f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  ulong uVar4;
  undefined8 uVar5;
  long ****pppplStack_138;
  ulong uStack_130;
  undefined1 *puStack_128;
  ulong uStack_120;
  undefined1 auStack_118 [64];
  long ****pppplStack_d8;
  ulong uStack_d0;
  long ***appplStack_c8 [12];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 0x800000000;
  pppplStack_d8 = appplStack_c8;
  FUN_109d85878(param_2,&pppplStack_d8);
  uStack_130 = uStack_d0 & 0xffffffff;
  pppplStack_138 = pppplStack_d8;
  ppppplVar2 = &pppplStack_138;
  FUN_109d860f0(ppppplVar2,param_3,param_4,param_1);
  uStack_120 = 0x800000000;
  puStack_128 = auStack_118;
  while (uStack_130 != 0) {
    ppppplVar3 = &pppplStack_138;
    FUN_109d860f0(ppppplVar3,param_3,param_4,param_1);
    func_0x000109d33d14(&puStack_128,ppppplVar3);
  }
  uVar4 = uStack_120 & 0xffffffff;
  if ((int)uStack_120 == 0) {
    uVar4 = 0;
  }
  else if (*(char *)(*(long *)(puStack_128 + uVar4 * 8 + -8) + 8) == '\a') {
    uVar4 = (ulong)((int)uStack_120 - 1U);
    uStack_120 = CONCAT44(uStack_120._4_4_,(int)uStack_120 - 1U);
    uVar5 = 1;
    goto LAB_109d86048;
  }
  uVar5 = 0;
LAB_109d86048:
  FUN_109d9f92c(ppppplVar2,puStack_128,uVar4,uVar5);
  if (puStack_128 != auStack_118) {
    _free();
  }
  ppppplVar3 = (long *****)pppplStack_d8;
  if (pppplStack_d8 != appplStack_c8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppppplVar2;
  }
  ___stack_chk_fail();
  if (puStack_128 != auStack_118) {
    _free();
  }
  if (pppplStack_d8 != appplStack_c8) {
    _free();
  }
  __Unwind_Resume();
  uVar1 = *(uint *)*ppppplVar3;
  *ppppplVar3 = (long ****)((long)*ppppplVar3 + 0xc);
  ppppplVar3[1] = (long ****)((long)ppppplVar3[1] + -1);
                    /* WARNING: Could not recover jumptable at 0x000109d86154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e0445ad)[uVar1] * 4 + 0x109d86158))();
  return ppppplVar3;
}



/* Entry: 109d860f0; end: 109d8660f;  */

void FUN_109d860f0(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)*param_1;
  *param_1 = (long)((uint *)*param_1 + 3);
  param_1[1] = param_1[1] + -1;
                    /* WARNING: Could not recover jumptable at 0x000109d86154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e0445ad)[uVar1] * 4 + 0x109d86158))();
  return;
}



/* Entry: 109d86610; end: 109d87c1b;  */

void FUN_109d86610(undefined8 param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109d8664c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10e0445ca + (ulong)param_2 * 2) * 4 + 0x109d86650))();
  return;
}



/* Entry: 109d87c1c; end: 109d87d1b;  */

undefined8 *** FUN_109d87c1c(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  char cStack_41;
  
  uVar1 = *param_1;
  FUN_109d85f4c(uVar1);
  if (param_4 == 0) {
    pppuVar3 = (undefined8 ***)(&PTR_DAT_110b41368)[param_2 & 0xffffffff];
    if (pppuVar3 == (undefined8 ***)0x0) {
      pppuVar2 = (undefined8 ***)0x0;
    }
    else {
      pppuVar2 = pppuVar3;
      _strlen(pppuVar3);
    }
  }
  else {
    FUN_109d85624(&ppuStack_58,param_2,param_3,param_4,param_1,uVar1);
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (long)cStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    pppuVar2 = (undefined8 ***)ppuStack_50;
    if (-1 < cStack_41) {
      pppuVar2 = (undefined8 ***)(long)cStack_41;
    }
  }
  FUN_109d9d3e8(param_1,pppuVar3,pppuVar2,uVar1,0);
  if ((param_4 != 0) && (cStack_41 < '\0')) {
    __ZdlPv(ppuStack_58);
  }
  return pppuVar3;
}



/* Entry: 109d87d1c; end: 109d87ecb;  */

void FUN_109d87d1c(long *param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  char *pcVar6;
  long *plVar7;
  
  func_0x000109d97b44(param_2,2);
  if (param_2 != 0) {
    puVar2 = (ulong *)(param_2 + -0x10);
    uVar4 = *puVar2;
    uVar3 = (uint)uVar4;
    if ((uVar3 >> 1 & 1) == 0) {
      puVar5 = puVar2 + -(uVar4 >> 2 & 0xf);
    }
    else {
      puVar5 = *(ulong **)(param_2 + -0x20);
    }
    pcVar6 = (char *)*puVar5;
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) {
      plVar7 = *(long **)(pcVar6 + 8);
      if (*plVar7 == 0x14) {
        if ((plVar7[3] == 0x6e6f6974636e7566 && plVar7[4] == 0x635f7972746e655f) &&
            (int)plVar7[5] == 0x746e756f) {
          if ((uVar3 >> 1 & 1) == 0) {
            puVar2 = puVar2 + -(uVar4 >> 2 & 0xf);
          }
          else {
            puVar2 = *(ulong **)(param_2 + -0x20);
          }
          plVar7 = (long *)(*(long *)(puVar2[1] + 0x80) + 0x18);
          if (0x40 < *(uint *)(*(long *)(puVar2[1] + 0x80) + 0x20)) {
            plVar7 = (long *)*plVar7;
          }
          if (*plVar7 != -1) {
            *param_1 = *plVar7;
            *(undefined4 *)(param_1 + 1) = 0;
            uVar1 = 1;
            goto LAB_109d87d70;
          }
        }
      }
      else if (((param_3 != 0) && (*plVar7 == 0x1e)) &&
              (((plVar7[3] == 0x69746568746e7973 && plVar7[4] == 0x6974636e75665f63) &&
               plVar7[5] == 0x7972746e655f6e6f) &&
               *(long *)((long)plVar7 + 0x2e) == 0x746e756f635f7972)) {
        if ((uVar3 >> 1 & 1) == 0) {
          puVar2 = puVar2 + -(uVar4 >> 2 & 0xf);
        }
        else {
          puVar2 = *(ulong **)(param_2 + -0x20);
        }
        plVar7 = (long *)(*(long *)(puVar2[1] + 0x80) + 0x18);
        if (0x40 < *(uint *)(*(long *)(puVar2[1] + 0x80) + 0x20)) {
          plVar7 = (long *)*plVar7;
        }
        *param_1 = *plVar7;
        uVar1 = 1;
        *(undefined4 *)(param_1 + 1) = 1;
        goto LAB_109d87d70;
      }
    }
  }
  uVar1 = 0;
  *(undefined1 *)param_1 = 0;
LAB_109d87d70:
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 109d87ecc; end: 109d87f7b;  */

undefined8 *
FUN_109d87ecc(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             uint param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000109da017c(param_2,param_8);
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  *(uint *)((long)param_1 + 0x14) =
       *(uint *)((long)param_1 + 0x14) & 0xc0000000 | param_5 & 0x7ffffff;
  param_1[3] = param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffe000f;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  FUN_109d3885c(param_1,param_6);
  FUN_109da2b08(param_1,param_7);
  return param_1;
}



/* Entry: 109d87f7c; end: 109d87fbf;  */

long FUN_109d87f7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_1) {
    lVar1 = param_1;
    func_0x000109d5d89c();
  }
  return param_1;
}



/* Entry: 109d87fc0; end: 109d88a33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109d87fc0(byte *******param_1,byte *******param_2,byte *******param_3,byte *******param_4,
                  long param_5)

{
  bool bVar1;
  byte ******ppppppbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *******pppppppbVar6;
  code *pcVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  char in_NG;
  char in_OV;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *******pppppppbVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte ******ppppppbVar21;
  byte *******extraout_x8;
  int iVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  undefined8 unaff_x22;
  ulong uVar25;
  long lVar26;
  undefined8 *******pppppppuVar27;
  byte ******in_register_00005008;
  undefined1 auStack_100 [23];
  undefined1 auStack_e9 [9];
  undefined8 *******pppppppuStack_e0;
  code *pcStack_d8;
  byte *******pppppppbStack_d0;
  byte ******ppppppbStack_c8;
  byte ******ppppppbStack_c0;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  undefined8 uStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte abStack_84 [4];
  byte *******apppppppbStack_80 [2];
  byte abStack_6c [4];
  long lStack_68;
  
  pppppppbVar8 = (byte *******)&pppppppbStack_d0;
  pppppppbVar13 = (byte *******)&pppppppbStack_d0;
  pppppppbVar11 = (byte *******)&pppppppbStack_d0;
  pppppppbVar19 = (byte *******)&pppppppbStack_d0;
  pppppppbVar12 = (byte *******)&pppppppbStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_2 = (byte ******)0x0;
  param_2[1] = (byte ******)0x0;
  param_2[2] = (byte ******)0x0;
  uVar5 = *(uint *)(param_3 + 1);
  pppppppbVar20 = (byte *******)(ulong)uVar5;
  uVar3 = uVar5 & 0xff;
  if (param_3 != (byte *******)0x0) {
    in_OV = SBORROW4(uVar3,0xf);
    in_NG = (int)(uVar3 - 0xf) < 0;
    if (uVar3 != 0xf) goto LAB_109d88038;
    pbVar15 = abStack_6c + 1;
    if (uVar5 < 0x100) {
      pbVar16 = abStack_6c;
      abStack_6c[0] = 0x30;
    }
    else {
      pbVar16 = pbVar15;
      uVar25 = (ulong)(uVar5 >> 8);
      do {
        pbVar16 = pbVar16 + -1;
        *pbVar16 = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
        bVar1 = 9 < uVar25;
        uVar25 = uVar25 / 10;
      } while (bVar1);
    }
    func_0x0001092d2e50(&pppppppbStack_d0,pbVar16,pbVar15,(long)pbVar15 - (long)pbVar16);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (&pppppppbStack_d0,0,&DAT_10f3dc1a1,1);
    pppppppbStack_a8 = (byte *******)pppppppbVar13[1];
    pppppppbStack_b0 = (byte *******)*pppppppbVar13;
    uStack_a0 = (ulong)pppppppbVar13[2];
    pppppppbVar13[1] = (byte ******)0x0;
    pppppppbVar13[2] = (byte ******)0x0;
    *pppppppbVar13 = (byte ******)0x0;
    pppppppbVar20 = pppppppbStack_a8;
    pppppppbVar12 = pppppppbStack_b0;
    if (-1 < (long)uStack_a0) {
      pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
      pppppppbVar12 = (byte *******)&pppppppbStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppppppbVar12,pppppppbVar20);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(pppppppbStack_b0);
    }
    if ((long)ppppppbStack_c0 < 0) {
      __ZdlPv(pppppppbStack_d0);
    }
    if (param_3[3] != (byte ******)0x0) {
      FUN_109d87fc0(&pppppppbStack_b0,*param_3[2],param_4);
      pppppppbVar20 = pppppppbStack_a8;
      pppppppbVar12 = pppppppbStack_b0;
      if (-1 < (long)uStack_a0) {
        pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
        pppppppbVar12 = (byte *******)&pppppppbStack_b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppppbVar12,pppppppbVar20);
      apppppppbStack_80[0] = pppppppbStack_b0;
      if (-1 < (long)uStack_a0) goto LAB_109d886e8;
      goto LAB_109d883f8;
    }
    goto LAB_109d886e8;
  }
LAB_109d88038:
  if (param_3 != (byte *******)0x0) {
    in_OV = SBORROW4(uVar3,0x11);
    in_NG = (int)(uVar3 - 0x11) < 0;
    if (uVar3 != 0x11) goto LAB_109d88088;
    ppppppbVar21 = param_3[4];
    pbVar16 = abStack_84 + 1;
    pbVar15 = pbVar16;
    if (ppppppbVar21 == (byte ******)0x0) {
      pbVar15 = abStack_84;
      abStack_84[0] = 0x30;
    }
    else {
      do {
        pbVar15 = pbVar15 + -1;
        *pbVar15 = (char)ppppppbVar21 + (char)(byte ******)((ulong)ppppppbVar21 / 10) * -10 | 0x30;
        bVar1 = (byte ******)0x9 < ppppppbVar21;
        ppppppbVar21 = (byte ******)((ulong)ppppppbVar21 / 10);
      } while (bVar1);
    }
    func_0x0001092d2e50(apppppppbStack_80,pbVar15,pbVar16,(long)pbVar16 - (long)pbVar15);
    pppppppbVar20 = (byte *******)apppppppbStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (pppppppbVar20,0,&DAT_10f3dc16b,1);
    ppppppbStack_c8 = pppppppbVar20[1];
    pppppppbStack_d0 = (byte *******)*pppppppbVar20;
    ppppppbStack_c0 = pppppppbVar20[2];
    pppppppbVar20[1] = (byte ******)0x0;
    pppppppbVar20[2] = (byte ******)0x0;
    *pppppppbVar20 = (byte ******)0x0;
    FUN_109d87fc0(&pppppppbStack_98,param_3[3],param_4);
    pppppppbVar20 = pppppppbStack_98;
    if (-1 < (char)abStack_84[3]) {
      pppppppbStack_90 = (byte *******)(ulong)abStack_84[3];
      pppppppbVar20 = (byte *******)&pppppppbStack_98;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppbStack_d0,pppppppbVar20,pppppppbStack_90);
    pppppppbStack_a8 = (byte *******)pppppppbVar19[1];
    pppppppbStack_b0 = (byte *******)*pppppppbVar19;
    uStack_a0 = (ulong)pppppppbVar19[2];
    pppppppbVar19[1] = (byte ******)0x0;
    pppppppbVar19[2] = (byte ******)0x0;
    *pppppppbVar19 = (byte ******)0x0;
    pppppppbVar20 = pppppppbStack_a8;
    pppppppbVar12 = pppppppbStack_b0;
    if (-1 < (long)uStack_a0) {
      pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
      pppppppbVar12 = (byte *******)&pppppppbStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppppppbVar12,pppppppbVar20);
    goto LAB_109d883bc;
  }
LAB_109d88088:
  if (param_3 != (byte *******)0x0) {
    in_OV = SBORROW4(uVar3,0x10);
    in_NG = (int)(uVar3 - 0x10) < 0;
    if (uVar3 == 0x10) {
      if ((uVar5 >> 10 & 1) == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,&UNK_10f5f9b3e,2);
        ppppppbVar21 = param_3[3];
        if (ppppppbVar21 == (byte ******)0x0) {
          *(byte *)param_4 = 1;
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_2,ppppppbVar21 + 2,*ppppppbVar21);
        }
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,&UNK_10f5f9b41,3);
        if (*(uint *)((long)param_3 + 0xc) != 0) {
          ppppppbVar21 = param_3[2];
          lVar26 = (ulong)*(uint *)((long)param_3 + 0xc) << 3;
          do {
            FUN_109d87fc0(&pppppppbStack_b0,*ppppppbVar21,param_4);
            pppppppbVar20 = pppppppbStack_a8;
            pppppppbVar12 = pppppppbStack_b0;
            if (-1 < (long)uStack_a0) {
              pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
              pppppppbVar12 = (byte *******)&pppppppbStack_b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_2,pppppppbVar12,pppppppbVar20);
            if ((long)uStack_a0 < 0) {
              __ZdlPv(pppppppbStack_b0);
            }
            ppppppbVar21 = ppppppbVar21 + 1;
            lVar26 = lVar26 + -8;
          } while (lVar26 != 0);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"s",1);
      goto LAB_109d886e8;
    }
  }
  if (param_3 != (byte *******)0x0) {
    in_OV = SBORROW4(uVar3,0xe);
    in_NG = (int)(uVar3 - 0xe) < 0;
    if (uVar3 == 0xe) {
      FUN_109d87fc0(&pppppppbStack_d0,*param_3[2],param_4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (&pppppppbStack_d0,0,&UNK_10f5f9b45,2);
      pppppppbStack_a8 = (byte *******)pppppppbVar11[1];
      pppppppbStack_b0 = (byte *******)*pppppppbVar11;
      uStack_a0 = (ulong)pppppppbVar11[2];
      pppppppbVar11[1] = (byte ******)0x0;
      pppppppbVar11[2] = (byte ******)0x0;
      *pppppppbVar11 = (byte ******)0x0;
      pppppppbVar20 = pppppppbStack_a8;
      pppppppbVar12 = pppppppbStack_b0;
      if (-1 < (long)uStack_a0) {
        pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
        pppppppbVar12 = (byte *******)&pppppppbStack_b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppppbVar12,pppppppbVar20);
      if ((long)uStack_a0 < 0) {
        __ZdlPv(pppppppbStack_b0);
      }
      if ((long)ppppppbStack_c0 < 0) {
        __ZdlPv(pppppppbStack_d0);
      }
      if (*(int *)((long)param_3 + 0xc) != 1) {
        uVar25 = 0;
        do {
          FUN_109d87fc0(&pppppppbStack_b0,param_3[2][uVar25 + 1],param_4);
          pppppppbVar20 = pppppppbStack_a8;
          pppppppbVar12 = pppppppbStack_b0;
          if (-1 < (long)uStack_a0) {
            pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
            pppppppbVar12 = (byte *******)&pppppppbStack_b0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_2,pppppppbVar12,pppppppbVar20);
          if ((long)uStack_a0 < 0) {
            __ZdlPv(pppppppbStack_b0);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(int *)((long)param_3 + 0xc) - 1);
      }
      if (0xff < *(uint *)(param_3 + 1)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,&UNK_10f5f9b48,6);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,&DAT_10f3dc184,1);
      goto LAB_109d886e8;
    }
  }
  if (param_3 != (byte *******)0x0) {
    uVar4 = uVar5 & 0xfe;
    in_OV = SBORROW4(uVar4,0x12);
    in_NG = (int)(uVar4 - 0x12) < 0;
    if (uVar4 != 0x12) goto LAB_109d884e8;
    uVar5 = *(uint *)(param_3 + 4);
    uVar25 = (ulong)uVar5;
    if (uVar3 == 0x13) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,&UNK_10f5f9b4f,2);
    }
    pppppppbVar20 = (byte *******)&pppppppbStack_98;
    pppppppbVar19 = (byte *******)(abStack_84 + 1);
    pcVar17 = (char *)pppppppbVar19;
    if (uVar5 == 0) goto LAB_109d88754;
    do {
      pcVar17 = (char *)((long)pcVar17 + -1);
      *pcVar17 = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
      bVar1 = 9 < uVar25;
      uVar25 = uVar25 / 10;
    } while (bVar1);
    goto LAB_109d88760;
  }
LAB_109d884e8:
  if (param_3 != (byte *******)0x0) {
    in_OV = SBORROW4(uVar3,0x15);
    in_NG = (int)(uVar3 - 0x15) < 0;
    if (uVar3 != 0x15) goto LAB_109d88720;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"t",1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,param_3[3],param_3[4]);
    if (*(uint *)((long)param_3 + 0xc) != 0) {
      ppppppbVar21 = param_3[2];
      lVar26 = (ulong)*(uint *)((long)param_3 + 0xc) << 3;
      do {
        FUN_109d87fc0(&pppppppbStack_d0,*ppppppbVar21,param_4);
        pppppppbVar20 = (byte *******)&pppppppbStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (&pppppppbStack_d0,0,"_",1);
        pppppppbStack_a8 = (byte *******)pppppppbVar20[1];
        pppppppbStack_b0 = (byte *******)*pppppppbVar20;
        uStack_a0 = (ulong)pppppppbVar20[2];
        pppppppbVar20[1] = (byte ******)0x0;
        pppppppbVar20[2] = (byte ******)0x0;
        *pppppppbVar20 = (byte ******)0x0;
        pppppppbVar20 = pppppppbStack_a8;
        pppppppbVar12 = pppppppbStack_b0;
        if (-1 < (long)uStack_a0) {
          pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
          pppppppbVar12 = (byte *******)&pppppppbStack_b0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppppppbVar12,pppppppbVar20);
        if ((long)uStack_a0 < 0) {
          __ZdlPv(pppppppbStack_b0);
        }
        if ((long)ppppppbStack_c0 < 0) {
          __ZdlPv(pppppppbStack_d0);
        }
        ppppppbVar21 = ppppppbVar21 + 1;
        lVar26 = lVar26 + -8;
      } while (lVar26 != 0);
    }
    if (0xff < *(uint *)(param_3 + 1)) {
      ppppppbVar21 = param_3[5];
      ppppppbVar2 = (byte ******)
                    ((long)ppppppbVar21 + ((ulong)(*(uint *)(param_3 + 1) >> 6) & 0x3fffffc));
      pbVar15 = abStack_6c + 1;
      do {
        pbVar16 = pbVar15;
        uVar25 = (ulong)*(uint *)ppppppbVar21;
        if (*(uint *)ppppppbVar21 == 0) {
          abStack_6c[0] = 0x30;
          pbVar16 = abStack_6c;
        }
        else {
          do {
            pbVar16 = pbVar16 + -1;
            *pbVar16 = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
            bVar1 = 9 < uVar25;
            uVar25 = uVar25 / 10;
          } while (bVar1);
        }
        func_0x0001092d2e50(&pppppppbStack_d0,pbVar16,pbVar15,(long)pbVar15 - (long)pbVar16);
        pppppppbVar20 = (byte *******)&pppppppbStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (&pppppppbStack_d0,0,"_",1);
        pppppppbStack_a8 = (byte *******)pppppppbVar20[1];
        pppppppbStack_b0 = (byte *******)*pppppppbVar20;
        uStack_a0 = (ulong)pppppppbVar20[2];
        pppppppbVar20[1] = (byte ******)0x0;
        pppppppbVar20[2] = (byte ******)0x0;
        *pppppppbVar20 = (byte ******)0x0;
        pppppppbVar20 = pppppppbStack_a8;
        pppppppbVar12 = pppppppbStack_b0;
        if (-1 < (long)uStack_a0) {
          pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
          pppppppbVar12 = (byte *******)&pppppppbStack_b0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppppppbVar12,pppppppbVar20);
        if ((long)uStack_a0 < 0) {
          __ZdlPv(pppppppbStack_b0);
        }
        if ((long)ppppppbStack_c0 < 0) {
          __ZdlPv(pppppppbStack_d0);
        }
        ppppppbVar21 = (byte ******)((long)ppppppbVar21 + 4);
      } while (ppppppbVar21 != ppppppbVar2);
    }
    pcVar17 = "t";
    pppppppbVar19 = (byte *******)0x1;
    goto LAB_109d888f8;
  }
LAB_109d88720:
  pcVar17 = &UNK_10f5f9b52;
  pppppppbVar19 = (byte *******)0x6;
  pppppppbVar23 = (byte *******)((ulong)pppppppbVar20 & 0xff);
  pppppppbVar11 = (byte *******)&UNK_10e044680;
  pppppppbVar24 = (byte *******)((ulong)*(byte *)(pppppppbVar23 + 0x21c088d0) * 4 + 0x109d88748);
  pppppppbVar9 = (byte *******)&pppppppbStack_d0;
  pppppppbVar10 = (byte *******)&pppppppbStack_d0;
  pppppppbVar13 = param_2;
  pppppppbVar14 = param_2;
  pppppppbVar18 = param_3;
  pppppppuVar27 = (undefined8 *******)&stack0xfffffffffffffff0;
  pppppppbVar6 = (byte *******)pcVar17;
  switch(pppppppbVar23) {
  default:
    pcVar17 = &UNK_10f5f9000;
  case (byte *******)0x12:
  case (byte *******)0xcd:
  case (byte *******)0xde:
  case (byte *******)0xe6:
    pcVar17 = (char *)((long)pcVar17 + 0xb59);
code_r0x000109d88750:
code_r0x000109d888e4:
    pppppppbVar19 = (byte *******)0x3;
    break;
  case (byte *******)0x1:
    pcVar17 = &UNK_10f5f9b5d;
    goto code_r0x000109d888f4;
  case (byte *******)0x2:
  case (byte *******)0x4c:
  case (byte *******)0xf4:
    pcVar17 = &UNK_10f62b4a0;
    goto code_r0x000109d888e4;
  case (byte *******)0x3:
    pcVar17 = &UNK_10f5f9b62;
    goto code_r0x000109d888e4;
  case (byte *******)0x4:
    pcVar17 = &UNK_10f5f9b66;
    goto code_r0x000109d888e4;
  case (byte *******)0x5:
    pcVar17 = &UNK_10f5f9b6a;
code_r0x000109d888f4:
    pppppppbVar19 = (byte *******)0x4;
    break;
  case (byte *******)0x6:
    pcVar17 = &UNK_10f5f9b6f;
    pppppppbVar19 = (byte *******)0x7;
    break;
  case (byte *******)0x7:
    break;
  case (byte *******)0x8:
  case (byte *******)0xc:
    goto code_r0x000109d88908;
  case (byte *******)0x9:
    pcVar17 = "Metadata";
    pppppppbVar19 = (byte *******)0x8;
    break;
  case (byte *******)0xa:
    pcVar17 = &UNK_10f5f9b77;
  case (byte *******)0x14:
code_r0x000109d888c4:
    pppppppbVar19 = (byte *******)0x6;
    break;
  case (byte *******)0xb:
  case (byte *******)0xa0:
    pcVar17 = &UNK_10f5f9b7e;
    goto code_r0x000109d888c4;
  case (byte *******)0xd:
    pppppppbVar20 = (byte *******)(ulong)(uVar5 >> 8);
  case (byte *******)0x3d:
  case (byte *******)0x4d:
  case (byte *******)0x61:
  case (byte *******)0x69:
  case (byte *******)0x6d:
  case (byte *******)0xf5:
    pppppppbVar13 = pppppppbVar20;
code_r0x000109d88818:
    pppppppbVar20 = (byte *******)&pppppppbStack_d0;
code_r0x000109d8881c:
    FUN_109d88a34(pppppppbVar20,pppppppbVar13,0);
    param_4 = (byte *******)&pppppppbStack_b0;
    func_0x00010928a5e0(&pppppppbStack_b0,"i",&pppppppbStack_d0);
    pppppppbVar20 = (byte *******)(ulong)uStack_a0._7_1_;
    pppppppbVar23 = (byte *******)(ulong)(uint)(int)(char)uStack_a0._7_1_;
code_r0x000109d88844:
    in_NG = (int)pppppppbVar23 < 0;
    in_OV = '\0';
    pcVar17 = (char *)pppppppbStack_b0;
    pppppppbVar24 = pppppppbStack_a8;
    if (!(bool)in_NG) {
      pcVar17 = (char *)param_4;
    }
code_r0x000109d88850:
    if (in_NG == in_OV) {
      pppppppbVar24 = pppppppbVar20;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pcVar17,pppppppbVar24);
code_r0x000109d8885c:
    if ((long)uStack_a0 < 0) {
      __ZdlPv(pppppppbStack_b0);
    }
    apppppppbStack_80[0] = pppppppbStack_d0;
    if ((long)ppppppbStack_c0 < 0) {
LAB_109d883f8:
      __ZdlPv(apppppppbStack_80[0]);
    }
    goto LAB_109d886e8;
  case (byte *******)0x10:
  case (byte *******)0x2c:
  case (byte *******)0x30:
  case (byte *******)0x5c:
  case (byte *******)0xc4:
  case (byte *******)0xdc:
  case (byte *******)0xe0:
  case (byte *******)0xe4:
    goto code_r0x000109d887c4;
  case (byte *******)0x11:
  case (byte *******)0x21:
  case (byte *******)0x2d:
  case (byte *******)0x31:
  case (byte *******)0x41:
  case (byte *******)0x45:
  case (byte *******)0x59:
  case (byte *******)0x5a:
  case (byte *******)0xd9:
  case (byte *******)0xdd:
  case (byte *******)0xe1:
  case (byte *******)0xe5:
    param_4 = param_2;
    goto code_r0x000109d88a1c;
  case (byte *******)0x18:
  case (byte *******)0x19:
  case (byte *******)0x70:
  case (byte *******)0x71:
  case (byte *******)0x72:
  case (byte *******)0x78:
  case (byte *******)0x94:
  case (byte *******)0xac:
  case (byte *******)0xb0:
  case (byte *******)0xb1:
  case (byte *******)0xb4:
  case (byte *******)0xb5:
  case (byte *******)0xb8:
  case (byte *******)0xb9:
  case (byte *******)0xc8:
  case (byte *******)0xc9:
    goto code_r0x000109d88800;
  case (byte *******)0x1c:
    goto code_r0x000109d88a58;
  case (byte *******)0x1d:
    goto code_r0x000109d887b8;
  case (byte *******)0x1f:
  case (byte *******)0x37:
  case (byte *******)0x3b:
  case (byte *******)0x3f:
  case (byte *******)0x4f:
  case (byte *******)0x63:
  case (byte *******)0x67:
  case (byte *******)0x6b:
  case (byte *******)0x6f:
  case (byte *******)0x83:
  case (byte *******)0x93:
  case (byte *******)0x9b:
  case (byte *******)0x9f:
  case (byte *******)0xa3:
  case (byte *******)0xa7:
  case (byte *******)0xab:
  case (byte *******)0xc3:
  case (byte *******)0xcf:
  case (byte *******)0xd3:
  case (byte *******)0xd7:
  case (byte *******)0xeb:
  case (byte *******)0xef:
  case (byte *******)0xf3:
  case (byte *******)0xf7:
  case (byte *******)0xfb:
    pppppppbVar13 = pppppppbStack_d0;
    param_4 = param_2;
    if ((long)ppppppbStack_c0 < 0) goto code_r0x000109d889f0;
    goto code_r0x000109d88a1c;
  case (byte *******)0x20:
  case (byte *******)0x40:
  case (byte *******)0x44:
  case (byte *******)0x50:
  case (byte *******)0x58:
  case (byte *******)0xd8:
  case (byte *******)0xe8:
  case (byte *******)0xf0:
  case (byte *******)0xf8:
    goto code_r0x000109d88804;
  case (byte *******)0x24:
  case (byte *******)0x48:
  case (byte *******)0x74:
  case (byte *******)0x7c:
  case (byte *******)0x84:
  case (byte *******)0xbc:
    goto code_r0x000109d88ac8;
  case (byte *******)0x25:
  case (byte *******)0x60:
    goto code_r0x000109d88850;
  case (byte *******)0x28:
    goto code_r0x000109d88788;
  case (byte *******)0x34:
    goto code_r0x000109d887c0;
  case (byte *******)0x35:
  case (byte *******)0x39:
    goto code_r0x000109d887bc;
  case (byte *******)0x38:
    goto code_r0x000109d887b4;
  case (byte *******)0x3c:
  case (byte *******)0x68:
    goto code_r0x000109d88844;
  case (byte *******)0x49:
  case (byte *******)0x7d:
    goto LAB_109d88ad0;
  case (byte *******)0x4a:
  case (byte *******)0x55:
  case (byte *******)0x75:
  case (byte *******)0x7e:
  case (byte *******)0x85:
  case (byte *******)0x89:
  case (byte *******)0xbd:
  case (byte *******)0xca:
    goto code_r0x000109d88750;
  case (byte *******)0x51:
LAB_109d88754:
    pcVar17 = (char *)((long)pppppppbVar20 + 0x14);
  case (byte *******)0x81:
  case (byte *******)0x99:
  case (byte *******)0x9d:
  case (byte *******)0xa1:
  case (byte *******)0xa5:
  case (byte *******)0xa9:
  case (byte *******)0xc1:
    abStack_84[0] = 0x30;
LAB_109d88760:
    param_5 = (long)pppppppbVar19 - (long)pcVar17;
code_r0x000109d88764:
    func_0x0001092d2e50(apppppppbStack_80,pcVar17,pppppppbVar19,param_5);
    pppppppbVar13 = (byte *******)apppppppbStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (pppppppbVar13,0,&DAT_10f2ef733,1);
    in_register_00005008 = pppppppbVar13[1];
    param_1 = (byte *******)*pppppppbVar13;
code_r0x000109d88788:
    ppppppbStack_c0 = pppppppbVar13[2];
code_r0x000109d88790:
    pppppppbVar13[1] = (byte ******)0x0;
    pppppppbVar13[2] = (byte ******)0x0;
    pppppppbStack_d0 = param_1;
    ppppppbStack_c8 = in_register_00005008;
code_r0x000109d88798:
    *pppppppbVar13 = (byte ******)0x0;
    pcVar17 = (char *)param_3[3];
    param_3 = (byte *******)&pppppppbStack_98;
    pppppppbVar13 = (byte *******)&pppppppbStack_98;
code_r0x000109d887a8:
    FUN_109d87fc0(pppppppbVar13,pcVar17,param_4);
    pppppppbVar20 = (byte *******)(ulong)abStack_84[3];
code_r0x000109d887b4:
    pppppppbVar23 = (byte *******)(ulong)(uint)(int)(char)pppppppbVar20;
code_r0x000109d887b8:
    pppppppbVar11 = pppppppbStack_98;
    pppppppbVar24 = pppppppbStack_90;
code_r0x000109d887bc:
    in_NG = (int)pppppppbVar23 < 0;
    in_OV = '\0';
code_r0x000109d887c0:
    pcVar17 = (char *)pppppppbVar11;
    if (in_NG == in_OV) {
      pcVar17 = (char *)param_3;
    }
code_r0x000109d887c4:
    pppppppbVar19 = pppppppbVar24;
    if (in_NG == in_OV) {
      pppppppbVar19 = pppppppbVar20;
    }
code_r0x000109d887c8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppbStack_d0,pcVar17,pppppppbVar19);
    pppppppbStack_a8 = (byte *******)pppppppbVar12[1];
    pppppppbStack_b0 = (byte *******)*pppppppbVar12;
    uStack_a0 = (ulong)pppppppbVar12[2];
    pppppppbVar12[1] = (byte ******)0x0;
    pppppppbVar12[2] = (byte ******)0x0;
    *pppppppbVar12 = (byte ******)0x0;
    pppppppbVar20 = (byte *******)(uStack_a0 >> 0x38);
    in_NG = (long)uStack_a0 < 0;
    in_OV = '\0';
    pcVar17 = (char *)pppppppbStack_b0;
    pppppppbVar24 = pppppppbStack_a8;
    if (!(bool)in_NG) {
      pcVar17 = (char *)&pppppppbStack_b0;
    }
code_r0x000109d88800:
    pppppppbVar19 = pppppppbVar24;
    if (in_NG == in_OV) {
      pppppppbVar19 = pppppppbVar20;
    }
code_r0x000109d88804:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pcVar17,pppppppbVar19);
LAB_109d883bc:
    if ((long)uStack_a0 < 0) {
      __ZdlPv(pppppppbStack_b0);
    }
    if ((char)abStack_84[3] < '\0') {
      __ZdlPv(pppppppbStack_98);
    }
    if ((long)ppppppbStack_c0 < 0) {
      __ZdlPv(pppppppbStack_d0);
    }
    if ((char)abStack_6c[3] < '\0') goto LAB_109d883f8;
    goto LAB_109d886e8;
  case (byte *******)0x54:
    goto code_r0x000109d88b14;
  case (byte *******)0x64:
    goto code_r0x000109d887a8;
  case (byte *******)0x65:
    goto code_r0x000109d88764;
  case (byte *******)0x6c:
    goto code_r0x000109d8885c;
  case (byte *******)0x80:
  case (byte *******)0x98:
    pppppppbVar6 = (byte *******)&UNK_10f5f9b52;
    if ((char)abStack_6c[3] < '\0') goto code_r0x000109d889a4;
    goto code_r0x000109d88a1c;
  case (byte *******)0x88:
  case (byte *******)0x8c:
    goto code_r0x000109d88acc;
  case (byte *******)0x8d:
    goto code_r0x000109d88790;
  case (byte *******)0x90:
    goto code_r0x000109d88a28;
  case (byte *******)0x91:
  case (byte *******)0xd1:
  case (byte *******)0xd5:
    goto code_r0x000109d8881c;
  case (byte *******)0x9c:
    goto code_r0x000109d887c8;
  case (byte *******)0xa4:
  case (byte *******)0xa8:
  case (byte *******)0xba:
    goto code_r0x000109d88798;
  case (byte *******)0xc0:
code_r0x000109d889a4:
    goto code_r0x000109d88a18;
  case (byte *******)0xcc:
    goto code_r0x000109d88a2c;
  case (byte *******)0xd0:
    goto code_r0x000109d88a40;
  case (byte *******)0xd4:
code_r0x000109d889f0:
    apppppppbStack_80[0] = pppppppbVar13;
code_r0x000109d88a18:
    __ZdlPv(apppppppbStack_80[0]);
    pppppppbVar6 = (byte *******)pcVar17;
code_r0x000109d88a1c:
    pcVar17 = (char *)pppppppbVar6;
    if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
      pppppppbVar13 = (byte *******)*param_2;
code_r0x000109d88a28:
      __ZdlPv(pppppppbVar13);
    }
code_r0x000109d88a2c:
    pppppppbVar14 = param_4;
    __Unwind_Resume();
    pppppppbVar8 = (byte *******)auStack_100;
    pcStack_d8 = FUN_109d88a34;
    pppppppuVar27 = &pppppppuStack_e0;
    pppppppbVar20 = extraout_x8;
    pppppppuStack_e0 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x000109d88a40:
    pppppppbVar13 = pppppppbVar20;
    pppppppbVar20 = *(byte ********)PTR____stack_chk_guard_11034bdc0;
    pppppppbVar9 = pppppppbVar8;
    pppppppbVar23 = (byte *******)pcVar17;
    pppppppbVar11 = pppppppbVar14;
code_r0x000109d88a58:
    pppppppuVar27[-1] = pppppppbVar20;
    pppppppbVar20 = (byte *******)((long)pppppppbVar9 + 3);
    pppppppbVar19 = (byte *******)((long)pppppppbVar9 + 0x18);
    pppppppbVar10 = pppppppbVar9;
    pppppppbVar18 = pppppppbVar19;
    if (pppppppbVar11 == (byte *******)0x0) {
LAB_109d88ad0:
      pppppppbVar18 = (byte *******)((long)pppppppbVar20 + 0x14);
      *(undefined1 *)((long)pppppppbVar10 + 0x17) = 0x30;
      iVar22 = (int)pppppppbVar23;
      pppppppbVar9 = pppppppbVar10;
      pppppppbVar20 = param_4;
    }
    else {
      do {
        pppppppbVar18 = (byte *******)((long)pppppppbVar18 + -1);
        *(byte *)pppppppbVar18 =
             (char)pppppppbVar11 + (char)(byte *******)((ulong)pppppppbVar11 / 10) * -10 | 0x30;
        bVar1 = (byte *******)0x9 < pppppppbVar11;
        pppppppbVar11 = (byte *******)((ulong)pppppppbVar11 / 10);
      } while (bVar1);
      iVar22 = (int)pppppppbVar23;
      pppppppbVar20 = param_4;
    }
    param_4 = pppppppbVar19;
    if (iVar22 != 0) {
      pppppppbVar18 = (byte *******)((long)pppppppbVar18 + -1);
      *(byte *)pppppppbVar18 = 0x2d;
    }
    func_0x0001092d2e50();
    if (*(undefined8 *******)PTR____stack_chk_guard_11034bdc0 != pppppppuVar27[-1]) {
      ___stack_chk_fail();
      *(undefined8 *)((long)pppppppbVar9 + -0x30) = unaff_x22;
      *(byte ********)((long)pppppppbVar9 + -0x28) = param_3;
      *(byte ********)((long)pppppppbVar9 + -0x20) = pppppppbVar20;
      *(byte ********)((long)pppppppbVar9 + -0x18) = param_2;
      *(undefined8 ********)((long)pppppppbVar9 + -0x10) = pppppppuVar27;
      *(code **)((long)pppppppbVar9 + -8) = FUN_109d88ae8;
      pppppppbVar20 = (byte *******)(ulong)*(uint *)(pppppppbVar13 + 1);
      if (*(uint *)((long)pppppppbVar13 + 0xc) <= *(uint *)(pppppppbVar13 + 1)) {
        func_0x000107c2b01c(pppppppbVar13,pppppppbVar13 + 2,(byte *)((long)pppppppbVar20 + 1),0xc);
        pppppppbVar20 = (byte *******)(ulong)*(uint *)(pppppppbVar13 + 1);
      }
      pppppppbVar23 = (byte *******)*pppppppbVar13;
code_r0x000109d88b14:
      pbVar15 = (byte *)((long)pppppppbVar23 + (long)pppppppbVar20 * 0xc);
      *(byte ********)pbVar15 = pppppppbVar18;
      *(int *)(pbVar15 + 8) = (int)param_4;
      *(int *)(pppppppbVar13 + 1) = *(int *)(pppppppbVar13 + 1) + 1;
      return;
    }
code_r0x000109d88ac8:
code_r0x000109d88acc:
    return;
  case (byte *******)0xe9:
  case (byte *******)0xec:
  case (byte *******)0xed:
  case (byte *******)0xf1:
  case (byte *******)0xf9:
    goto code_r0x000109d88818;
  }
LAB_109d888f8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar17,pppppppbVar19);
LAB_109d886e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
code_r0x000109d88908:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109d8890c);
  (*pcVar7)();
}



/* Entry: 109d88a34; end: 109d88ae7;  */

void FUN_109d88a34(long *param_1,ulong param_2,int param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 *puVar5;
  ulong uVar6;
  byte abStack_1a [2];
  long lStack_18;
  byte *pbVar4;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar4 = (byte *)&lStack_18;
  pbVar2 = pbVar4;
  if (param_2 == 0) {
    pbVar2 = abStack_1a + 1;
    abStack_1a[1] = 0x30;
  }
  else {
    do {
      pbVar2 = pbVar2 + -1;
      *pbVar2 = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  if (param_3 != 0) {
    pbVar2 = pbVar2 + -1;
    *pbVar2 = 0x2d;
  }
  func_0x0001092d2e50();
  uVar3 = SUB84(pbVar4,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    uVar6 = (ulong)*(uint *)(param_1 + 1);
    if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
      func_0x000107c2b01c(param_1,param_1 + 2,uVar6 + 1,0xc);
      uVar6 = (ulong)*(uint *)(param_1 + 1);
    }
    puVar5 = (undefined8 *)(*param_1 + uVar6 * 0xc);
    *puVar5 = pbVar2;
    *(undefined4 *)(puVar5 + 1) = uVar3;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return;
  }
  return;
}



/* Entry: 109d88ae8; end: 109d88b5b;  */

void FUN_109d88ae8(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar2 + 1,0xc);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar1 = (undefined8 *)(*param_1 + uVar2 * 0xc);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d88b5c; end: 109d88ceb;  */

void FUN_109d88b5c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  puVar4 = (undefined8 *)*puVar2;
  if ((*(uint *)(puVar2 + 1) & 0xfe) == 0x12) {
    puVar2 = *(undefined8 **)puVar2[2];
  }
  FUN_109d9f594(puVar2);
  FUN_109d9f850(puVar4,(int)puVar2 << 1);
  uVar1 = *(uint *)(param_1 + 0x20);
  uStack_38 = (ulong)uVar1;
  puStack_40 = puVar4;
  if (*(char *)(param_1 + 8) == '\x13') {
    lVar5 = *(long *)*puVar4;
    uStack_38 = uStack_38 | 0x100000000;
    lVar3 = lVar5 + 0x900;
    FUN_109da1690(lVar3,&puStack_40);
    if (*(long *)(lVar3 + 0x10) == 0) {
      puVar2 = (undefined8 *)(lVar5 + 0x7e8);
      FUN_109d34148(puVar2,0x28,3);
      *puVar2 = *puVar4;
      puVar2[3] = puVar4;
      *(uint *)(puVar2 + 4) = uVar1;
      puVar2[2] = puVar2 + 3;
      puVar2[1] = 0x100000013;
      *(undefined8 **)(lVar3 + 0x10) = puVar2;
    }
    return;
  }
  lVar5 = *(long *)*puVar4;
  lVar3 = lVar5 + 0x900;
  FUN_109da1690(lVar3,&puStack_40);
  if (*(long *)(lVar3 + 0x10) == 0) {
    puVar2 = (undefined8 *)(lVar5 + 0x7e8);
    FUN_109d34148(puVar2,0x28,3);
    *puVar2 = *puVar4;
    puVar2[3] = puVar4;
    *(uint *)(puVar2 + 4) = uVar1;
    puVar2[2] = puVar2 + 3;
    puVar2[1] = 0x100000012;
    *(undefined8 **)(lVar3 + 0x10) = puVar2;
  }
  return;
}



/* Entry: 109d88cec; end: 109d88d13;  */

void FUN_109d88cec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109da40c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109d88d14; end: 109d88d67;  */

long * FUN_109d88d14(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  *(long *)(param_3 + 0x28) = param_1 + -0x18;
  if (((*(byte *)(param_3 + 0x17) >> 4 & 1) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_109da3dfc(*(long *)(param_1 + 0x58),param_3);
  }
  lVar1 = *param_2;
  plVar2 = (long *)(param_3 + 0x38);
  *plVar2 = lVar1;
  *(long **)(param_3 + 0x40) = param_2;
  *(long **)(lVar1 + 8) = plVar2;
  *param_2 = (long)plVar2;
  return plVar2;
}



/* Entry: 109d88d68; end: 109d88dbf;  */

undefined1  [16] FUN_109d88d68(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_18;
  
  if (-1 < *(char *)((long)param_1 + 0x21)) {
    return ZEXT816(0x10f5f9b90);
  }
  lVar1 = **(long **)*param_1 + 0x9d8;
  puStack_18 = param_1;
  FUN_109d89514(lVar1,&puStack_18);
  return *(undefined1 (*) [16])(lVar1 + 8);
}



/* Entry: 109d88dc0; end: 109d88dfb;  */

long FUN_109d88dc0(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109d31ef4(*(long *)(param_1 + 0x30) + 0x10,param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_109d67674();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109d88dfc; end: 109d88e4f;  */

void FUN_109d88dfc(long param_1)

{
  if (((1 << (ulong)(*(uint *)(param_1 + 0x20) & 0xf) & 0x1ebU) != 0) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    FUN_109d9dc18();
  }
  return;
}


