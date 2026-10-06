/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d4ec18; end: 109d4ed3b;  */

void FUN_109d4ec18(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puStack_38;
  
  uVar2 = *(uint *)(param_1 + 2);
  puVar7 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar6 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar6 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar6;
  puVar4 = (undefined8 *)((ulong)uVar6 << 4);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = puVar4;
  if (puVar7 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar4 = 0xfffffffffffff000;
        lVar5 = lVar5 + -0x10;
        puVar4 = puVar4 + 2;
      } while (lVar5 != 0);
    }
    if (uVar2 != 0) {
      lVar5 = (ulong)uVar2 << 4;
      puVar8 = puVar7;
      do {
        if ((*puVar8 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d4eb8c(*param_1,*(undefined4 *)(param_1 + 2),*puVar8,&puStack_38);
          uVar1 = puVar8[1];
          *puStack_38 = *puVar8;
          puStack_38[1] = uVar1;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar8 = puVar8 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar7,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar4 = 0xfffffffffffff000;
      lVar5 = lVar5 + -0x10;
      puVar4 = puVar4 + 2;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d4ed3c; end: 109d4edb7;  */

bool FUN_109d4ed3c(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = (int)param_1 + 0x18;
  FUN_109d51b68();
  func_0x000109d31b50(param_4,param_3 - uVar1);
  if (param_3 <= uVar1) {
    param_1 = param_1 + 0x30;
    FUN_109d48288(param_1,*param_2);
    func_0x000109d31b50(param_4,*(int *)(param_1 + 8) + -1);
  }
  return param_3 <= uVar1;
}



/* Entry: 109d4edb8; end: 109d4ef6f;  */

undefined8 * FUN_109d4edb8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puStack_190;
  undefined8 *puStack_180;
  ulong uStack_178;
  undefined8 auStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = 0x4000000000;
  puStack_180 = auStack_170;
  if (((int)*(uint *)((long)param_2 + 0x14) < 0) &&
     (uVar6 = param_2[((ulong)*(uint *)((long)param_2 + 0x14) & 0x7ffffff) * -4 + -1],
     (uVar6 & 0xffffffff0) != 0)) {
    uVar11 = 0;
    plVar9 = *(long **)*param_2;
    do {
      uVar7 = (ulong)*(uint *)((long)param_2 + 0x14) & 0x7ffffff;
      plVar2 = (long *)((long)(param_2 + uVar7 * -4 + -1) +
                       (uVar11 * 0x10 - param_2[uVar7 * -4 + -1]));
      uVar3 = *(uint *)(plVar2 + 1);
      uVar4 = *(uint *)((long)plVar2 + 0xc);
      lVar12 = *plVar9;
      plVar1 = (long *)(lVar12 + 0xa20);
      plVar5 = plVar1;
      FUN_109e03610(plVar1,(undefined8 *)*plVar2 + 2,*(undefined8 *)*plVar2);
      if ((int)plVar5 == -1) {
        uVar8 = (ulong)*(uint *)(lVar12 + 0xa28);
      }
      else {
        uVar8 = (ulong)(int)plVar5;
      }
      func_0x000109d31b50(&puStack_180,*(undefined4 *)(*(long *)(*plVar1 + uVar8 * 8) + 8));
      if (uVar3 != uVar4) {
        lVar12 = (ulong)uVar4 * 0x20 + (ulong)uVar3 * -0x20;
        puVar10 = param_2 + uVar7 * -4 + (ulong)uVar3 * 4;
        do {
          FUN_109d4ed3c(param_1,*puVar10,param_3,&puStack_180);
          lVar12 = lVar12 + -0x20;
          puVar10 = puVar10 + 4;
        } while (lVar12 != 0);
      }
      FUN_109d4727c(*param_1,0x37,&puStack_180,0);
      uStack_178 = uStack_178 & 0xffffffff00000000;
      uVar11 = uVar11 + 1;
    } while (uVar11 != (uVar6 >> 4 & 0xffffffff));
    param_1 = puStack_180;
    puStack_190 = auStack_170;
    if (puStack_180 != auStack_170) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_180 != puStack_190) {
    _free();
  }
  __Unwind_Resume();
  return (undefined8 *)(ulong)*(uint *)(&UNK_10e043bf0 + ((ulong)param_1 & 0xffffffff) * 4);
}



/* Entry: 109d4ef70; end: 109d4f027;  */

undefined4 FUN_109d4ef70(ulong param_1)

{
  return *(undefined4 *)(&UNK_10e043bf0 + (param_1 & 0xffffffff) * 4);
}



/* Entry: 109d4f028; end: 109d4f243;  */

/* WARNING: Possible PIC construction at 0x000109d4f154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d4f104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d4f158) */
/* WARNING: Removing unreachable block (ram,0x000109d4f170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7c4) */
/* WARNING: Removing unreachable block (ram,0x000109d4f108) */
/* WARNING: Removing unreachable block (ram,0x000109d4f18c) */
/* WARNING: Removing unreachable block (ram,0x000109d4f120) */

void FUN_109d4f028(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  ulong *puVar7;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  uint *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  ulong auStack_58 [4];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (4 < param_2) {
    uVar1 = param_2 - 1 | param_2 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 >> 0x10 | uVar1;
    param_2 = 0x40;
    if (0x40 < uVar1 + 1) {
      param_2 = uVar1 + 1;
    }
  }
  if ((*param_1 & 1) == 0) {
    puVar7 = *(ulong **)(param_1 + 2);
    unaff_x21 = (ulong)param_1[4];
    if (param_2 < 5) {
      *param_1 = *param_1 | 1;
    }
    else {
      unaff_x22 = (ulong)param_2;
      lVar3 = (ulong)param_2 << 3;
      __ZnwmSt11align_val_t(lVar3,8);
      *(long *)(param_1 + 2) = lVar3;
      *(ulong *)(param_1 + 4) = unaff_x22;
    }
    puVar2 = puVar7 + unaff_x21;
    uStack_68 = 0x109d4f158;
    puStack_80 = puVar7;
  }
  else {
    lVar3 = 8;
    puVar7 = auStack_58;
    do {
      puVar2 = puVar7;
      if ((*(ulong *)((long)param_1 + lVar3) | 0x1000) != 0xfffffffffffff000) {
        puVar2 = puVar7 + 1;
        *puVar7 = *(ulong *)((long)param_1 + lVar3);
      }
      lVar3 = lVar3 + 8;
      puVar7 = puVar2;
    } while (lVar3 != 0x28);
    if (4 < param_2) {
      *param_1 = *param_1 & 0xfffffffe;
      unaff_x21 = (ulong)param_2;
      lVar3 = (ulong)param_2 << 3;
      __ZnwmSt11align_val_t(lVar3,8);
      *(long *)(param_1 + 2) = lVar3;
      *(ulong *)(param_1 + 4) = unaff_x21;
    }
    puVar7 = auStack_58;
    uStack_68 = 0x109d4f108;
    puStack_80 = puVar2;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 1;
  param_1[1] = 0;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((uVar1 & 1) == 0) {
    if (param_1[4] == 0) goto LAB_109d4f228;
    puVar4 = *(uint **)(param_1 + 2);
    puVar6 = puVar4 + (ulong)param_1[4] * 2;
  }
  else {
    puVar4 = param_1 + 2;
    puVar6 = param_1 + 10;
  }
  do {
    puVar5 = puVar4 + 2;
    puVar4[0] = 0xfffff000;
    puVar4[1] = 0xffffffff;
    puVar4 = puVar5;
  } while (puVar5 != puVar6);
LAB_109d4f228:
  for (; puVar7 != puVar2; puVar7 = puVar7 + 1) {
    if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
      func_0x000109d4ef80(param_1,*puVar7,&puStack_98);
      *puStack_98 = *puVar7;
      *param_1 = *param_1 + 2;
    }
  }
  return;
}



/* Entry: 109d4f244; end: 109d4f2ab;  */

int FUN_109d4f244(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lStack_20;
  undefined8 uStack_18;
  
  if (((param_2 & 1) != 0) && (uVar3 = ((ulong *)(param_2 & 0xfffffffffffffff8))[1], uVar3 != 0)) {
    if ((uVar3 == 0) || (*(char *)(uVar3 + 0x10) != '\x17')) {
      param_1 = param_1 + 0x60;
      FUN_109d51bd0();
      iVar4 = *(int *)(param_1 + 8);
    }
    else {
      uStack_18 = *(undefined8 *)(uVar3 + 0x18);
      param_1 = param_1 + 0xf0;
      FUN_109d4e80c(param_1,&uStack_18,&lStack_20);
      if ((int)param_1 == 0) {
        return -1;
      }
      iVar4 = *(int *)(lStack_20 + 0xc);
    }
    return iVar4 + -1;
  }
  lVar1 = param_1 + 0x200;
  lVar6 = *(long *)(param_1 + 0x200);
  if (lVar6 != 0) {
    uVar3 = *(ulong *)(param_2 & 0xfffffffffffffff8);
    lVar5 = lVar1;
    do {
      lVar2 = 8;
      if (uVar3 <= *(ulong *)(lVar6 + 0x20)) {
        lVar2 = 0;
        lVar5 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar2);
    } while (lVar6 != 0);
    if ((lVar5 != lVar1) && (*(ulong *)(lVar5 + 0x20) <= uVar3)) goto LAB_109d4f2a4;
  }
  lVar5 = lVar1;
LAB_109d4f2a4:
  return *(int *)(lVar5 + 0x28);
}



/* Entry: 109d4f2ac; end: 109d4f3d7;  */

void FUN_109d4f2ac(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  uint uStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  FUN_109d65ed4(&lStack_50,param_2,0x40);
  if ((0x40 < *(uint *)(param_2 + 1)) && (*param_2 != 0)) {
    __ZdaPv();
  }
  *param_2 = lStack_50;
  *(uint *)(param_2 + 1) = uStack_48;
  uStack_48 = 0;
  plVar4 = param_2 + 2;
  if ((*(uint *)(param_2 + 3) < 0x41) || (*plVar4 == 0)) {
    param_2[2] = lStack_40;
    *(undefined4 *)(param_2 + 3) = uStack_38;
  }
  else {
    __ZdaPv();
    param_2[2] = lStack_40;
    *(undefined4 *)(param_2 + 3) = uStack_38;
    uStack_38 = 0;
    if ((0x40 < uStack_48) && (lStack_50 != 0)) {
      __ZdaPv();
    }
  }
  plVar2 = param_2;
  if (0x40 < *(uint *)(param_2 + 1)) {
    plVar2 = (long *)*param_2;
  }
  lVar3 = *plVar2;
  lVar1 = lVar3 * -2 + 1;
  if (-1 < lVar3) {
    lVar1 = lVar3 << 1;
  }
  FUN_109d38988(param_1,lVar1);
  if (0x40 < *(uint *)(param_2 + 3)) {
    plVar4 = (long *)*plVar4;
  }
  lVar3 = *plVar4;
  lVar1 = lVar3 * -2 + 1;
  if (-1 < lVar3) {
    lVar1 = lVar3 << 1;
  }
  FUN_109d38988(param_1,lVar1);
  return;
}



/* Entry: 109d4f3d8; end: 109d4f587;  */

void FUN_109d4f3d8(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar4 = *param_1;
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  uVar8 = (long)param_4 - (long)param_3;
  uVar1 = (long)uVar8 >> 3;
  if (lVar4 + uVar3 * 8 == param_2) {
    if ((ulong)*(uint *)((long)param_1 + 0xc) < uVar3 + uVar1) {
      func_0x000107c2b01c(param_1,param_1 + 2,uVar3 + uVar1,8);
      uVar3 = (ulong)*(uint *)(param_1 + 1);
      lVar4 = *param_1;
    }
    if (param_4 != param_3) {
      puVar5 = (undefined8 *)(lVar4 + uVar3 * 8);
      do {
        puVar7 = param_3 + 1;
        *puVar5 = *param_3;
        puVar5 = puVar5 + 1;
        param_3 = puVar7;
      } while (puVar7 != param_4);
    }
    *(int *)(param_1 + 1) = (int)uVar3 + (int)(uVar8 >> 3);
  }
  else {
    param_2 = param_2 - lVar4;
    if ((ulong)*(uint *)((long)param_1 + 0xc) < uVar3 + uVar1) {
      func_0x000107c2b01c(param_1,param_1 + 2,uVar3 + uVar1,8);
      lVar4 = *param_1;
      uVar3 = (ulong)*(uint *)(param_1 + 1);
    }
    puVar5 = (undefined8 *)(lVar4 + param_2);
    lVar10 = uVar3 * 8;
    puVar7 = (undefined8 *)(lVar4 + uVar3 * 8);
    uVar9 = lVar10 - param_2 >> 3;
    if (uVar9 < uVar1) {
      uVar2 = (int)uVar3 + (int)(uVar8 >> 3);
      *(uint *)(param_1 + 1) = uVar2;
      if (lVar10 - param_2 != 0) {
        _memcpy(lVar4 + (ulong)uVar2 * 8 + uVar9 * -8,puVar5);
        puVar6 = param_3;
        do {
          param_3 = puVar6 + 1;
          *puVar5 = *puVar6;
          uVar9 = uVar9 - 1;
          puVar6 = param_3;
          puVar5 = puVar5 + 1;
        } while (uVar9 != 0);
      }
      for (; param_4 != param_3; param_3 = param_3 + 1) {
        *puVar7 = *param_3;
        puVar7 = puVar7 + 1;
      }
    }
    else {
      FUN_109d4f588(param_1,(undefined8 *)((long)puVar7 - uVar8),puVar7);
      if ((undefined8 *)((long)puVar7 - uVar8) != puVar5) {
        _memmove((long)puVar7 - (lVar10 - (param_2 + uVar8)),puVar5);
      }
      if (param_4 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(puVar5,param_3,uVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 109d4f588; end: 109d4f6cb;  */

void FUN_109d4f588(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = uVar2 + ((long)param_3 - (long)param_2 >> 3);
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_3 != param_2) {
    puVar3 = (undefined8 *)(*param_1 + uVar2 * 8);
    puVar4 = param_2;
    do {
      puVar5 = puVar4 + 1;
      *puVar3 = *puVar4;
      puVar3 = puVar3 + 1;
      puVar4 = puVar5;
    } while (puVar5 != param_3);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  return;
}



/* Entry: 109d4f6cc; end: 109d4f6d3;  */

void FUN_109d4f6cc(void)

{
  return;
}



/* Entry: 109d4f6d4; end: 109d4f707;  */

void FUN_109d4f6d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110b40de8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109d4f708; end: 109d4f72f;  */

void FUN_109d4f708(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110b40de8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109d4f730; end: 109d4f76b;  */

long FUN_109d4f730(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40e58);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d4f76c; end: 109d4f77f;  */

undefined ** FUN_109d4f76c(void)

{
  return &PTR_DAT_110b40e58;
}



/* Entry: 109d4f780; end: 109d4f7a3;  */

void FUN_109d4f780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b40e78;
  return;
}



/* Entry: 109d4f7a4; end: 109d4f7c3;  */

void FUN_109d4f7a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b40e78;
  return;
}



/* Entry: 109d4f7c4; end: 109d4f7ff;  */

long FUN_109d4f7c4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b40ee8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d4f800; end: 109d4f823;  */

undefined ** FUN_109d4f800(void)

{
  return &PTR_DAT_110b40ee8;
}



/* Entry: 109d4f824; end: 109d4f8db;  */

undefined1  [16] FUN_109d4f824(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_109d4f8c4;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_109d4f88c;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_109d4f88c:
  plVar1 = (long *)0x28;
  __Znwm();
  plVar1[4] = *param_3;
  FUN_109d4f8dc(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_109d4f8c4:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 109d4f8dc; end: 109d4f96f;  */

void FUN_109d4f8dc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109d4f970; end: 109d4f97f;  */

void FUN_109d4f970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b40f08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d4f980; end: 109d4f99f;  */

void FUN_109d4f980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b40f08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d4f9a0; end: 109d4f9bf;  */

void FUN_109d4f9a0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != param_1 + 0x28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 109d4f9c0; end: 109d4f9e7;  */

void FUN_109d4f9c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_109d4afe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109d4f9e8; end: 109d4fae3;  */

void FUN_109d4f9e8(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((ulong)param_1[2] < (ulong)(lVar1 + param_2)) {
    FUN_109dffce4(param_1,param_1 + 3,lVar1 + param_2,1);
    lVar1 = param_1[1];
  }
  if (param_2 != 0) {
    _memset(*param_1 + lVar1,param_3,param_2);
    lVar1 = param_1[1];
  }
  param_1[1] = lVar1 + param_2;
  return;
}



/* Entry: 109d4fae4; end: 109d51067;  */

/* WARNING: Type propagation algorithm not settling */

long ****** FUN_109d4fae4(long ******param_1,long *******param_2,int param_3)

{
  char *pcVar1;
  long *******ppppppplVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long ******pppppplVar7;
  int iVar8;
  long ******pppppplVar9;
  byte bVar10;
  char cVar11;
  short sVar12;
  ulong uVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long ****pppplVar16;
  long ******pppppplVar17;
  undefined4 uVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  ulong uVar21;
  long ****pppplVar22;
  uint uVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long ******pppppplVar27;
  long *****ppppplVar28;
  int iVar29;
  long *******ppppppplVar30;
  long ******pppppplVar31;
  long *******unaff_x24;
  ulong uVar32;
  long lVar33;
  long *******unaff_x26;
  int iVar34;
  long ***ppplVar35;
  long ******pppppplVar36;
  long *****ppppplStack_408;
  undefined4 uStack_400;
  long ****pppplStack_3f8;
  long *******ppppppplStack_3f0;
  long *******ppppppplStack_3e8;
  long *****ppppplStack_3e0;
  long *****ppppplStack_3d8;
  long ******pppppplStack_3d0;
  long ******pppppplStack_3c8;
  undefined1 *puStack_3c0;
  code *pcStack_3b8;
  long *****ppppplStack_3a8;
  long *****ppppplStack_3a0;
  long ******pppppplStack_398;
  long ******pppppplStack_390;
  long ******pppppplStack_388;
  long ******pppppplStack_380;
  long ******pppppplStack_378;
  long ******pppppplStack_370;
  long ******pppppplStack_368;
  long *******ppppppplStack_360;
  long ******pppppplStack_358;
  long *******ppppppplStack_350;
  long *******ppppppplStack_348;
  long *******ppppppplStack_340;
  long *******ppppppplStack_338;
  long *******ppppppplStack_330;
  long *******ppppppplStack_328;
  long lStack_320;
  long ******pppppplStack_318;
  long ******pppppplStack_310;
  long *****ppppplStack_308;
  long *****appppplStack_300 [16];
  long *******ppppppplStack_280;
  ulong uStack_278;
  undefined4 auStack_270 [2];
  undefined4 uStack_268;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplStack_380 = param_1 + 0xc;
  *pppppplStack_380 = (long *****)0x0;
  param_1[0xd] = (long *****)0x0;
  param_1[0xe] = (long *****)0x0;
  pppppplStack_388 = param_1 + 0x10;
  *pppppplStack_388 = (long *****)0x0;
  pppppplStack_390 = param_1 + 0xf;
  *pppppplStack_390 = (long *****)pppppplStack_388;
  param_1[0x11] = (long *****)0x0;
  param_1[1] = (long *****)0x0;
  *param_1 = (long *****)0x0;
  param_1[3] = (long *****)0x0;
  param_1[2] = (long *****)0x0;
  pcVar1 = (char *)((long)param_1 + 0x1c);
  pcVar6 = (char *)((long)param_1 + 0x24);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  param_1[7] = (long *****)0x0;
  param_1[6] = (long *****)0x0;
  param_1[9] = (long *****)0x0;
  param_1[8] = (long *****)0x0;
  pcVar1 = (char *)((long)param_1 + 0x4c);
  pcVar6 = (char *)((long)param_1 + 0x54);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pppppplStack_398 = param_1 + 0x12;
  param_1[0x13] = (long *****)0x0;
  *pppppplStack_398 = (long *****)0x0;
  param_1[0x15] = (long *****)0x0;
  param_1[0x14] = (long *****)0x0;
  param_1[0x17] = (long *****)0x0;
  param_1[0x16] = (long *****)0x0;
  param_1[0x1b] = (long *****)0x0;
  param_1[0x1a] = (long *****)0x0;
  pcVar1 = (char *)((long)param_1 + 0xdc);
  pcVar6 = (char *)((long)param_1 + 0xe4);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pppppplStack_370 = param_1 + 0x18;
  param_1[0x19] = (long *****)0x0;
  *pppppplStack_370 = (long *****)0x0;
  pppppplStack_378 = param_1 + 0x1e;
  *pppppplStack_378 = (long *****)0x1;
  pppppplStack_368 = param_1 + 0x15;
  pppppplStack_358 = param_1 + 0x1b;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(char *)(param_1 + 0x21) = (char)param_3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = (long *****)0x0;
  param_1[0x23] = (long *****)0x0;
  param_1[0x31] = (long *****)0x0;
  param_1[0x32] = (long *****)0x0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x35] = (long *****)0x0;
  param_1[0x36] = (long *****)0x0;
  param_1[0x37] = (long *****)0x0;
  pcVar1 = (char *)((long)param_1 + 0x1c4);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(undefined4 *)(param_1 + 0x39) = 0;
  pcVar1 = (char *)((long)param_1 + 0x144);
  pcVar6 = (char *)((long)param_1 + 0x14c);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  param_1[0x28] = (long *****)0x0;
  param_1[0x27] = (long *****)0x0;
  param_1[0x26] = (long *****)0x0;
  param_1[0x25] = (long *****)0x0;
  param_1[0x2c] = (long *****)0x0;
  param_1[0x2b] = (long *****)0x0;
  param_1[0x2e] = (long *****)0x0;
  param_1[0x2d] = (long *****)0x0;
  pcVar1 = (char *)((long)param_1 + 0x174);
  pcVar6 = (char *)((long)param_1 + 0x17c);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  ppppppplStack_360 = param_2;
  if (param_3 != 0) {
    ppppppplStack_280 = (long *******)0x0;
    uStack_278 = 0;
    auStack_270[0] = 0;
    uStack_268 = 0;
    ppppppplVar19 = (long *******)param_2[2];
    ppppppplVar24 = param_2 + 1;
    ppppppplStack_340 = ppppppplVar24;
    for (; ppppppplVar24 != ppppppplVar19; ppppppplVar24 = (long *******)*ppppppplVar24) {
      param_2 = (long *******)&ppppppplStack_280;
      FUN_109d52fc4(*ppppppplVar24 + -7);
    }
    ppppppplVar19 = (long *******)ppppppplStack_360[6];
    ppppppplVar24 = ppppppplStack_360 + 5;
    ppppppplStack_348 = ppppppplVar24;
    for (; ppppppplVar24 != ppppppplVar19; ppppppplVar24 = (long *******)*ppppppplVar24) {
      param_2 = (long *******)&ppppppplStack_280;
      FUN_109d52fc4(*ppppppplVar24 + -6);
    }
    ppppppplVar20 = (long *******)ppppppplStack_360[8];
    ppppppplVar24 = ppppppplStack_360 + 7;
    ppppppplStack_350 = ppppppplVar24;
    ppppppplVar19 = ppppppplStack_360;
    for (; ppppppplStack_360 = ppppppplVar19, ppppppplVar24 != ppppppplVar20;
        ppppppplVar24 = (long *******)*ppppppplVar24) {
      param_2 = (long *******)&ppppppplStack_280;
      FUN_109d52fc4(*ppppppplVar24 + -7);
      ppppppplVar19 = ppppppplStack_360;
    }
    ppppppplVar24 = ppppppplVar19 + 3;
    ppppppplVar20 = ppppppplVar24;
    while (ppppppplVar20 = (long *******)*ppppppplVar20, ppppppplVar20 != ppppppplVar24) {
      param_2 = (long *******)&ppppppplStack_280;
      FUN_109d52fc4(ppppppplVar20 + -7);
    }
    uStack_268 = (uint)uStack_278;
    unaff_x24 = (long *******)ppppppplVar19[4];
    ppppppplStack_330 = ppppppplVar24;
    if (unaff_x24 != ppppppplVar24) {
      do {
        if (*(char *)(unaff_x24 + -5) == '\0') {
          if (((long *******)unaff_x24[2] != unaff_x24 + 2) ||
             ((*(byte *)((long)unaff_x24 + -0x15) & 1) != 0)) goto LAB_109d4fd1c;
        }
        else if ((*(char *)(unaff_x24 + -5) != '\x03') ||
                ((*(uint *)((long)unaff_x24 + -0x24) & 0x7ffffff) != 0)) {
LAB_109d4fd1c:
          ppppppplVar24 = unaff_x24 + 2;
          ppppppplVar20 = (long *******)unaff_x24[3];
          ppppppplVar19 = param_2;
          if (ppppppplVar20 != ppppppplVar24) {
            do {
              ppppppplVar19 = (long *******)&ppppppplStack_280;
              FUN_109d52fc4(ppppppplVar20 + -3);
              ppppppplVar20 = (long *******)ppppppplVar20[1];
            } while (ppppppplVar20 != ppppppplVar24);
            ppppppplVar20 = (long *******)unaff_x24[3];
          }
          for (; ppppppplVar20 != ppppppplVar24; ppppppplVar20 = (long *******)ppppppplVar20[1]) {
            ppppppplVar25 = (long *******)0x0;
            if (ppppppplVar20 != (long *******)0x0) {
              ppppppplVar25 = ppppppplVar20 + -3;
            }
            for (ppppppplVar30 = (long *******)ppppppplVar20[3]; ppppppplVar30 != ppppppplVar25 + 5;
                ppppppplVar30 = (long *******)ppppppplVar30[1]) {
              uVar4 = *(uint *)((long)ppppppplVar30 + -4);
              if ((uVar4 >> 0x1e & 1) == 0) {
                uVar13 = (ulong)(uVar4 & 0x7ffffff);
                ppppppplVar26 = ppppppplVar30 + uVar13 * -4 + -3;
                if (uVar13 != 0) {
LAB_109d4fd90:
                  ppppppplVar2 = ppppppplVar26 + uVar13 * 4;
                  do {
                    pppppplVar36 = *ppppppplVar26;
                    if (pppppplVar36 != (long ******)0x0 && *(char *)(pppppplVar36 + 2) == '\x17') {
                      ppppplVar14 = pppppplVar36[3];
                      if (*(byte *)ppppplVar14 - 3 < 0xfffffffe) {
                        if ((*(byte *)ppppplVar14 == 0x21) && (*(uint *)(ppppplVar14 + 3) != 0)) {
                          pppplVar16 = ppppplVar14[2];
                          lVar33 = (ulong)*(uint *)(ppppplVar14 + 3) << 3;
                          do {
                            if (*(byte *)((*pppplVar16)[0x10] + 2) < 0x15 ||
                                *(byte *)((*pppplVar16)[0x10] + 2) == 0x18) {
                              ppppppplVar19 = (long *******)&ppppppplStack_280;
                              FUN_109d52fc4();
                            }
                            pppplVar16 = pppplVar16 + 1;
                            lVar33 = lVar33 + -8;
                          } while (lVar33 != 0);
                        }
                      }
                      else if (*(byte *)(ppppplVar14[0x10] + 2) < 0x15 ||
                               *(byte *)(ppppplVar14[0x10] + 2) == 0x18) {
                        ppppppplVar19 = (long *******)&ppppppplStack_280;
                        FUN_109d52fc4();
                      }
                    }
                    ppppppplVar26 = ppppppplVar26 + 4;
                  } while (ppppppplVar26 != ppppppplVar2);
                }
              }
              else {
                ppppppplVar26 = (long *******)ppppppplVar30[-4];
                uVar13 = (ulong)uVar4 & 0x7ffffff;
                if ((uVar4 & 0x7ffffff) != 0) goto LAB_109d4fd90;
              }
            }
          }
          unaff_x26 = unaff_x24 + -7;
          FUN_109d51754();
          param_2 = ppppppplVar19;
          for (; unaff_x26 != ppppppplVar19; unaff_x26 = unaff_x26 + 5) {
            param_2 = (long *******)&ppppppplStack_280;
            FUN_109d52fc4(unaff_x26);
          }
          for (ppppppplVar19 = (long *******)unaff_x24[3]; ppppppplVar19 != ppppppplVar24;
              ppppppplVar19 = (long *******)ppppppplVar19[1]) {
            ppppppplVar20 = (long *******)0x0;
            if (ppppppplVar19 != (long *******)0x0) {
              ppppppplVar20 = ppppppplVar19 + -3;
            }
            for (ppppppplVar25 = (long *******)ppppppplVar19[3]; ppppppplVar25 != ppppppplVar20 + 5;
                ppppppplVar25 = (long *******)ppppppplVar25[1]) {
              unaff_x26 = ppppppplVar25 + -3;
              uVar4 = *(uint *)((long)ppppppplVar25 + -4);
              if ((uVar4 >> 0x1e & 1) == 0) {
                uVar13 = (ulong)(uVar4 & 0x7ffffff);
                ppppppplVar30 = unaff_x26 + uVar13 * -4;
                if (uVar13 != 0) {
LAB_109d4fec4:
                  lVar33 = uVar13 << 5;
                  do {
                    bVar10 = *(byte *)(*ppppppplVar30 + 2);
                    if (bVar10 < 0x15 || bVar10 == 0x18) {
                      FUN_109d52fc4(*ppppppplVar30,&ppppppplStack_280);
                    }
                    ppppppplVar30 = ppppppplVar30 + 4;
                    lVar33 = lVar33 + -0x20;
                  } while (lVar33 != 0);
                }
              }
              else {
                ppppppplVar30 = (long *******)ppppppplVar25[-4];
                uVar13 = (ulong)uVar4 & 0x7ffffff;
                if ((uVar4 & 0x7ffffff) != 0) goto LAB_109d4fec4;
              }
              if ((ppppppplVar25 != (long *******)0x0) && (*(char *)(ppppppplVar25 + -1) == '[')) {
                FUN_109d52fc4(ppppppplVar25[9],&ppppppplStack_280);
              }
              param_2 = (long *******)&ppppppplStack_280;
              FUN_109d52fc4(unaff_x26);
            }
          }
        }
        unaff_x24 = (long *******)unaff_x24[1];
      } while (unaff_x24 != ppppppplStack_330);
    }
    pppppplStack_310 = (long ******)0x0;
    ppppplStack_308 = (long *****)0x0;
    appppplStack_300[0] = (long *****)0x0;
    ppppppplVar24 = (long *******)*ppppppplStack_330;
    while (ppppppplVar20 = ppppppplStack_330, ppppppplVar19 = ppppppplStack_360,
          ppppppplVar24 != ppppppplStack_330) {
      ppppppplStack_338 = ppppppplVar24;
      if (*(char *)(ppppppplVar24 + -5) == '\0') {
        if (((long *******)ppppppplVar24[2] != ppppppplVar24 + 2) ||
           ((*(byte *)((long)ppppppplVar24 + -0x15) & 1) != 0)) goto LAB_109d4ff80;
      }
      else if ((*(char *)(ppppppplVar24 + -5) != '\x03') ||
              ((*(uint *)((long)ppppppplVar24 + -0x24) & 0x7ffffff) != 0)) {
LAB_109d4ff80:
        unaff_x26 = ppppppplVar24 + -7;
        ppppppplVar19 = ppppppplVar24 + 2;
        ppppppplVar20 = param_2;
        for (ppppppplVar25 = (long *******)ppppppplVar24[3]; ppppppplVar25 != ppppppplVar19;
            ppppppplVar25 = (long *******)ppppppplVar25[1]) {
          ppppppplVar20 = unaff_x26;
          FUN_109d52eac(ppppppplVar25 + -3,unaff_x26,&ppppppplStack_280,&pppppplStack_310);
        }
        ppppppplVar25 = unaff_x26;
        FUN_109d51754();
        param_2 = ppppppplVar20;
        for (; ppppppplVar25 != ppppppplVar20; ppppppplVar25 = ppppppplVar25 + 5) {
          param_2 = unaff_x26;
          FUN_109d52eac(ppppppplVar25,unaff_x26,&ppppppplStack_280,&pppppplStack_310);
        }
        ppppppplVar24 = (long *******)ppppppplVar24[3];
        ppppppplStack_328 = ppppppplVar19;
        if (ppppppplVar24 != ppppppplVar19) {
          do {
            ppppppplVar19 = (long *******)0x0;
            if (ppppppplVar24 != (long *******)0x0) {
              ppppppplVar19 = ppppppplVar24 + -3;
            }
            for (ppppppplVar20 = (long *******)ppppppplVar24[3]; ppppppplVar20 != ppppppplVar19 + 5;
                ppppppplVar20 = (long *******)ppppppplVar20[1]) {
              uVar4 = *(uint *)((long)ppppppplVar20 + -4);
              if ((uVar4 >> 0x1e & 1) == 0) {
                uVar13 = (ulong)(uVar4 & 0x7ffffff);
                ppppppplVar25 = ppppppplVar20 + -3 + uVar13 * -4;
                if (uVar13 != 0) {
LAB_109d5003c:
                  unaff_x24 = ppppppplVar25 + uVar13 * 4;
                  do {
                    pppppplVar36 = *ppppppplVar25;
                    bVar10 = *(byte *)(pppppplVar36 + 2);
                    if (bVar10 < 0x15 || bVar10 == 0x18) {
                      FUN_109d52eac(pppppplVar36,unaff_x26,&ppppppplStack_280,&pppppplStack_310);
                      bVar10 = *(byte *)(pppppplVar36 + 2);
                    }
                    if (bVar10 == 0x17) {
                      ppppplVar14 = pppppplVar36[3];
                      if (*(byte *)ppppplVar14 - 3 < 0xfffffffe) {
                        if ((*(byte *)ppppplVar14 == 0x21) && (*(uint *)(ppppplVar14 + 3) != 0)) {
                          lVar33 = (ulong)*(uint *)(ppppplVar14 + 3) << 3;
                          pppplVar16 = ppppplVar14[2];
                          do {
                            FUN_109d52eac((*pppplVar16)[0x10],unaff_x26,&ppppppplStack_280,
                                          &pppppplStack_310);
                            lVar33 = lVar33 + -8;
                            pppplVar16 = pppplVar16 + 1;
                          } while (lVar33 != 0);
                        }
                      }
                      else {
                        FUN_109d52eac(ppppplVar14[0x10],unaff_x26,&ppppppplStack_280,
                                      &pppppplStack_310);
                      }
                    }
                    ppppppplVar25 = ppppppplVar25 + 4;
                  } while (ppppppplVar25 != unaff_x24);
                }
              }
              else {
                ppppppplVar25 = (long *******)ppppppplVar20[-4];
                uVar13 = (ulong)uVar4 & 0x7ffffff;
                if ((uVar4 & 0x7ffffff) != 0) goto LAB_109d5003c;
              }
              if ((ppppppplVar20 != (long *******)0x0) && (*(char *)(ppppppplVar20 + -1) == '[')) {
                FUN_109d52eac(ppppppplVar20[9],unaff_x26,&ppppppplStack_280,&pppppplStack_310);
              }
              param_2 = unaff_x26;
              FUN_109d52eac(ppppppplVar20 + -3,unaff_x26,&ppppppplStack_280,&pppppplStack_310);
            }
            ppppppplVar24 = (long *******)ppppppplVar24[1];
          } while (ppppppplVar24 != ppppppplStack_328);
        }
      }
      ppppppplVar24 = (long *******)*ppppppplStack_338;
    }
    for (ppppppplVar24 = (long *******)ppppppplStack_360[2]; ppppppplVar24 != ppppppplStack_340;
        ppppppplVar24 = (long *******)ppppppplVar24[1]) {
      FUN_109d52eac(ppppppplVar24 + -7,0,&ppppppplStack_280,&pppppplStack_310);
    }
    for (ppppppplVar24 = (long *******)ppppppplVar19[4]; ppppppplVar24 != ppppppplVar20;
        ppppppplVar24 = (long *******)ppppppplVar24[1]) {
      FUN_109d52eac(ppppppplVar24 + -7,0,&ppppppplStack_280,&pppppplStack_310);
    }
    for (ppppppplVar24 = (long *******)ppppppplVar19[6]; ppppppplVar24 != ppppppplStack_348;
        ppppppplVar24 = (long *******)ppppppplVar24[1]) {
      FUN_109d52eac(ppppppplVar24 + -6,0,&ppppppplStack_280,&pppppplStack_310);
    }
    for (ppppppplVar24 = (long *******)ppppppplVar19[8]; ppppppplVar24 != ppppppplStack_350;
        ppppppplVar24 = (long *******)ppppppplVar24[1]) {
      FUN_109d52eac(ppppppplVar24 + -7,0,&ppppppplStack_280,&pppppplStack_310);
    }
    for (ppppppplVar24 = (long *******)ppppppplVar19[2]; ppppppplVar24 != ppppppplStack_340;
        ppppppplVar24 = (long *******)ppppppplVar24[1]) {
      if ((ppppppplVar24 == (long *******)0x0) || (*(char *)(ppppppplVar24 + -5) != '\x03')) {
        if ((*(char *)(ppppppplVar24 + -5) != '\0') ||
           (((long *******)ppppppplVar24[2] != ppppppplVar24 + 2 ||
            ((*(byte *)((long)ppppppplVar24 + -0x15) & 1) != 0)))) goto LAB_109d5023c;
      }
      else if ((*(uint *)((long)ppppppplVar24 + -0x24) & 0x7ffffff) != 0) {
LAB_109d5023c:
        FUN_109d52eac(ppppppplVar24[-0xb],0,&ppppppplStack_280,&pppppplStack_310);
      }
    }
    for (ppppppplVar24 = (long *******)ppppppplVar19[6]; ppppppplVar24 != ppppppplStack_348;
        ppppppplVar24 = (long *******)ppppppplVar24[1]) {
      FUN_109d52eac(ppppppplVar24[-10],0,&ppppppplStack_280,&pppppplStack_310);
    }
    for (ppppppplVar24 = (long *******)ppppppplVar19[8]; ppppppplVar24 != ppppppplStack_350;
        ppppppplVar24 = (long *******)ppppppplVar24[1]) {
      FUN_109d52eac(ppppppplVar24[-0xb],0,&ppppppplStack_280,&pppppplStack_310);
    }
    ppppppplVar24 = (long *******)ppppppplVar19[4];
    if (ppppppplVar24 != ppppppplVar20) {
      do {
        uVar4 = *(uint *)((long)ppppppplVar24 + -0x24);
        if ((uVar4 >> 0x1e & 1) == 0) {
          uVar13 = (ulong)(uVar4 & 0x7ffffff);
          ppppppplVar19 = ppppppplVar24 + uVar13 * -4 + -7;
          if (uVar13 != 0) {
LAB_109d502e4:
            lVar33 = uVar13 << 5;
            do {
              FUN_109d52eac(*ppppppplVar19,0,&ppppppplStack_280,&pppppplStack_310);
              lVar33 = lVar33 + -0x20;
              ppppppplVar19 = ppppppplVar19 + 4;
            } while (lVar33 != 0);
          }
        }
        else {
          ppppppplVar19 = (long *******)ppppppplVar24[-8];
          uVar13 = (ulong)uVar4 & 0x7ffffff;
          if ((uVar4 & 0x7ffffff) != 0) goto LAB_109d502e4;
        }
        ppppppplVar24 = (long *******)ppppppplVar24[1];
      } while (ppppppplVar24 != ppppppplStack_330);
    }
    __ZdlPvSt11align_val_t(ppppppplStack_280,8);
    if (*param_1 != (long *****)0x0) {
      FUN_109d44c00(param_1);
      __ZdlPv(*param_1);
      *param_1 = (long *****)0x0;
      param_1[1] = (long *****)0x0;
      param_1[2] = (long *****)0x0;
    }
    param_1[1] = ppppplStack_308;
    *param_1 = (long *****)pppppplStack_310;
    param_1[2] = appppplStack_300[0];
    ppppplStack_308 = (long *****)0x0;
    appppplStack_300[0] = (long *****)0x0;
    pppppplStack_310 = (long ******)0x0;
    ppppppplStack_280 = &pppppplStack_310;
    func_0x000109d44bc0(&ppppppplStack_280);
  }
  ppppppplVar24 = ppppppplStack_360 + 1;
  for (ppppppplVar19 = (long *******)ppppppplStack_360[2]; ppppppplVar19 != ppppppplVar24;
      ppppppplVar19 = (long *******)ppppppplVar19[1]) {
    FUN_109d51068(param_1,ppppppplVar19 + -7);
    FUN_109d512d8(param_1,ppppppplVar19[-4]);
  }
  ppppppplVar19 = ppppppplStack_360 + 3;
  for (ppppppplVar20 = (long *******)ppppppplStack_360[4]; ppppppplVar20 != ppppppplVar19;
      ppppppplVar20 = (long *******)ppppppplVar20[1]) {
    FUN_109d51068(param_1,ppppppplVar20 + -7);
    FUN_109d512d8(param_1,ppppppplVar20[-4]);
    FUN_109d513a0(param_1,ppppppplVar20[7]);
  }
  ppppppplVar20 = ppppppplStack_360 + 5;
  for (ppppppplVar25 = (long *******)ppppppplStack_360[6]; ppppppplVar25 != ppppppplVar20;
      ppppppplVar25 = (long *******)ppppppplVar25[1]) {
    FUN_109d51068(param_1,ppppppplVar25 + -6);
    FUN_109d512d8(param_1,ppppppplVar25[-3]);
  }
  ppppppplVar25 = ppppppplStack_360 + 7;
  for (ppppppplVar30 = (long *******)ppppppplStack_360[8]; ppppppplVar30 != ppppppplVar25;
      ppppppplVar30 = (long *******)ppppppplVar30[1]) {
    FUN_109d51068(param_1,ppppppplVar30 + -7);
    FUN_109d512d8(param_1,ppppppplVar30[-4]);
  }
  ppppplStack_3a0 = param_1[0xc];
  ppppplVar14 = param_1[0xd];
  for (ppppppplVar30 = (long *******)ppppppplStack_360[2]; ppppppplVar30 != ppppppplVar24;
      ppppppplVar30 = (long *******)ppppppplVar30[1]) {
    if ((ppppppplVar30 == (long *******)0x0) || (*(char *)(ppppppplVar30 + -5) != '\x03')) {
      if ((*(char *)(ppppppplVar30 + -5) != '\0') ||
         (((long *******)ppppppplVar30[2] != ppppppplVar30 + 2 ||
          ((*(byte *)((long)ppppppplVar30 + -0x15) & 1) != 0)))) goto LAB_109d50498;
    }
    else if ((*(uint *)((long)ppppppplVar30 + -0x24) & 0x7ffffff) != 0) {
LAB_109d50498:
      FUN_109d51068(param_1,ppppppplVar30[-0xb]);
    }
    if (ppppppplVar30[2] != (long ******)0x0) {
      ppppppplVar26 = ppppppplVar30 + -7;
      FUN_109d4865c(ppppppplVar26,0xffffffff);
      FUN_109d513a0(param_1,ppppppplVar26);
    }
  }
  for (ppppppplVar30 = (long *******)ppppppplStack_360[6]; ppppppplVar30 != ppppppplVar20;
      ppppppplVar30 = (long *******)ppppppplVar30[1]) {
    FUN_109d51068(param_1,ppppppplVar30[-10]);
  }
  for (ppppppplVar20 = (long *******)ppppppplStack_360[8]; ppppppplVar20 != ppppppplVar25;
      ppppppplVar20 = (long *******)ppppppplVar20[1]) {
    FUN_109d51068(param_1,ppppppplVar20[-0xb]);
  }
  for (ppppppplVar20 = (long *******)ppppppplStack_360[4]; ppppppplVar25 = ppppppplStack_360,
      ppppppplVar20 != ppppppplVar19; ppppppplVar20 = (long *******)ppppppplVar20[1]) {
    uVar4 = *(uint *)((long)ppppppplVar20 + -0x24);
    if ((uVar4 >> 0x1e & 1) == 0) {
      uVar13 = (ulong)(uVar4 & 0x7ffffff);
      ppppppplVar25 = ppppppplVar20 + uVar13 * -4 + -7;
      if (uVar13 != 0) {
LAB_109d5054c:
        ppppppplVar30 = (long *******)(uVar13 << 5);
        do {
          FUN_109d51068(param_1,*ppppppplVar25);
          ppppppplVar30 = ppppppplVar30 + -4;
          ppppppplVar25 = ppppppplVar25 + 4;
        } while (ppppppplVar30 != (long *******)0x0);
      }
    }
    else {
      ppppppplVar25 = (long *******)ppppppplVar20[-8];
      uVar13 = (ulong)uVar4 & 0x7ffffff;
      if ((uVar4 & 0x7ffffff) != 0) goto LAB_109d5054c;
    }
  }
  ppppppplVar20 = (long *******)(**ppppppplStack_360 + 0xd5);
  FUN_109d512d8(param_1);
  ppppplVar15 = *ppppppplVar25[0xe];
  uVar4 = *(uint *)(ppppppplVar25[0xe] + 1);
  ppppplVar28 = ppppplVar15;
  if (uVar4 != 0) {
    for (; *ppppplVar28 == (long ****)0x0 || *ppppplVar28 == (long ****)0xfffffffffffffff8;
        ppppplVar28 = ppppplVar28 + 1) {
    }
  }
  if (ppppplVar28 != ppppplVar15 + uVar4) {
    pppplVar16 = *ppppplVar28;
    do {
      ppppppplVar20 = (long *******)pppplVar16[1];
      FUN_109d51068(param_1);
      do {
        ppppplVar28 = ppppplVar28 + 1;
        pppplVar16 = *ppppplVar28;
      } while (pppplVar16 == (long ****)0x0 || pppplVar16 == (long ****)0xfffffffffffffff8);
    } while (ppppplVar28 != ppppplVar15 + uVar4);
  }
  ppppppplVar25 = ppppppplStack_360 + 9;
  for (ppppppplVar26 = (long *******)ppppppplStack_360[10]; ppppppplVar26 != ppppppplVar25;
      ppppppplVar26 = (long *******)ppppppplVar26[1]) {
    if (*(uint *)(ppppppplVar26[6] + 1) != 0) {
      ppppppplVar30 = (long *******)0x0;
      unaff_x24 = (long *******)((ulong)*(uint *)(ppppppplVar26[6] + 1) * 8);
      do {
        ppppppplVar20 = (long *******)0x0;
        FUN_109d51c64(param_1,0,*(undefined8 *)((long)*ppppppplVar26[6] + (long)ppppppplVar30));
        ppppppplVar30 = ppppppplVar30 + 1;
      } while ((long)unaff_x24 - (long)ppppppplVar30 != 0);
    }
  }
  ppppppplStack_350 = (long *******)appppplStack_300;
  ppppplStack_308 = (long *****)0x800000000;
  pppppplStack_310 = (long ******)ppppppplStack_350;
  for (ppppppplVar25 = (long *******)ppppppplStack_360[2]; ppppppplVar25 != ppppppplVar24;
      ppppppplVar25 = (long *******)ppppppplVar25[1]) {
    ppppplStack_308 = (long *****)((ulong)ppppplStack_308 & 0xffffffff00000000);
    ppppppplVar20 = &pppppplStack_310;
    func_0x000109d97bcc(ppppppplVar25 + -7);
    if ((int)ppppplStack_308 != 0) {
      lVar33 = ((ulong)ppppplStack_308 & 0xffffffff) << 4;
      ppppppplVar26 = (long *******)(pppppplStack_310 + 1);
      do {
        ppppppplVar30 = ppppppplVar26 + 2;
        ppppppplVar20 = (long *******)0x0;
        FUN_109d51c64(param_1,0,*ppppppplVar26);
        lVar33 = lVar33 + -0x10;
        ppppppplVar26 = ppppppplVar30;
      } while (lVar33 != 0);
    }
  }
  ppppppplVar24 = (long *******)ppppppplStack_360[4];
  ppppplStack_3a8 = ppppplVar14;
  if (ppppppplVar24 != ppppppplVar19) {
    do {
      ppppppplStack_348 = ppppppplVar19;
      ppppppplVar19 = ppppppplVar24 + -7;
      unaff_x26 = ppppppplVar19;
      FUN_109d51754();
      for (; unaff_x26 != ppppppplVar20; unaff_x26 = unaff_x26 + 5) {
        FUN_109d512d8(param_1,*unaff_x26);
      }
      ppppplStack_308 = (long *****)((ulong)ppppplStack_308 & 0xffffffff00000000);
      ppppppplVar20 = &pppppplStack_310;
      func_0x000109d97bcc(ppppppplVar19);
      if ((int)ppppplStack_308 != 0) {
        pppppplVar36 = pppppplStack_310 + 1;
        lVar33 = ((ulong)ppppplStack_308 & 0xffffffff) << 4;
        do {
          if (*(char *)(ppppppplVar24 + -5) == '\0') {
            if (((long *******)ppppppplVar24[2] != ppppppplVar24 + 2) ||
               ((*(uint *)(ppppppplVar24 + -3) >> 0x18 & 1) != 0)) goto LAB_109d50758;
LAB_109d5074c:
            ppppppplVar20 = (long *******)0x0;
            unaff_x26 = (long *******)*pppppplVar36;
          }
          else {
            if ((*(char *)(ppppppplVar24 + -5) == '\x03') &&
               ((*(uint *)((long)ppppppplVar24 + -0x24) & 0x7ffffff) == 0)) goto LAB_109d5074c;
LAB_109d50758:
            unaff_x26 = (long *******)*pppppplVar36;
            pppppplVar27 = param_1;
            FUN_109d51b68(param_1,ppppppplVar19);
            ppppppplVar20 = (long *******)(ulong)((int)pppppplVar27 + 1);
          }
          FUN_109d51c64(param_1,ppppppplVar20,unaff_x26);
          pppppplVar36 = pppppplVar36 + 2;
          lVar33 = lVar33 + -0x10;
          ppppppplVar30 = (long *******)0x0;
        } while (lVar33 != 0);
      }
      ppppppplStack_340 = ppppppplVar24 + 2;
      ppppppplVar25 = (long *******)ppppppplVar24[3];
      while (ppppppplVar25 != ppppppplStack_340) {
        ppppppplStack_330 = (long *******)0x0;
        if (ppppppplVar25 != (long *******)0x0) {
          ppppppplStack_330 = ppppppplVar25 + -3;
        }
        ppppppplStack_330 = ppppppplStack_330 + 5;
        ppppppplStack_338 = ppppppplVar25;
        for (ppppppplVar26 = (long *******)ppppppplVar25[3]; ppppppplVar26 != ppppppplStack_330;
            ppppppplVar26 = (long *******)ppppppplVar26[1]) {
          ppppppplStack_328 = ppppppplVar26 + -3;
          ppppppplVar20 = (long *******)0x0;
          if (ppppppplVar26 != (long *******)0x0) {
            ppppppplVar20 = ppppppplStack_328;
          }
          uVar4 = *(uint *)((long)ppppppplVar26 + -4);
          if ((uVar4 >> 0x1e & 1) == 0) {
            uVar13 = (ulong)(uVar4 & 0x7ffffff);
            ppppppplVar30 = ppppppplStack_328 + uVar13 * -4;
            if (uVar13 != 0) {
LAB_109d507ec:
              unaff_x24 = ppppppplVar30 + uVar13 * 4;
              do {
                pppppplVar36 = *ppppppplVar30;
                if (pppppplVar36 == (long ******)0x0 || *(char *)(pppppplVar36 + 2) != '\x17') {
                  FUN_109d517b8(param_1);
                }
                else {
                  ppppplVar14 = pppppplVar36[3];
                  if (*(char *)ppppplVar14 != '\x02') {
                    if (*(char *)ppppplVar14 == '!') {
                      if (*(uint *)(ppppplVar14 + 3) != 0) {
                        pppplVar16 = ppppplVar14[2];
                        lVar33 = (ulong)*(uint *)(ppppplVar14 + 3) << 3;
                        do {
                          ppplVar35 = *pppplVar16;
                          if (*(char *)ppplVar35 == '\x01') {
                            if (ppppppplVar24 == (long *******)0x0) {
                              iVar8 = 0;
                            }
                            else {
                              pppppplVar36 = param_1;
                              FUN_109d51b68(param_1,ppppppplVar19);
                              iVar8 = (int)pppppplVar36 + 1;
                            }
                            FUN_109d51c64(param_1,iVar8,ppplVar35);
                          }
                          pppplVar16 = pppplVar16 + 1;
                          lVar33 = lVar33 + -8;
                        } while (lVar33 != 0);
                        unaff_x26 = (long *******)0x0;
                      }
                    }
                    else {
                      if (ppppppplVar24 == (long *******)0x0) {
                        iVar8 = 0;
                      }
                      else {
                        pppppplVar36 = param_1;
                        FUN_109d51b68(param_1,ppppppplVar19);
                        iVar8 = (int)pppppplVar36 + 1;
                      }
                      FUN_109d51c64(param_1,iVar8,ppppplVar14);
                    }
                  }
                }
                ppppppplVar30 = ppppppplVar30 + 4;
              } while (ppppppplVar30 != unaff_x24);
            }
          }
          else {
            ppppppplVar30 = (long *******)ppppppplVar26[-4];
            uVar13 = (ulong)uVar4 & 0x7ffffff;
            if ((uVar4 & 0x7ffffff) != 0) goto LAB_109d507ec;
          }
          cVar11 = *(char *)(ppppppplVar20 + 2);
          if ((ppppppplVar26 != (long *******)0x0) && (cVar11 == '[')) {
            FUN_109d512d8(param_1,*ppppppplVar26[9]);
            cVar11 = *(char *)(ppppppplVar20 + 2);
          }
          ppppppplVar25 = ppppppplStack_328;
          if ((ppppppplVar26 != (long *******)0x0) && (cVar11 == '>')) {
            FUN_109d512d8(param_1,ppppppplVar26[5]);
            cVar11 = *(char *)(ppppppplVar20 + 2);
          }
          if ((ppppppplVar26 != (long *******)0x0) && (cVar11 == ';')) {
            FUN_109d512d8(param_1,ppppppplVar26[5]);
          }
          FUN_109d512d8(param_1,*ppppppplVar25);
          if ((*(byte *)(ppppppplVar20 + 2) - 0x21 < 0x34) &&
             ((1L << ((ulong)(*(byte *)(ppppppplVar20 + 2) - 0x21) & 0x3f) & 0x8000000000041U) != 0)
             ) {
            FUN_109d513a0(param_1,ppppppplVar26[5]);
            FUN_109d512d8(param_1,ppppppplVar26[6]);
          }
          ppppplStack_308 = (long *****)((ulong)ppppplStack_308 & 0xffffffff00000000);
          ppppppplVar20 = &pppppplStack_310;
          func_0x000109d97bcc(ppppppplVar25);
          uVar13 = (ulong)ppppplStack_308 & 0xffffffff;
          if ((int)ppppplStack_308 != 0) {
            lVar33 = 8;
            do {
              unaff_x26 = *(long ********)((long)pppppplStack_310 + lVar33);
              if (ppppppplVar24 == (long *******)0x0) {
                ppppppplVar20 = (long *******)0x0;
              }
              else {
                pppppplVar36 = param_1;
                FUN_109d51b68(param_1,ppppppplVar19);
                ppppppplVar20 = (long *******)(ulong)((int)pppppplVar36 + 1);
              }
              FUN_109d51c64(param_1,ppppppplVar20,unaff_x26);
              lVar33 = lVar33 + 0x10;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          pppppplVar36 = ppppppplVar26[3];
          if (pppppplVar36 != (long ******)0x0) {
            ppppplVar14 = pppppplVar36[-2];
            if (((uint)ppppplVar14 >> 1 & 1) == 0) {
              pppppplVar27 = pppppplVar36 + -2 + -((ulong)ppppplVar14 >> 2 & 0xf);
              uVar13 = (ulong)ppppplVar14 >> 6 & 0xf;
            }
            else {
              pppppplVar27 = (long ******)pppppplVar36[-4];
              uVar13 = (ulong)*(uint *)(pppppplVar36 + -3);
            }
            if (uVar13 != 0) {
              lVar33 = uVar13 << 3;
              do {
                unaff_x26 = (long *******)*pppppplVar27;
                if (ppppppplVar24 == (long *******)0x0) {
                  ppppppplVar20 = (long *******)0x0;
                }
                else {
                  pppppplVar36 = param_1;
                  FUN_109d51b68(param_1,ppppppplVar19);
                  ppppppplVar20 = (long *******)(ulong)((int)pppppplVar36 + 1);
                }
                FUN_109d51c64(param_1,ppppppplVar20,unaff_x26);
                pppppplVar27 = pppppplVar27 + 1;
                lVar33 = lVar33 + -8;
              } while (lVar33 != 0);
            }
          }
        }
        ppppppplVar25 = (long *******)ppppppplStack_338[1];
      }
      ppppppplVar24 = (long *******)ppppppplVar24[1];
      ppppppplVar19 = ppppppplStack_348;
    } while (ppppppplVar24 != ppppppplStack_348);
  }
  FUN_109d518b0(param_1,(ulong)((long)ppppplStack_3a8 - (long)ppppplStack_3a0) >> 4,
                (ulong)((long)param_1[0xd] - (long)param_1[0xc]) >> 4);
  pppppplVar36 = param_1 + 0x16;
  ppppplVar28 = *pppppplVar36;
  ppppplVar14 = param_1[0x15];
  if (ppppplVar14 != ppppplVar28) {
    uStack_278 = 0x4000000000;
    ppppppplStack_280 = (long *******)auStack_270;
    if (0x40 < *(uint *)(param_1 + 0x1c)) {
      func_0x000107c2b01c(&ppppppplStack_280,auStack_270,*(uint *)(param_1 + 0x1c),8);
      ppppplVar14 = *pppppplStack_368;
      ppppplVar28 = *pppppplVar36;
    }
    if (ppppplVar14 == ppppplVar28) {
      uVar4 = (uint)uStack_278;
    }
    else {
      do {
        pppppplStack_318 = (long ******)*ppppplVar14;
        pppppplVar27 = pppppplStack_358;
        FUN_109d4e80c(pppppplStack_358,&pppppplStack_318,&lStack_320);
        if ((int)pppppplVar27 == 0) {
          ppppppplVar30 = (long *******)0x0;
        }
        else {
          ppppppplVar30 = *(long ********)(lStack_320 + 8);
        }
        uVar13 = uStack_278 & 0xffffffff;
        if (uStack_278 >> 0x20 <= uVar13) {
          func_0x000107c2b01c(&ppppppplStack_280,auStack_270,uVar13 + 1,8);
          uVar13 = uStack_278 & 0xffffffff;
        }
        ppppppplStack_280[uVar13] = (long ******)ppppppplVar30;
        uVar4 = (uint)uStack_278 + 1;
        uStack_278 = CONCAT44(uStack_278._4_4_,uVar4);
        ppppplVar14 = ppppplVar14 + 1;
      } while (ppppplVar14 != ppppplVar28);
    }
    lVar33 = 0;
    if (uVar4 != 0) {
      lVar33 = LZCOUNT((ulong)uVar4) * -2 + 0x7e;
    }
    pppppplStack_318 = param_1;
    FUN_109d56928(ppppppplStack_280,ppppppplStack_280 + uVar4,&pppppplStack_318,lVar33,1);
    unaff_x26 = (long *******)param_1[0x15];
    param_1[0x15] = (long *****)0x0;
    lVar33 = (long)param_1[0x16] - (long)unaff_x26 >> 3;
    *pppppplVar36 = (long *****)0x0;
    param_1[0x17] = (long *****)0x0;
    func_0x000109d52378(pppppplStack_368,lVar33);
    if ((uint)uStack_278 == 0) {
      uVar13 = 0;
    }
    else {
      ppppplVar14 = (long *****)0x0;
      ppppplVar28 = (long *****)((uStack_278 & 0xffffffff) * 8);
      ppppppplVar30 = (long *******)0x1;
      do {
        if (*(int *)((long)ppppppplStack_280 + (long)ppppplVar14) != 0) break;
        pppppplStack_318 = unaff_x26[*(int *)((long)ppppppplStack_280 + (long)ppppplVar14 + 4) - 1];
        func_0x000109d522b8(pppppplStack_368,&pppppplStack_318);
        pppppplVar27 = pppppplStack_358;
        FUN_109d58b8c(pppppplStack_358,&pppppplStack_318);
        *(int *)((long)pppppplVar27 + 0xc) = (int)ppppppplVar30;
        if (*(char *)pppppplStack_318 == '\0') {
          *(int *)(param_1 + 0x39) = *(int *)(param_1 + 0x39) + 1;
        }
        ppppplVar14 = ppppplVar14 + 1;
        ppppppplVar30 = (long *******)(ulong)((int)ppppppplVar30 + 1);
      } while ((long)ppppplVar28 - (long)ppppplVar14 != 0);
      uVar13 = uStack_278 & 0xffffffff;
    }
    unaff_x24 = (long *******)auStack_270;
    if (uVar13 != (long)*pppppplVar36 - (long)*pppppplStack_368 >> 3) {
      ppppppplStack_328 = (long *******)auStack_270;
      func_0x000109d52378(pppppplStack_370,lVar33);
      uVar13 = (ulong)((long)*pppppplVar36 - (long)*pppppplStack_368) >> 3;
      uVar4 = (uint)uStack_278;
      if ((uint)uStack_278 == (uint)uVar13) {
        iVar34 = 0;
        ppppplVar14 = (long *****)0x0;
        uVar18 = 0;
      }
      else {
        uVar21 = 0;
        ppppplVar14 = (long *****)0x0;
        uVar32 = uVar13;
        iVar8 = 0;
        do {
          uVar23 = (uint)ppppplVar14;
          iVar29 = (int)uVar13;
          iVar5 = *(int *)(ppppppplStack_280 + (uVar32 & 0xffffffff));
          iVar34 = iVar5;
          if ((iVar8 != 0) && (iVar34 = iVar8, iVar8 != iVar5)) {
            ppppplVar14 = param_1[0x18];
            ppppplVar28 = param_1[0x19];
            pppppplVar36 = pppppplStack_378;
            func_0x000109d58be0(pppppplStack_378,iVar8);
            uVar3 = *(uint *)((long)pppppplVar36 + 0xc);
            *(int *)((long)pppppplVar36 + 4) = (int)uVar21;
            *(int *)(pppppplVar36 + 1) = (int)((ulong)((long)ppppplVar28 - (long)ppppplVar14) >> 3);
            *(uint *)((long)pppppplVar36 + 0xc) = uVar23;
            uVar21 = (ulong)((long)param_1[0x19] - (long)param_1[0x18]) >> 3;
            iVar29 = (int)((ulong)((long)param_1[0x16] - (long)param_1[0x15]) >> 3);
            uVar23 = uVar3;
            iVar34 = iVar5;
          }
          uVar18 = (undefined4)uVar21;
          pppppplStack_318 =
               unaff_x26[*(int *)((long)ppppppplStack_280 + (uVar32 & 0xffffffff) * 8 + 4) - 1];
          func_0x000109d522b8(pppppplStack_370,&pppppplStack_318);
          pppppplVar36 = pppppplStack_358;
          FUN_109d58b8c(pppppplStack_358,&pppppplStack_318);
          uVar13 = (ulong)(iVar29 + 1U);
          *(uint *)((long)pppppplVar36 + 0xc) = iVar29 + 1U;
          if (*(char *)pppppplStack_318 == '\0') {
            uVar23 = uVar23 + 1;
          }
          ppppplVar14 = (long *****)(ulong)uVar23;
          uVar23 = (int)uVar32 + 1;
          uVar32 = (ulong)uVar23;
          iVar8 = iVar34;
        } while (uVar4 != uVar23);
      }
      ppppppplVar30 = (long *******)param_1[0x18];
      ppppplVar28 = param_1[0x19];
      pppppplVar36 = pppppplStack_378;
      func_0x000109d58be0(pppppplStack_378,iVar34);
      *(undefined4 *)((long)pppppplVar36 + 4) = uVar18;
      *(int *)(pppppplVar36 + 1) = (int)((ulong)((long)ppppplVar28 - (long)ppppppplVar30) >> 3);
      *(int *)((long)pppppplVar36 + 0xc) = (int)ppppplVar14;
      unaff_x24 = ppppppplStack_328;
    }
    if (unaff_x26 != (long *******)0x0) {
      __ZdlPv(unaff_x26);
    }
    if (ppppppplStack_280 != unaff_x24) {
      _free();
    }
  }
  pppppplVar36 = pppppplStack_310;
  if ((long *******)pppppplStack_310 != ppppppplStack_350) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  if (unaff_x26 != (long *******)0x0) {
    __ZdlPv(unaff_x26);
  }
  if (ppppppplStack_280 != ppppppplStack_328) {
    _free();
  }
  if ((long *******)pppppplStack_310 != ppppppplStack_350) {
    _free();
  }
  if (pppppplStack_378[0x17] != (long *****)0x0) {
    param_1[0x36] = pppppplStack_378[0x17];
    __ZdlPv();
  }
  __ZdlPvSt11align_val_t(param_1[0x31],8);
  __ZdlPvSt11align_val_t(param_1[0x2e],8);
  if (param_1[0x2b] != (long *****)0x0) {
    param_1[0x2c] = param_1[0x2b];
    __ZdlPv();
  }
  __ZdlPvSt11align_val_t(param_1[0x28],8);
  if (param_1[0x25] != (long *****)0x0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  pppppplVar27 = pppppplStack_378;
  __ZdlPvSt11align_val_t(pppppplStack_378[4],8);
  if (((ulong)*pppppplVar27 & 1) == 0) {
    __ZdlPvSt11align_val_t(param_1[0x1f],4);
  }
  __ZdlPvSt11align_val_t(*pppppplStack_358,8);
  if (*pppppplStack_370 != (long *****)0x0) {
    param_1[0x19] = *pppppplStack_370;
    __ZdlPv();
  }
  if (*pppppplStack_368 != (long *****)0x0) {
    param_1[0x16] = *pppppplStack_368;
    __ZdlPv();
  }
  if (*pppppplStack_398 != (long *****)0x0) {
    param_1[0x13] = *pppppplStack_398;
    __ZdlPv();
  }
  func_0x000109d44b80(pppppplStack_390,*pppppplStack_388);
  if (*pppppplStack_380 != (long *****)0x0) {
    param_1[0xd] = *pppppplStack_380;
    __ZdlPv();
  }
  __ZdlPvSt11align_val_t(param_1[9],8);
  if (param_1[6] != (long *****)0x0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  pppplVar16 = (long ****)0x8;
  __ZdlPvSt11align_val_t(param_1[3]);
  pppppplStack_310 = param_1;
  func_0x000109d44bc0(&pppppplStack_310);
  __Unwind_Resume();
  pppppplStack_3d0 = pppppplVar27;
  pcStack_3b8 = FUN_109d51068;
  pppppplVar27 = pppppplVar36 + 9;
  pppplStack_3f8 = pppplVar16;
  ppppppplStack_3f0 = unaff_x24;
  ppppppplStack_3e8 = ppppppplVar30;
  ppppplStack_3e0 = ppppplVar28;
  ppppplStack_3d8 = ppppplVar14;
  pppppplStack_3c8 = param_1;
  puStack_3c0 = &stack0xfffffffffffffff0;
  FUN_109d5649c(pppppplVar27,&pppplStack_3f8);
  if (*(int *)(pppppplVar27 + 1) == 0) {
    if ((*(byte *)(pppplStack_3f8 + 2) < 4 && *(byte *)(pppplStack_3f8 + 2) != 1) &&
       (ppppplVar14 = (long *****)pppplStack_3f8[6], ppppplStack_408 = ppppplVar14,
       ppppplVar14 != (long *****)0x0)) {
      pppppplVar17 = (long ******)pppppplVar36[0x10];
      pppppplVar9 = pppppplVar36 + 0x10;
      while (pppppplVar31 = pppppplVar9, pppppplVar17 != (long ******)0x0) {
        while (pppppplVar7 = pppppplVar17, pppppplVar9 = pppppplVar7, pppppplVar7[4] <= ppppplVar14)
        {
          if (ppppplVar14 <= pppppplVar7[4]) goto LAB_109d51174;
          pppppplVar17 = (long ******)pppppplVar7[1];
          if ((long ******)pppppplVar7[1] == (long ******)0x0) {
            pppppplVar31 = pppppplVar7 + 1;
            goto LAB_109d51124;
          }
        }
        pppppplVar17 = (long ******)*pppppplVar7;
      }
LAB_109d51124:
      pppppplVar7 = (long ******)0x30;
      __Znwm();
      pppppplVar7[4] = ppppplVar14;
      *(undefined4 *)(pppppplVar7 + 5) = 0;
      *pppppplVar7 = (long *****)0x0;
      pppppplVar7[1] = (long *****)0x0;
      pppppplVar7[2] = (long *****)pppppplVar9;
      *pppppplVar31 = (long *****)pppppplVar7;
      pppppplVar9 = pppppplVar7;
      if ((long *****)*pppppplVar36[0xf] != (long *****)0x0) {
        pppppplVar36[0xf] = (long *****)*pppppplVar36[0xf];
        pppppplVar9 = (long ******)*pppppplVar31;
      }
      func_0x000107c27d40(pppppplVar36[0x10],pppppplVar9);
      pppppplVar36[0x11] = (long *****)((long)pppppplVar36[0x11] + 1);
LAB_109d51174:
      if (*(int *)(pppppplVar7 + 5) == 0) {
        *(int *)(pppppplVar7 + 5) =
             (int)((ulong)((long)pppppplVar36[0x13] - (long)pppppplVar36[0x12]) >> 3) + 1;
        func_0x000109d58f7c(pppppplVar36 + 0x12,&ppppplStack_408);
      }
    }
    FUN_109d512d8(pppppplVar36,*pppplStack_3f8);
    pppplVar16 = pppplStack_3f8;
    if ((pppplStack_3f8 != (long ****)0x0) && (0xffffffee < *(byte *)(pppplStack_3f8 + 2) - 0x15)) {
      uVar13 = (ulong)*(uint *)((long)pppplStack_3f8 + 0x14) & 0x7ffffff;
      if ((int)uVar13 != 0) {
        if ((*(uint *)((long)pppplStack_3f8 + 0x14) >> 0x1e & 1) == 0) {
          pppplVar22 = pppplStack_3f8 + uVar13 * -4;
        }
        else {
          pppplVar22 = (long ****)pppplStack_3f8[-1];
        }
        lVar33 = uVar13 << 5;
        do {
          if (*(char *)(*pppplVar22 + 2) != '\x16') {
            FUN_109d51068(pppppplVar36);
          }
          pppplVar22 = pppplVar22 + 4;
          lVar33 = lVar33 + -0x20;
        } while (lVar33 != 0);
        if (*(char *)(pppplVar16 + 2) == '\x05') {
          sVar12 = *(short *)((long)pppplVar16 + 0x12);
          if (sVar12 == 0x3f) {
            FUN_109d51068(pppppplVar36,pppplVar16[7]);
            sVar12 = *(short *)((long)pppplVar16 + 0x12);
          }
          if (sVar12 == 0x22) {
            lVar33 = 0x40;
            if (*(char *)(pppplVar16 + 2) != '>') {
              lVar33 = 0x18;
            }
            FUN_109d512d8(pppppplVar36,*(undefined8 *)((long)pppplVar16 + lVar33));
          }
        }
        ppppplStack_408 = (long *****)pppplStack_3f8;
        uStack_400 = 1;
        func_0x000109d52408(pppppplVar36 + 0xc,&ppppplStack_408);
        ppppplVar14 = pppppplVar36[0xc];
        ppppplVar28 = pppppplVar36[0xd];
        pppppplVar36 = pppppplVar36 + 9;
        FUN_109d5649c(pppppplVar36,&pppplStack_3f8);
        *(int *)(pppppplVar36 + 1) = (int)((ulong)((long)ppppplVar28 - (long)ppppplVar14) >> 4);
        return pppppplVar36;
      }
    }
    ppppplStack_408 = (long *****)pppplStack_3f8;
    uStack_400 = 1;
    pppppplVar9 = pppppplVar36 + 0xc;
    func_0x000109d52408(pppppplVar9,&ppppplStack_408);
    *(int *)(pppppplVar27 + 1) =
         (int)((ulong)((long)pppppplVar36[0xd] - (long)pppppplVar36[0xc]) >> 4);
  }
  else {
    uVar4 = *(int *)(pppppplVar27 + 1) - 1;
    *(int *)(pppppplVar36[0xc] + (ulong)uVar4 * 2 + 1) =
         *(int *)(pppppplVar36[0xc] + (ulong)uVar4 * 2 + 1) + 1;
    pppppplVar9 = pppppplVar27;
  }
  return pppppplVar9;
}



/* Entry: 109d51068; end: 109d512d7;  */

void FUN_109d51068(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  short sVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 *puStack_48;
  
  lVar9 = param_1 + 0x48;
  puStack_48 = param_2;
  FUN_109d5649c(lVar9,&puStack_48);
  if (*(int *)(lVar9 + 8) == 0) {
    if ((*(byte *)(puStack_48 + 2) < 4 && *(byte *)(puStack_48 + 2) != 1) &&
       (puVar8 = (undefined8 *)puStack_48[6], puStack_58 = puVar8, puVar8 != (undefined8 *)0x0)) {
      puVar4 = *(undefined8 **)(param_1 + 0x80);
      puVar7 = (undefined8 *)(param_1 + 0x80);
      while (puVar10 = puVar7, puVar4 != (undefined8 *)0x0) {
        while (puVar2 = puVar4, puVar7 = puVar2, (undefined8 *)puVar2[4] <= puVar8) {
          if (puVar8 <= (undefined8 *)puVar2[4]) goto LAB_109d51174;
          puVar4 = (undefined8 *)puVar2[1];
          if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
            puVar10 = puVar2 + 1;
            goto LAB_109d51124;
          }
        }
        puVar4 = (undefined8 *)*puVar2;
      }
LAB_109d51124:
      puVar2 = (undefined8 *)0x30;
      __Znwm();
      puVar2[4] = puVar8;
      *(undefined4 *)(puVar2 + 5) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = puVar7;
      *puVar10 = puVar2;
      puVar8 = puVar2;
      if (**(long **)(param_1 + 0x78) != 0) {
        *(long *)(param_1 + 0x78) = **(long **)(param_1 + 0x78);
        puVar8 = (undefined8 *)*puVar10;
      }
      func_0x000107c27d40(*(undefined8 *)(param_1 + 0x80),puVar8);
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
LAB_109d51174:
      if (*(int *)(puVar2 + 5) == 0) {
        *(int *)(puVar2 + 5) =
             (int)((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) >> 3) + 1;
        func_0x000109d58f7c((long *)(param_1 + 0x90),&puStack_58);
      }
    }
    FUN_109d512d8(param_1,*puStack_48);
    puVar8 = puStack_48;
    if ((puStack_48 != (undefined8 *)0x0) && (0xffffffee < *(byte *)(puStack_48 + 2) - 0x15)) {
      uVar5 = (ulong)*(uint *)((long)puStack_48 + 0x14) & 0x7ffffff;
      if ((int)uVar5 != 0) {
        if ((*(uint *)((long)puStack_48 + 0x14) >> 0x1e & 1) == 0) {
          plVar6 = puStack_48 + uVar5 * -4;
        }
        else {
          plVar6 = (long *)puStack_48[-1];
        }
        lVar9 = uVar5 << 5;
        do {
          if (*(char *)(*plVar6 + 0x10) != '\x16') {
            FUN_109d51068(param_1);
          }
          plVar6 = plVar6 + 4;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
        if (*(char *)(puVar8 + 2) == '\x05') {
          sVar3 = *(short *)((long)puVar8 + 0x12);
          if (sVar3 == 0x3f) {
            FUN_109d51068(param_1,puVar8[7]);
            sVar3 = *(short *)((long)puVar8 + 0x12);
          }
          if (sVar3 == 0x22) {
            lVar9 = 0x40;
            if (*(char *)(puVar8 + 2) != '>') {
              lVar9 = 0x18;
            }
            FUN_109d512d8(param_1,*(undefined8 *)((long)puVar8 + lVar9));
          }
        }
        puStack_58 = puStack_48;
        uStack_50 = 1;
        func_0x000109d52408(param_1 + 0x60,&puStack_58);
        lVar9 = *(long *)(param_1 + 0x60);
        lVar1 = *(long *)(param_1 + 0x68);
        param_1 = param_1 + 0x48;
        FUN_109d5649c(param_1,&puStack_48);
        *(int *)(param_1 + 8) = (int)((ulong)(lVar1 - lVar9) >> 4);
        return;
      }
    }
    puStack_58 = puStack_48;
    uStack_50 = 1;
    func_0x000109d52408(param_1 + 0x60,&puStack_58);
    *(int *)(lVar9 + 8) = (int)((ulong)(*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60)) >> 4)
    ;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x60) + (ulong)(*(int *)(lVar9 + 8) - 1) * 0x10;
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
  }
  return;
}



/* Entry: 109d512d8; end: 109d5139f;  */

void FUN_109d512d8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = param_1 + 0x18;
  lStack_38 = param_2;
  func_0x000109d59088(lVar2,&lStack_38);
  if (*(int *)(lVar2 + 8) == 0) {
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x4ff) == 0x10)) {
      *(undefined4 *)(lVar2 + 8) = 0xffffffff;
    }
    if (*(uint *)(param_2 + 0xc) != 0) {
      lVar2 = (ulong)*(uint *)(param_2 + 0xc) << 3;
      puVar1 = *(undefined8 **)(param_2 + 0x10);
      do {
        FUN_109d512d8(param_1,*puVar1);
        lVar2 = lVar2 + -8;
        puVar1 = puVar1 + 1;
      } while (lVar2 != 0);
    }
    lVar2 = param_1 + 0x18;
    func_0x000109d59088(lVar2,&lStack_38);
    if (*(int *)(lVar2 + 8) + 1U < 2) {
      FUN_109d389e4(param_1 + 0x30,&lStack_38);
      *(int *)(lVar2 + 8) =
           (int)((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) >> 3);
    }
  }
  return;
}



/* Entry: 109d513a0; end: 109d51753;  */

undefined1  [16] FUN_109d513a0(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  uint *puStack_68;
  
  puVar11 = (uint *)0x0;
  puVar9 = param_1;
  if (param_2 == 0) goto LAB_109d51704;
  puVar9 = param_1 + 0x50;
  puVar11 = (uint *)&lStack_70;
  lStack_70 = param_2;
  FUN_109d48798(puVar9,puVar11,&uStack_80);
  plVar16 = (long *)CONCAT44(uStack_7c,uStack_80);
  if (((ulong)puVar9 & 1) == 0) {
    uVar19 = param_1[0x54];
    puVar11 = (uint *)(ulong)uVar19;
    if (param_1[0x52] * 4 + 4 < uVar19 * 3) {
      if ((uVar19 + ~param_1[0x52]) - param_1[0x53] <= uVar19 >> 3) goto LAB_109d51728;
    }
    else {
      puVar11 = (uint *)(ulong)(uVar19 << 1);
LAB_109d51728:
      func_0x000109d59314(param_1 + 0x50,puVar11);
      puVar9 = param_1 + 0x50;
      puVar11 = (uint *)&lStack_70;
      FUN_109d48798(puVar9,puVar11,&uStack_80);
      plVar16 = (long *)CONCAT44(uStack_7c,uStack_80);
    }
    param_1[0x52] = param_1[0x52] + 1;
    if (*plVar16 != -4) {
      param_1[0x53] = param_1[0x53] - 1;
    }
    *plVar16 = lStack_70;
    *(undefined4 *)(plVar16 + 1) = 0;
LAB_109d51454:
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 < *(long **)(param_1 + 0x5a)) {
      plVar17 = plVar4 + 1;
      *plVar4 = lStack_70;
    }
    else {
      lVar21 = (long)plVar4 - *(long *)(param_1 + 0x56);
      uVar2 = (lVar21 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
LAB_109d51750:
        FUN_109d3ac94();
        if ((*(ushort *)((long)puVar9 + 0x12) & 1) == 0) {
          lVar15 = *(long *)(puVar9 + 0x16);
          lVar21 = lVar15;
        }
        else {
          FUN_109d85318(puVar9);
          lVar15 = *(long *)(puVar9 + 0x16);
          lVar21 = lVar15;
          if ((*(ushort *)((long)puVar9 + 0x12) & 1) != 0) {
            FUN_109d85318(puVar9);
            lVar21 = *(long *)(puVar9 + 0x16);
          }
        }
        auVar23._8_8_ = lVar21 + *(long *)(puVar9 + 0x18) * 0x28;
        auVar23._0_8_ = lVar15;
        return auVar23;
      }
      uVar12 = (long)*(long **)(param_1 + 0x5a) - *(long *)(param_1 + 0x56);
      uVar13 = (long)uVar12 >> 2;
      if (uVar13 <= uVar2) {
        uVar13 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar13 = 0x1fffffffffffffff;
      }
      puVar8 = param_1 + 0x56;
      FUN_109d3aca8();
      plVar4 = (long *)((long)puVar8 + lVar21);
      plVar17 = plVar4 + 1;
      *plVar4 = lStack_70;
      puVar11 = *(uint **)(param_1 + 0x56);
      lVar21 = (long)plVar4 - (*(long *)(param_1 + 0x58) - (long)puVar11);
      _memcpy(lVar21);
      puVar9 = *(uint **)(param_1 + 0x56);
      *(long *)(param_1 + 0x56) = lVar21;
      *(long **)(param_1 + 0x58) = plVar17;
      *(uint **)(param_1 + 0x5a) = puVar8 + uVar13 * 2;
      if (puVar9 != (uint *)0x0) {
        __ZdlPv();
      }
    }
    *(long **)(param_1 + 0x58) = plVar17;
    *(int *)(plVar16 + 1) = (int)((ulong)((long)plVar17 - *(long *)(param_1 + 0x56)) >> 3);
  }
  else if ((int)plVar16[1] == 0) goto LAB_109d51454;
  if ((lStack_70 != 0) && (iVar5 = *(int *)(lStack_70 + 8), iVar5 != 0)) {
    uVar19 = 0xffffffff;
    do {
      uVar1 = uVar19 + 1;
      if (((lStack_70 != 0) && (uVar1 < *(uint *)(lStack_70 + 8))) &&
         (lVar21 = *(long *)(lStack_70 + (ulong)uVar1 * 8 + 0x28), lVar21 != 0)) {
        puVar9 = param_1 + 0x44;
        puVar11 = &uStack_80;
        uStack_80 = uVar19;
        lStack_78 = lVar21;
        FUN_109d48454(puVar9,puVar11,&puStack_68);
        if (((ulong)puVar9 & 1) == 0) {
          uVar6 = param_1[0x48];
          puVar11 = (uint *)(ulong)uVar6;
          if (param_1[0x46] * 4 + 4 < uVar6 * 3) {
            if ((uVar6 + ~param_1[0x46]) - param_1[0x47] <= uVar6 >> 3) goto LAB_109d516e4;
          }
          else {
            puVar11 = (uint *)(ulong)(uVar6 << 1);
LAB_109d516e4:
            func_0x000109d59440(param_1 + 0x44,puVar11);
            puVar9 = param_1 + 0x44;
            puVar11 = &uStack_80;
            FUN_109d48454(puVar9,puVar11,&puStack_68);
          }
          param_1[0x46] = param_1[0x46] + 1;
          if (*puStack_68 != 0xffffffff || *(long *)(puStack_68 + 2) != -4) {
            param_1[0x47] = param_1[0x47] - 1;
          }
          *puStack_68 = uStack_80;
          *(long *)(puStack_68 + 2) = lStack_78;
          puStack_68[4] = 0;
        }
        else if (puStack_68[4] != 0) goto LAB_109d516d0;
        puVar8 = puStack_68;
        puVar20 = *(undefined8 **)(param_1 + 0x4c);
        if (*(undefined8 **)(param_1 + 0x4e) <= puVar20) {
          puVar14 = *(uint **)(param_1 + 0x4a);
          lVar15 = (long)puVar20 - (long)puVar14;
          uVar2 = (lVar15 >> 4) + 1;
          if (uVar2 >> 0x3c == 0) {
            uVar12 = (long)*(undefined8 **)(param_1 + 0x4e) - (long)puVar14;
            uVar13 = (long)uVar12 >> 3;
            if (uVar13 <= uVar2) {
              uVar13 = uVar2;
            }
            if (0x7fffffffffffffef < uVar12) {
              uVar13 = 0xfffffffffffffff;
            }
            if (uVar13 >> 0x3c == 0) {
              lVar10 = uVar13 << 4;
              __Znwm();
              puVar3 = (undefined8 *)(lVar10 + lVar15);
              puVar3[1] = lStack_78;
              *puVar3 = CONCAT44(uStack_7c,uStack_80);
              puVar20 = puVar3 + 2;
              puVar18 = (uint *)(puVar3 + (lVar15 >> 4) * -2);
              puVar9 = puVar18;
              puVar11 = puVar14;
              _memcpy(puVar18,puVar14,lVar15);
              *(uint **)(param_1 + 0x4a) = puVar18;
              *(undefined8 **)(param_1 + 0x4c) = puVar20;
              *(ulong *)(param_1 + 0x4e) = lVar10 + uVar13 * 0x10;
              if (puVar14 != (uint *)0x0) {
                __ZdlPv(puVar14);
                puVar9 = puVar14;
              }
              goto LAB_109d51680;
            }
            func_0x000104c4f740();
          }
          FUN_109d54d2c();
          goto LAB_109d51750;
        }
        puVar20[1] = lStack_78;
        *puVar20 = CONCAT44(uStack_7c,uStack_80);
        puVar20 = puVar20 + 2;
LAB_109d51680:
        *(undefined8 **)(param_1 + 0x4c) = puVar20;
        puVar8[4] = (uint)((ulong)((long)puVar20 - *(long *)(param_1 + 0x4a)) >> 4);
        if (*(uint *)(lVar21 + 8) != 0) {
          lVar15 = (ulong)*(uint *)(lVar21 + 8) << 3;
          plVar16 = (long *)(lVar21 + 0x30);
          do {
            lVar21 = *plVar16;
            if ((lVar21 != 0) && (*(char *)(lVar21 + 8) == '\x03')) {
              puVar11 = *(uint **)(lVar21 + 0x10);
              puVar9 = param_1;
              FUN_109d512d8(param_1,puVar11);
            }
            plVar16 = plVar16 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
LAB_109d516d0:
      bVar7 = uVar19 != iVar5 - 2U;
      uVar19 = uVar1;
    } while (bVar7);
  }
LAB_109d51704:
  auVar22._8_8_ = puVar11;
  auVar22._0_8_ = puVar9;
  return auVar22;
}



/* Entry: 109d51754; end: 109d517b7;  */

undefined1  [16] FUN_109d51754(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((*(ushort *)(param_1 + 0x12) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    lVar1 = lVar2;
  }
  else {
    FUN_109d85318(param_1);
    lVar2 = *(long *)(param_1 + 0x58);
    lVar1 = lVar2;
    if ((*(ushort *)(param_1 + 0x12) & 1) != 0) {
      FUN_109d85318(param_1);
      lVar1 = *(long *)(param_1 + 0x58);
    }
  }
  auVar3._8_8_ = lVar1 + *(long *)(param_1 + 0x60) * 0x28;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 109d517b8; end: 109d518af;  */

void FUN_109d517b8(long param_1,undefined8 *param_2)

{
  uint uVar1;
  short sVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined8 *puStack_38;
  
  FUN_109d512d8(param_1,*param_2);
  if (0x14 < *(byte *)(param_2 + 2)) {
    return;
  }
  uVar3 = param_1 + 0x48;
  puStack_38 = param_2;
  FUN_109d55260(uVar3,&puStack_38,auStack_40);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar1 = *(uint *)((long)param_2 + 0x14);
  if ((uVar1 >> 0x1e & 1) == 0) {
    uVar3 = (ulong)(uVar1 & 0x7ffffff);
    plVar4 = param_2 + uVar3 * -4;
    if (uVar3 == 0) goto LAB_109d5184c;
  }
  else {
    plVar4 = (long *)param_2[-1];
    uVar3 = (ulong)uVar1 & 0x7ffffff;
    if ((uVar1 & 0x7ffffff) == 0) goto LAB_109d5184c;
  }
  lVar5 = uVar3 << 5;
  do {
    if (*(char *)(*plVar4 + 0x10) != '\x16') {
      FUN_109d517b8(param_1);
    }
    plVar4 = plVar4 + 4;
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != 0);
LAB_109d5184c:
  if (*(char *)(param_2 + 2) == '\x05') {
    sVar2 = *(short *)((long)param_2 + 0x12);
    if (sVar2 == 0x3f) {
      FUN_109d517b8(param_1,param_2[7]);
      sVar2 = *(short *)((long)param_2 + 0x12);
    }
    if (sVar2 == 0x22) {
      lVar5 = 0x40;
      if (*(char *)(param_2 + 2) != '>') {
        lVar5 = 0x18;
      }
      FUN_109d512d8(param_1,*(undefined8 *)((long)param_2 + lVar5));
    }
  }
  return;
}



/* Entry: 109d518b0; end: 109d51b0b;  */

void FUN_109d518b0(code *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  code *pcStack_68;
  
  puVar2 = PTR___ZSt7nothrow_1103469d8;
  if (param_2 == param_3) {
    return;
  }
  if (param_2 + 1 == param_3) {
    return;
  }
  if (((byte)param_1[0x108] & 1) != 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x60);
  uVar12 = (long)((ulong)param_3 * 0x10 + (ulong)param_2 * -0x10) >> 4;
  uVar13 = uVar12;
  pcStack_68 = param_1;
  if ((long)uVar12 < 1) {
    lVar3 = 0;
    uVar13 = 0;
  }
  else {
    do {
      lVar3 = uVar13 << 4;
      __ZnwmRKSt9nothrow_t(lVar3,puVar2);
      if (lVar3 != 0) goto LAB_109d51964;
      uVar8 = uVar13 >> 1;
      bVar1 = 1 < uVar13;
      uVar13 = uVar8;
    } while (bVar1);
    lVar3 = 0;
  }
LAB_109d51964:
  FUN_109d552f8(lVar7 + (ulong)param_2 * 0x10,lVar7 + (ulong)param_3 * 0x10,&pcStack_68,uVar12,lVar3
                ,uVar13);
  if (lVar3 != 0) {
    __ZdlPv(lVar3);
  }
  puVar9 = (undefined8 *)((ulong)param_3 * 0x10 + *(long *)(param_1 + 0x60));
  pcStack_68 = FUN_109d51c2c;
  puVar10 = (undefined8 *)((ulong)param_2 * 0x10 + *(long *)(param_1 + 0x60));
  lVar7 = (long)puVar9 - (long)puVar10;
  puVar14 = puVar10;
  do {
    uVar6 = *(uint *)(*(long *)*puVar14 + 8);
    if ((uVar6 & 0xfe) == 0x12) {
      uVar6 = (uint)*(byte *)(**(long **)(*(long *)*puVar14 + 0x10) + 8);
    }
    else {
      uVar6 = uVar6 & 0xff;
    }
    puVar11 = puVar9;
    if (uVar6 != 0xd) goto LAB_109d51a00;
    puVar14 = puVar14 + 2;
    lVar7 = lVar7 + -0x10;
    puVar10 = puVar10 + 2;
  } while (puVar14 != puVar9);
  goto LAB_109d51aac;
  while( true ) {
    puVar4 = puVar11;
    (*pcStack_68)();
    puVar2 = PTR___ZSt7nothrow_1103469d8;
    puVar9 = puVar9 + -2;
    lVar7 = lVar7 + -0x10;
    if ((int)puVar4 != 0) break;
LAB_109d51a00:
    puVar11 = puVar11 + -2;
    if (puVar14 == puVar11) goto LAB_109d51aac;
  }
  uVar13 = (lVar7 >> 4) + 1;
  if (lVar7 >> 4 < 3) {
    uVar12 = 0;
    lVar7 = 0;
  }
  else {
    uVar12 = uVar13;
    if (0x7fffffffffffffe < uVar13) {
      uVar12 = 0x7ffffffffffffff;
    }
    do {
      lVar7 = uVar12 << 4;
      __ZnwmRKSt9nothrow_t(lVar7,puVar2);
      if (lVar7 != 0) goto LAB_109d51a84;
      uVar8 = uVar12 >> 1;
      bVar1 = 1 < uVar12;
      uVar12 = uVar8;
    } while (bVar1);
    lVar7 = 0;
  }
LAB_109d51a84:
  FUN_109d561a4(puVar10,puVar9,&pcStack_68,uVar13,lVar7,uVar12);
  if (lVar7 != 0) {
    __ZdlPv(lVar7);
  }
LAB_109d51aac:
  do {
    uVar6 = param_2 + 1;
    pcVar5 = param_1 + 0x48;
    FUN_109d5649c(pcVar5,*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x10);
    *(uint *)(pcVar5 + 8) = uVar6;
    param_2 = uVar6;
  } while (param_3 != uVar6);
  return;
}



/* Entry: 109d51b0c; end: 109d51b67;  */

undefined1  [16] FUN_109d51b0c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_1;
  uStack_28 = param_2;
  FUN_109d54f98(param_1,&uStack_28,&lStack_30);
  if ((int)plVar1 == 0) {
    lStack_30 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x10;
    lVar2 = lStack_30;
  }
  else {
    lVar2 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x10;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lStack_30;
  return auVar3;
}



/* Entry: 109d51b68; end: 109d51bcf;  */

int FUN_109d51b68(long param_1,long param_2)

{
  int iVar1;
  long lStack_20;
  undefined8 uStack_18;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 0x10) != '\x17')) {
    param_1 = param_1 + 0x48;
    FUN_109d51bd0();
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    uStack_18 = *(undefined8 *)(param_2 + 0x18);
    param_1 = param_1 + 0xd8;
    FUN_109d4e80c(param_1,&uStack_18,&lStack_20);
    if ((int)param_1 == 0) {
      return -1;
    }
    iVar1 = *(int *)(lStack_20 + 0xc);
  }
  return iVar1 + -1;
}



/* Entry: 109d51bd0; end: 109d51c2b;  */

undefined1  [16] FUN_109d51bd0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_1;
  uStack_28 = param_2;
  FUN_109d55260(param_1,&uStack_28,&lStack_30);
  if ((int)plVar1 == 0) {
    lStack_30 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x10;
    lVar2 = lStack_30;
  }
  else {
    lVar2 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x10;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lStack_30;
  return auVar3;
}



/* Entry: 109d51c2c; end: 109d51c63;  */

bool FUN_109d51c2c(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)*param_1 + 8);
  if ((uVar1 & 0xfe) == 0x12) {
    uVar1 = (uint)*(byte *)(**(long **)(*(long *)*param_1 + 0x10) + 8);
  }
  else {
    uVar1 = uVar1 & 0xff;
  }
  return uVar1 == 0xd;
}



/* Entry: 109d51c64; end: 109d51f3b;  */

ulong ***** FUN_109d51c64(ulong *****param_1,undefined8 param_2,ulong *****param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong *****pppppuVar4;
  ulong *****pppppuVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  long *****ppppplVar9;
  ulong ***pppuVar10;
  ulong ****ppppuVar11;
  ulong uVar12;
  ulong ****ppppuVar13;
  ulong uVar14;
  ulong ****ppppuVar15;
  ulong ****ppppuVar16;
  long lVar17;
  ulong ****ppppuStack_600;
  ulong ***pppuStack_5f8;
  long ****pppplStack_5f0;
  ulong ****ppppuStack_5e8;
  ulong ***pppuStack_5e0;
  ulong ***apppuStack_5d8 [64];
  long lStack_3d8;
  ulong ***pppuStack_390;
  undefined1 *puStack_388;
  ulong uStack_380;
  undefined1 auStack_378 [512];
  ulong ****ppppuStack_178;
  ulong uStack_170;
  ulong ***apppuStack_168 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = 0x2000000000;
  uStack_380 = 0x2000000000;
  pppppuVar6 = param_1;
  puStack_388 = auStack_378;
  ppppuStack_178 = apppuStack_168;
  FUN_109d51f3c();
  if (pppppuVar6 != (ulong *****)0x0) {
    ppppuVar11 = pppppuVar6[-2];
    if (((uint)ppppuVar11 >> 1 & 1) == 0) {
      param_3 = pppppuVar6 + -2 + -((ulong)ppppuVar11 >> 2 & 0xf);
    }
    else {
      param_3 = (ulong *****)pppppuVar6[-4];
    }
    FUN_109d52194(&puStack_388);
  }
  while( true ) {
    if ((int)uStack_380 == 0) break;
    ppppuVar15 = *(ulong *****)(puStack_388 + (uStack_380 & 0xffffffff) * 0x10 + -0x10);
    ppppuVar11 = ppppuVar15 + -2;
    pppuVar10 = *ppppuVar11;
    if (((uint)pppuVar10 >> 1 & 1) == 0) {
      ppppuVar13 = ppppuVar11 + -((ulong)pppuVar10 >> 2 & 0xf);
      uVar14 = (ulong)pppuVar10 >> 6 & 0xf;
    }
    else {
      ppppuVar13 = (ulong ****)ppppuVar15[-4];
      uVar14 = (ulong)*(uint *)(ppppuVar15 + -3);
    }
    ppppuVar16 = *(ulong *****)(puStack_388 + (uStack_380 & 0xffffffff) * 0x10 + -8);
    if (ppppuVar16 != ppppuVar13 + uVar14) {
      do {
        param_3 = (ulong *****)*ppppuVar16;
        pppppuVar6 = param_1;
        FUN_109d51f3c(param_1,param_2);
        if (pppppuVar6 != (ulong *****)0x0) break;
        ppppuVar16 = ppppuVar16 + 1;
      } while (ppppuVar16 != ppppuVar13 + uVar14);
      pppuVar10 = *ppppuVar11;
    }
    if (((uint)pppuVar10 >> 1 & 1) == 0) {
      ppppuVar11 = ppppuVar11 + -((ulong)pppuVar10 >> 2 & 0xf);
      uVar14 = (ulong)pppuVar10 >> 6 & 0xf;
    }
    else {
      ppppuVar11 = (ulong ****)ppppuVar15[-4];
      uVar14 = (ulong)*(uint *)(ppppuVar15 + -3);
    }
    if (ppppuVar16 == ppppuVar11 + uVar14) {
      uStack_380 = CONCAT44(uStack_380._4_4_,(int)uStack_380 + -1);
      func_0x000109d52200(param_1 + 0x15,ppppuVar15);
      ppppuVar11 = param_1[0x15];
      ppppuVar13 = param_1[0x16];
      pppppuVar4 = param_1 + 0x1b;
      pppppuVar6 = (ulong *****)&pppuStack_390;
      pppuStack_390 = (ulong ***)ppppuVar15;
      FUN_109d56700();
      *(int *)((long)pppppuVar4 + 0xc) = (int)((ulong)((long)ppppuVar13 - (long)ppppuVar11) >> 3);
      if (((int)uStack_380 == 0) ||
         ((*(byte *)(*(long *)(puStack_388 + (uStack_380 & 0xffffffff) * 0x10 + -0x10) + 1) & 0x7f)
          == 1)) {
        if ((int)uStack_170 != 0) {
          lVar17 = (uStack_170 & 0xffffffff) << 3;
          pppppuVar4 = (ulong *****)ppppuStack_178;
          do {
            pppppuVar6 = (ulong *****)*pppppuVar4;
            ppppuVar11 = pppppuVar6[-2];
            if (((uint)ppppuVar11 >> 1 & 1) == 0) {
              param_3 = pppppuVar6 + -2 + -((ulong)ppppuVar11 >> 2 & 0xf);
            }
            else {
              param_3 = (ulong *****)pppppuVar6[-4];
            }
            FUN_109d52194(&puStack_388);
            pppppuVar4 = pppppuVar4 + 1;
            lVar17 = lVar17 + -8;
          } while (lVar17 != 0);
        }
        uStack_170 = uStack_170 & 0xffffffff00000000;
      }
    }
    else {
      pppppuVar6 = (ulong *****)*ppppuVar16;
      *(ulong *****)(puStack_388 + (uStack_380 & 0xffffffff) * 0x10 + -8) = ppppuVar16 + 1;
      if ((((ulong)*pppppuVar6 & 0x7f00) == 0x100) && (((ulong)*ppppuVar15 & 0x7f00) != 0x100)) {
        FUN_109d37520(&ppppuStack_178);
      }
      else {
        ppppuVar11 = pppppuVar6[-2];
        if (((uint)ppppuVar11 >> 1 & 1) == 0) {
          param_3 = pppppuVar6 + -2 + -((ulong)ppppuVar11 >> 2 & 0xf);
        }
        else {
          param_3 = (ulong *****)pppppuVar6[-4];
        }
        FUN_109d52194(&puStack_388);
      }
    }
  }
  if (puStack_388 != auStack_378) {
    _free();
  }
  pppppuVar4 = (ulong *****)ppppuStack_178;
  if (ppppuStack_178 != apppuStack_168) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  if (puStack_388 != auStack_378) {
    _free();
  }
  if (ppppuStack_178 != apppuStack_168) {
    _free();
  }
  __Unwind_Resume();
  pppppuVar8 = &ppppuStack_600;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar4;
  ppppplVar9 = (long *****)0x0;
  ppppuStack_600 = (ulong ****)param_3;
  if (param_3 != (ulong *****)0x0) {
    pppuStack_5e0 = (ulong ***)((ulong)pppppuVar6 & 0xffffffff);
    pppppuVar5 = pppppuVar4 + 0x1b;
    pppppuVar7 = &ppppuStack_5e8;
    ppppuStack_5e8 = (ulong ****)param_3;
    FUN_109d4e80c(pppppuVar5,pppppuVar7,&pppplStack_5f0);
    if ((int)pppppuVar5 == 0) {
      pppppuVar5 = pppppuVar4 + 0x1b;
      pppppuVar6 = &ppppuStack_5e8;
      func_0x000109d56754();
      *pppppuVar5 = ppppuStack_5e8;
      pppppuVar5[1] = (ulong ****)pppuStack_5e0;
      ppppplVar9 = (long *****)pppplStack_5f0;
      if (*(byte *)param_3 - 4 < 0x20) goto LAB_109d52134;
      pppppuVar6 = pppppuVar4 + 0x15;
      func_0x000109d522b8();
      *(int *)((long)pppppuVar5 + 0xc) =
           (int)((ulong)((long)pppppuVar4[0x16] - (long)pppppuVar4[0x15]) >> 3);
      pppppuVar5 = pppppuVar6;
      if (*(byte *)param_3 == 1) {
        pppppuVar8 = (ulong *****)param_3[0x10];
        FUN_109d51068();
        pppppuVar5 = pppppuVar4;
      }
    }
    else {
      pppppuVar8 = pppppuVar7;
      if (*(int *)(pppplStack_5f0 + 1) != 0 && *(int *)(pppplStack_5f0 + 1) != (int)pppppuVar6) {
        pppuStack_5e0 = (ulong ***)0x4000000000;
        *(undefined4 *)(pppplStack_5f0 + 1) = 0;
        ppppplVar9 = (long *****)pppplStack_5f0;
        ppppuStack_5e8 = apppuStack_5d8;
        if ((*(int *)((long)pppplStack_5f0 + 0xc) != 0) &&
           (pppppuVar7 = (ulong *****)*pppplStack_5f0, *(byte *)pppppuVar7 - 4 < 0x20)) {
          FUN_109d37520(&ppppuStack_5e8);
          while (uVar14 = (ulong)pppuStack_5e0 & 0xffffffff, (int)pppuStack_5e0 != 0) {
            while( true ) {
              ppppuVar11 = (ulong ****)ppppuStack_5e8[uVar14 - 1];
              uVar2 = (int)uVar14 - 1;
              uVar14 = (ulong)uVar2;
              pppuStack_5e0 = (ulong ***)CONCAT44(pppuStack_5e0._4_4_,uVar2);
              pppuVar10 = ppppuVar11[-2];
              if (((uint)pppuVar10 >> 1 & 1) == 0) {
                ppppuVar15 = ppppuVar11 + -2 + -((ulong)pppuVar10 >> 2 & 0xf);
                uVar12 = (ulong)pppuVar10 >> 6 & 0xf;
              }
              else {
                ppppuVar15 = (ulong ****)ppppuVar11[-4];
                uVar12 = (ulong)*(uint *)(ppppuVar11 + -3);
              }
              if (uVar12 != 0) break;
              if (uVar2 == 0) goto LAB_109d520b8;
            }
            lVar17 = uVar12 << 3;
            do {
              if ((ulong ****)*ppppuVar15 != (ulong ****)0x0) {
                iVar3 = (int)pppppuVar4 + 0xd8;
                pppppuVar7 = (ulong *****)&pppuStack_5f8;
                ppppplVar9 = &pppplStack_5f0;
                pppuStack_5f8 = *ppppuVar15;
                FUN_109d4e80c();
                iVar1 = 0;
                if ((ulong ****)pppplStack_5f0 !=
                    pppppuVar4[0x1b] + (ulong)*(uint *)(pppppuVar4 + 0x1d) * 2) {
                  iVar1 = iVar3;
                }
                if ((((iVar1 == 1) && (*(int *)(pppplStack_5f0 + 1) != 0)) &&
                    (*(undefined4 *)(pppplStack_5f0 + 1) = 0,
                    *(int *)((long)pppplStack_5f0 + 0xc) != 0)) &&
                   (pppppuVar7 = (ulong *****)*pppplStack_5f0, *(byte *)pppppuVar7 - 4 < 0x20)) {
                  FUN_109d37520(&ppppuStack_5e8);
                }
              }
              ppppuVar15 = ppppuVar15 + 1;
              lVar17 = lVar17 + -8;
            } while (lVar17 != 0);
          }
        }
LAB_109d520b8:
        pppppuVar5 = (ulong *****)ppppuStack_5e8;
        pppppuVar8 = pppppuVar7;
        pppplStack_5f0 = (long ****)ppppplVar9;
        if (ppppuStack_5e8 != apppuStack_5d8) {
          _free();
          pppppuVar8 = pppppuVar7;
          pppplStack_5f0 = (long ****)ppppplVar9;
        }
      }
    }
    param_3 = (ulong *****)0x0;
    pppppuVar6 = pppppuVar8;
    ppppplVar9 = (long *****)pppplStack_5f0;
  }
LAB_109d52134:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return param_3;
  }
  ___stack_chk_fail();
  if ((ulong *****)ppppuStack_5e8 != param_3) {
    _free();
  }
  __Unwind_Resume();
  uVar14 = (ulong)*(uint *)(pppppuVar5 + 1);
  pppppuVar4 = pppppuVar5;
  if (*(uint *)((long)pppppuVar5 + 0xc) <= *(uint *)(pppppuVar5 + 1)) {
    func_0x000107c2b01c(pppppuVar5,pppppuVar5 + 2,uVar14 + 1,0x10);
    uVar14 = (ulong)*(uint *)(pppppuVar5 + 1);
  }
  ppppuVar11 = *pppppuVar5;
  ppppuVar11[uVar14 * 2] = (ulong ***)pppppuVar6;
  (ppppuVar11 + uVar14 * 2)[1] = (ulong ***)ppppplVar9;
  *(int *)(pppppuVar5 + 1) = *(int *)(pppppuVar5 + 1) + 1;
  return pppppuVar4;
}



/* Entry: 109d51f3c; end: 109d52193;  */

long ***** FUN_109d51f3c(long *****param_1,long ******param_2,long *****param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  long *******ppppppplVar8;
  ulong uVar9;
  long ****pppplVar10;
  ulong uVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  long lVar14;
  long ****pppplStack_270;
  long ****pppplStack_268;
  long ******pppppplStack_260;
  long ****pppplStack_258;
  long ***ppplStack_250;
  long ***appplStack_248 [64];
  long lStack_48;
  
  pppppplVar7 = (long ******)&pppplStack_270;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar5 = param_1;
  ppppppplVar8 = (long *******)0x0;
  pppplStack_270 = (long ****)param_3;
  if (param_3 != (long *****)0x0) {
    ppplStack_250 = (long ***)((ulong)param_2 & 0xffffffff);
    ppppplVar4 = param_1 + 0x1b;
    pppppplVar6 = (long ******)&pppplStack_258;
    pppplStack_258 = (long ****)param_3;
    FUN_109d4e80c(ppppplVar4,pppppplVar6,&pppppplStack_260);
    if ((int)ppppplVar4 == 0) {
      ppppplVar5 = param_1 + 0x1b;
      param_2 = (long ******)&pppplStack_258;
      func_0x000109d56754();
      *ppppplVar5 = pppplStack_258;
      ppppplVar5[1] = (long ****)ppplStack_250;
      ppppppplVar8 = (long *******)pppppplStack_260;
      if (*(byte *)param_3 - 4 < 0x20) goto LAB_109d52134;
      ppppplVar4 = param_1 + 0x15;
      func_0x000109d522b8();
      *(int *)((long)ppppplVar5 + 0xc) =
           (int)((ulong)((long)param_1[0x16] - (long)param_1[0x15]) >> 3);
      if (*(byte *)param_3 == 1) {
        pppppplVar7 = (long ******)param_3[0x10];
        FUN_109d51068();
        ppppplVar4 = param_1;
      }
    }
    else {
      pppppplVar7 = pppppplVar6;
      if (*(int *)(pppppplStack_260 + 1) != 0 && *(int *)(pppppplStack_260 + 1) != (int)param_2) {
        ppplStack_250 = (long ***)0x4000000000;
        *(undefined4 *)(pppppplStack_260 + 1) = 0;
        ppppppplVar8 = (long *******)pppppplStack_260;
        pppplStack_258 = appplStack_248;
        if ((*(int *)((long)pppppplStack_260 + 0xc) != 0) &&
           (pppppplVar6 = (long ******)*pppppplStack_260, *(byte *)pppppplVar6 - 4 < 0x20)) {
          FUN_109d37520(&pppplStack_258);
          while (uVar9 = (ulong)ppplStack_250 & 0xffffffff, (int)ppplStack_250 != 0) {
            while( true ) {
              pppplVar10 = (long ****)pppplStack_258[uVar9 - 1];
              uVar2 = (int)uVar9 - 1;
              uVar9 = (ulong)uVar2;
              ppplStack_250 = (long ***)CONCAT44(ppplStack_250._4_4_,uVar2);
              ppplVar12 = pppplVar10[-2];
              if (((uint)ppplVar12 >> 1 & 1) == 0) {
                pppplVar13 = pppplVar10 + -2 + -((ulong)ppplVar12 >> 2 & 0xf);
                uVar11 = (ulong)ppplVar12 >> 6 & 0xf;
              }
              else {
                pppplVar13 = (long ****)pppplVar10[-4];
                uVar11 = (ulong)*(uint *)(pppplVar10 + -3);
              }
              if (uVar11 != 0) break;
              if (uVar2 == 0) goto LAB_109d520b8;
            }
            lVar14 = uVar11 << 3;
            do {
              if ((long *****)*pppplVar13 != (long *****)0x0) {
                iVar3 = (int)param_1 + 0xd8;
                pppppplVar6 = (long ******)&pppplStack_268;
                ppppppplVar8 = &pppppplStack_260;
                pppplStack_268 = (long ****)*pppplVar13;
                FUN_109d4e80c();
                iVar1 = 0;
                if (pppppplStack_260 !=
                    (long ******)(param_1[0x1b] + (ulong)*(uint *)(param_1 + 0x1d) * 2)) {
                  iVar1 = iVar3;
                }
                if ((((iVar1 == 1) && (*(int *)(pppppplStack_260 + 1) != 0)) &&
                    (*(undefined4 *)(pppppplStack_260 + 1) = 0,
                    *(int *)((long)pppppplStack_260 + 0xc) != 0)) &&
                   (pppppplVar6 = (long ******)*pppppplStack_260, *(byte *)pppppplVar6 - 4 < 0x20))
                {
                  FUN_109d37520(&pppplStack_258);
                }
              }
              pppplVar13 = pppplVar13 + 1;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
          }
        }
LAB_109d520b8:
        ppppplVar4 = (long *****)pppplStack_258;
        pppppplVar7 = pppppplVar6;
        pppppplStack_260 = (long ******)ppppppplVar8;
        if (pppplStack_258 != appplStack_248) {
          _free();
          pppppplVar7 = pppppplVar6;
          pppppplStack_260 = (long ******)ppppppplVar8;
        }
      }
    }
    param_3 = (long *****)0x0;
    ppppplVar5 = ppppplVar4;
    param_2 = pppppplVar7;
    ppppppplVar8 = (long *******)pppppplStack_260;
  }
LAB_109d52134:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  if ((long *****)pppplStack_258 != param_3) {
    _free();
  }
  __Unwind_Resume();
  uVar9 = (ulong)*(uint *)(ppppplVar5 + 1);
  ppppplVar4 = ppppplVar5;
  if (*(uint *)((long)ppppplVar5 + 0xc) <= *(uint *)(ppppplVar5 + 1)) {
    func_0x000107c2b01c(ppppplVar5,ppppplVar5 + 2,uVar9 + 1,0x10);
    uVar9 = (ulong)*(uint *)(ppppplVar5 + 1);
  }
  pppplVar10 = *ppppplVar5;
  pppplVar10[uVar9 * 2] = (long ***)param_2;
  (pppplVar10 + uVar9 * 2)[1] = (long ***)ppppppplVar8;
  *(int *)(ppppplVar5 + 1) = *(int *)(ppppplVar5 + 1) + 1;
  return ppppplVar4;
}



/* Entry: 109d52194; end: 109d524cf;  */

void FUN_109d52194(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar2 + 1,0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d524d0; end: 109d52bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109d524d0(long param_1,long *****param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *****ppppplVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  undefined4 uVar10;
  long *plVar11;
  long ****pppplVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long ***ppplVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long lVar23;
  long *****ppppplVar24;
  long *****ppppplVar25;
  long *****ppppplVar26;
  long *****ppppplVar27;
  undefined1 auVar28 [16];
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  ulong uStack_108;
  long ***appplStack_100 [8];
  long ****pppplStack_c0;
  ulong uStack_b8;
  long ***appplStack_b0 [8];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  plVar11 = (long *)(param_1 + 0xa8);
  auVar28._0_8_ = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
  auVar28._8_8_ = *(long *)(param_1 + 0xb0) - *plVar11;
  auVar28 = NEON_ushl(auVar28,_UNK_10e041e20,8);
  *(ulong *)(param_1 + 0x1c0) = CONCAT44(auVar28._8_4_,auVar28._0_4_);
  lVar18 = param_1;
  FUN_109d51b68();
  ppppplVar22 = (long *****)(param_1 + 0xf0);
  ppppplVar8 = (long *****)(ulong)((int)lVar18 + 1);
  FUN_109d58cb4(ppppplVar22,ppppplVar8,&pppplStack_c0);
  if ((int)ppppplVar22 == 0) {
    uVar10 = 0;
    uVar13 = 0;
  }
  else {
    uVar13 = *(ulong *)((long)pppplStack_c0 + 4);
    uVar10 = *(undefined4 *)((long)pppplStack_c0 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x1c8) = uVar10;
  uVar17 = uVar13 & 0xffffffff;
  lVar18 = (long)((uVar13 >> 0x1d) + uVar17 * -8) >> 3;
  if (0 < lVar18) {
    ppppplVar27 = (long *****)(uVar17 * 8 + *(long *)(param_1 + 0xc0));
    lVar19 = *(long *)(param_1 + 0xb0);
    if (*(long *)(param_1 + 0xb8) - lVar19 >> 3 < lVar18) {
      lVar23 = lVar19 - *(long *)(param_1 + 0xa8);
      uVar13 = lVar18 + (lVar23 >> 3);
      if (uVar13 >> 0x3d != 0) goto LAB_109d52b60;
      uVar14 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xa8);
      uVar17 = (long)uVar14 >> 2;
      if (uVar17 <= uVar13) {
        uVar17 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar17 = 0x1fffffffffffffff;
      }
      if (uVar17 == 0) {
        ppppplVar8 = (long *****)0x0;
      }
      else {
        FUN_109d54cb0();
      }
      puVar3 = (undefined8 *)(uVar17 + lVar23);
      lVar23 = lVar18 << 3;
      puVar15 = puVar3;
      do {
        *puVar15 = *ppppplVar27;
        lVar23 = lVar23 + -8;
        puVar15 = puVar15 + 1;
        ppppplVar27 = ppppplVar27 + 1;
      } while (lVar23 != 0);
      lVar23 = (long)ppppplVar8 * 8;
      _memcpy(puVar3 + lVar18,lVar19,*(long *)(param_1 + 0xb0) - lVar19);
      ppppplVar8 = *(long ******)(param_1 + 0xa8);
      lVar5 = *(long *)(param_1 + 0xb0);
      *(long *)(param_1 + 0xb0) = lVar19;
      lVar20 = (long)puVar3 - (lVar19 - (long)ppppplVar8);
      _memcpy(lVar20);
      lVar7 = *(long *)(param_1 + 0xa8);
      *(long *)(param_1 + 0xa8) = lVar20;
      *(long *)(param_1 + 0xb0) = (long)(puVar3 + lVar18) + (lVar5 - lVar19);
      *(ulong *)(param_1 + 0xb8) = uVar17 + lVar23;
      if (lVar7 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar18 = (uVar13 >> 0x1d & 0x7fffffff8) + uVar17 * -8;
      if (lVar18 != 0) {
        _memmove(lVar19,ppppplVar27,lVar18);
        ppppplVar8 = ppppplVar27;
      }
      *(long *)(param_1 + 0xb0) = lVar19 + lVar18;
    }
  }
  ppppplVar22 = param_2;
  FUN_109d51754();
  for (; ppppplVar22 != ppppplVar8; ppppplVar22 = ppppplVar22 + 5) {
    FUN_109d51068(param_1,ppppplVar22);
    pppplVar12 = ppppplVar22[3] + 0xe;
    ppplVar16 = *pppplVar12;
    if (ppplVar16 != (long ***)0x0) {
      uVar1 = *(int *)(ppppplVar22 + 4) + 2;
      if (uVar1 < *(uint *)(ppplVar16 + 1)) {
        if ((ppplVar16[(ulong)uVar1 + 5] == (long **)0x0) ||
           ((*(byte *)((long)ppplVar16[(ulong)uVar1 + 5] + 0x14) >> 6 & 1) == 0)) {
          if ((ppplVar16[(ulong)uVar1 + 5] == (long **)0x0) ||
             ((*(byte *)((long)ppplVar16[(ulong)uVar1 + 5] + 0x15) >> 2 & 1) == 0)) {
            if ((ppplVar16[(ulong)uVar1 + 5] == (long **)0x0) ||
               ((*(byte *)((long)ppplVar16[(ulong)uVar1 + 5] + 0x14) >> 5 & 1) == 0))
            goto LAB_109d52714;
            func_0x000109d5b4ec();
          }
          else {
            func_0x000109d5b48c();
          }
        }
        else {
          func_0x000109d5b42c();
        }
        FUN_109d512d8(param_1,pppplVar12);
      }
    }
LAB_109d52714:
  }
  uVar17 = (ulong)(*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60)) >> 4;
  *(int *)(param_1 + 0x1cc) = (int)uVar17;
  ppppplVar22 = param_2 + 9;
  ppppplVar8 = (long *****)param_2[10];
  uVar13 = uVar17;
  if (ppppplVar8 != ppppplVar22) {
    do {
      ppppplVar27 = (long *****)0x0;
      if (ppppplVar8 != (long *****)0x0) {
        ppppplVar27 = ppppplVar8 + -3;
      }
      for (ppppplVar24 = (long *****)ppppplVar8[3]; ppppplVar24 != ppppplVar27 + 5;
          ppppplVar24 = (long *****)ppppplVar24[1]) {
        uVar1 = *(uint *)((long)ppppplVar24 + -4);
        if ((uVar1 >> 0x1e & 1) == 0) {
          uVar13 = (ulong)(uVar1 & 0x7ffffff);
          ppppplVar26 = ppppplVar24 + uVar13 * -4 + -3;
          if (uVar13 != 0) {
LAB_109d52788:
            lVar18 = uVar13 << 5;
            do {
              bVar6 = *(byte *)(*ppppplVar26 + 2);
              if (bVar6 < 0x15) {
                if (3 < bVar6) {
LAB_109d527b0:
                  FUN_109d51068(param_1);
                }
              }
              else if (bVar6 == 0x18) goto LAB_109d527b0;
              ppppplVar26 = ppppplVar26 + 4;
              lVar18 = lVar18 + -0x20;
            } while (lVar18 != 0);
          }
        }
        else {
          ppppplVar26 = (long *****)ppppplVar24[-4];
          uVar13 = (ulong)uVar1 & 0x7ffffff;
          if ((uVar1 & 0x7ffffff) != 0) goto LAB_109d52788;
        }
        if ((ppppplVar24 != (long *****)0x0) && (*(char *)(ppppplVar24 + -1) == '[')) {
          FUN_109d51068(param_1,ppppplVar24[9]);
        }
      }
      pppplStack_c0 = (long ****)ppppplVar27;
      FUN_109d31650(param_1 + 0x1a8,&pppplStack_c0);
      lVar19 = *(long *)(param_1 + 0x1a8);
      lVar23 = *(long *)(param_1 + 0x1b0);
      lVar18 = param_1 + 0x48;
      pppplStack_c0 = (long ****)ppppplVar27;
      FUN_109d5959c(lVar18,&pppplStack_c0);
      *(int *)(lVar18 + 8) = (int)((ulong)(lVar23 - lVar19) >> 3);
      ppppplVar8 = (long *****)ppppplVar8[1];
    } while (ppppplVar8 != ppppplVar22);
    uVar17 = (ulong)*(uint *)(param_1 + 0x1cc);
    uVar13 = (ulong)(*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60)) >> 4;
  }
  FUN_109d518b0(param_1,uVar17,uVar13);
  ppppplVar8 = (long *****)param_2[0xe];
  FUN_109d513a0(param_1);
  *(int *)(param_1 + 0x1d0) =
       (int)((ulong)(*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60)) >> 4);
  pppplStack_128 = appplStack_b0;
  uStack_b8 = 0x800000000;
  pppplStack_120 = appplStack_100;
  uStack_108 = 0x800000000;
  ppppplVar27 = (long *****)param_2[10];
  pppplStack_110 = pppplStack_120;
  pppplStack_c0 = pppplStack_128;
  if (ppppplVar27 != ppppplVar22) {
    do {
      ppppplVar24 = (long *****)0x0;
      if (ppppplVar27 != (long *****)0x0) {
        ppppplVar24 = ppppplVar27 + -3;
      }
      for (ppppplVar26 = (long *****)ppppplVar27[3]; ppppplVar26 != ppppplVar24 + 5;
          ppppplVar26 = (long *****)ppppplVar26[1]) {
        ppppplVar9 = ppppplVar26 + -3;
        uVar1 = *(uint *)((long)ppppplVar26 + -4);
        if ((uVar1 >> 0x1e & 1) == 0) {
          uVar13 = (ulong)(uVar1 & 0x7ffffff);
          ppppplVar21 = ppppplVar9 + uVar13 * -4;
          if (uVar13 != 0) {
LAB_109d528dc:
            ppppplVar4 = ppppplVar21 + uVar13 * 4;
            do {
              pppplVar12 = *ppppplVar21;
              if (pppplVar12 != (long ****)0x0 && *(char *)(pppplVar12 + 2) == '\x17') {
                ppppplVar25 = (long *****)pppplVar12[3];
                if (*(char *)ppppplVar25 == '!') {
                  uVar13 = uStack_108 & 0xffffffff;
                  if (uStack_108 >> 0x20 <= uVar13) {
                    ppppplVar8 = (long *****)pppplStack_120;
                    func_0x000107c2b01c(&pppplStack_110,pppplStack_120,uVar13 + 1,8);
                    uVar13 = uStack_108 & 0xffffffff;
                  }
                  pppplStack_110[uVar13] = (long ***)ppppplVar25;
                  uStack_108 = CONCAT44(uStack_108._4_4_,(int)uStack_108 + 1);
                  if (*(uint *)(ppppplVar25 + 3) != 0) {
                    pppplVar12 = ppppplVar25[2];
                    lVar18 = (ulong)*(uint *)(ppppplVar25 + 3) << 3;
                    do {
                      ppppplVar8 = (long *****)*pppplVar12;
                      if (*(char *)ppppplVar8 == '\x02') {
                        FUN_109d52bb8(&pppplStack_c0);
                      }
                      pppplVar12 = pppplVar12 + 1;
                      lVar18 = lVar18 + -8;
                    } while (lVar18 != 0);
                  }
                }
                else if (*(char *)ppppplVar25 == '\x02') {
                  FUN_109d52bb8(&pppplStack_c0);
                  ppppplVar8 = ppppplVar25;
                }
              }
              ppppplVar21 = ppppplVar21 + 4;
            } while (ppppplVar21 != ppppplVar4);
          }
        }
        else {
          ppppplVar21 = (long *****)ppppplVar26[-4];
          uVar13 = (ulong)uVar1 & 0x7ffffff;
          if ((uVar1 & 0x7ffffff) != 0) goto LAB_109d528dc;
        }
        if (*(char *)(*ppppplVar9 + 1) != '\a') {
          FUN_109d51068(param_1);
          ppppplVar8 = ppppplVar9;
        }
      }
      ppppplVar27 = (long *****)ppppplVar27[1];
    } while (ppppplVar27 != ppppplVar22);
    uVar13 = uStack_b8 & 0xffffffff;
    if ((int)uStack_b8 != 0) {
      lVar18 = 0;
      do {
        ppppplVar22 = *(long ******)((long)pppplStack_c0 + lVar18);
        lVar23 = param_1;
        FUN_109d51b68(param_1,param_2);
        lVar19 = param_1 + 0xd8;
        ppppplVar8 = &pppplStack_118;
        pppplStack_118 = (long ****)ppppplVar22;
        FUN_109d56700();
        if (*(int *)(lVar19 + 0xc) == 0) {
          func_0x000109d52200(plVar11,ppppplVar22);
          *(int *)(lVar19 + 8) = (int)lVar23 + 1;
          *(int *)(lVar19 + 0xc) =
               (int)((ulong)(*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8)) >> 3);
          ppppplVar8 = (long *****)ppppplVar22[0x10];
          FUN_109d51068(param_1);
        }
        lVar18 = lVar18 + 8;
      } while (uVar13 * 8 - lVar18 != 0);
    }
    if ((int)uStack_108 != 0) {
      ppppplVar27 = (long *****)(pppplStack_110 + (uStack_108 & 0xffffffff));
      ppppplVar22 = (long *****)pppplStack_110;
      do {
        ppppplVar24 = (long *****)*ppppplVar22;
        lVar19 = param_1;
        FUN_109d51b68(param_1,param_2);
        lVar18 = param_1 + 0xd8;
        ppppplVar8 = &pppplStack_118;
        pppplStack_118 = (long ****)ppppplVar24;
        FUN_109d56700();
        if (*(int *)(lVar18 + 0xc) == 0) {
          iVar2 = (int)lVar19 + 1;
          if (*(uint *)(ppppplVar24 + 3) != 0) {
            pppplVar12 = ppppplVar24[2];
            lVar19 = (ulong)*(uint *)(ppppplVar24 + 3) << 3;
            do {
              if (*(char *)*pppplVar12 != '\x02') {
                FUN_109d51c64(param_1,iVar2);
              }
              pppplVar12 = pppplVar12 + 1;
              lVar19 = lVar19 + -8;
            } while (lVar19 != 0);
          }
          func_0x000109d52200(plVar11);
          *(int *)(lVar18 + 8) = iVar2;
          *(int *)(lVar18 + 0xc) =
               (int)((ulong)(*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8)) >> 3);
          ppppplVar8 = ppppplVar24;
        }
        ppppplVar22 = ppppplVar22 + 1;
      } while (ppppplVar22 != ppppplVar27);
    }
    if (pppplStack_110 != pppplStack_120) {
      _free(pppplStack_110);
    }
  }
  ppppplVar22 = (long *****)pppplStack_c0;
  if (pppplStack_c0 != pppplStack_128) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109d52b60:
  FUN_109d54c9c();
  if (pppplStack_110 != pppplStack_120) {
    _free();
  }
  if (pppplStack_c0 != pppplStack_128) {
    _free();
  }
  __Unwind_Resume();
  uVar13 = (ulong)*(uint *)(ppppplVar22 + 1);
  if (*(uint *)((long)ppppplVar22 + 0xc) <= *(uint *)(ppppplVar22 + 1)) {
    func_0x000107c2b01c(ppppplVar22,ppppplVar22 + 2,uVar13 + 1,8);
    uVar13 = (ulong)*(uint *)(ppppplVar22 + 1);
  }
  (*ppppplVar22)[uVar13] = (long ***)ppppplVar8;
  *(int *)(ppppplVar22 + 1) = *(int *)(ppppplVar22 + 1) + 1;
  return;
}



/* Entry: 109d52bb8; end: 109d52c13;  */

void FUN_109d52bb8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1 + 1,8);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(undefined8 *)(*param_1 + uVar1 * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d52c14; end: 109d52d07;  */

void FUN_109d52c14(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uStack_48;
  
  plVar5 = (long *)(param_1 + 0x60);
  lVar3 = *plVar5;
  lVar4 = *(long *)(param_1 + 0x68);
  for (uVar2 = *(uint *)(param_1 + 0x1c0); uVar2 != (uint)((ulong)(lVar4 - lVar3) >> 4);
      uVar2 = uVar2 + 1) {
    FUN_109d52d08(param_1 + 0x48,*plVar5 + (ulong)uVar2 * 0x10);
  }
  plVar6 = (long *)(param_1 + 0xa8);
  lVar3 = *plVar6;
  lVar4 = *(long *)(param_1 + 0xb0);
  for (uVar2 = *(uint *)(param_1 + 0x1c4); uVar2 != (uint)((ulong)(lVar4 - lVar3) >> 3);
      uVar2 = uVar2 + 1) {
    func_0x000109d52d58(param_1 + 0xd8,*plVar6 + (ulong)uVar2 * 8);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1b0);
  for (puVar7 = *(undefined8 **)(param_1 + 0x1a8); puVar7 != puVar1; puVar7 = puVar7 + 1) {
    uStack_48 = *puVar7;
    FUN_109d52d08(param_1 + 0x48,&uStack_48);
  }
  FUN_109d52da8(plVar5,*(undefined4 *)(param_1 + 0x1c0));
  func_0x000109d52dd8(plVar6,*(undefined4 *)(param_1 + 0x1c4));
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  return;
}



/* Entry: 109d52d08; end: 109d52da7;  */

void FUN_109d52d08(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puStack_28;
  
  iVar1 = (int)param_1;
  FUN_109d55260(iVar1,param_2,&puStack_28);
  if (iVar1 != 0) {
    *puStack_28 = 0xffffffffffffe000;
    *(ulong *)(param_1 + 8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) + 1,
                  (int)*(undefined8 *)(param_1 + 8) + -1);
  }
  return;
}



/* Entry: 109d52da8; end: 109d52e07;  */

long * FUN_109d52da8(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plStack_98;
  
  uVar7 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    return param_1;
  }
  plVar4 = (long *)(param_2 - uVar7);
  puVar5 = (undefined8 *)param_1[1];
  if ((long *)(param_1[2] - (long)puVar5 >> 4) < plVar4) {
    lVar11 = (long)puVar5 - *param_1;
    uVar7 = (long)plVar4 + (lVar11 >> 4);
    if (uVar7 >> 0x3c != 0) {
      FUN_109d54ce4();
      plVar1 = (long *)param_1[1];
      if ((long *)(param_1[2] - (long)plVar1 >> 3) < plVar4) {
        lVar11 = (long)plVar1 - *param_1;
        uVar7 = (long)plVar4 + (lVar11 >> 3);
        if (uVar7 >> 0x3d != 0) {
          FUN_109d54c9c();
          plVar1 = param_1;
          FUN_109d31c54();
          if (((ulong)plVar1 & 1) == 0) {
            FUN_109d31cec(param_1,plVar4,plVar4);
            *param_1 = *plVar4;
            *(undefined4 *)(param_1 + 1) = 0;
            plStack_98 = param_1;
          }
          return plStack_98;
        }
        uVar8 = param_1[2] - *param_1;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          plVar1 = (long *)0x0;
        }
        else {
          plVar1 = plVar4;
          FUN_109d54cb0();
        }
        lVar11 = uVar9 + lVar11;
        _bzero(lVar11,(long)plVar4 << 3);
        lVar10 = lVar11 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        plVar2 = (long *)*param_1;
        *param_1 = lVar10;
        param_1[1] = lVar11 + (long)plVar4 * 8;
        param_1[2] = uVar9 + (long)plVar1 * 8;
        plVar3 = (long *)0x0;
        if (plVar2 != (long *)0x0) goto __ZdlPv;
      }
      else {
        plVar3 = param_1;
        if (plVar4 != (long *)0x0) {
          plVar3 = plVar1;
          _bzero(plVar1,(long)plVar4 << 3);
          plVar1 = plVar1 + (long)plVar4;
        }
        param_1[1] = (long)plVar1;
      }
      return plVar3;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_109d54cf8();
    }
    puVar6 = (undefined8 *)((long)plVar1 + lVar11);
    puVar5 = puVar6;
    do {
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6 + (long)plVar4 * 2);
    lVar11 = (long)puVar6 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    plVar2 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)(puVar6 + (long)plVar4 * 2);
    param_1[2] = (long)(plVar1 + uVar9 * 2);
    param_1 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar2;
    }
  }
  else {
    puVar6 = puVar5;
    if (plVar4 != (long *)0x0) {
      puVar6 = puVar5 + (long)plVar4 * 2;
      do {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar6);
    }
    param_1[1] = (long)puVar6;
  }
  return param_1;
}



/* Entry: 109d52e08; end: 109d52eab;  */

void FUN_109d52e08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x170;
  lStack_40 = param_2;
  func_0x000109d31bf8(lVar1,&lStack_40);
  if (*(int *)(lVar1 + 8) == 0) {
    lVar1 = *(long *)(lStack_40 + 0x38) + 0x48;
    lVar3 = *(long *)(*(long *)(lStack_40 + 0x38) + 0x50);
    if (lVar3 != lVar1) {
      iVar4 = 1;
      do {
        lStack_38 = 0;
        if (lVar3 != 0) {
          lStack_38 = lVar3 + -0x18;
        }
        lVar2 = param_1 + 0x170;
        FUN_109d54f3c(lVar2,&lStack_38);
        *(int *)(lVar2 + 8) = iVar4;
        lVar3 = *(long *)(lVar3 + 8);
        iVar4 = iVar4 + 1;
      } while (lVar3 != lVar1);
    }
    FUN_109d52e08(param_1,lStack_40);
  }
  return;
}



/* Entry: 109d52eac; end: 109d52fc3;  */

void FUN_109d52eac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_3;
  FUN_109d53144(param_3,param_1);
  if ((*(byte *)(lVar3 + 0xc) & 1) == 0) {
    while( true ) {
      *(undefined1 *)(lVar3 + 0xc) = 1;
      if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + 8) != 0)) {
        FUN_109d53344(param_1,param_2,*(undefined4 *)(lVar3 + 8),param_3,param_4);
      }
      if (0x14 < *(byte *)(param_1 + 0x10)) break;
      uVar1 = (ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff;
      if ((int)uVar1 == 0) {
        return;
      }
      if ((*(uint *)(param_1 + 0x14) >> 0x1e & 1) == 0) {
        plVar2 = (long *)(param_1 + uVar1 * -0x20);
      }
      else {
        plVar2 = *(long **)(param_1 + -8);
      }
      lVar3 = uVar1 << 5;
      do {
        if (*(byte *)(*plVar2 + 0x10) < 0x15) {
          FUN_109d52eac(*plVar2,param_2,param_3,param_4);
        }
        plVar2 = plVar2 + 4;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
      if (*(char *)(param_1 + 0x10) != '\x05') {
        return;
      }
      if (*(short *)(param_1 + 0x12) != 0x3f) {
        return;
      }
      param_1 = *(long *)(param_1 + 0x38);
      lVar3 = param_3;
      FUN_109d53144(param_3,param_1);
      if (*(char *)(lVar3 + 0xc) == '\x01') {
        return;
      }
    }
  }
  return;
}



/* Entry: 109d52fc4; end: 109d530b7;  */

void FUN_109d52fc4(long param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lStack_38;
  
  uVar2 = *param_2;
  FUN_109d530b8(uVar2,(int)param_2[2],param_1,&lStack_38);
  if (((uVar2 & 1) == 0) || (*(int *)(lStack_38 + 8) == 0)) {
    if ((param_1 != 0) && (*(byte *)(param_1 + 0x10) < 0x15)) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff;
      if ((int)uVar2 != 0) {
        if ((*(uint *)(param_1 + 0x14) >> 0x1e & 1) == 0) {
          plVar3 = (long *)(param_1 + uVar2 * -0x20);
        }
        else {
          plVar3 = *(long **)(param_1 + -8);
        }
        lVar4 = uVar2 << 5;
        do {
          bVar1 = *(byte *)(*plVar3 + 0x10);
          if (3 < bVar1 && bVar1 != 0x16) {
            FUN_109d52fc4(*plVar3,param_2);
          }
          plVar3 = plVar3 + 4;
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != 0);
        if ((*(char *)(param_1 + 0x10) == '\x05') && (*(short *)(param_1 + 0x12) == 0x3f)) {
          FUN_109d52fc4(*(undefined8 *)(param_1 + 0x38),param_2);
        }
      }
    }
    uVar2 = param_2[1];
    FUN_109d53144(param_2,param_1);
    *(int *)(param_2 + 1) = (int)uVar2 + 1;
  }
  return;
}



/* Entry: 109d530b8; end: 109d53143;  */

undefined8 FUN_109d530b8(long param_1,int param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    uVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = ((uint)param_3 >> 4 ^ (uint)param_3 >> 9) & param_2 - 1U;
    plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
    lVar6 = *plVar3;
    if (param_3 != lVar6) {
      iVar7 = 1;
      plVar5 = (long *)0x0;
      do {
        if (lVar6 == -0x1000) {
          uVar2 = 0;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          goto LAB_109d530ec;
        }
        plVar1 = plVar3;
        if (plVar5 != (long *)0x0 || lVar6 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar4 = uVar4 + iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 & param_2 - 1U;
        plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
        lVar6 = *plVar3;
        plVar5 = plVar1;
      } while (param_3 != lVar6);
    }
    uVar2 = 1;
  }
LAB_109d530ec:
  *param_4 = (long)plVar3;
  return uVar2;
}



/* Entry: 109d53144; end: 109d53217;  */

void FUN_109d53144(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plStack_28;
  
  uVar2 = *param_1;
  FUN_109d530b8(uVar2,(int)param_1[2],param_2,&plStack_28);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = (uint)param_1[2];
  if ((uint)param_1[1] * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~(uint)param_1[1]) - *(int *)((long)param_1 + 0xc))
    goto LAB_109d531b0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d53218(param_1,uVar1);
  FUN_109d530b8(*param_1,(int)param_1[2],param_2,&plStack_28);
LAB_109d531b0:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (*plStack_28 != -0x1000) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
  }
  *plStack_28 = param_2;
  *(undefined4 *)(plStack_28 + 1) = 0;
  *(undefined1 *)((long)plStack_28 + 0xc) = 0;
  return;
}



/* Entry: 109d53218; end: 109d53343;  */

void FUN_109d53218(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d530b8(*param_1,*(undefined4 *)(param_1 + 2),*puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d53344; end: 109d536a3;  */

void FUN_109d53344(long param_1,long param_2,uint param_3,ulong *param_4,long *param_5)

{
  uint *puVar1;
  uint *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  ulong unaff_x25;
  undefined1 uStack_4a5;
  uint uStack_4a4;
  ulong *puStack_4a0;
  ulong *puStack_498;
  ulong *puStack_490;
  ulong *puStack_488;
  long *plStack_480;
  undefined1 *puStack_478;
  ulong uStack_470;
  undefined1 auStack_468 [1024];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_470 = 0x4000000000;
  lVar19 = *(long *)(param_1 + 8);
  uStack_4a4 = param_3;
  puStack_478 = auStack_468;
  if (lVar19 == 0) {
LAB_109d5361c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    do {
      uVar7 = *param_4;
      FUN_109d530b8(uVar7,(uint)param_4[2],*(undefined8 *)(lVar19 + 0x18),&puStack_4a0);
      if (((uVar7 & 1) != 0) && ((uint)puStack_4a0[1] != 0)) {
        unaff_x25 = unaff_x25 & 0xffffffff00000000 | uStack_470 & 0xffffffff;
        FUN_109d536a4(&puStack_478,lVar19,unaff_x25);
      }
      lVar19 = *(long *)(lVar19 + 8);
    } while (lVar19 != 0);
    if ((uint)uStack_470 < 2) {
LAB_109d53610:
      if (puStack_478 != auStack_468) {
        _free();
      }
      goto LAB_109d5361c;
    }
    uStack_4a5 = param_3 <= (uint)param_4[3];
    puStack_498 = (ulong *)&uStack_4a4;
    puStack_490 = (ulong *)&uStack_4a5;
    puStack_4a0 = param_4;
    FUN_109d53710(puStack_478,puStack_478 + (uStack_470 & 0xffffffff) * 0x10,&puStack_4a0,
                  LZCOUNT(uStack_470 & 0xffffffff) * -2 + 0x7e,1);
    uVar7 = uStack_470 & 0xffffffff;
    puVar10 = puStack_478;
    if ((uint)uStack_470 != 0) {
      lVar19 = uVar7 * 0x10;
      puVar14 = puStack_478;
      do {
        lVar19 = lVar19 + -0x10;
        if (lVar19 == 0) goto LAB_109d53610;
        puVar10 = puVar14 + 0x10;
        puVar1 = (uint *)(puVar14 + 0x18);
        puVar2 = (uint *)(puVar14 + 8);
        puVar14 = puVar10;
      } while (*puVar2 <= *puVar1);
    }
    if (puVar10 == puStack_478 + uVar7 * 0x10) goto LAB_109d53610;
    plVar4 = (long *)param_5[1];
    if (plVar4 < (long *)param_5[2]) {
      *plVar4 = param_1;
      plVar4[1] = param_2;
      func_0x000109265eec(plVar4 + 2,uVar7);
      puVar18 = (ulong *)(plVar4 + 5);
      param_5[1] = (long)puVar18;
LAB_109d535e4:
      param_5[1] = (long)puVar18;
      uVar7 = uStack_470 & 0xffffffff;
      if ((uint)uStack_470 != 0) {
        lVar19 = 8;
        puVar13 = (undefined4 *)puVar18[-3];
        do {
          *puVar13 = *(undefined4 *)(puStack_478 + lVar19);
          lVar19 = lVar19 + 0x10;
          uVar7 = uVar7 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar7 != 0);
      }
      goto LAB_109d53610;
    }
    lVar19 = (long)plVar4 - *param_5;
    uVar16 = (lVar19 >> 3) * -0x3333333333333333 + 1;
    if (uVar16 < 0x666666666666667) {
      lVar11 = param_5[2] - *param_5 >> 3;
      uVar15 = lVar11 * -0x6666666666666666;
      if (uVar15 < uVar16 || uVar15 - uVar16 == 0) {
        uVar15 = uVar16;
      }
      if (0x333333333333332 < (ulong)(lVar11 * -0x3333333333333333)) {
        uVar15 = 0x666666666666666;
      }
      plStack_480 = param_5;
      if (uVar15 == 0) {
        puVar8 = (ulong *)0x0;
      }
      else {
        if (0x666666666666666 < uVar15) {
          func_0x000104c4f740();
          goto LAB_109d53664;
        }
        puVar8 = (ulong *)(uVar15 * 0x28);
        __Znwm();
      }
      plVar4 = (long *)((long)puVar8 + lVar19);
      *plVar4 = param_1;
      plVar4[1] = param_2;
      puStack_4a0 = puVar8;
      puStack_498 = (ulong *)plVar4;
      puStack_490 = (ulong *)plVar4;
      puStack_488 = puVar8 + uVar15 * 5;
      func_0x000109265eec(plVar4 + 2,uVar7);
      puStack_490 = (ulong *)(plVar4 + 5);
      puVar17 = (ulong *)*param_5;
      puVar5 = (ulong *)param_5[1];
      puVar3 = (ulong *)((long)plVar4 + ((long)puVar17 - (long)puVar5));
      puVar9 = puVar17;
      puVar12 = puVar3;
      puVar18 = puStack_490;
      puVar8 = puVar8 + uVar15 * 5;
      if ((long)puVar17 - (long)puVar5 != 0) {
        do {
          uVar7 = *puVar9;
          puVar12[1] = puVar9[1];
          *puVar12 = uVar7;
          puVar12[3] = 0;
          puVar12[4] = 0;
          puVar12[2] = 0;
          uVar7 = puVar9[2];
          puVar12[3] = puVar9[3];
          puVar12[2] = uVar7;
          puVar12[4] = puVar9[4];
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9 = puVar9 + 5;
          puVar12 = puVar12 + 5;
        } while (puVar9 != puVar5);
        do {
          if (puVar17[2] != 0) {
            puVar17[3] = puVar17[2];
            __ZdlPv();
          }
          puVar17 = puVar17 + 5;
        } while (puVar17 != puVar5);
        puVar17 = (ulong *)*param_5;
        puVar18 = puStack_490;
        puVar8 = puStack_488;
      }
      *param_5 = (long)puVar3;
      param_5[1] = (long)puVar18;
      puStack_488 = (ulong *)param_5[2];
      param_5[2] = (long)puVar8;
      puStack_4a0 = puVar17;
      puStack_498 = puVar17;
      puStack_490 = puVar17;
      FUN_109d54c3c(&puStack_4a0);
      goto LAB_109d535e4;
    }
  }
  FUN_109d54c28();
LAB_109d53664:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109d53668);
  (*pcVar6)();
}



/* Entry: 109d536a4; end: 109d5370f;  */

void FUN_109d536a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar2 + 1,0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d53710; end: 109d5440b;  */

void FUN_109d53710(undefined8 *param_1,undefined8 *param_2,ulong param_3,long param_4,uint param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puStack_68;
  
LAB_109d53744:
  puStack_68 = param_2 + -1;
  puVar15 = param_1;
LAB_109d5375c:
  do {
    param_1 = puVar15;
    uVar16 = (long)param_2 - (long)param_1 >> 4;
    if (uVar16 - 2 == 0 || (long)uVar16 < 2) {
      if (uVar16 < 2) {
        return;
      }
      if (uVar16 == 2) {
        FUN_109d5440c(param_3,param_2[-2],*param_1);
        if ((int)param_3 == 0) {
          return;
        }
        uVar11 = *param_1;
        *param_1 = param_2[-2];
        param_2[-2] = uVar11;
        uVar2 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + -1);
        *(undefined4 *)(param_2 + -1) = uVar2;
        return;
      }
    }
    else {
      if (uVar16 == 3) {
        uVar16 = param_3;
        FUN_109d5440c(param_3,param_1[2],*param_1);
        uVar7 = param_3;
        FUN_109d5440c(param_3,param_2[-2],param_1[2]);
        if ((uVar16 & 1) == 0) {
          if ((int)uVar7 == 0) {
            return;
          }
          uVar11 = param_1[2];
          param_1[2] = param_2[-2];
          puStack_68 = param_1 + 3;
          uVar2 = *(undefined4 *)puStack_68;
          param_2[-2] = uVar11;
          *(undefined4 *)puStack_68 = *(undefined4 *)(param_2 + -1);
          *(undefined4 *)(param_2 + -1) = uVar2;
          FUN_109d5440c(param_3,param_1[2],*param_1);
          if ((int)param_3 == 0) {
            return;
          }
          uVar11 = *param_1;
          *param_1 = param_1[2];
          param_1[2] = uVar11;
          puVar15 = param_1 + 1;
        }
        else {
          puVar15 = param_1 + 1;
          uVar11 = *param_1;
          if ((int)uVar7 == 0) {
            *param_1 = param_1[2];
            param_1[2] = uVar11;
            puVar15 = param_1 + 3;
            uVar2 = *(undefined4 *)(param_1 + 1);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)puVar15;
            *(undefined4 *)puVar15 = uVar2;
            FUN_109d5440c(param_3,param_2[-2]);
            if ((int)param_3 == 0) {
              return;
            }
            uVar11 = param_1[2];
            param_1[2] = param_2[-2];
            param_2[-2] = uVar11;
          }
          else {
            *param_1 = param_2[-2];
            param_2[-2] = uVar11;
          }
        }
        uVar2 = *(undefined4 *)puVar15;
        *(undefined4 *)puVar15 = *(undefined4 *)puStack_68;
        *(undefined4 *)puStack_68 = uVar2;
        return;
      }
      if (uVar16 == 4) {
        puVar6 = param_2 + -2;
        puVar15 = param_1 + 2;
        puVar5 = param_1 + 4;
        uVar16 = param_3;
        FUN_109d5440c(param_3,*puVar15,*param_1);
        uVar7 = param_3;
        FUN_109d5440c(param_3,*puVar5,*puVar15);
        if ((uVar16 & 1) == 0) {
          if ((int)uVar7 == 0) goto LAB_109d546e0;
          uVar11 = *puVar15;
          *puVar15 = *puVar5;
          puVar20 = param_1 + 3;
          uVar2 = *(undefined4 *)puVar20;
          *puVar5 = uVar11;
          *(undefined4 *)puVar20 = *(undefined4 *)(param_1 + 5);
          *(undefined4 *)(param_1 + 5) = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,*puVar15,*param_1);
          if ((int)uVar16 == 0) goto LAB_109d546e0;
          uVar11 = *param_1;
          puVar18 = param_1 + 1;
          *param_1 = *puVar15;
          *puVar15 = uVar11;
        }
        else {
          puVar18 = param_1 + 1;
          uVar11 = *param_1;
          if ((int)uVar7 == 0) {
            *param_1 = *puVar15;
            *puVar15 = uVar11;
            puVar18 = param_1 + 3;
            uVar2 = *(undefined4 *)(param_1 + 1);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)puVar18;
            *(undefined4 *)puVar18 = uVar2;
            uVar16 = param_3;
            FUN_109d5440c(param_3,*puVar5);
            if ((int)uVar16 == 0) goto LAB_109d546e0;
            uVar11 = *puVar15;
            *puVar15 = *puVar5;
            puVar20 = param_1 + 5;
            *puVar5 = uVar11;
          }
          else {
            *param_1 = *puVar5;
            puVar20 = param_1 + 5;
            *puVar5 = uVar11;
          }
        }
        uVar2 = *(undefined4 *)puVar18;
        *(undefined4 *)puVar18 = *(undefined4 *)puVar20;
        *(undefined4 *)puVar20 = uVar2;
LAB_109d546e0:
        uVar16 = param_3;
        FUN_109d5440c(param_3,*puVar6,*puVar5);
        if ((int)uVar16 != 0) {
          uVar11 = *puVar5;
          *puVar5 = *puVar6;
          *puVar6 = uVar11;
          uVar2 = *(undefined4 *)(param_1 + 5);
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + -1);
          *(undefined4 *)(param_2 + -1) = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,*puVar5,*puVar15);
          if ((int)uVar16 != 0) {
            uVar11 = *puVar15;
            *puVar15 = *puVar5;
            *puVar5 = uVar11;
            uVar2 = *(undefined4 *)(param_1 + 3);
            *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 5);
            *(undefined4 *)(param_1 + 5) = uVar2;
            FUN_109d5440c(param_3,*puVar15,*param_1);
            if ((int)param_3 != 0) {
              uVar11 = *param_1;
              *param_1 = *puVar15;
              *puVar15 = uVar11;
              uVar2 = *(undefined4 *)(param_1 + 1);
              *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 3);
              *(undefined4 *)(param_1 + 3) = uVar2;
            }
          }
        }
        return;
      }
      if (uVar16 == 5) {
        puVar20 = param_2 + -2;
        puVar15 = param_1 + 2;
        puVar5 = param_1 + 4;
        puVar6 = param_1 + 6;
        FUN_109d545c4();
        uVar16 = param_3;
        FUN_109d5440c(param_3,*puVar20,*puVar6);
        if ((int)uVar16 != 0) {
          uVar11 = *puVar6;
          *puVar6 = *puVar20;
          *puVar20 = uVar11;
          uVar2 = *(undefined4 *)(param_1 + 7);
          *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + -1);
          *(undefined4 *)(param_2 + -1) = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,*puVar6,*puVar5);
          if ((int)uVar16 != 0) {
            uVar11 = *puVar5;
            *puVar5 = *puVar6;
            *puVar6 = uVar11;
            uVar2 = *(undefined4 *)(param_1 + 5);
            *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1 + 7);
            *(undefined4 *)(param_1 + 7) = uVar2;
            uVar16 = param_3;
            FUN_109d5440c(param_3,*puVar5,*puVar15);
            if ((int)uVar16 != 0) {
              uVar11 = *puVar15;
              *puVar15 = *puVar5;
              *puVar5 = uVar11;
              uVar2 = *(undefined4 *)(param_1 + 3);
              *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 5);
              *(undefined4 *)(param_1 + 5) = uVar2;
              FUN_109d5440c(param_3,*puVar15,*param_1);
              if ((int)param_3 != 0) {
                uVar11 = *param_1;
                *param_1 = *puVar15;
                *puVar15 = uVar11;
                uVar2 = *(undefined4 *)(param_1 + 1);
                *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 3);
                *(undefined4 *)(param_1 + 3) = uVar2;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar16 < 0x18) {
      puVar15 = param_1 + 2;
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || puVar15 == param_2) {
          return;
        }
        puVar5 = param_1 + 3;
        do {
          puVar6 = puVar15;
          uVar16 = param_3;
          FUN_109d5440c(param_3,param_1[2],*param_1);
          if ((int)uVar16 != 0) {
            uVar11 = *puVar6;
            uVar2 = *(undefined4 *)(puVar6 + 1);
            puVar15 = puVar5;
            do {
              puVar20 = puVar15;
              puVar20[-1] = puVar20[-3];
              puVar15 = puVar20 + -2;
              *(undefined4 *)puVar20 = *(undefined4 *)puVar15;
              uVar16 = param_3;
              FUN_109d5440c(param_3,uVar11,puVar20[-5]);
            } while ((uVar16 & 1) != 0);
            puVar20[-3] = uVar11;
            *(undefined4 *)puVar15 = uVar2;
          }
          puVar5 = puVar5 + 2;
          puVar15 = puVar6 + 2;
          param_1 = puVar6;
        } while (puVar6 + 2 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar15 == param_2) {
        return;
      }
      lVar17 = 0;
      puVar5 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar12 = uVar16 - 2 >> 1;
      uVar7 = uVar12;
      goto LAB_109d54080;
    }
    puVar15 = param_1 + (uVar16 & 0xfffffffffffffffe);
    if (uVar16 < 0x81) {
      uVar16 = param_3;
      FUN_109d5440c(param_3,*param_1,*puVar15);
      uVar7 = param_3;
      FUN_109d5440c(param_3,param_2[-2],*param_1);
      if ((uVar16 & 1) != 0) {
        puVar6 = puVar15 + 1;
        uVar11 = *puVar15;
        puVar5 = puStack_68;
        if ((int)uVar7 == 0) {
          *puVar15 = *param_1;
          *param_1 = uVar11;
          puVar6 = param_1 + 1;
          uVar2 = *(undefined4 *)(puVar15 + 1);
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)puVar6;
          *(undefined4 *)puVar6 = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,param_2[-2]);
          if ((int)uVar16 == 0) goto LAB_109d53c70;
          uVar11 = *param_1;
          *param_1 = param_2[-2];
          param_2[-2] = uVar11;
        }
        else {
          *puVar15 = param_2[-2];
          param_2[-2] = uVar11;
        }
        goto LAB_109d53c60;
      }
      if ((int)uVar7 != 0) {
        uVar11 = *param_1;
        *param_1 = param_2[-2];
        puVar5 = param_1 + 1;
        uVar2 = *(undefined4 *)puVar5;
        param_2[-2] = uVar11;
        *(undefined4 *)puVar5 = *(undefined4 *)(param_2 + -1);
        *(undefined4 *)(param_2 + -1) = uVar2;
        uVar16 = param_3;
        FUN_109d5440c(param_3,*param_1,*puVar15);
        if ((int)uVar16 != 0) {
          uVar11 = *puVar15;
          puVar6 = puVar15 + 1;
          *puVar15 = *param_1;
          *param_1 = uVar11;
          goto LAB_109d53c60;
        }
      }
    }
    else {
      uVar16 = param_3;
      FUN_109d5440c(param_3,*puVar15,*param_1);
      uVar7 = param_3;
      FUN_109d5440c(param_3,param_2[-2],*puVar15);
      if ((uVar16 & 1) == 0) {
        if ((int)uVar7 != 0) {
          uVar11 = *puVar15;
          *puVar15 = param_2[-2];
          puVar5 = puVar15 + 1;
          uVar2 = *(undefined4 *)puVar5;
          param_2[-2] = uVar11;
          *(undefined4 *)puVar5 = *(undefined4 *)(param_2 + -1);
          *(undefined4 *)(param_2 + -1) = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,*puVar15,*param_1);
          if ((int)uVar16 != 0) {
            uVar11 = *param_1;
            puVar6 = param_1 + 1;
            *param_1 = *puVar15;
            *puVar15 = uVar11;
            goto LAB_109d5392c;
          }
        }
      }
      else {
        puVar6 = param_1 + 1;
        uVar11 = *param_1;
        puVar5 = puStack_68;
        if ((int)uVar7 == 0) {
          *param_1 = *puVar15;
          *puVar15 = uVar11;
          puVar6 = puVar15 + 1;
          uVar2 = *(undefined4 *)(param_1 + 1);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)puVar6;
          *(undefined4 *)puVar6 = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,param_2[-2]);
          if ((int)uVar16 == 0) goto LAB_109d5393c;
          uVar11 = *puVar15;
          *puVar15 = param_2[-2];
          param_2[-2] = uVar11;
        }
        else {
          *param_1 = param_2[-2];
          param_2[-2] = uVar11;
        }
LAB_109d5392c:
        uVar2 = *(undefined4 *)puVar6;
        *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
        *(undefined4 *)puVar5 = uVar2;
      }
LAB_109d5393c:
      uVar16 = param_3;
      FUN_109d5440c(param_3,puVar15[-2],param_1[2]);
      uVar7 = param_3;
      FUN_109d5440c(param_3,param_2[-4],puVar15[-2]);
      if ((uVar16 & 1) == 0) {
        if ((int)uVar7 != 0) {
          puVar5 = puVar15 + -1;
          uVar2 = *(undefined4 *)puVar5;
          uVar11 = puVar15[-2];
          puVar15[-2] = param_2[-4];
          param_2[-4] = uVar11;
          *(undefined4 *)puVar5 = *(undefined4 *)(param_2 + -3);
          *(undefined4 *)(param_2 + -3) = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,puVar15[-2],param_1[2]);
          if ((int)uVar16 != 0) {
            uVar11 = param_1[2];
            param_1[2] = puVar15[-2];
            puVar15[-2] = uVar11;
            puVar6 = param_1 + 3;
            goto LAB_109d53a60;
          }
        }
      }
      else {
        uVar11 = param_1[2];
        puVar5 = param_2 + -3;
        if ((int)uVar7 == 0) {
          puVar6 = puVar15 + -1;
          uVar3 = *(undefined4 *)puVar6;
          param_1[2] = puVar15[-2];
          puVar15[-2] = uVar11;
          uVar2 = *(undefined4 *)(param_1 + 3);
          *(undefined4 *)(param_1 + 3) = uVar3;
          *(undefined4 *)puVar6 = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,param_2[-4]);
          if ((int)uVar16 == 0) goto LAB_109d53a70;
          uVar11 = puVar15[-2];
          puVar15[-2] = param_2[-4];
          param_2[-4] = uVar11;
        }
        else {
          puVar6 = param_1 + 3;
          param_1[2] = param_2[-4];
          param_2[-4] = uVar11;
        }
LAB_109d53a60:
        uVar2 = *(undefined4 *)puVar6;
        *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
        *(undefined4 *)puVar5 = uVar2;
      }
LAB_109d53a70:
      uVar16 = param_3;
      FUN_109d5440c(param_3,puVar15[2],param_1[4]);
      uVar7 = param_3;
      FUN_109d5440c(param_3,param_2[-6],puVar15[2]);
      if ((uVar16 & 1) == 0) {
        if ((int)uVar7 != 0) {
          puVar5 = puVar15 + 3;
          uVar2 = *(undefined4 *)puVar5;
          uVar11 = puVar15[2];
          puVar15[2] = param_2[-6];
          param_2[-6] = uVar11;
          *(undefined4 *)puVar5 = *(undefined4 *)(param_2 + -5);
          *(undefined4 *)(param_2 + -5) = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,puVar15[2],param_1[4]);
          if ((int)uVar16 != 0) {
            uVar11 = param_1[4];
            param_1[4] = puVar15[2];
            puVar15[2] = uVar11;
            puVar6 = param_1 + 5;
            goto LAB_109d53b4c;
          }
        }
      }
      else {
        uVar11 = param_1[4];
        puVar5 = param_2 + -5;
        if ((int)uVar7 == 0) {
          puVar6 = puVar15 + 3;
          uVar3 = *(undefined4 *)puVar6;
          param_1[4] = puVar15[2];
          puVar15[2] = uVar11;
          uVar2 = *(undefined4 *)(param_1 + 5);
          *(undefined4 *)(param_1 + 5) = uVar3;
          *(undefined4 *)puVar6 = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,param_2[-6]);
          if ((int)uVar16 == 0) goto LAB_109d53b5c;
          uVar11 = puVar15[2];
          puVar15[2] = param_2[-6];
          param_2[-6] = uVar11;
        }
        else {
          puVar6 = param_1 + 5;
          param_1[4] = param_2[-6];
          param_2[-6] = uVar11;
        }
LAB_109d53b4c:
        uVar2 = *(undefined4 *)puVar6;
        *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
        *(undefined4 *)puVar5 = uVar2;
      }
LAB_109d53b5c:
      uVar16 = param_3;
      FUN_109d5440c(param_3,*puVar15,puVar15[-2]);
      uVar7 = param_3;
      FUN_109d5440c(param_3,puVar15[2],*puVar15);
      if ((uVar16 & 1) == 0) {
        uVar11 = *puVar15;
        if ((int)uVar7 != 0) {
          uVar14 = puVar15[2];
          *puVar15 = uVar14;
          puVar15[2] = uVar11;
          puVar5 = puVar15 + 1;
          uVar2 = *(undefined4 *)puVar5;
          *(undefined4 *)puVar5 = *(undefined4 *)(puVar15 + 3);
          *(undefined4 *)(puVar15 + 3) = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,uVar14,puVar15[-2]);
          uVar11 = *puVar15;
          if ((int)uVar16 != 0) {
            uVar14 = puVar15[-2];
            puVar15[-2] = uVar11;
            *puVar15 = uVar14;
            puVar6 = puVar15 + -1;
            uVar11 = uVar14;
            goto LAB_109d53c40;
          }
        }
      }
      else {
        uVar11 = puVar15[-2];
        if ((int)uVar7 == 0) {
          puVar15[-2] = *puVar15;
          *puVar15 = uVar11;
          puVar6 = puVar15 + 1;
          uVar2 = *(undefined4 *)(puVar15 + -1);
          *(undefined4 *)(puVar15 + -1) = *(undefined4 *)puVar6;
          *(undefined4 *)puVar6 = uVar2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,puVar15[2]);
          uVar11 = *puVar15;
          if ((int)uVar16 == 0) goto LAB_109d53c50;
          uVar14 = puVar15[2];
          *puVar15 = uVar14;
          puVar15[2] = uVar11;
          puVar5 = puVar15 + 3;
          uVar11 = uVar14;
        }
        else {
          puVar6 = puVar15 + -1;
          puVar15[-2] = puVar15[2];
          puVar15[2] = uVar11;
          puVar5 = puVar15 + 3;
          uVar11 = *puVar15;
        }
LAB_109d53c40:
        uVar2 = *(undefined4 *)puVar6;
        *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
        *(undefined4 *)puVar5 = uVar2;
      }
LAB_109d53c50:
      uVar14 = *param_1;
      puVar6 = param_1 + 1;
      *param_1 = uVar11;
      *puVar15 = uVar14;
      puVar5 = puVar15 + 1;
LAB_109d53c60:
      uVar2 = *(undefined4 *)puVar6;
      *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
      *(undefined4 *)puVar5 = uVar2;
    }
LAB_109d53c70:
    param_4 = param_4 + -1;
    if (((param_5 & 1) != 0) ||
       (uVar16 = param_3, FUN_109d5440c(param_3,param_1[-2],*param_1), (uVar16 & 1) != 0)) {
      lVar17 = 0;
      uVar11 = *param_1;
      uVar2 = *(undefined4 *)(param_1 + 1);
      do {
        uVar16 = param_3;
        FUN_109d5440c(param_3,*(undefined8 *)((long)param_1 + lVar17 + 0x10),uVar11);
        lVar17 = lVar17 + 0x10;
      } while ((uVar16 & 1) != 0);
      puVar5 = (undefined8 *)((long)param_1 + lVar17);
      puVar6 = param_2;
      if (lVar17 == 0x10) {
        do {
          if (puVar6 <= puVar5) break;
          puVar6 = puVar6 + -2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,*puVar6,uVar11);
        } while ((uVar16 & 1) == 0);
      }
      else {
        do {
          puVar6 = puVar6 + -2;
          uVar16 = param_3;
          FUN_109d5440c(param_3,*puVar6,uVar11);
        } while ((int)uVar16 == 0);
      }
      puVar15 = puVar5;
      puVar20 = puVar6;
      if (puVar5 < puVar6) {
        do {
          uVar14 = *puVar15;
          *puVar15 = *puVar20;
          *puVar20 = uVar14;
          uVar3 = *(undefined4 *)(puVar15 + 1);
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar20 + 1);
          *(undefined4 *)(puVar20 + 1) = uVar3;
          do {
            puVar15 = puVar15 + 2;
            uVar16 = param_3;
            FUN_109d5440c(param_3,*puVar15,uVar11);
          } while ((uVar16 & 1) != 0);
          do {
            puVar20 = puVar20 + -2;
            uVar16 = param_3;
            FUN_109d5440c(param_3,*puVar20,uVar11);
          } while ((int)uVar16 == 0);
        } while (puVar15 < puVar20);
      }
      puVar20 = puVar15 + -2;
      if (puVar20 != param_1) {
        *param_1 = puVar15[-2];
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar15 + -1);
      }
      puVar15[-2] = uVar11;
      *(undefined4 *)(puVar15 + -1) = uVar2;
      if (puVar6 <= puVar5) {
        puVar5 = param_1;
        FUN_109d548ac(param_1,puVar20,param_3);
        puVar6 = puVar15;
        FUN_109d548ac(puVar15,param_2,param_3);
        if ((int)puVar6 != 0) goto LAB_109d53edc;
        if (((ulong)puVar5 & 1) != 0) goto LAB_109d5375c;
      }
      FUN_109d53710(param_1,puVar20,param_3,param_4,param_5 & 1);
      param_5 = 0;
      goto LAB_109d5375c;
    }
    uVar11 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar16 = param_3;
    FUN_109d5440c(param_3,uVar11,param_2[-2]);
    puVar15 = param_1;
    if ((uVar16 & 1) == 0) {
      do {
        puVar15 = puVar15 + 2;
        if (param_2 <= puVar15) break;
        uVar16 = param_3;
        FUN_109d5440c(param_3,uVar11,*puVar15);
      } while ((int)uVar16 == 0);
    }
    else {
      do {
        puVar15 = puVar15 + 2;
        uVar16 = param_3;
        FUN_109d5440c(param_3,uVar11,*puVar15);
      } while ((uVar16 & 1) == 0);
    }
    puVar5 = param_2;
    if (puVar15 < param_2) {
      do {
        puVar5 = puVar5 + -2;
        uVar16 = param_3;
        FUN_109d5440c(param_3,uVar11,*puVar5);
      } while ((uVar16 & 1) != 0);
    }
    while (puVar15 < puVar5) {
      uVar14 = *puVar15;
      *puVar15 = *puVar5;
      *puVar5 = uVar14;
      uVar3 = *(undefined4 *)(puVar15 + 1);
      *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)(puVar5 + 1) = uVar3;
      do {
        puVar15 = puVar15 + 2;
        uVar16 = param_3;
        FUN_109d5440c(param_3,uVar11,*puVar15);
      } while ((int)uVar16 == 0);
      do {
        puVar5 = puVar5 + -2;
        uVar16 = param_3;
        FUN_109d5440c(param_3,uVar11,*puVar5);
      } while ((uVar16 & 1) != 0);
    }
    if (puVar15 + -2 != param_1) {
      *param_1 = puVar15[-2];
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar15 + -1);
    }
    param_5 = 0;
    puVar15[-2] = uVar11;
    *(undefined4 *)(puVar15 + -1) = uVar2;
  } while( true );
LAB_109d53ff0:
  puVar6 = puVar15;
  uVar16 = param_3;
  FUN_109d5440c(param_3,puVar5[2],*puVar5);
  if ((int)uVar16 != 0) {
    uVar11 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    lVar4 = lVar17;
    do {
      lVar19 = lVar4;
      puVar15 = (undefined8 *)((long)param_1 + lVar19);
      puVar15[2] = *puVar15;
      *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(puVar15 + 1);
      puVar5 = param_1;
      if (lVar19 == 0) goto LAB_109d54054;
      uVar16 = param_3;
      FUN_109d5440c(param_3,uVar11,puVar15[-2]);
      lVar4 = lVar19 + -0x10;
    } while ((uVar16 & 1) != 0);
    puVar5 = (undefined8 *)((long)param_1 + lVar19);
LAB_109d54054:
    *puVar5 = uVar11;
    *(undefined4 *)(puVar5 + 1) = uVar2;
  }
  lVar17 = lVar17 + 0x10;
  puVar15 = puVar6 + 2;
  puVar5 = puVar6;
  if (puVar6 + 2 == param_2) {
    return;
  }
  goto LAB_109d53ff0;
LAB_109d54080:
  do {
    if ((long)uVar7 <= (long)uVar12) {
      uVar13 = uVar7 << 1 | 1;
      puVar15 = param_1 + uVar13 * 2;
      uVar9 = uVar7 * 2 + 2;
      puVar5 = puVar15;
      uVar10 = uVar13;
      if ((long)uVar9 < (long)uVar16) {
        uVar8 = param_3;
        FUN_109d5440c(param_3,*puVar15,puVar15[2]);
        puVar5 = puVar15 + 2;
        uVar10 = uVar9;
        if ((int)uVar8 == 0) {
          puVar5 = puVar15;
          uVar10 = uVar13;
        }
      }
      puVar15 = param_1 + uVar7 * 2;
      uVar9 = param_3;
      FUN_109d5440c(param_3,*puVar5,*puVar15);
      if ((uVar9 & 1) == 0) {
        uVar11 = *puVar15;
        uVar2 = *(undefined4 *)(puVar15 + 1);
        do {
          puVar6 = puVar5;
          *puVar15 = *puVar6;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar6 + 1);
          if ((long)uVar12 < (long)uVar10) break;
          uVar13 = uVar10 << 1 | 1;
          puVar15 = param_1 + uVar13 * 2;
          uVar9 = uVar10 * 2 + 2;
          puVar5 = puVar15;
          uVar10 = uVar13;
          if ((long)uVar9 < (long)uVar16) {
            uVar8 = param_3;
            FUN_109d5440c(param_3,*puVar15,puVar15[2]);
            puVar5 = puVar15 + 2;
            uVar10 = uVar9;
            if ((int)uVar8 == 0) {
              puVar5 = puVar15;
              uVar10 = uVar13;
            }
          }
          uVar9 = param_3;
          FUN_109d5440c(param_3,*puVar5,uVar11);
          puVar15 = puVar6;
        } while ((int)uVar9 == 0);
        *puVar6 = uVar11;
        *(undefined4 *)(puVar6 + 1) = uVar2;
      }
    }
    bVar1 = uVar7 != 0;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  do {
    uVar11 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar7 = 0;
    puVar15 = param_1;
    do {
      uVar9 = uVar7 << 1 | 1;
      uVar12 = uVar7 * 2 + 2;
      uVar13 = uVar9;
      puVar5 = puVar15 + uVar7 * 2 + 2;
      if ((long)uVar12 < (long)uVar16) {
        uVar10 = param_3;
        FUN_109d5440c(param_3,puVar15[uVar7 * 2 + 2],puVar15[uVar7 * 2 + 4]);
        uVar13 = uVar12;
        puVar5 = puVar15 + uVar7 * 2 + 4;
        if ((int)uVar10 == 0) {
          uVar13 = uVar9;
          puVar5 = puVar15 + uVar7 * 2 + 2;
        }
      }
      *puVar15 = *puVar5;
      *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar5 + 1);
      uVar7 = uVar13;
      puVar15 = puVar5;
    } while ((long)uVar13 <= (long)(uVar16 - 2 >> 1));
    if (puVar5 == param_2 + -2) {
      *puVar5 = uVar11;
      *(undefined4 *)(puVar5 + 1) = uVar2;
    }
    else {
      *puVar5 = param_2[-2];
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + -1);
      param_2[-2] = uVar11;
      *(undefined4 *)(param_2 + -1) = uVar2;
      lVar17 = (long)puVar5 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar17) {
        uVar12 = lVar17 - 2U >> 1;
        uVar7 = param_3;
        FUN_109d5440c(param_3,param_1[uVar12 * 2],*puVar5);
        if ((int)uVar7 != 0) {
          uVar11 = *puVar5;
          uVar2 = *(undefined4 *)(puVar5 + 1);
          puVar15 = param_1 + uVar12 * 2;
          do {
            puVar6 = puVar15;
            *puVar5 = *puVar6;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            uVar7 = param_3;
            FUN_109d5440c(param_3,param_1[uVar12 * 2],uVar11);
            puVar5 = puVar6;
            puVar15 = param_1 + uVar12 * 2;
          } while ((uVar7 & 1) != 0);
          *puVar6 = uVar11;
          *(undefined4 *)(puVar6 + 1) = uVar2;
        }
      }
    }
    bVar1 = (long)uVar16 < 3;
    uVar16 = uVar16 - 1;
    param_2 = param_2 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_109d53edc:
  param_2 = puVar20;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto LAB_109d53744;
}



/* Entry: 109d5440c; end: 109d545c3;  */

bool FUN_109d5440c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lStack_38;
  
  if (param_2 == param_3) {
    return false;
  }
  uVar1 = *(undefined8 *)*param_1;
  FUN_109d530b8(uVar1,*(undefined4 *)((undefined8 *)*param_1 + 2),*(undefined8 *)(param_2 + 0x18),
                &lStack_38);
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(lStack_38 + 8);
  }
  uVar1 = *(undefined8 *)*param_1;
  FUN_109d530b8(uVar1,*(undefined4 *)((undefined8 *)*param_1 + 2),*(undefined8 *)(param_3 + 0x18),
                &lStack_38);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(lStack_38 + 8);
  }
  if (uVar5 < uVar2) {
    if ((uVar2 <= *(uint *)param_1[1]) && (*(char *)param_1[2] != '\x01')) {
      return true;
    }
  }
  else {
    if (uVar5 <= uVar2) {
      if ((uVar5 <= *(uint *)param_1[1]) && ((*(byte *)param_1[2] & 1) == 0)) {
        lVar3 = *(long *)(param_2 + 0x18);
        if ((*(uint *)(lVar3 + 0x14) >> 0x1e & 1) == 0) {
          lVar3 = lVar3 + ((ulong)*(uint *)(lVar3 + 0x14) & 0x7ffffff) * -0x20;
        }
        else {
          lVar3 = *(long *)(lVar3 + -8);
        }
        lVar4 = *(long *)(param_3 + 0x18);
        if ((*(uint *)(lVar4 + 0x14) >> 0x1e & 1) == 0) {
          lVar4 = lVar4 + ((ulong)*(uint *)(lVar4 + 0x14) & 0x7ffffff) * -0x20;
        }
        else {
          lVar4 = *(long *)(lVar4 + -8);
        }
        return (uint)((ulong)(param_2 - lVar3) >> 5) < (uint)((ulong)(param_3 - lVar4) >> 5);
      }
      lVar3 = *(long *)(param_2 + 0x18);
      if ((*(uint *)(lVar3 + 0x14) >> 0x1e & 1) == 0) {
        lVar3 = lVar3 + ((ulong)*(uint *)(lVar3 + 0x14) & 0x7ffffff) * -0x20;
      }
      else {
        lVar3 = *(long *)(lVar3 + -8);
      }
      lVar4 = *(long *)(param_3 + 0x18);
      if ((*(uint *)(lVar4 + 0x14) >> 0x1e & 1) == 0) {
        lVar4 = lVar4 + ((ulong)*(uint *)(lVar4 + 0x14) & 0x7ffffff) * -0x20;
      }
      else {
        lVar4 = *(long *)(lVar4 + -8);
      }
      return (uint)((ulong)(param_3 - lVar4) >> 5) < (uint)((ulong)(param_2 - lVar3) >> 5);
    }
    if (*(uint *)param_1[1] < uVar5) {
      return true;
    }
    if (*(char *)param_1[2] == '\x01') {
      return true;
    }
  }
  return false;
}



/* Entry: 109d545c4; end: 109d54793;  */

void FUN_109d545c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  ulong param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar2 = param_5;
  FUN_109d5440c(param_5,*param_2,*param_1);
  uVar3 = param_5;
  FUN_109d5440c(param_5,*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) goto LAB_109d546e0;
    uVar4 = *param_2;
    *param_2 = *param_3;
    puVar6 = param_2 + 1;
    uVar1 = *(undefined4 *)puVar6;
    *param_3 = uVar4;
    *(undefined4 *)puVar6 = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_3 + 1) = uVar1;
    uVar2 = param_5;
    FUN_109d5440c(param_5,*param_2,*param_1);
    if ((int)uVar2 == 0) goto LAB_109d546e0;
    uVar4 = *param_1;
    puVar5 = param_1 + 1;
    *param_1 = *param_2;
    *param_2 = uVar4;
  }
  else {
    puVar5 = param_1 + 1;
    uVar4 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      puVar5 = param_2 + 1;
      uVar1 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)puVar5;
      *(undefined4 *)puVar5 = uVar1;
      uVar2 = param_5;
      FUN_109d5440c(param_5,*param_3);
      if ((int)uVar2 == 0) goto LAB_109d546e0;
      uVar4 = *param_2;
      *param_2 = *param_3;
      puVar6 = param_3 + 1;
      *param_3 = uVar4;
    }
    else {
      *param_1 = *param_3;
      puVar6 = param_3 + 1;
      *param_3 = uVar4;
    }
  }
  uVar1 = *(undefined4 *)puVar5;
  *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
  *(undefined4 *)puVar6 = uVar1;
LAB_109d546e0:
  uVar2 = param_5;
  FUN_109d5440c(param_5,*param_4,*param_3);
  if ((int)uVar2 != 0) {
    uVar4 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar4;
    uVar1 = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_4 + 1) = uVar1;
    uVar2 = param_5;
    FUN_109d5440c(param_5,*param_3,*param_2);
    if ((int)uVar2 != 0) {
      uVar4 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar4;
      uVar1 = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)(param_3 + 1) = uVar1;
      FUN_109d5440c(param_5,*param_2,*param_1);
      if ((int)param_5 != 0) {
        uVar4 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar4;
        uVar1 = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
        *(undefined4 *)(param_2 + 1) = uVar1;
      }
    }
  }
  return;
}



/* Entry: 109d54794; end: 109d548ab;  */

void FUN_109d54794(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_109d545c4();
  uVar2 = param_6;
  FUN_109d5440c(param_6,*param_5,*param_4);
  if ((int)uVar2 != 0) {
    uVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar2;
    uVar1 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_5 + 1);
    *(undefined4 *)(param_5 + 1) = uVar1;
    uVar2 = param_6;
    FUN_109d5440c(param_6,*param_4,*param_3);
    if ((int)uVar2 != 0) {
      uVar2 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar2;
      uVar1 = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
      *(undefined4 *)(param_4 + 1) = uVar1;
      uVar2 = param_6;
      FUN_109d5440c(param_6,*param_3,*param_2);
      if ((int)uVar2 != 0) {
        uVar2 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar2;
        uVar1 = *(undefined4 *)(param_2 + 1);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
        *(undefined4 *)(param_3 + 1) = uVar1;
        FUN_109d5440c(param_6,*param_2,*param_1);
        if ((int)param_6 != 0) {
          uVar2 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar2;
          uVar1 = *(undefined4 *)(param_1 + 1);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
          *(undefined4 *)(param_2 + 1) = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109d548ac; end: 109d54c27;  */

bool FUN_109d548ac(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  uVar5 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      FUN_109d5440c(param_3,param_2[-2],*param_1);
      if ((int)param_3 == 0) {
        return true;
      }
      uVar6 = *param_1;
      *param_1 = param_2[-2];
      param_2[-2] = uVar6;
      uVar2 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + -1);
      *(undefined4 *)(param_2 + -1) = uVar2;
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      uVar5 = param_3;
      FUN_109d5440c(param_3,param_1[2],*param_1);
      uVar4 = param_3;
      FUN_109d5440c(param_3,param_2[-2],param_1[2]);
      if ((uVar5 & 1) == 0) {
        if ((int)uVar4 == 0) {
          return true;
        }
        uVar6 = param_1[2];
        param_1[2] = param_2[-2];
        puVar8 = param_1 + 3;
        uVar2 = *(undefined4 *)puVar8;
        param_2[-2] = uVar6;
        *(undefined4 *)puVar8 = *(undefined4 *)(param_2 + -1);
        *(undefined4 *)(param_2 + -1) = uVar2;
        FUN_109d5440c(param_3,param_1[2],*param_1);
        if ((int)param_3 == 0) {
          return true;
        }
        uVar6 = *param_1;
        *param_1 = param_1[2];
        param_1[2] = uVar6;
        puVar9 = param_1 + 1;
      }
      else {
        puVar9 = param_1 + 1;
        uVar6 = *param_1;
        if ((int)uVar4 == 0) {
          *param_1 = param_1[2];
          param_1[2] = uVar6;
          puVar9 = param_1 + 3;
          uVar2 = *(undefined4 *)(param_1 + 1);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)puVar9;
          *(undefined4 *)puVar9 = uVar2;
          FUN_109d5440c(param_3,param_2[-2]);
          if ((int)param_3 == 0) {
            return true;
          }
          uVar6 = param_1[2];
          param_1[2] = param_2[-2];
          param_2[-2] = uVar6;
        }
        else {
          *param_1 = param_2[-2];
          param_2[-2] = uVar6;
        }
        puVar8 = param_2 + -1;
      }
      uVar2 = *(undefined4 *)puVar9;
      *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
      *(undefined4 *)puVar8 = uVar2;
      return true;
    }
    if (uVar5 == 4) {
      FUN_109d545c4(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
      return true;
    }
    if (uVar5 == 5) {
      FUN_109d54794(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  uVar5 = param_3;
  FUN_109d5440c(param_3,param_1[2],*param_1);
  uVar4 = param_3;
  FUN_109d5440c(param_3,param_1[4],param_1[2]);
  if ((uVar5 & 1) == 0) {
    if ((int)uVar4 == 0) goto LAB_109d54b58;
    uVar7 = param_1[2];
    uVar6 = param_1[4];
    param_1[2] = uVar6;
    param_1[4] = uVar7;
    puVar8 = param_1 + 3;
    uVar2 = *(undefined4 *)puVar8;
    *(undefined4 *)puVar8 = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(param_1 + 5) = uVar2;
    uVar5 = param_3;
    FUN_109d5440c(param_3,uVar6,*param_1);
    if ((int)uVar5 == 0) goto LAB_109d54b58;
    uVar6 = *param_1;
    *param_1 = param_1[2];
    param_1[2] = uVar6;
    puVar9 = param_1 + 1;
  }
  else {
    puVar9 = param_1 + 1;
    uVar6 = *param_1;
    if ((int)uVar4 == 0) {
      *param_1 = param_1[2];
      param_1[2] = uVar6;
      puVar9 = param_1 + 3;
      uVar2 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)puVar9;
      *(undefined4 *)puVar9 = uVar2;
      uVar5 = param_3;
      FUN_109d5440c(param_3,param_1[4]);
      if ((int)uVar5 == 0) goto LAB_109d54b58;
      uVar6 = param_1[2];
      param_1[2] = param_1[4];
      param_1[4] = uVar6;
    }
    else {
      *param_1 = param_1[4];
      param_1[4] = uVar6;
    }
    puVar8 = param_1 + 5;
  }
  uVar2 = *(undefined4 *)puVar9;
  *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
  *(undefined4 *)puVar8 = uVar2;
LAB_109d54b58:
  if (param_1 + 6 != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    puVar8 = param_1 + 4;
    puVar9 = param_1 + 6;
    do {
      uVar5 = param_3;
      FUN_109d5440c(param_3,*puVar9,*puVar8);
      if ((int)uVar5 != 0) {
        uVar6 = *puVar9;
        uVar2 = *(undefined4 *)(puVar9 + 1);
        lVar3 = lVar10;
        do {
          lVar12 = lVar3;
          *(undefined8 *)((long)param_1 + lVar12 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x20);
          *(undefined4 *)((long)param_1 + lVar12 + 0x38) =
               *(undefined4 *)((long)param_1 + lVar12 + 0x28);
          puVar8 = param_1;
          if (lVar12 == -0x20) goto LAB_109d54bd0;
          uVar5 = param_3;
          FUN_109d5440c(param_3,uVar6,*(undefined8 *)((long)param_1 + lVar12 + 0x10));
          lVar3 = lVar12 + -0x10;
        } while ((uVar5 & 1) != 0);
        puVar8 = (undefined8 *)((long)param_1 + lVar12 + 0x20);
LAB_109d54bd0:
        *puVar8 = uVar6;
        *(undefined4 *)(puVar8 + 1) = uVar2;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return puVar9 + 2 == param_2;
        }
      }
      puVar1 = puVar9 + 2;
      lVar10 = lVar10 + 0x10;
      puVar8 = puVar9;
      puVar9 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}



/* Entry: 109d54c28; end: 109d54c3b;  */

long * FUN_109d54c28(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar3[1];
  lVar2 = plVar3[2];
  while (lVar4 = lVar2, lVar4 != lVar1) {
    plVar3[2] = lVar4 + -0x28;
    lVar2 = lVar4 + -0x28;
    if (*(long *)(lVar4 + -0x18) != 0) {
      *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
      __ZdlPv();
      lVar2 = plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 109d54c3c; end: 109d54c9b;  */

long * FUN_109d54c3c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar3 = lVar2, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x28;
    lVar2 = lVar3 + -0x28;
    if (*(long *)(lVar3 + -0x18) != 0) {
      *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
      __ZdlPv();
      lVar2 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109d54c9c; end: 109d54caf;  */

undefined1  [16] FUN_109d54c9c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long *plStack_108;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3d == 0) {
    lVar3 = (long)puVar2 << 3;
    __Znwm(lVar3);
    auVar15._8_8_ = puVar2;
    auVar15._0_8_ = lVar3;
    return auVar15;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar3 = (long)param_2 << 4;
    __Znwm(lVar3);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = lVar3;
    return auVar16;
  }
  func_0x000104c4f740();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar9 = (undefined8 *)plVar4[1];
  if ((long *)(plVar4[2] - (long)puVar9 >> 4) < param_2) {
    lVar3 = (long)puVar9 - *plVar4;
    uVar1 = (long)param_2 + (lVar3 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_109d54ce4();
      plVar5 = (long *)plVar4[1];
      if ((long *)(plVar4[2] - (long)plVar5 >> 3) < param_2) {
        lVar3 = (long)plVar5 - *plVar4;
        uVar1 = (long)param_2 + (lVar3 >> 3);
        if (uVar1 >> 0x3d != 0) {
          FUN_109d54c9c();
          plVar5 = plVar4;
          plVar7 = param_2;
          FUN_109d31c54();
          if (((ulong)plVar5 & 1) == 0) {
            plVar7 = param_2;
            FUN_109d31cec(plVar4,param_2,param_2);
            *plVar4 = *param_2;
            *(undefined4 *)(plVar4 + 1) = 0;
            plStack_108 = plVar4;
          }
          auVar19._8_8_ = plVar7;
          auVar19._0_8_ = plStack_108;
          return auVar19;
        }
        uVar11 = plVar4[2] - *plVar4;
        uVar12 = (long)uVar11 >> 2;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 == 0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = param_2;
          FUN_109d54cb0();
        }
        lVar3 = uVar12 + lVar3;
        _bzero(lVar3,(long)param_2 << 3);
        lVar13 = (long)param_2 * 8;
        param_2 = (long *)*plVar4;
        lVar14 = lVar3 - (plVar4[1] - (long)param_2);
        _memcpy(lVar14);
        lVar6 = *plVar4;
        *plVar4 = lVar14;
        plVar4[1] = lVar3 + lVar13;
        plVar4[2] = uVar12 + (long)plVar5 * 8;
        plVar7 = (long *)0x0;
        if (lVar6 != 0) goto __ZdlPv;
      }
      else {
        plVar7 = plVar4;
        plVar8 = (long *)0x0;
        if (param_2 != (long *)0x0) {
          plVar8 = (long *)((long)param_2 << 3);
          plVar7 = plVar5;
          _bzero(plVar5,plVar8);
          plVar5 = plVar5 + (long)param_2;
        }
        param_2 = plVar8;
        plVar4[1] = (long)plVar5;
      }
      auVar18._8_8_ = param_2;
      auVar18._0_8_ = plVar7;
      return auVar18;
    }
    uVar11 = plVar4[2] - *plVar4;
    uVar12 = (long)uVar11 >> 3;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar12 = 0xfffffffffffffff;
    }
    if (uVar12 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar4;
      FUN_109d54cf8();
    }
    puVar10 = (undefined8 *)((long)plVar5 + lVar3);
    lVar3 = (long)param_2 * 2;
    puVar9 = puVar10;
    do {
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar10 + lVar3);
    param_2 = (long *)*plVar4;
    lVar13 = (long)puVar10 - (plVar4[1] - (long)param_2);
    _memcpy(lVar13);
    lVar6 = *plVar4;
    *plVar4 = lVar13;
    plVar4[1] = (long)(puVar10 + lVar3);
    plVar4[2] = (long)(plVar5 + uVar12 * 2);
    plVar4 = (long *)0x0;
    if (lVar6 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = lVar6;
      return auVar20;
    }
  }
  else {
    puVar10 = puVar9;
    if (param_2 != (long *)0x0) {
      puVar10 = puVar9 + (long)param_2 * 2;
      do {
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar10);
    }
    plVar4[1] = (long)puVar10;
  }
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = plVar4;
  return auVar17;
}



/* Entry: 109d54cb0; end: 109d54ce3;  */

undefined1  [16] FUN_109d54cb0(ulong param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plStack_f8;
  
  if (param_1 >> 0x3d == 0) {
    lVar2 = param_1 << 3;
    __Znwm(lVar2);
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar2 = (long)param_2 << 4;
    __Znwm(lVar2);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = lVar2;
    return auVar15;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar8 = (undefined8 *)plVar3[1];
  if ((long *)(plVar3[2] - (long)puVar8 >> 4) < param_2) {
    lVar2 = (long)puVar8 - *plVar3;
    uVar1 = (long)param_2 + (lVar2 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_109d54ce4();
      plVar4 = (long *)plVar3[1];
      if ((long *)(plVar3[2] - (long)plVar4 >> 3) < param_2) {
        lVar2 = (long)plVar4 - *plVar3;
        uVar1 = (long)param_2 + (lVar2 >> 3);
        if (uVar1 >> 0x3d != 0) {
          FUN_109d54c9c();
          plVar4 = plVar3;
          plVar6 = param_2;
          FUN_109d31c54();
          if (((ulong)plVar4 & 1) == 0) {
            plVar6 = param_2;
            FUN_109d31cec(plVar3,param_2,param_2);
            *plVar3 = *param_2;
            *(undefined4 *)(plVar3 + 1) = 0;
            plStack_f8 = plVar3;
          }
          auVar18._8_8_ = plVar6;
          auVar18._0_8_ = plStack_f8;
          return auVar18;
        }
        uVar10 = plVar3[2] - *plVar3;
        uVar11 = (long)uVar10 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = param_2;
          FUN_109d54cb0();
        }
        lVar2 = uVar11 + lVar2;
        _bzero(lVar2,(long)param_2 << 3);
        lVar12 = (long)param_2 * 8;
        param_2 = (long *)*plVar3;
        lVar13 = lVar2 - (plVar3[1] - (long)param_2);
        _memcpy(lVar13);
        lVar5 = *plVar3;
        *plVar3 = lVar13;
        plVar3[1] = lVar2 + lVar12;
        plVar3[2] = uVar11 + (long)plVar4 * 8;
        plVar6 = (long *)0x0;
        if (lVar5 != 0) goto __ZdlPv;
      }
      else {
        plVar6 = plVar3;
        plVar7 = (long *)0x0;
        if (param_2 != (long *)0x0) {
          plVar7 = (long *)((long)param_2 << 3);
          plVar6 = plVar4;
          _bzero(plVar4,plVar7);
          plVar4 = plVar4 + (long)param_2;
        }
        param_2 = plVar7;
        plVar3[1] = (long)plVar4;
      }
      auVar17._8_8_ = param_2;
      auVar17._0_8_ = plVar6;
      return auVar17;
    }
    uVar10 = plVar3[2] - *plVar3;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar3;
      FUN_109d54cf8();
    }
    puVar9 = (undefined8 *)((long)plVar4 + lVar2);
    lVar2 = (long)param_2 * 2;
    puVar8 = puVar9;
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar9 + lVar2);
    param_2 = (long *)*plVar3;
    lVar12 = (long)puVar9 - (plVar3[1] - (long)param_2);
    _memcpy(lVar12);
    lVar5 = *plVar3;
    *plVar3 = lVar12;
    plVar3[1] = (long)(puVar9 + lVar2);
    plVar3[2] = (long)(plVar4 + uVar11 * 2);
    plVar3 = (long *)0x0;
    if (lVar5 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar19._8_8_ = param_2;
      auVar19._0_8_ = lVar5;
      return auVar19;
    }
  }
  else {
    puVar9 = puVar8;
    if (param_2 != (long *)0x0) {
      puVar9 = puVar8 + (long)param_2 * 2;
      do {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar9);
    }
    plVar3[1] = (long)puVar9;
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = plVar3;
  return auVar16;
}



/* Entry: 109d54ce4; end: 109d54cf7;  */

undefined1  [16] FUN_109d54ce4(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_d8;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar2 = (long)param_2 << 4;
    __Znwm(lVar2);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar8 = (undefined8 *)plVar3[1];
  if ((long *)(plVar3[2] - (long)puVar8 >> 4) < param_2) {
    lVar2 = (long)puVar8 - *plVar3;
    uVar1 = (long)param_2 + (lVar2 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_109d54ce4();
      plVar4 = (long *)plVar3[1];
      if ((long *)(plVar3[2] - (long)plVar4 >> 3) < param_2) {
        lVar2 = (long)plVar4 - *plVar3;
        uVar1 = (long)param_2 + (lVar2 >> 3);
        if (uVar1 >> 0x3d != 0) {
          FUN_109d54c9c();
          plVar4 = plVar3;
          plVar6 = param_2;
          FUN_109d31c54();
          if (((ulong)plVar4 & 1) == 0) {
            plVar6 = param_2;
            FUN_109d31cec(plVar3,param_2,param_2);
            *plVar3 = *param_2;
            *(undefined4 *)(plVar3 + 1) = 0;
            plStack_d8 = plVar3;
          }
          auVar17._8_8_ = plVar6;
          auVar17._0_8_ = plStack_d8;
          return auVar17;
        }
        uVar10 = plVar3[2] - *plVar3;
        uVar11 = (long)uVar10 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = param_2;
          FUN_109d54cb0();
        }
        lVar2 = uVar11 + lVar2;
        _bzero(lVar2,(long)param_2 << 3);
        lVar12 = (long)param_2 * 8;
        param_2 = (long *)*plVar3;
        lVar13 = lVar2 - (plVar3[1] - (long)param_2);
        _memcpy(lVar13);
        lVar5 = *plVar3;
        *plVar3 = lVar13;
        plVar3[1] = lVar2 + lVar12;
        plVar3[2] = uVar11 + (long)plVar4 * 8;
        plVar6 = (long *)0x0;
        if (lVar5 != 0) goto __ZdlPv;
      }
      else {
        plVar6 = plVar3;
        plVar7 = (long *)0x0;
        if (param_2 != (long *)0x0) {
          plVar7 = (long *)((long)param_2 << 3);
          plVar6 = plVar4;
          _bzero(plVar4,plVar7);
          plVar4 = plVar4 + (long)param_2;
        }
        param_2 = plVar7;
        plVar3[1] = (long)plVar4;
      }
      auVar16._8_8_ = param_2;
      auVar16._0_8_ = plVar6;
      return auVar16;
    }
    uVar10 = plVar3[2] - *plVar3;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar3;
      FUN_109d54cf8();
    }
    puVar9 = (undefined8 *)((long)plVar4 + lVar2);
    lVar2 = (long)param_2 * 2;
    puVar8 = puVar9;
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar9 + lVar2);
    param_2 = (long *)*plVar3;
    lVar12 = (long)puVar9 - (plVar3[1] - (long)param_2);
    _memcpy(lVar12);
    lVar5 = *plVar3;
    *plVar3 = lVar12;
    plVar3[1] = (long)(puVar9 + lVar2);
    plVar3[2] = (long)(plVar4 + uVar11 * 2);
    plVar3 = (long *)0x0;
    if (lVar5 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar18._8_8_ = param_2;
      auVar18._0_8_ = lVar5;
      return auVar18;
    }
  }
  else {
    puVar9 = puVar8;
    if (param_2 != (long *)0x0) {
      puVar9 = puVar8 + (long)param_2 * 2;
      do {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar9);
    }
    plVar3[1] = (long)puVar9;
  }
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar3;
  return auVar15;
}



/* Entry: 109d54cf8; end: 109d54d2b;  */

undefined1  [16] FUN_109d54cf8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_c8;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar2 = (long)param_2 << 4;
    __Znwm(lVar2);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar8 = (undefined8 *)plVar3[1];
  if ((long *)(plVar3[2] - (long)puVar8 >> 4) < param_2) {
    lVar2 = (long)puVar8 - *plVar3;
    uVar1 = (long)param_2 + (lVar2 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_109d54ce4();
      plVar4 = (long *)plVar3[1];
      if ((long *)(plVar3[2] - (long)plVar4 >> 3) < param_2) {
        lVar2 = (long)plVar4 - *plVar3;
        uVar1 = (long)param_2 + (lVar2 >> 3);
        if (uVar1 >> 0x3d != 0) {
          FUN_109d54c9c();
          plVar4 = plVar3;
          plVar6 = param_2;
          FUN_109d31c54();
          if (((ulong)plVar4 & 1) == 0) {
            plVar6 = param_2;
            FUN_109d31cec(plVar3,param_2,param_2);
            *plVar3 = *param_2;
            *(undefined4 *)(plVar3 + 1) = 0;
            plStack_c8 = plVar3;
          }
          auVar17._8_8_ = plVar6;
          auVar17._0_8_ = plStack_c8;
          return auVar17;
        }
        uVar10 = plVar3[2] - *plVar3;
        uVar11 = (long)uVar10 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = param_2;
          FUN_109d54cb0();
        }
        lVar2 = uVar11 + lVar2;
        _bzero(lVar2,(long)param_2 << 3);
        lVar12 = (long)param_2 * 8;
        param_2 = (long *)*plVar3;
        lVar13 = lVar2 - (plVar3[1] - (long)param_2);
        _memcpy(lVar13);
        lVar5 = *plVar3;
        *plVar3 = lVar13;
        plVar3[1] = lVar2 + lVar12;
        plVar3[2] = uVar11 + (long)plVar4 * 8;
        plVar6 = (long *)0x0;
        if (lVar5 != 0) goto __ZdlPv;
      }
      else {
        plVar6 = plVar3;
        plVar7 = (long *)0x0;
        if (param_2 != (long *)0x0) {
          plVar7 = (long *)((long)param_2 << 3);
          plVar6 = plVar4;
          _bzero(plVar4,plVar7);
          plVar4 = plVar4 + (long)param_2;
        }
        param_2 = plVar7;
        plVar3[1] = (long)plVar4;
      }
      auVar16._8_8_ = param_2;
      auVar16._0_8_ = plVar6;
      return auVar16;
    }
    uVar10 = plVar3[2] - *plVar3;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar3;
      FUN_109d54cf8();
    }
    puVar9 = (undefined8 *)((long)plVar4 + lVar2);
    lVar2 = (long)param_2 * 2;
    puVar8 = puVar9;
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar9 + lVar2);
    param_2 = (long *)*plVar3;
    lVar12 = (long)puVar9 - (plVar3[1] - (long)param_2);
    _memcpy(lVar12);
    lVar5 = *plVar3;
    *plVar3 = lVar12;
    plVar3[1] = (long)(puVar9 + lVar2);
    plVar3[2] = (long)(plVar4 + uVar11 * 2);
    plVar3 = (long *)0x0;
    if (lVar5 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar18._8_8_ = param_2;
      auVar18._0_8_ = lVar5;
      return auVar18;
    }
  }
  else {
    puVar9 = puVar8;
    if (param_2 != (long *)0x0) {
      puVar9 = puVar8 + (long)param_2 * 2;
      do {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar9);
    }
    plVar3[1] = (long)puVar9;
  }
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar3;
  return auVar15;
}



/* Entry: 109d54d2c; end: 109d54d3f;  */

long * FUN_109d54d2c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plStack_a8;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar6 = (undefined8 *)plVar2[1];
  if ((long *)(plVar2[2] - (long)puVar6 >> 4) < param_2) {
    lVar11 = (long)puVar6 - *plVar2;
    uVar1 = (long)param_2 + (lVar11 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_109d54ce4();
      plVar3 = (long *)plVar2[1];
      if ((long *)(plVar2[2] - (long)plVar3 >> 3) < param_2) {
        lVar11 = (long)plVar3 - *plVar2;
        uVar1 = (long)param_2 + (lVar11 >> 3);
        if (uVar1 >> 0x3d != 0) {
          FUN_109d54c9c();
          plVar3 = plVar2;
          FUN_109d31c54();
          if (((ulong)plVar3 & 1) == 0) {
            FUN_109d31cec(plVar2,param_2,param_2);
            *plVar2 = *param_2;
            *(undefined4 *)(plVar2 + 1) = 0;
            plStack_a8 = plVar2;
          }
          return plStack_a8;
        }
        uVar8 = plVar2[2] - *plVar2;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          plVar3 = (long *)0x0;
        }
        else {
          plVar3 = param_2;
          FUN_109d54cb0();
        }
        lVar11 = uVar9 + lVar11;
        _bzero(lVar11,(long)param_2 << 3);
        lVar10 = lVar11 - (plVar2[1] - *plVar2);
        _memcpy(lVar10);
        plVar4 = (long *)*plVar2;
        *plVar2 = lVar10;
        plVar2[1] = lVar11 + (long)param_2 * 8;
        plVar2[2] = uVar9 + (long)plVar3 * 8;
        plVar5 = (long *)0x0;
        if (plVar4 != (long *)0x0) goto __ZdlPv;
      }
      else {
        plVar5 = plVar2;
        if (param_2 != (long *)0x0) {
          plVar5 = plVar3;
          _bzero(plVar3,(long)param_2 << 3);
          plVar3 = plVar3 + (long)param_2;
        }
        plVar2[1] = (long)plVar3;
      }
      return plVar5;
    }
    uVar8 = plVar2[2] - *plVar2;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      FUN_109d54cf8();
    }
    puVar7 = (undefined8 *)((long)plVar3 + lVar11);
    puVar6 = puVar7;
    do {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar7 + (long)param_2 * 2);
    lVar11 = (long)puVar7 - (plVar2[1] - *plVar2);
    _memcpy(lVar11);
    plVar4 = (long *)*plVar2;
    *plVar2 = lVar11;
    plVar2[1] = (long)(puVar7 + (long)param_2 * 2);
    plVar2[2] = (long)(plVar3 + uVar9 * 2);
    plVar2 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    puVar7 = puVar6;
    if (param_2 != (long *)0x0) {
      puVar7 = puVar6 + (long)param_2 * 2;
      do {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar7);
    }
    plVar2[1] = (long)puVar7;
  }
  return plVar2;
}



/* Entry: 109d54d40; end: 109d54e43;  */

long * FUN_109d54d40(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plStack_98;
  
  puVar5 = (undefined8 *)param_1[1];
  if ((long *)(param_1[2] - (long)puVar5 >> 4) < param_2) {
    lVar10 = (long)puVar5 - *param_1;
    uVar1 = (long)param_2 + (lVar10 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_109d54ce4();
      plVar2 = (long *)param_1[1];
      if ((long *)(param_1[2] - (long)plVar2 >> 3) < param_2) {
        lVar10 = (long)plVar2 - *param_1;
        uVar1 = (long)param_2 + (lVar10 >> 3);
        if (uVar1 >> 0x3d != 0) {
          FUN_109d54c9c();
          plVar2 = param_1;
          FUN_109d31c54();
          if (((ulong)plVar2 & 1) == 0) {
            FUN_109d31cec(param_1,param_2,param_2);
            *param_1 = *param_2;
            *(undefined4 *)(param_1 + 1) = 0;
            plStack_98 = param_1;
          }
          return plStack_98;
        }
        uVar7 = param_1[2] - *param_1;
        uVar8 = (long)uVar7 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = param_2;
          FUN_109d54cb0();
        }
        lVar10 = uVar8 + lVar10;
        _bzero(lVar10,(long)param_2 << 3);
        lVar9 = lVar10 - (param_1[1] - *param_1);
        _memcpy(lVar9);
        plVar3 = (long *)*param_1;
        *param_1 = lVar9;
        param_1[1] = lVar10 + (long)param_2 * 8;
        param_1[2] = uVar8 + (long)plVar2 * 8;
        plVar4 = (long *)0x0;
        if (plVar3 != (long *)0x0) goto __ZdlPv;
      }
      else {
        plVar4 = param_1;
        if (param_2 != (long *)0x0) {
          plVar4 = plVar2;
          _bzero(plVar2,(long)param_2 << 3);
          plVar2 = plVar2 + (long)param_2;
        }
        param_1[1] = (long)plVar2;
      }
      return plVar4;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109d54cf8();
    }
    puVar6 = (undefined8 *)((long)plVar2 + lVar10);
    puVar5 = puVar6;
    do {
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6 + (long)param_2 * 2);
    lVar10 = (long)puVar6 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar3 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)(puVar6 + (long)param_2 * 2);
    param_1[2] = (long)(plVar2 + uVar8 * 2);
    param_1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    puVar6 = puVar5;
    if (param_2 != (long *)0x0) {
      puVar6 = puVar5 + (long)param_2 * 2;
      do {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar6);
    }
    param_1[1] = (long)puVar6;
  }
  return param_1;
}



/* Entry: 109d54e44; end: 109d54f3b;  */

long * FUN_109d54e44(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plStack_68;
  
  plVar4 = (long *)param_1[1];
  if ((long *)(param_1[2] - (long)plVar4 >> 3) < param_2) {
    lVar8 = (long)plVar4 - *param_1;
    uVar1 = (long)param_2 + (lVar8 >> 3);
    if (uVar1 >> 0x3d != 0) {
      FUN_109d54c9c();
      plVar4 = param_1;
      FUN_109d31c54();
      if (((ulong)plVar4 & 1) == 0) {
        FUN_109d31cec(param_1,param_2,param_2);
        *param_1 = *param_2;
        *(undefined4 *)(param_1 + 1) = 0;
        plStack_68 = param_1;
      }
      return plStack_68;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_2;
      FUN_109d54cb0();
    }
    lVar8 = uVar6 + lVar8;
    _bzero(lVar8,(long)param_2 << 3);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + (long)param_2 * 8;
    param_1[2] = uVar6 + (long)plVar4 * 8;
    plVar2 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != (long *)0x0) {
      plVar2 = plVar4;
      _bzero(plVar4,(long)param_2 << 3);
      plVar4 = plVar4 + (long)param_2;
    }
    param_1[1] = (long)plVar4;
  }
  return plVar2;
}



/* Entry: 109d54f3c; end: 109d54f97;  */

undefined8 * FUN_109d54f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d31c54(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d31cec(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d54f98; end: 109d5502f;  */

undefined8 FUN_109d54f98(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d54fd8;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d54fd8:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d55030; end: 109d55133;  */

undefined8 * FUN_109d55030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d54f98(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109d5508c(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d55134; end: 109d5525f;  */

void FUN_109d55134(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d54f98(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(int *)(puStack_38 + 1) = (int)puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d55260; end: 109d552f7;  */

undefined8 FUN_109d55260(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d552a0;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d552a0:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d552f8; end: 109d560df;  */

/* WARNING: Possible PIC construction at 0x000109d55df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d55dfc) */

void FUN_109d552f8(undefined8 *param_1,undefined8 *param_2,long *param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *unaff_x19;
  uint *puVar14;
  undefined8 *puVar15;
  long unaff_x20;
  long lVar16;
  undefined8 *unaff_x21;
  long lVar17;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long lVar18;
  ulong uVar19;
  long unaff_x25;
  ulong uVar20;
  undefined8 *unaff_x26;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      plVar9 = (long *)param_2[-2];
      plVar6 = (long *)*param_1;
      if (*plVar9 == *plVar6) {
        uVar13 = *(uint *)(param_2 + -1);
        uVar12 = *(uint *)(param_1 + 1);
        if (uVar13 <= uVar12) {
          return;
        }
      }
      else {
        lVar16 = *param_3;
        lVar18 = lVar16 + 0x18;
        FUN_109d48288();
        iVar2 = *(int *)(lVar18 + 8);
        lVar16 = lVar16 + 0x18;
        FUN_109d48288(lVar16,*(undefined8 *)*param_1);
        if (*(int *)(lVar16 + 8) - 1U <= iVar2 - 1U) {
          return;
        }
        plVar6 = (long *)*param_1;
        plVar9 = (long *)param_2[-2];
        uVar12 = *(uint *)(param_1 + 1);
        uVar13 = *(uint *)(param_2 + -1);
      }
      *param_1 = plVar9;
      param_2[-2] = plVar6;
      *(uint *)(param_1 + 1) = uVar13;
      *(uint *)(param_2 + -1) = uVar12;
    }
    else if ((long)param_4 < 1) {
      if ((param_1 != param_2) && (param_1 + 2 != param_2)) {
        lVar18 = 0;
        puVar22 = param_1 + 2;
        puVar21 = param_1;
        do {
          puVar10 = puVar22;
          plVar9 = (long *)*puVar10;
          plVar6 = (long *)*puVar21;
          if (*plVar9 == *plVar6) {
            uVar12 = *(uint *)(puVar21 + 3);
            uVar13 = *(uint *)(puVar21 + 1);
            if (uVar13 < uVar12) goto LAB_109d55518;
          }
          else {
            lVar7 = *param_3;
            lVar16 = lVar7 + 0x18;
            FUN_109d48288();
            iVar2 = *(int *)(lVar16 + 8);
            lVar7 = lVar7 + 0x18;
            FUN_109d48288(lVar7,*(undefined8 *)*puVar21);
            if (iVar2 - 1U < *(int *)(lVar7 + 8) - 1U) {
              plVar9 = (long *)*puVar10;
              uVar12 = *(uint *)(puVar21 + 3);
              plVar6 = (long *)*puVar21;
              uVar13 = *(uint *)(puVar21 + 1);
LAB_109d55518:
              *puVar10 = plVar6;
              *(uint *)(puVar10 + 1) = uVar13;
              puVar22 = param_1;
              lVar16 = lVar18;
              if (puVar21 != param_1) {
                do {
                  plVar6 = *(long **)((long)param_1 + lVar16 + -0x10);
                  if (*plVar9 == *plVar6) {
                    uVar13 = *(uint *)((long)param_1 + lVar16 + -8);
                    if (uVar12 <= uVar13) {
                      puVar22 = (undefined8 *)((long)param_1 + lVar16);
                      break;
                    }
                  }
                  else {
                    lVar17 = *param_3;
                    lVar7 = lVar17 + 0x18;
                    FUN_109d48288();
                    iVar2 = *(int *)(lVar7 + 8);
                    lVar17 = lVar17 + 0x18;
                    FUN_109d48288(lVar17,**(undefined8 **)((long)param_1 + lVar16 + -0x10));
                    puVar22 = puVar21;
                    if (*(int *)(lVar17 + 8) - 1U <= iVar2 - 1U) break;
                    plVar6 = *(long **)((long)param_1 + lVar16 + -0x10);
                    uVar13 = *(uint *)((long)param_1 + lVar16 + -8);
                  }
                  puVar21 = puVar21 + -2;
                  *(undefined8 *)((long)param_1 + lVar16) = plVar6;
                  *(uint *)((undefined8 *)((long)param_1 + lVar16) + 1) = uVar13;
                  lVar16 = lVar16 + -0x10;
                  puVar22 = param_1;
                } while (lVar16 != 0);
              }
              *puVar22 = plVar9;
              *(uint *)(puVar22 + 1) = uVar12;
            }
          }
          lVar18 = lVar18 + 0x10;
          puVar22 = puVar10 + 2;
          puVar21 = puVar10;
        } while (puVar10 + 2 != param_2);
      }
    }
    else {
      puVar21 = (undefined8 *)(param_4 >> 1);
      puVar22 = param_1 + (long)puVar21 * 2;
      lVar18 = param_4 - (param_4 >> 1);
      if (param_6 < (long)param_4) {
        FUN_109d552f8(param_1,puVar22,param_3,puVar21,param_5,param_6);
        FUN_109d552f8(puVar22,param_2,param_3,lVar18,param_5,param_6);
        puVar4 = (undefined1 *)register0x00000008;
SUB_109d55aac:
        *(long *)(puVar4 + -0x60) = unaff_x28;
        *(long *)(puVar4 + -0x58) = unaff_x27;
        *(undefined8 **)(puVar4 + -0x50) = unaff_x26;
        *(long *)(puVar4 + -0x48) = unaff_x25;
        *(undefined8 **)(puVar4 + -0x40) = unaff_x24;
        *(long *)(puVar4 + -0x38) = unaff_x23;
        *(undefined8 **)(puVar4 + -0x30) = unaff_x22;
        *(undefined8 **)(puVar4 + -0x28) = unaff_x21;
        *(long *)(puVar4 + -0x20) = unaff_x20;
        *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar4 + -8) = unaff_x30;
        unaff_x29 = puVar4 + -0x10;
        *(undefined8 **)(puVar4 + -0x88) = param_2;
        *(long *)(puVar4 + -0x80) = param_6;
        *(long **)(puVar4 + -0x70) = param_3;
        *(undefined8 **)(puVar4 + -0x68) = puVar22;
        *(long *)(puVar4 + -0x78) = lVar18;
        unaff_x21 = param_1;
joined_r0x000109d55ad8:
        if (lVar18 == 0) {
          return;
        }
        if ((*(long *)(puVar4 + -0x80) < (long)puVar21) &&
           (*(long *)(puVar4 + -0x80) < *(long *)(puVar4 + -0x78))) {
          if (puVar21 == (undefined8 *)0x0) {
            return;
          }
          unaff_x28 = 0;
          unaff_x23 = -(long)puVar21;
          do {
            if (*(long *)**(undefined8 **)(puVar4 + -0x68) ==
                **(long **)((long)unaff_x21 + unaff_x28)) {
              if (*(uint *)((long)unaff_x21 + unaff_x28 + 8) <
                  *(uint *)(*(long *)(puVar4 + -0x68) + 8)) goto LAB_109d55b88;
            }
            else {
              lVar16 = **(long **)(puVar4 + -0x70);
              lVar18 = lVar16 + 0x18;
              FUN_109d48288();
              iVar2 = *(int *)(lVar18 + 8);
              lVar16 = lVar16 + 0x18;
              FUN_109d48288(lVar16,**(undefined8 **)((long)unaff_x21 + unaff_x28));
              if (iVar2 - 1U < *(int *)(lVar16 + 8) - 1U) goto LAB_109d55b88;
            }
            unaff_x28 = unaff_x28 + 0x10;
            bVar5 = unaff_x23 == -1;
            unaff_x23 = unaff_x23 + 1;
            if (bVar5) {
              return;
            }
          } while( true );
        }
        if (*(long *)(puVar4 + -0x78) < (long)puVar21) {
          if (*(long *)(puVar4 + -0x68) == *(long *)(puVar4 + -0x88)) {
            return;
          }
          lVar18 = 0;
          lVar16 = *(long *)(puVar4 + -0x88);
          do {
            lVar7 = *(long *)(puVar4 + -0x68);
            puVar22 = (undefined8 *)(lVar7 + lVar18);
            uVar11 = *puVar22;
            ((undefined8 *)((long)param_5 + lVar18))[1] = puVar22[1];
            *(undefined8 *)((long)param_5 + lVar18) = uVar11;
            lVar18 = lVar18 + 0x10;
          } while (lVar7 + lVar18 != lVar16);
          puVar22 = (undefined8 *)((long)param_5 + lVar18);
          puVar14 = (uint *)(lVar16 + -8);
          do {
            if (*(undefined8 **)(puVar4 + -0x68) == unaff_x21) {
              while (puVar22 != param_5) {
                *(undefined8 *)(puVar14 + -2) = puVar22[-2];
                *puVar14 = *(uint *)(puVar22 + -1);
                puVar14 = puVar14 + -4;
                puVar22 = puVar22 + -2;
              }
              return;
            }
            puVar21 = (undefined8 *)(*(long *)(puVar4 + -0x68) + -0x10);
            puVar10 = puVar22 + -2;
            if (*(long *)*puVar10 == *(long *)*puVar21) {
              puVar1 = (uint *)(puVar22 + -1);
              uVar12 = *(uint *)(*(undefined8 **)(puVar4 + -0x68) + -1);
              plVar6 = (long *)*puVar21;
              if (*puVar1 <= uVar12) {
                plVar6 = (long *)*puVar10;
                puVar22 = puVar10;
                puVar21 = *(undefined8 **)(puVar4 + -0x68);
                uVar12 = *puVar1;
              }
            }
            else {
              lVar16 = **(long **)(puVar4 + -0x70);
              lVar18 = lVar16 + 0x18;
              FUN_109d48288();
              iVar2 = *(int *)(lVar18 + 8);
              lVar16 = lVar16 + 0x18;
              FUN_109d48288(lVar16,*(undefined8 *)*puVar21);
              if (iVar2 - 1U < *(int *)(lVar16 + 8) - 1U) {
                plVar6 = *(long **)(*(long *)(puVar4 + -0x68) + -0x10);
                uVar12 = *(uint *)(*(long *)(puVar4 + -0x68) + -8);
              }
              else {
                puVar1 = (uint *)(puVar22 + -1);
                plVar6 = (long *)puVar22[-2];
                puVar22 = puVar10;
                puVar21 = *(undefined8 **)(puVar4 + -0x68);
                uVar12 = *puVar1;
              }
            }
            *(long **)(puVar14 + -2) = plVar6;
            *puVar14 = uVar12;
            *(undefined8 **)(puVar4 + -0x68) = puVar21;
            puVar14 = puVar14 + -4;
          } while (puVar22 != param_5);
          return;
        }
        if (*(undefined8 **)(puVar4 + -0x68) == unaff_x21) {
          return;
        }
        puVar10 = *(undefined8 **)(puVar4 + -0x68);
        puVar22 = unaff_x21;
        puVar21 = param_5;
        do {
          puVar15 = puVar21;
          puVar8 = puVar22 + 2;
          uVar11 = *puVar22;
          puVar15[1] = puVar22[1];
          *puVar15 = uVar11;
          puVar22 = puVar8;
          puVar21 = puVar15 + 2;
        } while (puVar8 != puVar10);
        do {
          if (*(long *)(puVar4 + -0x68) == *(long *)(puVar4 + -0x88)) {
            lVar18 = 0;
            do {
              puVar22 = (undefined8 *)((long)param_5 + lVar18);
              *(undefined8 *)((long)unaff_x21 + lVar18) = *puVar22;
              *(undefined4 *)((undefined8 *)((long)unaff_x21 + lVar18) + 1) =
                   *(undefined4 *)(puVar22 + 1);
              lVar18 = lVar18 + 0x10;
            } while (puVar15 != puVar22);
            return;
          }
          plVar6 = (long *)**(undefined8 **)(puVar4 + -0x68);
          plVar9 = (long *)*param_5;
          if (*plVar6 == *plVar9) {
            uVar12 = *(uint *)(*(long *)(puVar4 + -0x68) + 8);
            uVar13 = *(uint *)(param_5 + 1);
            if (uVar12 <= uVar13) goto LAB_109d56050;
LAB_109d5602c:
            *unaff_x21 = plVar6;
            *(uint *)(unaff_x21 + 1) = uVar12;
            *(long *)(puVar4 + -0x68) = *(long *)(puVar4 + -0x68) + 0x10;
          }
          else {
            lVar16 = **(long **)(puVar4 + -0x70);
            lVar18 = lVar16 + 0x18;
            FUN_109d48288();
            iVar2 = *(int *)(lVar18 + 8);
            lVar16 = lVar16 + 0x18;
            FUN_109d48288(lVar16,*(undefined8 *)*param_5);
            if (iVar2 - 1U < *(int *)(lVar16 + 8) - 1U) {
              plVar6 = (long *)**(undefined8 **)(puVar4 + -0x68);
              uVar12 = *(uint *)(*(undefined8 **)(puVar4 + -0x68) + 1);
              goto LAB_109d5602c;
            }
            plVar9 = (long *)*param_5;
            uVar13 = *(uint *)(param_5 + 1);
LAB_109d56050:
            *unaff_x21 = plVar9;
            *(uint *)(unaff_x21 + 1) = uVar13;
            param_5 = param_5 + 2;
          }
          unaff_x21 = unaff_x21 + 2;
          if (puVar15 + 2 == param_5) {
            return;
          }
        } while( true );
      }
      func_0x000109d55730(param_1,puVar22,param_3,puVar21,param_5);
      puVar21 = param_5 + (long)puVar21 * 2;
      func_0x000109d55730(puVar22,param_2,param_3,lVar18,puVar21);
      puVar10 = param_5 + param_4 * 2;
      puVar22 = puVar21;
      do {
        if (puVar22 == puVar10) {
          if (param_5 == puVar21) {
            return;
          }
          lVar18 = 0;
          do {
            puVar22 = (undefined8 *)((long)param_5 + lVar18);
            *(undefined8 *)((long)param_1 + lVar18) = *puVar22;
            *(undefined4 *)((undefined8 *)((long)param_1 + lVar18) + 1) =
                 *(undefined4 *)(puVar22 + 1);
            lVar18 = lVar18 + 0x10;
          } while (puVar22 + 2 != puVar21);
          return;
        }
        plVar6 = (long *)*puVar22;
        plVar9 = (long *)*param_5;
        if (*plVar6 == *plVar9) {
          uVar12 = *(uint *)(puVar22 + 1);
          uVar13 = *(uint *)(param_5 + 1);
          if (uVar12 <= uVar13) goto LAB_109d556a8;
LAB_109d55690:
          *param_1 = plVar6;
          *(uint *)(param_1 + 1) = uVar12;
          puVar22 = puVar22 + 2;
        }
        else {
          lVar16 = *param_3;
          lVar18 = lVar16 + 0x18;
          FUN_109d48288();
          iVar2 = *(int *)(lVar18 + 8);
          lVar16 = lVar16 + 0x18;
          FUN_109d48288(lVar16,*(undefined8 *)*param_5);
          if (iVar2 - 1U < *(int *)(lVar16 + 8) - 1U) {
            plVar6 = (long *)*puVar22;
            uVar12 = *(uint *)(puVar22 + 1);
            goto LAB_109d55690;
          }
          plVar9 = (long *)*param_5;
          uVar13 = *(uint *)(param_5 + 1);
LAB_109d556a8:
          *param_1 = plVar9;
          *(uint *)(param_1 + 1) = uVar13;
          param_5 = param_5 + 2;
        }
        param_1 = param_1 + 2;
      } while (param_5 != puVar21);
      if (puVar22 != puVar10) {
        lVar18 = 0;
        do {
          puVar21 = (undefined8 *)((long)puVar22 + lVar18);
          *(undefined8 *)((long)param_1 + lVar18) = *puVar21;
          *(undefined4 *)((undefined8 *)((long)param_1 + lVar18) + 1) = *(undefined4 *)(puVar21 + 1)
          ;
          lVar18 = lVar18 + 0x10;
        } while (puVar21 + 2 != puVar10);
      }
    }
  }
  return;
LAB_109d55b88:
  *(long *)(puVar4 + -0xa0) = (long)unaff_x21 + unaff_x28;
  *(undefined8 **)(puVar4 + -0x98) = param_5;
  lVar16 = *(long *)(puVar4 + -0x78);
  if (-unaff_x23 < lVar16) {
    lVar18 = lVar16 / 2;
    puVar22 = *(undefined8 **)(puVar4 + -0x68);
    unaff_x26 = puVar22 + lVar18 * 2;
    lVar7 = (long)puVar22 + (-unaff_x28 - (long)unaff_x21);
    if (lVar7 != 0) {
      *(long *)(puVar4 + -0x90) = lVar18;
      uVar19 = lVar7 >> 4;
      puVar22 = *(undefined8 **)(puVar4 + -0xa0);
      do {
        uVar20 = uVar19 >> 1;
        puVar21 = puVar22 + uVar20 * 2;
        if (*(long *)*unaff_x26 == *(long *)*puVar21) {
          if (*(uint *)(unaff_x26 + 1) <= *(uint *)(puVar21 + 1)) goto LAB_109d55c38;
        }
        else {
          lVar16 = **(long **)(puVar4 + -0x70);
          lVar18 = lVar16 + 0x18;
          FUN_109d48288();
          iVar2 = *(int *)(lVar18 + 8);
          lVar16 = lVar16 + 0x18;
          FUN_109d48288(lVar16,*(undefined8 *)*puVar21);
          unaff_x22 = unaff_x21;
          if (*(int *)(lVar16 + 8) - 1U <= iVar2 - 1U) {
LAB_109d55c38:
            puVar22 = puVar21 + 2;
            uVar20 = uVar19 + ~uVar20;
          }
        }
        uVar19 = uVar20;
      } while (uVar19 != 0);
      lVar16 = *(long *)(puVar4 + -0x78);
      lVar18 = *(long *)(puVar4 + -0x90);
    }
    puVar21 = (undefined8 *)((long)puVar22 + (-unaff_x28 - (long)unaff_x21) >> 4);
  }
  else {
    if (unaff_x23 == -1) {
      puVar22 = (undefined8 *)((long)unaff_x21 + unaff_x28);
      uVar11 = *puVar22;
      puVar21 = *(undefined8 **)(puVar4 + -0x68);
      *puVar22 = *puVar21;
      *puVar21 = uVar11;
      uVar3 = *(undefined4 *)(puVar22 + 1);
      *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar21 + 1);
      *(undefined4 *)(puVar21 + 1) = uVar3;
      return;
    }
    lVar7 = -unaff_x23 / 2;
    *(long *)(puVar4 + -0xa8) = lVar7;
    unaff_x26 = *(undefined8 **)(puVar4 + -0x68);
    if (unaff_x26 != *(undefined8 **)(puVar4 + -0x88)) {
      unaff_x26 = *(undefined8 **)(puVar4 + -0x68);
      lVar18 = **(long **)(puVar4 + -0x70);
      uVar19 = *(long *)(puVar4 + -0x88) - (long)unaff_x26 >> 4;
      *(long *)(puVar4 + -0x90) = (long)unaff_x21 + unaff_x28 + lVar7 * 0x10;
      do {
        uVar20 = uVar19 >> 1;
        puVar22 = unaff_x26 + uVar20 * 2;
        if (*(long *)*puVar22 == **(long **)((long)unaff_x21 + unaff_x28 + lVar7 * 0x10)) {
          if (*(uint *)(*(long *)(puVar4 + -0x90) + 8) < *(uint *)(puVar22 + 1)) goto LAB_109d55d04;
        }
        else {
          lVar16 = lVar18 + 0x18;
          FUN_109d48288();
          iVar2 = *(int *)(lVar16 + 8);
          lVar16 = lVar18 + 0x18;
          FUN_109d48288(lVar16,**(undefined8 **)((long)unaff_x21 + unaff_x28 + lVar7 * 0x10));
          unaff_x22 = unaff_x26;
          if (iVar2 - 1U < *(int *)(lVar16 + 8) - 1U) {
LAB_109d55d04:
            unaff_x26 = puVar22 + 2;
            uVar20 = uVar19 + ~uVar20;
          }
        }
        uVar19 = uVar20;
      } while (uVar19 != 0);
      lVar16 = *(long *)(puVar4 + -0x78);
    }
    lVar18 = (long)unaff_x26 - *(long *)(puVar4 + -0x68) >> 4;
    puVar22 = (undefined8 *)((long)unaff_x21 + unaff_x28 + lVar7 * 0x10);
    puVar21 = *(undefined8 **)(puVar4 + -0xa8);
  }
  param_2 = unaff_x26;
  if ((puVar22 != *(undefined8 **)(puVar4 + -0x68)) &&
     (param_2 = puVar22, *(undefined8 **)(puVar4 + -0x68) != unaff_x26)) {
    FUN_109d560e0(puVar22,*(undefined8 *)(puVar4 + -0x68),unaff_x26);
    unaff_x22 = puVar21;
  }
  unaff_x27 = -((long)puVar21 + unaff_x23);
  unaff_x25 = lVar16 - lVar18;
  if ((long)puVar21 + lVar18 < (lVar16 - ((long)puVar21 + lVar18)) - unaff_x23)
  goto code_r0x000109d55dd4;
  func_0x000109d55aac(param_2,unaff_x26,*(undefined8 *)(puVar4 + -0x88),
                      *(undefined8 *)(puVar4 + -0x70),unaff_x27,unaff_x25,
                      *(undefined8 *)(puVar4 + -0x98),*(undefined8 *)(puVar4 + -0x80));
  *(undefined8 **)(puVar4 + -0x88) = param_2;
  unaff_x21 = *(undefined8 **)(puVar4 + -0xa0);
  *(long *)(puVar4 + -0x78) = lVar18;
  *(undefined8 **)(puVar4 + -0x68) = puVar22;
  param_5 = *(undefined8 **)(puVar4 + -0x98);
  goto joined_r0x000109d55ad8;
code_r0x000109d55dd4:
  param_1 = (undefined8 *)((long)unaff_x21 + unaff_x28);
  param_3 = *(long **)(puVar4 + -0x70);
  param_5 = *(undefined8 **)(puVar4 + -0x98);
  param_6 = *(long *)(puVar4 + -0x80);
  unaff_x30 = 0x109d55dfc;
  puVar4 = puVar4 + -0xb0;
  unaff_x19 = puVar21;
  unaff_x20 = lVar18;
  unaff_x24 = param_2;
  goto SUB_109d55aac;
}



/* Entry: 109d560e0; end: 109d561a3;  */

void FUN_109d560e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = uVar2;
  puVar3 = param_2;
  while( true ) {
    puVar5 = puVar3 + 2;
    puVar6 = param_1 + 2;
    if (puVar5 == param_3) break;
    puVar1 = puVar5;
    if (puVar6 != param_2) {
      puVar1 = param_2;
    }
    uVar4 = *puVar6;
    *puVar6 = *puVar5;
    *puVar5 = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 3);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar3 + 3);
    *(undefined4 *)(puVar3 + 3) = uVar2;
    param_2 = puVar1;
    param_1 = puVar6;
    puVar3 = puVar5;
  }
  puVar3 = param_2;
  if (puVar6 != param_2) {
    do {
      while( true ) {
        puVar5 = puVar3;
        uVar4 = *puVar6;
        *puVar6 = *param_2;
        *param_2 = uVar4;
        uVar2 = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
        *(undefined4 *)(param_2 + 1) = uVar2;
        puVar6 = puVar6 + 2;
        param_2 = param_2 + 2;
        if (param_2 == param_3) break;
        puVar3 = param_2;
        if (puVar6 != puVar5) {
          puVar3 = puVar5;
        }
      }
      puVar3 = puVar5;
      param_2 = puVar5;
    } while (puVar6 != puVar5);
  }
  return;
}



/* Entry: 109d561a4; end: 109d5649b;  */

undefined8 *
FUN_109d561a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
             undefined8 *param_5,long param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (param_4 == 3) {
    puVar2 = param_1 + 2;
    (*(code *)*param_3)();
    if ((int)puVar2 == 0) {
      uVar6 = param_1[2];
      param_1[2] = *param_2;
      *param_2 = uVar6;
      uVar1 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_2 + 1) = uVar1;
      uVar6 = *param_1;
      *param_1 = param_1[2];
      param_1[2] = uVar6;
      uVar1 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = uVar1;
      param_2 = param_1 + 2;
    }
    else {
      uVar6 = *param_1;
      *param_1 = param_1[2];
      param_1[2] = uVar6;
      uVar1 = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = uVar1;
      param_1[2] = *param_2;
      *param_2 = uVar6;
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
  }
  else if (param_4 == 2) {
    uVar6 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar6;
    uVar1 = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_2 + 1) = uVar1;
  }
  else if (param_6 < param_4) {
    lVar9 = param_4 / 2;
    puVar2 = param_1 + lVar9 * 2;
    puVar4 = puVar2 + -2;
    puVar3 = puVar4;
    (*(code *)*param_3)();
    lVar8 = lVar9;
    if (((ulong)puVar3 & 1) == 0) {
      lVar7 = lVar9 * -0x10;
      do {
        lVar7 = lVar7 + 0x10;
        if (lVar7 == 0) goto LAB_109d5639c;
        lVar8 = lVar8 + -1;
        puVar4 = puVar4 + -2;
        puVar3 = puVar4;
        (*(code *)*param_3)();
      } while ((int)puVar3 == 0);
    }
    FUN_109d561a4(param_1,puVar4,param_3,lVar8,param_5,param_6);
LAB_109d5639c:
    param_4 = param_4 - lVar9;
    puVar4 = puVar2;
    (*(code *)*param_3)();
    puVar3 = puVar2;
    if ((int)puVar4 != 0) {
      puVar4 = param_2 + 2;
      puVar10 = puVar2;
      do {
        puVar10 = puVar10 + 2;
        if (puVar10 == param_2) goto LAB_109d5640c;
        param_4 = param_4 + -1;
        puVar5 = puVar10;
        (*(code *)*param_3)();
        puVar3 = puVar3 + 2;
      } while (((ulong)puVar5 & 1) != 0);
    }
    puVar4 = puVar3;
    FUN_109d561a4(puVar4,param_2,param_3,param_4,param_5,param_6);
LAB_109d5640c:
    param_2 = puVar4;
    if ((param_1 != puVar2) && (param_2 = param_1, puVar2 != puVar4)) {
      FUN_109d560e0(param_1,puVar2,puVar4);
      param_2 = param_1;
    }
  }
  else {
    uVar6 = *param_1;
    param_5[1] = param_1[1];
    *param_5 = uVar6;
    puVar2 = param_5 + 2;
    puVar3 = param_1 + 2;
    puVar4 = puVar2;
    if (puVar3 == param_2) {
      *param_1 = param_1[2];
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 3);
    }
    else {
      do {
        puVar10 = puVar3;
        puVar2 = puVar10;
        (*(code *)*param_3)();
        if ((int)puVar2 == 0) {
          uVar6 = *puVar10;
          puVar2 = puVar4 + 2;
          puVar4[1] = puVar10[1];
          *puVar4 = uVar6;
        }
        else {
          *param_1 = *puVar10;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar10 + 1);
          param_1 = param_1 + 2;
          puVar2 = puVar4;
        }
        puVar3 = puVar10 + 2;
        puVar4 = puVar2;
      } while (puVar3 != param_2);
      *param_1 = *puVar3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar10 + 3);
      puVar3 = param_1 + 2;
      if (puVar2 <= param_5) {
        return puVar3;
      }
    }
    lVar8 = 0;
    do {
      puVar4 = (undefined8 *)((long)param_5 + lVar8);
      *(undefined8 *)((long)puVar3 + lVar8) = *puVar4;
      *(undefined4 *)((undefined8 *)((long)puVar3 + lVar8) + 1) = *(undefined4 *)(puVar4 + 1);
      lVar8 = lVar8 + 0x10;
      param_2 = puVar3;
    } while (puVar4 + 2 < puVar2);
  }
  return param_2;
}



/* Entry: 109d5649c; end: 109d5659f;  */

undefined8 * FUN_109d5649c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d55260(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109d564f8(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d565a0; end: 109d566ff;  */

void FUN_109d565a0(long *param_1,int param_2)

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
  puVar3 = (undefined8 *)((ulong)uVar4 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d56658(param_1,lVar5,lVar5 + (ulong)uVar1 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d56700; end: 109d567fb;  */

undefined8 * FUN_109d56700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d4e80c(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109d56754(param_1,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d567fc; end: 109d56927;  */

void FUN_109d567fc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d4e80c(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d56928; end: 109d57de7;  */

void FUN_109d56928(ulong *param_1,ulong *param_2,long *param_3,long param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  byte bVar11;
  byte bVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong *puVar24;
  ulong uVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  byte *pbVar29;
  ulong *puVar30;
  byte bVar31;
  ulong uVar32;
  byte bVar33;
  
  do {
    puVar13 = param_2 + -1;
    puVar24 = param_1;
LAB_109d5697c:
    param_1 = puVar24;
    uVar19 = (long)param_2 - (long)param_1 >> 3;
    if (uVar19 - 2 == 0 || (long)uVar19 < 2) {
      if (uVar19 < 2) {
        return;
      }
      if (uVar19 == 2) {
        uVar19 = param_2[-1];
        uVar21 = *param_1;
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8);
        uVar18 = (uint)*pbVar29;
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else if (uVar18 - 4 < 0x20) {
          uVar18 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar18 = 3;
          }
        }
        else {
          uVar18 = 1;
        }
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
        uVar6 = (uint)*pbVar29;
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else if (uVar6 - 4 < 0x20) {
          uVar6 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
        bVar3 = uVar18 < uVar6;
        if (uVar18 == uVar6) {
          bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
        }
        bVar4 = (uint)uVar19 < (uint)uVar21;
        if ((uint)uVar19 == (uint)uVar21) {
          bVar4 = bVar3;
        }
        if (!bVar4) {
          return;
        }
        *param_1 = uVar19;
        param_2[-1] = uVar21;
        return;
      }
    }
    else {
      if (uVar19 == 3) {
        puVar24 = param_1 + 1;
        uVar21 = *puVar24;
        uVar19 = *param_1;
        uVar25 = uVar21 >> 0x20;
        uVar22 = uVar19 >> 0x20;
        lVar23 = *(long *)(*param_3 + 0xa8);
        pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
        bVar33 = *pbVar29;
        if (bVar33 == 0) {
          uVar18 = 0;
        }
        else if (bVar33 - 4 < 0x20) {
          uVar18 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar18 = 3;
          }
        }
        else {
          uVar18 = 1;
        }
        uVar6 = (int)(uVar19 >> 0x20) - 1;
        pbVar27 = *(byte **)(lVar23 + (ulong)uVar6 * 8);
        uVar5 = (uint)*pbVar27;
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else if (uVar5 - 4 < 0x20) {
          uVar5 = 2;
          if ((pbVar27[1] & 0x7f) != 1) {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 1;
        }
        bVar3 = uVar18 < uVar5;
        if (uVar18 == uVar5) {
          bVar3 = uVar25 != uVar22 && uVar25 < uVar22;
        }
        uVar18 = (uint)uVar19;
        uVar5 = (uint)uVar21;
        bVar4 = uVar5 < uVar18;
        if (uVar5 == uVar18) {
          bVar4 = bVar3;
        }
        uVar8 = *puVar13;
        uVar32 = uVar8 >> 0x20;
        pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
        bVar12 = *pbVar27;
        uVar14 = (uint)uVar8;
        if (!bVar4) {
          if (bVar12 == 0) {
            uVar18 = 0;
          }
          else if (bVar12 - 4 < 0x20) {
            uVar18 = 2;
            if ((pbVar27[1] & 0x7f) != 1) {
              uVar18 = 3;
            }
          }
          else {
            uVar18 = 1;
          }
          if (bVar33 == 0) {
            uVar6 = 0;
          }
          else if (bVar33 - 4 < 0x20) {
            uVar6 = 2;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 1;
          }
          bVar3 = uVar14 < uVar5;
          if ((uVar14 == uVar5) && (bVar3 = uVar18 < uVar6, uVar18 == uVar6)) {
            bVar3 = uVar32 != uVar25 && uVar32 < uVar25;
          }
          if (bVar3) {
            *puVar24 = uVar8;
            *puVar13 = uVar21;
            uVar19 = *puVar24;
            uVar21 = *param_1;
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8
                                );
            uVar18 = (uint)*pbVar29;
            if (uVar18 == 0) {
              uVar18 = 0;
            }
            else if (uVar18 - 4 < 0x20) {
              uVar18 = 2;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar18 = 3;
              }
            }
            else {
              uVar18 = 1;
            }
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8
                                );
            uVar6 = (uint)*pbVar29;
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else if (uVar6 - 4 < 0x20) {
              uVar6 = 2;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar6 = 3;
              }
            }
            else {
              uVar6 = 1;
            }
            bVar3 = (uint)uVar19 < (uint)uVar21;
            if (((uint)uVar19 == (uint)uVar21) && (bVar3 = uVar18 < uVar6, uVar18 == uVar6)) {
              bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
            }
            if (bVar3) {
              *param_1 = uVar19;
              *puVar24 = uVar21;
              return;
            }
          }
          return;
        }
        if (bVar12 == 0) {
          uVar28 = 0;
        }
        else if (bVar12 - 4 < 0x20) {
          uVar28 = 2;
          if ((pbVar27[1] & 0x7f) != 1) {
            uVar28 = 3;
          }
        }
        else {
          uVar28 = 1;
        }
        if (bVar33 == 0) {
          uVar26 = 0;
        }
        else if (bVar33 - 4 < 0x20) {
          uVar26 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar26 = 3;
          }
        }
        else {
          uVar26 = 1;
        }
        bVar3 = uVar28 < uVar26;
        if (uVar28 == uVar26) {
          bVar3 = uVar32 != uVar25 && uVar32 < uVar25;
        }
        bVar4 = uVar14 < uVar5;
        if (uVar14 == uVar5) {
          bVar4 = bVar3;
        }
        if (bVar4) {
          *param_1 = uVar8;
        }
        else {
          *param_1 = uVar21;
          *puVar24 = uVar19;
          uVar21 = *puVar13;
          pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
          uVar5 = (uint)*pbVar29;
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else if (uVar5 - 4 < 0x20) {
            uVar5 = 2;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar5 = 3;
            }
          }
          else {
            uVar5 = 1;
          }
          pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)uVar6 * 8);
          uVar6 = (uint)*pbVar29;
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else if (uVar6 - 4 < 0x20) {
            uVar6 = 2;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 1;
          }
          bVar3 = (uint)uVar21 < uVar18;
          if (((uint)uVar21 == uVar18) && (bVar3 = uVar5 < uVar6, uVar5 == uVar6)) {
            bVar3 = uVar21 >> 0x20 != uVar22 && uVar21 >> 0x20 < uVar22;
          }
          if (!bVar3) {
            return;
          }
          *puVar24 = uVar21;
        }
        *puVar13 = uVar19;
        return;
      }
      if (uVar19 == 4) {
        puVar24 = param_1 + 1;
        puVar9 = param_1 + 2;
        FUN_109d57de8();
        uVar19 = *puVar13;
        uVar21 = *puVar9;
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8);
        uVar18 = (uint)*pbVar29;
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else if (uVar18 - 4 < 0x20) {
          uVar18 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar18 = 3;
          }
        }
        else {
          uVar18 = 1;
        }
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
        uVar6 = (uint)*pbVar29;
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else if (uVar6 - 4 < 0x20) {
          uVar6 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
        bVar3 = uVar18 < uVar6;
        if (uVar18 == uVar6) {
          bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
        }
        bVar4 = (uint)uVar19 < (uint)uVar21;
        if ((uint)uVar19 == (uint)uVar21) {
          bVar4 = bVar3;
        }
        if (bVar4) {
          *puVar9 = uVar19;
          *puVar13 = uVar21;
          uVar19 = *puVar9;
          uVar21 = *puVar24;
          pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8);
          uVar18 = (uint)*pbVar29;
          if (uVar18 == 0) {
            uVar18 = 0;
          }
          else if (uVar18 - 4 < 0x20) {
            uVar18 = 2;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar18 = 3;
            }
          }
          else {
            uVar18 = 1;
          }
          pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
          uVar6 = (uint)*pbVar29;
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else if (uVar6 - 4 < 0x20) {
            uVar6 = 2;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 1;
          }
          bVar3 = (uint)uVar19 < (uint)uVar21;
          if (((uint)uVar19 == (uint)uVar21) && (bVar3 = uVar18 < uVar6, uVar18 == uVar6)) {
            bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
          }
          if (bVar3) {
            *puVar24 = uVar19;
            *puVar9 = uVar21;
            uVar19 = *puVar24;
            uVar21 = *param_1;
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8
                                );
            uVar18 = (uint)*pbVar29;
            if (uVar18 == 0) {
              uVar18 = 0;
            }
            else if (uVar18 - 4 < 0x20) {
              uVar18 = 2;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar18 = 3;
              }
            }
            else {
              uVar18 = 1;
            }
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8
                                );
            uVar6 = (uint)*pbVar29;
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else if (uVar6 - 4 < 0x20) {
              uVar6 = 2;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar6 = 3;
              }
            }
            else {
              uVar6 = 1;
            }
            bVar3 = (uint)uVar19 < (uint)uVar21;
            if (((uint)uVar19 == (uint)uVar21) && (bVar3 = uVar18 < uVar6, uVar18 == uVar6)) {
              bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
            }
            if (bVar3) {
              *param_1 = uVar19;
              *puVar24 = uVar21;
            }
          }
        }
        return;
      }
      if (uVar19 == 5) {
        puVar24 = param_1 + 1;
        puVar9 = param_1 + 2;
        puVar10 = param_1 + 3;
        FUN_109d581c4();
        uVar19 = *puVar13;
        uVar21 = *puVar10;
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8);
        uVar18 = (uint)*pbVar29;
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else if (uVar18 - 4 < 0x20) {
          uVar18 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar18 = 3;
          }
        }
        else {
          uVar18 = 1;
        }
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
        uVar6 = (uint)*pbVar29;
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else if (uVar6 - 4 < 0x20) {
          uVar6 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
        bVar3 = uVar18 < uVar6;
        if (uVar18 == uVar6) {
          bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
        }
        bVar4 = (uint)uVar19 < (uint)uVar21;
        if ((uint)uVar19 == (uint)uVar21) {
          bVar4 = bVar3;
        }
        if (bVar4) {
          *puVar10 = uVar19;
          *puVar13 = uVar21;
          uVar19 = *puVar10;
          uVar21 = *puVar9;
          pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8);
          uVar18 = (uint)*pbVar29;
          if (uVar18 == 0) {
            uVar18 = 0;
          }
          else if (uVar18 - 4 < 0x20) {
            uVar18 = 2;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar18 = 3;
            }
          }
          else {
            uVar18 = 1;
          }
          pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
          uVar6 = (uint)*pbVar29;
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else if (uVar6 - 4 < 0x20) {
            uVar6 = 2;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 1;
          }
          bVar3 = (uint)uVar19 < (uint)uVar21;
          if (((uint)uVar19 == (uint)uVar21) && (bVar3 = uVar18 < uVar6, uVar18 == uVar6)) {
            bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
          }
          if (bVar3) {
            *puVar9 = uVar19;
            *puVar10 = uVar21;
            uVar19 = *puVar9;
            uVar21 = *puVar24;
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar19 >> 0x20) - 1) * 8
                                );
            uVar18 = (uint)*pbVar29;
            if (uVar18 == 0) {
              uVar18 = 0;
            }
            else if (uVar18 - 4 < 0x20) {
              uVar18 = 2;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar18 = 3;
              }
            }
            else {
              uVar18 = 1;
            }
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar21 >> 0x20) - 1) * 8
                                );
            uVar6 = (uint)*pbVar29;
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else if (uVar6 - 4 < 0x20) {
              uVar6 = 2;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar6 = 3;
              }
            }
            else {
              uVar6 = 1;
            }
            bVar3 = (uint)uVar19 < (uint)uVar21;
            if (((uint)uVar19 == (uint)uVar21) && (bVar3 = uVar18 < uVar6, uVar18 == uVar6)) {
              bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
            }
            if (bVar3) {
              *puVar24 = uVar19;
              *puVar9 = uVar21;
              uVar19 = *puVar24;
              uVar21 = *param_1;
              pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) +
                                  (ulong)((int)(uVar19 >> 0x20) - 1) * 8);
              uVar18 = (uint)*pbVar29;
              if (uVar18 == 0) {
                uVar18 = 0;
              }
              else if (uVar18 - 4 < 0x20) {
                uVar18 = 2;
                if ((pbVar29[1] & 0x7f) != 1) {
                  uVar18 = 3;
                }
              }
              else {
                uVar18 = 1;
              }
              pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) +
                                  (ulong)((int)(uVar21 >> 0x20) - 1) * 8);
              uVar6 = (uint)*pbVar29;
              if (uVar6 == 0) {
                uVar6 = 0;
              }
              else if (uVar6 - 4 < 0x20) {
                uVar6 = 2;
                if ((pbVar29[1] & 0x7f) != 1) {
                  uVar6 = 3;
                }
              }
              else {
                uVar6 = 1;
              }
              bVar3 = (uint)uVar19 < (uint)uVar21;
              if (((uint)uVar19 == (uint)uVar21) && (bVar3 = uVar18 < uVar6, uVar18 == uVar6)) {
                bVar3 = uVar19 >> 0x20 != uVar21 >> 0x20 && uVar19 >> 0x20 < uVar21 >> 0x20;
              }
              if (bVar3) {
                *param_1 = uVar19;
                *puVar24 = uVar21;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar19 < 0x18) {
      puVar24 = param_1 + 1;
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || puVar24 == param_2) {
          return;
        }
        lVar23 = *param_3;
        do {
          puVar13 = puVar24;
          uVar19 = param_1[1];
          uVar21 = uVar19 >> 0x20;
          uVar18 = (int)(uVar19 >> 0x20) - 1;
          pbVar29 = *(byte **)(*(long *)(lVar23 + 0xa8) + (ulong)uVar18 * 8);
          bVar33 = *pbVar29;
          if (bVar33 != 0) {
            if (bVar33 - 4 < 0x20) {
              bVar33 = 2;
              if ((pbVar29[1] & 0x7f) != 1) {
                bVar33 = 3;
              }
            }
            else {
              bVar33 = 1;
            }
          }
          uVar22 = *param_1;
          pbVar29 = *(byte **)(*(long *)(lVar23 + 0xa8) + (ulong)((int)(uVar22 >> 0x20) - 1) * 8);
          uVar6 = (uint)*pbVar29;
          bVar12 = 2;
          if (uVar6 == 0) {
            bVar11 = 0;
          }
          else if (uVar6 - 4 < 0x20) {
            bVar11 = bVar12;
            if ((pbVar29[1] & 0x7f) != 1) {
              bVar11 = 3;
            }
          }
          else {
            bVar11 = 1;
          }
          bVar3 = bVar33 < bVar11;
          if (bVar33 == bVar11) {
            bVar3 = uVar21 != uVar22 >> 0x20 && uVar21 < uVar22 >> 0x20;
          }
          uVar6 = (uint)uVar19;
          bVar4 = uVar6 < (uint)uVar22;
          if (uVar6 == (uint)uVar22) {
            bVar4 = bVar3;
          }
          puVar24 = puVar13;
          if (bVar4) {
            do {
              *puVar24 = uVar22;
              pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)uVar18 * 8);
              bVar33 = *pbVar29;
              if (bVar33 != 0) {
                if (bVar33 - 4 < 0x20) {
                  bVar33 = bVar12;
                  if ((pbVar29[1] & 0x7f) != 1) {
                    bVar33 = 3;
                  }
                }
                else {
                  bVar33 = 1;
                }
              }
              uVar22 = puVar24[-2];
              pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) +
                                  (ulong)((int)(uVar22 >> 0x20) - 1) * 8);
              uVar5 = (uint)*pbVar29;
              if (uVar5 == 0) {
                bVar11 = 0;
              }
              else if (uVar5 - 4 < 0x20) {
                bVar11 = bVar12;
                if ((pbVar29[1] & 0x7f) != 1) {
                  bVar11 = 3;
                }
              }
              else {
                bVar11 = 1;
              }
              bVar3 = bVar33 < bVar11;
              if (bVar33 == bVar11) {
                bVar3 = uVar21 != uVar22 >> 0x20 && uVar21 < uVar22 >> 0x20;
              }
              bVar4 = uVar6 < (uint)uVar22;
              if (uVar6 == (uint)uVar22) {
                bVar4 = bVar3;
              }
              puVar24 = puVar24 + -1;
            } while (bVar4);
            *puVar24 = uVar19;
            lVar23 = *param_3;
          }
          puVar24 = puVar13 + 1;
          param_1 = puVar13;
        } while (puVar13 + 1 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar24 == param_2) {
        return;
      }
      lVar23 = 0;
      lVar7 = *param_3;
      puVar13 = param_1;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar22 = uVar19 - 2 >> 1;
      uVar21 = uVar22;
      goto LAB_109d57574;
    }
    puVar24 = param_1 + (uVar19 >> 1);
    if (uVar19 < 0x81) {
      FUN_109d57de8(puVar24,param_1,puVar13,param_3);
    }
    else {
      FUN_109d57de8(param_1,puVar24,puVar13,param_3);
      FUN_109d57de8(param_1 + 1,puVar24 + -1,param_2 + -2,param_3);
      FUN_109d57de8(param_1 + 2,puVar24 + 1,param_2 + -3,param_3);
      FUN_109d57de8(puVar24 + -1,puVar24,puVar24 + 1,param_3);
      uVar19 = *param_1;
      *param_1 = *puVar24;
      *puVar24 = uVar19;
    }
    param_4 = param_4 + -1;
    uVar19 = *param_1;
    uVar21 = uVar19 >> 0x20;
    iVar20 = (int)(uVar19 >> 0x20);
    bVar33 = 2;
    uVar18 = (uint)uVar19;
    if ((param_5 & 1) == 0) {
      uVar25 = param_1[-1];
      lVar23 = *(long *)(*param_3 + 0xa8);
      pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
      uVar6 = (uint)*pbVar29;
      if (uVar6 == 0) {
        bVar12 = 0;
      }
      else if (uVar6 - 4 < 0x20) {
        bVar12 = 2;
        if ((pbVar29[1] & 0x7f) != 1) {
          bVar12 = 3;
        }
      }
      else {
        bVar12 = 1;
      }
      uVar22 = (ulong)(iVar20 - 1);
      pbVar29 = *(byte **)(lVar23 + uVar22 * 8);
      bVar11 = *pbVar29;
      if (bVar11 == 0) {
        bVar31 = 0;
      }
      else if (bVar11 - 4 < 0x20) {
        bVar31 = bVar33;
        if ((pbVar29[1] & 0x7f) != 1) {
          bVar31 = 3;
        }
      }
      else {
        bVar31 = 1;
      }
      bVar3 = (uint)uVar25 < uVar18;
      if (((uint)uVar25 == uVar18) && (bVar3 = bVar12 < bVar31, bVar12 == bVar31)) {
        bVar3 = uVar25 >> 0x20 != uVar21 && uVar25 >> 0x20 < uVar21;
      }
      if (!bVar3) {
        uVar6 = (uint)bVar11;
        if (uVar6 == 0) {
          bVar12 = 0;
        }
        else if (uVar6 - 4 < 0x20) {
          bVar12 = bVar33;
          if ((pbVar29[1] & 0x7f) != 1) {
            bVar12 = 3;
          }
        }
        else {
          bVar12 = 1;
        }
        uVar25 = *puVar13;
        pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
        uVar5 = (uint)*pbVar27;
        if (uVar5 == 0) {
          bVar11 = 0;
        }
        else if (uVar5 - 4 < 0x20) {
          bVar11 = bVar33;
          if ((pbVar27[1] & 0x7f) != 1) {
            bVar11 = 3;
          }
        }
        else {
          bVar11 = 1;
        }
        bVar3 = uVar18 < (uint)uVar25;
        if ((uVar18 == (uint)uVar25) && (bVar3 = bVar12 < bVar11, bVar12 == bVar11)) {
          bVar3 = uVar21 != uVar25 >> 0x20 && uVar21 < uVar25 >> 0x20;
        }
        bVar4 = uVar6 != 0;
        uVar6 = uVar6 - 0x24;
        puVar24 = param_1;
        if (bVar3) {
          do {
            bVar12 = bVar4;
            if ((0xffffffdf < uVar6) && (bVar12 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
              bVar12 = 3;
            }
            puVar24 = puVar24 + 1;
            uVar25 = *puVar24;
            pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
            uVar5 = (uint)*pbVar27;
            if (uVar5 == 0) {
              bVar11 = 0;
            }
            else if (uVar5 - 4 < 0x20) {
              bVar11 = bVar33;
              if ((pbVar27[1] & 0x7f) != 1) {
                bVar11 = 3;
              }
            }
            else {
              bVar11 = 1;
            }
            bVar3 = bVar12 < bVar11;
            if (bVar12 == bVar11) {
              bVar3 = uVar21 != uVar25 >> 0x20 && uVar21 < uVar25 >> 0x20;
            }
            bVar1 = uVar18 < (uint)uVar25;
            if (uVar18 == (uint)uVar25) {
              bVar1 = bVar3;
            }
          } while (!bVar1);
        }
        else {
          do {
            puVar24 = puVar24 + 1;
            if (param_2 <= puVar24) break;
            bVar12 = bVar4;
            if ((0xffffffdf < uVar6) && (bVar12 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
              bVar12 = 3;
            }
            uVar25 = *puVar24;
            pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
            uVar5 = (uint)*pbVar27;
            if (uVar5 == 0) {
              bVar11 = 0;
            }
            else if (uVar5 - 4 < 0x20) {
              bVar11 = bVar33;
              if ((pbVar27[1] & 0x7f) != 1) {
                bVar11 = 3;
              }
            }
            else {
              bVar11 = 1;
            }
            bVar3 = bVar12 < bVar11;
            if (bVar12 == bVar11) {
              bVar3 = uVar21 != uVar25 >> 0x20 && uVar21 < uVar25 >> 0x20;
            }
            bVar1 = uVar18 < (uint)uVar25;
            if (uVar18 == (uint)uVar25) {
              bVar1 = bVar3;
            }
          } while (!bVar1);
        }
        puVar9 = param_2;
        if (puVar24 < param_2) {
          do {
            bVar12 = bVar4;
            if ((0xffffffdf < uVar6) && (bVar12 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
              bVar12 = 3;
            }
            puVar9 = puVar9 + -1;
            uVar25 = *puVar9;
            pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
            uVar5 = (uint)*pbVar27;
            if (uVar5 == 0) {
              bVar11 = 0;
            }
            else if (uVar5 - 4 < 0x20) {
              bVar11 = bVar33;
              if ((pbVar27[1] & 0x7f) != 1) {
                bVar11 = 3;
              }
            }
            else {
              bVar11 = 1;
            }
            bVar3 = bVar12 < bVar11;
            if (bVar12 == bVar11) {
              bVar3 = uVar21 != uVar25 >> 0x20 && uVar21 < uVar25 >> 0x20;
            }
            bVar1 = uVar18 < (uint)uVar25;
            if (uVar18 == (uint)uVar25) {
              bVar1 = bVar3;
            }
          } while (bVar1);
        }
        if (puVar24 < puVar9) {
          uVar25 = *puVar24;
          uVar8 = *puVar9;
          do {
            *puVar24 = uVar8;
            *puVar9 = uVar25;
            lVar23 = *(long *)(*param_3 + 0xa8);
            pbVar29 = *(byte **)(lVar23 + uVar22 * 8);
            uVar6 = (uint)*pbVar29;
            do {
              puVar24 = puVar24 + 1;
              uVar25 = *puVar24;
              bVar12 = uVar6 != 0;
              if ((0xffffffdf < uVar6 - 0x24) && (bVar12 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
                bVar12 = 3;
              }
              pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
              uVar5 = (uint)*pbVar27;
              if (uVar5 == 0) {
                bVar11 = 0;
              }
              else if (uVar5 - 4 < 0x20) {
                bVar11 = bVar33;
                if ((pbVar27[1] & 0x7f) != 1) {
                  bVar11 = 3;
                }
              }
              else {
                bVar11 = 1;
              }
              bVar3 = bVar12 < bVar11;
              if (bVar12 == bVar11) {
                bVar3 = uVar21 != uVar25 >> 0x20 && uVar21 < uVar25 >> 0x20;
              }
              bVar4 = uVar18 < (uint)uVar25;
              if (uVar18 == (uint)uVar25) {
                bVar4 = bVar3;
              }
            } while (!bVar4);
            do {
              puVar9 = puVar9 + -1;
              uVar8 = *puVar9;
              bVar12 = uVar6 != 0;
              if ((0xffffffdf < uVar6 - 0x24) && (bVar12 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
                bVar12 = 3;
              }
              pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
              uVar5 = (uint)*pbVar27;
              if (uVar5 == 0) {
                bVar11 = 0;
              }
              else if (uVar5 - 4 < 0x20) {
                bVar11 = bVar33;
                if ((pbVar27[1] & 0x7f) != 1) {
                  bVar11 = 3;
                }
              }
              else {
                bVar11 = 1;
              }
              bVar3 = bVar12 < bVar11;
              if (bVar12 == bVar11) {
                bVar3 = uVar21 != uVar8 >> 0x20 && uVar21 < uVar8 >> 0x20;
              }
              bVar4 = uVar18 < (uint)uVar8;
              if (uVar18 == (uint)uVar8) {
                bVar4 = bVar3;
              }
            } while (bVar4);
          } while (puVar24 < puVar9);
        }
        puVar9 = puVar24 + -1;
        if (puVar9 != param_1) {
          *param_1 = *puVar9;
        }
        param_5 = 0;
        *puVar9 = uVar19;
        goto LAB_109d5697c;
      }
    }
    else {
      lVar23 = *(long *)(*param_3 + 0xa8);
      uVar22 = (ulong)(iVar20 - 1);
    }
    lVar7 = 0;
    pbVar29 = *(byte **)(lVar23 + uVar22 * 8);
    bVar3 = *pbVar29 != 0;
    uVar6 = *pbVar29 - 0x24;
    do {
      uVar25 = *(ulong *)((long)param_1 + lVar7 + 8);
      pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
      uVar5 = (uint)*pbVar27;
      if (uVar5 == 0) {
        bVar12 = 0;
      }
      else if (uVar5 - 4 < 0x20) {
        bVar12 = bVar33;
        if ((pbVar27[1] & 0x7f) != 1) {
          bVar12 = 3;
        }
      }
      else {
        bVar12 = 1;
      }
      bVar11 = bVar3;
      if ((0xffffffdf < uVar6) && (bVar11 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
        bVar11 = 3;
      }
      bVar4 = bVar12 < bVar11;
      if (bVar12 == bVar11) {
        bVar4 = uVar25 >> 0x20 != uVar21 && uVar25 >> 0x20 < uVar21;
      }
      bVar1 = (uint)uVar25 < uVar18;
      if (uVar18 == (uint)uVar25) {
        bVar1 = bVar4;
      }
      lVar7 = lVar7 + 8;
    } while (bVar1);
    puVar9 = (ulong *)((long)param_1 + lVar7);
    puVar10 = param_2;
    if (lVar7 == 8) {
      do {
        if (puVar10 <= puVar9) break;
        puVar10 = puVar10 + -1;
        uVar8 = *puVar10;
        pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
        uVar5 = (uint)*pbVar27;
        if (uVar5 == 0) {
          bVar12 = 0;
        }
        else if (uVar5 - 4 < 0x20) {
          bVar12 = bVar33;
          if ((pbVar27[1] & 0x7f) != 1) {
            bVar12 = 3;
          }
        }
        else {
          bVar12 = 1;
        }
        bVar11 = bVar3;
        if ((0xffffffdf < uVar6) && (bVar11 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
          bVar11 = 3;
        }
        bVar4 = bVar12 < bVar11;
        if (bVar12 == bVar11) {
          bVar4 = uVar8 >> 0x20 != uVar21 && uVar8 >> 0x20 < uVar21;
        }
        bVar1 = (uint)uVar8 < uVar18;
        if (uVar18 == (uint)uVar8) {
          bVar1 = bVar4;
        }
      } while (!bVar1);
    }
    else {
      do {
        puVar10 = puVar10 + -1;
        uVar8 = *puVar10;
        pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
        uVar5 = (uint)*pbVar27;
        if (uVar5 == 0) {
          bVar12 = 0;
        }
        else if (uVar5 - 4 < 0x20) {
          bVar12 = bVar33;
          if ((pbVar27[1] & 0x7f) != 1) {
            bVar12 = 3;
          }
        }
        else {
          bVar12 = 1;
        }
        bVar11 = bVar3;
        if ((0xffffffdf < uVar6) && (bVar11 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
          bVar11 = 3;
        }
        bVar4 = bVar12 < bVar11;
        if (bVar12 == bVar11) {
          bVar4 = uVar8 >> 0x20 != uVar21 && uVar8 >> 0x20 < uVar21;
        }
        bVar1 = (uint)uVar8 < uVar18;
        if (uVar18 == (uint)uVar8) {
          bVar1 = bVar4;
        }
      } while (!bVar1);
    }
    puVar24 = puVar9;
    if (puVar9 < puVar10) {
      uVar8 = *puVar10;
      puVar30 = puVar10;
      do {
        *puVar24 = uVar8;
        *puVar30 = uVar25;
        lVar23 = *(long *)(*param_3 + 0xa8);
        pbVar29 = *(byte **)(lVar23 + uVar22 * 8);
        uVar6 = (uint)*pbVar29;
        do {
          puVar24 = puVar24 + 1;
          uVar25 = *puVar24;
          pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
          uVar5 = (uint)*pbVar27;
          if (uVar5 == 0) {
            bVar12 = 0;
          }
          else if (uVar5 - 4 < 0x20) {
            bVar12 = bVar33;
            if ((pbVar27[1] & 0x7f) != 1) {
              bVar12 = 3;
            }
          }
          else {
            bVar12 = 1;
          }
          bVar11 = uVar6 != 0;
          if ((0xffffffdf < uVar6 - 0x24) && (bVar11 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
            bVar11 = 3;
          }
          bVar3 = bVar12 < bVar11;
          if (bVar12 == bVar11) {
            bVar3 = uVar25 >> 0x20 != uVar21 && uVar25 >> 0x20 < uVar21;
          }
          bVar4 = (uint)uVar25 < uVar18;
          if (uVar18 == (uint)uVar25) {
            bVar4 = bVar3;
          }
        } while (bVar4);
        do {
          puVar30 = puVar30 + -1;
          uVar8 = *puVar30;
          pbVar27 = *(byte **)(lVar23 + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
          uVar5 = (uint)*pbVar27;
          if (uVar5 == 0) {
            bVar12 = 0;
          }
          else if (uVar5 - 4 < 0x20) {
            bVar12 = bVar33;
            if ((pbVar27[1] & 0x7f) != 1) {
              bVar12 = 3;
            }
          }
          else {
            bVar12 = 1;
          }
          bVar11 = uVar6 != 0;
          if ((0xffffffdf < uVar6 - 0x24) && (bVar11 = bVar33, (pbVar29[1] & 0x7f) != 1)) {
            bVar11 = 3;
          }
          bVar3 = bVar12 < bVar11;
          if (bVar12 == bVar11) {
            bVar3 = uVar8 >> 0x20 != uVar21 && uVar8 >> 0x20 < uVar21;
          }
          bVar4 = (uint)uVar8 < uVar18;
          if (uVar18 == (uint)uVar8) {
            bVar4 = bVar3;
          }
        } while (!bVar4);
      } while (puVar24 < puVar30);
    }
    puVar30 = puVar24 + -1;
    if (puVar30 != param_1) {
      *param_1 = *puVar30;
    }
    *puVar30 = uVar19;
    if (puVar9 < puVar10) goto LAB_109d56e9c;
    puVar9 = param_1;
    FUN_109d5881c(param_1,puVar30,param_3);
    puVar10 = puVar24;
    FUN_109d5881c(puVar24,param_2,param_3);
    if ((int)puVar10 == 0) goto code_r0x000109d56e98;
    param_2 = puVar30;
    if (((ulong)puVar9 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109d573bc:
  puVar9 = puVar24;
  uVar19 = puVar13[1];
  uVar21 = uVar19 >> 0x20;
  uVar18 = (int)(uVar19 >> 0x20) - 1;
  pbVar29 = *(byte **)(*(long *)(lVar7 + 0xa8) + (ulong)uVar18 * 8);
  uVar6 = (uint)*pbVar29;
  if (uVar6 == 0) {
    bVar33 = 0;
  }
  else if (uVar6 - 4 < 0x20) {
    bVar33 = 2;
    if ((pbVar29[1] & 0x7f) != 1) {
      bVar33 = 3;
    }
  }
  else {
    bVar33 = 1;
  }
  uVar22 = *puVar13;
  pbVar29 = *(byte **)(*(long *)(lVar7 + 0xa8) + (ulong)((int)(uVar22 >> 0x20) - 1) * 8);
  uVar6 = (uint)*pbVar29;
  bVar12 = 2;
  if (uVar6 == 0) {
    bVar11 = 0;
  }
  else if (uVar6 - 4 < 0x20) {
    bVar11 = bVar12;
    if ((pbVar29[1] & 0x7f) != 1) {
      bVar11 = 3;
    }
  }
  else {
    bVar11 = 1;
  }
  bVar3 = bVar33 < bVar11;
  if (bVar33 == bVar11) {
    bVar3 = uVar21 != uVar22 >> 0x20 && uVar21 < uVar22 >> 0x20;
  }
  uVar6 = (uint)uVar19;
  bVar4 = uVar6 < (uint)uVar22;
  if (uVar6 == (uint)uVar22) {
    bVar4 = bVar3;
  }
  lVar2 = lVar23;
  if (bVar4) {
    do {
      lVar7 = lVar2;
      *(ulong *)((long)param_1 + lVar7 + 8) = uVar22;
      puVar24 = param_1;
      if (lVar7 == 0) goto LAB_109d5753c;
      pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)uVar18 * 8);
      bVar33 = *pbVar29;
      if (bVar33 != 0) {
        if (bVar33 - 4 < 0x20) {
          bVar33 = bVar12;
          if ((pbVar29[1] & 0x7f) != 1) {
            bVar33 = 3;
          }
        }
        else {
          bVar33 = 1;
        }
      }
      uVar22 = *(ulong *)((long)param_1 + lVar7 + -8);
      pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar22 >> 0x20) - 1) * 8);
      uVar5 = (uint)*pbVar29;
      if (uVar5 == 0) {
        bVar11 = 0;
      }
      else if (uVar5 - 4 < 0x20) {
        bVar11 = bVar12;
        if ((pbVar29[1] & 0x7f) != 1) {
          bVar11 = 3;
        }
      }
      else {
        bVar11 = 1;
      }
      bVar3 = bVar33 < bVar11;
      if (bVar33 == bVar11) {
        bVar3 = uVar21 != uVar22 >> 0x20 && uVar21 < uVar22 >> 0x20;
      }
      bVar4 = uVar6 < (uint)uVar22;
      if (uVar6 == (uint)uVar22) {
        bVar4 = bVar3;
      }
      lVar2 = lVar7 + -8;
    } while (bVar4);
    puVar24 = (ulong *)((long)param_1 + lVar7);
LAB_109d5753c:
    *puVar24 = uVar19;
    lVar7 = *param_3;
  }
  puVar24 = puVar9 + 1;
  lVar23 = lVar23 + 8;
  puVar13 = puVar9;
  if (puVar24 == param_2) {
    return;
  }
  goto LAB_109d573bc;
LAB_109d57574:
  do {
    if ((long)uVar21 <= (long)uVar22) {
      uVar8 = uVar21 << 1 | 1;
      puVar24 = param_1 + uVar8;
      uVar25 = uVar21 * 2 + 2;
      uVar18 = 2;
      if ((long)uVar25 < (long)uVar19) {
        uVar32 = *puVar24;
        lVar23 = *(long *)(*param_3 + 0xa8);
        pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar32 >> 0x20) - 1) * 8);
        uVar6 = (uint)*pbVar29;
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else if (uVar6 - 4 < 0x20) {
          uVar6 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
        uVar15 = puVar24[1];
        pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar15 >> 0x20) - 1) * 8);
        uVar5 = (uint)*pbVar29;
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else if (uVar5 - 4 < 0x20) {
          uVar5 = uVar18;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 1;
        }
        bVar3 = uVar6 < uVar5;
        if (uVar6 == uVar5) {
          bVar3 = uVar32 >> 0x20 != uVar15 >> 0x20 && uVar32 >> 0x20 < uVar15 >> 0x20;
        }
        bVar4 = (uint)uVar32 < (uint)uVar15;
        if ((uint)uVar32 == (uint)uVar15) {
          bVar4 = bVar3;
        }
        if (bVar4) {
          puVar24 = puVar24 + 1;
          uVar8 = uVar25;
        }
      }
      else {
        lVar23 = *(long *)(*param_3 + 0xa8);
      }
      uVar25 = *puVar24;
      pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
      uVar6 = (uint)*pbVar29;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else if (uVar6 - 4 < 0x20) {
        uVar6 = uVar18;
        if ((pbVar29[1] & 0x7f) != 1) {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 1;
      }
      uVar32 = param_1[uVar21];
      uVar15 = uVar32 >> 0x20;
      uVar5 = (int)(uVar32 >> 0x20) - 1;
      pbVar29 = *(byte **)(lVar23 + (ulong)uVar5 * 8);
      uVar14 = (uint)*pbVar29;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (uVar14 - 4 < 0x20) {
        uVar14 = uVar18;
        if ((pbVar29[1] & 0x7f) != 1) {
          uVar14 = 3;
        }
      }
      else {
        uVar14 = 1;
      }
      uVar28 = (uint)uVar32;
      bVar3 = (uint)uVar25 < uVar28;
      if (((uint)uVar25 == uVar28) && (bVar3 = uVar6 < uVar14, uVar6 == uVar14)) {
        bVar3 = uVar25 >> 0x20 != uVar15 && uVar25 >> 0x20 < uVar15;
      }
      puVar13 = param_1 + uVar21;
      if (!bVar3) {
        do {
          puVar9 = puVar24;
          *puVar13 = uVar25;
          if ((long)uVar22 < (long)uVar8) break;
          uVar16 = uVar8 << 1 | 1;
          puVar24 = param_1 + uVar16;
          uVar25 = uVar8 * 2 + 2;
          uVar8 = uVar16;
          if ((long)uVar25 < (long)uVar19) {
            uVar16 = *puVar24;
            lVar23 = *(long *)(*param_3 + 0xa8);
            pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar16 >> 0x20) - 1) * 8);
            uVar6 = (uint)*pbVar29;
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else if (uVar6 - 4 < 0x20) {
              uVar6 = uVar18;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar6 = 3;
              }
            }
            else {
              uVar6 = 1;
            }
            uVar17 = puVar24[1];
            pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar17 >> 0x20) - 1) * 8);
            uVar14 = (uint)*pbVar29;
            if (uVar14 == 0) {
              uVar14 = 0;
            }
            else if (uVar14 - 4 < 0x20) {
              uVar14 = uVar18;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar14 = 3;
              }
            }
            else {
              uVar14 = 1;
            }
            bVar3 = uVar6 < uVar14;
            if (uVar6 == uVar14) {
              bVar3 = uVar16 >> 0x20 != uVar17 >> 0x20 && uVar16 >> 0x20 < uVar17 >> 0x20;
            }
            bVar4 = (uint)uVar16 < (uint)uVar17;
            if ((uint)uVar16 == (uint)uVar17) {
              bVar4 = bVar3;
            }
            if (bVar4) {
              puVar24 = puVar24 + 1;
              uVar8 = uVar25;
            }
          }
          else {
            lVar23 = *(long *)(*param_3 + 0xa8);
          }
          uVar25 = *puVar24;
          pbVar29 = *(byte **)(lVar23 + (ulong)((int)(uVar25 >> 0x20) - 1) * 8);
          uVar6 = (uint)*pbVar29;
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else if (uVar6 - 4 < 0x20) {
            uVar6 = uVar18;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 1;
          }
          pbVar29 = *(byte **)(lVar23 + (ulong)uVar5 * 8);
          uVar14 = (uint)*pbVar29;
          if (uVar14 == 0) {
            uVar14 = 0;
          }
          else if (uVar14 - 4 < 0x20) {
            uVar14 = uVar18;
            if ((pbVar29[1] & 0x7f) != 1) {
              uVar14 = 3;
            }
          }
          else {
            uVar14 = 1;
          }
          bVar3 = uVar6 < uVar14;
          if (uVar6 == uVar14) {
            bVar3 = uVar25 >> 0x20 != uVar15 && uVar25 >> 0x20 < uVar15;
          }
          bVar4 = (uint)uVar25 < uVar28;
          if ((uint)uVar25 == uVar28) {
            bVar4 = bVar3;
          }
          puVar13 = puVar9;
        } while (!bVar4);
        *puVar9 = uVar32;
      }
    }
    bVar3 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar3);
  do {
    uVar22 = *param_1;
    puVar24 = param_1;
    uVar21 = 0;
    do {
      uVar8 = uVar21 << 1 | 1;
      uVar25 = uVar21 * 2 + 2;
      uVar18 = 2;
      puVar13 = puVar24 + uVar21 + 1;
      if ((long)uVar25 < (long)uVar19) {
        uVar32 = puVar24[uVar21 + 2];
        uVar15 = puVar24[uVar21 + 1];
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar15 >> 0x20) - 1) * 8);
        uVar6 = (uint)*pbVar29;
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else if (uVar6 - 4 < 0x20) {
          uVar6 = 2;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar32 >> 0x20) - 1) * 8);
        uVar5 = (uint)*pbVar29;
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else if (uVar5 - 4 < 0x20) {
          uVar5 = uVar18;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 1;
        }
        bVar3 = uVar6 < uVar5;
        if (uVar6 == uVar5) {
          bVar3 = uVar15 >> 0x20 != uVar32 >> 0x20 && uVar15 >> 0x20 < uVar32 >> 0x20;
        }
        bVar4 = (uint)uVar15 < (uint)uVar32;
        if ((uint)uVar15 == (uint)uVar32) {
          bVar4 = bVar3;
        }
        if (bVar4) {
          puVar13 = puVar24 + uVar21 + 2;
          uVar8 = uVar25;
        }
      }
      *puVar24 = *puVar13;
      puVar24 = puVar13;
      uVar21 = uVar8;
    } while ((long)uVar8 <= (long)(uVar19 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar13 == param_2) {
      *puVar13 = uVar22;
    }
    else {
      *puVar13 = *param_2;
      *param_2 = uVar22;
      lVar23 = (long)puVar13 + (8 - (long)param_1) >> 3;
      if (1 < lVar23) {
        uVar21 = lVar23 - 2U >> 1;
        uVar22 = param_1[uVar21];
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar22 >> 0x20) - 1) * 8);
        uVar6 = (uint)*pbVar29;
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else if (uVar6 - 4 < 0x20) {
          uVar6 = uVar18;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
        uVar25 = *puVar13;
        uVar8 = uVar25 >> 0x20;
        uVar5 = (int)(uVar25 >> 0x20) - 1;
        pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)uVar5 * 8);
        uVar14 = (uint)*pbVar29;
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else if (uVar14 - 4 < 0x20) {
          uVar14 = uVar18;
          if ((pbVar29[1] & 0x7f) != 1) {
            uVar14 = 3;
          }
        }
        else {
          uVar14 = 1;
        }
        uVar28 = (uint)uVar25;
        bVar3 = (uint)uVar22 < uVar28;
        if (((uint)uVar22 == uVar28) && (bVar3 = uVar6 < uVar14, uVar6 == uVar14)) {
          bVar3 = uVar22 >> 0x20 != uVar8 && uVar22 >> 0x20 < uVar8;
        }
        puVar24 = param_1 + uVar21;
        if (bVar3) {
          do {
            puVar9 = puVar24;
            *puVar13 = uVar22;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1 >> 1;
            uVar22 = param_1[uVar21];
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar22 >> 0x20) - 1) * 8
                                );
            uVar6 = (uint)*pbVar29;
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else if (uVar6 - 4 < 0x20) {
              uVar6 = uVar18;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar6 = 3;
              }
            }
            else {
              uVar6 = 1;
            }
            pbVar29 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)uVar5 * 8);
            uVar14 = (uint)*pbVar29;
            if (uVar14 == 0) {
              uVar14 = 0;
            }
            else if (uVar14 - 4 < 0x20) {
              uVar14 = uVar18;
              if ((pbVar29[1] & 0x7f) != 1) {
                uVar14 = 3;
              }
            }
            else {
              uVar14 = 1;
            }
            bVar3 = uVar6 < uVar14;
            if (uVar6 == uVar14) {
              bVar3 = uVar22 >> 0x20 != uVar8 && uVar22 >> 0x20 < uVar8;
            }
            bVar4 = (uint)uVar22 < uVar28;
            if ((uint)uVar22 == uVar28) {
              bVar4 = bVar3;
            }
            puVar13 = puVar9;
            puVar24 = param_1 + uVar21;
          } while (bVar4);
          *puVar9 = uVar25;
        }
      }
    }
    bVar3 = (long)uVar19 < 3;
    uVar19 = uVar19 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x000109d56e98:
  if (((ulong)puVar9 & 1) == 0) {
LAB_109d56e9c:
    FUN_109d56928(param_1,puVar30,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_109d5697c;
}



/* Entry: 109d57de8; end: 109d581c3;  */

void FUN_109d57de8(ulong *param_1,ulong *param_2,ulong *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  
  uVar8 = *param_2;
  uVar7 = *param_1;
  uVar11 = uVar8 >> 0x20;
  uVar10 = uVar7 >> 0x20;
  lVar19 = *(long *)(*param_4 + 0xa8);
  pbVar15 = *(byte **)(lVar19 + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
  bVar1 = *pbVar15;
  if (bVar1 == 0) {
    uVar6 = 0;
  }
  else if (bVar1 - 4 < 0x20) {
    uVar6 = 2;
    if ((pbVar15[1] & 0x7f) != 1) {
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 1;
  }
  uVar9 = (int)(uVar7 >> 0x20) - 1;
  pbVar16 = *(byte **)(lVar19 + (ulong)uVar9 * 8);
  uVar5 = (uint)*pbVar16;
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else if (uVar5 - 4 < 0x20) {
    uVar5 = 2;
    if ((pbVar16[1] & 0x7f) != 1) {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 1;
  }
  bVar4 = uVar6 < uVar5;
  if (uVar6 == uVar5) {
    bVar4 = uVar11 != uVar10 && uVar11 < uVar10;
  }
  uVar6 = (uint)uVar7;
  uVar5 = (uint)uVar8;
  bVar3 = uVar5 < uVar6;
  if (uVar5 == uVar6) {
    bVar3 = bVar4;
  }
  uVar13 = *param_3;
  uVar17 = uVar13 >> 0x20;
  pbVar16 = *(byte **)(lVar19 + (ulong)((int)(uVar13 >> 0x20) - 1) * 8);
  bVar2 = *pbVar16;
  uVar12 = (uint)uVar13;
  if (bVar3) {
    if (bVar2 == 0) {
      uVar18 = 0;
    }
    else if (bVar2 - 4 < 0x20) {
      uVar18 = 2;
      if ((pbVar16[1] & 0x7f) != 1) {
        uVar18 = 3;
      }
    }
    else {
      uVar18 = 1;
    }
    if (bVar1 == 0) {
      uVar14 = 0;
    }
    else if (bVar1 - 4 < 0x20) {
      uVar14 = 2;
      if ((pbVar15[1] & 0x7f) != 1) {
        uVar14 = 3;
      }
    }
    else {
      uVar14 = 1;
    }
    bVar4 = uVar18 < uVar14;
    if (uVar18 == uVar14) {
      bVar4 = uVar17 != uVar11 && uVar17 < uVar11;
    }
    bVar3 = uVar12 < uVar5;
    if (uVar12 == uVar5) {
      bVar3 = bVar4;
    }
    if (bVar3) {
      *param_1 = uVar13;
    }
    else {
      *param_1 = uVar8;
      *param_2 = uVar7;
      uVar8 = *param_3;
      pbVar15 = *(byte **)(*(long *)(*param_4 + 0xa8) + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
      uVar5 = (uint)*pbVar15;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else if (uVar5 - 4 < 0x20) {
        uVar5 = 2;
        if ((pbVar15[1] & 0x7f) != 1) {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 1;
      }
      pbVar15 = *(byte **)(*(long *)(*param_4 + 0xa8) + (ulong)uVar9 * 8);
      uVar9 = (uint)*pbVar15;
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else if (uVar9 - 4 < 0x20) {
        uVar9 = 2;
        if ((pbVar15[1] & 0x7f) != 1) {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = 1;
      }
      bVar4 = (uint)uVar8 < uVar6;
      if (((uint)uVar8 == uVar6) && (bVar4 = uVar5 < uVar9, uVar5 == uVar9)) {
        bVar4 = uVar8 >> 0x20 != uVar10 && uVar8 >> 0x20 < uVar10;
      }
      if (!bVar4) {
        return;
      }
      *param_2 = uVar8;
    }
    *param_3 = uVar7;
    return;
  }
  if (bVar2 == 0) {
    uVar6 = 0;
  }
  else if (bVar2 - 4 < 0x20) {
    uVar6 = 2;
    if ((pbVar16[1] & 0x7f) != 1) {
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 1;
  }
  if (bVar1 == 0) {
    uVar9 = 0;
  }
  else if (bVar1 - 4 < 0x20) {
    uVar9 = 2;
    if ((pbVar15[1] & 0x7f) != 1) {
      uVar9 = 3;
    }
  }
  else {
    uVar9 = 1;
  }
  bVar4 = uVar12 < uVar5;
  if ((uVar12 == uVar5) && (bVar4 = uVar6 < uVar9, uVar6 == uVar9)) {
    bVar4 = uVar17 != uVar11 && uVar17 < uVar11;
  }
  if (bVar4) {
    *param_2 = uVar13;
    *param_3 = uVar8;
    uVar7 = *param_2;
    uVar8 = *param_1;
    pbVar15 = *(byte **)(*(long *)(*param_4 + 0xa8) + (ulong)((int)(uVar7 >> 0x20) - 1) * 8);
    uVar6 = (uint)*pbVar15;
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else if (uVar6 - 4 < 0x20) {
      uVar6 = 2;
      if ((pbVar15[1] & 0x7f) != 1) {
        uVar6 = 3;
      }
    }
    else {
      uVar6 = 1;
    }
    pbVar15 = *(byte **)(*(long *)(*param_4 + 0xa8) + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
    uVar9 = (uint)*pbVar15;
    if (uVar9 == 0) {
      uVar9 = 0;
    }
    else if (uVar9 - 4 < 0x20) {
      uVar9 = 2;
      if ((pbVar15[1] & 0x7f) != 1) {
        uVar9 = 3;
      }
    }
    else {
      uVar9 = 1;
    }
    bVar4 = (uint)uVar7 < (uint)uVar8;
    if (((uint)uVar7 == (uint)uVar8) && (bVar4 = uVar6 < uVar9, uVar6 == uVar9)) {
      bVar4 = uVar7 >> 0x20 != uVar8 >> 0x20 && uVar7 >> 0x20 < uVar8 >> 0x20;
    }
    if (bVar4) {
      *param_1 = uVar7;
      *param_2 = uVar8;
      return;
    }
  }
  return;
}



/* Entry: 109d581c4; end: 109d5881b;  */

void FUN_109d581c4(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  FUN_109d57de8();
  uVar3 = *param_4;
  uVar4 = *param_3;
  pbVar6 = *(byte **)(*(long *)(*param_5 + 0xa8) + (ulong)((int)(uVar3 >> 0x20) - 1) * 8);
  uVar5 = (uint)*pbVar6;
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else if (uVar5 - 4 < 0x20) {
    uVar5 = 2;
    if ((pbVar6[1] & 0x7f) != 1) {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 1;
  }
  pbVar6 = *(byte **)(*(long *)(*param_5 + 0xa8) + (ulong)((int)(uVar4 >> 0x20) - 1) * 8);
  uVar7 = (uint)*pbVar6;
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else if (uVar7 - 4 < 0x20) {
    uVar7 = 2;
    if ((pbVar6[1] & 0x7f) != 1) {
      uVar7 = 3;
    }
  }
  else {
    uVar7 = 1;
  }
  bVar2 = uVar5 < uVar7;
  if (uVar5 == uVar7) {
    bVar2 = uVar3 >> 0x20 != uVar4 >> 0x20 && uVar3 >> 0x20 < uVar4 >> 0x20;
  }
  bVar1 = (uint)uVar3 < (uint)uVar4;
  if ((uint)uVar3 == (uint)uVar4) {
    bVar1 = bVar2;
  }
  if (bVar1) {
    *param_3 = uVar3;
    *param_4 = uVar4;
    uVar3 = *param_3;
    uVar4 = *param_2;
    pbVar6 = *(byte **)(*(long *)(*param_5 + 0xa8) + (ulong)((int)(uVar3 >> 0x20) - 1) * 8);
    uVar5 = (uint)*pbVar6;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else if (uVar5 - 4 < 0x20) {
      uVar5 = 2;
      if ((pbVar6[1] & 0x7f) != 1) {
        uVar5 = 3;
      }
    }
    else {
      uVar5 = 1;
    }
    pbVar6 = *(byte **)(*(long *)(*param_5 + 0xa8) + (ulong)((int)(uVar4 >> 0x20) - 1) * 8);
    uVar7 = (uint)*pbVar6;
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else if (uVar7 - 4 < 0x20) {
      uVar7 = 2;
      if ((pbVar6[1] & 0x7f) != 1) {
        uVar7 = 3;
      }
    }
    else {
      uVar7 = 1;
    }
    bVar2 = (uint)uVar3 < (uint)uVar4;
    if (((uint)uVar3 == (uint)uVar4) && (bVar2 = uVar5 < uVar7, uVar5 == uVar7)) {
      bVar2 = uVar3 >> 0x20 != uVar4 >> 0x20 && uVar3 >> 0x20 < uVar4 >> 0x20;
    }
    if (bVar2) {
      *param_2 = uVar3;
      *param_3 = uVar4;
      uVar3 = *param_2;
      uVar4 = *param_1;
      pbVar6 = *(byte **)(*(long *)(*param_5 + 0xa8) + (ulong)((int)(uVar3 >> 0x20) - 1) * 8);
      uVar5 = (uint)*pbVar6;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else if (uVar5 - 4 < 0x20) {
        uVar5 = 2;
        if ((pbVar6[1] & 0x7f) != 1) {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 1;
      }
      pbVar6 = *(byte **)(*(long *)(*param_5 + 0xa8) + (ulong)((int)(uVar4 >> 0x20) - 1) * 8);
      uVar7 = (uint)*pbVar6;
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else if (uVar7 - 4 < 0x20) {
        uVar7 = 2;
        if ((pbVar6[1] & 0x7f) != 1) {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 1;
      }
      bVar2 = (uint)uVar3 < (uint)uVar4;
      if (((uint)uVar3 == (uint)uVar4) && (bVar2 = uVar5 < uVar7, uVar5 == uVar7)) {
        bVar2 = uVar3 >> 0x20 != uVar4 >> 0x20 && uVar3 >> 0x20 < uVar4 >> 0x20;
      }
      if (bVar2) {
        *param_1 = uVar3;
        *param_2 = uVar4;
      }
    }
  }
  return;
}



/* Entry: 109d5881c; end: 109d58b8b;  */

bool FUN_109d5881c(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  ulong *puVar16;
  ulong uVar17;
  byte bVar18;
  ulong *puVar19;
  
  uVar8 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      uVar8 = param_2[-1];
      uVar11 = *param_1;
      pbVar15 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar8 >> 0x20) - 1) * 8);
      uVar14 = (uint)*pbVar15;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (uVar14 - 4 < 0x20) {
        uVar14 = 2;
        if ((pbVar15[1] & 0x7f) != 1) {
          uVar14 = 3;
        }
      }
      else {
        uVar14 = 1;
      }
      pbVar15 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar11 >> 0x20) - 1) * 8);
      uVar6 = (uint)*pbVar15;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else if (uVar6 - 4 < 0x20) {
        uVar6 = 2;
        if ((pbVar15[1] & 0x7f) != 1) {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 1;
      }
      bVar3 = uVar14 < uVar6;
      if (uVar14 == uVar6) {
        bVar3 = uVar8 >> 0x20 != uVar11 >> 0x20 && uVar8 >> 0x20 < uVar11 >> 0x20;
      }
      bVar2 = (uint)uVar8 < (uint)uVar11;
      if ((uint)uVar8 == (uint)uVar11) {
        bVar2 = bVar3;
      }
      if (!bVar2) {
        return true;
      }
      *param_1 = uVar8;
      param_2[-1] = uVar11;
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      FUN_109d57de8(param_1,param_1 + 1,param_2 + -1,param_3);
      return true;
    }
    if (uVar8 == 4) {
      func_0x000109d581c4(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
      return true;
    }
    if (uVar8 == 5) {
      func_0x000109d58484(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
      return true;
    }
  }
  FUN_109d57de8(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    iVar10 = 0;
    lVar12 = 0x18;
    puVar16 = param_1 + 3;
    puVar19 = param_1 + 2;
    do {
      puVar9 = puVar16;
      uVar8 = *puVar9;
      uVar11 = uVar8 >> 0x20;
      uVar14 = (int)(uVar8 >> 0x20) - 1;
      pbVar15 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)uVar14 * 8);
      bVar18 = *pbVar15;
      if (bVar18 != 0) {
        if (bVar18 - 4 < 0x20) {
          bVar18 = 2;
          if ((pbVar15[1] & 0x7f) != 1) {
            bVar18 = 3;
          }
        }
        else {
          bVar18 = 1;
        }
      }
      uVar17 = *puVar19;
      pbVar15 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar17 >> 0x20) - 1) * 8);
      uVar6 = (uint)*pbVar15;
      bVar13 = 2;
      if (uVar6 == 0) {
        bVar4 = 0;
      }
      else if (uVar6 - 4 < 0x20) {
        bVar4 = bVar13;
        if ((pbVar15[1] & 0x7f) != 1) {
          bVar4 = 3;
        }
      }
      else {
        bVar4 = 1;
      }
      bVar3 = bVar18 < bVar4;
      if (bVar18 == bVar4) {
        bVar3 = uVar11 != uVar17 >> 0x20 && uVar11 < uVar17 >> 0x20;
      }
      uVar6 = (uint)uVar8;
      bVar2 = uVar6 < (uint)uVar17;
      if (uVar6 == (uint)uVar17) {
        bVar2 = bVar3;
      }
      lVar5 = lVar12;
      if (bVar2) {
        do {
          *(ulong *)((long)param_1 + lVar5) = uVar17;
          lVar1 = lVar5 + -8;
          puVar16 = param_1;
          if (lVar1 == 0) goto LAB_109d58a9c;
          pbVar15 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)uVar14 * 8);
          bVar18 = *pbVar15;
          if (bVar18 != 0) {
            if (bVar18 - 4 < 0x20) {
              bVar18 = bVar13;
              if ((pbVar15[1] & 0x7f) != 1) {
                bVar18 = 3;
              }
            }
            else {
              bVar18 = 1;
            }
          }
          uVar17 = *(ulong *)((long)param_1 + lVar5 + -0x10);
          pbVar15 = *(byte **)(*(long *)(*param_3 + 0xa8) + (ulong)((int)(uVar17 >> 0x20) - 1) * 8);
          uVar7 = (uint)*pbVar15;
          if (uVar7 == 0) {
            bVar4 = 0;
          }
          else if (uVar7 - 4 < 0x20) {
            bVar4 = bVar13;
            if ((pbVar15[1] & 0x7f) != 1) {
              bVar4 = 3;
            }
          }
          else {
            bVar4 = 1;
          }
          bVar3 = bVar18 < bVar4;
          if (bVar18 == bVar4) {
            bVar3 = uVar11 != uVar17 >> 0x20 && uVar11 < uVar17 >> 0x20;
          }
          bVar2 = uVar6 < (uint)uVar17;
          if (uVar6 == (uint)uVar17) {
            bVar2 = bVar3;
          }
          lVar5 = lVar1;
        } while (bVar2);
        puVar16 = (ulong *)((long)param_1 + lVar1);
LAB_109d58a9c:
        *puVar16 = uVar8;
        iVar10 = iVar10 + 1;
        if (iVar10 == 8) {
          return puVar9 + 1 == param_2;
        }
      }
      lVar12 = lVar12 + 8;
      puVar16 = puVar9 + 1;
      puVar19 = puVar9;
    } while (puVar9 + 1 != param_2);
  }
  return true;
}



/* Entry: 109d58b8c; end: 109d58cb3;  */

undefined8 * FUN_109d58b8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d4e80c(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109d56754(param_1,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d58cb4; end: 109d58d57;  */

undefined8 FUN_109d58cb4(byte *param_1,int param_2,long *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  
  pbVar3 = param_1 + 8;
  if ((*param_1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 0) {
      uVar2 = 0;
      pbVar5 = (byte *)0x0;
      goto LAB_109d58cf8;
    }
    pbVar3 = *(byte **)(param_1 + 8);
  }
  else {
    iVar4 = 1;
  }
  uVar6 = iVar4 - 1U & param_2 * 0x25;
  pbVar5 = pbVar3 + (ulong)uVar6 * 0x10;
  iVar8 = *(int *)pbVar5;
  if (param_2 != iVar8) {
    iVar9 = 1;
    pbVar7 = (byte *)0x0;
    do {
      if (iVar8 == -1) {
        uVar2 = 0;
        if (pbVar7 != (byte *)0x0) {
          pbVar5 = pbVar7;
        }
        goto LAB_109d58cf8;
      }
      pbVar1 = pbVar5;
      if (pbVar7 != (byte *)0x0 || iVar8 != -2) {
        pbVar1 = pbVar7;
      }
      uVar6 = uVar6 + iVar9;
      iVar9 = iVar9 + 1;
      uVar6 = uVar6 & iVar4 - 1U;
      pbVar5 = pbVar3 + (ulong)uVar6 * 0x10;
      iVar8 = *(int *)pbVar5;
      pbVar7 = pbVar1;
    } while (param_2 != iVar8);
  }
  uVar2 = 1;
LAB_109d58cf8:
  *param_3 = (long)pbVar5;
  return uVar2;
}



/* Entry: 109d58d58; end: 109d5903f;  */

/* WARNING: Possible PIC construction at 0x000109d58e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d58e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d58e84) */
/* WARNING: Removing unreachable block (ram,0x000109d58e9c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7c4) */
/* WARNING: Removing unreachable block (ram,0x000109d58e34) */
/* WARNING: Removing unreachable block (ram,0x000109d58eb8) */
/* WARNING: Removing unreachable block (ram,0x000109d58e4c) */

void FUN_109d58d58(uint *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong unaff_x21;
  ulong unaff_x22;
  uint *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  uint *puStack_70;
  uint *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  uint uStack_48;
  undefined8 uStack_44;
  uint uStack_3c;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (1 < param_2) {
    uVar1 = param_2 - 1 | param_2 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 >> 0x10 | uVar1;
    param_2 = 0x40;
    if (0x40 < uVar1 + 1) {
      param_2 = uVar1 + 1;
    }
  }
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    puVar8 = *(uint **)(param_1 + 2);
    unaff_x21 = (ulong)param_1[4];
    if (param_2 < 2) {
      *param_1 = uVar1 | 1;
    }
    else {
      unaff_x22 = (ulong)param_2;
      lVar2 = (ulong)param_2 << 4;
      __ZnwmSt11align_val_t(lVar2,4);
      *(long *)(param_1 + 2) = lVar2;
      *(ulong *)(param_1 + 4) = unaff_x22;
    }
    puVar3 = puVar8 + unaff_x21 * 4;
    uStack_58 = 0x109d58e84;
    puStack_70 = puVar8;
  }
  else {
    puVar3 = &uStack_48;
    if (param_1[2] < 0xfffffffe) {
      uStack_48 = param_1[2];
      uStack_44 = *(undefined8 *)(param_1 + 3);
      uStack_3c = param_1[5];
      puVar3 = (uint *)&uStack_38;
    }
    if (1 < param_2) {
      *param_1 = uVar1 & 0xfffffffe;
      unaff_x21 = (ulong)param_2;
      lVar2 = (ulong)param_2 << 4;
      __ZnwmSt11align_val_t(lVar2,4);
      *(long *)(param_1 + 2) = lVar2;
      *(ulong *)(param_1 + 4) = unaff_x21;
    }
    puVar8 = &uStack_48;
    uStack_58 = 0x109d58e34;
    puStack_70 = puVar3;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 1;
  param_1[1] = 0;
  uStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((uVar1 & 1) == 0) {
    if (param_1[4] == 0) goto LAB_109d58f60;
    puVar4 = *(uint **)(param_1 + 2);
    puVar6 = puVar4 + (ulong)param_1[4] * 4;
  }
  else {
    puVar4 = param_1 + 2;
    puVar6 = param_1 + 6;
  }
  do {
    puVar5 = puVar4 + 4;
    *puVar4 = 0xffffffff;
    puVar4 = puVar5;
  } while (puVar5 != puVar6);
LAB_109d58f60:
  for (; puVar8 != puVar3; puVar8 = puVar8 + 4) {
    if (*puVar8 < 0xfffffffe) {
      FUN_109d58cb4(param_1,*puVar8,&puStack_88);
      *puStack_88 = *puVar8;
      uVar7 = *(undefined8 *)(puVar8 + 1);
      puStack_88[3] = puVar8[3];
      *(undefined8 *)(puStack_88 + 1) = uVar7;
      *param_1 = *param_1 + 2;
    }
  }
  return;
}



/* Entry: 109d59040; end: 109d59053;  */

void FUN_109d59040(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plStack_58;
  
  puVar2 = (ulong *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar3 = *puVar2;
  FUN_109d5915c(uVar3,(int)puVar2[2],*param_2,&plStack_58);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar1 = (uint)puVar2[2];
  if ((uint)puVar2[1] * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~(uint)puVar2[1]) - *(int *)((long)puVar2 + 0xc)) goto LAB_109d590f4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d591e8(puVar2,uVar1);
  FUN_109d5915c(*puVar2,(int)puVar2[2],*param_2,&plStack_58);
LAB_109d590f4:
  *(int *)(puVar2 + 1) = (int)puVar2[1] + 1;
  if (*plStack_58 != -0x1000) {
    *(int *)((long)puVar2 + 0xc) = *(int *)((long)puVar2 + 0xc) + -1;
  }
  *plStack_58 = *param_2;
  *(undefined4 *)(plStack_58 + 1) = 0;
  return;
}



/* Entry: 109d59054; end: 109d5915b;  */

void FUN_109d59054(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar2 = *param_1;
  FUN_109d5915c(uVar2,(int)param_1[2],*param_2,&plStack_48);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = (uint)param_1[2];
  if ((uint)param_1[1] * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~(uint)param_1[1]) - *(int *)((long)param_1 + 0xc))
    goto LAB_109d590f4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d591e8(param_1,uVar1);
  FUN_109d5915c(*param_1,(int)param_1[2],*param_2,&plStack_48);
LAB_109d590f4:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (*plStack_48 != -0x1000) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
  }
  *plStack_48 = *param_2;
  *(undefined4 *)(plStack_48 + 1) = 0;
  return;
}



/* Entry: 109d5915c; end: 109d591e7;  */

undefined8 FUN_109d5915c(long param_1,int param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    uVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = ((uint)param_3 >> 4 ^ (uint)param_3 >> 9) & param_2 - 1U;
    plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
    lVar6 = *plVar3;
    if (param_3 != lVar6) {
      iVar7 = 1;
      plVar5 = (long *)0x0;
      do {
        if (lVar6 == -0x1000) {
          uVar2 = 0;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          goto LAB_109d59190;
        }
        plVar1 = plVar3;
        if (plVar5 != (long *)0x0 || lVar6 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar4 = uVar4 + iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 & param_2 - 1U;
        plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
        lVar6 = *plVar3;
        plVar5 = plVar1;
      } while (param_3 != lVar6);
    }
    uVar2 = 1;
  }
LAB_109d59190:
  *param_4 = (long)plVar3;
  return uVar2;
}



/* Entry: 109d591e8; end: 109d5959b;  */

void FUN_109d591e8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d5915c(*param_1,*(undefined4 *)(param_1 + 2),*puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(int *)(puStack_38 + 1) = (int)puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d5959c; end: 109d595f7;  */

undefined8 * FUN_109d5959c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d55260(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109d564f8(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d595f8; end: 109d596ef;  */

/* WARNING: Removing unreachable block (ram,0x000109d59690) */

void FUN_109d595f8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **appuStack_80 [2];
  long lStack_70;
  int iStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109d31714(appuStack_80,&uStack_38);
  (**(code **)(*param_2 + 0x10))(param_2,appuStack_80);
  if (*(char *)((long)puStack_40 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*puStack_40,puStack_40[1]);
  }
  else {
    uVar2 = puStack_40[1];
    uVar1 = *puStack_40;
    param_1[2] = puStack_40[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  appuStack_80[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_48 == 1) && (lStack_70 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109d596f0; end: 109d5983f;  */

void FUN_109d596f0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (uVar1 != param_2) {
    if (uVar1 < param_2) {
      if ((ulong)param_1[2] < param_2) {
        FUN_109dffce4(param_1,param_1 + 3,param_2,1);
        uVar1 = param_1[1];
      }
      if (param_2 - uVar1 != 0) {
        _bzero(*param_1 + uVar1,param_2 - uVar1);
      }
    }
    param_1[1] = param_2;
  }
  return;
}



/* Entry: 109d59840; end: 109d5993b;  */

undefined1  [16] FUN_109d59840(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109d59920;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109d59920:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109d5993c; end: 109d59a37;  */

long * FUN_109d5993c(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)((long)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar3);
      if (lVar2 != -8 && lVar2 != 0) {
        __ZdlPvSt11align_val_t(lVar2,8);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  _free(*param_1);
  return param_1;
}



/* Entry: 109d59a38; end: 109d59a67;  */

void FUN_109d59a38(long param_1,undefined8 param_2,undefined4 param_3)

{
  _snprintf(param_2,param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 109d59a68; end: 109d59adf;  */

void FUN_109d59a68(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x10)) {
    FUN_109e05520(param_1);
  }
  lVar1 = param_2;
  __Znam();
  if ((*(int *)(param_1 + 0x38) == 1) && (*(long *)(param_1 + 0x10) != 0)) {
    __ZdaPv();
  }
  *(long *)(param_1 + 0x10) = lVar1;
  *(long *)(param_1 + 0x18) = lVar1 + param_2;
  *(long *)(param_1 + 0x20) = lVar1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 109d59ae0; end: 109d59c4b;  */

long ** FUN_109d59ae0(long *param_1,int param_2,long *param_3,undefined8 param_4,long param_5)

{
  long **pplVar1;
  long **pplVar2;
  long *plVar3;
  undefined1 *puVar4;
  long **pplVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [128];
  long lStack_138;
  undefined1 *puStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [16];
  long lStack_48;
  
  ppuVar6 = &puStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *param_1;
  uStack_d0 = 0x2000000000;
  plStack_d8 = alStack_c8;
  func_0x000109d31b50(&plStack_d8);
  if (param_2 - 0x4bU < 9) {
    func_0x000109d31b50(&plStack_d8,param_3);
    func_0x000109d31b50(&plStack_d8,(ulong)param_3 >> 0x20);
  }
  ppuVar8 = &PTR_FUN_110b40f80;
  pplVar2 = (long **)(lVar9 + 0xd8);
  pplVar5 = &plStack_d8;
  FUN_109df7e54(pplVar2,pplVar5,&puStack_e0,&PTR_FUN_110b40f80);
  if (pplVar2 == (long **)0x0) {
    if (param_2 - 0x4bU < 9) {
      pplVar2 = (long **)(lVar9 + 0x7e8);
      FUN_109d34148(pplVar2,0x18,3);
      *pplVar2 = (long *)0x0;
      *(undefined1 *)(pplVar2 + 1) = 1;
      *(int *)((long)pplVar2 + 0xc) = param_2;
      pplVar2[2] = param_3;
    }
    else {
      pplVar2 = (long **)(lVar9 + 0x7e8);
      FUN_109d34148(pplVar2,0x10,3);
      *pplVar2 = (long *)0x0;
      *(undefined1 *)(pplVar2 + 1) = 0;
      *(int *)((long)pplVar2 + 0xc) = param_2;
    }
    ppuVar8 = &PTR_FUN_110b40f80;
    pplVar5 = pplVar2;
    FUN_109df7d38(lVar9 + 0xd8,pplVar2,puStack_e0,&PTR_FUN_110b40f80);
    ppuVar6 = (undefined1 **)puStack_e0;
  }
  plVar3 = plStack_d8;
  if (plStack_d8 != alStack_c8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar2;
  }
  ___stack_chk_fail();
  if (plStack_d8 != alStack_c8) {
    _free();
  }
  __Unwind_Resume();
  ppuVar7 = &puStack_1d0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *plVar3;
  uStack_1c0 = 0x2000000000;
  puStack_1c8 = auStack_1b8;
  FUN_109df7a48(&puStack_1c8);
  if (param_5 != 0) {
    FUN_109df7a48(&puStack_1c8,ppuVar8,param_5);
  }
  pplVar2 = (long **)(lVar9 + 0xd8);
  FUN_109df7e54(pplVar2,&puStack_1c8,&puStack_1d0,&PTR_FUN_110b40f80);
  if (pplVar2 == (long **)0x0) {
    pplVar2 = (long **)(lVar9 + 0x7e8);
    FUN_109d34148(pplVar2,(undefined1 *)((long)ppuVar6 + param_5 + 0x1a),3);
    *pplVar2 = (long *)0x0;
    *(undefined1 *)(pplVar2 + 1) = 2;
    *(int *)((long)pplVar2 + 0xc) = (int)ppuVar6;
    *(int *)(pplVar2 + 2) = (int)param_5;
    pplVar1 = pplVar2 + 3;
    if (ppuVar6 != (undefined1 **)0x0) {
      _memmove(pplVar1,pplVar5,ppuVar6);
    }
    *(undefined1 *)((long)pplVar1 + ((ulong)ppuVar6 & 0xffffffff)) = 0;
    if (param_5 != 0) {
      _memmove((long)pplVar1 + ((ulong)((long)ppuVar6 + 1) & 0xffffffff),ppuVar8,param_5);
    }
    *(undefined1 *)
     ((long)pplVar1 + (ulong)(uint)((int)(undefined1 *)((long)ppuVar6 + 1) + (int)param_5)) = 0;
    FUN_109df7d38(lVar9 + 0xd8,pplVar2,puStack_1d0,&PTR_FUN_110b40f80);
    ppuVar7 = (undefined1 **)puStack_1d0;
  }
  puVar4 = puStack_1c8;
  if (puStack_1c8 != auStack_1b8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pplVar2;
  }
  ___stack_chk_fail();
  if (puStack_1c8 != auStack_1b8) {
    _free();
  }
  __Unwind_Resume();
  if (puVar4[8] == '\x02') {
    if (ppuVar7 == (undefined1 **)(ulong)*(uint *)(puVar4 + 0xc)) {
      if (*(uint *)(puVar4 + 0xc) != 0) {
        puVar4 = puVar4 + 0x18;
        _memcmp(puVar4);
        return (long **)(ulong)((int)puVar4 == 0);
      }
      return (long **)0x1;
    }
  }
  return (long **)0x0;
}



/* Entry: 109d59c4c; end: 109d59dcb;  */

undefined8 *
FUN_109d59c4c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  ppuVar4 = &puStack_f0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_1;
  uStack_e0 = 0x2000000000;
  puStack_e8 = auStack_d8;
  FUN_109df7a48(&puStack_e8);
  if (param_5 != 0) {
    FUN_109df7a48(&puStack_e8,param_4,param_5);
  }
  puVar2 = (undefined8 *)(lVar5 + 0xd8);
  FUN_109df7e54(puVar2,&puStack_e8,&puStack_f0,&PTR_FUN_110b40f80);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(lVar5 + 0x7e8);
    FUN_109d34148(puVar2,param_3 + param_5 + 0x1a,3);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 2;
    *(int *)((long)puVar2 + 0xc) = (int)param_3;
    *(int *)(puVar2 + 2) = (int)param_5;
    puVar1 = puVar2 + 3;
    if (param_3 != 0) {
      _memmove(puVar1,param_2,param_3);
    }
    *(undefined1 *)((long)puVar1 + (param_3 & 0xffffffff)) = 0;
    if (param_5 != 0) {
      _memmove((long)puVar1 + (param_3 + 1 & 0xffffffff),param_4,param_5);
    }
    *(undefined1 *)((long)puVar1 + (ulong)(uint)((int)(param_3 + 1) + (int)param_5)) = 0;
    FUN_109df7d38(lVar5 + 0xd8,puVar2,puStack_f0,&PTR_FUN_110b40f80);
    ppuVar4 = (undefined1 **)puStack_f0;
  }
  puVar3 = puStack_e8;
  if (puStack_e8 != auStack_d8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (puStack_e8 != auStack_d8) {
    _free();
  }
  __Unwind_Resume();
  if (puVar3[8] == '\x02') {
    if (ppuVar4 == (undefined1 **)(ulong)*(uint *)(puVar3 + 0xc)) {
      if (*(uint *)(puVar3 + 0xc) != 0) {
        puVar3 = puVar3 + 0x18;
        _memcmp(puVar3);
        return (undefined8 *)(ulong)((int)puVar3 == 0);
      }
      return (undefined8 *)0x1;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 109d59dcc; end: 109d59e1b;  */

bool FUN_109d59dcc(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(char *)(param_1 + 8) == '\x02') {
    if (param_3 == *(uint *)(param_1 + 0xc)) {
      if (*(uint *)(param_1 + 0xc) != 0) {
        param_1 = param_1 + 0x18;
        _memcmp(param_1);
        return (int)param_1 == 0;
      }
      return true;
    }
  }
  return false;
}



/* Entry: 109d59e1c; end: 109d59ee3;  */

/* WARNING: Possible PIC construction at 0x000109d5b7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d5b770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109df7a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d5b774) */
/* WARNING: Removing unreachable block (ram,0x000109d5b7ac) */
/* WARNING: Removing unreachable block (ram,0x000109df7a9c) */
/* WARNING: Removing unreachable block (ram,0x000109df7aa0) */
/* WARNING: Removing unreachable block (ram,0x000109df7afc) */
/* WARNING: Removing unreachable block (ram,0x000109df7aa8) */
/* WARNING: Removing unreachable block (ram,0x000109df7ab4) */
/* WARNING: Removing unreachable block (ram,0x000109df7af8) */
/* WARNING: Removing unreachable block (ram,0x000109df7b18) */
/* WARNING: Removing unreachable block (ram,0x000109df7b28) */
/* WARNING: Removing unreachable block (ram,0x000109df7b30) */
/* WARNING: Removing unreachable block (ram,0x000109df7b74) */
/* WARNING: Removing unreachable block (ram,0x000109df7b38) */
/* WARNING: Removing unreachable block (ram,0x000109df7b44) */
/* WARNING: Removing unreachable block (ram,0x000109df7b54) */

void FUN_109d59e1c(long param_1,long *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x02') {
    uVar3 = *(uint *)(param_1 + 0x10);
    unaff_x20 = (long *)(ulong)uVar3;
    FUN_109df7a48(param_2,param_1 + 0x18,*(undefined4 *)(param_1 + 0xc));
    if (uVar3 == 0) {
      return;
    }
    puVar2 = &stack0xffffffffffffffd0;
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar4 = (ulong)*(uint *)(param_2 + 1) + ((long)unaff_x20 + 3U >> 2) + 1;
    if (*(uint *)((long)param_2 + 0xc) < uVar4) {
      func_0x000107c2b01c(param_2,param_2 + 2,uVar4,4);
    }
    unaff_x30 = 0x109df7a9c;
    unaff_x19 = param_2;
  }
  else if (cVar1 == '\x01') {
    uVar3 = *(uint *)(param_1 + 0xc);
    puVar2 = &stack0xffffffffffffffe0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x109d5b774;
    unaff_x19 = *(long **)(param_1 + 0x10);
    unaff_x20 = param_2;
  }
  else if (cVar1 == '\0') {
    uVar3 = *(uint *)(param_1 + 0xc);
    puVar2 = (undefined1 *)register0x00000008;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    puVar2 = &stack0xffffffffffffffe0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x109d5b7ac;
    unaff_x19 = *(long **)(param_1 + 0x10);
    unaff_x20 = param_2;
  }
  *(long **)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  uVar4 = (ulong)*(uint *)(param_2 + 1);
  if (*(uint *)((long)param_2 + 0xc) <= *(uint *)(param_2 + 1)) {
    func_0x000107c2b01c(param_2,param_2 + 2,uVar4 + 1,4);
    uVar4 = (ulong)*(uint *)(param_2 + 1);
  }
  *(uint *)(*param_2 + uVar4 * 4) = uVar3;
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  return;
}


