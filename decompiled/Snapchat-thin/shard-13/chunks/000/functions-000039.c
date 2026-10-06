/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109df7684; end: 109df76a7;  */

undefined * FUN_109df7684(void)

{
  return &DAT_10f685520;
}



/* Entry: 109df76a8; end: 109df7783;  */

void FUN_109df76a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x30))(plVar1,0x113834571);
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  if ((int)plVar1 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
    if (*(undefined1 **)(param_3 + 0x18) == *(undefined1 **)(param_3 + 0x20)) {
      FUN_109e0560c(param_3,&DAT_10f68f57e,1);
    }
    else {
      **(undefined1 **)(param_3 + 0x20) = 10;
      *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 1;
    }
    *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000109df7764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  *param_1 = plVar2;
  return;
}



/* Entry: 109df7784; end: 109df7827;  */

void FUN_109df7784(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_2;
  uVar2 = 0x113834571;
  (**(code **)(*plVar1 + 0x30))();
  plVar3 = (long *)*param_2;
  *param_2 = 0;
  if ((int)plVar1 != 0) {
    plVar1 = plVar3;
    (**(code **)(*plVar3 + 0x20))();
    *param_3 = plVar1;
    param_3[1] = uVar2;
    *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000109df77f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 109df7828; end: 109df7857;  */

void FUN_109df7828(char *param_1,ulong param_2)

{
  code *pcVar1;
  char **ppcVar2;
  undefined **appuStack_118 [2];
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  int iStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [64];
  undefined8 uStack_78;
  char *apcStack_38 [4];
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  uStack_18 = 1;
  uStack_17 = 1;
  if (*param_1 != '\0') {
    uStack_18 = 3;
    apcStack_38[0] = param_1;
  }
  ppcVar2 = apcStack_38;
  FUN_109df7858(ppcVar2);
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(0x1132fef28);
  __ZNSt3__15mutex6unlockEv(0x1132fef28);
  uStack_c0 = 0x40;
  uStack_c8 = 0;
  puStack_d0 = auStack_b8;
  FUN_109d37ad8(appuStack_118,&puStack_d0);
  if ((ulong)((long)puStack_100 - (long)puStack_f8) < 0xc) {
    FUN_109e0560c(appuStack_118,&UNK_10f6022a7,0xc);
  }
  else {
    *(undefined4 *)(puStack_f8 + 1) = 0x203a524f;
    *puStack_f8 = 0x525245204d564c4c;
    puStack_f8 = (undefined8 *)((long)puStack_f8 + 0xc);
  }
  FUN_109e046a0(ppcVar2,appuStack_118);
  if (puStack_100 == puStack_f8) {
    FUN_109e0560c(appuStack_118,&UNK_10f6022b4,1);
  }
  else {
    *(undefined1 *)puStack_f8 = 10;
    puStack_f8 = (undefined8 *)((long)puStack_f8 + 1);
  }
  _write(2,*puStack_d8,puStack_d8[1]);
  appuStack_118[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_e0 == 1) && (lStack_108 != 0)) {
    __ZdaPv();
  }
  if (puStack_d0 != auStack_b8) {
    _free();
  }
  FUN_109dff7f8();
  if ((param_2 & 1) != 0) {
    _abort();
  }
  _exit(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109df79b0);
  (*pcVar1)();
}



/* Entry: 109df7858; end: 109df7a03;  */

void FUN_109df7858(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined **appuStack_d8 [2];
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int iStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(0x1132fef28);
  __ZNSt3__15mutex6unlockEv(0x1132fef28);
  uStack_80 = 0x40;
  uStack_88 = 0;
  puStack_90 = auStack_78;
  FUN_109d37ad8(appuStack_d8,&puStack_90);
  if ((ulong)((long)puStack_c0 - (long)puStack_b8) < 0xc) {
    FUN_109e0560c(appuStack_d8,&UNK_10f6022a7,0xc);
  }
  else {
    *(undefined4 *)(puStack_b8 + 1) = 0x203a524f;
    *puStack_b8 = 0x525245204d564c4c;
    puStack_b8 = (undefined8 *)((long)puStack_b8 + 0xc);
  }
  FUN_109e046a0(param_1,appuStack_d8);
  if (puStack_c0 == puStack_b8) {
    FUN_109e0560c(appuStack_d8,&UNK_10f6022b4,1);
  }
  else {
    *(undefined1 *)puStack_b8 = 10;
    puStack_b8 = (undefined8 *)((long)puStack_b8 + 1);
  }
  _write(2,*puStack_98,puStack_98[1]);
  appuStack_d8[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_a0 == 1) && (lStack_c8 != 0)) {
    __ZdaPv();
  }
  if (puStack_90 != auStack_78) {
    _free();
  }
  FUN_109dff7f8();
  if ((param_2 & 1) != 0) {
    _abort();
  }
  _exit(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109df79b0);
  (*pcVar1)();
}



/* Entry: 109df7a04; end: 109df7a47;  */

/* WARNING: Possible PIC construction at 0x000109df7a98: Changing call to branch */
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

void FUN_109df7a04(void)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  
  __ZNSt3__15mutex4lockEv(0x1132fef68);
  __ZNSt3__15mutex6unlockEv(0x1132fef68);
  plVar1 = (long *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar2 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  uVar3 = (ulong)*(uint *)(plVar1 + 1) + (((ulong)puVar2 & 0xffffffff) + 3 >> 2) + 1;
  if (*(uint *)((long)plVar1 + 0xc) < uVar3) {
    func_0x000107c2b01c(plVar1,plVar1 + 2,uVar3,4);
  }
  uVar3 = (ulong)*(uint *)(plVar1 + 1);
  if (*(uint *)((long)plVar1 + 0xc) <= *(uint *)(plVar1 + 1)) {
    func_0x000107c2b01c(plVar1,plVar1 + 2,uVar3 + 1,4);
    uVar3 = (ulong)*(uint *)(plVar1 + 1);
  }
  *(int *)(*plVar1 + uVar3 * 4) = (int)puVar2;
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  return;
}



/* Entry: 109df7a48; end: 109df7b83;  */

/* WARNING: Possible PIC construction at 0x000109df7a98: Changing call to branch */
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

void FUN_109df7a48(long *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1) + ((ulong)param_3 + 3 >> 2) + 1;
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,4);
  }
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1 + 1,4);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(uint *)(*param_1 + uVar1 * 4) = param_3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109df7b84; end: 109df7bdb;  */

ulong ***** FUN_109df7b84(uint param_1,undefined8 param_2,ulong *****param_3,ulong *****param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong *****pppppuVar4;
  ulong *****pppppuVar5;
  ulong *****pppppuVar6;
  ulong ****ppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  uint uVar12;
  ulong ****ppppuVar13;
  undefined8 *puVar14;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong *****pppppuVar18;
  ulong *****pppppuVar19;
  ulong uVar20;
  ulong unaff_x25;
  ulong *****unaff_x26;
  ulong ****ppppuStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulong ***apppuStack_2c8 [16];
  long lStack_248;
  ulong ****ppppuStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong ****ppppuStack_228;
  ulong ****ppppuStack_220;
  ulong ****ppppuStack_218;
  ulong ****ppppuStack_210;
  ulong ****ppppuStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  ulong ****ppppuStack_1e8;
  undefined8 uStack_1e0;
  ulong ***apppuStack_1d8 [16];
  long lStack_158;
  ulong uStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  long *plStack_138;
  ulong ****ppppuStack_130;
  ulong ****ppppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  ulong ****ppppuStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulong ***apppuStack_f8 [16];
  long lStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 *puVar15;
  
  pppppuVar18 = (ulong *****)(ulong)(param_1 + 1);
  _calloc(pppppuVar18,8);
  if (pppppuVar18 != (ulong *****)0x0) {
LAB_109df7bb8:
    pppppuVar18[param_1] = (ulong ****)0xffffffffffffffff;
    return pppppuVar18;
  }
  if (param_1 + 1 == 0) {
    pppppuVar18 = (ulong *****)0x1;
    _malloc();
    if (pppppuVar18 != (ulong *****)0x0) goto LAB_109df7bb8;
  }
  plVar2 = (long *)&UNK_10f6022b6;
  pppppuVar9 = (ulong *****)0x1;
  FUN_109df7a04();
  pcStack_28 = FUN_109df7bdc;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar16 = (ulong *****)*plVar2;
  uVar12 = *(uint *)(plVar2 + 1);
  uVar20 = (ulong)uVar12;
  pppppuVar17 = pppppuVar9;
  pppppuVar8 = pppppuVar9;
  pppppuVar18 = param_3;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_109df7b84();
  *plVar2 = (long)pppppuVar17;
  *(int *)(plVar2 + 1) = (int)pppppuVar9;
  *(undefined4 *)((long)plVar2 + 0xc) = 0;
  pppppuVar17 = (ulong *****)apppuStack_f8;
  uStack_100 = 0;
  uStack_fc = 0x20;
  pppppuVar19 = pppppuVar16;
  pppppuVar5 = param_3;
  ppppuStack_108 = (ulong ****)pppppuVar17;
  if (uVar12 != 0) {
    unaff_x25 = 0;
    do {
      pppppuVar9 = (ulong *****)pppppuVar16[unaff_x25];
      if (pppppuVar9 != (ulong *****)0x0 && ((ulong)pppppuVar9 & 1) == 0) {
        do {
          pppppuVar8 = pppppuVar9;
          uStack_100 = 0;
          pppppuVar9 = (ulong *****)*pppppuVar8;
          *pppppuVar8 = (ulong ****)0x0;
          plVar3 = plVar2;
          (*(code *)param_3[2])(plVar2,pppppuVar8,&ppppuStack_108);
          pppppuVar18 = (ulong *****)(*plVar2 + (ulong)((int)plVar2[1] - 1U & (uint)plVar3) * 8);
          param_4 = param_3;
          FUN_109df7d38(plVar2);
          unaff_x26 = pppppuVar9;
        } while (pppppuVar9 != (ulong *****)0x0 && ((ulong)pppppuVar9 & 1) == 0);
      }
      pppppuVar5 = (ulong *****)ppppuStack_108;
      uStack_100 = 0;
      unaff_x25 = unaff_x25 + 1;
    } while (unaff_x25 != uVar20);
    _free();
    pppppuVar19 = pppppuVar5;
    if (pppppuVar5 == pppppuVar17) goto LAB_109df7ce4;
  }
  pppppuVar16 = pppppuVar19;
  _free();
LAB_109df7ce4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppuVar16;
  }
  ___stack_chk_fail();
  if ((ulong *****)ppppuStack_108 != pppppuVar17) {
    _free();
  }
  pppppuVar4 = pppppuVar16;
  __Unwind_Resume();
  pcStack_118 = FUN_109df7d38;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(int *)((long)pppppuVar4 + 0xc) + 1;
  pppppuVar6 = pppppuVar4;
  pppppuVar10 = pppppuVar8;
  pppppuVar11 = param_4;
  pppppuVar19 = pppppuVar18;
  uStack_150 = uVar20;
  ppppuStack_148 = (ulong ****)pppppuVar17;
  ppppuStack_140 = (ulong ****)pppppuVar9;
  plStack_138 = plVar2;
  ppppuStack_130 = (ulong ****)pppppuVar5;
  ppppuStack_128 = (ulong ****)pppppuVar16;
  ppuStack_120 = &puStack_30;
  if ((uint)(*(int *)(pppppuVar4 + 1) * 2) < uVar12) {
    FUN_109df7bdc(pppppuVar4,*(int *)(pppppuVar4 + 1) << 1,param_4);
    pppppuVar17 = (ulong *****)apppuStack_1d8;
    uStack_1e0 = 0x2000000000;
    pppppuVar18 = &ppppuStack_1e8;
    pppppuVar5 = pppppuVar4;
    ppppuStack_1e8 = (ulong ****)pppppuVar17;
    (*(code *)param_4[2])();
    pppppuVar19 = (ulong *****)(*pppppuVar4 + (*(int *)(pppppuVar4 + 1) - 1U & (uint)pppppuVar5));
    pppppuVar6 = (ulong *****)ppppuStack_1e8;
    if ((ulong *****)ppppuStack_1e8 != pppppuVar17) {
      _free();
    }
    uVar12 = *(int *)((long)pppppuVar4 + 0xc) + 1;
    pppppuVar9 = param_4;
  }
  *(uint *)((long)pppppuVar4 + 0xc) = uVar12;
  ppppuVar7 = (ulong ****)((ulong)pppppuVar19 | 1);
  if (*pppppuVar19 != (ulong ****)0x0) {
    ppppuVar7 = *pppppuVar19;
  }
  *pppppuVar8 = ppppuVar7;
  *pppppuVar19 = (ulong ****)pppppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return pppppuVar6;
  }
  ___stack_chk_fail();
  if ((ulong *****)ppppuStack_1e8 != pppppuVar17) {
    _free();
  }
  pppppuVar5 = pppppuVar6;
  __Unwind_Resume();
  pcStack_1f8 = FUN_109df7e54;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar7 = *pppppuVar10;
  ppppuStack_240 = (ulong ****)unaff_x26;
  uStack_238 = unaff_x25;
  uStack_230 = uVar20;
  ppppuStack_228 = (ulong ****)pppppuVar17;
  ppppuStack_220 = (ulong ****)pppppuVar9;
  ppppuStack_218 = (ulong ****)pppppuVar19;
  ppppuStack_210 = (ulong ****)pppppuVar4;
  ppppuStack_208 = (ulong ****)pppppuVar6;
  pppuStack_200 = &ppuStack_120;
  FUN_109d36b58(ppppuVar7,(long)ppppuVar7 + (ulong)*(uint *)(pppppuVar10 + 1) * 4);
  ppppuVar13 = *pppppuVar5;
  iVar1 = *(int *)(pppppuVar5 + 1);
  pppppuVar17 = (ulong *****)ppppuVar13[iVar1 - 1U & (uint)ppppuVar7];
  *pppppuVar18 = (ulong ****)0x0;
  uStack_2cc = 0x20;
  ppppuStack_2d8 = apppuStack_2c8;
  for (; uStack_2d0 = 0, pppppuVar17 != (ulong *****)0x0 && ((ulong)pppppuVar17 & 1) == 0;
      pppppuVar17 = (ulong *****)*pppppuVar17) {
    pppppuVar8 = pppppuVar5;
    (*(code *)pppppuVar11[1])(pppppuVar5,pppppuVar17,pppppuVar10,ppppuVar7,&ppppuStack_2d8);
    if (((ulong)pppppuVar8 & 1) != 0) goto LAB_109df7f1c;
  }
  pppppuVar17 = (ulong *****)0x0;
  *pppppuVar18 = ppppuVar13 + (iVar1 - 1U & (uint)ppppuVar7);
LAB_109df7f1c:
  pppppuVar18 = (ulong *****)ppppuStack_2d8;
  if (ppppuStack_2d8 != apppuStack_2c8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    if (ppppuStack_2d8 != apppuStack_2c8) {
      _free();
    }
    __Unwind_Resume();
    ppppuVar7 = (ulong ****)**pppppuVar18;
    if (ppppuVar7 == (ulong ****)0x0 || ((ulong)ppppuVar7 & 1) != 0) {
      puVar14 = (undefined8 *)(((ulong)ppppuVar7 & 0xfffffffffffffffe) + 8);
      do {
        do {
          puVar15 = puVar14 + 1;
          ppppuVar7 = (ulong ****)*puVar14;
          puVar14 = puVar15;
        } while (ppppuVar7 == (ulong ****)0x0);
      } while ((ppppuVar7 != (ulong ****)0xffffffffffffffff) &&
              (ppppuVar7 == (ulong ****)0x0 || ((ulong)ppppuVar7 & 1) != 0));
    }
    *pppppuVar18 = ppppuVar7;
    return pppppuVar18;
  }
  return pppppuVar17;
}



/* Entry: 109df7bdc; end: 109df7d37;  */

ulong ***** FUN_109df7bdc(long *param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4)

{
  int iVar1;
  long *plVar2;
  ulong *****pppppuVar3;
  ulong *****pppppuVar4;
  ulong *****pppppuVar5;
  ulong ****ppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  uint uVar11;
  ulong ****ppppuVar12;
  undefined8 *puVar13;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong uVar18;
  ulong unaff_x25;
  ulong *****unaff_x26;
  ulong ****ppppuStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulong ***apppuStack_2a8 [16];
  long lStack_228;
  ulong ****ppppuStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong ****ppppuStack_208;
  ulong ****ppppuStack_200;
  ulong ****ppppuStack_1f8;
  ulong ****ppppuStack_1f0;
  ulong ****ppppuStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  ulong ****ppppuStack_1c8;
  undefined8 uStack_1c0;
  ulong ***apppuStack_1b8 [16];
  long lStack_138;
  ulong uStack_130;
  ulong ****ppppuStack_128;
  ulong ****ppppuStack_120;
  long *plStack_118;
  ulong ****ppppuStack_110;
  ulong ****ppppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  ulong ****ppppuStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong ***apppuStack_d8 [16];
  long lStack_58;
  undefined8 *puVar14;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar15 = (ulong *****)*param_1;
  uVar11 = *(uint *)(param_1 + 1);
  uVar18 = (ulong)uVar11;
  pppppuVar16 = param_2;
  pppppuVar7 = param_2;
  pppppuVar8 = param_3;
  FUN_109df7b84();
  *param_1 = (long)pppppuVar16;
  *(int *)(param_1 + 1) = (int)param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  pppppuVar16 = (ulong *****)apppuStack_d8;
  uStack_e0 = 0;
  uStack_dc = 0x20;
  pppppuVar17 = pppppuVar15;
  pppppuVar4 = param_3;
  ppppuStack_e8 = (ulong ****)pppppuVar16;
  if (uVar11 != 0) {
    unaff_x25 = 0;
    do {
      param_2 = (ulong *****)pppppuVar15[unaff_x25];
      if (param_2 != (ulong *****)0x0 && ((ulong)param_2 & 1) == 0) {
        do {
          pppppuVar7 = param_2;
          uStack_e0 = 0;
          param_2 = (ulong *****)*pppppuVar7;
          *pppppuVar7 = (ulong ****)0x0;
          plVar2 = param_1;
          (*(code *)param_3[2])(param_1,pppppuVar7,&ppppuStack_e8);
          pppppuVar8 = (ulong *****)(*param_1 + (ulong)((int)param_1[1] - 1U & (uint)plVar2) * 8);
          param_4 = param_3;
          FUN_109df7d38(param_1);
          unaff_x26 = param_2;
        } while (param_2 != (ulong *****)0x0 && ((ulong)param_2 & 1) == 0);
      }
      pppppuVar4 = (ulong *****)ppppuStack_e8;
      uStack_e0 = 0;
      unaff_x25 = unaff_x25 + 1;
    } while (unaff_x25 != uVar18);
    _free();
    pppppuVar17 = pppppuVar4;
    if (pppppuVar4 == pppppuVar16) goto LAB_109df7ce4;
  }
  pppppuVar15 = pppppuVar17;
  _free();
LAB_109df7ce4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppppuVar15;
  }
  ___stack_chk_fail();
  if ((ulong *****)ppppuStack_e8 != pppppuVar16) {
    _free();
  }
  pppppuVar3 = pppppuVar15;
  __Unwind_Resume();
  pcStack_f8 = FUN_109df7d38;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(int *)((long)pppppuVar3 + 0xc) + 1;
  pppppuVar5 = pppppuVar3;
  pppppuVar9 = pppppuVar7;
  pppppuVar10 = param_4;
  pppppuVar17 = pppppuVar8;
  uStack_130 = uVar18;
  ppppuStack_128 = (ulong ****)pppppuVar16;
  ppppuStack_120 = (ulong ****)param_2;
  plStack_118 = param_1;
  ppppuStack_110 = (ulong ****)pppppuVar4;
  ppppuStack_108 = (ulong ****)pppppuVar15;
  puStack_100 = &stack0xfffffffffffffff0;
  if ((uint)(*(int *)(pppppuVar3 + 1) * 2) < uVar11) {
    FUN_109df7bdc(pppppuVar3,*(int *)(pppppuVar3 + 1) << 1,param_4);
    pppppuVar16 = (ulong *****)apppuStack_1b8;
    uStack_1c0 = 0x2000000000;
    pppppuVar8 = &ppppuStack_1c8;
    pppppuVar4 = pppppuVar3;
    ppppuStack_1c8 = (ulong ****)pppppuVar16;
    (*(code *)param_4[2])();
    pppppuVar17 = (ulong *****)(*pppppuVar3 + (*(int *)(pppppuVar3 + 1) - 1U & (uint)pppppuVar4));
    pppppuVar5 = (ulong *****)ppppuStack_1c8;
    if ((ulong *****)ppppuStack_1c8 != pppppuVar16) {
      _free();
    }
    uVar11 = *(int *)((long)pppppuVar3 + 0xc) + 1;
    param_2 = param_4;
  }
  *(uint *)((long)pppppuVar3 + 0xc) = uVar11;
  ppppuVar6 = (ulong ****)((ulong)pppppuVar17 | 1);
  if (*pppppuVar17 != (ulong ****)0x0) {
    ppppuVar6 = *pppppuVar17;
  }
  *pppppuVar7 = ppppuVar6;
  *pppppuVar17 = (ulong ****)pppppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  if ((ulong *****)ppppuStack_1c8 != pppppuVar16) {
    _free();
  }
  pppppuVar4 = pppppuVar5;
  __Unwind_Resume();
  pcStack_1d8 = FUN_109df7e54;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar6 = *pppppuVar9;
  ppppuStack_220 = (ulong ****)unaff_x26;
  uStack_218 = unaff_x25;
  uStack_210 = uVar18;
  ppppuStack_208 = (ulong ****)pppppuVar16;
  ppppuStack_200 = (ulong ****)param_2;
  ppppuStack_1f8 = (ulong ****)pppppuVar17;
  ppppuStack_1f0 = (ulong ****)pppppuVar3;
  ppppuStack_1e8 = (ulong ****)pppppuVar5;
  ppuStack_1e0 = &puStack_100;
  FUN_109d36b58(ppppuVar6,(long)ppppuVar6 + (ulong)*(uint *)(pppppuVar9 + 1) * 4);
  ppppuVar12 = *pppppuVar4;
  iVar1 = *(int *)(pppppuVar4 + 1);
  pppppuVar16 = (ulong *****)ppppuVar12[iVar1 - 1U & (uint)ppppuVar6];
  *pppppuVar8 = (ulong ****)0x0;
  uStack_2ac = 0x20;
  ppppuStack_2b8 = apppuStack_2a8;
  for (; uStack_2b0 = 0, pppppuVar16 != (ulong *****)0x0 && ((ulong)pppppuVar16 & 1) == 0;
      pppppuVar16 = (ulong *****)*pppppuVar16) {
    pppppuVar7 = pppppuVar4;
    (*(code *)pppppuVar10[1])(pppppuVar4,pppppuVar16,pppppuVar9,ppppuVar6,&ppppuStack_2b8);
    if (((ulong)pppppuVar7 & 1) != 0) goto LAB_109df7f1c;
  }
  pppppuVar16 = (ulong *****)0x0;
  *pppppuVar8 = ppppuVar12 + (iVar1 - 1U & (uint)ppppuVar6);
LAB_109df7f1c:
  pppppuVar8 = (ulong *****)ppppuStack_2b8;
  if (ppppuStack_2b8 != apppuStack_2a8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
    ___stack_chk_fail();
    if (ppppuStack_2b8 != apppuStack_2a8) {
      _free();
    }
    __Unwind_Resume();
    ppppuVar6 = (ulong ****)**pppppuVar8;
    if (ppppuVar6 == (ulong ****)0x0 || ((ulong)ppppuVar6 & 1) != 0) {
      puVar13 = (undefined8 *)(((ulong)ppppuVar6 & 0xfffffffffffffffe) + 8);
      do {
        do {
          puVar14 = puVar13 + 1;
          ppppuVar6 = (ulong ****)*puVar13;
          puVar13 = puVar14;
        } while (ppppuVar6 == (ulong ****)0x0);
      } while ((ppppuVar6 != (ulong ****)0xffffffffffffffff) &&
              (ppppuVar6 == (ulong ****)0x0 || ((ulong)ppppuVar6 & 1) != 0));
    }
    *pppppuVar8 = ppppuVar6;
    return pppppuVar8;
  }
  return pppppuVar16;
}



/* Entry: 109df7d38; end: 109df7e53;  */

ulong * FUN_109df7d38(ulong *param_1,ulong *param_2,ulong **param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong **ppuVar9;
  ulong *unaff_x23;
  ulong *puStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulong auStack_1b8 [16];
  long lStack_138;
  ulong *puStack_d8;
  undefined8 uStack_d0;
  ulong auStack_c8 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(int *)((long)param_1 + 0xc) + 1;
  puVar1 = param_1;
  puVar4 = param_2;
  lVar5 = param_4;
  ppuVar9 = param_3;
  if ((uint)((int)param_1[1] * 2) < uVar6) {
    FUN_109df7bdc(param_1,(int)param_1[1] << 1,param_4);
    unaff_x23 = auStack_c8;
    uStack_d0 = 0x2000000000;
    param_3 = &puStack_d8;
    puStack_d8 = unaff_x23;
    (**(code **)(param_4 + 0x10))();
    ppuVar9 = (ulong **)(*param_1 + (ulong)((int)param_1[1] - 1U & (uint)puVar1) * 8);
    puVar1 = puStack_d8;
    if (puStack_d8 != unaff_x23) {
      _free();
    }
    uVar6 = *(int *)((long)param_1 + 0xc) + 1;
  }
  *(uint *)((long)param_1 + 0xc) = uVar6;
  puVar7 = (ulong *)((ulong)ppuVar9 | 1);
  if (*ppuVar9 != (ulong *)0x0) {
    puVar7 = *ppuVar9;
  }
  *param_2 = (ulong)puVar7;
  *ppuVar9 = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (puStack_d8 != unaff_x23) {
    _free();
  }
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *puVar4;
  FUN_109d36b58(uVar2,uVar2 + (ulong)(uint)puVar4[1] * 4);
  puVar7 = (ulong *)(*puVar1 + (ulong)((int)puVar1[1] - 1U & (uint)uVar2) * 8);
  puVar8 = (ulong *)*puVar7;
  *param_3 = (ulong *)0x0;
  uStack_1bc = 0x20;
  puStack_1c8 = auStack_1b8;
  for (; uStack_1c0 = 0, puVar8 != (ulong *)0x0 && ((ulong)puVar8 & 1) == 0;
      puVar8 = (ulong *)*puVar8) {
    puVar3 = puVar1;
    (**(code **)(lVar5 + 8))(puVar1,puVar8,puVar4,uVar2,&puStack_1c8);
    if (((ulong)puVar3 & 1) != 0) goto LAB_109df7f1c;
  }
  puVar8 = (ulong *)0x0;
  *param_3 = puVar7;
LAB_109df7f1c:
  puVar1 = puStack_1c8;
  if (puStack_1c8 != auStack_1b8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    if (puStack_1c8 != auStack_1b8) {
      _free();
    }
    __Unwind_Resume();
    uVar2 = *(ulong *)*puVar1;
    if (uVar2 == 0 || (uVar2 & 1) != 0) {
      puVar4 = (ulong *)((uVar2 & 0xfffffffffffffffe) + 8);
      do {
        do {
          puVar7 = puVar4 + 1;
          uVar2 = *puVar4;
          puVar4 = puVar7;
        } while (uVar2 == 0);
      } while ((uVar2 != 0xffffffffffffffff) && (uVar2 == 0 || (uVar2 & 1) != 0));
    }
    *puVar1 = uVar2;
    return puVar1;
  }
  return puVar8;
}



/* Entry: 109df7e54; end: 109df7f83;  */

ulong * FUN_109df7e54(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong auStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *param_2;
  FUN_109d36b58(lVar1,lVar1 + (ulong)*(uint *)(param_2 + 1) * 4);
  puVar3 = (ulong *)(*param_1 + (ulong)((int)param_1[1] - 1U & (uint)lVar1) * 8);
  puVar6 = (ulong *)*puVar3;
  *param_3 = 0;
  uStack_dc = 0x20;
  puStack_e8 = auStack_d8;
  for (; uStack_e0 = 0, puVar6 != (ulong *)0x0 && ((ulong)puVar6 & 1) == 0;
      puVar6 = (ulong *)*puVar6) {
    plVar2 = param_1;
    (**(code **)(param_4 + 8))(param_1,puVar6,param_2,lVar1,&puStack_e8);
    if (((ulong)plVar2 & 1) != 0) goto LAB_109df7f1c;
  }
  puVar6 = (ulong *)0x0;
  *param_3 = (long)puVar3;
LAB_109df7f1c:
  puVar3 = puStack_e8;
  if (puStack_e8 != auStack_d8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (puStack_e8 != auStack_d8) {
      _free();
    }
    __Unwind_Resume();
    uVar4 = *(ulong *)*puVar3;
    if (uVar4 == 0 || (uVar4 & 1) != 0) {
      puVar6 = (ulong *)((uVar4 & 0xfffffffffffffffe) + 8);
      do {
        do {
          puVar5 = puVar6 + 1;
          uVar4 = *puVar6;
          puVar6 = puVar5;
        } while (uVar4 == 0);
      } while ((uVar4 != 0xffffffffffffffff) && (uVar4 == 0 || (uVar4 & 1) != 0));
    }
    *puVar3 = uVar4;
    return puVar3;
  }
  return puVar6;
}



/* Entry: 109df7f84; end: 109df7fcb;  */

void FUN_109df7f84(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  uVar1 = *(ulong *)*param_1;
  if (uVar1 == 0 || (uVar1 & 1) != 0) {
    puVar2 = (ulong *)((uVar1 & 0xfffffffffffffffe) + 8);
    do {
      do {
        puVar3 = puVar2 + 1;
        uVar1 = *puVar2;
        puVar2 = puVar3;
      } while (uVar1 == 0);
    } while ((uVar1 != 0xffffffffffffffff) && (uVar1 == 0 || (uVar1 & 1) != 0));
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 109df7fcc; end: 109df843b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109df7fcc(undefined4 *param_1,char *******param_2,undefined *param_3)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  char *******pppppppcVar4;
  char ******ppppppcVar5;
  long *plVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *******pppppppcVar12;
  long *extraout_x8;
  long lVar13;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 *puVar14;
  char *pcVar15;
  char cVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char *******pppppppcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  char *******pppppppcStack_c0;
  undefined4 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  char *******pppppppcStack_90;
  undefined *puStack_88;
  uint3 uStack_80;
  undefined5 uStack_7d;
  undefined3 uStack_78;
  undefined4 uStack_75;
  undefined4 uStack_71;
  long lStack_68;
  
  puVar14 = &uStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar4 = param_2;
  puVar7 = param_3;
  if (param_3 == (undefined *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(char ********)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = 0;
LAB_109df8058:
    uStack_71 = 0;
    uStack_75 = 0;
    uStack_78 = 0;
    uStack_7d = 0;
    param_1[10] = 2;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined8 *)((long)param_1 + 0x35) = 0;
    *(ulong *)((long)param_1 + 0x2d) = (ulong)uStack_80;
    param_1[0xf] = 0;
    goto LAB_109df8140;
  }
  puVar9 = param_3;
  unaff_x21 = param_3;
  if (*(char *)param_2 == '{') {
    puVar11 = (undefined *)0x1;
    do {
      puVar10 = puVar11;
      if (param_3 == puVar10) {
        puVar10 = (undefined *)0xffffffffffffffff;
        break;
      }
      puVar11 = puVar10 + 1;
    } while (*(char *)((long)param_2 + (long)puVar10) == '{');
    puVar11 = param_3;
    if (puVar10 <= param_3) {
      puVar11 = puVar10;
    }
    if ((undefined *)0x1 < puVar11) {
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      uStack_75 = 0;
      uStack_71 = 0;
      if ((undefined *)((ulong)puVar11 >> 1) <= param_3) {
        puVar9 = (undefined *)((ulong)puVar11 >> 1);
      }
      puVar10 = param_3;
      if ((undefined *)((ulong)puVar11 & 0xfffffffffffffffe) <= param_3) {
        puVar10 = (undefined *)((ulong)puVar11 & 0xfffffffffffffffe);
      }
      uStack_7d = 0;
      uStack_78 = 0;
      *param_1 = 2;
      *(char ********)(param_1 + 2) = param_2;
      *(undefined **)(param_1 + 4) = puVar9;
      param_1[10] = 2;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined8 *)((long)param_1 + 0x35) = 0;
      *(ulong *)((long)param_1 + 0x2d) = (ulong)uStack_80;
      param_1[0xf] = 0;
      *(char **)(param_1 + 0x10) = (char *)((long)param_2 + (long)puVar10);
      *(long *)(param_1 + 0x12) = (long)param_3 - (long)puVar10;
      goto LAB_109df8140;
    }
    puVar7 = (undefined *)0x7d;
    _memchr(param_2,0x7d,param_3);
    if ((pppppppcVar4 == (char *******)0x0) ||
       (unaff_x22 = (undefined *)((long)pppppppcVar4 - (long)param_2),
       unaff_x22 == (undefined *)0xffffffffffffffff)) {
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      *param_1 = 2;
      *(char ********)(param_1 + 2) = param_2;
      *(undefined **)(param_1 + 4) = param_3;
      goto LAB_109df8058;
    }
    if (param_3 + -1 != (undefined *)0x0) {
      pppppppcVar4 = (char *******)((long)param_2 + 1);
      puVar7 = (undefined *)0x7b;
      _memchr(pppppppcVar4,0x7b,param_3 + -1);
      puVar11 = (undefined *)((long)pppppppcVar4 - (long)param_2);
      if (pppppppcVar4 == (char *******)0x0) {
        puVar11 = (undefined *)0xffffffffffffffff;
      }
      if (puVar11 < unaff_x22) {
        if (puVar11 <= param_3) {
          puVar9 = puVar11;
        }
        *(undefined8 *)(param_1 + 6) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        goto LAB_109df80a0;
      }
    }
    puVar7 = unaff_x22;
    if (unaff_x22 < (undefined *)0x2) {
      puVar7 = (undefined *)0x1;
    }
    puVar11 = param_3;
    if (unaff_x22 <= param_3) {
      puVar11 = puVar7;
    }
    puVar11 = puVar11 + -1;
    if (unaff_x22 + 1 <= param_3) {
      puVar9 = unaff_x22 + 1;
    }
    uStack_80 = (uint3)(char *)((long)param_2 + 1);
    uStack_7d = (undefined5)((ulong)((long)param_2 + 1) >> 0x18);
    uStack_78 = SUB83(puVar11,0);
    uStack_75 = (undefined4)((ulong)puVar11 >> 0x18);
    uStack_71._0_1_ = (undefined1)((ulong)puVar11 >> 0x38);
    puVar7 = &DAT_10f2fb62f;
    ppppppcVar5 = (char ******)&uStack_80;
    func_0x000109d5d4c8(ppppppcVar5,&DAT_10f2fb62f,2);
    puVar11 = &UNK_10f57e81c;
    pppppppcVar12 = (char *******)&pppppppcStack_90;
    pppppppcStack_90 = (char *******)ppppppcVar5;
    puStack_88 = puVar7;
    func_0x000109d5d4c8(pppppppcVar12,&UNK_10f57e81c,6);
    pppppppcVar4 = (char *******)&pppppppcStack_90;
    puVar7 = (undefined *)0x0;
    pppppppcStack_90 = pppppppcVar12;
    puStack_88 = puVar11;
    FUN_109e03e50(pppppppcVar4,0,&uStack_a0);
    pcVar15 = uStack_a0;
    if ((int)pppppppcVar4 == 0) {
      puVar7 = &UNK_10f57e81c;
      pppppppcVar4 = (char *******)&pppppppcStack_90;
      func_0x000109d5d4c8(pppppppcVar4,&UNK_10f57e81c,6);
      if ((puVar7 == (undefined *)0x0) || (*(char *)pppppppcVar4 != ',')) {
        cVar16 = ' ';
        uVar17 = 2;
        pcVar18 = (char *)0x0;
        pppppppcStack_90 = pppppppcVar4;
        puStack_88 = puVar7;
      }
      else {
        pppppppcStack_90 = (char *******)((long)pppppppcVar4 + 1);
        cVar16 = ' ';
        uVar17 = 2;
        puStack_88 = puVar7 + -1;
        if (puStack_88 == (undefined *)0x0) {
          pcVar18 = (char *)0x0;
        }
        else {
          if (puVar7 != (undefined *)0x2) {
            pppppppcVar12 = (char *******)((long)pppppppcVar4 + 2);
            cVar3 = *(char *)pppppppcVar12;
            if (cVar3 == '+') {
LAB_109df8324:
              cVar16 = *(char *)((long)pppppppcVar4 + 1);
              pppppppcVar12 = (char *******)((long)pppppppcVar4 + 3);
              lVar13 = -3;
            }
            else {
              if (cVar3 == '-') {
                uVar17 = 0;
                goto LAB_109df8324;
              }
              if (cVar3 == '=') {
                uVar17 = 1;
                goto LAB_109df8324;
              }
              cVar3 = *(char *)pppppppcStack_90;
              if (cVar3 != '+') {
                if (cVar3 == '-') {
                  uVar17 = 0;
                }
                else {
                  if (cVar3 != '=') goto LAB_109df8338;
                  uVar17 = 1;
                }
              }
              lVar13 = -2;
            }
            puStack_88 = puVar7 + lVar13;
            pppppppcStack_90 = pppppppcVar12;
          }
LAB_109df8338:
          pppppppcVar4 = (char *******)&pppppppcStack_90;
          FUN_109e03e50(pppppppcVar4,0,&uStack_a0);
          pcVar18 = (char *)0x0;
          if ((int)pppppppcVar4 == 0) {
            pcVar18 = uStack_a0;
          }
        }
      }
      puVar7 = &UNK_10f57e81c;
      pppppppcVar4 = (char *******)&pppppppcStack_90;
      func_0x000109d5d4c8(pppppppcVar4,&UNK_10f57e81c,6);
      pppppppcStack_90 = pppppppcVar4;
      puStack_88 = puVar7;
      if ((puVar7 == (undefined *)0x0) || (*(char *)pppppppcVar4 != ':')) {
        unaff_x22 = (undefined *)0x0;
        puVar14 = (undefined8 *)0x0;
      }
      else {
        uStack_a0 = (char *)((long)pppppppcVar4 + 1);
        puStack_98 = puVar7 + -1;
        unaff_x22 = &UNK_10f57e81c;
        func_0x000109d5d4c8(&uStack_a0,&UNK_10f57e81c,6);
        pppppppcStack_90 = (char *******)0x0;
        puStack_88 = (undefined *)0x0;
      }
      puVar7 = &UNK_10f57e81c;
      pppppppcVar4 = (char *******)&pppppppcStack_90;
      func_0x000109d5d4c8(pppppppcVar4,&UNK_10f57e81c,6);
      uVar8 = 1;
      uVar20 = CONCAT17((undefined1)uStack_71,CONCAT43(uStack_75,uStack_78));
      uVar19 = CONCAT53(uStack_7d,uStack_80);
    }
    else {
      pcVar15 = (char *)0x0;
      pcVar18 = (char *)0x0;
      uVar8 = 0;
      unaff_x22 = (undefined *)0x0;
      puVar14 = (undefined8 *)0x0;
      cVar16 = '\0';
      uStack_a0 = (char *)((ulong)uStack_a0 & 0xffffffffff000000);
      uVar19 = 0;
      uVar20 = 0;
      uVar17 = 2;
    }
    *param_1 = uVar8;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = uVar20;
    *(undefined8 *)(param_1 + 2) = uVar19;
    *(char **)(param_1 + 6) = pcVar15;
    *(char **)(param_1 + 8) = pcVar18;
    param_1[10] = uVar17;
    *(char *)(param_1 + 0xb) = cVar16;
    *(undefined2 *)((long)param_1 + 0x2d) = (undefined2)uStack_a0;
    *(undefined1 *)((long)param_1 + 0x2f) = uStack_a0._2_1_;
    *(undefined8 **)(param_1 + 0xc) = puVar14;
    *(undefined **)(param_1 + 0xe) = unaff_x22;
  }
  else {
    puVar7 = (undefined *)0x7b;
    _memchr(param_2,0x7b,param_3);
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    puVar11 = param_3;
    if ((undefined *)((long)pppppppcVar4 - (long)param_2) <= param_3) {
      puVar11 = (undefined *)((long)pppppppcVar4 - (long)param_2);
    }
    if (pppppppcVar4 != (char *******)0x0) {
      puVar9 = puVar11;
    }
LAB_109df80a0:
    uStack_71 = 0;
    uStack_75 = 0;
    uStack_7d = 0;
    uStack_78 = 0;
    *param_1 = 2;
    *(char ********)(param_1 + 2) = param_2;
    *(undefined **)(param_1 + 4) = puVar9;
    param_1[10] = 2;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined8 *)((long)param_1 + 0x35) = 0;
    *(ulong *)((long)param_1 + 0x2d) = (ulong)uStack_80;
    param_1[0xf] = 0;
  }
  *(char **)(param_1 + 0x10) = (char *)((long)param_2 + (long)puVar9);
  *(long *)(param_1 + 0x12) = (long)param_3 - (long)puVar9;
LAB_109df8140:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_a8 = FUN_109df843c;
    *extraout_x8 = (long)(extraout_x8 + 2);
    extraout_x8[1] = 0x200000000;
    uStack_110 = (ulong)uStack_110._4_4_ << 0x20;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e8 = CONCAT35(uStack_e8._5_3_,2);
    uStack_e0 = 0;
    uStack_d8 = 0;
    puStack_b0 = &stack0xfffffffffffffff0;
    puStack_c8 = unaff_x21;
    puStack_d0 = unaff_x22;
    pppppppcStack_c0 = param_2;
    puStack_b8 = param_1;
    while (puVar7 != (undefined *)0x0) {
      FUN_109df7fcc(&lStack_160,pppppppcVar4,puVar7);
      puVar7 = puStack_118;
      pppppppcVar4 = pppppppcStack_120;
      uStack_108 = uStack_158;
      uStack_110 = lStack_160;
      lVar13 = uStack_110;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_d8 = uStack_128;
      uStack_e0 = uStack_130;
      uStack_110._0_4_ = (int)lStack_160;
      bVar2 = (int)uStack_110 != 0;
      if (bVar2) {
        plVar6 = extraout_x8;
        uStack_110 = lVar13;
        FUN_109df8530(extraout_x8,&uStack_110,1);
        plVar1 = (long *)(*extraout_x8 + (ulong)*(uint *)(extraout_x8 + 1) * 0x40);
        lVar21 = plVar6[1];
        lVar13 = *plVar6;
        lVar23 = plVar6[3];
        lVar22 = plVar6[2];
        lVar24 = plVar6[4];
        lVar26 = plVar6[7];
        lVar25 = plVar6[6];
        plVar1[5] = plVar6[5];
        plVar1[4] = lVar24;
        plVar1[7] = lVar26;
        plVar1[6] = lVar25;
        plVar1[1] = lVar21;
        *plVar1 = lVar13;
        plVar1[3] = lVar23;
        plVar1[2] = lVar22;
        *(int *)(extraout_x8 + 1) = (int)extraout_x8[1] + 1;
      }
    }
    return;
  }
  return;
}



/* Entry: 109df843c; end: 109df852f;  */

void FUN_109df843c(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x200000000;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = CONCAT35(uStack_48._5_3_,2);
  uStack_40 = 0;
  uStack_38 = 0;
  while (param_3 != 0) {
    FUN_109df7fcc(&uStack_c0,param_2,param_3);
    param_3 = lStack_78;
    param_2 = uStack_80;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uVar3 = uStack_70;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    uStack_38 = uStack_88;
    uStack_40 = uStack_90;
    uStack_70._0_4_ = (int)uStack_c0;
    bVar2 = (int)uStack_70 != 0;
    if (bVar2) {
      plVar4 = param_1;
      uStack_70 = uVar3;
      FUN_109df8530(param_1,&uStack_70,1);
      plVar1 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x40);
      lVar6 = plVar4[1];
      lVar5 = *plVar4;
      lVar8 = plVar4[3];
      lVar7 = plVar4[2];
      lVar9 = plVar4[4];
      lVar11 = plVar4[7];
      lVar10 = plVar4[6];
      plVar1[5] = plVar4[5];
      plVar1[4] = lVar9;
      plVar1[7] = lVar11;
      plVar1[6] = lVar10;
      plVar1[1] = lVar6;
      *plVar1 = lVar5;
      plVar1[3] = lVar8;
      plVar1[2] = lVar7;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
  }
  return;
}



/* Entry: 109df8530; end: 109df85a3;  */

ulong FUN_109df8530(ulong *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_3 + (ulong)(uint)param_1[1];
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    uVar3 = *param_1;
    uVar2 = uVar3 + (ulong)(uint)param_1[1] * 0x40;
    if ((param_2 >= uVar3 && param_2 <= uVar2) && (param_2 < uVar3 || uVar2 != param_2)) {
      func_0x000107c2b01c(param_1,param_1 + 2,uVar1,0x40);
      param_2 = *param_1 + (param_2 - uVar3);
    }
    else {
      func_0x000107c2b01c(param_1,param_1 + 2,uVar1,0x40);
    }
  }
  return param_2;
}



/* Entry: 109df85a4; end: 109df85cf;  */

void FUN_109df85a4(void)

{
  return;
}



/* Entry: 109df85d0; end: 109df9047;  */

int * FUN_109df85d0(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  iVar21 = *param_1;
  uVar23 = param_1[1];
  uVar24 = param_1[2];
  uVar22 = param_1[3];
  do {
    iVar5 = *param_2;
    param_1[0x16] = iVar5;
    uVar1 = iVar21 + (uVar24 & uVar23 | uVar22 & (uVar23 ^ 0xffffffff)) + -0x28955b88 + iVar5;
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar23;
    iVar6 = param_2[1];
    param_1[0x17] = iVar6;
    uVar2 = uVar22 + iVar6 + -0x173848aa + (uVar23 & uVar1 | uVar24 & (uVar1 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    iVar7 = param_2[2];
    param_1[0x18] = iVar7;
    uVar3 = uVar24 + iVar7 + 0x242070db + (uVar1 & uVar2 | uVar23 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    iVar8 = param_2[3];
    param_1[0x19] = iVar8;
    uVar4 = uVar23 + iVar8 + -0x3e423112 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    iVar9 = param_2[4];
    param_1[0x1a] = iVar9;
    uVar1 = uVar1 + iVar9 + -0xa83f051 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
    iVar10 = param_2[5];
    uVar2 = uVar2 + iVar10 + 0x4787c62a + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    param_1[0x1b] = iVar10;
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    iVar11 = param_2[6];
    param_1[0x1c] = iVar11;
    uVar3 = uVar3 + iVar11 + -0x57cfb9ed + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    iVar12 = param_2[7];
    param_1[0x1d] = iVar12;
    uVar4 = uVar4 + iVar12 + -0x2b96aff + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    iVar13 = param_2[8];
    param_1[0x1e] = iVar13;
    uVar1 = uVar1 + iVar13 + 0x698098d8 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
    iVar14 = param_2[9];
    param_1[0x1f] = iVar14;
    uVar2 = uVar2 + iVar14 + -0x74bb0851 + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    iVar15 = param_2[10];
    param_1[0x20] = iVar15;
    uVar3 = uVar3 + iVar15 + -0xa44f + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    iVar16 = param_2[0xb];
    uVar4 = uVar4 + iVar16 + -0x76a32842 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    param_1[0x21] = iVar16;
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    iVar17 = param_2[0xc];
    param_1[0x22] = iVar17;
    uVar1 = uVar1 + iVar17 + 0x6b901122 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
    iVar18 = param_2[0xd];
    param_1[0x23] = iVar18;
    uVar2 = uVar2 + iVar18 + -0x2678e6d + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    iVar19 = param_2[0xe];
    param_1[0x24] = iVar19;
    uVar3 = uVar3 + iVar19 + -0x5986bc72 + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    iVar20 = param_2[0xf];
    uVar4 = uVar4 + iVar20 + 0x49b40821 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    uVar1 = iVar6 + uVar1 + -0x9e1da9e + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar11 + uVar2 + -0x3fbf4cc0 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar16 + uVar3 + 0x265e5a51 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar5 + uVar4 + -0x16493856 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar10 + uVar1 + -0x29d0efa3 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar15 + uVar2 + 0x2441453 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar20 + uVar3 + -0x275e197f + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar9 + uVar4 + -0x182c0438 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar14 + uVar1 + 0x21e1cde6 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar19 + uVar2 + -0x3cc8f82a + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar8 + uVar3 + -0xb2af279 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar13 + uVar4 + 0x455a14ed + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar18 + uVar1 + -0x561c16fb + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar7 + uVar2 + -0x3105c08 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar12 + uVar3 + 0x676f02d9 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar17 + uVar4 + -0x72d5b376 + ((uVar3 ^ uVar2) & uVar1 ^ uVar2);
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar10 + uVar1 + -0x5c6be + (uVar4 ^ uVar3 ^ uVar2);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar13 + uVar2 + -0x788e097f + (uVar1 ^ uVar4 ^ uVar3);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar16 + uVar3 + 0x6d9d6122 + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar19 + uVar4 + -0x21ac7f4 + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar6 + uVar1 + -0x5b4115bc + (uVar3 ^ uVar2 ^ uVar4);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar9 + uVar2 + 0x4bdecfa9 + (uVar4 ^ uVar3 ^ uVar1);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar12 + uVar3 + -0x944b4a0 + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar15 + uVar4 + -0x41404390 + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar18 + uVar1 + 0x289b7ec6 + (uVar3 ^ uVar2 ^ uVar4);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar5 + uVar2 + -0x155ed806 + (uVar4 ^ uVar3 ^ uVar1);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar8 + uVar3 + -0x2b10cf7b + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar11 + uVar4 + 0x4881d05 + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar14 + uVar1 + -0x262b2fc7 + (uVar3 ^ uVar2 ^ uVar4);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar17 + uVar2 + -0x1924661b + (uVar4 ^ uVar3 ^ uVar1);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar20 + uVar3 + 0x1fa27cf8 + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar7 + uVar4 + -0x3b53a99b + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar5 + uVar1 + -0xbd6ddbc + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    uVar2 = iVar12 + uVar2 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar3 = iVar19 + uVar3 + -0x546bdc59 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar4 = iVar10 + uVar4 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
    uVar1 = iVar17 + uVar1 + 0x655b59c3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    uVar2 = iVar8 + uVar2 + -0x70f3336e + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar3 = iVar15 + uVar3 + -0x100b83 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar4 = iVar6 + uVar4 + -0x7a7ba22f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
    uVar1 = iVar13 + uVar1 + 0x6fa87e4f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    uVar2 = iVar20 + uVar2 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar3 = iVar11 + uVar3 + -0x5cfebcec + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar4 = iVar18 + uVar4 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
    uVar1 = iVar9 + uVar1 + -0x8ac817e + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    uVar2 = iVar16 + uVar2 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    param_1[0x25] = iVar20;
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar3 = iVar7 + uVar3 + 0x2ad7d2bb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar4 = iVar14 + uVar4 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    iVar21 = uVar1 + iVar21;
    uVar23 = uVar3 + uVar23 + (uVar4 >> 0xb | uVar4 * 0x200000);
    uVar24 = uVar3 + uVar24;
    uVar22 = uVar2 + uVar22;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -0x40;
  } while (param_3 != 0);
  *param_1 = iVar21;
  param_1[1] = uVar23;
  param_1[2] = uVar24;
  param_1[3] = uVar22;
  return param_2;
}



/* Entry: 109df9048; end: 109df91e7;  */

void FUN_109df9048(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar2 = uVar3 + (int)param_3 & 0x1fffffff;
  iVar1 = *(int *)(param_1 + 0x10) + (int)(param_3 >> 0x1d);
  if (uVar2 < uVar3) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(uint *)(param_1 + 0x14) = uVar2;
  uVar5 = (ulong)uVar3 & 0x3f;
  lVar6 = param_2;
  if ((int)uVar5 != 0) {
    uVar7 = 0x40 - uVar5;
    lVar4 = param_1 + 0x18;
    if (param_3 < uVar7) {
      lVar4 = lVar4 + uVar5;
      goto LAB_109df90f8;
    }
    _memcpy(lVar4 + uVar5,param_2,uVar7);
    lVar6 = param_2 + uVar7;
    FUN_109df85d0(param_1,lVar4,0x40);
    param_3 = param_3 - uVar7;
  }
  param_2 = lVar6;
  if (0x3f < param_3) {
    param_2 = param_1;
    FUN_109df85d0(param_1,lVar6,param_3 & 0xffffffffffffffc0);
    param_3 = param_3 & 0x3f;
  }
  lVar4 = param_1 + 0x18;
LAB_109df90f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(lVar4,param_2,param_3);
  return;
}



/* Entry: 109df91e8; end: 109df92d7;  */

undefined1 * FUN_109df91e8(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  long *extraout_x8;
  undefined8 *puVar7;
  long lStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined8 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  long lStack_48;
  
  ppuVar5 = &puStack_160;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0x100;
  uStack_158 = 0;
  puVar1 = (undefined1 *)*param_2;
  puStack_160 = auStack_148;
  func_0x000109d5975c();
  puVar2 = (undefined1 *)((long)ppuVar5 + param_1 + 9);
  puVar6 = (undefined1 *)ppuVar5;
  __Znwm();
  puVar7 = (undefined8 *)((long)(puVar2 + param_1) + 8);
  *(undefined1 ***)(puVar2 + param_1) = ppuVar5;
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar6 = puVar1;
    param_3 = (undefined1 *)ppuVar5;
    _memcpy(puVar7,puVar1,ppuVar5);
  }
  *(undefined1 *)((long)puVar7 + (long)ppuVar5) = 0;
  puVar3 = puStack_160;
  if (puStack_160 != auStack_148) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (puStack_160 != auStack_148) {
    _free();
  }
  puVar2 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_168 = FUN_109df92d8;
  puVar4 = puVar6;
  puStack_190 = puVar1;
  puStack_188 = (undefined1 *)ppuVar5;
  puStack_180 = puVar7;
  puStack_178 = puVar3;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_109df94b4(&lStack_198,puVar6,param_3,0);
  if (lStack_198 == 0) {
    __ZNSt3__116generic_categoryEv();
    *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) | 1;
    extraout_x8[1] = (long)puVar4;
    lStack_198 = 0xc;
  }
  else {
    puVar4 = *(undefined1 **)(lStack_198 + 8);
    _memcpy(puVar4,puVar2,puVar6);
    *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) & 0xfe;
  }
  *extraout_x8 = lStack_198;
  return puVar4;
}



/* Entry: 109df92d8; end: 109df9363;  */

void FUN_109df92d8(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = param_3;
  FUN_109df94b4(&lStack_38,param_3,param_4,0);
  if (lStack_38 == 0) {
    __ZNSt3__116generic_categoryEv();
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    param_1[1] = lVar1;
    lStack_38 = 0xc;
  }
  else {
    _memcpy(*(undefined8 *)(lStack_38 + 8),param_2,param_3);
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  }
  *param_1 = lStack_38;
  return;
}



/* Entry: 109df9364; end: 109df94b3;  */

void FUN_109df9364(long *param_1,long *****param_2,long *****param_3,ulong param_4,long *****param_5
                  ,ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  long lVar1;
  long ****pppplVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  long *****ppppplVar6;
  undefined1 *puVar7;
  long *****ppppplVar8;
  undefined1 **ppuVar9;
  long *****ppppplVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  ulong *extraout_x8;
  ulong uVar14;
  long *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long *****ppppplVar15;
  long *****ppppplVar16;
  int iVar17;
  long *plVar18;
  int iVar19;
  long *plStack_43a0;
  long *plStack_4398;
  undefined1 *puStack_4390;
  undefined8 uStack_4388;
  undefined8 uStack_4380;
  undefined1 auStack_4378 [16384];
  long lStack_378;
  long ****pppplStack_370;
  long ****pppplStack_368;
  ulong uStack_360;
  long ****pppplStack_358;
  undefined1 ***pppuStack_350;
  code *pcStack_348;
  long ****pppplStack_338;
  long ****pppplStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int iStack_308;
  long ****pppplStack_2f0;
  byte bStack_2e8;
  undefined7 uStack_2e7;
  byte bStack_2e0;
  long lStack_260;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  long ****pppplStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long ***appplStack_1d8 [32];
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  byte bStack_60;
  long lStack_58;
  
  iVar17 = (int)param_7;
  pplVar4 = &plStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 3;
  if ((int)param_5 == 0) {
    uVar13 = 0;
  }
  ppppplVar8 = (long *****)(ulong)uVar13;
  ppppplVar10 = (long *****)0x0;
  uVar14 = param_6;
  uVar11 = param_8;
  FUN_109dfb5f4(&uStack_68);
  if ((bStack_60 & 1) == 0) {
    plVar18 = (long *)(ulong)uStack_68;
    param_9 = param_8 & 0xffff;
    ppppplVar10 = (long *****)0xffffffffffffffff;
    FUN_109df9620(param_1,plVar18);
    iVar17 = (int)param_6;
    FUN_109dfb83c();
  }
  else {
    plStack_70 = (long *)CONCAT44(uStack_64,uStack_68);
    FUN_109df6f14();
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    *param_1 = (long)pplVar4;
    param_1[1] = (long)ppppplVar8;
    plVar18 = plStack_70;
    param_2 = ppppplVar8;
    param_3 = param_5;
    param_4 = uVar14;
    param_7 = uVar11;
    if (plStack_70 != (long *)0x0) {
      (**(code **)(*plStack_70 + 8))();
      plVar18 = plStack_70;
      param_2 = ppppplVar8;
      param_3 = param_5;
      param_4 = uVar14;
      param_7 = uVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  __Unwind_Resume();
  ppppplVar15 = &pppplStack_1f0;
  pcStack_78 = FUN_109df94b4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e0 = 0x100;
  uStack_1e8 = 0;
  ppppplVar8 = ppppplVar10;
  pppplStack_1f0 = appplStack_1d8;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000109d5975c();
  lVar1 = 0x10;
  if (((ulong)ppppplVar10 & 0x100) != 0) {
    lVar1 = 1L << ((ulong)ppppplVar10 & 0x3f);
  }
  plVar5 = (long *)((long)plVar18 + (long)ppppplVar15 + lVar1 + 0x22);
  if (plVar18 < plVar5) {
    ppppplVar10 = (long *****)PTR___ZSt7nothrow_1103469d8;
    __ZnwmRKSt9nothrow_t();
    if (plVar5 != (long *)0x0) {
      plVar5[3] = (long)ppppplVar15;
      if (ppppplVar15 != (long *****)0x0) {
        ppppplVar8 = ppppplVar15;
        _memcpy(plVar5 + 4);
        ppppplVar10 = param_2;
      }
      *(undefined1 *)((long)(plVar5 + 4) + (long)ppppplVar15) = 0;
      uVar14 = (long)plVar5 + (long)ppppplVar15 + lVar1 + 0x20 & -lVar1;
      puVar7 = (undefined1 *)(uVar14 + (long)plVar18);
      *puVar7 = 0;
      *plVar5 = (long)&PTR_FUN_110b5c400;
      plVar5[1] = uVar14;
      plVar5[2] = (long)puVar7;
    }
  }
  else {
    plVar5 = (long *)0x0;
    ppppplVar10 = ppppplVar15;
  }
  *extraout_x8 = (ulong)plVar5;
  ppppplVar15 = (long *****)pppplStack_1f0;
  if (pppplStack_1f0 != appplStack_1d8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  if (pppplStack_1f0 != appplStack_1d8) {
    _free();
  }
  __Unwind_Resume();
  pcStack_1f8 = FUN_109df9620;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_200 = &puStack_80;
  if ((bRam00000001137e7c60 & 1) == 0) {
    uVar13 = 0x137e7c60;
    ___cxa_guard_acquire();
    if (uVar13 != 0) {
      FUN_109df9bc8();
      uRam00000001137e7c58 = uVar13;
      ___cxa_guard_release(0x1137e7c60);
    }
  }
  if ((param_3 == (long *****)0xffffffffffffffff) &&
     (param_3 = ppppplVar8, ppppplVar8 == (long *****)0xffffffffffffffff)) {
    uStack_30c = 0;
    iStack_308 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    pppplStack_330 = (long ****)0x0;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_320 = 0;
    ppppplVar16 = ppppplVar15;
    _fstat(ppppplVar15,&pppplStack_2f0);
    ppppplVar8 = &pppplStack_2f0;
    func_0x000107c34f14();
    if ((int)ppppplVar16 != 0) {
      *(byte *)(extraout_x8_00 + 2) = *(byte *)(extraout_x8_00 + 2) | 1;
      *extraout_x8_00 = (long)ppppplVar16;
      extraout_x8_00[1] = (long)ppppplVar8;
      goto LAB_109df998c;
    }
    if ((iStack_308 != 2) && (iStack_308 != 5)) {
      ppppplVar16 = ppppplVar15;
      ppppplVar8 = ppppplVar10;
      FUN_109df9a74(&pppplStack_2f0,ppppplVar15,ppppplVar10);
      if ((bStack_2e0 & 1) == 0) {
        bVar12 = *(byte *)(extraout_x8_00 + 2) & 0xfe;
      }
      else {
        bVar12 = *(byte *)(extraout_x8_00 + 2) | 1;
        extraout_x8_00[1] = CONCAT71(uStack_2e7,bStack_2e8);
      }
      *(byte *)(extraout_x8_00 + 2) = bVar12;
      *extraout_x8_00 = (long)pppplStack_2f0;
      goto LAB_109df998c;
    }
    param_3 = (long *****)CONCAT44(uStack_30c,uStack_310);
    ppppplVar8 = param_3;
  }
  uVar13 = uRam00000001137e7c58;
  if ((iVar17 == 0) || ((param_7 & 1) == 0)) {
    bVar3 = ((ulong)param_3 & 0xffffffffffffc000) != 0;
    if ((iVar17 == 0) || (!bVar3 || param_3 < (long *****)(ulong)uRam00000001137e7c58)) {
      if (bVar3 && param_3 >= (long *****)(ulong)uRam00000001137e7c58) goto LAB_109df97f8;
    }
    else {
      if (ppppplVar8 == (long *****)0xffffffffffffffff) {
        uStack_30c = 0;
        iStack_308 = 0;
        uStack_310 = 0;
        uStack_328 = 0;
        pppplStack_330 = (long ****)0x0;
        uStack_318 = 0;
        uStack_314 = 0;
        uStack_320 = 0;
        ppppplVar8 = ppppplVar15;
        _fstat(ppppplVar15,&pppplStack_2f0);
        iVar17 = (int)ppppplVar8;
        func_0x000107c34f14();
        if (iVar17 != 0) goto LAB_109df96a8;
        ppppplVar8 = (long *****)CONCAT44(uStack_30c,uStack_310);
      }
      if (((long *****)((long)param_3 + param_4) == ppppplVar8) &&
         (((ulong)ppppplVar8 & (long)(int)(uVar13 - 1)) != 0)) {
LAB_109df97f8:
        pppplStack_2f0 = (long ****)((ulong)pppplStack_2f0 & 0xffffffff00000000);
        plVar5 = (long *)0x30;
        pppplStack_330 = (long ****)ppppplVar10;
        FUN_109df91e8(0x30,&pppplStack_330);
        ppppplVar16 = (long *****)(plVar5 + 3);
        *plVar5 = (long)&PTR_FUN_110b5c450;
        plVar18 = plVar5;
        FUN_109df9bc8();
        iVar17 = iVar19;
        FUN_109df9bc8();
        iVar19 = (int)plVar18;
        ppppplVar8 = ppppplVar15;
        func_0x000109dfb3f8(ppppplVar16,ppppplVar15,0,
                            (param_4 & (long)(iVar19 + -1)) + (long)param_3,param_4 & (long)-iVar17,
                            &pppplStack_2f0);
        if ((int)pppplStack_2f0 == 0) {
          ppppplVar15 = (long *****)plVar5[4];
          FUN_109df9bc8();
          lVar1 = (long)ppppplVar15 + (param_4 & (long)((int)ppppplVar16 + -1));
          plVar5[1] = lVar1;
          plVar5[2] = lVar1 + (long)param_3;
          *(byte *)(extraout_x8_00 + 2) = *(byte *)(extraout_x8_00 + 2) & 0xfe;
          *extraout_x8_00 = (long)plVar5;
          goto LAB_109df998c;
        }
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
LAB_109df96a8:
  ppppplVar8 = ppppplVar10;
  FUN_109df94b4(&pppplStack_330,param_3,ppppplVar10,param_9 & 0xffff);
  if ((long *****)pppplStack_330 == (long *****)0x0) {
    __ZNSt3__116generic_categoryEv();
    *(byte *)(extraout_x8_00 + 2) = *(byte *)(extraout_x8_00 + 2) | 1;
    *extraout_x8_00 = 0xc;
    extraout_x8_00[1] = (long)param_3;
    ppppplVar16 = param_3;
  }
  else {
    ppppplVar10 = (long *****)pppplStack_330[1];
    ppppplVar16 = (long *****)((long)pppplStack_330[2] - (long)ppppplVar10);
    do {
      if (ppppplVar16 == (long *****)0x0) goto LAB_109df9784;
      param_3 = ppppplVar15;
      ppppplVar8 = ppppplVar10;
      FUN_109dfb67c(&pppplStack_2f0,ppppplVar15,ppppplVar10,ppppplVar16,param_4);
      pppplVar2 = pppplStack_2f0;
      if ((bStack_2e8 & 1) == 0) {
        if ((long *****)pppplStack_2f0 == (long *****)0x0) {
          param_3 = ppppplVar10;
          ppppplVar8 = ppppplVar16;
          _bzero(ppppplVar10,ppppplVar16);
          if ((bStack_2e8 & 1) != 0) {
            iVar17 = 3;
            goto LAB_109df9764;
          }
          goto LAB_109df9784;
        }
        iVar17 = 0;
        ppppplVar16 = (long *****)((long)ppppplVar16 - (long)pppplStack_2f0);
        ppppplVar10 = (long *****)((long)ppppplVar10 + (long)pppplStack_2f0);
        param_4 = (long)pppplStack_2f0 + param_4;
      }
      else {
        pppplStack_2f0 = (long ****)0x0;
        pppplStack_338 = pppplVar2;
        ppppplVar6 = &pppplStack_338;
        FUN_109df6f14();
        *(byte *)(extraout_x8_00 + 2) = *(byte *)(extraout_x8_00 + 2) | 1;
        *extraout_x8_00 = (long)ppppplVar6;
        extraout_x8_00[1] = (long)ppppplVar8;
        if ((long *****)pppplStack_338 != (long *****)0x0) {
          (*(code *)(*pppplStack_338)[1])();
        }
        iVar17 = 1;
LAB_109df9764:
        param_3 = (long *****)pppplStack_2f0;
        if ((long *****)pppplStack_2f0 != (long *****)0x0) {
          (*(code *)(*pppplStack_2f0)[1])();
        }
      }
    } while (iVar17 == 0);
    if (iVar17 == 3) {
LAB_109df9784:
      *(byte *)(extraout_x8_00 + 2) = *(byte *)(extraout_x8_00 + 2) & 0xfe;
      *extraout_x8_00 = (long)pppplStack_330;
      ppppplVar16 = param_3;
    }
    else {
      ppppplVar16 = (long *****)pppplStack_330;
      if ((long *****)pppplStack_330 != (long *****)0x0) {
        (*(code *)(*pppplStack_330)[1])();
      }
    }
  }
LAB_109df998c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137e7c60);
  __Unwind_Resume(ppppplVar16);
  pcStack_348 = FUN_109df9a74;
  pppplStack_370 = (long ****)ppppplVar10;
  pppplStack_368 = (long ****)ppppplVar15;
  uStack_360 = param_4;
  pppplStack_358 = (long ****)ppppplVar16;
  pppuStack_350 = &ppuStack_200;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pplVar4 = &plStack_43a0;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4380 = 0x4000;
  uStack_4388 = 0;
  ppuVar9 = &puStack_4390;
  puStack_4390 = auStack_4378;
  FUN_109dfb034(&plStack_4398);
  if (plStack_4398 == (long *)0x0) {
    FUN_109df92d8(extraout_x8_01,puStack_4390,uStack_4388,ppppplVar8);
  }
  else {
    plStack_43a0 = plStack_4398;
    FUN_109df6f14();
    *(byte *)(extraout_x8_01 + 2) = *(byte *)(extraout_x8_01 + 2) | 1;
    *extraout_x8_01 = pplVar4;
    extraout_x8_01[1] = ppuVar9;
    if (plStack_43a0 != (long *)0x0) {
      (**(code **)(*plStack_43a0 + 8))();
    }
  }
  puVar7 = puStack_4390;
  if (puStack_4390 != auStack_4378) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_4390 != auStack_4378) {
    _free();
  }
  __Unwind_Resume(puVar7);
  return;
}



/* Entry: 109df94b4; end: 109df961f;  */

void FUN_109df94b4(ulong *param_1,undefined8 *param_2,long *****param_3,long *****param_4,
                  long *****param_5,ulong param_6,int param_7,ulong param_8,ulong param_9)

{
  long lVar1;
  long ****pppplVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *****ppppplVar6;
  long *plVar7;
  long *plVar8;
  long *****ppppplVar9;
  long **pplVar10;
  undefined1 *puVar11;
  long *****ppppplVar12;
  undefined1 **ppuVar13;
  byte bVar14;
  ulong uVar15;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  long *****ppppplVar16;
  undefined8 *puVar17;
  long *****ppppplVar18;
  int iVar19;
  long *plStack_4330;
  long *plStack_4328;
  undefined1 *puStack_4320;
  undefined8 uStack_4318;
  undefined8 uStack_4310;
  undefined1 auStack_4308 [16384];
  long lStack_308;
  long ****pppplStack_300;
  long ****pppplStack_2f8;
  ulong uStack_2f0;
  long ****pppplStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  long ****pppplStack_2c8;
  long ****pppplStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  long ****pppplStack_280;
  byte bStack_278;
  undefined7 uStack_277;
  byte bStack_270;
  long lStack_1f0;
  undefined1 *puStack_190;
  code *pcStack_188;
  long ****pppplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long ***appplStack_168 [32];
  long lStack_68;
  
  ppppplVar16 = &pppplStack_180;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = 0x100;
  uStack_178 = 0;
  ppppplVar9 = param_4;
  pppplStack_180 = appplStack_168;
  func_0x000109d5975c();
  lVar1 = 0x10;
  if (((ulong)param_4 & 0x100) != 0) {
    lVar1 = 1L << ((ulong)param_4 & 0x3f);
  }
  puVar17 = (undefined8 *)((long)param_2 + (long)ppppplVar16 + lVar1 + 0x22);
  if (param_2 < puVar17) {
    ppppplVar12 = (long *****)PTR___ZSt7nothrow_1103469d8;
    __ZnwmRKSt9nothrow_t();
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[3] = ppppplVar16;
      if (ppppplVar16 != (long *****)0x0) {
        ppppplVar9 = ppppplVar16;
        _memcpy(puVar17 + 4);
        ppppplVar12 = param_3;
      }
      *(undefined1 *)((long)(puVar17 + 4) + (long)ppppplVar16) = 0;
      uVar15 = (long)puVar17 + (long)ppppplVar16 + lVar1 + 0x20 & -lVar1;
      puVar11 = (undefined1 *)(uVar15 + (long)param_2);
      *puVar11 = 0;
      *puVar17 = &PTR_FUN_110b5c400;
      puVar17[1] = uVar15;
      puVar17[2] = puVar11;
    }
  }
  else {
    puVar17 = (undefined8 *)0x0;
    ppppplVar12 = ppppplVar16;
  }
  *param_1 = (ulong)puVar17;
  ppppplVar16 = (long *****)pppplStack_180;
  if (pppplStack_180 != appplStack_168) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (pppplStack_180 != appplStack_168) {
    _free();
  }
  __Unwind_Resume();
  pcStack_188 = FUN_109df9620;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = &stack0xfffffffffffffff0;
  if ((bRam00000001137e7c60 & 1) == 0) {
    uVar5 = 0x137e7c60;
    ___cxa_guard_acquire();
    if (uVar5 != 0) {
      FUN_109df9bc8();
      uRam00000001137e7c58 = uVar5;
      ___cxa_guard_release(0x1137e7c60);
    }
  }
  if ((param_5 == (long *****)0xffffffffffffffff) &&
     (param_5 = ppppplVar9, ppppplVar9 == (long *****)0xffffffffffffffff)) {
    uStack_29c = 0;
    iStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    pppplStack_2c0 = (long ****)0x0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 0;
    ppppplVar18 = ppppplVar16;
    _fstat(ppppplVar16,&pppplStack_280);
    ppppplVar9 = &pppplStack_280;
    func_0x000107c34f14();
    if ((int)ppppplVar18 != 0) {
      *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) | 1;
      *extraout_x8 = (long)ppppplVar18;
      extraout_x8[1] = (long)ppppplVar9;
      goto LAB_109df998c;
    }
    if ((iStack_298 != 2) && (iStack_298 != 5)) {
      ppppplVar18 = ppppplVar16;
      ppppplVar9 = ppppplVar12;
      FUN_109df9a74(&pppplStack_280,ppppplVar16,ppppplVar12);
      if ((bStack_270 & 1) == 0) {
        bVar14 = *(byte *)(extraout_x8 + 2) & 0xfe;
      }
      else {
        bVar14 = *(byte *)(extraout_x8 + 2) | 1;
        extraout_x8[1] = CONCAT71(uStack_277,bStack_278);
      }
      *(byte *)(extraout_x8 + 2) = bVar14;
      *extraout_x8 = (long)pppplStack_280;
      goto LAB_109df998c;
    }
    param_5 = (long *****)CONCAT44(uStack_29c,uStack_2a0);
    ppppplVar9 = param_5;
  }
  uVar5 = uRam00000001137e7c58;
  if ((param_7 == 0) || ((param_8 & 1) == 0)) {
    bVar3 = ((ulong)param_5 & 0xffffffffffffc000) != 0;
    if ((param_7 == 0) || (!bVar3 || param_5 < (long *****)(ulong)uRam00000001137e7c58)) {
      if (bVar3 && param_5 >= (long *****)(ulong)uRam00000001137e7c58) goto LAB_109df97f8;
    }
    else {
      if (ppppplVar9 == (long *****)0xffffffffffffffff) {
        uStack_29c = 0;
        iStack_298 = 0;
        uStack_2a0 = 0;
        uStack_2b8 = 0;
        pppplStack_2c0 = (long ****)0x0;
        uStack_2a8 = 0;
        uStack_2a4 = 0;
        uStack_2b0 = 0;
        ppppplVar9 = ppppplVar16;
        _fstat(ppppplVar16,&pppplStack_280);
        iVar4 = (int)ppppplVar9;
        func_0x000107c34f14();
        if (iVar4 != 0) goto LAB_109df96a8;
        ppppplVar9 = (long *****)CONCAT44(uStack_29c,uStack_2a0);
      }
      if (((long *****)((long)param_5 + param_6) == ppppplVar9) &&
         (((ulong)ppppplVar9 & (long)(int)(uVar5 - 1)) != 0)) {
LAB_109df97f8:
        pppplStack_280 = (long ****)((ulong)pppplStack_280 & 0xffffffff00000000);
        plVar7 = (long *)0x30;
        pppplStack_2c0 = (long ****)ppppplVar12;
        FUN_109df91e8(0x30,&pppplStack_2c0);
        ppppplVar18 = (long *****)(plVar7 + 3);
        *plVar7 = (long)&PTR_FUN_110b5c450;
        plVar8 = plVar7;
        FUN_109df9bc8();
        iVar4 = iVar19;
        FUN_109df9bc8();
        iVar19 = (int)plVar8;
        ppppplVar9 = ppppplVar16;
        func_0x000109dfb3f8(ppppplVar18,ppppplVar16,0,
                            (param_6 & (long)(iVar19 + -1)) + (long)param_5,param_6 & (long)-iVar4,
                            &pppplStack_280);
        if ((int)pppplStack_280 == 0) {
          ppppplVar16 = (long *****)plVar7[4];
          FUN_109df9bc8();
          lVar1 = (long)ppppplVar16 + (param_6 & (long)((int)ppppplVar18 + -1));
          plVar7[1] = lVar1;
          plVar7[2] = lVar1 + (long)param_5;
          *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) & 0xfe;
          *extraout_x8 = (long)plVar7;
          goto LAB_109df998c;
        }
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
LAB_109df96a8:
  ppppplVar9 = ppppplVar12;
  FUN_109df94b4(&pppplStack_2c0,param_5,ppppplVar12,param_9 & 0xffff);
  if ((long *****)pppplStack_2c0 == (long *****)0x0) {
    __ZNSt3__116generic_categoryEv();
    *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) | 1;
    *extraout_x8 = 0xc;
    extraout_x8[1] = (long)param_5;
    ppppplVar18 = param_5;
  }
  else {
    ppppplVar12 = (long *****)pppplStack_2c0[1];
    ppppplVar18 = (long *****)((long)pppplStack_2c0[2] - (long)ppppplVar12);
    do {
      if (ppppplVar18 == (long *****)0x0) goto LAB_109df9784;
      param_5 = ppppplVar16;
      ppppplVar9 = ppppplVar12;
      FUN_109dfb67c(&pppplStack_280,ppppplVar16,ppppplVar12,ppppplVar18,param_6);
      pppplVar2 = pppplStack_280;
      if ((bStack_278 & 1) == 0) {
        if ((long *****)pppplStack_280 == (long *****)0x0) {
          param_5 = ppppplVar12;
          ppppplVar9 = ppppplVar18;
          _bzero(ppppplVar12,ppppplVar18);
          if ((bStack_278 & 1) != 0) {
            iVar19 = 3;
            goto LAB_109df9764;
          }
          goto LAB_109df9784;
        }
        iVar19 = 0;
        ppppplVar18 = (long *****)((long)ppppplVar18 - (long)pppplStack_280);
        ppppplVar12 = (long *****)((long)ppppplVar12 + (long)pppplStack_280);
        param_6 = (long)pppplStack_280 + param_6;
      }
      else {
        pppplStack_280 = (long ****)0x0;
        pppplStack_2c8 = pppplVar2;
        ppppplVar6 = &pppplStack_2c8;
        FUN_109df6f14();
        *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) | 1;
        *extraout_x8 = (long)ppppplVar6;
        extraout_x8[1] = (long)ppppplVar9;
        if ((long *****)pppplStack_2c8 != (long *****)0x0) {
          (*(code *)(*pppplStack_2c8)[1])();
        }
        iVar19 = 1;
LAB_109df9764:
        param_5 = (long *****)pppplStack_280;
        if ((long *****)pppplStack_280 != (long *****)0x0) {
          (*(code *)(*pppplStack_280)[1])();
        }
      }
    } while (iVar19 == 0);
    if (iVar19 == 3) {
LAB_109df9784:
      *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) & 0xfe;
      *extraout_x8 = (long)pppplStack_2c0;
      ppppplVar18 = param_5;
    }
    else {
      ppppplVar18 = (long *****)pppplStack_2c0;
      if ((long *****)pppplStack_2c0 != (long *****)0x0) {
        (*(code *)(*pppplStack_2c0)[1])();
      }
    }
  }
LAB_109df998c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137e7c60);
  __Unwind_Resume(ppppplVar18);
  pcStack_2d8 = FUN_109df9a74;
  pppplStack_300 = (long ****)ppppplVar12;
  pppplStack_2f8 = (long ****)ppppplVar16;
  uStack_2f0 = param_6;
  pppplStack_2e8 = (long ****)ppppplVar18;
  ppuStack_2e0 = &puStack_190;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pplVar10 = &plStack_4330;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4310 = 0x4000;
  uStack_4318 = 0;
  ppuVar13 = &puStack_4320;
  puStack_4320 = auStack_4308;
  FUN_109dfb034(&plStack_4328);
  if (plStack_4328 == (long *)0x0) {
    FUN_109df92d8(extraout_x8_00,puStack_4320,uStack_4318,ppppplVar9);
  }
  else {
    plStack_4330 = plStack_4328;
    FUN_109df6f14();
    *(byte *)(extraout_x8_00 + 2) = *(byte *)(extraout_x8_00 + 2) | 1;
    *extraout_x8_00 = pplVar10;
    extraout_x8_00[1] = ppuVar13;
    if (plStack_4330 != (long *)0x0) {
      (**(code **)(*plStack_4330 + 8))();
    }
  }
  puVar11 = puStack_4320;
  if (puStack_4320 != auStack_4308) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_4320 != auStack_4308) {
    _free();
  }
  __Unwind_Resume(puVar11);
  return;
}



/* Entry: 109df9620; end: 109df9a73;  */

void FUN_109df9620(long *param_1,long *****param_2,long *****param_3,long *****param_4,
                  long *****param_5,ulong param_6,int param_7,ulong param_8,undefined2 param_9)

{
  long lVar1;
  long ****pppplVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *****ppppplVar6;
  long *plVar7;
  long *plVar8;
  long *****ppppplVar9;
  long **pplVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  byte bVar13;
  undefined8 *extraout_x8;
  long *****ppppplVar14;
  int iVar15;
  long *plStack_41b0;
  long *plStack_41a8;
  undefined1 *puStack_41a0;
  undefined8 uStack_4198;
  undefined8 uStack_4190;
  undefined1 auStack_4188 [16384];
  long lStack_188;
  long ****pppplStack_180;
  long ****pppplStack_178;
  ulong uStack_170;
  long ****pppplStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long ****pppplStack_148;
  long ****pppplStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  long ****pppplStack_100;
  byte bStack_f8;
  undefined7 uStack_f7;
  byte bStack_f0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137e7c60 & 1) == 0) {
    uVar5 = 0x137e7c60;
    ___cxa_guard_acquire();
    if (uVar5 != 0) {
      FUN_109df9bc8();
      uRam00000001137e7c58 = uVar5;
      ___cxa_guard_release(0x1137e7c60);
    }
  }
  if ((param_5 == (long *****)0xffffffffffffffff) &&
     (param_5 = param_4, param_4 == (long *****)0xffffffffffffffff)) {
    uStack_11c = 0;
    iStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    pppplStack_140 = (long ****)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    ppppplVar14 = param_2;
    _fstat(param_2,&pppplStack_100);
    ppppplVar9 = &pppplStack_100;
    func_0x000107c34f14();
    if ((int)ppppplVar14 != 0) {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      *param_1 = (long)ppppplVar14;
      param_1[1] = (long)ppppplVar9;
      goto LAB_109df998c;
    }
    if ((iStack_118 != 2) && (iStack_118 != 5)) {
      ppppplVar14 = param_2;
      ppppplVar9 = param_3;
      FUN_109df9a74(&pppplStack_100,param_2,param_3);
      if ((bStack_f0 & 1) == 0) {
        bVar13 = *(byte *)(param_1 + 2) & 0xfe;
      }
      else {
        bVar13 = *(byte *)(param_1 + 2) | 1;
        param_1[1] = CONCAT71(uStack_f7,bStack_f8);
      }
      *(byte *)(param_1 + 2) = bVar13;
      *param_1 = (long)pppplStack_100;
      goto LAB_109df998c;
    }
    param_5 = (long *****)CONCAT44(uStack_11c,uStack_120);
    param_4 = param_5;
  }
  uVar5 = uRam00000001137e7c58;
  if ((param_7 == 0) || ((param_8 & 1) == 0)) {
    bVar3 = ((ulong)param_5 & 0xffffffffffffc000) != 0;
    if ((param_7 == 0) || (!bVar3 || param_5 < (long *****)(ulong)uRam00000001137e7c58)) {
      if (bVar3 && param_5 >= (long *****)(ulong)uRam00000001137e7c58) goto LAB_109df97f8;
    }
    else {
      if (param_4 == (long *****)0xffffffffffffffff) {
        uStack_11c = 0;
        iStack_118 = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        pppplStack_140 = (long ****)0x0;
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_130 = 0;
        ppppplVar9 = param_2;
        _fstat(param_2,&pppplStack_100);
        iVar4 = (int)ppppplVar9;
        func_0x000107c34f14();
        if (iVar4 != 0) goto LAB_109df96a8;
        param_4 = (long *****)CONCAT44(uStack_11c,uStack_120);
      }
      if (((long *****)((long)param_5 + param_6) == param_4) &&
         (((ulong)param_4 & (long)(int)(uVar5 - 1)) != 0)) {
LAB_109df97f8:
        pppplStack_100 = (long ****)((ulong)pppplStack_100 & 0xffffffff00000000);
        plVar7 = (long *)0x30;
        pppplStack_140 = (long ****)param_3;
        FUN_109df91e8(0x30,&pppplStack_140);
        ppppplVar14 = (long *****)(plVar7 + 3);
        *plVar7 = (long)&PTR_FUN_110b5c450;
        plVar8 = plVar7;
        FUN_109df9bc8();
        iVar4 = iVar15;
        FUN_109df9bc8();
        iVar15 = (int)plVar8;
        ppppplVar9 = param_2;
        func_0x000109dfb3f8(ppppplVar14,param_2,0,(param_6 & (long)(iVar15 + -1)) + (long)param_5,
                            param_6 & (long)-iVar4,&pppplStack_100);
        if ((int)pppplStack_100 == 0) {
          param_2 = (long *****)plVar7[4];
          FUN_109df9bc8();
          lVar1 = (long)param_2 + (param_6 & (long)((int)ppppplVar14 + -1));
          plVar7[1] = lVar1;
          plVar7[2] = lVar1 + (long)param_5;
          *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
          *param_1 = (long)plVar7;
          goto LAB_109df998c;
        }
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
LAB_109df96a8:
  ppppplVar9 = param_3;
  FUN_109df94b4(&pppplStack_140,param_5,param_3,param_9);
  if ((long *****)pppplStack_140 == (long *****)0x0) {
    __ZNSt3__116generic_categoryEv();
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    *param_1 = 0xc;
    param_1[1] = (long)param_5;
    ppppplVar14 = param_5;
  }
  else {
    param_3 = (long *****)pppplStack_140[1];
    ppppplVar14 = (long *****)((long)pppplStack_140[2] - (long)param_3);
    do {
      if (ppppplVar14 == (long *****)0x0) goto LAB_109df9784;
      param_5 = param_2;
      ppppplVar9 = param_3;
      FUN_109dfb67c(&pppplStack_100,param_2,param_3,ppppplVar14,param_6);
      pppplVar2 = pppplStack_100;
      if ((bStack_f8 & 1) == 0) {
        if ((long *****)pppplStack_100 == (long *****)0x0) {
          param_5 = param_3;
          ppppplVar9 = ppppplVar14;
          _bzero(param_3,ppppplVar14);
          if ((bStack_f8 & 1) != 0) {
            iVar15 = 3;
            goto LAB_109df9764;
          }
          goto LAB_109df9784;
        }
        iVar15 = 0;
        ppppplVar14 = (long *****)((long)ppppplVar14 - (long)pppplStack_100);
        param_3 = (long *****)((long)param_3 + (long)pppplStack_100);
        param_6 = (long)pppplStack_100 + param_6;
      }
      else {
        pppplStack_100 = (long ****)0x0;
        pppplStack_148 = pppplVar2;
        ppppplVar6 = &pppplStack_148;
        FUN_109df6f14();
        *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
        *param_1 = (long)ppppplVar6;
        param_1[1] = (long)ppppplVar9;
        if ((long *****)pppplStack_148 != (long *****)0x0) {
          (*(code *)(*pppplStack_148)[1])();
        }
        iVar15 = 1;
LAB_109df9764:
        param_5 = (long *****)pppplStack_100;
        if ((long *****)pppplStack_100 != (long *****)0x0) {
          (*(code *)(*pppplStack_100)[1])();
        }
      }
    } while (iVar15 == 0);
    if (iVar15 == 3) {
LAB_109df9784:
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
      *param_1 = (long)pppplStack_140;
      ppppplVar14 = param_5;
    }
    else {
      ppppplVar14 = (long *****)pppplStack_140;
      if ((long *****)pppplStack_140 != (long *****)0x0) {
        (*(code *)(*pppplStack_140)[1])();
      }
    }
  }
LAB_109df998c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137e7c60);
  __Unwind_Resume(ppppplVar14);
  pcStack_158 = FUN_109df9a74;
  pppplStack_180 = (long ****)param_3;
  pppplStack_178 = (long ****)param_2;
  uStack_170 = param_6;
  pppplStack_168 = (long ****)ppppplVar14;
  puStack_160 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pplVar10 = &plStack_41b0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4190 = 0x4000;
  uStack_4198 = 0;
  ppuVar12 = &puStack_41a0;
  puStack_41a0 = auStack_4188;
  FUN_109dfb034(&plStack_41a8);
  if (plStack_41a8 == (long *)0x0) {
    FUN_109df92d8(extraout_x8,puStack_41a0,uStack_4198,ppppplVar9);
  }
  else {
    plStack_41b0 = plStack_41a8;
    FUN_109df6f14();
    *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) | 1;
    *extraout_x8 = pplVar10;
    extraout_x8[1] = ppuVar12;
    if (plStack_41b0 != (long *)0x0) {
      (**(code **)(*plStack_41b0 + 8))();
    }
  }
  puVar11 = puStack_41a0;
  if (puStack_41a0 != auStack_4188) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_41a0 != auStack_4188) {
    _free();
  }
  __Unwind_Resume(puVar11);
  return;
}



/* Entry: 109df9a74; end: 109df9ba7;  */

void FUN_109df9a74(undefined8 param_1,undefined8 param_2)

{
  long **pplVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 *extraout_x8;
  long *plStack_4060;
  long *plStack_4058;
  undefined1 *puStack_4050;
  undefined8 uStack_4048;
  undefined8 uStack_4040;
  undefined1 auStack_4038 [16384];
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pplVar1 = &plStack_4060;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4040 = 0x4000;
  uStack_4048 = 0;
  ppuVar3 = &puStack_4050;
  puStack_4050 = auStack_4038;
  FUN_109dfb034(&plStack_4058);
  if (plStack_4058 == (long *)0x0) {
    FUN_109df92d8(extraout_x8,puStack_4050,uStack_4048,param_2);
  }
  else {
    plStack_4060 = plStack_4058;
    FUN_109df6f14();
    *(byte *)(extraout_x8 + 2) = *(byte *)(extraout_x8 + 2) | 1;
    *extraout_x8 = pplVar1;
    extraout_x8[1] = ppuVar3;
    if (plStack_4060 != (long *)0x0) {
      (**(code **)(*plStack_4060 + 8))();
    }
  }
  puVar2 = puStack_4050;
  if (puStack_4050 != auStack_4038) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_4050 != auStack_4038) {
    _free();
  }
  __Unwind_Resume(puVar2);
  return;
}



/* Entry: 109df9ba8; end: 109df9bc7;  */

void FUN_109df9ba8(void)

{
  return;
}



/* Entry: 109df9bc8; end: 109df9c7f;  */

void FUN_109df9bc8(void)

{
  ulong uVar1;
  undefined1 uStack_41;
  long *plStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109dfb778(&uStack_38);
  if ((bStack_30 & 1) == 0) {
    uVar1 = (ulong)uStack_38;
  }
  else {
    plStack_40 = (long *)CONCAT44(uStack_34,uStack_38);
    FUN_109d3b1b0(&plStack_40,&uStack_41);
    if (plStack_40 != (long *)0x0) {
      (**(code **)(*plStack_40 + 8))();
    }
    uVar1 = 0x1000;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail(uVar1);
  if (plStack_40 != (long *)0x0) {
    (**(code **)(*plStack_40 + 8))();
  }
  __Unwind_Resume(uVar1);
  return;
}



/* Entry: 109df9c80; end: 109df9c9b;  */

void FUN_109df9c80(void)

{
  return;
}



/* Entry: 109df9c9c; end: 109df9cdb;  */

undefined8 * FUN_109df9c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b5c450;
  if (param_1[4] != 0) {
    _munmap(param_1[4],param_1[3]);
  }
  return param_1;
}



/* Entry: 109df9cdc; end: 109df9d1b;  */

void FUN_109df9cdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b5c450;
  if (param_1[4] != 0) {
    _munmap(param_1[4],param_1[3]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109df9d1c; end: 109df9d4b;  */

undefined1  [16] FUN_109df9d1c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(param_1 + 0x30);
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}



/* Entry: 109df9d4c; end: 109df9edf;  */

void FUN_109df9d4c(long param_1,ulong param_2,ulong param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar10;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar5 = param_4;
    uVar7 = param_3;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    iVar9 = (int)uVar5;
    param_4 = uVar5;
    if (param_2 >> 0x20 == 0) {
      param_3 = uVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
      {
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar6 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -200) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3030303030303030;
        lVar8 = 0x7f;
        do {
          uVar3 = (uint)param_2;
          *(byte *)((long)register0x00000008 + lVar8 + -0xd0) =
               (char)param_2 + (char)((param_2 & 0xffffffff) / 10) * -10 | 0x30;
          lVar6 = lVar6 + 0x100000000;
          lVar8 = lVar8 + -1;
          param_2 = (param_2 & 0xffffffff) / 10;
        } while (9 < uVar3);
        uVar10 = lVar6 >> 0x20;
        if (param_5 != 0) {
          puVar2 = *(undefined1 **)(param_1 + 0x20);
          if (puVar2 < *(undefined1 **)(param_1 + 0x18)) {
            *(undefined1 **)(param_1 + 0x20) = puVar2 + 1;
            *puVar2 = 0x2d;
          }
          else {
            FUN_109e05570();
          }
        }
        uVar4 = uVar10;
        if (iVar9 != 1) {
          for (; uVar4 < uVar7; uVar4 = uVar4 + 1) {
            puVar2 = *(undefined1 **)(param_1 + 0x20);
            if (puVar2 < *(undefined1 **)(param_1 + 0x18)) {
              *(undefined1 **)(param_1 + 0x20) = puVar2 + 1;
              *puVar2 = 0x30;
            }
            else {
              FUN_109e05570();
            }
          }
        }
        uVar4 = uVar10;
        if (iVar9 == 1) {
          FUN_109dfa43c();
        }
        else {
          FUN_109e0560c();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x48)
           ) {
          ___stack_chk_fail();
          *(undefined1 **)((long)register0x00000008 + -0x100) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(ulong *)((long)register0x00000008 + -0xf8) = uVar10;
          *(ulong *)((long)register0x00000008 + -0xf0) = uVar7;
          *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar5;
          *(undefined1 **)((long)register0x00000008 + -0xe0) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(code **)((long)register0x00000008 + -0xd8) = FUN_109dfa43c;
          uVar7 = uVar4 - 1;
          FUN_109e0560c();
          if (uVar4 != (uVar7 - ((uVar7 / 3) * 2 + uVar7 / 3)) + 1) {
            lVar6 = (uVar7 / 3) * -3;
            do {
              puVar2 = *(undefined1 **)(param_1 + 0x20);
              if (puVar2 < *(undefined1 **)(param_1 + 0x18)) {
                *(undefined1 **)(param_1 + 0x20) = puVar2 + 1;
                *puVar2 = 0x2c;
              }
              else {
                FUN_109e05570();
              }
              FUN_109e0560c();
              lVar6 = lVar6 + 3;
            } while (lVar6 != 0);
          }
          return;
        }
        return;
      }
    }
    else {
      lVar6 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3030303030303030;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x50);
      lVar8 = 0x7f;
      *(undefined8 *)((long)register0x00000008 + -200) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3030303030303030;
      do {
        *(byte *)((long)register0x00000008 + lVar8 + -0xd0) =
             (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
        lVar6 = lVar6 + 0x100000000;
        lVar8 = lVar8 + -1;
        bVar1 = 9 < param_2;
        param_2 = param_2 / 10;
      } while (bVar1);
      unaff_x21 = lVar6 >> 0x20;
      if (param_5 != 0) {
        puVar2 = *(undefined1 **)(param_1 + 0x20);
        if (puVar2 < *(undefined1 **)(param_1 + 0x18)) {
          *(undefined1 **)(param_1 + 0x20) = puVar2 + 1;
          *puVar2 = 0x2d;
        }
        else {
          FUN_109e05570();
        }
      }
      if ((iVar9 != 1) && (unaff_x21 < uVar7)) {
        unaff_x23 = 0x30;
        unaff_x24 = unaff_x21;
        do {
          puVar2 = *(undefined1 **)(param_1 + 0x20);
          if (puVar2 < *(undefined1 **)(param_1 + 0x18)) {
            *(undefined1 **)(param_1 + 0x20) = puVar2 + 1;
            *puVar2 = 0x30;
          }
          else {
            FUN_109e05570();
          }
          unaff_x24 = unaff_x24 + 1;
        } while (unaff_x24 < uVar7);
      }
      param_2 = (long)unaff_x22 - unaff_x21;
      param_3 = unaff_x21;
      if (iVar9 == 1) {
        FUN_109dfa43c();
      }
      else {
        FUN_109e0560c();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
      {
        return;
      }
    }
    unaff_x30 = FUN_109df9ee0;
    ___stack_chk_fail();
    unaff_x19 = uVar5;
    unaff_x20 = uVar7;
    if ((long)param_2 < 0) {
      param_2 = -param_2;
      param_5 = 1;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    }
    else {
      param_5 = 0;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    }
  } while( true );
}



/* Entry: 109df9ee0; end: 109df9ef7;  */

void FUN_109df9ee0(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar11;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar6 = param_4;
    uVar8 = param_3;
    bVar2 = (long)param_2 < 0;
    if (bVar2) {
      param_2 = -param_2;
    }
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    iVar10 = (int)uVar6;
    param_4 = uVar6;
    if (param_2 >> 0x20 == 0) {
      param_3 = uVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
      {
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar7 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -200) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3030303030303030;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3030303030303030;
        lVar9 = 0x7f;
        do {
          uVar4 = (uint)param_2;
          *(byte *)((long)register0x00000008 + lVar9 + -0xd0) =
               (char)param_2 + (char)((param_2 & 0xffffffff) / 10) * -10 | 0x30;
          lVar7 = lVar7 + 0x100000000;
          lVar9 = lVar9 + -1;
          param_2 = (param_2 & 0xffffffff) / 10;
        } while (9 < uVar4);
        uVar11 = lVar7 >> 0x20;
        if (bVar2) {
          puVar3 = *(undefined1 **)(param_1 + 0x20);
          if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
            *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
            *puVar3 = 0x2d;
          }
          else {
            FUN_109e05570();
          }
        }
        uVar5 = uVar11;
        if (iVar10 != 1) {
          for (; uVar5 < uVar8; uVar5 = uVar5 + 1) {
            puVar3 = *(undefined1 **)(param_1 + 0x20);
            if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
              *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
              *puVar3 = 0x30;
            }
            else {
              FUN_109e05570();
            }
          }
        }
        uVar5 = uVar11;
        if (iVar10 == 1) {
          FUN_109dfa43c();
        }
        else {
          FUN_109e0560c();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x48)
           ) {
          ___stack_chk_fail();
          *(undefined1 **)((long)register0x00000008 + -0x100) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(ulong *)((long)register0x00000008 + -0xf8) = uVar11;
          *(ulong *)((long)register0x00000008 + -0xf0) = uVar8;
          *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar6;
          *(undefined1 **)((long)register0x00000008 + -0xe0) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(code **)((long)register0x00000008 + -0xd8) = FUN_109dfa43c;
          uVar8 = uVar5 - 1;
          FUN_109e0560c();
          if (uVar5 != (uVar8 - ((uVar8 / 3) * 2 + uVar8 / 3)) + 1) {
            lVar7 = (uVar8 / 3) * -3;
            do {
              puVar3 = *(undefined1 **)(param_1 + 0x20);
              if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
                *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
                *puVar3 = 0x2c;
              }
              else {
                FUN_109e05570();
              }
              FUN_109e0560c();
              lVar7 = lVar7 + 3;
            } while (lVar7 != 0);
          }
          return;
        }
        return;
      }
    }
    else {
      lVar7 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3030303030303030;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x50);
      lVar9 = 0x7f;
      *(undefined8 *)((long)register0x00000008 + -200) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3030303030303030;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3030303030303030;
      do {
        *(byte *)((long)register0x00000008 + lVar9 + -0xd0) =
             (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
        lVar7 = lVar7 + 0x100000000;
        lVar9 = lVar9 + -1;
        bVar1 = 9 < param_2;
        param_2 = param_2 / 10;
      } while (bVar1);
      unaff_x21 = lVar7 >> 0x20;
      if (bVar2) {
        puVar3 = *(undefined1 **)(param_1 + 0x20);
        if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
          *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
          *puVar3 = 0x2d;
        }
        else {
          FUN_109e05570();
        }
      }
      if ((iVar10 != 1) && (unaff_x21 < uVar8)) {
        unaff_x23 = 0x30;
        unaff_x24 = unaff_x21;
        do {
          puVar3 = *(undefined1 **)(param_1 + 0x20);
          if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
            *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
            *puVar3 = 0x30;
          }
          else {
            FUN_109e05570();
          }
          unaff_x24 = unaff_x24 + 1;
        } while (unaff_x24 < uVar8);
      }
      param_2 = (long)unaff_x22 - unaff_x21;
      param_3 = unaff_x21;
      if (iVar10 == 1) {
        FUN_109dfa43c();
      }
      else {
        FUN_109e0560c();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
      {
        return;
      }
    }
    unaff_x30 = FUN_109df9ee0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    unaff_x19 = uVar6;
    unaff_x20 = uVar8;
  } while( true );
}



/* Entry: 109df9ef8; end: 109df9ff3;  */

undefined1 *
FUN_109df9ef8(undefined1 *param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  char *pcVar12;
  long lVar13;
  byte bVar14;
  byte *pbVar15;
  long lVar16;
  char *pcVar17;
  undefined1 *unaff_x23;
  double dVar18;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1d8;
  undefined **appuStack_180 [2];
  long lStack_170;
  undefined2 *puStack_168;
  undefined2 *puStack_160;
  int iStack_148;
  char acStack_138 [32];
  undefined1 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  pcVar17 = (char *)&uStack_a0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_5 & 1) == 0) {
    param_4 = 0;
  }
  else if (0x7f < param_4) {
    param_4 = 0x80;
  }
  uVar8 = 0x43U - (int)LZCOUNT(param_2) >> 2;
  uVar9 = param_3 & 0xfffffffe;
  uVar3 = uVar9;
  if (uVar9 != 2) {
    uVar3 = 0;
  }
  dVar18 = 1.398043286095289e-76;
  uStack_38 = 0x3030303030303030;
  uStack_40 = 0x3030303030303030;
  uStack_28 = 0x3030303030303030;
  uStack_30 = 0x3030303030303030;
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  uStack_58 = 0x3030303030303030;
  uStack_60 = 0x3030303030303030;
  uStack_48 = 0x3030303030303030;
  uStack_50 = 0x3030303030303030;
  uStack_78 = 0x3030303030303030;
  uStack_80 = 0x3030303030303030;
  uStack_68 = 0x3030303030303030;
  uStack_70 = 0x3030303030303030;
  uVar4 = (uint)param_4;
  if ((uint)param_4 <= uVar8 + uVar3) {
    uVar4 = uVar8 + uVar3;
  }
  pcVar12 = (char *)(ulong)uVar4;
  uStack_98 = 0x3030303030303030;
  uStack_a0 = 0x3030303030303030;
  uStack_88 = 0x3030303030303030;
  uStack_90 = 0x3030303030303030;
  if (uVar9 == 2) {
    uStack_a0 = 0x3030303030307830;
  }
  if (param_2 != 0) {
    bVar14 = 0;
    if ((param_3 & 0xfffffffd) != 0) {
      bVar14 = 0x20;
    }
    pbVar15 = (byte *)(pcVar12 + (long)&uStack_a0);
    do {
      pbVar15 = pbVar15 + -1;
      *pbVar15 = (&UNK_10e043c4d)[param_2 & 0xf] | bVar14;
      bVar1 = 0xf < param_2;
      param_2 = param_2 >> 4;
    } while (bVar1);
  }
  FUN_109e0560c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar10 = (int)param_4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (uint)pcVar17;
  pcVar5 = (char *)0x6;
  if (1 < uVar9) {
    pcVar5 = (char *)0x2;
  }
  pcVar6 = pcVar12;
  if ((param_4 & 1) == 0) {
    pcVar6 = pcVar5;
  }
  if (NAN(dVar18)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
      pcVar17 = "nan";
      pcVar12 = (char *)0x3;
LAB_109dfa09c:
      if ((char *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x20)) < pcVar12) {
        FUN_109e0560c(param_1,pcVar17,pcVar12);
      }
      else if (pcVar12 != (char *)0x0) {
        _memcpy(*(long *)(param_1 + 0x20),pcVar17,pcVar12);
        *(char **)(param_1 + 0x20) = pcVar12 + *(long *)(param_1 + 0x20);
      }
      return param_1;
    }
  }
  else if (ABS(dVar18) == INFINITY) {
    pcVar12 = (char *)0x3;
    if ((long)dVar18 < 0) {
      pcVar12 = (char *)0x4;
    }
    pcVar17 = "-INF";
    if ((long)dVar18 >= 0) {
      pcVar17 = "INF";
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) goto LAB_109dfa09c;
  }
  else {
    uVar11 = 0x45;
    if (uVar9 != 1) {
      uVar11 = 0x66;
    }
    uVar2 = 0x65;
    if (uVar9 != 0) {
      uVar2 = uVar11;
    }
    unaff_x23 = auStack_100;
    uStack_108 = 8;
    lStack_110 = 0;
    puStack_118 = unaff_x23;
    FUN_109d37ad8(appuStack_180,&puStack_118);
    if ((ulong)((long)puStack_168 - (long)puStack_160) < 2) {
      FUN_109e0560c(appuStack_180,&UNK_10f6022cd,2);
    }
    else {
      *puStack_160 = 0x2e25;
      puStack_160 = puStack_160 + 1;
    }
    iVar10 = 0;
    param_5 = 0;
    FUN_109df9d4c(appuStack_180,pcVar6,0);
    if (puStack_160 < puStack_168) {
      *(undefined1 *)puStack_160 = uVar2;
      puStack_160 = (undefined2 *)((long)puStack_160 + 1);
    }
    else {
      FUN_109e05570(appuStack_180,uVar2);
    }
    func_0x000109d3acdc(&puStack_118,0);
    lStack_110 = lStack_110 + -1;
    _snprintf(acStack_138,0x20,puStack_118);
    pcVar12 = acStack_138;
    _strlen();
    pcVar17 = acStack_138;
    FUN_109d2f728(param_1);
    if (uVar9 == 3) {
      puVar7 = *(undefined1 **)(param_1 + 0x20);
      if (puVar7 < *(undefined1 **)(param_1 + 0x18)) {
        *(undefined1 **)(param_1 + 0x20) = puVar7 + 1;
        *puVar7 = 0x25;
      }
      else {
        pcVar17 = (char *)0x25;
        FUN_109e05570(param_1);
      }
    }
    appuStack_180[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_148 == 1) && (lStack_170 != 0)) {
      __ZdaPv();
    }
    param_1 = puStack_118;
    if (puStack_118 != unaff_x23) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  appuStack_180[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_148 == 1) && (lStack_170 != 0)) {
    __ZdaPv();
  }
  if (puStack_118 != unaff_x23) {
    _free();
  }
  __Unwind_Resume();
  lVar13 = 0;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f8 = 0x3030303030303030;
  uStack_200 = 0x3030303030303030;
  uStack_1e8 = 0x3030303030303030;
  uStack_1f0 = 0x3030303030303030;
  uStack_218 = 0x3030303030303030;
  uStack_220 = 0x3030303030303030;
  uStack_208 = 0x3030303030303030;
  uStack_210 = 0x3030303030303030;
  uStack_238 = 0x3030303030303030;
  uStack_240 = 0x3030303030303030;
  uStack_228 = 0x3030303030303030;
  uStack_230 = 0x3030303030303030;
  uStack_258 = 0x3030303030303030;
  uStack_260 = 0x3030303030303030;
  uStack_248 = 0x3030303030303030;
  uStack_250 = 0x3030303030303030;
  lVar16 = 0x7f;
  do {
    uVar9 = (uint)pcVar17;
    *(byte *)((long)&uStack_260 + lVar16) =
         (char)pcVar17 + (char)(((ulong)pcVar17 & 0xffffffff) / 10) * -10 | 0x30;
    lVar13 = lVar13 + 0x100000000;
    lVar16 = lVar16 + -1;
    pcVar17 = (char *)(((ulong)pcVar17 & 0xffffffff) / 10);
  } while (9 < uVar9);
  pcVar17 = (char *)(lVar13 >> 0x20);
  if (param_5 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x20);
    if (puVar7 < *(undefined1 **)(param_1 + 0x18)) {
      *(undefined1 **)(param_1 + 0x20) = puVar7 + 1;
      *puVar7 = 0x2d;
    }
    else {
      FUN_109e05570();
    }
  }
  pcVar5 = pcVar17;
  if (iVar10 != 1) {
    for (; pcVar5 < pcVar12; pcVar5 = pcVar5 + 1) {
      puVar7 = *(undefined1 **)(param_1 + 0x20);
      if (puVar7 < *(undefined1 **)(param_1 + 0x18)) {
        *(undefined1 **)(param_1 + 0x20) = puVar7 + 1;
        *puVar7 = 0x30;
      }
      else {
        FUN_109e05570();
      }
    }
  }
  if (iVar10 == 1) {
    FUN_109dfa43c();
  }
  else {
    FUN_109e0560c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcVar12 = pcVar17 + -1;
  FUN_109e0560c();
  if (pcVar17 != pcVar12 + (1 - (((ulong)pcVar12 / 3) * 2 + (ulong)pcVar12 / 3))) {
    lVar13 = ((ulong)pcVar12 / 3) * -3;
    do {
      puVar7 = *(undefined1 **)(param_1 + 0x20);
      if (puVar7 < *(undefined1 **)(param_1 + 0x18)) {
        *(undefined1 **)(param_1 + 0x20) = puVar7 + 1;
        *puVar7 = 0x2c;
      }
      else {
        FUN_109e05570();
      }
      FUN_109e0560c();
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0);
  }
  return param_1;
}



/* Entry: 109df9ff4; end: 109dfa2e7;  */

undefined1 *
FUN_109df9ff4(double param_1,undefined1 *param_2,char *param_3,char *param_4,uint param_5,
             int param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *unaff_x23;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  undefined **appuStack_e0 [2];
  long lStack_d0;
  undefined2 *puStack_c8;
  undefined2 *puStack_c0;
  int iStack_a8;
  char acStack_98 [32];
  undefined1 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (uint)param_3;
  pcVar8 = (char *)0x6;
  if (1 < uVar3) {
    pcVar8 = (char *)0x2;
  }
  pcVar6 = param_4;
  if ((param_5 & 1) == 0) {
    pcVar6 = pcVar8;
  }
  if (NAN(param_1)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      param_3 = "nan";
      param_4 = (char *)0x3;
LAB_109dfa09c:
      if ((char *)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x20)) < param_4) {
        FUN_109e0560c(param_2,param_3,param_4);
      }
      else if (param_4 != (char *)0x0) {
        _memcpy(*(long *)(param_2 + 0x20),param_3,param_4);
        *(char **)(param_2 + 0x20) = param_4 + *(long *)(param_2 + 0x20);
      }
      return param_2;
    }
  }
  else if (ABS(param_1) == INFINITY) {
    param_4 = (char *)0x3;
    if ((long)param_1 < 0) {
      param_4 = (char *)0x4;
    }
    param_3 = "-INF";
    if ((long)param_1 >= 0) {
      param_3 = "INF";
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto LAB_109dfa09c;
  }
  else {
    uVar4 = 0x45;
    if (uVar3 != 1) {
      uVar4 = 0x66;
    }
    uVar1 = 0x65;
    if (uVar3 != 0) {
      uVar1 = uVar4;
    }
    unaff_x23 = auStack_60;
    uStack_68 = 8;
    lStack_70 = 0;
    puStack_78 = unaff_x23;
    FUN_109d37ad8(appuStack_e0,&puStack_78);
    if ((ulong)((long)puStack_c8 - (long)puStack_c0) < 2) {
      FUN_109e0560c(appuStack_e0,&UNK_10f6022cd,2);
    }
    else {
      *puStack_c0 = 0x2e25;
      puStack_c0 = puStack_c0 + 1;
    }
    param_5 = 0;
    param_6 = 0;
    FUN_109df9d4c(appuStack_e0,pcVar6,0);
    if (puStack_c0 < puStack_c8) {
      *(undefined1 *)puStack_c0 = uVar1;
      puStack_c0 = (undefined2 *)((long)puStack_c0 + 1);
    }
    else {
      FUN_109e05570(appuStack_e0,uVar1);
    }
    func_0x000109d3acdc(&puStack_78,0);
    lStack_70 = lStack_70 + -1;
    _snprintf(acStack_98,0x20,puStack_78);
    param_4 = acStack_98;
    _strlen();
    param_3 = acStack_98;
    FUN_109d2f728(param_2);
    if (uVar3 == 3) {
      puVar2 = *(undefined1 **)(param_2 + 0x20);
      if (puVar2 < *(undefined1 **)(param_2 + 0x18)) {
        *(undefined1 **)(param_2 + 0x20) = puVar2 + 1;
        *puVar2 = 0x25;
      }
      else {
        param_3 = (char *)0x25;
        FUN_109e05570(param_2);
      }
    }
    appuStack_e0[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_a8 == 1) && (lStack_d0 != 0)) {
      __ZdaPv();
    }
    param_2 = puStack_78;
    if (puStack_78 != unaff_x23) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  appuStack_e0[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_a8 == 1) && (lStack_d0 != 0)) {
    __ZdaPv();
  }
  if (puStack_78 != unaff_x23) {
    _free();
  }
  __Unwind_Resume();
  lVar5 = 0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = 0x3030303030303030;
  uStack_160 = 0x3030303030303030;
  uStack_148 = 0x3030303030303030;
  uStack_150 = 0x3030303030303030;
  uStack_178 = 0x3030303030303030;
  uStack_180 = 0x3030303030303030;
  uStack_168 = 0x3030303030303030;
  uStack_170 = 0x3030303030303030;
  uStack_198 = 0x3030303030303030;
  uStack_1a0 = 0x3030303030303030;
  uStack_188 = 0x3030303030303030;
  uStack_190 = 0x3030303030303030;
  uStack_1b8 = 0x3030303030303030;
  uStack_1c0 = 0x3030303030303030;
  uStack_1a8 = 0x3030303030303030;
  uStack_1b0 = 0x3030303030303030;
  lVar7 = 0x7f;
  do {
    uVar3 = (uint)param_3;
    *(byte *)((long)&uStack_1c0 + lVar7) =
         (char)param_3 + (char)(((ulong)param_3 & 0xffffffff) / 10) * -10 | 0x30;
    lVar5 = lVar5 + 0x100000000;
    lVar7 = lVar7 + -1;
    param_3 = (char *)(((ulong)param_3 & 0xffffffff) / 10);
  } while (9 < uVar3);
  pcVar8 = (char *)(lVar5 >> 0x20);
  if (param_6 != 0) {
    puVar2 = *(undefined1 **)(param_2 + 0x20);
    if (puVar2 < *(undefined1 **)(param_2 + 0x18)) {
      *(undefined1 **)(param_2 + 0x20) = puVar2 + 1;
      *puVar2 = 0x2d;
    }
    else {
      FUN_109e05570();
    }
  }
  pcVar6 = pcVar8;
  if (param_5 != 1) {
    for (; pcVar6 < param_4; pcVar6 = pcVar6 + 1) {
      puVar2 = *(undefined1 **)(param_2 + 0x20);
      if (puVar2 < *(undefined1 **)(param_2 + 0x18)) {
        *(undefined1 **)(param_2 + 0x20) = puVar2 + 1;
        *puVar2 = 0x30;
      }
      else {
        FUN_109e05570();
      }
    }
  }
  if (param_5 == 1) {
    FUN_109dfa43c();
  }
  else {
    FUN_109e0560c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return param_2;
  }
  ___stack_chk_fail();
  pcVar6 = pcVar8 + -1;
  FUN_109e0560c();
  if (pcVar8 != pcVar6 + (1 - (((ulong)pcVar6 / 3) * 2 + (ulong)pcVar6 / 3))) {
    lVar5 = ((ulong)pcVar6 / 3) * -3;
    do {
      puVar2 = *(undefined1 **)(param_2 + 0x20);
      if (puVar2 < *(undefined1 **)(param_2 + 0x18)) {
        *(undefined1 **)(param_2 + 0x20) = puVar2 + 1;
        *puVar2 = 0x2c;
      }
      else {
        FUN_109e05570();
      }
      FUN_109e0560c();
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0);
  }
  return param_2;
}



/* Entry: 109dfa2e8; end: 109dfa43b;  */

void FUN_109dfa2e8(long param_1,ulong param_2,ulong param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar3 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x3030303030303030;
  uStack_70 = 0x3030303030303030;
  uStack_58 = 0x3030303030303030;
  uStack_60 = 0x3030303030303030;
  uStack_88 = 0x3030303030303030;
  uStack_90 = 0x3030303030303030;
  uStack_78 = 0x3030303030303030;
  uStack_80 = 0x3030303030303030;
  uStack_a8 = 0x3030303030303030;
  uStack_b0 = 0x3030303030303030;
  uStack_98 = 0x3030303030303030;
  uStack_a0 = 0x3030303030303030;
  uStack_c8 = 0x3030303030303030;
  uStack_d0 = 0x3030303030303030;
  uStack_b8 = 0x3030303030303030;
  uStack_c0 = 0x3030303030303030;
  lVar5 = 0x7f;
  do {
    uVar2 = (uint)param_2;
    *(byte *)((long)&uStack_d0 + lVar5) =
         (char)param_2 + (char)((param_2 & 0xffffffff) / 10) * -10 | 0x30;
    lVar3 = lVar3 + 0x100000000;
    lVar5 = lVar5 + -1;
    param_2 = (param_2 & 0xffffffff) / 10;
  } while (9 < uVar2);
  uVar6 = lVar3 >> 0x20;
  if (param_5 != 0) {
    puVar1 = *(undefined1 **)(param_1 + 0x20);
    if (puVar1 < *(undefined1 **)(param_1 + 0x18)) {
      *(undefined1 **)(param_1 + 0x20) = puVar1 + 1;
      *puVar1 = 0x2d;
    }
    else {
      FUN_109e05570(param_1,0x2d);
    }
  }
  uVar4 = uVar6;
  if (param_4 != 1) {
    for (; uVar4 < param_3; uVar4 = uVar4 + 1) {
      puVar1 = *(undefined1 **)(param_1 + 0x20);
      if (puVar1 < *(undefined1 **)(param_1 + 0x18)) {
        *(undefined1 **)(param_1 + 0x20) = puVar1 + 1;
        *puVar1 = 0x30;
      }
      else {
        FUN_109e05570();
      }
    }
  }
  if (param_4 == 1) {
    FUN_109dfa43c();
  }
  else {
    FUN_109e0560c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    uVar4 = uVar6 - 1;
    FUN_109e0560c();
    if (uVar6 != (uVar4 - ((uVar4 / 3) * 2 + uVar4 / 3)) + 1) {
      lVar3 = (uVar4 / 3) * -3;
      do {
        puVar1 = *(undefined1 **)(param_1 + 0x20);
        if (puVar1 < *(undefined1 **)(param_1 + 0x18)) {
          *(undefined1 **)(param_1 + 0x20) = puVar1 + 1;
          *puVar1 = 0x2c;
        }
        else {
          FUN_109e05570();
        }
        FUN_109e0560c();
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0);
    }
    return;
  }
  return;
}



/* Entry: 109dfa43c; end: 109dfa637;  */

void FUN_109dfa43c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_3 - 1;
  lVar5 = uVar4 - ((uVar4 / 3) * 2 + uVar4 / 3);
  uVar1 = lVar5 + 1;
  uVar2 = param_3;
  if (uVar1 <= param_3) {
    uVar2 = lVar5 + 1;
  }
  FUN_109e0560c(param_1,param_2,uVar2);
  if (param_3 != uVar1) {
    lVar5 = (uVar4 / 3) * -3;
    do {
      puVar3 = *(undefined1 **)(param_1 + 0x20);
      if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
        *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
        *puVar3 = 0x2c;
      }
      else {
        FUN_109e05570();
      }
      FUN_109e0560c();
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109dfa638; end: 109dfa763;  */

ulong * FUN_109dfa638(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = (uint)param_1[5];
  uVar5 = uVar1;
  FUN_109dfa764(uVar1,uVar2,uVar3);
  uVar6 = param_1[4];
  if (uVar6 != 0) {
    uVar7 = uVar6;
    do {
      uVar8 = uVar5 + 1;
      if ((uVar5 + 1 == uVar7) ||
         (cVar4 = *(char *)((uVar1 - 1) + uVar7), uVar8 = uVar7,
         cVar4 != '/' && (uVar3 < 2 || cVar4 != '\\'))) goto LAB_109dfa6b8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar8 = 0;
LAB_109dfa6b8:
  if ((uVar2 == 0 || uVar6 != uVar2) ||
     (((cVar4 = *(char *)(uVar1 + uVar2 + -1), cVar4 != '/' && ((uVar3 < 2 || (cVar4 != '\\')))) ||
      (uVar5 != 0xffffffffffffffff && uVar8 - 1 <= uVar5)))) {
    uVar5 = uVar2;
    if (uVar8 <= uVar2) {
      uVar5 = uVar8;
    }
    uVar6 = uVar1;
    FUN_109dfa86c(uVar1,uVar5,uVar3);
    uVar5 = uVar2;
    if (uVar6 <= uVar2) {
      uVar5 = uVar6;
    }
    uVar7 = uVar5;
    if (uVar5 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar8 <= uVar2) {
      uVar2 = uVar7;
    }
    param_1[2] = uVar1 + uVar5;
    param_1[3] = uVar2 - uVar5;
    param_1[4] = uVar6;
  }
  else {
    param_1[2] = (ulong)&DAT_10f62a9de;
    param_1[3] = 1;
    param_1[4] = uVar2 - 1;
  }
  return param_1;
}



/* Entry: 109dfa764; end: 109dfa86b;  */

undefined1 * FUN_109dfa764(char *param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char **ppcVar3;
  char cVar4;
  char *pcStack_20;
  ulong uStack_18;
  
  ppcVar3 = &pcStack_20;
  if (param_3 < 2) {
LAB_109dfa7a8:
    if (3 < param_2) {
      cVar4 = *param_1;
      if ((cVar4 == '/' || 1 < param_3 && cVar4 == '\\') && (cVar4 == param_1[1])) {
        if ((param_1[2] != '/') && (param_3 < 2 || param_1[2] != '\\')) {
          uVar1 = 1;
          if (1 < param_3) {
            uVar1 = 2;
          }
          pcVar2 = "\\/";
          if (param_3 < 2) {
            pcVar2 = "/";
          }
          pcStack_20 = param_1;
          uStack_18 = param_2;
          FUN_109e03b70(&pcStack_20,pcVar2,uVar1,2);
          return (undefined1 *)ppcVar3;
        }
      }
      goto LAB_109dfa838;
    }
  }
  else if (2 < param_2) {
    if (param_1[1] == ':') {
      if (param_1[2] == '/') {
        return (undefined1 *)0x2;
      }
      if (param_1[2] == '\\') {
        return (undefined1 *)0x2;
      }
    }
    goto LAB_109dfa7a8;
  }
  if (param_2 == 0) {
    return (undefined1 *)0xffffffffffffffff;
  }
  cVar4 = *param_1;
LAB_109dfa838:
  if (cVar4 == '/') {
    return (undefined1 *)0x0;
  }
  if (param_3 < 2 || cVar4 != '\\') {
    return (undefined1 *)0xffffffffffffffff;
  }
  return (undefined1 *)0x0;
}



/* Entry: 109dfa86c; end: 109dfaa4f;  */

undefined1 * FUN_109dfa86c(char *param_1,undefined1 *param_2,uint param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  char *pcStack_40;
  undefined1 *puStack_38;
  
  ppcVar3 = &pcStack_40;
  if (param_2 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0xffffffffffffffff;
  }
  else {
    puVar4 = param_2 + -1;
    if (param_1[(long)puVar4] == '/') {
      return puVar4;
    }
    if ((1 < param_3) && (param_1[(long)puVar4] == '\\')) {
      return puVar4;
    }
  }
  uVar2 = 1;
  if (1 < param_3) {
    uVar2 = 2;
  }
  pcVar1 = "\\/";
  if (param_3 < 2) {
    pcVar1 = "/";
  }
  pcStack_40 = param_1;
  puStack_38 = param_2;
  func_0x000109e03c68(&pcStack_40,pcVar1,uVar2,puVar4);
  if ((1 < param_3) && (ppcVar3 == (char **)0xffffffffffffffff)) {
    if (param_2 + -2 <= param_2) {
      param_2 = param_2 + -2;
    }
    do {
      if (param_2 == (undefined1 *)0x0) goto LAB_109dfa958;
      ppcVar3 = (char **)(param_2 + -1);
      pcVar1 = param_1 + -1 + (long)param_2;
      param_2 = (undefined1 *)ppcVar3;
    } while (*pcVar1 != ':');
  }
  if (ppcVar3 == (char **)0xffffffffffffffff) {
LAB_109dfa958:
    puVar4 = (undefined1 *)0x0;
  }
  else {
    if (ppcVar3 == (char **)0x1) {
      if (*param_1 == '/') {
        return (undefined1 *)0x0;
      }
      if (1 < param_3 && *param_1 == '\\') {
        return (undefined1 *)0x0;
      }
    }
    puVar4 = (undefined1 *)((long)ppcVar3 + 1);
  }
  return puVar4;
}



/* Entry: 109dfaa50; end: 109dfadeb;  */

undefined1 *
FUN_109dfaa50(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 **ppuVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 *puVar16;
  long *plVar17;
  long lVar18;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [128];
  long lStack_218;
  long *plStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined2 uStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  long alStack_190 [8];
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [32];
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [32];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0x20;
  uStack_a0 = 0;
  uStack_d0 = 0x20;
  uStack_d8 = 0;
  uStack_108 = 0x20;
  uStack_110 = 0;
  uStack_140 = 0x20;
  uStack_148 = 0;
  uStack_198 = 0x400000000;
  lVar13 = param_2;
  plStack_1a0 = alStack_190;
  puStack_150 = auStack_138;
  puStack_118 = auStack_100;
  puStack_e0 = auStack_c8;
  puStack_a8 = auStack_90;
  if (1 < *(byte *)(param_3 + 0x20)) {
    ppuVar11 = &puStack_a8;
    func_0x000109d5975c(param_3,ppuVar11);
    func_0x000109d30b00(&plStack_1a0,param_3,ppuVar11);
    lVar13 = param_3;
  }
  if (1 < *(byte *)(param_4 + 0x20)) {
    ppuVar11 = &puStack_e0;
    func_0x000109d5975c(param_4,ppuVar11);
    func_0x000109d30b00(&plStack_1a0,param_4,ppuVar11);
    lVar13 = param_4;
  }
  if (1 < *(byte *)(param_5 + 0x20)) {
    ppuVar11 = &puStack_118;
    func_0x000109d5975c(param_5,ppuVar11);
    func_0x000109d30b00(&plStack_1a0,param_5,ppuVar11);
    lVar13 = param_5;
  }
  if (1 < *(byte *)(param_6 + 0x20)) {
    ppuVar11 = &puStack_150;
    func_0x000109d5975c(param_6,ppuVar11);
    func_0x000109d30b00(&plStack_1a0,param_6,ppuVar11);
    lVar13 = param_6;
  }
  puVar12 = auStack_90;
  puVar9 = auStack_c8;
  puVar16 = auStack_100;
  puVar10 = auStack_138;
  if ((int)uStack_198 != 0) {
    uVar15 = (uint)param_2;
    uVar1 = 1;
    if (1 < uVar15) {
      uVar1 = 2;
    }
    pcVar2 = "\\/";
    if (uVar15 < 2) {
      pcVar2 = "/";
    }
    uVar14 = 0x5c;
    if (uVar15 != 3) {
      uVar14 = 0x2f;
    }
    lVar18 = (uStack_198 & 0xffffffff) << 4;
    plVar17 = plStack_1a0;
    puStack_1e8 = auStack_138;
    puStack_1e0 = auStack_100;
    puStack_1d8 = auStack_c8;
    puStack_1d0 = auStack_90;
    do {
      lVar13 = param_1[1];
      if ((lVar13 == 0) ||
         (cVar4 = *(char *)(*param_1 + lVar13 + -1), cVar4 != '/' && (uVar15 < 2 || cVar4 != '\\')))
      {
        if (plVar17[1] == 0) {
          if (lVar13 != 0) goto LAB_109dfac90;
        }
        else if ((*(char *)*plVar17 != '/') &&
                ((*(char *)*plVar17 != '\\' || uVar15 < 2) && lVar13 != 0)) {
LAB_109dfac90:
          uStack_1a8 = 0x105;
          lStack_1c8 = *plVar17;
          plVar7 = &lStack_1c8;
          lStack_1c0 = plVar17[1];
          FUN_109dfadec(plVar7,param_2);
          if (((ulong)plVar7 & 1) == 0) {
            func_0x000109d3acdc(param_1,uVar14);
          }
        }
        lVar13 = *plVar17;
        FUN_109d3a7bc(param_1,lVar13,lVar13 + plVar17[1]);
      }
      else {
        plVar6 = plVar17;
        func_0x000109e03bec(plVar17,pcVar2,uVar1,0);
        plVar3 = (long *)plVar17[1];
        plVar7 = plVar3;
        if (plVar6 <= plVar3) {
          plVar7 = plVar6;
        }
        lVar13 = *plVar17 + (long)plVar7;
        FUN_109d3a7bc(param_1,lVar13,*plVar17 + (long)plVar3);
      }
      plVar17 = plVar17 + 2;
      lVar18 = lVar18 + -0x10;
      puVar12 = puStack_1d0;
      puVar9 = puStack_1d8;
      puVar16 = puStack_1e0;
      puVar10 = puStack_1e8;
    } while (lVar18 != 0);
  }
  if (plStack_1a0 != alStack_190) {
    _free(plStack_1a0);
  }
  if (puStack_150 != puVar10) {
    _free();
  }
  if (puStack_118 != puVar16) {
    _free();
  }
  if (puStack_e0 != puVar9) {
    _free();
  }
  puVar8 = puStack_a8;
  if (puStack_a8 != puVar12) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  puStack_1e8 = puVar10;
  puStack_1e0 = puVar16;
  puStack_1d8 = puVar9;
  puStack_1d0 = puVar12;
  if (plStack_1a0 != alStack_190) {
    _free();
  }
  if (puStack_150 != puStack_1e8) {
    _free();
  }
  if (puStack_118 != puStack_1e0) {
    _free();
  }
  if (puStack_e0 != puStack_1d8) {
    _free();
  }
  if (puStack_a8 != puStack_1d0) {
    _free();
  }
  __Unwind_Resume(puVar8);
  ppuVar11 = &puStack_2b0;
  pcStack_1f8 = FUN_109dfadec;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2a0 = 0x80;
  uStack_2a8 = 0;
  puStack_2b0 = auStack_298;
  plStack_210 = param_1;
  puStack_208 = puVar8;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x000109d5975c();
  func_0x000109dfa974();
  puVar12 = (undefined1 *)ppuVar11;
  if (puStack_2b0 != auStack_298) {
    _free();
  }
  puVar9 = (undefined1 *)(ulong)(ppuVar11 != (undefined1 **)0x0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return puVar9;
  }
  ___stack_chk_fail();
  if (puStack_2b0 != auStack_298) {
    _free();
  }
  __Unwind_Resume();
  puVar16 = puVar9;
  func_0x000109dfa86c();
  if (puVar12 == (undefined1 *)0x0) {
    bVar5 = false;
  }
  else {
    bVar5 = puVar9[(long)puVar16] == '/' || 1 < (uint)lVar13 && puVar9[(long)puVar16] == '\\';
  }
  puVar10 = puVar9;
  FUN_109dfa764(puVar9,puVar12,lVar13);
  if (puVar16 != (undefined1 *)0x0) {
    do {
      if (((puVar10 != (undefined1 *)0xffffffffffffffff) && (puVar16 <= puVar10)) ||
         ((puVar9 + -1)[(long)puVar16] != '/' &&
          ((uint)lVar13 < 2 || (puVar9 + -1)[(long)puVar16] != '\\'))) break;
      puVar16 = puVar16 + -1;
    } while (puVar16 != (undefined1 *)0x0);
  }
  if (puVar16 != puVar10) {
    bVar5 = true;
  }
  if (!bVar5) {
    puVar16 = puVar10 + 1;
  }
  return puVar16;
}



/* Entry: 109dfadec; end: 109dfae9f;  */

ulong FUN_109dfadec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [128];
  long lStack_28;
  
  ppuVar5 = &puStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = 0x80;
  uStack_b8 = 0;
  puStack_c0 = auStack_a8;
  func_0x000109d5975c();
  func_0x000109dfa974();
  puVar6 = (undefined1 *)ppuVar5;
  if (puStack_c0 != auStack_a8) {
    _free();
  }
  uVar3 = (ulong)(ppuVar5 != (undefined1 **)0x0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar3;
  }
  ___stack_chk_fail();
  if (puStack_c0 != auStack_a8) {
    _free();
  }
  __Unwind_Resume();
  uVar7 = uVar3;
  func_0x000109dfa86c();
  if (puVar6 == (undefined1 *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(uVar3 + uVar7) == '/' || 1 < (uint)param_2 && *(char *)(uVar3 + uVar7) == '\\'
    ;
  }
  uVar4 = uVar3;
  FUN_109dfa764(uVar3,puVar6,param_2);
  if (uVar7 != 0) {
    do {
      if (((uVar4 != 0xffffffffffffffff) && (uVar7 <= uVar4)) ||
         (cVar1 = *(char *)((uVar3 - 1) + uVar7),
         cVar1 != '/' && ((uint)param_2 < 2 || cVar1 != '\\'))) break;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (uVar7 != uVar4) {
    bVar2 = true;
  }
  if (!bVar2) {
    uVar7 = uVar4 + 1;
  }
  return uVar7;
}



/* Entry: 109dfaea0; end: 109dfaf67;  */

ulong FUN_109dfaea0(ulong param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  FUN_109dfa86c();
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + uVar4) == '/' ||
            1 < (uint)param_3 && *(char *)(param_1 + uVar4) == '\\';
  }
  uVar3 = param_1;
  FUN_109dfa764(param_1,param_2,param_3);
  if (uVar4 != 0) {
    do {
      if (((uVar3 != 0xffffffffffffffff) && (uVar4 <= uVar3)) ||
         (cVar1 = *(char *)((param_1 - 1) + uVar4),
         cVar1 != '/' && ((uint)param_3 < 2 || cVar1 != '\\'))) break;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (uVar4 != uVar3) {
    bVar2 = true;
  }
  if (!bVar2) {
    uVar4 = uVar3 + 1;
  }
  return uVar4;
}



/* Entry: 109dfaf68; end: 109dfb033;  */

uint * FUN_109dfaf68(uint *param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  ulong uVar8;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long lStack_498;
  byte bStack_490;
  long lStack_488;
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)0x2;
  puVar2 = param_2;
  FUN_109dfb45c();
  uVar9 = (ulong)param_1 & 0xffffffff;
  if (uVar9 == 0) {
    if (param_4 != (uint *)0x0) {
      param_4[2] = 0;
      param_4[3] = 0;
      param_1 = (uint *)(ulong)*param_2;
      _fcntl(param_1,0x32);
      if ((int)param_1 != -1) {
        puVar5 = auStack_438;
        _strlen();
        puVar5 = auStack_438 + (long)puVar5;
        FUN_109db4ba8(param_4,auStack_438);
        param_1 = param_4;
      }
    }
    __ZNSt3__115system_categoryEv();
    uVar8 = 0;
    puVar2 = param_1;
  }
  else {
    uVar8 = (ulong)param_1 & 0xffffffff00000000;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (uint *)(uVar8 | uVar9);
  }
  ___stack_chk_fail();
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(puVar2 + 2);
  while( true ) {
    FUN_109da4290(puVar2,puVar5 + lVar10);
    lVar4 = *(long *)puVar2 + lVar10;
    puVar3 = param_1;
    puVar6 = puVar5;
    FUN_109dfb0f8(&lStack_498,param_1,lVar4);
    if (((bStack_490 & 1) != 0) || (lStack_498 == 0)) break;
    lVar10 = lStack_498 + lVar10;
  }
  *extraout_x8 = lStack_498;
  *(long *)(puVar2 + 2) = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return puVar3;
  }
  ___stack_chk_fail();
  *(long *)(puVar2 + 2) = lVar10;
  __Unwind_Resume();
  puVar2 = puVar3;
  if ((undefined1 *)0x7ffffffe < puVar6) {
    puVar6 = (undefined1 *)0x7fffffff;
  }
  do {
    ___error();
    *puVar2 = 0;
    puVar2 = puVar3;
    _read(puVar3,lVar4,puVar6);
    if (puVar2 != (uint *)0xffffffffffffffff) {
      bVar7 = *(byte *)(extraout_x8_00 + 1) & 0xfe;
      goto LAB_109dfb198;
    }
    ___error();
  } while (*puVar2 == 4);
  ___error();
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    __ZNSt3__116generic_categoryEv();
    puVar3 = (uint *)0x18;
    __Znwm();
    *(undefined ***)puVar3 = &PTR_FUN_110b5c210;
    *(ulong *)(puVar3 + 2) = (ulong)uVar1;
    *(uint **)(puVar3 + 4) = puVar2;
  }
  bVar7 = *(byte *)(extraout_x8_00 + 1) | 1;
  puVar2 = puVar3;
LAB_109dfb198:
  *(byte *)(extraout_x8_00 + 1) = bVar7;
  *extraout_x8_00 = puVar2;
  return puVar2;
}



/* Entry: 109dfb034; end: 109dfb0f7;  */

void FUN_109dfb034(long *param_1,uint *param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 *extraout_x8;
  long lVar7;
  long lStack_58;
  byte bStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3[1];
  while( true ) {
    FUN_109da4290(param_3,lVar7 + param_4);
    lVar4 = *param_3 + lVar7;
    puVar3 = param_2;
    uVar5 = param_4;
    FUN_109dfb0f8(&lStack_58,param_2,lVar4);
    if (((bStack_50 & 1) != 0) || (lStack_58 == 0)) break;
    lVar7 = lStack_58 + lVar7;
  }
  *param_1 = lStack_58;
  param_3[1] = lVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  param_3[1] = lVar7;
  __Unwind_Resume();
  puVar2 = puVar3;
  if (0x7ffffffe < uVar5) {
    uVar5 = 0x7fffffff;
  }
  do {
    ___error();
    *puVar2 = 0;
    puVar2 = puVar3;
    _read(puVar3,lVar4,uVar5);
    if (puVar2 != (uint *)0xffffffffffffffff) {
      bVar6 = *(byte *)(extraout_x8 + 1) & 0xfe;
      goto LAB_109dfb198;
    }
    ___error();
  } while (*puVar2 == 4);
  ___error();
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    __ZNSt3__116generic_categoryEv();
    puVar3 = (uint *)0x18;
    __Znwm();
    *(undefined ***)puVar3 = &PTR_FUN_110b5c210;
    *(ulong *)(puVar3 + 2) = (ulong)uVar1;
    *(uint **)(puVar3 + 4) = puVar2;
  }
  bVar6 = *(byte *)(extraout_x8 + 1) | 1;
  puVar2 = puVar3;
LAB_109dfb198:
  *(byte *)(extraout_x8 + 1) = bVar6;
  *extraout_x8 = puVar2;
  return;
}



/* Entry: 109dfb0f8; end: 109dfb1af;  */

void FUN_109dfb0f8(undefined8 *param_1,uint *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  puVar2 = param_2;
  if (0x7ffffffe < param_4) {
    param_4 = 0x7fffffff;
  }
  do {
    ___error();
    *puVar2 = 0;
    puVar2 = param_2;
    _read(param_2,param_3,param_4);
    if (puVar2 != (uint *)0xffffffffffffffff) {
      bVar4 = *(byte *)(param_1 + 1) & 0xfe;
      goto LAB_109dfb198;
    }
    ___error();
  } while (*puVar2 == 4);
  ___error();
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    __ZNSt3__116generic_categoryEv();
    puVar3 = (uint *)0x18;
    __Znwm();
    *(undefined ***)puVar3 = &PTR_FUN_110b5c210;
    *(ulong *)(puVar3 + 2) = (ulong)uVar1;
    *(uint **)(puVar3 + 4) = puVar2;
  }
  bVar4 = *(byte *)(param_1 + 1) | 1;
  puVar2 = puVar3;
LAB_109dfb198:
  *(byte *)(param_1 + 1) = bVar4;
  *param_1 = puVar2;
  return;
}



/* Entry: 109dfb1b0; end: 109dfb23f;  */

undefined1  [16]
FUN_109dfb1b0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined auStack_990 [4];
  short sStack_98c;
  undefined8 *puStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 auStack_8e8 [16];
  long lStack_868;
  undefined1 *puStack_840;
  code *pcStack_838;
  undefined4 uStack_82c;
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_82c = 0x400;
  puVar2 = auStack_428;
  __NSGetExecutablePath(puVar2,&uStack_82c);
  if ((int)puVar2 == 0) {
    puVar2 = auStack_428;
    _realpath_DARWIN_EXTSN(puVar2,auStack_828);
    if (puVar2 == (undefined1 *)0x0) goto LAB_109dfb1ec;
    puVar7 = auStack_828;
  }
  else {
LAB_109dfb1ec:
    puVar7 = &UNK_10f6022d2;
  }
  func_0x000107c31940();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar12._8_8_ = puVar7;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  ___stack_chk_fail();
  puVar8 = auStack_990;
  pcStack_838 = FUN_109dfb240;
  lStack_868 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_8f0 = 0x80;
  uStack_8f8 = 0;
  puStack_900 = auStack_8e8;
  puStack_840 = &stack0xfffffffffffffff0;
  func_0x000109e046d8();
  if ((int)puVar7 == 0) {
LAB_109dfb2dc:
    puVar8 = puVar7;
    _access(param_1,puVar8);
    puVar3 = param_1;
    puVar7 = puVar8;
    if ((int)param_1 == -1) {
LAB_109dfb300:
      puVar8 = puVar7;
      ___error();
      uVar11 = (ulong)*puVar3;
      __ZNSt3__116generic_categoryEv();
      goto LAB_109dfb310;
    }
  }
  else {
    if ((int)puVar7 != 2) {
      puVar7 = (undefined *)0x2;
      goto LAB_109dfb2dc;
    }
    puVar7 = (undefined *)0x5;
    puVar3 = param_1;
    _access(param_1,5);
    if ((int)puVar3 == -1) goto LAB_109dfb300;
    _stat(param_1,auStack_990);
    if (((int)param_1 != 0) || (-0x7001 < sStack_98c)) {
      __ZNSt3__116generic_categoryEv();
      uVar11 = 0xd;
      puVar3 = param_1;
      goto LAB_109dfb310;
    }
  }
  __ZNSt3__115system_categoryEv();
  uVar11 = 0;
  puVar3 = param_1;
LAB_109dfb310:
  puVar4 = puStack_900;
  if (puStack_900 != auStack_8e8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_868) {
    auVar13._8_8_ = puVar3;
    auVar13._0_8_ = uVar11;
    return auVar13;
  }
  ___stack_chk_fail();
  if (puStack_900 != auStack_8e8) {
    _free();
  }
  puVar5 = puVar4;
  __Unwind_Resume();
  uVar9 = 0x41;
  if (param_5 != 1) {
    uVar9 = 0x42;
  }
  uVar10 = 3;
  if (param_5 == 0) {
    uVar10 = 1;
  }
  uVar1 = 0x6042;
  if (param_5 != 0) {
    uVar1 = uVar9;
  }
  puVar6 = (uint *)0x0;
  _mmap(0,*puVar5,uVar10,uVar1,puVar8,param_4,param_8,param_9,puVar3,puVar4,&puStack_840,
        FUN_109dfb378);
  puVar5[1] = puVar6;
  if (puVar6 == (uint *)0xffffffffffffffff) {
    ___error();
    uVar11 = (ulong)*puVar6;
    __ZNSt3__116generic_categoryEv();
  }
  else {
    __ZNSt3__115system_categoryEv();
    uVar11 = 0;
  }
  auVar14._8_8_ = puVar6;
  auVar14._0_8_ = uVar11;
  return auVar14;
}



/* Entry: 109dfb240; end: 109dfb377;  */

undefined4
FUN_109dfb240(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_160 [4];
  short sStack_15c;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [16];
  long lStack_38;
  
  puVar7 = auStack_160;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = 0x80;
  uStack_c8 = 0;
  puStack_d0 = auStack_b8;
  func_0x000109e046d8(param_1,&puStack_d0);
  if ((int)param_2 == 0) {
LAB_109dfb2dc:
    puVar7 = param_2;
    _access(param_1,puVar7);
    puVar2 = param_1;
    puVar6 = puVar7;
    if ((int)param_1 == -1) {
LAB_109dfb300:
      puVar7 = puVar6;
      ___error();
      uVar8 = *puVar2;
      __ZNSt3__116generic_categoryEv();
      goto LAB_109dfb310;
    }
  }
  else {
    if ((int)param_2 != 2) {
      param_2 = (undefined1 *)0x2;
      goto LAB_109dfb2dc;
    }
    puVar6 = (undefined1 *)0x5;
    puVar2 = param_1;
    _access(param_1,5);
    if ((int)puVar2 == -1) goto LAB_109dfb300;
    _stat(param_1,auStack_160);
    if (((int)param_1 != 0) || (-0x7001 < sStack_15c)) {
      __ZNSt3__116generic_categoryEv();
      uVar8 = 0xd;
      puVar2 = param_1;
      goto LAB_109dfb310;
    }
  }
  __ZNSt3__115system_categoryEv();
  uVar8 = 0;
  puVar2 = param_1;
LAB_109dfb310:
  puVar3 = puStack_d0;
  if (puStack_d0 != auStack_b8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar8;
  }
  ___stack_chk_fail();
  if (puStack_d0 != auStack_b8) {
    _free();
  }
  puVar4 = puVar3;
  __Unwind_Resume();
  uVar8 = 0x41;
  if (param_4 != 1) {
    uVar8 = 0x42;
  }
  uVar9 = 3;
  if (param_4 == 0) {
    uVar9 = 1;
  }
  uVar1 = 0x6042;
  if (param_4 != 0) {
    uVar1 = uVar8;
  }
  puVar5 = (undefined4 *)0x0;
  _mmap(0,*puVar4,uVar9,uVar1,puVar7,param_3,param_7,param_8,puVar2,puVar3,&stack0xfffffffffffffff0,
        FUN_109dfb378);
  puVar4[1] = puVar5;
  if (puVar5 == (undefined4 *)0xffffffffffffffff) {
    ___error();
    uVar8 = *puVar5;
    __ZNSt3__116generic_categoryEv();
  }
  else {
    __ZNSt3__115system_categoryEv();
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 109dfb378; end: 109dfb45b;  */

undefined4 FUN_109dfb378(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0x41;
  if (param_4 != 1) {
    uVar3 = 0x42;
  }
  uVar4 = 3;
  if (param_4 == 0) {
    uVar4 = 1;
  }
  uVar1 = 0x6042;
  if (param_4 != 0) {
    uVar1 = uVar3;
  }
  puVar2 = (undefined4 *)0x0;
  _mmap(0,*param_1,uVar4,uVar1,param_2,param_3);
  param_1[1] = puVar2;
  if (puVar2 == (undefined4 *)0xffffffffffffffff) {
    ___error();
    uVar3 = *puVar2;
    __ZNSt3__116generic_categoryEv();
  }
  else {
    __ZNSt3__115system_categoryEv();
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 109dfb45c; end: 109dfb5f3;  */

undefined1  [16]
FUN_109dfb45c(uint *param_1,int *param_2,int param_3,int param_4,uint param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uStack_134;
  ulong uStack_130;
  uint *puStack_128;
  uint *puStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 2;
  if (param_4 != 3) {
    uVar9 = 0;
  }
  if (param_4 == 2) {
    uVar9 = 1;
  }
  uVar2 = 0;
  if (param_4 != 1) {
    uVar2 = uVar9;
  }
  if ((param_5 & 4) != 0) {
    param_3 = 3;
  }
  uVar9 = uVar2;
  if (param_3 == 1) {
    uVar9 = uVar2 | 0xa00;
  }
  uVar1 = uVar2 | 0x200;
  if (param_3 != 3) {
    uVar1 = uVar9;
  }
  uVar9 = uVar2 | 0x600;
  if (param_3 != 0) {
    uVar9 = uVar1;
  }
  uStack_e0 = 0x80;
  uStack_e8 = 0;
  puStack_f0 = auStack_d8;
  func_0x000109e046d8(param_1,&puStack_f0);
  uVar2 = ((param_5 & 0x10) << 0x14 | (param_5 & 4) << 1) ^ 0x1000000;
  puVar4 = param_1;
  do {
    ___error();
    *puVar4 = 0;
    puVar4 = param_1;
    uStack_100 = param_6;
    _open(param_1,uVar9 | uVar2);
    iVar3 = (int)puVar4;
    if (iVar3 != -1) {
      *param_2 = iVar3;
      if (iVar3 < 0) goto LAB_109dfb570;
      __ZNSt3__115system_categoryEv();
      uVar10 = 0;
      goto LAB_109dfb580;
    }
    ___error();
  } while (*puVar4 == 4);
  *param_2 = -1;
LAB_109dfb570:
  ___error();
  uVar10 = (ulong)*puVar4;
  __ZNSt3__116generic_categoryEv();
LAB_109dfb580:
  puVar6 = puStack_f0;
  if (puStack_f0 != auStack_d8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar11._8_8_ = puVar4;
    auVar11._0_8_ = uVar10;
    return auVar11;
  }
  ___stack_chk_fail();
  if (puStack_f0 != auStack_d8) {
    _free();
  }
  puVar5 = puVar6;
  __Unwind_Resume();
  pcStack_108 = FUN_109dfb5f4;
  puVar7 = &uStack_134;
  uStack_130 = (ulong)uVar2;
  puStack_128 = param_1;
  puStack_120 = puVar4;
  puStack_118 = puVar6;
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_109dfaf68();
  if ((int)puVar5 == 0) {
    *(byte *)(extraout_x8 + 1) = *(byte *)(extraout_x8 + 1) & 0xfe;
    *(undefined4 *)extraout_x8 = uStack_134;
  }
  else {
    puVar6 = (undefined8 *)0x18;
    puVar8 = puVar7;
    __Znwm();
    *puVar6 = &PTR_FUN_110b5c210;
    puVar6[1] = puVar5;
    puVar6[2] = puVar7;
    *(byte *)(extraout_x8 + 1) = *(byte *)(extraout_x8 + 1) | 1;
    *extraout_x8 = puVar6;
    puVar5 = puVar6;
    puVar7 = puVar8;
  }
  auVar12._8_8_ = puVar7;
  auVar12._0_8_ = puVar5;
  return auVar12;
}



/* Entry: 109dfb5f4; end: 109dfb67b;  */

void FUN_109dfb5f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_34;
  
  puVar2 = &uStack_34;
  FUN_109dfaf68(param_2,puVar2,param_3,param_4);
  if ((int)param_2 == 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
    *(undefined4 *)param_1 = uStack_34;
  }
  else {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
    *puVar1 = &PTR_FUN_110b5c210;
    puVar1[1] = param_2;
    puVar1[2] = puVar2;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 109dfb67c; end: 109dfb743;  */

void FUN_109dfb67c(undefined8 *param_1,uint *param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  puVar2 = param_2;
  if (0x7ffffffe < param_4) {
    param_4 = 0x7fffffff;
  }
  do {
    ___error();
    *puVar2 = 0;
    puVar2 = param_2;
    _pread(param_2,param_3,param_4,param_5);
    if (puVar2 != (uint *)0xffffffffffffffff) {
      bVar4 = *(byte *)(param_1 + 1) & 0xfe;
      goto LAB_109dfb728;
    }
    ___error();
  } while (*puVar2 == 4);
  ___error();
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    __ZNSt3__116generic_categoryEv();
    puVar3 = (uint *)0x18;
    __Znwm();
    *(undefined ***)puVar3 = &PTR_FUN_110b5c210;
    *(ulong *)(puVar3 + 2) = (ulong)uVar1;
    *(uint **)(puVar3 + 4) = puVar2;
  }
  bVar4 = *(byte *)(param_1 + 1) | 1;
  puVar2 = puVar3;
LAB_109dfb728:
  *(byte *)(param_1 + 1) = bVar4;
  *param_1 = puVar2;
  return;
}



/* Entry: 109dfb744; end: 109dfb777;  */

undefined8 * FUN_109dfb744(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    _munmap(param_1[1],*param_1);
  }
  return param_1;
}



/* Entry: 109dfb778; end: 109dfb83b;  */

void FUN_109dfb778(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((bRam00000001138345d8 & 1) == 0) {
    param_2 = (uint *)0x1138345d8;
    ___cxa_guard_acquire();
    if ((int)param_2 != 0) {
      _getpagesize();
      iRam00000001138345d0 = (int)param_2;
      param_2 = (uint *)0x1138345d8;
      ___cxa_guard_release();
    }
  }
  iVar2 = iRam00000001138345d0;
  if (iRam00000001138345d0 == -1) {
    ___error();
    uVar1 = *param_2;
    if (uVar1 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      __ZNSt3__116generic_categoryEv();
      puVar3 = (undefined8 *)0x18;
      __Znwm();
      *puVar3 = &PTR_FUN_110b5c210;
      puVar3[1] = (ulong)uVar1;
      puVar3[2] = param_2;
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    *(undefined8 **)param_1 = puVar3;
  }
  else {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    *param_1 = iVar2;
  }
  return;
}



/* Entry: 109dfb83c; end: 109dfba43;  */

undefined1  [16] FUN_109dfb83c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0xffffffff;
  uStack_24 = 0xffffffff;
  uVar3 = 3;
  _pthread_sigmask(3,&uStack_24,&uStack_28);
  uVar4 = uVar3;
  if ((int)uVar3 == 0) {
    _close();
    if ((int)param_1 < 0) {
      ___error();
      uVar2 = *param_1;
      uVar3 = 3;
      _pthread_sigmask(3,&uStack_28,0);
      uVar1 = (uint)uVar3;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar4 = (ulong)uVar1;
    }
    else {
      uVar3 = 3;
      _pthread_sigmask(3,&uStack_28,0);
      uVar4 = uVar3;
    }
  }
  __ZNSt3__116generic_categoryEv();
  auVar5._0_8_ = uVar4 & 0xffffffff;
  auVar5._8_8_ = uVar3;
  return auVar5;
}



/* Entry: 109dfba44; end: 109dfbdd3;  */

long *** FUN_109dfba44(undefined8 *param_1,long ***param_2,ulong param_3,long ***param_4,
                      long param_5)

{
  long **pplVar1;
  ulong uVar2;
  code *pcVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  undefined1 uVar7;
  ulong uVar8;
  long **pplStack_2d0;
  undefined1 auStack_2b8 [32];
  undefined2 uStack_298;
  undefined1 auStack_290 [32];
  undefined2 uStack_270;
  undefined1 auStack_268 [32];
  undefined2 uStack_248;
  long **pplStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined2 uStack_220;
  long **pplStack_218;
  ulong uStack_210;
  long *aplStack_200 [16];
  long **pplStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplVar4 = param_2;
  if (((param_3 == 0) || (_memchr(param_2,0x2f,param_3), ppplVar4 == (long ***)0x0)) ||
     ((long)ppplVar4 - (long)param_2 == -1)) {
    pplStack_2d0 = (long **)&uStack_170;
    uStack_178 = 0x1000000000;
    pplStack_180 = pplStack_2d0;
    if (param_5 == 0) {
      ppplVar4 = (long ***)&DAT_10f2da35d;
      _getenv();
      if (ppplVar4 != (long ***)0x0) {
        ppplVar6 = ppplVar4;
        _strlen();
        func_0x000109e0357c(ppplVar4,ppplVar6,&pplStack_180,":",1);
        if ((int)uStack_178 != 0) {
          ppplVar6 = (long ***)(pplStack_180 + (uStack_178 & 0xffffffff) * 2);
          param_4 = (long ***)pplStack_180;
          goto LAB_109dfbaf4;
        }
      }
    }
    else {
      ppplVar6 = param_4 + param_5 * 2;
LAB_109dfbaf4:
      do {
        if (param_4[1] != (long **)0x0) {
          FUN_109dabe00(&pplStack_218,*param_4,(long)*param_4 + (long)param_4[1]);
          uStack_220 = 0x105;
          uStack_248 = 0x101;
          uStack_270 = 0x101;
          uStack_298 = 0x101;
          pplStack_240 = (long **)param_2;
          uStack_238 = param_3;
          FUN_109dfaa50(&pplStack_218,0,&pplStack_240,auStack_268,auStack_290,auStack_2b8);
          func_0x000109d3acdc(&pplStack_218,0);
          uStack_210 = uStack_210 - 1;
          if (*(char *)pplStack_218 == '\0') {
            uVar7 = 1;
          }
          else {
            pplStack_240 = pplStack_218;
            uVar7 = 3;
          }
          uStack_220 = CONCAT11(1,uVar7);
          ppplVar4 = &pplStack_240;
          FUN_109dfb240(ppplVar4,2);
          uVar2 = uStack_210;
          pplVar1 = pplStack_218;
          uVar8 = (ulong)ppplVar4 & 0xffffffff;
          if (uVar8 == 0) {
            if (0x7ffffffffffffff7 < uStack_210) {
              func_0x000104c4f6b8();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x109dfbd80);
              (*pcVar3)();
            }
            if (uStack_210 < 0x17) {
              uStack_230 = CONCAT17((char)uStack_210,(undefined7)uStack_230);
              ppplVar5 = &pplStack_240;
              if (uStack_210 != 0) goto LAB_109dfbc10;
            }
            else {
              ppplVar4 = (long ***)0x19;
              if ((uStack_210 | 7) != 0x17) {
                ppplVar4 = (long ***)((uStack_210 | 7) + 1);
              }
              ppplVar5 = ppplVar4;
              __Znwm();
              uStack_230 = (ulong)ppplVar4 | 0x8000000000000000;
              uStack_238 = uVar2;
              pplStack_240 = (long **)ppplVar5;
LAB_109dfbc10:
              ppplVar4 = ppplVar5;
              _memmove(ppplVar5,pplVar1,uVar2);
            }
            *(char *)((long)ppplVar5 + uVar2) = '\0';
            *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
            param_1[1] = uStack_238;
            *param_1 = pplStack_240;
            param_1[2] = uStack_230;
          }
          if (pplStack_218 != aplStack_200) {
            ppplVar4 = (long ***)pplStack_218;
            _free();
          }
          if (uVar8 == 0) goto LAB_109dfbcd0;
        }
        param_4 = param_4 + 2;
      } while (param_4 != ppplVar6);
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
    __ZNSt3__116generic_categoryEv();
    *param_1 = 2;
    param_1[1] = ppplVar4;
LAB_109dfbcd0:
    ppplVar4 = (long ***)pplStack_180;
    if (pplStack_180 != pplStack_2d0) {
      _free();
    }
  }
  else {
    if (0x7ffffffffffffff7 < param_3) goto LAB_109dfbd84;
    if (param_3 < 0x17) {
      uStack_170 = (long **)CONCAT17((char)param_3,(undefined7)uStack_170);
      ppplVar6 = &pplStack_180;
    }
    else {
      ppplVar4 = (long ***)0x19;
      if ((param_3 | 7) != 0x17) {
        ppplVar4 = (long ***)((param_3 | 7) + 1);
      }
      ppplVar6 = ppplVar4;
      __Znwm();
      uStack_170 = (long **)((ulong)ppplVar4 | 0x8000000000000000);
      pplStack_180 = (long **)ppplVar6;
      uStack_178 = param_3;
    }
    ppplVar4 = ppplVar6;
    _memmove(ppplVar6,param_2,param_3);
    *(char *)((long)ppplVar6 + param_3) = '\0';
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
    param_1[1] = uStack_178;
    *param_1 = pplStack_180;
    param_1[2] = uStack_170;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppplVar4;
  }
  ___stack_chk_fail();
LAB_109dfbd84:
  func_0x000104c4f6b8();
  if (pplStack_180 != pplStack_2d0) {
    _free();
  }
  __Unwind_Resume();
  if ((*ppplVar4 != (long **)0x0) && (FUN_109e0b9b8(), *ppplVar4 != (long **)0x0)) {
    __ZdlPv();
  }
  return ppplVar4;
}



/* Entry: 109dfbdd4; end: 109dfbe0b;  */

long * FUN_109dfbdd4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109e0b9b8();
    if (*param_1 != 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109dfbe0c; end: 109dfbe73;  */

undefined *
FUN_109dfbe0c(int **param_1,int **param_2,int **param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int **ppiVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  int **ppiVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  int **ppiVar16;
  undefined *puVar17;
  int **ppiVar18;
  undefined8 uVar19;
  int iVar20;
  uint *puVar21;
  int **ppiVar22;
  uint uVar23;
  ulong uVar24;
  undefined *puVar25;
  int **ppiVar26;
  int **ppiVar27;
  char *pcVar28;
  undefined **ppuVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  int *piVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  int *piStack_168;
  undefined4 uStack_160;
  long *plStack_158;
  int **ppiStack_150;
  int **ppiStack_148;
  int **ppiStack_140;
  int **ppiStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  int *apiStack_7a [6];
  undefined1 uStack_49;
  long lStack_48;
  
  ppiVar5 = param_1;
  FUN_109e08b80(param_1,param_2,0,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (param_3,(undefined *)((long)ppiVar5 + -1),0);
  uVar23 = (uint)param_5;
  ppiVar22 = (int **)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    ppiVar22 = param_3;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (uint)param_1;
  ppiVar16 = ppiVar22;
  ppiVar18 = ppiVar5;
  if (uVar3 == 0xff) {
    ppiVar27 = (int **)param_2[2];
    iVar20 = 0xf602a5b;
    param_2 = ppiVar27;
    _strcmp();
    uVar23 = (uint)param_5;
    if (iVar20 != 0) {
      ppiVar26 = (int **)&UNK_10f602cda;
      ppuVar29 = &PTR_DAT_110b5cef0;
      do {
        uVar23 = (uint)param_5;
        if (*(int *)(ppuVar29 + -1) == 0) goto LAB_109e08c80;
        iVar20 = (int)*ppuVar29;
        param_2 = ppiVar27;
        _strcmp();
        uVar23 = (uint)param_5;
        ppuVar29 = ppuVar29 + 3;
      } while (iVar20 != 0);
    }
    ppiVar16 = (int **)&UNK_10f602cdc;
  }
  else {
    puVar2 = (uint *)&UNK_110b5ced0;
    do {
      puVar21 = puVar2;
      uVar4 = *puVar21;
      puVar2 = puVar21 + 6;
    } while (uVar4 != 0 && uVar4 != (uVar3 & 0xfffffeff));
    if ((uVar3 >> 8 & 1) == 0) {
      ppiVar26 = *(int ***)(puVar21 + 4);
      goto LAB_109e08c80;
    }
    if (uVar4 != 0) {
      lVar30 = 0;
      lVar34 = *(long *)(puVar21 + 2);
      do {
        if (lVar30 == 0x31) {
          ppiVar26 = apiStack_7a;
          uStack_49 = 0;
          break;
        }
        cVar1 = *(char *)(lVar34 + lVar30);
        ppiVar26 = apiStack_7a;
        *(char *)((long)ppiVar26 + lVar30) = cVar1;
        lVar30 = lVar30 + 1;
      } while (cVar1 != '\0');
      goto LAB_109e08c80;
    }
    ppiVar16 = (int **)&UNK_10f602a52;
  }
  ppiVar26 = apiStack_7a;
  param_2 = (int **)0x32;
  _snprintf(apiStack_7a);
LAB_109e08c80:
  ppiVar27 = ppiVar26;
  _strlen();
  ppiVar6 = ppiVar27;
  if (ppiVar5 != (int **)0x0) {
    func_0x000109e0ba40();
    ppiVar6 = ppiVar22;
    param_2 = ppiVar26;
    ppiVar16 = ppiVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined *)((long)ppiVar27 + 1);
  }
  ___stack_chk_fail();
  if (((*(int *)ppiVar6 != 0xf265) || (piVar33 = ppiVar6[3], *piVar33 != 0xd245)) ||
     ((*(byte *)(piVar33 + 0x12) >> 2 & 1) != 0)) {
    return (undefined *)0x2;
  }
  lVar30 = *(long *)(piVar33 + 0xc);
  piStack_168 = piVar33;
  ppiStack_150 = param_2;
  if (lVar30 < 0x41) {
    lVar30 = *(long *)(piVar33 + 0xe);
    uVar31 = *(ulong *)(piVar33 + 0x10);
    if ((*(byte *)(piVar33 + 10) & 4) != 0) {
      ppiVar16 = (int **)0x0;
    }
    if ((uVar23 >> 2 & 1) == 0) {
      ppiVar5 = param_2;
      _strlen();
      ppiVar22 = param_2;
    }
    else {
      ppiVar5 = (int **)ppiVar18[1];
      ppiVar22 = (int **)((long)param_2 + (long)*ppiVar18);
    }
    ppiVar26 = (int **)((long)param_2 + (long)ppiVar5);
    if (ppiVar22 <= ppiVar26) {
      pcVar28 = *(char **)(piVar33 + 0x18);
      if (pcVar28 != (char *)0x0) {
        ppiVar27 = ppiVar22;
        if (ppiVar22 < ppiVar26) {
          cVar1 = *pcVar28;
          lVar39 = ((long)ppiVar5 + (long)param_2) - (long)ppiVar22;
          lVar34 = (long)((long)ppiVar5 + (long)param_2) - (long)ppiVar22;
          ppiVar6 = ppiVar22;
          do {
            if (((*(char *)ppiVar6 == cVar1) && (piVar33[0x1a] <= lVar34)) &&
               (ppiVar12 = ppiVar6, _memcmp(ppiVar6,pcVar28), ppiVar27 = ppiVar6, (int)ppiVar12 == 0
               )) break;
            ppiVar6 = (int **)((long)ppiVar6 + 1);
            lVar34 = lVar34 + -1;
            lVar39 = lVar39 + -1;
            ppiVar27 = (int **)((long)ppiVar5 + (long)param_2);
          } while (lVar39 != 0);
        }
        if (ppiVar27 == ppiVar26) {
          return (undefined *)0x1;
        }
      }
      uStack_160 = uVar23 & 7;
      uVar36 = lVar30 + 1;
      plStack_130 = (long *)0x0;
      plStack_158 = (long *)0x0;
      lVar30 = 1L << (uVar36 & 0x3f);
      lStack_118 = 0;
      lStack_120 = 0;
      lStack_108 = 0;
      lStack_110 = 0;
      ppiStack_148 = ppiVar22;
      ppiStack_140 = ppiVar26;
LAB_109e08ea4:
      piVar10 = piStack_168;
      if (ppiStack_148 == ppiVar22) {
        uVar24 = 0x80;
      }
      else {
        uVar24 = (ulong)*(byte *)((long)ppiVar22 + -1);
      }
      piVar7 = piStack_168;
      FUN_109e0a71c(piStack_168,uVar36,uVar31,lVar30,0x84,lVar30);
      ppiVar5 = (int **)0x0;
      piVar11 = piVar7;
      do {
        if (ppiVar22 == ppiStack_140) {
          uVar35 = 0x80;
        }
        else {
          uVar35 = (ulong)*(char *)ppiVar22;
        }
        ppiVar27 = ppiVar22;
        if (piVar11 != piVar7) {
          ppiVar27 = ppiVar5;
        }
        uVar23 = (uint)uVar24;
        if (uVar23 == 0x80) {
          if ((uStack_160 & 1) == 0) goto LAB_109e08f3c;
LAB_109e08f24:
          iVar38 = 0;
          iVar20 = 0;
          iVar37 = 0x82;
        }
        else {
          if ((uVar23 != 10) || ((*(byte *)(piVar10 + 10) >> 3 & 1) == 0)) goto LAB_109e08f24;
LAB_109e08f3c:
          iVar20 = piVar10[0x13];
          iVar38 = 0x81;
          iVar37 = 0x83;
        }
        uVar3 = (uint)uVar35;
        if (uVar3 == 0x80) {
          if (((byte)uStack_160 >> 1 & 1) == 0) goto LAB_109e08f70;
        }
        else if ((uVar3 == 10) && ((*(byte *)(piVar10 + 10) >> 3 & 1) != 0)) {
LAB_109e08f70:
          iVar20 = piVar10[0x14] + iVar20;
          iVar38 = iVar37;
        }
        piVar8 = piVar11;
        if (0 < iVar20) {
          uVar4 = iVar20 + 1;
          do {
            piVar8 = piVar10;
            FUN_109e0a71c(piVar10,uVar36,uVar31,piVar11,iVar38,piVar11);
            uVar4 = uVar4 - 1;
            piVar11 = piVar8;
          } while (1 < uVar4);
        }
        if (iVar38 == 0x81) {
          if (uVar3 == 0x80) {
            iVar20 = 0x81;
          }
          else {
LAB_109e09028:
            uVar24 = (ulong)(uVar3 & 0xff);
            if ((uVar3 & 0xff) < 0x80) {
              uVar4 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar24 * 4 + 0x3c) & 0x500;
            }
            else {
              ___maskrune(uVar24,0x500);
              uVar4 = (uint)uVar24;
            }
            iVar20 = 0x85;
            if (uVar3 != 0x5f && uVar4 == 0) {
              iVar20 = iVar38;
            }
          }
          iVar38 = iVar20;
          if (uVar23 == 0x80) goto LAB_109e090b4;
          uVar24 = (ulong)(uVar23 & 0xff);
LAB_109e09074:
          if ((uint)uVar24 < 0x80) {
            uVar4 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar24 * 4 + 0x3c) & 0x500;
          }
          else {
            ___maskrune(uVar24,0x500);
            uVar4 = (uint)uVar24;
          }
          if ((uVar4 == 0) && (uVar23 != 0x5f)) goto LAB_109e090b4;
          if (iVar38 != 0x82) {
            if (uVar3 != 0x80) {
              uVar24 = (ulong)(uVar3 & 0xff);
              if ((uVar3 & 0xff) < 0x80) {
                uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar24 * 4 + 0x3c) & 0x500;
              }
              else {
                ___maskrune(uVar24,0x500);
                uVar23 = (uint)uVar24;
              }
              if ((uVar23 == 0) && (uVar3 != 0x5f)) goto LAB_109e090d8;
            }
            goto LAB_109e090b4;
          }
LAB_109e090d8:
          uVar19 = 0x86;
LAB_109e090dc:
          piVar10 = piStack_168;
          FUN_109e0a71c(piStack_168,uVar36,uVar31,piVar8,uVar19,piVar8);
          piVar8 = piVar10;
        }
        else {
          if (uVar23 != 0x80) {
            uVar24 = (ulong)(uVar23 & 0xff);
            if ((uVar23 & 0xff) < 0x80) {
              uVar4 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar24 * 4 + 0x3c) & 0x500;
            }
            else {
              uVar9 = uVar24;
              ___maskrune(uVar24,0x500);
              uVar4 = (uint)uVar9;
            }
            if (((uVar4 == 0) && (uVar23 != 0x5f)) && (uVar3 != 0x80)) goto LAB_109e09028;
            goto LAB_109e09074;
          }
LAB_109e090b4:
          if (iVar38 - 0x85U < 2) {
            uVar19 = 0x85;
            goto LAB_109e090dc;
          }
        }
        piVar10 = piStack_168;
        uVar24 = (ulong)piVar8 & 1L << (uVar31 & 0x3f);
        if ((ppiVar22 == ppiVar26) || (uVar24 != 0)) goto LAB_109e09188;
        piVar11 = piStack_168;
        FUN_109e0a71c(piStack_168,uVar36,uVar31,piVar8,uVar35,piVar7);
        ppiVar22 = (int **)((long)ppiVar22 + 1);
        uVar24 = uVar35;
        ppiVar5 = ppiVar27;
      } while( true );
    }
  }
  else {
    lVar34 = *(long *)(piVar33 + 0xe);
    lVar39 = *(long *)(piVar33 + 0x10);
    if ((*(byte *)(piVar33 + 10) & 4) != 0) {
      ppiVar16 = (int **)0x0;
    }
    if ((uVar23 >> 2 & 1) == 0) {
      ppiVar5 = param_2;
      _strlen();
      ppiVar22 = param_2;
    }
    else {
      ppiVar5 = (int **)ppiVar18[1];
      ppiVar22 = (int **)((long)param_2 + (long)*ppiVar18);
    }
    ppiVar26 = (int **)((long)param_2 + (long)ppiVar5);
    if (ppiVar22 <= ppiVar26) {
      pcVar28 = *(char **)(piVar33 + 0x18);
      if (pcVar28 != (char *)0x0) {
        ppiVar27 = ppiVar22;
        if (ppiVar22 < ppiVar26) {
          cVar1 = *pcVar28;
          lVar40 = ((long)ppiVar5 + (long)param_2) - (long)ppiVar22;
          lVar32 = (long)((long)ppiVar5 + (long)param_2) - (long)ppiVar22;
          ppiVar6 = ppiVar22;
          do {
            if (((*(char *)ppiVar6 == cVar1) && (piVar33[0x1a] <= lVar32)) &&
               (ppiVar12 = ppiVar6, _memcmp(ppiVar6,pcVar28), ppiVar27 = ppiVar6, (int)ppiVar12 == 0
               )) break;
            ppiVar6 = (int **)((long)ppiVar6 + 1);
            lVar32 = lVar32 + -1;
            lVar40 = lVar40 + -1;
            ppiVar27 = (int **)((long)ppiVar5 + (long)param_2);
          } while (lVar40 != 0);
        }
        if (ppiVar27 == ppiVar26) {
          return (undefined *)0x1;
        }
      }
      uStack_160 = uVar23 & 7;
      plStack_130 = (long *)0x0;
      plStack_158 = (long *)0x0;
      lVar32 = lVar30 << 2;
      ppiStack_148 = ppiVar22;
      ppiStack_140 = ppiVar26;
      _malloc();
      if (lVar32 == 0) {
        return (undefined *)0xc;
      }
      lVar34 = lVar34 + 1;
      lStack_110 = lVar32 + lVar30;
      lStack_108 = lVar32 + lVar30 * 2;
      uStack_128 = 4;
      lStack_100 = lVar32 + lVar30 * 3;
      lStack_120 = lVar32;
      lStack_118 = lVar32;
      _bzero(lStack_100,lVar30);
LAB_109e094a4:
      lVar40 = lStack_108;
      lVar32 = lStack_110;
      lVar30 = lStack_118;
      if (ppiStack_148 == ppiVar22) {
        uVar31 = 0x80;
      }
      else {
        uVar31 = (ulong)*(byte *)((long)ppiVar22 + -1);
      }
      _bzero(lStack_118,*(undefined8 *)(piStack_168 + 0xc));
      *(undefined1 *)(lVar30 + lVar34) = 1;
      FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar30,0x84,lVar30);
      _memmove(lVar32,lVar30,*(undefined8 *)(piStack_168 + 0xc));
      ppiVar5 = (int **)0x0;
      do {
        piVar10 = piStack_168;
        if (ppiVar22 == ppiStack_140) {
          uVar36 = 0x80;
        }
        else {
          uVar36 = (ulong)*(char *)ppiVar22;
        }
        lVar13 = lVar30;
        _memcmp(lVar30,lVar32,*(undefined8 *)(piStack_168 + 0xc));
        ppiVar27 = ppiVar22;
        if ((int)lVar13 != 0) {
          ppiVar27 = ppiVar5;
        }
        uVar23 = (uint)uVar31;
        if (uVar23 == 0x80) {
          if ((uStack_160 & 1) == 0) goto LAB_109e09578;
LAB_109e09560:
          iVar38 = 0;
          iVar20 = 0;
          iVar37 = 0x82;
        }
        else {
          if ((uVar23 != 10) || ((*(byte *)(piVar10 + 10) >> 3 & 1) == 0)) goto LAB_109e09560;
LAB_109e09578:
          iVar20 = piVar10[0x13];
          iVar38 = 0x81;
          iVar37 = 0x83;
        }
        uVar3 = (uint)uVar36;
        if (uVar3 == 0x80) {
          if (((byte)uStack_160 >> 1 & 1) == 0) goto LAB_109e095ac;
        }
        else if ((uVar3 == 10) && ((*(byte *)(piVar10 + 10) >> 3 & 1) != 0)) {
LAB_109e095ac:
          iVar20 = piVar10[0x14] + iVar20;
          iVar38 = iVar37;
        }
        if (0 < iVar20) {
          uVar4 = iVar20 + 1;
          do {
            FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar30,iVar38,lVar30);
            uVar4 = uVar4 - 1;
          } while (1 < uVar4);
        }
        if (iVar38 == 0x81) {
          if (uVar3 == 0x80) {
            iVar20 = 0x81;
          }
          else {
LAB_109e09654:
            uVar31 = (ulong)(uVar3 & 0xff);
            if ((uVar3 & 0xff) < 0x80) {
              uVar4 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar31 * 4 + 0x3c) & 0x500;
            }
            else {
              ___maskrune(uVar31,0x500);
              uVar4 = (uint)uVar31;
            }
            iVar20 = 0x85;
            if (uVar3 != 0x5f && uVar4 == 0) {
              iVar20 = iVar38;
            }
          }
          iVar38 = iVar20;
          if (uVar23 == 0x80) goto LAB_109e096e0;
          uVar31 = (ulong)(uVar23 & 0xff);
LAB_109e096a0:
          if ((uint)uVar31 < 0x80) {
            uVar4 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar31 * 4 + 0x3c) & 0x500;
          }
          else {
            ___maskrune(uVar31,0x500);
            uVar4 = (uint)uVar31;
          }
          if ((uVar4 == 0) && (uVar23 != 0x5f)) goto LAB_109e096e0;
          if (iVar38 != 0x82) {
            if (uVar3 != 0x80) {
              uVar31 = (ulong)(uVar3 & 0xff);
              if ((uVar3 & 0xff) < 0x80) {
                uVar23 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar31 * 4 + 0x3c) & 0x500;
              }
              else {
                ___maskrune(uVar31,0x500);
                uVar23 = (uint)uVar31;
              }
              if ((uVar23 == 0) && (uVar3 != 0x5f)) goto LAB_109e09700;
            }
            goto LAB_109e096e0;
          }
LAB_109e09700:
          uVar19 = 0x86;
LAB_109e09708:
          FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar30,uVar19,lVar30);
        }
        else {
          if (uVar23 != 0x80) {
            uVar31 = (ulong)(uVar23 & 0xff);
            if ((uVar23 & 0xff) < 0x80) {
              uVar4 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar31 * 4 + 0x3c) & 0x500;
            }
            else {
              uVar24 = uVar31;
              ___maskrune(uVar31,0x500);
              uVar4 = (uint)uVar24;
            }
            if (((uVar4 == 0) && (uVar23 != 0x5f)) && (uVar3 != 0x80)) goto LAB_109e09654;
            goto LAB_109e096a0;
          }
LAB_109e096e0:
          if (iVar38 - 0x85U < 2) {
            uVar19 = 0x85;
            goto LAB_109e09708;
          }
        }
        if ((ppiVar22 == ppiVar26) || (*(char *)(lVar30 + lVar39) != '\0')) goto LAB_109e097cc;
        _memmove(lVar40,lVar30,*(undefined8 *)(piStack_168 + 0xc));
        _memmove(lVar30,lVar32,*(undefined8 *)(piStack_168 + 0xc));
        FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar40,uVar36,lVar30);
        ppiVar22 = (int **)((long)ppiVar22 + 1);
        uVar31 = uVar36;
        ppiVar5 = ppiVar27;
      } while( true );
    }
  }
  return (undefined *)0x10;
LAB_109e097cc:
  ppiStack_138 = ppiVar27;
  if (*(char *)(lVar30 + lVar39) == '\0') {
    _free(plStack_158);
    puVar17 = (undefined *)0x1;
    plVar14 = plStack_130;
    goto LAB_109e099c0;
  }
  if ((ppiVar16 == (int **)0x0) && (piVar33[0x1e] == 0)) goto LAB_109e099a4;
  while( true ) {
    ppiVar5 = &piStack_168;
    ppiStack_138 = ppiVar27;
    FUN_109e0a9a8(ppiVar5,ppiVar27,ppiVar26,lVar34,lVar39);
    if (ppiVar5 != (int **)0x0) break;
    ppiVar27 = (int **)((long)ppiStack_138 + 1);
  }
  if ((ppiVar16 == (int **)0x1) && (piVar33[0x1e] == 0)) goto LAB_109e09938;
  lVar30 = *(long *)(piStack_168 + 0x1c);
  if (plStack_158 == (long *)0x0) {
    plVar14 = (long *)(lVar30 * 0x10 + 0x10);
    _malloc();
    plStack_158 = plVar14;
    if (plVar14 == (long *)0x0) {
      puVar25 = (undefined *)0xc;
      goto LAB_109e099cc;
    }
  }
  plVar14 = plStack_158;
  if (lVar30 != 0) {
    lVar32 = 2;
    if (2 < lVar30 + 1U) {
      lVar32 = lVar30 + 1;
    }
    _memset(plStack_158 + 2,0xff,lVar32 * 0x10 + -0x10);
  }
  if ((piVar33[0x1e] != 0) || ((uStack_160._1_1_ >> 2 & 1) != 0)) {
    lVar30 = *(long *)(piVar33 + 0x20);
    if ((0 < lVar30) && (plStack_130 == (long *)0x0)) {
      plVar15 = (long *)(lVar30 * 8 + 8);
      _malloc();
      plStack_130 = plVar15;
    }
    if (lVar30 < 1) goto LAB_109e098dc;
    if (plStack_130 != (long *)0x0) goto LAB_109e098dc;
    puVar17 = (undefined *)0xc;
    goto LAB_109e099c0;
  }
  ppiVar22 = &piStack_168;
  func_0x000109e0ada4(ppiVar22,ppiStack_138,ppiVar5,lVar34,lVar39);
  while( true ) {
    if (ppiVar22 != (int **)0x0) goto LAB_109e09934;
    if (ppiVar5 <= ppiStack_138) break;
    puVar17 = (undefined *)((long)ppiVar5 + -1);
    ppiVar5 = &piStack_168;
    FUN_109e0a9a8(ppiVar5,ppiStack_138,puVar17,lVar34,lVar39);
    if (ppiVar5 == (int **)0x0) break;
LAB_109e098dc:
    ppiVar22 = &piStack_168;
    func_0x000109e0b17c(ppiVar22,ppiStack_138,ppiVar5,lVar34,lVar39,0,0);
  }
  ppiVar22 = (int **)((long)ppiStack_138 + 1);
  if (ppiStack_138 == ppiVar26) {
LAB_109e09934:
    if (ppiVar16 != (int **)0x0) {
LAB_109e09938:
      *ppiVar18 = (int *)((long)ppiStack_138 - (long)ppiStack_150);
      ppiVar18[1] = (int *)((long)ppiVar5 - (long)ppiStack_150);
      if ((int **)0x1 < ppiVar16) {
        ppiVar22 = (int **)0x1;
        plVar14 = plStack_158;
        do {
          ppiVar5 = ppiVar18 + 2;
          if (*(int ***)(piStack_168 + 0x1c) < ppiVar22) {
            *ppiVar5 = (int *)0xffffffffffffffff;
            ppiVar18[3] = (int *)0xffffffffffffffff;
          }
          else {
            piVar33 = (int *)plVar14[2];
            ppiVar18[3] = (int *)plVar14[3];
            *ppiVar5 = piVar33;
          }
          ppiVar22 = (int **)((long)ppiVar22 + 1);
          plVar14 = plVar14 + 2;
          ppiVar18 = ppiVar5;
        } while (ppiVar16 != ppiVar22);
      }
    }
LAB_109e099a4:
    if (plStack_158 != (long *)0x0) {
      _free();
    }
    puVar25 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    plVar14 = plStack_130;
    if (plStack_130 != (long *)0x0) {
LAB_109e099c0:
      puVar25 = puVar17;
      _free(plVar14);
    }
LAB_109e099cc:
    _free(lStack_120);
    return puVar25;
  }
  goto LAB_109e094a4;
LAB_109e09188:
  ppiStack_138 = ppiVar27;
  if (uVar24 == 0) {
    _free(plStack_158);
    puVar17 = (undefined *)0x1;
    plVar14 = plStack_130;
    goto LAB_109e0937c;
  }
  if ((ppiVar16 == (int **)0x0) && (piVar33[0x1e] == 0)) goto LAB_109e09360;
  while( true ) {
    ppiVar5 = &piStack_168;
    ppiStack_138 = ppiVar27;
    func_0x000109e09a28(ppiVar5,ppiVar27,ppiVar26,uVar36,uVar31);
    if (ppiVar5 != (int **)0x0) break;
    ppiVar27 = (int **)((long)ppiStack_138 + 1);
  }
  if ((ppiVar16 == (int **)0x1) && (piVar33[0x1e] == 0)) goto LAB_109e092f4;
  lVar34 = *(long *)(piStack_168 + 0x1c);
  if (plStack_158 == (long *)0x0) {
    plVar14 = (long *)(lVar34 * 0x10 + 0x10);
    _malloc();
    plStack_158 = plVar14;
    if (plVar14 == (long *)0x0) {
      return (undefined *)0xc;
    }
  }
  plVar14 = plStack_158;
  if (lVar34 != 0) {
    lVar39 = 2;
    if (2 < lVar34 + 1U) {
      lVar39 = lVar34 + 1;
    }
    _memset(plStack_158 + 2,0xff,lVar39 * 0x10 + -0x10);
  }
  if ((piVar33[0x1e] != 0) || ((uStack_160._1_1_ >> 2 & 1) != 0)) {
    lVar34 = *(long *)(piVar33 + 0x20);
    if ((0 < lVar34) && (plStack_130 == (long *)0x0)) {
      plVar15 = (long *)(lVar34 * 8 + 8);
      _malloc();
      plStack_130 = plVar15;
    }
    if (lVar34 < 1) goto LAB_109e09298;
    if (plStack_130 != (long *)0x0) goto LAB_109e09298;
    puVar17 = (undefined *)0xc;
    goto LAB_109e0937c;
  }
  ppiVar22 = &piStack_168;
  func_0x000109e09dd8(ppiVar22,ppiStack_138,ppiVar5,uVar36,uVar31);
  while( true ) {
    if (ppiVar22 != (int **)0x0) goto LAB_109e092f0;
    if (ppiVar5 <= ppiStack_138) break;
    puVar17 = (undefined *)((long)ppiVar5 + -1);
    ppiVar5 = &piStack_168;
    func_0x000109e09a28(ppiVar5,ppiStack_138,puVar17,uVar36,uVar31);
    if (ppiVar5 == (int **)0x0) break;
LAB_109e09298:
    ppiVar22 = &piStack_168;
    func_0x000109e0a1b0(ppiVar22,ppiStack_138,ppiVar5,uVar36,uVar31,0,0);
  }
  ppiVar22 = (int **)((long)ppiStack_138 + 1);
  if (ppiStack_138 == ppiVar26) {
LAB_109e092f0:
    if (ppiVar16 != (int **)0x0) {
LAB_109e092f4:
      *ppiVar18 = (int *)((long)ppiStack_138 - (long)ppiStack_150);
      ppiVar18[1] = (int *)((long)ppiVar5 - (long)ppiStack_150);
      if ((int **)0x1 < ppiVar16) {
        ppiVar22 = (int **)0x1;
        plVar14 = plStack_158;
        do {
          ppiVar5 = ppiVar18 + 2;
          if (*(int ***)(piStack_168 + 0x1c) < ppiVar22) {
            *ppiVar5 = (int *)0xffffffffffffffff;
            ppiVar18[3] = (int *)0xffffffffffffffff;
          }
          else {
            piVar33 = (int *)plVar14[2];
            ppiVar18[3] = (int *)plVar14[3];
            *ppiVar5 = piVar33;
          }
          ppiVar22 = (int **)((long)ppiVar22 + 1);
          plVar14 = plVar14 + 2;
          ppiVar18 = ppiVar5;
        } while (ppiVar16 != ppiVar22);
      }
    }
LAB_109e09360:
    if (plStack_158 != (long *)0x0) {
      _free();
    }
    puVar25 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    plVar14 = plStack_130;
    if (plStack_130 != (long *)0x0) {
LAB_109e0937c:
      puVar25 = puVar17;
      _free(plVar14);
    }
    return puVar25;
  }
  goto LAB_109e08ea4;
}



/* Entry: 109dfbe74; end: 109dfc0c3;  */

uint * FUN_109dfbe74(uint *param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
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
  uint *puVar47;
  undefined8 uVar48;
  long lVar49;
  undefined8 *puVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint *unaff_x19;
  long lVar54;
  ulong uVar55;
  ulong uVar56;
  uint *puStack_e8;
  ulong uStack_e0;
  uint auStack_d8 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == (undefined8 *)0x0) {
    if (param_1[2] == 0) goto LAB_109dfbf0c;
  }
  else {
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      if (param_5[1] != 0) {
        param_5[1] = 0;
        puVar50 = (undefined8 *)*param_5;
        goto LAB_109dfbeec;
      }
    }
    else if (*(char *)((long)param_5 + 0x17) != '\0') {
      *(undefined1 *)((long)param_5 + 0x17) = 0;
      puVar50 = param_5;
LAB_109dfbeec:
      *(undefined1 *)puVar50 = 0;
    }
    puVar47 = (uint *)(ulong)param_1[2];
    if (param_1[2] == 0) {
LAB_109dfbf0c:
      if (param_4 == 0) {
        uVar56 = 0;
        uVar55 = 1;
LAB_109dfbf9c:
        uStack_e0 = 0x800000000;
        puStack_e8 = auStack_d8;
        uVar51 = 0;
LAB_109dfbfa0:
        _bzero(puStack_e8 + uVar51 * 4,(uVar55 - uVar51) * 0x10);
      }
      else {
        uVar1 = *(int *)(*(long *)param_1 + 8) + 1;
        uVar56 = (ulong)uVar1;
        puStack_e8 = auStack_d8;
        uStack_e0 = 0x800000000;
        uVar53 = 1;
        if (1 < uVar1) {
          uVar53 = *(int *)(*(long *)param_1 + 8) + 1;
        }
        uVar55 = (ulong)uVar53;
        if (uVar1 < 9) goto LAB_109dfbf9c;
        func_0x000107c2b01c(&puStack_e8,puStack_e8,uVar55,0x10);
        uVar51 = uStack_e0 & 0xffffffff;
        if ((uint)uStack_e0 != uVar53) goto LAB_109dfbfa0;
      }
      unaff_x19 = auStack_d8;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uVar55);
      puStack_e8[0] = 0;
      puStack_e8[1] = 0;
      *(undefined8 *)(puStack_e8 + 2) = param_3;
      uVar48 = *(undefined8 *)param_1;
      FUN_109e08ce4(uVar48,param_2,uVar56,puStack_e8,4);
      if ((int)uVar48 == 0) {
        if ((param_4 != 0) && (*(undefined4 *)(param_4 + 8) = 0, (int)uVar56 != 0)) {
          lVar54 = 0;
          do {
            lVar52 = *(long *)((long)puStack_e8 + lVar54);
            if (lVar52 == -1) {
              lVar49 = 0;
              lVar52 = 0;
            }
            else {
              lVar49 = param_2 + lVar52;
              lVar52 = *(long *)((long)puStack_e8 + lVar54 + 8) - lVar52;
            }
            func_0x000109d30b00(param_4,lVar49,lVar52);
            lVar54 = lVar54 + 0x10;
          } while (uVar56 * 0x10 - lVar54 != 0);
        }
        puVar47 = (uint *)0x1;
      }
      else {
        if (((int)uVar48 != 1) && (param_5 != (undefined8 *)0x0)) {
          FUN_109dfbe0c(param_1[2],*(undefined8 *)param_1,param_5);
        }
        puVar47 = (uint *)0x0;
      }
      param_1 = puStack_e8;
      if (puStack_e8 != unaff_x19) {
        _free();
      }
      goto LAB_109dfc064;
    }
    FUN_109dfbe0c(puVar47,*(undefined8 *)param_1,param_5);
    param_1 = puVar47;
  }
  puVar47 = (uint *)0x0;
LAB_109dfc064:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (puStack_e8 != unaff_x19) {
      _free();
    }
    __Unwind_Resume();
    uVar8 = param_1[0x10];
    uVar16 = param_1[0x11];
    uVar25 = uVar16 >> 2 | uVar16 << 0x1e;
    uVar9 = param_1[0x12];
    uVar17 = param_1[0x13];
    uVar1 = (uVar8 >> 0x1b | uVar8 << 5) + param_1[0x14] + *param_1 +
            (uVar9 & uVar16 | uVar17 & (uVar16 ^ 0xffffffff)) + 0x5a827999;
    uVar26 = uVar8 >> 2 | uVar8 << 0x1e;
    uVar53 = uVar17 + param_1[1] +
             (uVar8 & (uVar16 >> 2 | uVar16 << 0x1e) | uVar9 & (uVar8 ^ 0xffffffff)) + 0x5a827999 +
             (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar27 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar10 = param_1[2];
    uVar18 = param_1[3];
    uVar2 = uVar9 + uVar10 + (uVar1 & (uVar8 >> 2 | uVar8 << 0x1e) | uVar25 & (uVar1 ^ 0xffffffff))
            + 0x5a827999 + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar28 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar1 = uVar25 + uVar18 +
            (uVar53 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar26 & (uVar53 ^ 0xffffffff)) +
            0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar29 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar25 = param_1[4];
    uVar19 = param_1[5];
    uVar53 = uVar26 + uVar25 +
             (uVar2 & (uVar53 >> 2 | uVar53 * 0x40000000) | uVar27 & (uVar2 ^ 0xffffffff)) +
             0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar26 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar2 = uVar27 + uVar19 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar28 & (uVar1 ^ 0xffffffff)) + 0x5a827999
            + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar27 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar11 = param_1[6];
    uVar20 = param_1[7];
    uVar1 = uVar28 + uVar11 +
            (uVar53 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar29 & (uVar53 ^ 0xffffffff)) +
            0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar53 = uVar20 + uVar29 +
             (uVar2 & (uVar53 >> 2 | uVar53 * 0x40000000) | uVar26 & (uVar2 ^ 0xffffffff)) +
             0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar29 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar12 = param_1[8];
    uVar21 = param_1[9];
    uVar2 = uVar12 + uVar26 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar27 & (uVar1 ^ 0xffffffff)) + 0x5a827999
            + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar26 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar1 = uVar21 + uVar27 +
            (uVar53 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar28 & (uVar53 ^ 0xffffffff)) +
            0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar27 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar13 = param_1[10];
    uVar22 = param_1[0xb];
    uVar53 = uVar13 + uVar28 +
             (uVar2 & (uVar53 >> 2 | uVar53 * 0x40000000) | uVar29 & (uVar2 ^ 0xffffffff)) +
             0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar28 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar2 = uVar22 + uVar29 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar26 & (uVar1 ^ 0xffffffff)) + 0x5a827999
            + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar29 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar14 = param_1[0xc];
    uVar23 = param_1[0xd];
    uVar1 = uVar14 + uVar26 +
            (uVar53 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar27 & (uVar53 ^ 0xffffffff)) +
            0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar30 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar53 = uVar23 + uVar27 +
             (uVar2 & (uVar53 >> 2 | uVar53 * 0x40000000) | uVar28 & (uVar2 ^ 0xffffffff)) +
             0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar31 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar15 = param_1[0xe];
    uVar24 = param_1[0xf];
    uVar2 = uVar15 + uVar28 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar29 & (uVar1 ^ 0xffffffff)) + 0x5a827999
            + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar32 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar26 = uVar10 ^ *param_1 ^ uVar12 ^ uVar23;
    uVar1 = uVar24 + uVar29 +
            (uVar53 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar30 & (uVar53 ^ 0xffffffff)) +
            0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar29 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar27 = uVar18 ^ param_1[1] ^ uVar21 ^ uVar15;
    uVar53 = (uVar26 >> 0x1f | uVar26 << 1) + uVar30 +
             (uVar2 & (uVar53 >> 2 | uVar53 * 0x40000000) | uVar31 & (uVar2 ^ 0xffffffff)) +
             0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar30 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar28 = uVar25 ^ uVar10 ^ uVar13 ^ uVar24;
    uVar33 = uVar28 >> 0x1f | uVar28 << 1;
    uVar2 = (uVar27 >> 0x1f | uVar27 << 1) + uVar31 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar32 & (uVar1 ^ 0xffffffff)) + 0x5a827999
            + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar18 = uVar19 ^ uVar18 ^ uVar22 ^ (uVar26 >> 0x1f | uVar26 << 1);
    uVar1 = uVar33 + uVar32 +
            (uVar53 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar29 & (uVar53 ^ 0xffffffff)) +
            0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar31 = uVar18 >> 0x1f | uVar18 << 1;
    uVar32 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar10 = uVar31 + uVar29 +
             (uVar2 & (uVar53 >> 2 | uVar53 * 0x40000000) | uVar30 & (uVar2 ^ 0xffffffff)) +
             0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar29 = uVar11 ^ uVar25 ^ uVar14 ^ (uVar27 >> 0x1f | uVar27 << 1);
    uVar34 = uVar29 >> 0x1f | uVar29 << 1;
    uVar35 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar25 = uVar34 + uVar30 + (uVar32 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
             (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar19 = uVar20 ^ uVar19 ^ uVar23 ^ (uVar28 >> 0x1f | uVar28 << 1);
    uVar30 = uVar19 >> 0x1f | uVar19 << 1;
    uVar53 = uVar30 + (uVar53 >> 2 | uVar53 * 0x40000000) +
             (uVar35 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar10) + 0x6ed9eba1 +
             (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar36 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar11 = uVar12 ^ uVar11 ^ uVar15 ^ (uVar18 >> 0x1f | uVar18 << 1);
    uVar37 = uVar11 >> 0x1f | uVar11 << 1;
    uVar38 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar1 = uVar37 + uVar32 + (uVar36 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar25) + 0x6ed9eba1 +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar20 = uVar21 ^ uVar20 ^ uVar24 ^ (uVar29 >> 0x1f | uVar29 << 1);
    uVar32 = uVar20 >> 0x1f | uVar20 << 1;
    uVar2 = uVar32 + uVar35 + (uVar38 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar53) + 0x6ed9eba1 +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar35 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar12 = uVar13 ^ uVar12 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1);
    uVar39 = uVar12 >> 0x1f | uVar12 << 1;
    uVar40 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar10 = uVar39 + uVar36 + (uVar35 ^ (uVar25 >> 2 | uVar25 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
             (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar25 = uVar22 ^ uVar21 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1);
    uVar36 = uVar25 >> 0x1f | uVar25 << 1;
    uVar53 = uVar36 + uVar38 + (uVar40 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
             (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar38 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar13 = uVar14 ^ uVar13 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1);
    uVar41 = uVar13 >> 0x1f | uVar13 << 1;
    uVar42 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar1 = uVar41 + uVar35 + (uVar38 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + 0x6ed9eba1 +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar21 = uVar23 ^ uVar22 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1);
    uVar35 = uVar21 >> 0x1f | uVar21 << 1;
    uVar2 = uVar35 + uVar40 + (uVar42 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) + 0x6ed9eba1 +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar40 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar14 = uVar15 ^ uVar14 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1);
    uVar43 = uVar14 >> 0x1f | uVar14 << 1;
    uVar44 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar10 = uVar43 + uVar38 + (uVar40 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
             (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar22 = uVar24 ^ uVar23 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1);
    uVar38 = uVar22 >> 0x1f | uVar22 << 1;
    uVar53 = uVar38 + uVar42 + (uVar44 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
             (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar42 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar15 = uVar15 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar21 >> 0x1f | uVar21 << 1);
    uVar45 = uVar15 >> 0x1f | uVar15 << 1;
    uVar46 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar1 = uVar45 + uVar40 + (uVar42 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + 0x6ed9eba1 +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar23 = uVar24 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar40 = uVar23 >> 0x1f | uVar23 << 1;
    uVar2 = uVar40 + uVar44 + (uVar46 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) + 0x6ed9eba1 +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar24 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar26 = uVar33 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar22 >> 0x1f | uVar22 << 1);
    uVar33 = uVar26 >> 0x1f | uVar26 << 1;
    uVar10 = uVar33 + uVar42 + (uVar24 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
             (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar42 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar27 = uVar31 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
             (uVar15 >> 0x1f | uVar15 << 1);
    uVar31 = uVar27 >> 0x1f | uVar27 << 1;
    uVar53 = uVar31 + uVar46 + (uVar42 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
             (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar44 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar28 = uVar34 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar23 >> 0x1f | uVar23 << 1);
    uVar34 = uVar28 >> 0x1f | uVar28 << 1;
    uVar1 = uVar34 + uVar24 + (uVar44 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + 0x6ed9eba1 +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar24 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar18 = uVar30 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar26 >> 0x1f | uVar26 << 1);
    uVar30 = uVar18 >> 0x1f | uVar18 << 1;
    uVar2 = uVar30 + uVar42 + (uVar24 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) + 0x6ed9eba1 +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar42 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar29 = uVar37 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar27 >> 0x1f | uVar27 << 1);
    uVar37 = uVar29 >> 0x1f | uVar29 << 1;
    uVar10 = uVar37 + uVar44 + (uVar42 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
             (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar44 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar19 = uVar32 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
             (uVar28 >> 0x1f | uVar28 << 1);
    uVar32 = uVar19 >> 0x1f | uVar19 << 1;
    uVar53 = uVar32 + uVar24 + (uVar44 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + 0x6ed9eba1 +
             (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar24 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar11 = uVar39 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar39 = uVar11 >> 0x1f | uVar11 << 1;
    uVar1 = uVar39 + uVar42 + (uVar24 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + 0x6ed9eba1 +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar42 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar20 = uVar36 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
             (uVar29 >> 0x1f | uVar29 << 1);
    uVar36 = uVar20 >> 0x1f | uVar20 << 1;
    uVar2 = uVar36 + uVar44 + (uVar42 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) + 0x6ed9eba1 +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar12 = uVar41 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar41 = uVar12 >> 0x1f | uVar12 << 1;
    uVar10 = uVar41 + uVar24 +
             ((uVar1 | uVar53 >> 2 | uVar53 * 0x40000000) & (uVar10 >> 2 | uVar10 * 0x40000000) |
             uVar1 & (uVar53 >> 2 | uVar53 * 0x40000000)) +
             (uVar2 >> 0x1b | uVar2 * 0x20) + 0x8f1bbcdc;
    uVar24 = uVar35 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar35 = uVar24 >> 0x1f | uVar24 << 1;
    iVar3 = uVar35 + uVar42 +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar53 >> 2 | uVar53 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar13 = uVar43 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
             (uVar20 >> 0x1f | uVar20 << 1);
    uVar42 = uVar13 >> 0x1f | uVar13 << 1;
    uVar25 = iVar3 + 0x8f1bbcdc;
    iVar4 = uVar42 + (uVar53 >> 2 | uVar53 * 0x40000000) +
            ((uVar10 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar10 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar21 = uVar38 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
             (uVar12 >> 0x1f | uVar12 << 1);
    uVar38 = uVar21 >> 0x1f | uVar21 << 1;
    uVar53 = iVar4 + 0x8f1bbcdc;
    iVar5 = uVar38 + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar25 | uVar10 >> 2 | uVar10 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar25 & (uVar10 >> 2 | uVar10 * 0x40000000)) + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar14 = uVar45 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
             (uVar24 >> 0x1f | uVar24 << 1);
    uVar43 = uVar14 >> 0x1f | uVar14 << 1;
    uVar1 = iVar5 + 0x8f1bbcdc;
    iVar6 = uVar43 + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar53 | uVar25 >> 2 | iVar3 * 0x40000000) & (uVar10 >> 2 | uVar10 * 0x40000000) |
            uVar53 & (uVar25 >> 2 | iVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar22 = uVar40 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
             (uVar13 >> 0x1f | uVar13 << 1);
    uVar40 = uVar22 >> 0x1f | uVar22 << 1;
    uVar2 = iVar6 + 0x8f1bbcdc;
    iVar7 = uVar40 + (uVar10 >> 2 | uVar10 * 0x40000000) +
            ((uVar1 | uVar53 >> 2 | iVar4 * 0x40000000) & (uVar25 >> 2 | iVar3 * 0x40000000) |
            uVar1 & (uVar53 >> 2 | iVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar15 = uVar33 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar21 >> 0x1f | uVar21 << 1);
    uVar33 = uVar15 >> 0x1f | uVar15 << 1;
    uVar10 = iVar7 + 0x8f1bbcdc;
    iVar3 = uVar33 + (uVar25 >> 2 | iVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | iVar5 * 0x40000000) & (uVar53 >> 2 | iVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | iVar5 * 0x40000000)) + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar25 = iVar3 + 0x8f1bbcdc;
    uVar23 = uVar31 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar31 = uVar23 >> 0x1f | uVar23 << 1;
    iVar4 = uVar31 + (uVar53 >> 2 | iVar4 * 0x40000000) +
            ((uVar10 | uVar2 >> 2 | iVar6 * 0x40000000) & (uVar1 >> 2 | iVar5 * 0x40000000) |
            uVar10 & (uVar2 >> 2 | iVar6 * 0x40000000)) + (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar26 = uVar34 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar22 >> 0x1f | uVar22 << 1);
    uVar34 = uVar26 >> 0x1f | uVar26 << 1;
    uVar53 = iVar4 + 0x8f1bbcdc;
    iVar5 = uVar34 + (uVar1 >> 2 | iVar5 * 0x40000000) +
            ((uVar25 | uVar10 >> 2 | iVar7 * 0x40000000) & (uVar2 >> 2 | iVar6 * 0x40000000) |
            uVar25 & (uVar10 >> 2 | iVar7 * 0x40000000)) + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar27 = uVar30 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
             (uVar15 >> 0x1f | uVar15 << 1);
    uVar30 = uVar27 >> 0x1f | uVar27 << 1;
    uVar1 = iVar5 + 0x8f1bbcdc;
    iVar6 = uVar30 + (uVar2 >> 2 | iVar6 * 0x40000000) +
            ((uVar53 | uVar25 >> 2 | iVar3 * 0x40000000) & (uVar10 >> 2 | iVar7 * 0x40000000) |
            uVar53 & (uVar25 >> 2 | iVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar28 = uVar37 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar23 >> 0x1f | uVar23 << 1);
    uVar37 = uVar28 >> 0x1f | uVar28 << 1;
    uVar2 = iVar6 + 0x8f1bbcdc;
    iVar7 = uVar37 + (uVar10 >> 2 | iVar7 * 0x40000000) +
            ((uVar1 | uVar53 >> 2 | iVar4 * 0x40000000) & (uVar25 >> 2 | iVar3 * 0x40000000) |
            uVar1 & (uVar53 >> 2 | iVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar18 = uVar32 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar26 >> 0x1f | uVar26 << 1);
    uVar32 = uVar18 >> 0x1f | uVar18 << 1;
    uVar10 = iVar7 + 0x8f1bbcdc;
    iVar3 = uVar32 + (uVar25 >> 2 | iVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | iVar5 * 0x40000000) & (uVar53 >> 2 | iVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | iVar5 * 0x40000000)) + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar29 = uVar39 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar27 >> 0x1f | uVar27 << 1);
    uVar39 = uVar29 >> 0x1f | uVar29 << 1;
    uVar25 = iVar3 + 0x8f1bbcdc;
    iVar4 = uVar39 + (uVar53 >> 2 | iVar4 * 0x40000000) +
            ((uVar10 | uVar2 >> 2 | iVar6 * 0x40000000) & (uVar1 >> 2 | iVar5 * 0x40000000) |
            uVar10 & (uVar2 >> 2 | iVar6 * 0x40000000)) + (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar53 = iVar4 + 0x8f1bbcdc;
    uVar19 = uVar36 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
             (uVar28 >> 0x1f | uVar28 << 1);
    uVar36 = uVar19 >> 0x1f | uVar19 << 1;
    iVar5 = uVar36 + (uVar1 >> 2 | iVar5 * 0x40000000) +
            ((uVar25 | uVar10 >> 2 | iVar7 * 0x40000000) & (uVar2 >> 2 | iVar6 * 0x40000000) |
            uVar25 & (uVar10 >> 2 | iVar7 * 0x40000000)) + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar11 = uVar41 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar41 = uVar11 >> 0x1f | uVar11 << 1;
    uVar1 = iVar5 + 0x8f1bbcdc;
    iVar6 = uVar41 + (uVar2 >> 2 | iVar6 * 0x40000000) +
            ((uVar53 | uVar25 >> 2 | iVar3 * 0x40000000) & (uVar10 >> 2 | iVar7 * 0x40000000) |
            uVar53 & (uVar25 >> 2 | iVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar20 = uVar35 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
             (uVar29 >> 0x1f | uVar29 << 1);
    uVar35 = uVar20 >> 0x1f | uVar20 << 1;
    uVar2 = iVar6 + 0x8f1bbcdc;
    iVar7 = uVar35 + (uVar10 >> 2 | iVar7 * 0x40000000) +
            ((uVar1 | uVar53 >> 2 | iVar4 * 0x40000000) & (uVar25 >> 2 | iVar3 * 0x40000000) |
            uVar1 & (uVar53 >> 2 | iVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar42 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar42 = uVar12 >> 0x1f | uVar12 << 1;
    uVar10 = iVar7 + 0x8f1bbcdc;
    iVar3 = uVar42 + (uVar25 >> 2 | iVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | iVar5 * 0x40000000) & (uVar53 >> 2 | iVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | iVar5 * 0x40000000)) + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar24 = uVar38 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar38 = uVar24 >> 0x1f | uVar24 << 1;
    uVar25 = iVar3 + 0x8f1bbcdc;
    iVar4 = uVar38 + (uVar53 >> 2 | iVar4 * 0x40000000) +
            ((uVar10 | uVar2 >> 2 | iVar6 * 0x40000000) & (uVar1 >> 2 | iVar5 * 0x40000000) |
            uVar10 & (uVar2 >> 2 | iVar6 * 0x40000000)) + (uVar25 >> 0x1b | uVar25 * 0x20);
    uVar13 = uVar43 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
             (uVar20 >> 0x1f | uVar20 << 1);
    uVar43 = uVar13 >> 0x1f | uVar13 << 1;
    uVar53 = iVar4 + 0x8f1bbcdc;
    iVar5 = uVar43 + (uVar1 >> 2 | iVar5 * 0x40000000) +
            ((uVar25 | uVar10 >> 2 | iVar7 * 0x40000000) & (uVar2 >> 2 | iVar6 * 0x40000000) |
            uVar25 & (uVar10 >> 2 | iVar7 * 0x40000000)) + (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar1 = iVar5 + 0x8f1bbcdc;
    uVar21 = uVar40 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
             (uVar12 >> 0x1f | uVar12 << 1);
    uVar40 = uVar21 >> 0x1f | uVar21 << 1;
    iVar6 = uVar40 + (uVar2 >> 2 | iVar6 * 0x40000000) +
            ((uVar53 | uVar25 >> 2 | iVar3 * 0x40000000) & (uVar10 >> 2 | iVar7 * 0x40000000) |
            uVar53 & (uVar25 >> 2 | iVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar2 = iVar6 + 0x8f1bbcdc;
    uVar44 = uVar53 >> 2 | iVar4 * 0x40000000;
    uVar14 = uVar33 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
             (uVar24 >> 0x1f | uVar24 << 1);
    uVar33 = uVar14 >> 0x1f | uVar14 << 1;
    uVar10 = uVar33 + (uVar10 >> 2 | iVar7 * 0x40000000) +
             (uVar44 ^ (uVar25 >> 2 | iVar3 * 0x40000000) ^ uVar1) + -0x359d3e2a +
             (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar45 = uVar1 >> 2 | iVar5 * 0x40000000;
    uVar22 = uVar31 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
             (uVar13 >> 0x1f | uVar13 << 1);
    uVar31 = uVar22 >> 0x1f | uVar22 << 1;
    uVar53 = uVar31 + (uVar25 >> 2 | iVar3 * 0x40000000) +
             (uVar45 ^ (uVar53 >> 2 | iVar4 * 0x40000000) ^ uVar2) + -0x359d3e2a +
             (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar46 = uVar2 >> 2 | iVar6 * 0x40000000;
    uVar25 = uVar34 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar21 >> 0x1f | uVar21 << 1);
    uVar34 = uVar25 >> 0x1f | uVar25 << 1;
    uVar1 = uVar34 + uVar44 + (uVar46 ^ (uVar1 >> 2 | iVar5 * 0x40000000) ^ uVar10) + -0x359d3e2a +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar44 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = uVar30 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar23 = uVar15 >> 0x1f | uVar15 << 1;
    uVar2 = uVar23 + uVar45 + (uVar44 ^ (uVar2 >> 2 | iVar6 * 0x40000000) ^ uVar53) + -0x359d3e2a +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar30 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar26 = uVar37 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar22 >> 0x1f | uVar22 << 1);
    uVar37 = uVar26 >> 0x1f | uVar26 << 1;
    uVar10 = uVar37 + uVar46 + (uVar30 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar1) + -0x359d3e2a
             + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar45 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar27 = uVar32 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
             (uVar25 >> 0x1f | uVar25 << 1);
    uVar32 = uVar27 >> 0x1f | uVar27 << 1;
    uVar53 = uVar32 + uVar44 + (uVar45 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + -0x359d3e2a
             + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar44 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar28 = uVar39 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar15 >> 0x1f | uVar15 << 1);
    uVar39 = uVar28 >> 0x1f | uVar28 << 1;
    uVar1 = uVar39 + uVar30 + (uVar44 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + -0x359d3e2a +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar18 = uVar36 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar26 >> 0x1f | uVar26 << 1);
    uVar30 = uVar18 >> 0x1f | uVar18 << 1;
    param_1[2] = uVar39;
    param_1[3] = uVar30;
    uVar36 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar2 = uVar30 + uVar45 + (uVar36 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) + -0x359d3e2a +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar30 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar29 = uVar41 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar27 >> 0x1f | uVar27 << 1);
    uVar39 = uVar29 >> 0x1f | uVar29 << 1;
    uVar10 = uVar39 + uVar44 + (uVar30 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar1) + -0x359d3e2a
             + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar19 = uVar35 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
             (uVar28 >> 0x1f | uVar28 << 1);
    uVar35 = uVar19 >> 0x1f | uVar19 << 1;
    param_1[4] = uVar39;
    param_1[5] = uVar35;
    uVar39 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar53 = uVar35 + uVar36 + (uVar39 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + -0x359d3e2a
             + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar35 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar11 = uVar42 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar36 = uVar11 >> 0x1f | uVar11 << 1;
    uVar1 = uVar36 + uVar30 + (uVar35 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + -0x359d3e2a +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar20 = uVar38 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar29 >> 0x1f | uVar29 << 1);
    uVar30 = uVar20 >> 0x1f | uVar20 << 1;
    param_1[6] = uVar36;
    param_1[7] = uVar30;
    uVar36 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar2 = uVar30 + uVar39 + (uVar36 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) + -0x359d3e2a +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar30 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar26 = uVar43 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar12 = uVar26 >> 0x1f | uVar26 << 1;
    uVar10 = uVar12 + uVar35 + (uVar30 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar1) + -0x359d3e2a
             + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar27 = uVar40 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar24 = uVar27 >> 0x1f | uVar27 << 1;
    param_1[8] = uVar12;
    param_1[9] = uVar24;
    uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar53 = uVar24 + uVar36 + (uVar12 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + -0x359d3e2a
             + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar24 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar28 = uVar33 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
             (uVar20 >> 0x1f | uVar20 << 1);
    uVar13 = uVar28 >> 0x1f | uVar28 << 1;
    uVar1 = uVar13 + uVar30 + (uVar24 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + -0x359d3e2a +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar26 = uVar31 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
             (uVar26 >> 0x1f | uVar26 << 1);
    uVar18 = uVar26 >> 0x1f | uVar26 << 1;
    param_1[10] = uVar13;
    param_1[0xb] = uVar18;
    uVar13 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar2 = uVar18 + uVar12 + (uVar13 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) + -0x359d3e2a +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar27 = uVar34 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
             (uVar27 >> 0x1f | uVar27 << 1);
    uVar18 = uVar53 >> 2 | uVar53 * 0x40000000;
    uVar28 = uVar23 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
             (uVar28 >> 0x1f | uVar28 << 1);
    uVar29 = uVar27 >> 0x1f | uVar27 << 1;
    uVar28 = uVar28 >> 0x1f | uVar28 << 1;
    param_1[0xc] = uVar29;
    param_1[0xd] = uVar28;
    uVar10 = uVar29 + uVar24 + (uVar18 ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^ uVar1) + -0x359d3e2a
             + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar29 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar53 = uVar28 + uVar13 + (uVar29 ^ (uVar53 >> 2 | uVar53 * 0x40000000) ^ uVar2) + -0x359d3e2a
             + (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar25 = uVar37 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar26 >> 0x1f | uVar26 << 1);
    uVar26 = uVar25 >> 0x1f | uVar25 << 1;
    uVar1 = uVar26 + uVar18 + (uVar28 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar10) + -0x359d3e2a +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    *param_1 = uVar37;
    param_1[1] = uVar32;
    uVar25 = uVar32 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar27 >> 0x1f | uVar27 << 1);
    uVar25 = uVar25 >> 0x1f | uVar25 << 1;
    param_1[0xe] = uVar26;
    param_1[0xf] = uVar25;
    uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
    param_1[0x10] =
         uVar8 + uVar25 + uVar29 + (uVar10 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar53) +
         -0x359d3e2a + (uVar1 >> 0x1b | uVar1 * 0x20);
    param_1[0x11] = uVar1 + uVar16;
    param_1[0x12] = (uVar53 >> 2 | uVar53 * 0x40000000) + uVar9;
    param_1[0x13] = uVar10 + uVar17;
    param_1[0x14] = uVar28 + param_1[0x14];
    return param_1;
  }
  return puVar47;
}



/* Entry: 109dfc0c4; end: 109dfd217;  */

void FUN_109dfc0c4(uint *param_1)

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
  
  uVar9 = param_1[0x10];
  uVar17 = param_1[0x11];
  uVar26 = uVar17 >> 2 | uVar17 << 0x1e;
  uVar10 = param_1[0x12];
  uVar18 = param_1[0x13];
  uVar1 = (uVar9 >> 0x1b | uVar9 << 5) + param_1[0x14] + *param_1 +
          (uVar10 & uVar17 | uVar18 & (uVar17 ^ 0xffffffff)) + 0x5a827999;
  uVar27 = uVar9 >> 2 | uVar9 << 0x1e;
  uVar2 = uVar18 + param_1[1] +
          (uVar9 & (uVar17 >> 2 | uVar17 << 0x1e) | uVar10 & (uVar9 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar28 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = param_1[2];
  uVar19 = param_1[3];
  uVar3 = uVar10 + uVar11 + (uVar1 & (uVar9 >> 2 | uVar9 << 0x1e) | uVar26 & (uVar1 ^ 0xffffffff)) +
          0x5a827999 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar29 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar26 + uVar19 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar27 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar30 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar26 = param_1[4];
  uVar20 = param_1[5];
  uVar2 = uVar27 + uVar26 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar28 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar27 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar3 = uVar28 + uVar20 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar29 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar12 = param_1[6];
  uVar21 = param_1[7];
  uVar1 = uVar29 + uVar12 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar30 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar29 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar2 = uVar21 + uVar30 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar27 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar30 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar13 = param_1[8];
  uVar22 = param_1[9];
  uVar3 = uVar13 + uVar27 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar28 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar27 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar22 + uVar28 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar29 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar28 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar14 = param_1[10];
  uVar23 = param_1[0xb];
  uVar2 = uVar14 + uVar29 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar30 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar29 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar3 = uVar23 + uVar30 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar27 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar30 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar15 = param_1[0xc];
  uVar24 = param_1[0xd];
  uVar1 = uVar15 + uVar27 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar28 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar31 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar2 = uVar24 + uVar28 +
          (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar29 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar32 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar16 = param_1[0xe];
  uVar25 = param_1[0xf];
  uVar3 = uVar16 + uVar29 +
          (uVar1 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar30 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar33 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar27 = uVar11 ^ *param_1 ^ uVar13 ^ uVar24;
  uVar1 = uVar25 + uVar30 +
          (uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar31 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar30 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar28 = uVar19 ^ param_1[1] ^ uVar22 ^ uVar16;
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
  param_1[2] = uVar40;
  param_1[3] = uVar31;
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
  param_1[4] = uVar40;
  param_1[5] = uVar36;
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
  param_1[6] = uVar37;
  param_1[7] = uVar31;
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
  param_1[8] = uVar13;
  param_1[9] = uVar25;
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
  param_1[10] = uVar14;
  param_1[0xb] = uVar19;
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
  param_1[0xc] = uVar30;
  param_1[0xd] = uVar29;
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
  *param_1 = uVar38;
  param_1[1] = uVar33;
  uVar26 = uVar33 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  param_1[0xe] = uVar27;
  param_1[0xf] = uVar26;
  uVar11 = uVar11 >> 2 | uVar11 * 0x40000000;
  param_1[0x10] =
       uVar9 + uVar26 + uVar30 + (uVar11 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + -0x359d3e2a
       + (uVar1 >> 0x1b | uVar1 * 0x20);
  param_1[0x11] = uVar1 + uVar17;
  param_1[0x12] = (uVar2 >> 2 | uVar2 * 0x40000000) + uVar10;
  param_1[0x13] = uVar11 + uVar18;
  param_1[0x14] = uVar29 + param_1[0x14];
  return;
}



/* Entry: 109dfd218; end: 109dfd343;  */

void FUN_109dfd218(long param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)param_3;
  uVar4 = (ulong)*(byte *)(param_1 + 0x58);
  if (uVar4 != 0) {
    uVar6 = 0x40 - uVar4;
    puVar3 = param_2;
    uVar2 = uVar6;
    if (param_3 <= uVar6) {
      uVar6 = param_3;
      uVar2 = param_3;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)(param_1 + (uVar4 & 0xff ^ 3)) = *puVar3;
      uVar1 = *(byte *)(param_1 + 0x58) + 1;
      uVar4 = (ulong)uVar1;
      *(char *)(param_1 + 0x58) = (char)uVar1;
      if (uVar1 == 0x40) {
        FUN_109dfc0c4(param_1);
        uVar4 = 0;
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 - uVar2;
    param_2 = param_2 + uVar2;
  }
  for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
    lVar5 = 0;
    do {
      uVar1 = (*(uint *)(param_2 + lVar5) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + lVar5) & 0xff00ff) << 8;
      *(uint *)(param_1 + lVar5) = uVar1 >> 0x10 | uVar1 << 0x10;
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x40);
    FUN_109dfc0c4(param_1);
    param_2 = param_2 + 0x40;
  }
  if (param_3 != 0) {
    uVar4 = (ulong)*(byte *)(param_1 + 0x58);
    do {
      *(undefined1 *)(param_1 + (uVar4 & 0xff ^ 3)) = *param_2;
      uVar1 = *(byte *)(param_1 + 0x58) + 1;
      uVar4 = (ulong)uVar1;
      *(char *)(param_1 + 0x58) = (char)uVar1;
      if (uVar1 == 0x40) {
        FUN_109dfc0c4(param_1);
        uVar4 = 0;
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109dfd344; end: 109dfd4bf;  */

void FUN_109dfd344(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  
  *(undefined1 *)(param_1 + ((ulong)*(byte *)(param_1 + 0x58) ^ 3)) = 0x80;
  bVar2 = *(byte *)(param_1 + 0x58);
  uVar1 = bVar2 + 1;
  uVar3 = (ulong)uVar1;
  *(char *)(param_1 + 0x58) = (char)uVar1;
  if (bVar2 != 0x37) {
    if (bVar2 == 0x3f) {
      FUN_109dfc0c4(param_1);
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    do {
      *(undefined1 *)(param_1 + (uVar3 & 0xff ^ 3)) = 0;
      uVar1 = *(byte *)(param_1 + 0x58) + 1;
      uVar3 = (ulong)uVar1;
      *(char *)(param_1 + 0x58) = (char)uVar1;
      if (uVar1 == 0x40) {
        FUN_109dfc0c4(param_1);
        uVar3 = 0;
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
    } while (((uint)uVar3 & 0xff) != 0x38);
  }
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  uVar1 = *(uint *)(param_1 + 0x54);
  *(byte *)(param_1 + 0x38) = (byte)(uVar1 >> 0x1d);
  *(char *)(param_1 + 0x3f) = (char)(uVar1 >> 0x15);
  *(char *)(param_1 + 0x3e) = (char)(uVar1 >> 0xd);
  *(char *)(param_1 + 0x3d) = (char)(uVar1 >> 5);
  *(char *)(param_1 + 0x3c) = (char)(uVar1 << 3);
  *(undefined1 *)(param_1 + 0x58) = 0x40;
  FUN_109dfc0c4(param_1);
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 109dfd4c0; end: 109dff25b;  */

void FUN_109dfd4c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  
  uVar12 = param_1[0x14];
  uVar22 = param_1[0x15];
  uVar13 = param_1[0x10];
  uVar23 = param_1[0x11];
  uVar14 = param_1[0x12];
  uVar15 = param_1[0x16];
  uVar24 = param_1[1];
  uVar16 = param_1[2];
  uVar25 = param_1[3];
  uVar17 = param_1[0xe];
  uVar26 = param_1[0xf];
  uVar18 = param_1[4];
  uVar27 = param_1[5];
  uVar19 = param_1[9];
  uVar28 = param_1[10];
  uVar20 = param_1[0xb];
  uVar29 = param_1[0xc];
  uVar31 = param_1[0xd];
  iVar1 = ((uVar12 >> 6 | uVar12 << 0x1a) ^ (uVar12 >> 0xb | uVar12 << 0x15) ^
          (uVar12 >> 0x19 | uVar12 << 7)) +
          param_1[0x17] + (uVar15 & (uVar12 ^ 0xffffffff) | uVar22 & uVar12) + *param_1 + 0x428a2f98
  ;
  uVar2 = iVar1 + param_1[0x13];
  uVar3 = ((uVar14 ^ uVar23) & uVar13 ^ uVar14 & uVar23) +
          ((uVar13 >> 2 | uVar13 << 0x1e) ^ (uVar13 >> 0xd | uVar13 << 0x13) ^
          (uVar13 >> 0x16 | uVar13 << 10)) + iVar1;
  uVar4 = ((uVar24 >> 7 | uVar24 << 0x19) ^ (uVar24 >> 0x12 | uVar24 << 0xe) ^ uVar24 >> 3) +
          *param_1 + uVar19 +
          ((uVar17 >> 0x11 | uVar17 << 0xf) ^ (uVar17 >> 0x13 | uVar17 << 0xd) ^ uVar17 >> 10);
  iVar1 = uVar15 + uVar24 + (uVar2 & uVar12 | uVar22 & (uVar2 ^ 0xffffffff)) + 0x71374491 +
          ((uVar2 >> 6 | uVar2 * 0x4000000) ^ (uVar2 >> 0xb | uVar2 * 0x200000) ^
          (uVar2 >> 0x19 | uVar2 * 0x80));
  uVar5 = iVar1 + uVar14;
  uVar6 = ((uVar3 >> 2 | uVar3 * 0x40000000) ^ (uVar3 >> 0xd | uVar3 * 0x80000) ^
          (uVar3 >> 0x16 | uVar3 * 0x400)) + (uVar3 & (uVar23 ^ uVar13) ^ uVar23 & uVar13) + iVar1;
  uVar24 = ((uVar16 >> 7 | uVar16 << 0x19) ^ (uVar16 >> 0x12 | uVar16 << 0xe) ^ uVar16 >> 3) +
           uVar24 + uVar28 +
           ((uVar26 >> 0x11 | uVar26 << 0xf) ^ (uVar26 >> 0x13 | uVar26 << 0xd) ^ uVar26 >> 10);
  iVar1 = uVar22 + uVar16 + (uVar5 & uVar2 | uVar12 & (uVar5 ^ 0xffffffff)) + -0x4a3f0431 +
          ((uVar5 >> 6 | uVar5 * 0x4000000) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
          (uVar5 >> 0x19 | uVar5 * 0x80));
  uVar7 = iVar1 + uVar23;
  uVar8 = ((uVar6 >> 2 | uVar6 * 0x40000000) ^ (uVar6 >> 0xd | uVar6 * 0x80000) ^
          (uVar6 >> 0x16 | uVar6 * 0x400)) + (uVar6 & (uVar3 ^ uVar13) ^ uVar3 & uVar13) + iVar1;
  uVar16 = ((uVar25 >> 7 | uVar25 << 0x19) ^ (uVar25 >> 0x12 | uVar25 << 0xe) ^ uVar25 >> 3) +
           uVar16 + uVar20 +
           ((uVar4 >> 0x11 | uVar4 * 0x8000) ^ (uVar4 >> 0x13 | uVar4 * 0x2000) ^ uVar4 >> 10);
  iVar1 = uVar12 + uVar25 + (uVar7 & uVar5 | uVar2 & (uVar7 ^ 0xffffffff)) + -0x164a245b +
          ((uVar7 >> 6 | uVar7 * 0x4000000) ^ (uVar7 >> 0xb | uVar7 * 0x200000) ^
          (uVar7 >> 0x19 | uVar7 * 0x80));
  uVar9 = iVar1 + uVar13;
  uVar10 = ((uVar8 >> 2 | uVar8 * 0x40000000) ^ (uVar8 >> 0xd | uVar8 * 0x80000) ^
           (uVar8 >> 0x16 | uVar8 * 0x400)) + (uVar8 & (uVar6 ^ uVar3) ^ uVar6 & uVar3) + iVar1;
  uVar25 = ((uVar18 >> 7 | uVar18 << 0x19) ^ (uVar18 >> 0x12 | uVar18 << 0xe) ^ uVar18 >> 3) +
           uVar25 + uVar29 +
           ((uVar24 >> 0x11 | uVar24 * 0x8000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000) ^ uVar24 >> 10);
  iVar1 = uVar18 + uVar2 + (uVar9 & uVar7 | uVar5 & (uVar9 ^ 0xffffffff)) + 0x3956c25b +
          ((uVar9 >> 6 | uVar9 * 0x4000000) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
          (uVar9 >> 0x19 | uVar9 * 0x80));
  uVar3 = iVar1 + uVar3;
  uVar11 = ((uVar10 >> 2 | uVar10 * 0x40000000) ^ (uVar10 >> 0xd | uVar10 * 0x80000) ^
           (uVar10 >> 0x16 | uVar10 * 0x400)) + (uVar10 & (uVar8 ^ uVar6) ^ uVar8 & uVar6) + iVar1;
  uVar2 = ((uVar27 >> 7 | uVar27 << 0x19) ^ (uVar27 >> 0x12 | uVar27 << 0xe) ^ uVar27 >> 3) +
          uVar18 + uVar31 +
          ((uVar16 >> 0x11 | uVar16 * 0x8000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000) ^ uVar16 >> 10);
  iVar1 = uVar27 + uVar5 + (uVar3 & uVar9 | uVar7 & (uVar3 ^ 0xffffffff)) + 0x59f111f1 +
          ((uVar3 >> 6 | uVar3 * 0x4000000) ^ (uVar3 >> 0xb | uVar3 * 0x200000) ^
          (uVar3 >> 0x19 | uVar3 * 0x80));
  uVar6 = iVar1 + uVar6;
  uVar18 = ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar11 >> 0xd | uVar11 * 0x80000) ^
           (uVar11 >> 0x16 | uVar11 * 0x400)) + (uVar11 & (uVar10 ^ uVar8) ^ uVar10 & uVar8) + iVar1
  ;
  uVar21 = param_1[6];
  uVar30 = param_1[7];
  uVar5 = ((uVar21 >> 7 | uVar21 << 0x19) ^ (uVar21 >> 0x12 | uVar21 << 0xe) ^ uVar21 >> 3) +
          uVar27 + uVar17 +
          ((uVar25 >> 0x11 | uVar25 * 0x8000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000) ^ uVar25 >> 10);
  iVar1 = uVar21 + uVar7 + (uVar6 & uVar3 | uVar9 & (uVar6 ^ 0xffffffff)) + -0x6dc07d5c +
          ((uVar6 >> 6 | uVar6 * 0x4000000) ^ (uVar6 >> 0xb | uVar6 * 0x200000) ^
          (uVar6 >> 0x19 | uVar6 * 0x80));
  uVar8 = iVar1 + uVar8;
  uVar27 = ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
           (uVar18 >> 0x16 | uVar18 * 0x400)) + (uVar18 & (uVar11 ^ uVar10) ^ uVar11 & uVar10) +
           iVar1;
  uVar7 = ((uVar30 >> 7 | uVar30 << 0x19) ^ (uVar30 >> 0x12 | uVar30 << 0xe) ^ uVar30 >> 3) +
          uVar21 + uVar26 +
          ((uVar2 >> 0x11 | uVar2 * 0x8000) ^ (uVar2 >> 0x13 | uVar2 * 0x2000) ^ uVar2 >> 10);
  iVar1 = uVar30 + uVar9 + (uVar8 & uVar6 | uVar3 & (uVar8 ^ 0xffffffff)) + -0x54e3a12b +
          ((uVar8 >> 6 | uVar8 * 0x4000000) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
          (uVar8 >> 0x19 | uVar8 * 0x80));
  uVar10 = iVar1 + uVar10;
  uVar21 = ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar27 >> 0xd | uVar27 * 0x80000) ^
           (uVar27 >> 0x16 | uVar27 * 0x400)) + (uVar27 & (uVar18 ^ uVar11) ^ uVar18 & uVar11) +
           iVar1;
  uVar32 = param_1[8];
  uVar9 = ((uVar32 >> 7 | uVar32 << 0x19) ^ (uVar32 >> 0x12 | uVar32 << 0xe) ^ uVar32 >> 3) + uVar30
          + uVar4 + ((uVar5 >> 0x11 | uVar5 * 0x8000) ^ (uVar5 >> 0x13 | uVar5 * 0x2000) ^
                    uVar5 >> 10);
  iVar1 = uVar32 + uVar3 + (uVar10 & uVar8 | uVar6 & (uVar10 ^ 0xffffffff)) + -0x27f85568 +
          ((uVar10 >> 6 | uVar10 * 0x4000000) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
          (uVar10 >> 0x19 | uVar10 * 0x80));
  uVar11 = iVar1 + uVar11;
  uVar30 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
           (uVar21 >> 0x16 | uVar21 * 0x400)) + (uVar21 & (uVar27 ^ uVar18) ^ uVar27 & uVar18) +
           iVar1;
  uVar3 = ((uVar19 >> 7 | uVar19 << 0x19) ^ (uVar19 >> 0x12 | uVar19 << 0xe) ^ uVar19 >> 3) + uVar32
          + uVar24 +
          ((uVar7 >> 0x11 | uVar7 * 0x8000) ^ (uVar7 >> 0x13 | uVar7 * 0x2000) ^ uVar7 >> 10);
  iVar1 = uVar19 + uVar6 + (uVar11 & uVar10 | uVar8 & (uVar11 ^ 0xffffffff)) + 0x12835b01 +
          ((uVar11 >> 6 | uVar11 * 0x4000000) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
          (uVar11 >> 0x19 | uVar11 * 0x80));
  uVar18 = iVar1 + uVar18;
  uVar32 = ((uVar30 >> 2 | uVar30 * 0x40000000) ^ (uVar30 >> 0xd | uVar30 * 0x80000) ^
           (uVar30 >> 0x16 | uVar30 * 0x400)) + (uVar30 & (uVar21 ^ uVar27) ^ uVar21 & uVar27) +
           iVar1;
  uVar6 = ((uVar28 >> 7 | uVar28 << 0x19) ^ (uVar28 >> 0x12 | uVar28 << 0xe) ^ uVar28 >> 3) + uVar19
          + uVar16 +
          ((uVar9 >> 0x11 | uVar9 * 0x8000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000) ^ uVar9 >> 10);
  iVar1 = uVar28 + uVar8 + (uVar18 & uVar11 | uVar10 & (uVar18 ^ 0xffffffff)) + 0x243185be +
          ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
          (uVar18 >> 0x19 | uVar18 * 0x80));
  uVar27 = iVar1 + uVar27;
  uVar19 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
           (uVar32 >> 0x16 | uVar32 * 0x400)) + (uVar32 & (uVar30 ^ uVar21) ^ uVar30 & uVar21) +
           iVar1;
  uVar8 = ((uVar20 >> 7 | uVar20 << 0x19) ^ (uVar20 >> 0x12 | uVar20 << 0xe) ^ uVar20 >> 3) + uVar28
          + uVar25 +
          ((uVar3 >> 0x11 | uVar3 * 0x8000) ^ (uVar3 >> 0x13 | uVar3 * 0x2000) ^ uVar3 >> 10);
  iVar1 = uVar20 + uVar10 + (uVar27 & uVar18 | uVar11 & (uVar27 ^ 0xffffffff)) + 0x550c7dc3 +
          ((uVar27 >> 6 | uVar27 * 0x4000000) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
          (uVar27 >> 0x19 | uVar27 * 0x80));
  uVar21 = iVar1 + uVar21;
  uVar28 = ((uVar19 >> 2 | uVar19 * 0x40000000) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
           (uVar19 >> 0x16 | uVar19 * 0x400)) + (uVar19 & (uVar32 ^ uVar30) ^ uVar32 & uVar30) +
           iVar1;
  uVar10 = ((uVar29 >> 7 | uVar29 << 0x19) ^ (uVar29 >> 0x12 | uVar29 << 0xe) ^ uVar29 >> 3) +
           uVar20 + uVar2 +
           ((uVar6 >> 0x11 | uVar6 * 0x8000) ^ (uVar6 >> 0x13 | uVar6 * 0x2000) ^ uVar6 >> 10);
  iVar1 = uVar29 + uVar11 + (uVar21 & uVar27 | uVar18 & (uVar21 ^ 0xffffffff)) + 0x72be5d74 +
          ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
          (uVar21 >> 0x19 | uVar21 * 0x80));
  uVar30 = iVar1 + uVar30;
  uVar20 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
           (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar19 ^ uVar32) ^ uVar19 & uVar32) +
           iVar1;
  uVar11 = ((uVar31 >> 7 | uVar31 << 0x19) ^ (uVar31 >> 0x12 | uVar31 << 0xe) ^ uVar31 >> 3) +
           uVar29 + uVar5 +
           ((uVar8 >> 0x11 | uVar8 * 0x8000) ^ (uVar8 >> 0x13 | uVar8 * 0x2000) ^ uVar8 >> 10);
  iVar1 = uVar31 + uVar18 + (uVar30 & uVar21 | uVar27 & (uVar30 ^ 0xffffffff)) + -0x7f214e02 +
          ((uVar30 >> 6 | uVar30 * 0x4000000) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
          (uVar30 >> 0x19 | uVar30 * 0x80));
  uVar32 = iVar1 + uVar32;
  uVar29 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
           (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar28 ^ uVar19) ^ uVar28 & uVar19) +
           iVar1;
  uVar18 = ((uVar17 >> 7 | uVar17 << 0x19) ^ (uVar17 >> 0x12 | uVar17 << 0xe) ^ uVar17 >> 3) +
           uVar31 + uVar7 +
           ((uVar10 >> 0x11 | uVar10 * 0x8000) ^ (uVar10 >> 0x13 | uVar10 * 0x2000) ^ uVar10 >> 10);
  iVar1 = uVar17 + uVar27 + (uVar32 & uVar30 | uVar21 & (uVar32 ^ 0xffffffff)) + -0x6423f959 +
          ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
          (uVar32 >> 0x19 | uVar32 * 0x80));
  uVar19 = iVar1 + uVar19;
  uVar31 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
           (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar20 ^ uVar28) ^ uVar20 & uVar28) +
           iVar1;
  uVar27 = ((uVar26 >> 7 | uVar26 << 0x19) ^ (uVar26 >> 0x12 | uVar26 << 0xe) ^ uVar26 >> 3) +
           uVar17 + uVar9 +
           ((uVar11 >> 0x11 | uVar11 * 0x8000) ^ (uVar11 >> 0x13 | uVar11 * 0x2000) ^ uVar11 >> 10);
  iVar1 = uVar26 + uVar21 + (uVar19 & uVar32 | uVar30 & (uVar19 ^ 0xffffffff)) + -0x3e640e8c +
          ((uVar19 >> 6 | uVar19 * 0x4000000) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
          (uVar19 >> 0x19 | uVar19 * 0x80));
  uVar28 = iVar1 + uVar28;
  uVar17 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 0x16 | uVar31 * 0x400)) + (uVar31 & (uVar29 ^ uVar20) ^ uVar29 & uVar20) +
           iVar1;
  uVar21 = ((uVar4 >> 7 | uVar4 * 0x2000000) ^ (uVar4 >> 0x12 | uVar4 * 0x4000) ^ uVar4 >> 3) +
           uVar26 + uVar3 +
           ((uVar18 >> 0x11 | uVar18 * 0x8000) ^ (uVar18 >> 0x13 | uVar18 * 0x2000) ^ uVar18 >> 10);
  iVar1 = uVar4 + uVar30 + (uVar28 & uVar19 | uVar32 & (uVar28 ^ 0xffffffff)) + -0x1b64963f +
          ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
          (uVar28 >> 0x19 | uVar28 * 0x80));
  uVar20 = iVar1 + uVar20;
  uVar30 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
           (uVar17 >> 0x16 | uVar17 * 0x400)) + (uVar17 & (uVar31 ^ uVar29) ^ uVar31 & uVar29) +
           iVar1;
  uVar4 = ((uVar24 >> 7 | uVar24 * 0x2000000) ^ (uVar24 >> 0x12 | uVar24 * 0x4000) ^ uVar24 >> 3) +
          uVar4 + uVar6 +
          ((uVar27 >> 0x11 | uVar27 * 0x8000) ^ (uVar27 >> 0x13 | uVar27 * 0x2000) ^ uVar27 >> 10);
  iVar1 = uVar24 + uVar32 + (uVar20 & uVar28 | uVar19 & (uVar20 ^ 0xffffffff)) + -0x1041b87a +
          ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
          (uVar20 >> 0x19 | uVar20 * 0x80));
  uVar29 = iVar1 + uVar29;
  uVar32 = ((uVar30 >> 2 | uVar30 * 0x40000000) ^ (uVar30 >> 0xd | uVar30 * 0x80000) ^
           (uVar30 >> 0x16 | uVar30 * 0x400)) + (uVar30 & (uVar17 ^ uVar31) ^ uVar17 & uVar31) +
           iVar1;
  uVar24 = ((uVar16 >> 7 | uVar16 * 0x2000000) ^ (uVar16 >> 0x12 | uVar16 * 0x4000) ^ uVar16 >> 3) +
           uVar24 + uVar8 +
           ((uVar21 >> 0x11 | uVar21 * 0x8000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000) ^ uVar21 >> 10);
  iVar1 = uVar16 + uVar19 + (uVar29 & uVar20 | uVar28 & (uVar29 ^ 0xffffffff)) + 0xfc19dc6 +
          ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
          (uVar29 >> 0x19 | uVar29 * 0x80));
  uVar31 = iVar1 + uVar31;
  uVar19 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
           (uVar32 >> 0x16 | uVar32 * 0x400)) + (uVar32 & (uVar30 ^ uVar17) ^ uVar30 & uVar17) +
           iVar1;
  uVar16 = ((uVar25 >> 7 | uVar25 * 0x2000000) ^ (uVar25 >> 0x12 | uVar25 * 0x4000) ^ uVar25 >> 3) +
           uVar16 + uVar10 +
           ((uVar4 >> 0x11 | uVar4 * 0x8000) ^ (uVar4 >> 0x13 | uVar4 * 0x2000) ^ uVar4 >> 10);
  iVar1 = uVar25 + uVar28 + (uVar31 & uVar29 | uVar20 & (uVar31 ^ 0xffffffff)) + 0x240ca1cc +
          ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
          (uVar31 >> 0x19 | uVar31 * 0x80));
  uVar17 = iVar1 + uVar17;
  uVar28 = ((uVar19 >> 2 | uVar19 * 0x40000000) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
           (uVar19 >> 0x16 | uVar19 * 0x400)) + (uVar19 & (uVar32 ^ uVar30) ^ uVar32 & uVar30) +
           iVar1;
  uVar25 = ((uVar2 >> 7 | uVar2 * 0x2000000) ^ (uVar2 >> 0x12 | uVar2 * 0x4000) ^ uVar2 >> 3) +
           uVar25 + uVar11 +
           ((uVar24 >> 0x11 | uVar24 * 0x8000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000) ^ uVar24 >> 10);
  iVar1 = uVar2 + uVar20 + (uVar17 & uVar31 | uVar29 & (uVar17 ^ 0xffffffff)) + 0x2de92c6f +
          ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
          (uVar17 >> 0x19 | uVar17 * 0x80));
  uVar30 = iVar1 + uVar30;
  uVar20 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
           (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar19 ^ uVar32) ^ uVar19 & uVar32) +
           iVar1;
  uVar2 = ((uVar5 >> 7 | uVar5 * 0x2000000) ^ (uVar5 >> 0x12 | uVar5 * 0x4000) ^ uVar5 >> 3) + uVar2
          + uVar18 +
          ((uVar16 >> 0x11 | uVar16 * 0x8000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000) ^ uVar16 >> 10);
  iVar1 = uVar5 + uVar29 + (uVar30 & uVar17 | uVar31 & (uVar30 ^ 0xffffffff)) + 0x4a7484aa +
          ((uVar30 >> 6 | uVar30 * 0x4000000) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
          (uVar30 >> 0x19 | uVar30 * 0x80));
  uVar32 = iVar1 + uVar32;
  uVar29 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
           (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar28 ^ uVar19) ^ uVar28 & uVar19) +
           iVar1;
  uVar5 = ((uVar7 >> 7 | uVar7 * 0x2000000) ^ (uVar7 >> 0x12 | uVar7 * 0x4000) ^ uVar7 >> 3) + uVar5
          + uVar27 +
          ((uVar25 >> 0x11 | uVar25 * 0x8000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000) ^ uVar25 >> 10);
  iVar1 = uVar7 + uVar31 + (uVar32 & uVar30 | uVar17 & (uVar32 ^ 0xffffffff)) + 0x5cb0a9dc +
          ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
          (uVar32 >> 0x19 | uVar32 * 0x80));
  uVar19 = iVar1 + uVar19;
  uVar31 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
           (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar20 ^ uVar28) ^ uVar20 & uVar28) +
           iVar1;
  uVar7 = ((uVar9 >> 7 | uVar9 * 0x2000000) ^ (uVar9 >> 0x12 | uVar9 * 0x4000) ^ uVar9 >> 3) + uVar7
          + uVar21 +
          ((uVar2 >> 0x11 | uVar2 * 0x8000) ^ (uVar2 >> 0x13 | uVar2 * 0x2000) ^ uVar2 >> 10);
  iVar1 = uVar9 + uVar17 + (uVar19 & uVar32 | uVar30 & (uVar19 ^ 0xffffffff)) + 0x76f988da +
          ((uVar19 >> 6 | uVar19 * 0x4000000) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
          (uVar19 >> 0x19 | uVar19 * 0x80));
  uVar28 = iVar1 + uVar28;
  uVar17 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 0x16 | uVar31 * 0x400)) + (uVar31 & (uVar29 ^ uVar20) ^ uVar29 & uVar20) +
           iVar1;
  uVar9 = ((uVar3 >> 7 | uVar3 * 0x2000000) ^ (uVar3 >> 0x12 | uVar3 * 0x4000) ^ uVar3 >> 3) + uVar9
          + uVar4 + ((uVar5 >> 0x11 | uVar5 * 0x8000) ^ (uVar5 >> 0x13 | uVar5 * 0x2000) ^
                    uVar5 >> 10);
  iVar1 = uVar3 + uVar30 + (uVar28 & uVar19 | uVar32 & (uVar28 ^ 0xffffffff)) + -0x67c1aeae +
          ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
          (uVar28 >> 0x19 | uVar28 * 0x80));
  uVar20 = iVar1 + uVar20;
  uVar30 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
           (uVar17 >> 0x16 | uVar17 * 0x400)) + (uVar17 & (uVar31 ^ uVar29) ^ uVar31 & uVar29) +
           iVar1;
  uVar3 = ((uVar6 >> 7 | uVar6 * 0x2000000) ^ (uVar6 >> 0x12 | uVar6 * 0x4000) ^ uVar6 >> 3) + uVar3
          + uVar24 +
          ((uVar7 >> 0x11 | uVar7 * 0x8000) ^ (uVar7 >> 0x13 | uVar7 * 0x2000) ^ uVar7 >> 10);
  iVar1 = uVar6 + uVar32 + (uVar20 & uVar28 | uVar19 & (uVar20 ^ 0xffffffff)) + -0x57ce3993 +
          ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
          (uVar20 >> 0x19 | uVar20 * 0x80));
  uVar29 = iVar1 + uVar29;
  uVar32 = ((uVar30 >> 2 | uVar30 * 0x40000000) ^ (uVar30 >> 0xd | uVar30 * 0x80000) ^
           (uVar30 >> 0x16 | uVar30 * 0x400)) + (uVar30 & (uVar17 ^ uVar31) ^ uVar17 & uVar31) +
           iVar1;
  uVar6 = ((uVar8 >> 7 | uVar8 * 0x2000000) ^ (uVar8 >> 0x12 | uVar8 * 0x4000) ^ uVar8 >> 3) + uVar6
          + uVar16 +
          ((uVar9 >> 0x11 | uVar9 * 0x8000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000) ^ uVar9 >> 10);
  iVar1 = uVar8 + uVar19 + (uVar29 & uVar20 | uVar28 & (uVar29 ^ 0xffffffff)) + -0x4ffcd838 +
          ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
          (uVar29 >> 0x19 | uVar29 * 0x80));
  uVar31 = iVar1 + uVar31;
  uVar19 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
           (uVar32 >> 0x16 | uVar32 * 0x400)) + (uVar32 & (uVar30 ^ uVar17) ^ uVar30 & uVar17) +
           iVar1;
  uVar8 = ((uVar10 >> 7 | uVar10 * 0x2000000) ^ (uVar10 >> 0x12 | uVar10 * 0x4000) ^ uVar10 >> 3) +
          uVar8 + uVar25 +
          ((uVar3 >> 0x11 | uVar3 * 0x8000) ^ (uVar3 >> 0x13 | uVar3 * 0x2000) ^ uVar3 >> 10);
  iVar1 = uVar10 + uVar28 + (uVar31 & uVar29 | uVar20 & (uVar31 ^ 0xffffffff)) + -0x40a68039 +
          ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
          (uVar31 >> 0x19 | uVar31 * 0x80));
  uVar17 = iVar1 + uVar17;
  uVar28 = ((uVar19 >> 2 | uVar19 * 0x40000000) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
           (uVar19 >> 0x16 | uVar19 * 0x400)) + (uVar19 & (uVar32 ^ uVar30) ^ uVar32 & uVar30) +
           iVar1;
  uVar10 = ((uVar11 >> 7 | uVar11 * 0x2000000) ^ (uVar11 >> 0x12 | uVar11 * 0x4000) ^ uVar11 >> 3) +
           uVar10 + uVar2 +
           ((uVar6 >> 0x11 | uVar6 * 0x8000) ^ (uVar6 >> 0x13 | uVar6 * 0x2000) ^ uVar6 >> 10);
  iVar1 = uVar11 + uVar20 + (uVar17 & uVar31 | uVar29 & (uVar17 ^ 0xffffffff)) + -0x391ff40d +
          ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
          (uVar17 >> 0x19 | uVar17 * 0x80));
  uVar30 = iVar1 + uVar30;
  uVar20 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
           (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar19 ^ uVar32) ^ uVar19 & uVar32) +
           iVar1;
  uVar11 = ((uVar18 >> 7 | uVar18 * 0x2000000) ^ (uVar18 >> 0x12 | uVar18 * 0x4000) ^ uVar18 >> 3) +
           uVar11 + uVar5 +
           ((uVar8 >> 0x11 | uVar8 * 0x8000) ^ (uVar8 >> 0x13 | uVar8 * 0x2000) ^ uVar8 >> 10);
  iVar1 = uVar18 + uVar29 + (uVar30 & uVar17 | uVar31 & (uVar30 ^ 0xffffffff)) + -0x2a586eb9 +
          ((uVar30 >> 6 | uVar30 * 0x4000000) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
          (uVar30 >> 0x19 | uVar30 * 0x80));
  uVar32 = iVar1 + uVar32;
  uVar29 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
           (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar28 ^ uVar19) ^ uVar28 & uVar19) +
           iVar1;
  uVar18 = ((uVar27 >> 7 | uVar27 * 0x2000000) ^ (uVar27 >> 0x12 | uVar27 * 0x4000) ^ uVar27 >> 3) +
           uVar18 + uVar7 +
           ((uVar10 >> 0x11 | uVar10 * 0x8000) ^ (uVar10 >> 0x13 | uVar10 * 0x2000) ^ uVar10 >> 10);
  iVar1 = uVar27 + uVar31 + (uVar32 & uVar30 | uVar17 & (uVar32 ^ 0xffffffff)) + 0x6ca6351 +
          ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
          (uVar32 >> 0x19 | uVar32 * 0x80));
  uVar19 = iVar1 + uVar19;
  uVar31 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
           (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar20 ^ uVar28) ^ uVar20 & uVar28) +
           iVar1;
  uVar27 = ((uVar21 >> 7 | uVar21 * 0x2000000) ^ (uVar21 >> 0x12 | uVar21 * 0x4000) ^ uVar21 >> 3) +
           uVar27 + uVar9 +
           ((uVar11 >> 0x11 | uVar11 * 0x8000) ^ (uVar11 >> 0x13 | uVar11 * 0x2000) ^ uVar11 >> 10);
  iVar1 = uVar21 + uVar17 + (uVar19 & uVar32 | uVar30 & (uVar19 ^ 0xffffffff)) + 0x14292967 +
          ((uVar19 >> 6 | uVar19 * 0x4000000) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
          (uVar19 >> 0x19 | uVar19 * 0x80));
  uVar28 = iVar1 + uVar28;
  uVar17 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 0x16 | uVar31 * 0x400)) + (uVar31 & (uVar29 ^ uVar20) ^ uVar29 & uVar20) +
           iVar1;
  uVar21 = ((uVar4 >> 7 | uVar4 * 0x2000000) ^ (uVar4 >> 0x12 | uVar4 * 0x4000) ^ uVar4 >> 3) +
           uVar21 + uVar3 +
           ((uVar18 >> 0x11 | uVar18 * 0x8000) ^ (uVar18 >> 0x13 | uVar18 * 0x2000) ^ uVar18 >> 10);
  iVar1 = uVar4 + uVar30 + (uVar28 & uVar19 | uVar32 & (uVar28 ^ 0xffffffff)) + 0x27b70a85 +
          ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
          (uVar28 >> 0x19 | uVar28 * 0x80));
  uVar20 = iVar1 + uVar20;
  uVar30 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
           (uVar17 >> 0x16 | uVar17 * 0x400)) + (uVar17 & (uVar31 ^ uVar29) ^ uVar31 & uVar29) +
           iVar1;
  uVar4 = ((uVar24 >> 7 | uVar24 * 0x2000000) ^ (uVar24 >> 0x12 | uVar24 * 0x4000) ^ uVar24 >> 3) +
          uVar4 + uVar6 +
          ((uVar27 >> 0x11 | uVar27 * 0x8000) ^ (uVar27 >> 0x13 | uVar27 * 0x2000) ^ uVar27 >> 10);
  iVar1 = uVar24 + uVar32 + (uVar20 & uVar28 | uVar19 & (uVar20 ^ 0xffffffff)) + 0x2e1b2138 +
          ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
          (uVar20 >> 0x19 | uVar20 * 0x80));
  uVar29 = iVar1 + uVar29;
  uVar32 = ((uVar30 >> 2 | uVar30 * 0x40000000) ^ (uVar30 >> 0xd | uVar30 * 0x80000) ^
           (uVar30 >> 0x16 | uVar30 * 0x400)) + (uVar30 & (uVar17 ^ uVar31) ^ uVar17 & uVar31) +
           iVar1;
  uVar24 = ((uVar16 >> 7 | uVar16 * 0x2000000) ^ (uVar16 >> 0x12 | uVar16 * 0x4000) ^ uVar16 >> 3) +
           uVar24 + uVar8 +
           ((uVar21 >> 0x11 | uVar21 * 0x8000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000) ^ uVar21 >> 10);
  iVar1 = uVar16 + uVar19 + (uVar29 & uVar20 | uVar28 & (uVar29 ^ 0xffffffff)) + 0x4d2c6dfc +
          ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
          (uVar29 >> 0x19 | uVar29 * 0x80));
  uVar31 = iVar1 + uVar31;
  uVar19 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
           (uVar32 >> 0x16 | uVar32 * 0x400)) + (uVar32 & (uVar30 ^ uVar17) ^ uVar30 & uVar17) +
           iVar1;
  uVar16 = ((uVar25 >> 7 | uVar25 * 0x2000000) ^ (uVar25 >> 0x12 | uVar25 * 0x4000) ^ uVar25 >> 3) +
           uVar16 + uVar10 +
           ((uVar4 >> 0x11 | uVar4 * 0x8000) ^ (uVar4 >> 0x13 | uVar4 * 0x2000) ^ uVar4 >> 10);
  iVar1 = uVar25 + uVar28 + (uVar31 & uVar29 | uVar20 & (uVar31 ^ 0xffffffff)) + 0x53380d13 +
          ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
          (uVar31 >> 0x19 | uVar31 * 0x80));
  uVar17 = iVar1 + uVar17;
  uVar28 = ((uVar19 >> 2 | uVar19 * 0x40000000) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
           (uVar19 >> 0x16 | uVar19 * 0x400)) + (uVar19 & (uVar32 ^ uVar30) ^ uVar32 & uVar30) +
           iVar1;
  uVar25 = ((uVar2 >> 7 | uVar2 * 0x2000000) ^ (uVar2 >> 0x12 | uVar2 * 0x4000) ^ uVar2 >> 3) +
           uVar25 + uVar11 +
           ((uVar24 >> 0x11 | uVar24 * 0x8000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000) ^ uVar24 >> 10);
  iVar1 = uVar2 + uVar20 + (uVar17 & uVar31 | uVar29 & (uVar17 ^ 0xffffffff)) + 0x650a7354 +
          ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
          (uVar17 >> 0x19 | uVar17 * 0x80));
  uVar30 = iVar1 + uVar30;
  uVar20 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
           (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar19 ^ uVar32) ^ uVar19 & uVar32) +
           iVar1;
  uVar2 = ((uVar5 >> 7 | uVar5 * 0x2000000) ^ (uVar5 >> 0x12 | uVar5 * 0x4000) ^ uVar5 >> 3) + uVar2
          + uVar18 +
          ((uVar16 >> 0x11 | uVar16 * 0x8000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000) ^ uVar16 >> 10);
  iVar1 = uVar5 + uVar29 + (uVar30 & uVar17 | uVar31 & (uVar30 ^ 0xffffffff)) + 0x766a0abb +
          ((uVar30 >> 6 | uVar30 * 0x4000000) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
          (uVar30 >> 0x19 | uVar30 * 0x80));
  uVar32 = iVar1 + uVar32;
  uVar29 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
           (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar28 ^ uVar19) ^ uVar28 & uVar19) +
           iVar1;
  uVar5 = ((uVar7 >> 7 | uVar7 * 0x2000000) ^ (uVar7 >> 0x12 | uVar7 * 0x4000) ^ uVar7 >> 3) + uVar5
          + uVar27 +
          ((uVar25 >> 0x11 | uVar25 * 0x8000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000) ^ uVar25 >> 10);
  iVar1 = uVar7 + uVar31 + (uVar32 & uVar30 | uVar17 & (uVar32 ^ 0xffffffff)) + -0x7e3d36d2 +
          ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
          (uVar32 >> 0x19 | uVar32 * 0x80));
  uVar19 = iVar1 + uVar19;
  uVar31 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
           (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar20 ^ uVar28) ^ uVar20 & uVar28) +
           iVar1;
  uVar7 = ((uVar9 >> 7 | uVar9 * 0x2000000) ^ (uVar9 >> 0x12 | uVar9 * 0x4000) ^ uVar9 >> 3) + uVar7
          + uVar21 +
          ((uVar2 >> 0x11 | uVar2 * 0x8000) ^ (uVar2 >> 0x13 | uVar2 * 0x2000) ^ uVar2 >> 10);
  iVar1 = uVar9 + uVar17 + (uVar19 & uVar32 | uVar30 & (uVar19 ^ 0xffffffff)) + -0x6d8dd37b +
          ((uVar19 >> 6 | uVar19 * 0x4000000) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
          (uVar19 >> 0x19 | uVar19 * 0x80));
  uVar28 = iVar1 + uVar28;
  uVar17 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 0x16 | uVar31 * 0x400)) + (uVar31 & (uVar29 ^ uVar20) ^ uVar29 & uVar20) +
           iVar1;
  uVar9 = ((uVar3 >> 7 | uVar3 * 0x2000000) ^ (uVar3 >> 0x12 | uVar3 * 0x4000) ^ uVar3 >> 3) + uVar9
          + uVar4 + ((uVar5 >> 0x11 | uVar5 * 0x8000) ^ (uVar5 >> 0x13 | uVar5 * 0x2000) ^
                    uVar5 >> 10);
  iVar1 = uVar3 + uVar30 + (uVar28 & uVar19 | uVar32 & (uVar28 ^ 0xffffffff)) + -0x5d40175f +
          ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
          (uVar28 >> 0x19 | uVar28 * 0x80));
  uVar20 = iVar1 + uVar20;
  uVar30 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
           (uVar17 >> 0x16 | uVar17 * 0x400)) + (uVar17 & (uVar31 ^ uVar29) ^ uVar31 & uVar29) +
           iVar1;
  uVar3 = ((uVar6 >> 7 | uVar6 * 0x2000000) ^ (uVar6 >> 0x12 | uVar6 * 0x4000) ^ uVar6 >> 3) + uVar3
          + uVar24 +
          ((uVar7 >> 0x11 | uVar7 * 0x8000) ^ (uVar7 >> 0x13 | uVar7 * 0x2000) ^ uVar7 >> 10);
  iVar1 = uVar6 + uVar32 + (uVar20 & uVar28 | uVar19 & (uVar20 ^ 0xffffffff)) + -0x57e599b5 +
          ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
          (uVar20 >> 0x19 | uVar20 * 0x80));
  uVar29 = iVar1 + uVar29;
  uVar32 = ((uVar30 >> 2 | uVar30 * 0x40000000) ^ (uVar30 >> 0xd | uVar30 * 0x80000) ^
           (uVar30 >> 0x16 | uVar30 * 0x400)) + (uVar30 & (uVar17 ^ uVar31) ^ uVar17 & uVar31) +
           iVar1;
  uVar6 = ((uVar8 >> 7 | uVar8 * 0x2000000) ^ (uVar8 >> 0x12 | uVar8 * 0x4000) ^ uVar8 >> 3) + uVar6
          + uVar16 +
          ((uVar9 >> 0x11 | uVar9 * 0x8000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000) ^ uVar9 >> 10);
  iVar1 = uVar8 + uVar19 + (uVar29 & uVar20 | uVar28 & (uVar29 ^ 0xffffffff)) + -0x3db47490 +
          ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
          (uVar29 >> 0x19 | uVar29 * 0x80));
  uVar31 = iVar1 + uVar31;
  uVar19 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
           (uVar32 >> 0x16 | uVar32 * 0x400)) + (uVar32 & (uVar30 ^ uVar17) ^ uVar30 & uVar17) +
           iVar1;
  uVar8 = ((uVar10 >> 7 | uVar10 * 0x2000000) ^ (uVar10 >> 0x12 | uVar10 * 0x4000) ^ uVar10 >> 3) +
          uVar8 + uVar25 +
          ((uVar3 >> 0x11 | uVar3 * 0x8000) ^ (uVar3 >> 0x13 | uVar3 * 0x2000) ^ uVar3 >> 10);
  iVar1 = uVar10 + uVar28 + (uVar31 & uVar29 | uVar20 & (uVar31 ^ 0xffffffff)) + -0x3893ae5d +
          ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
          (uVar31 >> 0x19 | uVar31 * 0x80));
  uVar17 = iVar1 + uVar17;
  uVar28 = ((uVar19 >> 2 | uVar19 * 0x40000000) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
           (uVar19 >> 0x16 | uVar19 * 0x400)) + (uVar19 & (uVar32 ^ uVar30) ^ uVar32 & uVar30) +
           iVar1;
  uVar10 = ((uVar11 >> 7 | uVar11 * 0x2000000) ^ (uVar11 >> 0x12 | uVar11 * 0x4000) ^ uVar11 >> 3) +
           uVar10 + uVar2 +
           ((uVar6 >> 0x11 | uVar6 * 0x8000) ^ (uVar6 >> 0x13 | uVar6 * 0x2000) ^ uVar6 >> 10);
  iVar1 = uVar11 + uVar20 + (uVar17 & uVar31 | uVar29 & (uVar17 ^ 0xffffffff)) + -0x2e6d17e7 +
          ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
          (uVar17 >> 0x19 | uVar17 * 0x80));
  uVar30 = iVar1 + uVar30;
  uVar20 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
           (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar19 ^ uVar32) ^ uVar19 & uVar32) +
           iVar1;
  uVar11 = ((uVar18 >> 7 | uVar18 * 0x2000000) ^ (uVar18 >> 0x12 | uVar18 * 0x4000) ^ uVar18 >> 3) +
           uVar11 + uVar5 +
           ((uVar8 >> 0x11 | uVar8 * 0x8000) ^ (uVar8 >> 0x13 | uVar8 * 0x2000) ^ uVar8 >> 10);
  iVar1 = uVar18 + uVar29 + (uVar30 & uVar17 | uVar31 & (uVar30 ^ 0xffffffff)) + -0x2966f9dc +
          ((uVar30 >> 6 | uVar30 * 0x4000000) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
          (uVar30 >> 0x19 | uVar30 * 0x80));
  uVar32 = iVar1 + uVar32;
  uVar29 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
           (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar28 ^ uVar19) ^ uVar28 & uVar19) +
           iVar1;
  uVar18 = ((uVar27 >> 7 | uVar27 * 0x2000000) ^ (uVar27 >> 0x12 | uVar27 * 0x4000) ^ uVar27 >> 3) +
           uVar18 + uVar7 +
           ((uVar10 >> 0x11 | uVar10 * 0x8000) ^ (uVar10 >> 0x13 | uVar10 * 0x2000) ^ uVar10 >> 10);
  iVar1 = uVar27 + uVar31 + (uVar32 & uVar30 | uVar17 & (uVar32 ^ 0xffffffff)) + -0xbf1ca7b +
          ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
          (uVar32 >> 0x19 | uVar32 * 0x80));
  uVar19 = iVar1 + uVar19;
  uVar31 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
           (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar20 ^ uVar28) ^ uVar20 & uVar28) +
           iVar1;
  iVar1 = uVar21 + uVar17 + (uVar19 & uVar32 | uVar30 & (uVar19 ^ 0xffffffff)) + 0x106aa070 +
          ((uVar19 >> 6 | uVar19 * 0x4000000) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
          (uVar19 >> 0x19 | uVar19 * 0x80));
  uVar28 = iVar1 + uVar28;
  uVar17 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 0x16 | uVar31 * 0x400)) + (uVar31 & (uVar29 ^ uVar20) ^ uVar29 & uVar20) +
           iVar1;
  iVar1 = uVar4 + uVar30 + (uVar28 & uVar19 | uVar32 & (uVar28 ^ 0xffffffff)) + 0x19a4c116 +
          ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
          (uVar28 >> 0x19 | uVar28 * 0x80));
  uVar20 = iVar1 + uVar20;
  uVar30 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
           (uVar17 >> 0x16 | uVar17 * 0x400)) + (uVar17 & (uVar31 ^ uVar29) ^ uVar31 & uVar29) +
           iVar1;
  iVar1 = uVar24 + uVar32 + (uVar20 & uVar28 | uVar19 & (uVar20 ^ 0xffffffff)) + 0x1e376c08 +
          ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
          (uVar20 >> 0x19 | uVar20 * 0x80));
  uVar29 = iVar1 + uVar29;
  uVar24 = ((uVar30 >> 2 | uVar30 * 0x40000000) ^ (uVar30 >> 0xd | uVar30 * 0x80000) ^
           (uVar30 >> 0x16 | uVar30 * 0x400)) + (uVar30 & (uVar17 ^ uVar31) ^ uVar17 & uVar31) +
           iVar1;
  iVar1 = uVar16 + uVar19 + (uVar29 & uVar20 | uVar28 & (uVar29 ^ 0xffffffff)) + 0x2748774c +
          ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
          (uVar29 >> 0x19 | uVar29 * 0x80));
  uVar31 = iVar1 + uVar31;
  uVar16 = ((uVar24 >> 2 | uVar24 * 0x40000000) ^ (uVar24 >> 0xd | uVar24 * 0x80000) ^
           (uVar24 >> 0x16 | uVar24 * 0x400)) + (uVar24 & (uVar30 ^ uVar17) ^ uVar30 & uVar17) +
           iVar1;
  iVar1 = uVar25 + uVar28 + (uVar31 & uVar29 | uVar20 & (uVar31 ^ 0xffffffff)) + 0x34b0bcb5 +
          ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
          (uVar31 >> 0x19 | uVar31 * 0x80));
  uVar17 = iVar1 + uVar17;
  uVar25 = ((uVar16 >> 2 | uVar16 * 0x40000000) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
           (uVar16 >> 0x16 | uVar16 * 0x400)) + (uVar16 & (uVar24 ^ uVar30) ^ uVar24 & uVar30) +
           iVar1;
  iVar1 = uVar2 + uVar20 + (uVar17 & uVar31 | uVar29 & (uVar17 ^ 0xffffffff)) + 0x391c0cb3 +
          ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
          (uVar17 >> 0x19 | uVar17 * 0x80));
  uVar30 = iVar1 + uVar30;
  uVar2 = ((uVar25 >> 2 | uVar25 * 0x40000000) ^ (uVar25 >> 0xd | uVar25 * 0x80000) ^
          (uVar25 >> 0x16 | uVar25 * 0x400)) + (uVar25 & (uVar16 ^ uVar24) ^ uVar16 & uVar24) +
          iVar1;
  iVar1 = uVar5 + uVar29 + (uVar30 & uVar17 | uVar31 & (uVar30 ^ 0xffffffff)) + 0x4ed8aa4a +
          ((uVar30 >> 6 | uVar30 * 0x4000000) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
          (uVar30 >> 0x19 | uVar30 * 0x80));
  uVar24 = iVar1 + uVar24;
  uVar5 = ((uVar2 >> 2 | uVar2 * 0x40000000) ^ (uVar2 >> 0xd | uVar2 * 0x80000) ^
          (uVar2 >> 0x16 | uVar2 * 0x400)) + (uVar2 & (uVar25 ^ uVar16) ^ uVar25 & uVar16) + iVar1;
  iVar1 = uVar7 + uVar31 + (uVar24 & uVar30 | uVar17 & (uVar24 ^ 0xffffffff)) + 0x5b9cca4f +
          ((uVar24 >> 6 | uVar24 * 0x4000000) ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^
          (uVar24 >> 0x19 | uVar24 * 0x80));
  uVar16 = iVar1 + uVar16;
  uVar7 = ((uVar5 >> 2 | uVar5 * 0x40000000) ^ (uVar5 >> 0xd | uVar5 * 0x80000) ^
          (uVar5 >> 0x16 | uVar5 * 0x400)) + (uVar5 & (uVar2 ^ uVar25) ^ uVar2 & uVar25) + iVar1;
  iVar1 = uVar9 + uVar17 + (uVar16 & uVar24 | uVar30 & (uVar16 ^ 0xffffffff)) + 0x682e6ff3 +
          ((uVar16 >> 6 | uVar16 * 0x4000000) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
          (uVar16 >> 0x19 | uVar16 * 0x80));
  uVar25 = iVar1 + uVar25;
  uVar32 = ((uVar7 >> 2 | uVar7 * 0x40000000) ^ (uVar7 >> 0xd | uVar7 * 0x80000) ^
           (uVar7 >> 0x16 | uVar7 * 0x400)) + (uVar7 & (uVar5 ^ uVar2) ^ uVar5 & uVar2) + iVar1;
  iVar1 = uVar3 + uVar30 + (uVar25 & uVar16 | uVar24 & (uVar25 ^ 0xffffffff)) + 0x748f82ee +
          ((uVar25 >> 6 | uVar25 * 0x4000000) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
          (uVar25 >> 0x19 | uVar25 * 0x80));
  uVar2 = iVar1 + uVar2;
  uVar30 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
           (uVar32 >> 0x16 | uVar32 * 0x400)) + (uVar32 & (uVar7 ^ uVar5) ^ uVar7 & uVar5) + iVar1;
  iVar1 = uVar6 + uVar24 + (uVar2 & uVar25 | uVar16 & (uVar2 ^ 0xffffffff)) + 0x78a5636f +
          ((uVar2 >> 6 | uVar2 * 0x4000000) ^ (uVar2 >> 0xb | uVar2 * 0x200000) ^
          (uVar2 >> 0x19 | uVar2 * 0x80));
  uVar5 = iVar1 + uVar5;
  uVar6 = ((uVar30 >> 2 | uVar30 * 0x40000000) ^ (uVar30 >> 0xd | uVar30 * 0x80000) ^
          (uVar30 >> 0x16 | uVar30 * 0x400)) + (uVar30 & (uVar32 ^ uVar7) ^ uVar32 & uVar7) + iVar1;
  iVar1 = uVar8 + uVar16 + (uVar5 & uVar2 | uVar25 & (uVar5 ^ 0xffffffff)) + -0x7b3787ec +
          ((uVar5 >> 6 | uVar5 * 0x4000000) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
          (uVar5 >> 0x19 | uVar5 * 0x80));
  uVar7 = iVar1 + uVar7;
  uVar16 = ((uVar6 >> 2 | uVar6 * 0x40000000) ^ (uVar6 >> 0xd | uVar6 * 0x80000) ^
           (uVar6 >> 0x16 | uVar6 * 0x400)) + (uVar6 & (uVar30 ^ uVar32) ^ uVar30 & uVar32) + iVar1;
  iVar1 = uVar10 + uVar25 + (uVar7 & uVar5 | uVar2 & (uVar7 ^ 0xffffffff)) + -0x7338fdf8 +
          ((uVar7 >> 6 | uVar7 * 0x4000000) ^ (uVar7 >> 0xb | uVar7 * 0x200000) ^
          (uVar7 >> 0x19 | uVar7 * 0x80));
  uVar32 = iVar1 + uVar32;
  uVar24 = ((uVar16 >> 2 | uVar16 * 0x40000000) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
           (uVar16 >> 0x16 | uVar16 * 0x400)) + (uVar16 & (uVar6 ^ uVar30) ^ uVar6 & uVar30) + iVar1
  ;
  iVar1 = uVar11 + uVar2 + (uVar32 & uVar7 | uVar5 & (uVar32 ^ 0xffffffff)) + -0x6f410006 +
          ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
          (uVar32 >> 0x19 | uVar32 * 0x80));
  uVar30 = iVar1 + uVar30;
  uVar2 = ((uVar24 >> 2 | uVar24 * 0x40000000) ^ (uVar24 >> 0xd | uVar24 * 0x80000) ^
          (uVar24 >> 0x16 | uVar24 * 0x400)) + (uVar24 & (uVar16 ^ uVar6) ^ uVar16 & uVar6) + iVar1;
  iVar1 = uVar18 + uVar5 + (uVar30 & uVar32 | uVar7 & (uVar30 ^ 0xffffffff)) + -0x5baf9315 +
          ((uVar30 >> 6 | uVar30 * 0x4000000) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
          (uVar30 >> 0x19 | uVar30 * 0x80));
  uVar6 = iVar1 + uVar6;
  uVar5 = ((uVar2 >> 2 | uVar2 * 0x40000000) ^ (uVar2 >> 0xd | uVar2 * 0x80000) ^
          (uVar2 >> 0x16 | uVar2 * 0x400)) + (uVar2 & (uVar24 ^ uVar16) ^ uVar24 & uVar16) + iVar1;
  iVar1 = uVar27 + ((uVar21 >> 7 | uVar21 * 0x2000000) ^ (uVar21 >> 0x12 | uVar21 * 0x4000) ^
                   uVar21 >> 3) + uVar9 +
          ((uVar11 >> 0x11 | uVar11 * 0x8000) ^ (uVar11 >> 0x13 | uVar11 * 0x2000) ^ uVar11 >> 10) +
          uVar7 + (uVar6 & uVar30 | uVar32 & (uVar6 ^ 0xffffffff)) + -0x41065c09 +
          ((uVar6 >> 6 | uVar6 * 0x4000000) ^ (uVar6 >> 0xb | uVar6 * 0x200000) ^
          (uVar6 >> 0x19 | uVar6 * 0x80));
  uVar16 = iVar1 + uVar16;
  uVar7 = ((uVar5 >> 2 | uVar5 * 0x40000000) ^ (uVar5 >> 0xd | uVar5 * 0x80000) ^
          (uVar5 >> 0x16 | uVar5 * 0x400)) + (uVar5 & (uVar2 ^ uVar24) ^ uVar2 & uVar24) + iVar1;
  iVar1 = uVar21 + ((uVar4 >> 7 | uVar4 * 0x2000000) ^ (uVar4 >> 0x12 | uVar4 * 0x4000) ^ uVar4 >> 3
                   ) + uVar3 +
          ((uVar18 >> 0x11 | uVar18 * 0x8000) ^ (uVar18 >> 0x13 | uVar18 * 0x2000) ^ uVar18 >> 10) +
          uVar32 + (uVar16 & uVar6 | uVar30 & (uVar16 ^ 0xffffffff)) + -0x398e870e +
          ((uVar16 >> 6 | uVar16 * 0x4000000) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
          (uVar16 >> 0x19 | uVar16 * 0x80));
  param_1[0x10] =
       (uVar7 & (uVar5 ^ uVar2) ^ uVar5 & uVar2) + uVar13 +
       ((uVar7 >> 2 | uVar7 * 0x40000000) ^ (uVar7 >> 0xd | uVar7 * 0x80000) ^
       (uVar7 >> 0x16 | uVar7 * 0x400)) + iVar1;
  param_1[0x11] = uVar7 + uVar23;
  param_1[0x12] = uVar5 + uVar14;
  param_1[0x13] = uVar2 + param_1[0x13];
  param_1[0x14] = uVar24 + uVar12 + iVar1;
  param_1[0x15] = uVar16 + uVar22;
  param_1[0x16] = uVar6 + uVar15;
  param_1[0x17] = uVar30 + param_1[0x17];
  return;
}



/* Entry: 109dff25c; end: 109dff387;  */

void FUN_109dff25c(long param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)param_3;
  uVar4 = (ulong)*(byte *)(param_1 + 100);
  if (uVar4 != 0) {
    uVar6 = 0x40 - uVar4;
    puVar3 = param_2;
    uVar2 = uVar6;
    if (param_3 <= uVar6) {
      uVar6 = param_3;
      uVar2 = param_3;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)(param_1 + (uVar4 & 0xff ^ 3)) = *puVar3;
      uVar1 = *(byte *)(param_1 + 100) + 1;
      uVar4 = (ulong)uVar1;
      *(char *)(param_1 + 100) = (char)uVar1;
      if (uVar1 == 0x40) {
        FUN_109dfd4c0(param_1);
        uVar4 = 0;
        *(undefined1 *)(param_1 + 100) = 0;
      }
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 - uVar2;
    param_2 = param_2 + uVar2;
  }
  for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
    lVar5 = 0;
    do {
      uVar1 = (*(uint *)(param_2 + lVar5) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + lVar5) & 0xff00ff) << 8;
      *(uint *)(param_1 + lVar5) = uVar1 >> 0x10 | uVar1 << 0x10;
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x40);
    FUN_109dfd4c0(param_1);
    param_2 = param_2 + 0x40;
  }
  if (param_3 != 0) {
    uVar4 = (ulong)*(byte *)(param_1 + 100);
    do {
      *(undefined1 *)(param_1 + (uVar4 & 0xff ^ 3)) = *param_2;
      uVar1 = *(byte *)(param_1 + 100) + 1;
      uVar4 = (ulong)uVar1;
      *(char *)(param_1 + 100) = (char)uVar1;
      if (uVar1 == 0x40) {
        FUN_109dfd4c0(param_1);
        uVar4 = 0;
        *(undefined1 *)(param_1 + 100) = 0;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109dff388; end: 109dff4c7;  */

void FUN_109dff388(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  
  *(undefined1 *)(param_1 + ((ulong)*(byte *)(param_1 + 100) ^ 3)) = 0x80;
  bVar2 = *(byte *)(param_1 + 100);
  uVar1 = bVar2 + 1;
  uVar3 = (ulong)uVar1;
  *(char *)(param_1 + 100) = (char)uVar1;
  if (bVar2 != 0x37) {
    if (bVar2 == 0x3f) {
      FUN_109dfd4c0(param_1);
      uVar3 = 0;
      *(undefined1 *)(param_1 + 100) = 0;
    }
    do {
      *(undefined1 *)(param_1 + (uVar3 & 0xff ^ 3)) = 0;
      uVar1 = *(byte *)(param_1 + 100) + 1;
      uVar3 = (ulong)uVar1;
      *(char *)(param_1 + 100) = (char)uVar1;
      if (uVar1 == 0x40) {
        FUN_109dfd4c0(param_1);
        uVar3 = 0;
        *(undefined1 *)(param_1 + 100) = 0;
      }
    } while (((uint)uVar3 & 0xff) != 0x38);
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(char *)(param_1 + 0x3f) = (char)(uVar1 >> 0x15);
  *(char *)(param_1 + 0x3e) = (char)(uVar1 >> 0xd);
  *(char *)(param_1 + 0x3d) = (char)(uVar1 >> 5);
  *(char *)(param_1 + 0x3c) = (char)(uVar1 << 3);
  *(undefined1 *)(param_1 + 100) = 0x40;
  FUN_109dfd4c0(param_1);
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}



/* Entry: 109dff4c8; end: 109dff7f7;  */

/* WARNING: Removing unreachable block (ram,0x000109dff73c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_109dff4c8(undefined8 *******param_1,undefined8 *******param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  undefined8 *******pppppppuVar11;
  undefined1 auStack_1d0 [4];
  short sStack_1cc;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  char cStack_c9;
  undefined8 *******pppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined2 *puStack_a8;
  ulong uStack_a0;
  undefined2 auStack_98 [16];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 ******ppppppuStack_58;
  undefined8 *******pppppppuStack_50;
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_c8 = param_1;
  pppppppuStack_c0 = param_2;
  if ((bRam00000001137e7c68 & 1) != 0) goto LAB_109dff744;
  param_1 = (undefined8 *******)&UNK_10e05ba30;
  _getenv();
  if (param_1 != (undefined8 *******)0x0) goto LAB_109dff744;
  param_1 = &pppppppuStack_c8;
  FUN_109e038f4(param_1,&UNK_10f6022ec,0xf,0);
  if (param_1 != (undefined8 *******)0xffffffffffffffff) goto LAB_109dff744;
  __ZNSt3__115system_categoryEv();
  bStack_40 = 0xff;
  ppppppuStack_58 = (undefined8 ******)0x0;
  puVar7 = &UNK_10e05ba4b;
  pppppppuStack_50 = param_1;
  _getenv();
  pppppppuVar11 = pppppppuStack_c0;
  pppppppuVar6 = pppppppuStack_c8;
  if (puVar7 == (undefined *)0x0) {
    if (pppppppuStack_c0 != (undefined8 *******)0x0) {
      pppppppuVar9 = pppppppuStack_c8;
      FUN_109dfaea0(pppppppuStack_c8,pppppppuStack_c0,0);
      if (pppppppuVar9 <= pppppppuVar11) {
        pppppppuVar11 = pppppppuVar9;
      }
      pppppppuStack_d8 = (undefined8 *******)0x0;
      if (pppppppuVar9 != (undefined8 *******)0xffffffffffffffff) {
        pppppppuStack_d8 = pppppppuVar11;
      }
      pppppppuStack_e0 = (undefined8 *******)0x0;
      if (pppppppuVar9 != (undefined8 *******)0xffffffffffffffff) {
        pppppppuStack_e0 = pppppppuVar6;
      }
      if (pppppppuStack_d8 != (undefined8 *******)0x0) {
        FUN_109dfba44(&pppppppuStack_b8,&UNK_10f6022ec,0xf,&pppppppuStack_e0,1);
        goto LAB_109dff570;
      }
    }
  }
  else {
    puVar8 = puVar7;
    _strlen();
    FUN_109dfba44(&pppppppuStack_b8,puVar7,puVar8,0,0);
LAB_109dff570:
    FUN_109dff894(&ppppppuStack_58,&pppppppuStack_b8);
    if (((uStack_a0 & 1) == 0) && ((long)puStack_a8 < 0)) {
      __ZdlPv(pppppppuStack_b8);
    }
  }
  if ((bStack_40 & 1) != 0) {
    FUN_109dfba44(&pppppppuStack_b8,&UNK_10f6022ec,0xf,0,0);
    param_1 = &ppppppuStack_58;
    FUN_109dff894(param_1,&pppppppuStack_b8);
    if (((uStack_a0 & 1) == 0) && ((long)puStack_a8 < 0)) {
      param_1 = pppppppuStack_b8;
      __ZdlPv();
    }
    if ((bStack_40 & 1) != 0) goto LAB_109dff744;
  }
  auStack_98[0] = 0x105;
  pppppppuStack_b8 = pppppppuStack_c8;
  pppppppuStack_b0 = pppppppuStack_c0;
  pppppppuVar11 = &pppppppuStack_b8;
  FUN_109dfb240(pppppppuVar11,0);
  if ((int)pppppppuVar11 == 0) {
    FUN_109d375d8(&pppppppuStack_e0,&pppppppuStack_c8);
  }
  else {
    FUN_109dfb1b0(&pppppppuStack_e0);
  }
  puStack_a8 = auStack_98;
  pppppppuStack_b8 = (undefined8 *******)0x0;
  pppppppuStack_b0 = (undefined8 *******)0x0;
  uStack_a0 = 0x400000000;
  puStack_78 = &uStack_68;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 1;
  lStack_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  if (param_4 != 0) {
    lVar10 = (long)param_4;
    func_0x00010926dad0(&lStack_f8,lVar10);
    lVar5 = lStack_f0;
    _bzero(lStack_f0,lVar10 << 3);
    lStack_f0 = lVar5 + lVar10 * 8;
    lStack_110 = 0;
    lStack_108 = 0;
    uStack_100 = 0;
    func_0x000109367588(&lStack_110,lVar10);
    _bzero(lStack_108,lVar10 << 3);
    if (lStack_110 != 0) {
      lStack_108 = lStack_110;
      __ZdlPv();
    }
    if (lStack_f8 != 0) {
      lStack_f0 = lStack_f8;
      __ZdlPv();
    }
  }
  param_1 = &pppppppuStack_b8;
  FUN_109d340ac();
  if (cStack_c9 < '\0') {
    param_1 = pppppppuStack_e0;
    __ZdlPv();
  }
LAB_109dff744:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined8 *******)0x0;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
  do {
    puVar4 = puRam00000001138345e0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138345e0,0x10);
    if (bVar2) {
      puRam00000001138345e0 = (undefined8 *)0x0;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puVar3 = puVar4;
  } while (cVar1 != '\0');
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[1]) {
    do {
      pppppppuVar11 = (undefined8 *******)*puVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *puVar3 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (((pppppppuVar11 != (undefined8 *******)0x0) &&
        (param_1 = pppppppuVar11, _stat(pppppppuVar11,auStack_1d0), (int)param_1 == 0)) &&
       (sStack_1cc < -0x7000)) {
      param_1 = pppppppuVar11;
      _unlink(pppppppuVar11);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = pppppppuVar11;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138345e0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      puRam00000001138345e0 = puVar4;
    }
  } while (cVar1 != '\0');
  return param_1;
}



/* Entry: 109dff7f8; end: 109dff893;  */

void FUN_109dff7f8(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c0 [4];
  short sStack_bc;
  
  do {
    plVar4 = plRam00000001138345e0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138345e0,0x10);
    if (bVar2) {
      plRam00000001138345e0 = (long *)0x0;
      cVar1 = ExclusiveMonitorsStatus();
    }
    plVar3 = plVar4;
  } while (cVar1 != '\0');
  for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (((lVar6 != 0) && (lVar5 = lVar6, _stat(lVar6,auStack_c0), (int)lVar5 == 0)) &&
       (sStack_bc < -0x7000)) {
      _unlink(lVar6);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138345e0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      plRam00000001138345e0 = plVar4;
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 109dff894; end: 109dff9d3;  */

void FUN_109dff894(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    bVar2 = *(byte *)(param_1 + 3);
    puVar1 = param_1;
    if (((bVar2 & 1) == 0) && (*(char *)((long)param_1 + 0x17) < '\0')) {
      puVar1 = (undefined8 *)*param_1;
      __ZdlPv();
      bVar2 = *(byte *)(param_1 + 3);
    }
    if ((*(byte *)(param_2 + 3) & 1) == 0) {
      *(byte *)(param_1 + 3) = bVar2 & 0xfe;
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar4;
      *param_1 = uVar3;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
    }
    else {
      *(byte *)(param_1 + 3) = bVar2 | 1;
      if ((*(byte *)(param_2 + 3) & 1) == 0) {
        __ZNSt3__115system_categoryEv();
        uVar3 = 0;
      }
      else {
        uVar3 = *param_2;
        puVar1 = (undefined8 *)param_2[1];
      }
      *param_1 = uVar3;
      param_1[1] = puVar1;
    }
  }
  return;
}



/* Entry: 109dff9d4; end: 109dffaaf;  */

ulong * FUN_109dff9d4(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  
  puVar3 = (ulong *)*param_1;
  puVar4 = (ulong *)param_1[1];
  lVar9 = 0x14;
  if (puVar4 != puVar3) {
    lVar9 = 0x10;
  }
  uVar5 = *(uint *)((long)param_1 + lVar9);
  puVar1 = (ulong *)((ulong)param_2 << 3);
  _malloc();
  if (puVar1 != (ulong *)0x0) {
LAB_109dffa28:
    param_1[1] = (ulong)puVar1;
    *(uint *)(param_1 + 2) = param_2;
    _memset();
    if (uVar5 != 0) {
      lVar9 = (ulong)uVar5 << 3;
      puVar10 = puVar4;
      do {
        uVar8 = *puVar10;
        if (uVar8 < 0xfffffffffffffffe) {
          puVar1 = param_1;
          FUN_109dffab0(param_1,uVar8);
          *puVar1 = uVar8;
        }
        puVar10 = puVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    if (puVar4 != puVar3) {
      _free(puVar4);
      puVar1 = puVar4;
    }
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) - (int)param_1[3];
    *(undefined4 *)(param_1 + 3) = 0;
    return puVar1;
  }
  if (param_2 == 0) {
    puVar1 = (ulong *)0x1;
    _malloc();
    if (puVar1 != (ulong *)0x0) goto LAB_109dffa28;
  }
  puVar2 = &UNK_10f6022fc;
  uVar8 = 1;
  FUN_109df7a04();
  uVar5 = *(int *)(puVar2 + 0x10) - 1U & ((uint)(uVar8 >> 4) & 0xfffffff ^ (uint)uVar8 >> 9);
  puVar3 = (ulong *)(*(long *)(puVar2 + 8) + (ulong)uVar5 * 8);
  uVar6 = *puVar3;
  if (uVar6 == 0xffffffffffffffff) {
    puVar4 = (ulong *)0x0;
  }
  else {
    puVar4 = (ulong *)0x0;
    iVar7 = 1;
    do {
      if (uVar6 == uVar8) {
        return puVar3;
      }
      if (puVar4 == (ulong *)0x0 && uVar6 == 0xfffffffffffffffe) {
        puVar4 = puVar3;
      }
      uVar5 = uVar5 + iVar7;
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 & *(int *)(puVar2 + 0x10) - 1U;
      puVar3 = (ulong *)(*(long *)(puVar2 + 8) + (ulong)uVar5 * 8);
      uVar6 = *puVar3;
    } while (uVar6 != 0xffffffffffffffff);
  }
  if (puVar4 != (ulong *)0x0) {
    puVar3 = puVar4;
  }
  return puVar3;
}



/* Entry: 109dffab0; end: 109dffb23;  */

long * FUN_109dffab0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = *(int *)(param_1 + 0x10) - 1;
  uVar4 = uVar1 & ((uint)param_2 >> 4 ^ (uint)param_2 >> 9);
  plVar2 = (long *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8);
  lVar5 = *plVar2;
  if (lVar5 == -1) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)0x0;
    iVar6 = 1;
    do {
      if (lVar5 == param_2) {
        return plVar2;
      }
      if (plVar3 == (long *)0x0 && lVar5 == -2) {
        plVar3 = plVar2;
      }
      uVar4 = uVar4 + iVar6;
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 & uVar1;
      plVar2 = (long *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8);
      lVar5 = *plVar2;
    } while (lVar5 != -1);
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3;
  }
  return plVar2;
}



/* Entry: 109dffb24; end: 109dffce3;  */

/* WARNING: Possible PIC construction at 0x000109dffd78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109dffdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109dffd7c) */
/* WARNING: Removing unreachable block (ram,0x000109dffdc4) */
/* WARNING: Removing unreachable block (ram,0x000109dfff08) */

undefined8 *
FUN_109dffb24(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined8 unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar15 = &stack0xfffffffffffffff0;
  puVar7 = param_3;
  puVar9 = param_4;
  puVar10 = param_5;
  func_0x000107c34f18(param_3,*(undefined4 *)(param_1 + 0xc));
  *param_5 = param_3;
  puVar13 = (undefined8 *)((long)param_3 * (long)param_4);
  puVar4 = puVar13;
  _malloc();
  if (puVar4 == (undefined8 *)0x0) {
    if (puVar13 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x1;
      _malloc();
      if (puVar4 != (undefined8 *)0x0) goto LAB_109dffb7c;
    }
    puVar4 = (undefined8 *)0x1;
    unaff_x30 = 0x109dffbd4;
    FUN_109df7a04(&UNK_10f60230e);
  }
  else {
LAB_109dffb7c:
    if (puVar4 != param_2) {
      return puVar4;
    }
    puVar10 = (undefined8 *)0x0;
    puVar3 = (undefined1 *)register0x00000008;
    puVar7 = param_4;
    puVar9 = param_3;
    param_4 = unaff_x19;
    param_1 = unaff_x20;
    param_2 = unaff_x21;
    param_3 = unaff_x22;
    puVar13 = unaff_x23;
    puVar15 = unaff_x29;
  }
  *(undefined8 **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x38) = puVar13;
  *(undefined8 **)(puVar3 + -0x30) = param_3;
  *(undefined8 **)(puVar3 + -0x28) = param_2;
  *(long *)(puVar3 + -0x20) = param_1;
  *(undefined8 **)(puVar3 + -0x18) = param_4;
  *(undefined1 **)(puVar3 + -0x10) = puVar15;
  *(undefined8 *)(puVar3 + -8) = unaff_x30;
  puVar15 = puVar3 + -0x10;
  puVar14 = (undefined8 *)((long)puVar9 * (long)puVar7);
  puVar13 = puVar14;
  puVar8 = puVar7;
  puVar11 = puVar10;
  _malloc();
  if (puVar13 != (undefined8 *)0x0) {
LAB_109dffc14:
    if (puVar10 != (undefined8 *)0x0) {
      _memcpy(puVar13,puVar4,(long)puVar10 * (long)puVar7);
    }
    _free(puVar4);
    return puVar13;
  }
  if (puVar14 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x1;
    _malloc();
    if (puVar13 != (undefined8 *)0x0) goto LAB_109dffc14;
  }
  puVar13 = (undefined8 *)0x1;
  uVar16 = 0x109dffc5c;
  FUN_109df7a04(&UNK_10f60230e);
  puVar3 = puVar3 + -0x40;
  while( true ) {
    *(undefined8 **)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 **)(puVar3 + -0x38) = puVar14;
    *(undefined8 **)(puVar3 + -0x30) = param_3;
    *(undefined8 **)(puVar3 + -0x28) = puVar7;
    *(undefined8 **)(puVar3 + -0x20) = puVar10;
    *(undefined8 **)(puVar3 + -0x18) = puVar4;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(undefined8 *)(puVar3 + -8) = uVar16;
    puVar14 = (undefined8 *)((long)puVar9 * (long)puVar8);
    puVar4 = puVar14;
    puVar10 = puVar8;
    _malloc();
    if (puVar4 != (undefined8 *)0x0) break;
    puVar7 = puVar9;
    if (puVar14 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x1;
      _malloc();
      puVar7 = puVar9;
      if (puVar4 != (undefined8 *)0x0) break;
    }
    puVar4 = (undefined8 *)&UNK_10f60230e;
    puVar6 = (undefined8 *)0x1;
    FUN_109df7a04();
    *(undefined8 *)(puVar3 + -0x90) = unaff_x26;
    *(undefined8 **)(puVar3 + -0x88) = unaff_x25;
    *(undefined8 **)(puVar3 + -0x80) = unaff_x24;
    *(undefined8 **)(puVar3 + -0x78) = puVar14;
    *(undefined8 **)(puVar3 + -0x70) = param_3;
    *(undefined8 **)(puVar3 + -0x68) = puVar8;
    *(undefined8 **)(puVar3 + -0x60) = puVar11;
    *(undefined8 **)(puVar3 + -0x58) = puVar13;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x48) = FUN_109dffce4;
    puVar15 = puVar3 + -0x50;
    lVar12 = puVar4[2];
    if (lVar12 == -1) {
      FUN_109e00030(0xffffffffffffffff);
      puVar4 = puVar13;
      goto LAB_109dffe08;
    }
    if (puVar10 < (undefined8 *)(lVar12 << 1 | 1U)) {
      puVar10 = (undefined8 *)(lVar12 * 2 + 1);
    }
    unaff_x24 = (undefined8 *)*puVar4;
    unaff_x25 = (undefined8 *)((long)puVar10 * (long)puVar7);
    puVar8 = puVar7;
    puVar9 = puVar10;
    puVar11 = puVar10;
    param_3 = puVar6;
    if (unaff_x24 == puVar6) {
      puVar13 = unaff_x25;
      _malloc();
      if (puVar13 == (undefined8 *)0x0) {
        if (unaff_x25 != (undefined8 *)0x0) goto LAB_109dffe08;
        puVar13 = (undefined8 *)0x1;
        _malloc();
        if (puVar13 == (undefined8 *)0x0) goto LAB_109dffe08;
      }
      puVar14 = puVar13;
      if (puVar13 != puVar6) {
        _memcpy(puVar13,unaff_x24,puVar4[1] * (long)puVar7);
        goto LAB_109dffde0;
      }
      puVar11 = (undefined8 *)0x0;
      uVar16 = 0x109dffdc4;
      puVar3 = puVar3 + -0x90;
    }
    else {
      puVar14 = unaff_x24;
      _realloc(unaff_x24,unaff_x25);
      if (puVar14 == (undefined8 *)0x0) {
        if (unaff_x25 != (undefined8 *)0x0) {
LAB_109dffe08:
          FUN_109df7a04(&UNK_10f60230e,1);
          *(undefined8 **)(puVar3 + -0xb0) = puVar11;
          *(undefined8 **)(puVar3 + -0xa8) = puVar4;
          *(undefined1 **)(puVar3 + -0xa0) = puVar15;
          *(code **)(puVar3 + -0x98) = FUN_109dffe18;
          __ZNSt3__19to_stringEm(puVar3 + -0x148);
          puVar4 = (undefined8 *)(puVar3 + -0x148);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar4,0,&UNK_10f602320,0x30);
          uVar17 = puVar4[1];
          uVar16 = *puVar4;
          *(undefined8 *)(puVar3 + -0x120) = puVar4[2];
          *(undefined8 *)(puVar3 + -0x128) = uVar17;
          *(undefined8 *)(puVar3 + -0x130) = uVar16;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          puVar4 = (undefined8 *)(puVar3 + -0x130);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar4,&UNK_10f602351,0x2e);
          uVar17 = puVar4[1];
          uVar16 = *puVar4;
          *(undefined8 *)(puVar3 + -0x100) = puVar4[2];
          *(undefined8 *)(puVar3 + -0x108) = uVar17;
          *(undefined8 *)(puVar3 + -0x110) = uVar16;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          __ZNSt3__19to_stringEm(puVar3 + -0x160,0xffffffff);
          uVar1 = *(ulong *)(puVar3 + -0x158);
          puVar15 = *(undefined1 **)(puVar3 + -0x160);
          if (-1 < (char)puVar3[-0x149]) {
            uVar1 = (ulong)(byte)puVar3[-0x149];
            puVar15 = puVar3 + -0x160;
          }
          puVar4 = (undefined8 *)(puVar3 + -0x110);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar4,puVar15,uVar1);
          uVar17 = puVar4[1];
          uVar16 = *puVar4;
          *(undefined8 *)(puVar3 + -0xe0) = puVar4[2];
          *(undefined8 *)(puVar3 + -0xe8) = uVar17;
          *(undefined8 *)(puVar3 + -0xf0) = uVar16;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          puVar4 = (undefined8 *)(puVar3 + -0xf0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar4,&DAT_10f684600,1);
          uVar17 = puVar4[1];
          uVar16 = *puVar4;
          *(undefined8 *)(puVar3 + -0xc0) = puVar4[2];
          *(undefined8 *)(puVar3 + -200) = uVar17;
          *(undefined8 *)(puVar3 + -0xd0) = uVar16;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          if ((char)puVar3[-0x149] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar3 + -0x160));
          }
          if ((char)puVar3[-0xf9] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar3 + -0x110));
          }
          if ((char)puVar3[-0x119] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar3 + -0x130));
          }
          if ((char)puVar3[-0x131] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar3 + -0x148));
          }
          plVar5 = (long *)0x10;
          ___cxa_allocate_exception();
          __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE()
          ;
          *plVar5 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
          ___cxa_throw(plVar5,PTR___ZTISt12length_error_110352238,
                       PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x109dfff90);
          (*pcVar2)();
        }
        puVar14 = (undefined8 *)0x1;
        _malloc();
        if (puVar14 == (undefined8 *)0x0) goto LAB_109dffe08;
      }
      puVar13 = puVar14;
      if (puVar14 != puVar6) {
LAB_109dffde0:
        *puVar4 = puVar13;
        puVar4[2] = puVar10;
        return puVar14;
      }
      puVar11 = (undefined8 *)puVar4[1];
      uVar16 = 0x109dffd7c;
      puVar3 = puVar3 + -0x90;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    _memcpy(puVar4,puVar13,(long)puVar11 * (long)puVar8);
  }
  _free(puVar13);
  return puVar4;
}



/* Entry: 109dffce4; end: 109dffe17;  */

/* WARNING: Removing unreachable block (ram,0x000109dfff08) */

void FUN_109dffce4(long *param_1,long *param_2,ulong param_3,long param_4)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  ulong unaff_x20;
  long *plVar6;
  long *plVar7;
  undefined1 *puStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar5 = param_1[2];
  if (lVar5 == -1) {
    FUN_109e00030(0xffffffffffffffff);
    goto LAB_109dffe08;
  }
  if (param_3 < (lVar5 << 1 | 1U)) {
    param_3 = lVar5 * 2 + 1;
  }
  plVar6 = (long *)*param_1;
  plVar7 = (long *)(param_3 * param_4);
  unaff_x19 = param_1;
  unaff_x20 = param_3;
  if (plVar6 == param_2) {
    plVar3 = plVar7;
    _malloc();
    if (plVar3 == (long *)0x0) {
      if (plVar7 != (long *)0x0) goto LAB_109dffe08;
      plVar3 = (long *)0x1;
      _malloc();
      if (plVar3 == (long *)0x0) goto LAB_109dffe08;
    }
    plVar7 = plVar3;
    if (plVar3 == param_2) {
      plVar7 = param_1;
      func_0x000109dffc5c(param_1,plVar3,param_4,param_3,0);
      plVar6 = (long *)*param_1;
    }
    _memcpy(plVar7,plVar6,param_1[1] * param_4);
  }
  else {
    _realloc(plVar6,plVar7);
    if (plVar6 == (long *)0x0) {
      if (plVar7 != (long *)0x0) {
LAB_109dffe08:
        FUN_109df7a04(&UNK_10f60230e,1);
        pcStack_58 = FUN_109dffe18;
        uStack_70 = unaff_x20;
        plStack_68 = unaff_x19;
        puStack_60 = &stack0xfffffffffffffff0;
        __ZNSt3__19to_stringEm(auStack_108);
        puVar4 = auStack_108;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar4,0,&UNK_10f602320,0x30);
        uStack_e8 = puVar4[1];
        uStack_f0 = *puVar4;
        lStack_e0 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        puVar4 = &uStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar4,&UNK_10f602351,0x2e);
        uStack_c8 = puVar4[1];
        uStack_d0 = *puVar4;
        lStack_c0 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        __ZNSt3__19to_stringEm(&puStack_120,0xffffffff);
        ppuVar1 = (undefined1 **)puStack_120;
        if (-1 < (char)bStack_109) {
          uStack_118 = (ulong)bStack_109;
          ppuVar1 = &puStack_120;
        }
        puVar4 = &uStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar4,ppuVar1,uStack_118);
        uStack_a8 = puVar4[1];
        uStack_b0 = *puVar4;
        uStack_a0 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        puVar4 = &uStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar4,&DAT_10f684600,1);
        uStack_88 = puVar4[1];
        uStack_90 = *puVar4;
        uStack_80 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        if ((char)bStack_109 < '\0') {
          __ZdlPv(puStack_120);
        }
        if (lStack_c0 < 0) {
          __ZdlPv(uStack_d0);
        }
        if (lStack_e0 < 0) {
          __ZdlPv(uStack_f0);
        }
        if (cStack_f1 < '\0') {
          __ZdlPv(auStack_108[0]);
        }
        plVar6 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
        *plVar6 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar6,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109dfff90);
        (*pcVar2)();
      }
      plVar6 = (long *)0x1;
      _malloc();
      if (plVar6 == (long *)0x0) goto LAB_109dffe08;
    }
    plVar7 = plVar6;
    if (plVar6 == param_2) {
      plVar7 = param_1;
      func_0x000109dffc5c(param_1,plVar6,param_4,param_3,param_1[1]);
    }
  }
  *param_1 = (long)plVar7;
  param_1[2] = param_3;
  return;
}



/* Entry: 109dffe18; end: 109e0002f;  */

/* WARNING: Removing unreachable block (ram,0x000109dfff08) */

void FUN_109dffe18(void)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__19to_stringEm(auStack_b8);
  puVar3 = auStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar3,0,&UNK_10f602320,0x30);
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  lStack_90 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f602351,0x2e);
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  lStack_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__19to_stringEm(&puStack_d0,0xffffffff);
  ppuVar1 = (undefined1 **)puStack_d0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    ppuVar1 = &puStack_d0;
  }
  puVar3 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,ppuVar1,uStack_c8);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&DAT_10f684600,1);
  uStack_38 = puVar3[1];
  uStack_40 = *puVar3;
  uStack_30 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(puStack_d0);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  plVar4 = (long *)0x10;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *plVar4 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  ___cxa_throw(plVar4,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109dfff90);
  (*pcVar2)();
}



/* Entry: 109e00030; end: 109e00107;  */

void FUN_109e00030(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__19to_stringEm(auStack_58);
  puVar2 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f602380,0x3d);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  uStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  plVar3 = (long *)0x10;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *plVar3 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  ___cxa_throw(plVar3,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109e000c8);
  (*pcVar1)();
}



/* Entry: 109e00108; end: 109e001db;  */

long ***** FUN_109e00108(long *****param_1,long *****param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *plVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *extraout_x8;
  long ****pppplVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_1b8 [32];
  undefined2 uStack_198;
  undefined1 auStack_190 [32];
  undefined2 uStack_170;
  long ****pppplStack_168;
  long lStack_160;
  long lStack_158;
  undefined2 uStack_148;
  long lStack_140;
  long lStack_138;
  byte bStack_130;
  undefined2 uStack_120;
  long ****pppplStack_118;
  long lStack_110;
  long ***ppplStack_100;
  undefined2 uStack_f8;
  long lStack_c0;
  long ****pppplStack_48;
  long ****apppplStack_40 [2];
  byte bStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar5 = param_1;
  FUN_109e001dc(apppplStack_40);
  if ((bStack_30 & 1) == 0) {
    pppplStack_48 = apppplStack_40[0];
    param_2 = &pppplStack_48;
    FUN_109d3a3ec(param_1);
    ppppplVar5 = (long *****)pppplStack_48;
    pppplStack_48 = (long ****)0x0;
    if (ppppplVar5 != (long *****)0x0) {
      (*(code *)(*ppppplVar5)[1])();
    }
  }
  else {
    param_1 = (long *****)0x0;
    param_3 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pppplVar9 = pppplStack_48;
  pppplStack_48 = (long ****)0x0;
  if (pppplVar9 != (long ****)0x0) {
    (*(code *)(*pppplVar9)[1])();
  }
  __Unwind_Resume();
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0x104;
  pppplStack_118 = (long ****)param_2;
  FUN_109df9364(extraout_x8,&pppplStack_118,0xffffffffffffffff,0,0,1,0,0);
  cVar3 = *(char *)((long)param_2 + 0x17);
  ppppplVar8 = (long *****)*param_2;
  if (-1 < (long)cVar3) {
    ppppplVar8 = param_2;
  }
  pppplVar9 = param_2[1];
  if (-1 < cVar3) {
    pppplVar9 = (long ****)(long)cVar3;
  }
  FUN_109da12f0(&pppplStack_118,ppppplVar8,(long)ppppplVar8 + (long)pppplVar9);
  uVar4 = (int)((ulong)((long)ppppplVar5[4] - (long)ppppplVar5[3]) >> 3) * -0x55555555;
  bVar11 = *(byte *)(extraout_x8 + 2);
  if ((uVar4 != 0) && ((bVar11 & 1) != 0)) {
    lVar13 = 0;
    lVar12 = extraout_x8[1];
    do {
      plVar6 = (long *)((long)ppppplVar5[3] + lVar13);
      cVar3 = *(char *)((long)plVar6 + 0x17);
      plVar1 = (long *)*plVar6;
      if (-1 < (long)cVar3) {
        plVar1 = plVar6;
      }
      lVar2 = plVar6[1];
      if (-1 < cVar3) {
        lVar2 = (long)cVar3;
      }
      lStack_110 = 0;
      FUN_109d3a7bc(&pppplStack_118,plVar1,(long)plVar1 + lVar2);
      uStack_148 = 0x104;
      uStack_120 = 0x101;
      uStack_170 = 0x101;
      uStack_198 = 0x101;
      pppplStack_168 = (long ****)param_2;
      FUN_109dfaa50(&pppplStack_118,0,&pppplStack_168,&lStack_140,auStack_190,auStack_1b8);
      uStack_148 = 0x105;
      pppplStack_168 = pppplStack_118;
      lStack_160 = lStack_110;
      ppppplVar8 = (long *****)0xffffffffffffffff;
      FUN_109df9364(&lStack_140,&pppplStack_168,0xffffffffffffffff,0,0,1,0,0);
      if ((bVar11 & 1) == 0) {
        plVar6 = (long *)*extraout_x8;
        *extraout_x8 = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if ((bStack_130 & 1) == 0) {
        bVar11 = bVar11 & 0xfe;
      }
      else {
        bVar11 = bVar11 | 1;
        lVar12 = lStack_138;
      }
      *extraout_x8 = lStack_140;
    } while (((ulong)uVar4 * 0x18 + -0x18 != lVar13) && (lVar13 = lVar13 + 0x18, (bVar11 & 1) != 0))
    ;
    extraout_x8[1] = lVar12;
    *(byte *)(extraout_x8 + 2) = bVar11;
  }
  if ((bVar11 & 1) == 0) {
    ppppplVar8 = (long *****)pppplStack_118;
    func_0x000104c54c8c(&pppplStack_168,pppplStack_118,lStack_110);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      __ZdlPv(*param_3);
    }
    param_3[1] = lStack_160;
    *param_3 = (long)pppplStack_168;
    param_3[2] = lStack_158;
  }
  ppppplVar5 = (long *****)pppplStack_118;
  if (pppplStack_118 != &ppplStack_100) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c0) {
    ___stack_chk_fail();
    if (pppplStack_118 != &ppplStack_100) {
      _free();
    }
    plVar6 = (long *)*extraout_x8;
    *extraout_x8 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    __Unwind_Resume();
    uVar4 = (int)((ulong)((long)ppppplVar5[1] - (long)*ppppplVar5) >> 3) * -0x55555555;
    uVar10 = (ulong)uVar4;
    if (uVar4 != 0) {
      ppppplVar7 = (long *****)0x1;
      pppplVar9 = *ppppplVar5;
      do {
        if (((*pppplVar9)[1] <= ppppplVar8) && (ppppplVar8 <= (*pppplVar9)[2])) {
          return ppppplVar7;
        }
        ppppplVar7 = (long *****)(ulong)((int)ppppplVar7 + 1);
        uVar10 = uVar10 - 1;
        pppplVar9 = pppplVar9 + 3;
      } while (uVar10 != 0);
    }
    return (long *****)0x0;
  }
  return ppppplVar5;
}



/* Entry: 109e001dc; end: 109e00497;  */

long * FUN_109e001dc(long *param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_168 [32];
  undefined2 uStack_148;
  undefined1 auStack_140 [32];
  undefined2 uStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined2 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  byte bStack_e0;
  undefined2 uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b0;
  undefined2 uStack_a8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = 0x104;
  plStack_c8 = param_3;
  FUN_109df9364(param_1,&plStack_c8,0xffffffffffffffff,0,0,1,0,0);
  cVar2 = *(char *)((long)param_3 + 0x17);
  plVar6 = (long *)*param_3;
  if (-1 < (long)cVar2) {
    plVar6 = param_3;
  }
  lVar10 = param_3[1];
  if (-1 < cVar2) {
    lVar10 = (long)cVar2;
  }
  FUN_109da12f0(&plStack_c8,plVar6,(long)plVar6 + lVar10);
  uVar3 = (int)((ulong)(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18)) >> 3) * -0x55555555;
  bVar8 = *(byte *)(param_1 + 2);
  if ((uVar3 != 0) && ((bVar8 & 1) != 0)) {
    lVar10 = 0;
    lVar9 = param_1[1];
    do {
      plVar6 = (long *)(*(long *)(param_2 + 0x18) + lVar10);
      cVar2 = *(char *)((long)plVar6 + 0x17);
      plVar4 = (long *)*plVar6;
      if (-1 < (long)cVar2) {
        plVar4 = plVar6;
      }
      lVar1 = plVar6[1];
      if (-1 < cVar2) {
        lVar1 = (long)cVar2;
      }
      lStack_c0 = 0;
      FUN_109d3a7bc(&plStack_c8,plVar4,(long)plVar4 + lVar1);
      uStack_f8 = 0x104;
      uStack_d0 = 0x101;
      uStack_120 = 0x101;
      uStack_148 = 0x101;
      plStack_118 = param_3;
      FUN_109dfaa50(&plStack_c8,0,&plStack_118,&lStack_f0,auStack_140,auStack_168);
      uStack_f8 = 0x105;
      plStack_118 = plStack_c8;
      lStack_110 = lStack_c0;
      plVar6 = (long *)0xffffffffffffffff;
      FUN_109df9364(&lStack_f0,&plStack_118,0xffffffffffffffff,0,0,1,0,0);
      if ((bVar8 & 1) == 0) {
        plVar4 = (long *)*param_1;
        *param_1 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      if ((bStack_e0 & 1) == 0) {
        bVar8 = bVar8 & 0xfe;
      }
      else {
        bVar8 = bVar8 | 1;
        lVar9 = lStack_e8;
      }
      *param_1 = lStack_f0;
    } while (((ulong)uVar3 * 0x18 + -0x18 != lVar10) && (lVar10 = lVar10 + 0x18, (bVar8 & 1) != 0));
    param_1[1] = lVar9;
    *(byte *)(param_1 + 2) = bVar8;
  }
  if ((bVar8 & 1) == 0) {
    plVar6 = plStack_c8;
    func_0x000104c54c8c(&plStack_118,plStack_c8,lStack_c0);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    param_4[1] = lStack_110;
    *param_4 = (long)plStack_118;
    param_4[2] = lStack_108;
  }
  plVar4 = plStack_c8;
  if (plStack_c8 != &lStack_b0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (plStack_c8 != &lStack_b0) {
      _free();
    }
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    __Unwind_Resume();
    uVar3 = (int)((ulong)(plVar4[1] - *plVar4) >> 3) * -0x55555555;
    uVar7 = (ulong)uVar3;
    if (uVar3 != 0) {
      plVar5 = (long *)0x1;
      plVar4 = (long *)*plVar4;
      do {
        if ((*(long **)(*plVar4 + 8) <= plVar6) && (plVar6 <= *(long **)(*plVar4 + 0x10))) {
          return plVar5;
        }
        plVar5 = (long *)(ulong)((int)plVar5 + 1);
        uVar7 = uVar7 - 1;
        plVar4 = plVar4 + 3;
      } while (uVar7 != 0);
    }
    return (long *)0x0;
  }
  return plVar4;
}



/* Entry: 109e00498; end: 109e0051b;  */

int FUN_109e00498(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar1 = (int)((ulong)(param_1[1] - *param_1) >> 3) * -0x55555555;
  uVar4 = (ulong)uVar1;
  if (uVar1 != 0) {
    iVar2 = 1;
    plVar3 = (long *)*param_1;
    do {
      if ((*(ulong *)(*plVar3 + 8) <= param_2) && (param_2 <= *(ulong *)(*plVar3 + 0x10))) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 - 1;
      plVar3 = plVar3 + 3;
    } while (uVar4 != 0);
  }
  return 0;
}



/* Entry: 109e0051c; end: 109e0076f;  */

int FUN_109e0051c(long *param_1,int param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar3 = param_1 + 1;
  FUN_109e01c54(plVar3,*param_1);
  pbVar2 = (byte *)*plVar3;
  uVar6 = plVar3[1] - (long)pbVar2;
  pbVar5 = pbVar2;
  if (uVar6 != 0) {
    pbVar4 = pbVar2;
    do {
      uVar1 = uVar6 >> 1;
      uVar7 = uVar6 >> 1;
      pbVar5 = pbVar4 + uVar1 + 1;
      uVar6 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
      if ((param_2 - *(int *)(*param_1 + 8) & 0xffU) <= (uint)pbVar4[uVar1]) {
        pbVar5 = pbVar4;
        uVar6 = uVar7;
      }
      pbVar4 = pbVar5;
    } while (uVar6 != 0);
  }
  return ((int)pbVar5 - (int)pbVar2) + 1;
}



/* Entry: 109e00770; end: 109e00807;  */

ulong FUN_109e00770(long *param_1,long param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  iVar1 = (int)&lStack_40;
  if (param_3 == 0) {
    plVar2 = param_1;
    FUN_109e00498(param_1,param_2);
    param_3 = (int)plVar2;
  }
  plVar3 = (long *)(*param_1 + (ulong)(param_3 - 1) * 0x18);
  plVar2 = plVar3;
  func_0x000109e004e8(plVar3,param_2);
  lStack_40 = *(long *)(*plVar3 + 8);
  param_2 = param_2 - lStack_40;
  lStack_38 = param_2;
  func_0x000109e03c68(&lStack_40,&UNK_10f6023be,2,0xffffffffffffffff);
  return (ulong)plVar2 & 0xffffffff | (ulong)(uint)((int)param_2 - iVar1) << 0x20;
}



/* Entry: 109e00808; end: 109e00993;  */

long * FUN_109e00808(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 != 0) {
    plVar3 = param_1;
    FUN_109e00498();
    uVar2 = (int)plVar3 - 1;
    puVar5 = *(undefined **)(*param_1 + (ulong)uVar2 * 0x18 + 0x10);
    FUN_109e00808(param_1,puVar5,param_3);
    puVar1 = (undefined8 *)param_3[4];
    if ((ulong)(param_3[3] - (long)puVar1) < 0xe) {
      puVar5 = &UNK_10f6023c3;
      FUN_109e0560c(param_3,&UNK_10f6023c3,0xe);
    }
    else {
      *puVar1 = 0x646564756c636e49;
      *(undefined8 *)((long)puVar1 + 6) = 0x206d6f7266206465;
      param_3[4] = param_3[4] + 0xe;
    }
    plVar4 = *(long **)(*param_1 + (ulong)uVar2 * 0x18);
    (**(code **)(*plVar4 + 0x10))();
    FUN_109d2f728(param_3,plVar4,puVar5);
    if ((undefined1 *)param_3[3] == (undefined1 *)param_3[4]) {
      FUN_109e0560c(param_3,&UNK_10f6023c1,1);
    }
    else {
      *(undefined1 *)param_3[4] = 0x3a;
      param_3[4] = param_3[4] + 1;
    }
    FUN_109e00770(param_1,param_2,plVar3);
    uVar6 = (ulong)param_1 & 0xffffffff;
    param_1 = param_3;
    FUN_109df9d4c(param_3,uVar6,0,0,0);
    if ((ulong)(param_3[3] - param_3[4]) < 2) {
      puVar5 = &UNK_10f6023d2;
      uVar9 = 2;
      lVar7 = param_3[4];
      uVar6 = param_3[3] - lVar7;
      if ((ulong)(param_3[3] - lVar7) < 2) {
        do {
          while (param_3[2] != 0) {
            if (lVar7 == param_3[2]) {
              if (param_3[6] != 0) {
                FUN_109e057dc();
              }
              uVar8 = 0;
              if (uVar6 != 0) {
                uVar8 = uVar9 / uVar6;
              }
              uVar6 = uVar8 * uVar6;
              uVar9 = uVar9 - uVar6;
              (**(code **)(*param_3 + 0x48))(param_3,puVar5,uVar6);
              lVar7 = param_3[4];
              uVar8 = param_3[3] - lVar7;
              if (uVar9 <= uVar8) {
                puVar5 = puVar5 + uVar6;
                goto LAB_109e05640;
              }
            }
            else {
              FUN_109e05740(param_3,puVar5,uVar6);
              FUN_109e05520(param_3);
              uVar9 = uVar9 - uVar6;
              lVar7 = param_3[4];
              uVar8 = param_3[3] - lVar7;
            }
            puVar5 = puVar5 + uVar6;
            uVar6 = uVar8;
            if (uVar9 <= uVar8) goto LAB_109e05640;
          }
          if ((int)param_3[7] == 0) {
            if (param_3[6] != 0) {
              FUN_109e057dc();
            }
            (**(code **)(*param_3 + 0x48))(param_3,puVar5,uVar9);
            return param_3;
          }
          FUN_109e0538c(param_3);
          lVar7 = param_3[4];
          uVar6 = param_3[3] - lVar7;
        } while (uVar6 < uVar9);
      }
LAB_109e05640:
      FUN_109e05740(param_3,puVar5,uVar9);
      return param_3;
    }
    *(undefined2 *)param_3[4] = 0xa3a;
    param_3[4] = param_3[4] + 2;
  }
  return param_1;
}



/* Entry: 109e00994; end: 109e00c27;  */

/* WARNING: Removing unreachable block (ram,0x000109e00d1c) */
/* WARNING: Removing unreachable block (ram,0x000109e00d24) */
/* WARNING: Removing unreachable block (ram,0x000109e00d68) */
/* WARNING: Removing unreachable block (ram,0x000109e00d54) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109e00994(undefined8 param_1,long *******param_2,long ****param_3,undefined4 param_4,
                  undefined8 param_5,ulong *param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong *puVar1;
  long **pplVar2;
  long **pplVar3;
  long ***ppplVar4;
  long ******pppppplVar5;
  undefined8 *******pppppppuVar6;
  long **pplVar7;
  long **pplVar8;
  char cVar9;
  undefined1 uVar10;
  code *pcVar11;
  long *******ppppppplVar12;
  char *pcVar13;
  long *******ppppppplVar14;
  long *plVar15;
  long *plVar16;
  long ****pppplVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  long ***ppplVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  ulong uVar25;
  long **pplVar26;
  ulong uVar27;
  long **pplVar28;
  long ***ppplVar29;
  long *****ppppplVar30;
  long ****pppplVar31;
  long lVar32;
  long ***ppplVar33;
  long ******pppppplVar34;
  int iVar35;
  long **pplVar36;
  long ***ppplStack_1d0;
  undefined8 *******pppppppuStack_1c0;
  long ***ppplStack_1b8;
  undefined8 uStack_1b0;
  long *******ppppppplStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  long *******ppppppplStack_190;
  long **pplStack_188;
  undefined8 *******pppppppuStack_180;
  long *****ppppplStack_178;
  undefined8 uStack_170;
  long ****pppplStack_168;
  long *plStack_160;
  long lStack_158;
  ulong uStack_150;
  long *******ppppppplStack_148;
  long ****pppplStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 *******pppppppuStack_120;
  long lStack_118;
  long ****pppplStack_110;
  long lStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long ****pppplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_bc;
  undefined8 *******pppppppuStack_b8;
  long lStack_b0;
  char cStack_a1;
  long *plStack_a0;
  ulong uStack_98;
  long alStack_90 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0x400000000;
  uStack_d8 = param_9;
  uStack_d0 = param_8;
  uStack_c8 = param_1;
  uStack_bc = param_4;
  plStack_a0 = alStack_90;
  if (param_3 == (long ****)0x0) {
    lVar32 = 0;
    pppplVar23 = (long ****)0x0;
    uVar27 = 0xffffffff;
    pppplStack_e0 = (long ****)0x9;
    pcVar13 = "<unknown>";
  }
  else {
    ppppppplVar12 = param_2;
    pppplVar17 = param_3;
    FUN_109e00498();
    ppppplVar30 = (*param_2)[(ulong)((int)ppppppplVar12 - 1) * 3];
    pcVar13 = (char *)ppppplVar30;
    (*(code *)(*ppppplVar30)[2])();
    pppplVar24 = param_3;
    do {
      pppplVar31 = pppplVar24;
      pppplVar23 = ppppplVar30[1];
      if (pppplVar31 == ppppplVar30[1]) break;
      cVar9 = *(char *)((long)pppplVar31 + -1);
      pppplVar24 = (long ****)((long)pppplVar31 + -1);
      pppplVar23 = pppplVar31;
    } while (cVar9 != '\n' && cVar9 != '\r');
    pppplVar31 = param_3;
    for (pppplVar24 = param_3;
        (ppppplVar30[2] != pppplVar24 &&
        (pppplVar31 = pppplVar24, *(char *)pppplVar24 != '\n' && *(char *)pppplVar24 != '\r'));
        pppplVar24 = (long ****)((long)pppplVar24 + 1)) {
      pppplVar31 = ppppplVar30[2];
    }
    pppplStack_e0 = pppplVar17;
    if (param_7 != 0) {
      puVar1 = param_6 + param_7 * 2;
      do {
        pppplVar17 = (long ****)*param_6;
        pppplVar24 = (long ****)param_6[1];
        if ((pppplVar17 != (long ****)0x0 && pppplVar17 <= pppplVar31) && pppplVar23 <= pppplVar24)
        {
          iVar35 = (int)pppplVar23;
          iVar20 = iVar35;
          if (pppplVar23 <= pppplVar17) {
            iVar20 = (int)pppplVar17;
          }
          iVar18 = (int)pppplVar31;
          if (pppplVar24 <= pppplVar31) {
            iVar18 = (int)pppplVar24;
          }
          func_0x000109da523c(&plStack_a0,CONCAT44(iVar18 - iVar35,iVar20 - iVar35));
        }
        param_6 = param_6 + 2;
      } while (param_6 != puVar1);
    }
    ppppppplVar14 = param_2;
    FUN_109e00770(param_2,param_3,ppppppplVar12);
    lVar32 = (long)pppplVar31 - (long)pppplVar23;
    uVar27 = (ulong)((int)((ulong)ppppppplVar14 >> 0x20) - 1);
  }
  FUN_109e04498(&pppppppuStack_b8,param_5);
  pppppppuStack_120 = pppppppuStack_b8;
  if (-1 < (long)cStack_a1) {
    pppppppuStack_120 = &pppppppuStack_b8;
  }
  lStack_118 = lStack_b0;
  if (-1 < cStack_a1) {
    lStack_118 = (long)cStack_a1;
  }
  uStack_f8 = uStack_98 & 0xffffffff;
  uStack_f0 = uStack_d0;
  uStack_e8 = uStack_d8;
  plStack_100 = plStack_a0;
  ppppppplVar12 = param_2;
  pppplVar17 = param_3;
  ppppplVar30 = (long *****)pcVar13;
  pppplStack_110 = pppplVar23;
  lStack_108 = lVar32;
  FUN_109e01760(uStack_c8);
  uVar21 = (uint)ppppplVar30;
  if (cStack_a1 < '\0') {
    __ZdlPv(pppppppuStack_b8);
  }
  plVar15 = plStack_a0;
  if (plStack_a0 != alStack_90) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_a0 != alStack_90) {
    _free();
  }
  plVar16 = plVar15;
  __Unwind_Resume();
  pcStack_128 = FUN_109e00c28;
  uStack_150 = uVar27;
  ppppppplStack_148 = param_2;
  pppplStack_140 = param_3;
  plStack_138 = plVar15;
  puStack_130 = &stack0xfffffffffffffff0;
  if ((code *)plVar16[6] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109e00c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar16[6])(pppplVar17,plVar16[7]);
    return;
  }
  if (pppplVar17[1] != (long ***)0x0) {
    plVar15 = plVar16;
    FUN_109e00498();
    FUN_109e00808(plVar16,*(undefined8 *)(*plVar16 + (ulong)((int)plVar15 - 1) * 0x18 + 0x10),
                  ppppppplVar12);
  }
  uVar19 = 0;
  if (uVar21 == 0) {
    uVar19 = 2;
  }
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
  ppppppplStack_1a8 = ppppppplVar12;
  pppppppuStack_180 = &pppppppuStack_b8;
  ppppplStack_178 = (long *****)pcVar13;
  uStack_170 = param_5;
  pppplStack_168 = pppplVar23;
  plStack_160 = alStack_90;
  lStack_158 = lVar32;
  FUN_109e05130(&ppppppplStack_1a8,8,1,0);
  pppplVar23 = pppplVar17 + 2;
  cVar9 = *(char *)((long)pppplVar17 + 0x27);
  if ((long)cVar9 < 0) {
    if (pppplVar17[3] != (long ***)0x0) {
      if (pppplVar17[3] == (long ***)0x1) {
        pppplVar24 = (long ****)*pppplVar23;
        goto LAB_109e00db4;
      }
      goto LAB_109e00de4;
    }
  }
  else if (cVar9 != '\0') {
    pppplVar24 = pppplVar23;
    if (cVar9 == '\x01') {
LAB_109e00db4:
      if (*(char *)pppplVar24 != '-') goto LAB_109e00de4;
      pppppplVar34 = ppppppplStack_1a8[4];
      if ((ulong)((long)ppppppplStack_1a8[3] - (long)pppppplVar34) < 7) {
        pppplVar24 = (long ****)&UNK_10f5fa7f8;
        ppplVar29 = (long ***)0x7;
        goto LAB_109e00df8;
      }
      *(undefined4 *)((long)pppppplVar34 + 3) = 0x3e6e6964;
      *(undefined4 *)pppppplVar34 = 0x6474733c;
      ppppppplStack_1a8[4] = (long ******)((long)ppppppplStack_1a8[4] + 7);
    }
    else {
LAB_109e00de4:
      pppplVar24 = (long ****)pppplVar17[2];
      ppplVar29 = pppplVar17[3];
      if (-1 < cVar9) {
        pppplVar24 = pppplVar23;
        ppplVar29 = (long ***)(long)cVar9;
      }
LAB_109e00df8:
      FUN_109e0560c(ppppppplStack_1a8,pppplVar24,ppplVar29);
    }
    if (*(int *)(pppplVar17 + 5) != -1) {
      pppppplVar34 = ppppppplStack_1a8[4];
      if (pppppplVar34 < ppppppplStack_1a8[3]) {
        ppppppplStack_1a8[4] = (long ******)((long)pppppplVar34 + 1);
        *(undefined1 *)pppppplVar34 = 0x3a;
      }
      else {
        FUN_109e05570(ppppppplStack_1a8,0x3a);
      }
      FUN_109df9ee0(ppppppplStack_1a8,(long)*(int *)(pppplVar17 + 5),0,0);
      if (*(int *)((long)pppplVar17 + 0x2c) != -1) {
        pppppplVar34 = ppppppplStack_1a8[4];
        if (pppppplVar34 < ppppppplStack_1a8[3]) {
          ppppppplStack_1a8[4] = (long ******)((long)pppppplVar34 + 1);
          *(undefined1 *)pppppplVar34 = 0x3a;
        }
        else {
          FUN_109e05570(ppppppplStack_1a8,0x3a);
        }
        FUN_109df9ee0(ppppppplStack_1a8,(long)*(int *)((long)pppplVar17 + 0x2c) + 1,0,0);
      }
    }
    if ((ulong)((long)ppppppplStack_1a8[3] - (long)ppppppplStack_1a8[4]) < 2) {
      FUN_109e0560c(ppppppplStack_1a8,": ",2);
    }
    else {
      *(undefined2 *)ppppppplStack_1a8[4] = 0x203a;
      ppppppplStack_1a8[4] = (long ******)((long)ppppppplStack_1a8[4] + 2);
    }
  }
  FUN_109e051a0(&ppppppplStack_1a8);
  iVar20 = *(int *)(pppplVar17 + 6);
  if (iVar20 < 2) {
    if (iVar20 == 0) {
      FUN_109e04cd8(ppppppplVar12,"",0,uVar21 ^ 1);
    }
    else if (iVar20 == 1) {
      FUN_109e04df0(ppppppplVar12,"",0,uVar21 ^ 1);
    }
  }
  else if (iVar20 == 2) {
    FUN_109e0501c(ppppppplVar12,"",0,uVar21 ^ 1);
  }
  else if (iVar20 == 3) {
    FUN_109e04f08(ppppppplVar12,"",0,uVar21 ^ 1);
  }
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
  ppppppplStack_1a8 = ppppppplVar12;
  FUN_109e05130(&ppppppplStack_1a8,8,1,0);
  ppplVar29 = pppplVar17[8];
  pppplVar23 = (long ****)pppplVar17[7];
  if (-1 < (char)*(byte *)((long)pppplVar17 + 0x4f)) {
    ppplVar29 = (long ***)(ulong)*(byte *)((long)pppplVar17 + 0x4f);
    pppplVar23 = pppplVar17 + 7;
  }
  FUN_109e0560c(ppppppplStack_1a8,pppplVar23,ppplVar29);
  pppppplVar34 = ppppppplStack_1a8[4];
  if (pppppplVar34 < ppppppplStack_1a8[3]) {
    ppppppplStack_1a8[4] = (long ******)((long)pppppplVar34 + 1);
    *(undefined1 *)pppppplVar34 = 10;
  }
  else {
    FUN_109e05570(ppppppplStack_1a8,10);
  }
  FUN_109e051a0(&ppppppplStack_1a8);
  if (*(int *)(pppplVar17 + 5) == -1) {
    return;
  }
  if (*(int *)((long)pppplVar17 + 0x2c) == -1) {
    return;
  }
  pppplVar24 = pppplVar17 + 10;
  cVar9 = *(char *)((long)pppplVar17 + 0x67);
  pppplVar23 = (long ****)*pppplVar24;
  if (-1 < (long)cVar9) {
    pppplVar23 = pppplVar24;
  }
  ppplVar29 = pppplVar17[0xb];
  if (-1 < cVar9) {
    ppplVar29 = (long ***)(long)cVar9;
  }
  if (ppplVar29 != (long ***)0x0) {
    ppplVar22 = (long ***)0x0;
    do {
      if (*(char *)((long)pppplVar23 + (long)ppplVar22) < '\0') {
        FUN_109e01b1c(ppppppplVar12,pppplVar23,ppplVar29);
        return;
      }
      ppplVar22 = (long ***)((long)ppplVar22 + 1);
    } while (ppplVar29 != ppplVar22);
  }
  func_0x000104c59120(&ppppppplStack_1a8,(long)ppplVar29 + 1,0x20);
  ppplVar33 = pppplVar17[0xe];
  for (ppplVar22 = pppplVar17[0xd]; ppplVar22 != ppplVar33; ppplVar22 = ppplVar22 + 1) {
    uVar27 = uStack_1a0;
    if (-1 < (char)bStack_191) {
      uVar27 = (ulong)bStack_191;
    }
    if (*(uint *)((long)ppplVar22 + 4) <= uVar27) {
      uVar27 = (ulong)*(uint *)((long)ppplVar22 + 4);
    }
    if (0 < (long)(uVar27 - *(uint *)ppplVar22)) {
      ppppppplVar14 = ppppppplStack_1a8;
      if (-1 < (char)bStack_191) {
        ppppppplVar14 = (long *******)&ppppppplStack_1a8;
      }
      _memset((long)ppppppplVar14 + (ulong)*(uint *)ppplVar22,0x7e);
    }
  }
  pppppppuStack_1c0 = (undefined8 *******)0x0;
  ppplStack_1b8 = (long ***)0x0;
  uStack_1b0 = 0;
  ppplVar22 = (long ***)(long)*(char *)((long)pppplVar17 + 0x67);
  if ((long)ppplVar22 < 0) {
    ppplVar22 = pppplVar17[0xb];
  }
  uVar21 = *(uint *)((long)pppplVar17 + 0x2c);
  if (*(uint *)(pppplVar17 + 0x11) != 0) {
    pplVar28 = (long **)((long)pppplVar17[1] - (long)(int)uVar21);
    pplVar2 = (long **)((long)pplVar28 + (long)ppplVar22);
    ppplStack_1d0 = (long ***)0x0;
    lVar32 = (ulong)*(uint *)(pppplVar17 + 0x11) * 0x28;
    ppplVar22 = pppplVar17[0x10] + 3;
    do {
      pppppplVar34 = (long ******)(ppplVar22 + -1);
      pplVar36 = (long **)(long)*(char *)((long)ppplVar22 + 0xf);
      ppppppplStack_190 = (long *******)*pppppplVar34;
      if (-1 < (long)pplVar36) {
        ppppppplStack_190 = (long *******)pppppplVar34;
      }
      pplVar26 = *ppplVar22;
      pplVar3 = pplVar26;
      if (-1 < *(char *)((long)ppplVar22 + 0xf)) {
        pplVar3 = pplVar36;
      }
      ppppppplVar14 = (long *******)&ppppppplStack_190;
      pplStack_188 = pplVar3;
      FUN_109e03b70(ppppppplVar14,&UNK_10f6023d5,3,0);
      if (ppppppplVar14 == (long *******)0xffffffffffffffff) {
        pplVar7 = ppplVar22[-3];
        pplVar8 = ppplVar22[-2];
        if (pplVar7 <= pplVar2 && pplVar28 <= pplVar8) {
          uVar21 = 0;
          if (pplVar28 <= pplVar7) {
            uVar21 = (int)pplVar7 - (int)pplVar28;
          }
          ppplVar33 = (long ***)(ulong)uVar21;
          if (ppplVar33 < ppplStack_1d0) {
            uVar21 = (int)ppplStack_1d0 + 1;
          }
          ppplStack_1d0 = (long ***)(ulong)(uVar21 + (int)pplVar3);
          ppplVar4 = ppplStack_1b8;
          if (-1 < (long)uStack_1b0) {
            ppplVar4 = (long ***)(uStack_1b0 >> 0x38);
          }
          if (ppplVar4 < ppplStack_1d0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&pppppppuStack_1c0,ppplStack_1d0,0x20);
            pplVar36 = (long **)(ulong)*(byte *)((long)ppplVar22 + 0xf);
            pplVar26 = *ppplVar22;
          }
          if (-1 < (char)pplVar36) {
            pplVar26 = pplVar36;
          }
          if (pplVar26 != (long **)0x0) {
            pppppppuVar6 = pppppppuStack_1c0;
            if (-1 < (long)uStack_1b0) {
              pppppppuVar6 = &pppppppuStack_1c0;
            }
            pppppplVar5 = (long ******)*pppppplVar34;
            if (-1 < (char)pplVar36) {
              pppppplVar5 = pppppplVar34;
            }
            _memmove((long)pppppppuVar6 + (ulong)uVar21,pppppplVar5);
          }
          iVar20 = (int)pplVar8;
          if (pplVar2 <= pplVar8) {
            iVar20 = (int)pplVar2;
          }
          if (0 < (long)((ulong)(uint)(iVar20 - (int)pplVar28) - (long)ppplVar33)) {
            ppppppplVar14 = ppppppplStack_1a8;
            if (-1 < (char)bStack_191) {
              ppppppplVar14 = (long *******)&ppppppplStack_1a8;
            }
            _memset((long)ppppppplVar14 + (long)ppplVar33,0x7e);
          }
        }
      }
      ppplVar22 = ppplVar22 + 5;
      lVar32 = lVar32 + -0x28;
    } while (lVar32 != 0);
    uVar21 = *(uint *)((long)pppplVar17 + 0x2c);
  }
  if ((long ***)(ulong)uVar21 <= ppplVar29) {
    ppplVar29 = (long ***)(long)(int)uVar21;
  }
  ppppppplVar14 = ppppppplStack_1a8;
  if (-1 < (char)bStack_191) {
    ppppppplVar14 = (long *******)&ppppppplStack_1a8;
  }
  *(undefined1 *)((long)ppppppplVar14 + (long)ppplVar29) = 0x5e;
  uVar27 = uStack_1a0;
  ppppppplVar14 = ppppppplStack_1a8;
  if (-1 < (char)bStack_191) {
    uVar27 = (ulong)bStack_191;
    ppppppplVar14 = (long *******)&ppppppplStack_1a8;
  }
  do {
    uVar25 = uVar27;
    if (uVar25 == 0) break;
    uVar27 = uVar25 - 1;
  } while (*(char *)((long)ppppppplVar14 + (uVar25 - 1)) == ' ');
  if ((char)bStack_191 < '\0') {
    ppppppplVar14 = ppppppplStack_1a8;
    uVar27 = uVar25;
    if (uStack_1a0 < uVar25) goto LAB_109e015e4;
  }
  else {
    if (bStack_191 < uVar25) {
LAB_109e015e4:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x109e015ec);
      (*pcVar11)();
    }
    bStack_191 = (byte)uVar25;
    ppppppplVar14 = (long *******)&ppppppplStack_1a8;
    uVar27 = uStack_1a0;
  }
  uStack_1a0 = uVar27;
  *(undefined1 *)((long)ppppppplVar14 + uVar25) = 0;
  cVar9 = *(char *)((long)pppplVar17 + 0x67);
  pppplVar23 = (long ****)pppplVar17[10];
  if (-1 < (long)cVar9) {
    pppplVar23 = pppplVar24;
  }
  ppplVar29 = pppplVar17[0xb];
  if (-1 < cVar9) {
    ppplVar29 = (long ***)(long)cVar9;
  }
  FUN_109e01b1c(ppppppplVar12,pppplVar23,ppplVar29);
  pplStack_188 = (long **)CONCAT44(pplStack_188._4_4_,uVar19);
  ppppppplStack_190 = ppppppplVar12;
  FUN_109e05130(&ppppppplStack_190,2,1,0);
  uVar27 = uStack_1a0;
  if (-1 < (char)bStack_191) {
    uVar27 = (ulong)bStack_191;
  }
  if ((long ***)(uVar27 & 0xffffffff) != (long ***)0x0) {
    ppplVar29 = (long ***)0x0;
    uVar21 = 0;
    do {
      ppplVar22 = (long ***)(long)*(char *)((long)pppplVar17 + 0x67);
      if ((long)ppplVar22 < 0) {
        ppplVar22 = pppplVar17[0xb];
      }
      if (ppplVar29 < ppplVar22) {
        pppplVar23 = pppplVar24;
        if (*(char *)((long)pppplVar17 + 0x67) < '\0') {
          pppplVar23 = (long ****)*pppplVar24;
        }
        if (*(char *)((long)pppplVar23 + (long)ppplVar29) != '\t') goto LAB_109e013c0;
        do {
          ppppppplVar14 = ppppppplStack_1a8;
          if (-1 < (char)bStack_191) {
            ppppppplVar14 = (long *******)&ppppppplStack_1a8;
          }
          uVar10 = *(undefined1 *)((long)ppppppplVar14 + (long)ppplVar29);
          pppppplVar34 = ppppppplStack_190[4];
          if (pppppplVar34 < ppppppplStack_190[3]) {
            ppppppplStack_190[4] = (long ******)((long)pppppplVar34 + 1);
            *(undefined1 *)pppppplVar34 = uVar10;
          }
          else {
            FUN_109e05570();
          }
          uVar21 = uVar21 + 1;
        } while ((uVar21 & 7) != 0);
      }
      else {
LAB_109e013c0:
        ppppppplVar14 = ppppppplStack_1a8;
        if (-1 < (char)bStack_191) {
          ppppppplVar14 = (long *******)&ppppppplStack_1a8;
        }
        uVar10 = *(undefined1 *)((long)ppppppplVar14 + (long)ppplVar29);
        pppppplVar34 = ppppppplStack_190[4];
        if (pppppplVar34 < ppppppplStack_190[3]) {
          ppppppplStack_190[4] = (long ******)((long)pppppplVar34 + 1);
          *(undefined1 *)pppppplVar34 = uVar10;
        }
        else {
          FUN_109e05570();
        }
        uVar21 = uVar21 + 1;
      }
      ppplVar29 = (long ***)((long)ppplVar29 + 1);
    } while (ppplVar29 != (long ***)(uVar27 & 0xffffffff));
  }
  pppppplVar34 = ppppppplStack_190[4];
  if (pppppplVar34 < ppppppplStack_190[3]) {
    ppppppplStack_190[4] = (long ******)((long)pppppplVar34 + 1);
    *(undefined1 *)pppppplVar34 = 10;
  }
  else {
    FUN_109e05570(ppppppplStack_190,10);
  }
  FUN_109e051a0(&ppppppplStack_190);
  if ((long)(char)uStack_1b0._7_1_ < 0) {
    ppplVar29 = ppplStack_1b8;
    if (ppplStack_1b8 != (long ***)0x0) goto LAB_109e01454;
  }
  else {
    ppplVar29 = (long ***)(long)(char)uStack_1b0._7_1_;
    if (uStack_1b0._7_1_ == '\0') goto LAB_109e015b4;
LAB_109e01454:
    uVar27 = 0;
    ppplVar22 = (long ***)0x0;
    do {
      ppplVar33 = (long ***)(long)*(char *)((long)pppplVar17 + 0x67);
      if ((long)ppplVar33 < 0) {
        ppplVar33 = pppplVar17[0xb];
      }
      if (ppplVar22 < ppplVar33) {
        pppplVar23 = pppplVar24;
        if (*(char *)((long)pppplVar17 + 0x67) < '\0') {
          pppplVar23 = (long ****)*pppplVar24;
        }
        uVar21 = (uint)uStack_1b0._7_1_;
        if (*(char *)((long)pppplVar23 + (long)ppplVar22) != '\t') goto LAB_109e0150c;
        do {
          pppppppuVar6 = pppppppuStack_1c0;
          if (-1 < (char)uVar21) {
            pppppppuVar6 = &pppppppuStack_1c0;
          }
          uVar10 = *(undefined1 *)((long)pppppppuVar6 + (long)ppplVar22);
          pppppplVar34 = ppppppplVar12[4];
          if (pppppplVar34 < ppppppplVar12[3]) {
            ppppppplVar12[4] = (long ******)((long)pppppplVar34 + 1);
            *(undefined1 *)pppppplVar34 = uVar10;
          }
          else {
            FUN_109e05570(ppppppplVar12);
          }
          uVar21 = (uint)(char)uStack_1b0._7_1_;
          pppppppuVar6 = pppppppuStack_1c0;
          if (-1 < (int)uVar21) {
            pppppppuVar6 = &pppppppuStack_1c0;
          }
          if (*(char *)((long)pppppppuVar6 + (long)ppplVar22) != ' ') {
            ppplVar22 = (long ***)((long)ppplVar22 + 1);
          }
          uVar27 = uVar27 + 1;
        } while (((uVar27 & 7) != 0) && (ppplVar22 != ppplVar29));
      }
      else {
LAB_109e0150c:
        pppppppuVar6 = pppppppuStack_1c0;
        if (-1 < (long)uStack_1b0) {
          pppppppuVar6 = &pppppppuStack_1c0;
        }
        uVar10 = *(undefined1 *)((long)pppppppuVar6 + (long)ppplVar22);
        pppppplVar34 = ppppppplVar12[4];
        if (pppppplVar34 < ppppppplVar12[3]) {
          ppppppplVar12[4] = (long ******)((long)pppppplVar34 + 1);
          *(undefined1 *)pppppplVar34 = uVar10;
        }
        else {
          FUN_109e05570(ppppppplVar12);
        }
        uVar27 = uVar27 + 1;
      }
      ppplVar22 = (long ***)((long)ppplVar22 + 1);
    } while (ppplVar22 < ppplVar29);
    pppppplVar34 = ppppppplVar12[4];
    if (pppppplVar34 < ppppppplVar12[3]) {
      ppppppplVar12[4] = (long ******)((long)pppppplVar34 + 1);
      *(undefined1 *)pppppplVar34 = 10;
    }
    else {
      FUN_109e05570(ppppppplVar12,10);
    }
  }
  if ((long)uStack_1b0 < 0) {
    __ZdlPv(pppppppuStack_1c0);
  }
LAB_109e015b4:
  if ((char)bStack_191 < '\0') {
    __ZdlPv(ppppppplStack_1a8);
  }
  return;
}



/* Entry: 109e00c28; end: 109e00cbb;  */

/* WARNING: Removing unreachable block (ram,0x000109e00d1c) */
/* WARNING: Removing unreachable block (ram,0x000109e00d24) */
/* WARNING: Removing unreachable block (ram,0x000109e00d68) */
/* WARNING: Removing unreachable block (ram,0x000109e00d54) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109e00c28(long *param_1,undefined8 *******param_2,long param_3,uint param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  char cVar7;
  code *pcVar8;
  undefined8 *******pppppppuVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 ******ppppppuVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uStack_b0;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  
  if ((code *)param_1[6] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109e00c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[6])(param_3,param_1[7]);
    return;
  }
  if (*(long *)(param_3 + 8) != 0) {
    plVar15 = param_1;
    FUN_109e00498();
    FUN_109e00808(param_1,*(undefined8 *)(*param_1 + (ulong)((int)plVar15 - 1) * 0x18 + 0x10),
                  param_2);
  }
  uVar10 = 0;
  if (param_4 == 0) {
    uVar10 = 2;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
  pppppppuStack_88 = param_2;
  FUN_109e05130(&pppppppuStack_88,8,1,0);
  pcVar1 = (char *)(param_3 + 0x10);
  cVar7 = *(char *)(param_3 + 0x27);
  if ((long)cVar7 < 0) {
    if (*(long *)(param_3 + 0x18) != 0) {
      if (*(long *)(param_3 + 0x18) == 1) {
        pcVar16 = *(char **)pcVar1;
        goto LAB_109e00db4;
      }
      goto LAB_109e00de4;
    }
  }
  else if (cVar7 != '\0') {
    pcVar16 = pcVar1;
    if (cVar7 == '\x01') {
LAB_109e00db4:
      if (*pcVar16 != '-') goto LAB_109e00de4;
      ppppppuVar23 = pppppppuStack_88[4];
      if ((ulong)((long)pppppppuStack_88[3] - (long)ppppppuVar23) < 7) {
        pcVar16 = "<stdin>";
        lVar14 = 7;
        goto LAB_109e00df8;
      }
      *(undefined4 *)((long)ppppppuVar23 + 3) = 0x3e6e6964;
      *(undefined4 *)ppppppuVar23 = 0x6474733c;
      pppppppuStack_88[4] = (undefined8 ******)((long)pppppppuStack_88[4] + 7);
    }
    else {
LAB_109e00de4:
      pcVar16 = *(char **)(param_3 + 0x10);
      lVar14 = *(long *)(param_3 + 0x18);
      if (-1 < cVar7) {
        pcVar16 = pcVar1;
        lVar14 = (long)cVar7;
      }
LAB_109e00df8:
      FUN_109e0560c(pppppppuStack_88,pcVar16,lVar14);
    }
    if (*(int *)(param_3 + 0x28) != -1) {
      ppppppuVar23 = pppppppuStack_88[4];
      if (ppppppuVar23 < pppppppuStack_88[3]) {
        pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
        *(undefined1 *)ppppppuVar23 = 0x3a;
      }
      else {
        FUN_109e05570(pppppppuStack_88,0x3a);
      }
      FUN_109df9ee0(pppppppuStack_88,(long)*(int *)(param_3 + 0x28),0,0);
      if (*(int *)(param_3 + 0x2c) != -1) {
        ppppppuVar23 = pppppppuStack_88[4];
        if (ppppppuVar23 < pppppppuStack_88[3]) {
          pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
          *(undefined1 *)ppppppuVar23 = 0x3a;
        }
        else {
          FUN_109e05570(pppppppuStack_88,0x3a);
        }
        FUN_109df9ee0(pppppppuStack_88,(long)*(int *)(param_3 + 0x2c) + 1,0,0);
      }
    }
    if ((ulong)((long)pppppppuStack_88[3] - (long)pppppppuStack_88[4]) < 2) {
      FUN_109e0560c(pppppppuStack_88,": ",2);
    }
    else {
      *(undefined2 *)pppppppuStack_88[4] = 0x203a;
      pppppppuStack_88[4] = (undefined8 ******)((long)pppppppuStack_88[4] + 2);
    }
  }
  FUN_109e051a0(&pppppppuStack_88);
  iVar11 = *(int *)(param_3 + 0x30);
  if (iVar11 < 2) {
    if (iVar11 == 0) {
      FUN_109e04cd8(param_2,"",0,param_4 ^ 1);
    }
    else if (iVar11 == 1) {
      FUN_109e04df0(param_2,"",0,param_4 ^ 1);
    }
  }
  else if (iVar11 == 2) {
    FUN_109e0501c(param_2,"",0,param_4 ^ 1);
  }
  else if (iVar11 == 3) {
    FUN_109e04f08(param_2,"",0,param_4 ^ 1);
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
  pppppppuStack_88 = param_2;
  FUN_109e05130(&pppppppuStack_88,8,1,0);
  uVar19 = *(ulong *)(param_3 + 0x40);
  plVar15 = (long *)*(long *)(param_3 + 0x38);
  if (-1 < (char)*(byte *)(param_3 + 0x4f)) {
    uVar19 = (ulong)*(byte *)(param_3 + 0x4f);
    plVar15 = (long *)(param_3 + 0x38);
  }
  FUN_109e0560c(pppppppuStack_88,plVar15,uVar19);
  ppppppuVar23 = pppppppuStack_88[4];
  if (ppppppuVar23 < pppppppuStack_88[3]) {
    pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
    *(undefined1 *)ppppppuVar23 = 10;
  }
  else {
    FUN_109e05570(pppppppuStack_88,10);
  }
  FUN_109e051a0(&pppppppuStack_88);
  if (*(int *)(param_3 + 0x28) == -1) {
    return;
  }
  if (*(int *)(param_3 + 0x2c) == -1) {
    return;
  }
  plVar22 = (long *)(param_3 + 0x50);
  cVar7 = *(char *)(param_3 + 0x67);
  plVar15 = (long *)*plVar22;
  if (-1 < (long)cVar7) {
    plVar15 = plVar22;
  }
  uVar19 = *(ulong *)(param_3 + 0x58);
  if (-1 < cVar7) {
    uVar19 = (long)cVar7;
  }
  if (uVar19 != 0) {
    uVar13 = 0;
    do {
      if (*(char *)((long)plVar15 + uVar13) < '\0') {
        FUN_109e01b1c(param_2,plVar15,uVar19);
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar19 != uVar13);
  }
  func_0x000104c59120(&pppppppuStack_88,uVar19 + 1,0x20);
  puVar4 = *(uint **)(param_3 + 0x70);
  for (puVar18 = *(uint **)(param_3 + 0x68); puVar18 != puVar4; puVar18 = puVar18 + 2) {
    uVar13 = uStack_80;
    if (-1 < (char)bStack_71) {
      uVar13 = (ulong)bStack_71;
    }
    if (puVar18[1] <= uVar13) {
      uVar13 = (ulong)puVar18[1];
    }
    if (0 < (long)(uVar13 - *puVar18)) {
      pppppppuVar9 = pppppppuStack_88;
      if (-1 < (char)bStack_71) {
        pppppppuVar9 = &pppppppuStack_88;
      }
      _memset((long)pppppppuVar9 + (ulong)*puVar18,0x7e);
    }
  }
  pppppppuStack_a0 = (undefined8 *******)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  lVar14 = (long)*(char *)(param_3 + 0x67);
  if (lVar14 < 0) {
    lVar14 = *(long *)(param_3 + 0x58);
  }
  uVar12 = *(uint *)(param_3 + 0x2c);
  if (*(uint *)(param_3 + 0x88) != 0) {
    uVar20 = *(long *)(param_3 + 8) - (long)(int)uVar12;
    uVar13 = uVar20 + lVar14;
    uStack_b0 = 0;
    lVar14 = (ulong)*(uint *)(param_3 + 0x88) * 0x28;
    puVar24 = (ulong *)(*(long *)(param_3 + 0x80) + 0x18);
    do {
      ppppppuVar23 = (undefined8 ******)(puVar24 + -1);
      uVar25 = (ulong)*(char *)((long)puVar24 + 0xf);
      pppppppuStack_70 = (undefined8 *******)*ppppppuVar23;
      if (-1 < (long)uVar25) {
        pppppppuStack_70 = (undefined8 *******)ppppppuVar23;
      }
      uVar17 = *puVar24;
      uVar2 = uVar17;
      if (-1 < *(char *)((long)puVar24 + 0xf)) {
        uVar2 = uVar25;
      }
      pppppppuVar9 = &pppppppuStack_70;
      uStack_68 = uVar2;
      FUN_109e03b70(pppppppuVar9,&UNK_10f6023d5,3,0);
      if (pppppppuVar9 == (undefined8 *******)0xffffffffffffffff) {
        uVar21 = puVar24[-3];
        uVar5 = puVar24[-2];
        if (uVar21 <= uVar13 && uVar20 <= uVar5) {
          uVar12 = 0;
          if (uVar20 <= uVar21) {
            uVar12 = (int)uVar21 - (int)uVar20;
          }
          uVar21 = (ulong)uVar12;
          if (uVar21 < uStack_b0) {
            uVar12 = (int)uStack_b0 + 1;
          }
          uStack_b0 = (ulong)(uVar12 + (int)uVar2);
          uVar2 = uStack_98;
          if (-1 < (long)uStack_90) {
            uVar2 = uStack_90 >> 0x38;
          }
          if (uVar2 < uStack_b0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&pppppppuStack_a0,uStack_b0,0x20);
            uVar25 = (ulong)*(byte *)((long)puVar24 + 0xf);
            uVar17 = *puVar24;
          }
          if (-1 < (char)uVar25) {
            uVar17 = uVar25;
          }
          if (uVar17 != 0) {
            pppppppuVar9 = pppppppuStack_a0;
            if (-1 < (long)uStack_90) {
              pppppppuVar9 = &pppppppuStack_a0;
            }
            ppppppuVar3 = (undefined8 ******)*ppppppuVar23;
            if (-1 < (char)uVar25) {
              ppppppuVar3 = ppppppuVar23;
            }
            _memmove((long)pppppppuVar9 + (ulong)uVar12,ppppppuVar3);
          }
          iVar11 = (int)uVar5;
          if (uVar13 <= uVar5) {
            iVar11 = (int)uVar13;
          }
          if (0 < (long)((uint)(iVar11 - (int)uVar20) - uVar21)) {
            pppppppuVar9 = pppppppuStack_88;
            if (-1 < (char)bStack_71) {
              pppppppuVar9 = &pppppppuStack_88;
            }
            _memset((long)pppppppuVar9 + uVar21,0x7e);
          }
        }
      }
      puVar24 = puVar24 + 5;
      lVar14 = lVar14 + -0x28;
    } while (lVar14 != 0);
    uVar12 = *(uint *)(param_3 + 0x2c);
  }
  if (uVar12 <= uVar19) {
    uVar19 = (long)(int)uVar12;
  }
  pppppppuVar9 = pppppppuStack_88;
  if (-1 < (char)bStack_71) {
    pppppppuVar9 = &pppppppuStack_88;
  }
  *(undefined1 *)((long)pppppppuVar9 + uVar19) = 0x5e;
  uVar19 = uStack_80;
  pppppppuVar9 = pppppppuStack_88;
  if (-1 < (char)bStack_71) {
    uVar19 = (ulong)bStack_71;
    pppppppuVar9 = &pppppppuStack_88;
  }
  do {
    uVar13 = uVar19;
    if (uVar13 == 0) break;
    uVar19 = uVar13 - 1;
  } while (*(char *)((long)pppppppuVar9 + (uVar13 - 1)) == ' ');
  if ((char)bStack_71 < '\0') {
    pppppppuVar9 = pppppppuStack_88;
    uVar19 = uVar13;
    if (uStack_80 < uVar13) goto LAB_109e015e4;
  }
  else {
    if (bStack_71 < uVar13) {
LAB_109e015e4:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109e015ec);
      (*pcVar8)();
    }
    bStack_71 = (byte)uVar13;
    pppppppuVar9 = &pppppppuStack_88;
    uVar19 = uStack_80;
  }
  uStack_80 = uVar19;
  *(undefined1 *)((long)pppppppuVar9 + uVar13) = 0;
  cVar7 = *(char *)(param_3 + 0x67);
  plVar15 = *(long **)(param_3 + 0x50);
  if (-1 < (long)cVar7) {
    plVar15 = plVar22;
  }
  lVar14 = *(long *)(param_3 + 0x58);
  if (-1 < cVar7) {
    lVar14 = (long)cVar7;
  }
  FUN_109e01b1c(param_2,plVar15,lVar14);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar10);
  pppppppuStack_70 = param_2;
  FUN_109e05130(&pppppppuStack_70,2,1,0);
  uVar19 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar19 = (ulong)bStack_71;
  }
  if ((uVar19 & 0xffffffff) != 0) {
    uVar13 = 0;
    uVar12 = 0;
    do {
      uVar20 = (ulong)*(char *)(param_3 + 0x67);
      if ((long)uVar20 < 0) {
        uVar20 = *(ulong *)(param_3 + 0x58);
      }
      if (uVar13 < uVar20) {
        plVar15 = plVar22;
        if (*(char *)(param_3 + 0x67) < '\0') {
          plVar15 = (long *)*plVar22;
        }
        if (*(char *)((long)plVar15 + uVar13) != '\t') goto LAB_109e013c0;
        do {
          pppppppuVar9 = pppppppuStack_88;
          if (-1 < (char)bStack_71) {
            pppppppuVar9 = &pppppppuStack_88;
          }
          uVar6 = *(undefined1 *)((long)pppppppuVar9 + uVar13);
          ppppppuVar23 = pppppppuStack_70[4];
          if (ppppppuVar23 < pppppppuStack_70[3]) {
            pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
            *(undefined1 *)ppppppuVar23 = uVar6;
          }
          else {
            FUN_109e05570();
          }
          uVar12 = uVar12 + 1;
        } while ((uVar12 & 7) != 0);
      }
      else {
LAB_109e013c0:
        pppppppuVar9 = pppppppuStack_88;
        if (-1 < (char)bStack_71) {
          pppppppuVar9 = &pppppppuStack_88;
        }
        uVar6 = *(undefined1 *)((long)pppppppuVar9 + uVar13);
        ppppppuVar23 = pppppppuStack_70[4];
        if (ppppppuVar23 < pppppppuStack_70[3]) {
          pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
          *(undefined1 *)ppppppuVar23 = uVar6;
        }
        else {
          FUN_109e05570();
        }
        uVar12 = uVar12 + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar19 & 0xffffffff));
  }
  ppppppuVar23 = pppppppuStack_70[4];
  if (ppppppuVar23 < pppppppuStack_70[3]) {
    pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
    *(undefined1 *)ppppppuVar23 = 10;
  }
  else {
    FUN_109e05570(pppppppuStack_70,10);
  }
  FUN_109e051a0(&pppppppuStack_70);
  if ((long)(char)uStack_90._7_1_ < 0) {
    uVar19 = uStack_98;
    if (uStack_98 != 0) goto LAB_109e01454;
  }
  else {
    uVar19 = (long)(char)uStack_90._7_1_;
    if (uStack_90._7_1_ == '\0') goto LAB_109e015b4;
LAB_109e01454:
    uVar13 = 0;
    uVar20 = 0;
    do {
      uVar25 = (ulong)*(char *)(param_3 + 0x67);
      if ((long)uVar25 < 0) {
        uVar25 = *(ulong *)(param_3 + 0x58);
      }
      if (uVar20 < uVar25) {
        plVar15 = plVar22;
        if (*(char *)(param_3 + 0x67) < '\0') {
          plVar15 = (long *)*plVar22;
        }
        uVar12 = (uint)uStack_90._7_1_;
        if (*(char *)((long)plVar15 + uVar20) != '\t') goto LAB_109e0150c;
        do {
          pppppppuVar9 = pppppppuStack_a0;
          if (-1 < (char)uVar12) {
            pppppppuVar9 = &pppppppuStack_a0;
          }
          uVar6 = *(undefined1 *)((long)pppppppuVar9 + uVar20);
          ppppppuVar23 = param_2[4];
          if (ppppppuVar23 < param_2[3]) {
            param_2[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
            *(undefined1 *)ppppppuVar23 = uVar6;
          }
          else {
            FUN_109e05570(param_2);
          }
          uVar12 = (uint)(char)uStack_90._7_1_;
          pppppppuVar9 = pppppppuStack_a0;
          if (-1 < (int)uVar12) {
            pppppppuVar9 = &pppppppuStack_a0;
          }
          if (*(char *)((long)pppppppuVar9 + uVar20) != ' ') {
            uVar20 = uVar20 + 1;
          }
          uVar13 = uVar13 + 1;
        } while (((uVar13 & 7) != 0) && (uVar20 != uVar19));
      }
      else {
LAB_109e0150c:
        pppppppuVar9 = pppppppuStack_a0;
        if (-1 < (long)uStack_90) {
          pppppppuVar9 = &pppppppuStack_a0;
        }
        uVar6 = *(undefined1 *)((long)pppppppuVar9 + uVar20);
        ppppppuVar23 = param_2[4];
        if (ppppppuVar23 < param_2[3]) {
          param_2[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
          *(undefined1 *)ppppppuVar23 = uVar6;
        }
        else {
          FUN_109e05570(param_2);
        }
        uVar13 = uVar13 + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar19);
    ppppppuVar23 = param_2[4];
    if (ppppppuVar23 < param_2[3]) {
      param_2[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
      *(undefined1 *)ppppppuVar23 = 10;
    }
    else {
      FUN_109e05570(param_2,10);
    }
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppppppuStack_a0);
  }
LAB_109e015b4:
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppppppuStack_88);
  }
  return;
}



/* Entry: 109e00cbc; end: 109e01663;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109e00cbc(long param_1,char *param_2,undefined8 *******param_3,uint param_4,int param_5)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  uint *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  char cVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 *******pppppppuVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 ******ppppppuVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uStack_b0;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  
  uVar10 = 0;
  if (param_4 == 0) {
    uVar10 = 2;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
  pppppppuStack_88 = param_3;
  FUN_109e05130(&pppppppuStack_88,8,1,0);
  pppppppuVar9 = pppppppuStack_88;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar8 = param_2;
    _strlen(param_2);
    FUN_109d2f728(pppppppuVar9,param_2,pcVar8);
    if ((ulong)((long)pppppppuStack_88[3] - (long)pppppppuStack_88[4]) < 2) {
      FUN_109e0560c(pppppppuStack_88,": ",2);
    }
    else {
      *(undefined2 *)pppppppuStack_88[4] = 0x203a;
      pppppppuStack_88[4] = (undefined8 ******)((long)pppppppuStack_88[4] + 2);
    }
  }
  pcVar8 = (char *)(param_1 + 0x10);
  cVar6 = *(char *)(param_1 + 0x27);
  if ((long)cVar6 < 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(long *)(param_1 + 0x18) == 1) {
        pcVar16 = *(char **)pcVar8;
        goto LAB_109e00db4;
      }
      goto LAB_109e00de4;
    }
  }
  else if (cVar6 != '\0') {
    pcVar16 = pcVar8;
    if (cVar6 == '\x01') {
LAB_109e00db4:
      if (*pcVar16 != '-') goto LAB_109e00de4;
      ppppppuVar23 = pppppppuStack_88[4];
      if ((ulong)((long)pppppppuStack_88[3] - (long)ppppppuVar23) < 7) {
        pcVar16 = "<stdin>";
        lVar14 = 7;
        goto LAB_109e00df8;
      }
      *(undefined4 *)((long)ppppppuVar23 + 3) = 0x3e6e6964;
      *(undefined4 *)ppppppuVar23 = 0x6474733c;
      pppppppuStack_88[4] = (undefined8 ******)((long)pppppppuStack_88[4] + 7);
    }
    else {
LAB_109e00de4:
      pcVar16 = *(char **)(param_1 + 0x10);
      lVar14 = *(long *)(param_1 + 0x18);
      if (-1 < cVar6) {
        pcVar16 = pcVar8;
        lVar14 = (long)cVar6;
      }
LAB_109e00df8:
      FUN_109e0560c(pppppppuStack_88,pcVar16,lVar14);
    }
    if (*(int *)(param_1 + 0x28) != -1) {
      ppppppuVar23 = pppppppuStack_88[4];
      if (ppppppuVar23 < pppppppuStack_88[3]) {
        pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
        *(undefined1 *)ppppppuVar23 = 0x3a;
      }
      else {
        FUN_109e05570(pppppppuStack_88,0x3a);
      }
      FUN_109df9ee0(pppppppuStack_88,(long)*(int *)(param_1 + 0x28),0,0);
      if (*(int *)(param_1 + 0x2c) != -1) {
        ppppppuVar23 = pppppppuStack_88[4];
        if (ppppppuVar23 < pppppppuStack_88[3]) {
          pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
          *(undefined1 *)ppppppuVar23 = 0x3a;
        }
        else {
          FUN_109e05570(pppppppuStack_88,0x3a);
        }
        FUN_109df9ee0(pppppppuStack_88,(long)*(int *)(param_1 + 0x2c) + 1,0,0);
      }
    }
    if ((ulong)((long)pppppppuStack_88[3] - (long)pppppppuStack_88[4]) < 2) {
      FUN_109e0560c(pppppppuStack_88,": ",2);
    }
    else {
      *(undefined2 *)pppppppuStack_88[4] = 0x203a;
      pppppppuStack_88[4] = (undefined8 ******)((long)pppppppuStack_88[4] + 2);
    }
  }
  FUN_109e051a0(&pppppppuStack_88);
  if (param_5 != 0) {
    iVar11 = *(int *)(param_1 + 0x30);
    if (iVar11 < 2) {
      if (iVar11 == 0) {
        FUN_109e04cd8(param_3,"",0,param_4 ^ 1);
      }
      else if (iVar11 == 1) {
        FUN_109e04df0(param_3,"",0,param_4 ^ 1);
      }
    }
    else if (iVar11 == 2) {
      FUN_109e0501c(param_3,"",0,param_4 ^ 1);
    }
    else if (iVar11 == 3) {
      FUN_109e04f08(param_3,"",0,param_4 ^ 1);
    }
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
  pppppppuStack_88 = param_3;
  FUN_109e05130(&pppppppuStack_88,8,1,0);
  uVar19 = *(ulong *)(param_1 + 0x40);
  plVar15 = (long *)*(long *)(param_1 + 0x38);
  if (-1 < (char)*(byte *)(param_1 + 0x4f)) {
    uVar19 = (ulong)*(byte *)(param_1 + 0x4f);
    plVar15 = (long *)(param_1 + 0x38);
  }
  FUN_109e0560c(pppppppuStack_88,plVar15,uVar19);
  ppppppuVar23 = pppppppuStack_88[4];
  if (ppppppuVar23 < pppppppuStack_88[3]) {
    pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
    *(undefined1 *)ppppppuVar23 = 10;
  }
  else {
    FUN_109e05570(pppppppuStack_88,10);
  }
  FUN_109e051a0(&pppppppuStack_88);
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  plVar22 = (long *)(param_1 + 0x50);
  cVar6 = *(char *)(param_1 + 0x67);
  plVar15 = (long *)*plVar22;
  if (-1 < (long)cVar6) {
    plVar15 = plVar22;
  }
  uVar19 = *(ulong *)(param_1 + 0x58);
  if (-1 < cVar6) {
    uVar19 = (long)cVar6;
  }
  if (uVar19 != 0) {
    uVar13 = 0;
    do {
      if (*(char *)((long)plVar15 + uVar13) < '\0') {
        FUN_109e01b1c(param_3,plVar15,uVar19);
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar19 != uVar13);
  }
  func_0x000104c59120(&pppppppuStack_88,uVar19 + 1,0x20);
  puVar3 = *(uint **)(param_1 + 0x70);
  for (puVar18 = *(uint **)(param_1 + 0x68); puVar18 != puVar3; puVar18 = puVar18 + 2) {
    uVar13 = uStack_80;
    if (-1 < (char)bStack_71) {
      uVar13 = (ulong)bStack_71;
    }
    if (puVar18[1] <= uVar13) {
      uVar13 = (ulong)puVar18[1];
    }
    if (0 < (long)(uVar13 - *puVar18)) {
      pppppppuVar9 = pppppppuStack_88;
      if (-1 < (char)bStack_71) {
        pppppppuVar9 = &pppppppuStack_88;
      }
      _memset((long)pppppppuVar9 + (ulong)*puVar18,0x7e);
    }
  }
  pppppppuStack_a0 = (undefined8 *******)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  lVar14 = (long)*(char *)(param_1 + 0x67);
  if (lVar14 < 0) {
    lVar14 = *(long *)(param_1 + 0x58);
  }
  uVar12 = *(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar20 = *(long *)(param_1 + 8) - (long)(int)uVar12;
    uVar13 = uVar20 + lVar14;
    uStack_b0 = 0;
    lVar14 = (ulong)*(uint *)(param_1 + 0x88) * 0x28;
    puVar24 = (ulong *)(*(long *)(param_1 + 0x80) + 0x18);
    do {
      ppppppuVar23 = (undefined8 ******)(puVar24 + -1);
      uVar25 = (ulong)*(char *)((long)puVar24 + 0xf);
      pppppppuStack_70 = (undefined8 *******)*ppppppuVar23;
      if (-1 < (long)uVar25) {
        pppppppuStack_70 = (undefined8 *******)ppppppuVar23;
      }
      uVar17 = *puVar24;
      uVar1 = uVar17;
      if (-1 < *(char *)((long)puVar24 + 0xf)) {
        uVar1 = uVar25;
      }
      pppppppuVar9 = &pppppppuStack_70;
      uStack_68 = uVar1;
      FUN_109e03b70(pppppppuVar9,&UNK_10f6023d5,3,0);
      if (pppppppuVar9 == (undefined8 *******)0xffffffffffffffff) {
        uVar21 = puVar24[-3];
        uVar4 = puVar24[-2];
        if (uVar21 <= uVar13 && uVar20 <= uVar4) {
          uVar12 = 0;
          if (uVar20 <= uVar21) {
            uVar12 = (int)uVar21 - (int)uVar20;
          }
          uVar21 = (ulong)uVar12;
          if (uVar21 < uStack_b0) {
            uVar12 = (int)uStack_b0 + 1;
          }
          uStack_b0 = (ulong)(uVar12 + (int)uVar1);
          uVar1 = uStack_98;
          if (-1 < (long)uStack_90) {
            uVar1 = uStack_90 >> 0x38;
          }
          if (uVar1 < uStack_b0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&pppppppuStack_a0,uStack_b0,0x20);
            uVar25 = (ulong)*(byte *)((long)puVar24 + 0xf);
            uVar17 = *puVar24;
          }
          if (-1 < (char)uVar25) {
            uVar17 = uVar25;
          }
          if (uVar17 != 0) {
            pppppppuVar9 = pppppppuStack_a0;
            if (-1 < (long)uStack_90) {
              pppppppuVar9 = &pppppppuStack_a0;
            }
            ppppppuVar2 = (undefined8 ******)*ppppppuVar23;
            if (-1 < (char)uVar25) {
              ppppppuVar2 = ppppppuVar23;
            }
            _memmove((long)pppppppuVar9 + (ulong)uVar12,ppppppuVar2);
          }
          iVar11 = (int)uVar4;
          if (uVar13 <= uVar4) {
            iVar11 = (int)uVar13;
          }
          if (0 < (long)((uint)(iVar11 - (int)uVar20) - uVar21)) {
            pppppppuVar9 = pppppppuStack_88;
            if (-1 < (char)bStack_71) {
              pppppppuVar9 = &pppppppuStack_88;
            }
            _memset((long)pppppppuVar9 + uVar21,0x7e);
          }
        }
      }
      puVar24 = puVar24 + 5;
      lVar14 = lVar14 + -0x28;
    } while (lVar14 != 0);
    uVar12 = *(uint *)(param_1 + 0x2c);
  }
  if (uVar12 <= uVar19) {
    uVar19 = (long)(int)uVar12;
  }
  pppppppuVar9 = pppppppuStack_88;
  if (-1 < (char)bStack_71) {
    pppppppuVar9 = &pppppppuStack_88;
  }
  *(undefined1 *)((long)pppppppuVar9 + uVar19) = 0x5e;
  uVar19 = uStack_80;
  pppppppuVar9 = pppppppuStack_88;
  if (-1 < (char)bStack_71) {
    uVar19 = (ulong)bStack_71;
    pppppppuVar9 = &pppppppuStack_88;
  }
  do {
    uVar13 = uVar19;
    if (uVar13 == 0) break;
    uVar19 = uVar13 - 1;
  } while (*(char *)((long)pppppppuVar9 + (uVar13 - 1)) == ' ');
  if ((char)bStack_71 < '\0') {
    pppppppuVar9 = pppppppuStack_88;
    uVar19 = uVar13;
    if (uStack_80 < uVar13) goto LAB_109e015e4;
  }
  else {
    if (bStack_71 < uVar13) {
LAB_109e015e4:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x109e015ec);
      (*pcVar7)();
    }
    bStack_71 = (byte)uVar13;
    pppppppuVar9 = &pppppppuStack_88;
    uVar19 = uStack_80;
  }
  uStack_80 = uVar19;
  *(undefined1 *)((long)pppppppuVar9 + uVar13) = 0;
  cVar6 = *(char *)(param_1 + 0x67);
  plVar15 = *(long **)(param_1 + 0x50);
  if (-1 < (long)cVar6) {
    plVar15 = plVar22;
  }
  lVar14 = *(long *)(param_1 + 0x58);
  if (-1 < cVar6) {
    lVar14 = (long)cVar6;
  }
  FUN_109e01b1c(param_3,plVar15,lVar14);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar10);
  pppppppuStack_70 = param_3;
  FUN_109e05130(&pppppppuStack_70,2,1,0);
  uVar19 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar19 = (ulong)bStack_71;
  }
  if ((uVar19 & 0xffffffff) != 0) {
    uVar13 = 0;
    uVar12 = 0;
    do {
      uVar20 = (ulong)*(char *)(param_1 + 0x67);
      if ((long)uVar20 < 0) {
        uVar20 = *(ulong *)(param_1 + 0x58);
      }
      if (uVar13 < uVar20) {
        plVar15 = plVar22;
        if (*(char *)(param_1 + 0x67) < '\0') {
          plVar15 = (long *)*plVar22;
        }
        if (*(char *)((long)plVar15 + uVar13) != '\t') goto LAB_109e013c0;
        do {
          pppppppuVar9 = pppppppuStack_88;
          if (-1 < (char)bStack_71) {
            pppppppuVar9 = &pppppppuStack_88;
          }
          uVar5 = *(undefined1 *)((long)pppppppuVar9 + uVar13);
          ppppppuVar23 = pppppppuStack_70[4];
          if (ppppppuVar23 < pppppppuStack_70[3]) {
            pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
            *(undefined1 *)ppppppuVar23 = uVar5;
          }
          else {
            FUN_109e05570();
          }
          uVar12 = uVar12 + 1;
        } while ((uVar12 & 7) != 0);
      }
      else {
LAB_109e013c0:
        pppppppuVar9 = pppppppuStack_88;
        if (-1 < (char)bStack_71) {
          pppppppuVar9 = &pppppppuStack_88;
        }
        uVar5 = *(undefined1 *)((long)pppppppuVar9 + uVar13);
        ppppppuVar23 = pppppppuStack_70[4];
        if (ppppppuVar23 < pppppppuStack_70[3]) {
          pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
          *(undefined1 *)ppppppuVar23 = uVar5;
        }
        else {
          FUN_109e05570();
        }
        uVar12 = uVar12 + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar19 & 0xffffffff));
  }
  ppppppuVar23 = pppppppuStack_70[4];
  if (ppppppuVar23 < pppppppuStack_70[3]) {
    pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
    *(undefined1 *)ppppppuVar23 = 10;
  }
  else {
    FUN_109e05570(pppppppuStack_70,10);
  }
  FUN_109e051a0(&pppppppuStack_70);
  if ((long)(char)uStack_90._7_1_ < 0) {
    uVar19 = uStack_98;
    if (uStack_98 != 0) goto LAB_109e01454;
  }
  else {
    uVar19 = (long)(char)uStack_90._7_1_;
    if (uStack_90._7_1_ == '\0') goto LAB_109e015b4;
LAB_109e01454:
    uVar13 = 0;
    uVar20 = 0;
    do {
      uVar25 = (ulong)*(char *)(param_1 + 0x67);
      if ((long)uVar25 < 0) {
        uVar25 = *(ulong *)(param_1 + 0x58);
      }
      if (uVar20 < uVar25) {
        plVar15 = plVar22;
        if (*(char *)(param_1 + 0x67) < '\0') {
          plVar15 = (long *)*plVar22;
        }
        uVar12 = (uint)uStack_90._7_1_;
        if (*(char *)((long)plVar15 + uVar20) != '\t') goto LAB_109e0150c;
        do {
          pppppppuVar9 = pppppppuStack_a0;
          if (-1 < (char)uVar12) {
            pppppppuVar9 = &pppppppuStack_a0;
          }
          uVar5 = *(undefined1 *)((long)pppppppuVar9 + uVar20);
          ppppppuVar23 = param_3[4];
          if (ppppppuVar23 < param_3[3]) {
            param_3[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
            *(undefined1 *)ppppppuVar23 = uVar5;
          }
          else {
            FUN_109e05570(param_3);
          }
          uVar12 = (uint)(char)uStack_90._7_1_;
          pppppppuVar9 = pppppppuStack_a0;
          if (-1 < (int)uVar12) {
            pppppppuVar9 = &pppppppuStack_a0;
          }
          if (*(char *)((long)pppppppuVar9 + uVar20) != ' ') {
            uVar20 = uVar20 + 1;
          }
          uVar13 = uVar13 + 1;
        } while (((uVar13 & 7) != 0) && (uVar20 != uVar19));
      }
      else {
LAB_109e0150c:
        pppppppuVar9 = pppppppuStack_a0;
        if (-1 < (long)uStack_90) {
          pppppppuVar9 = &pppppppuStack_a0;
        }
        uVar5 = *(undefined1 *)((long)pppppppuVar9 + uVar20);
        ppppppuVar23 = param_3[4];
        if (ppppppuVar23 < param_3[3]) {
          param_3[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
          *(undefined1 *)ppppppuVar23 = uVar5;
        }
        else {
          FUN_109e05570(param_3);
        }
        uVar13 = uVar13 + 1;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar19);
    ppppppuVar23 = param_3[4];
    if (ppppppuVar23 < param_3[3]) {
      param_3[4] = (undefined8 ******)((long)ppppppuVar23 + 1);
      *(undefined1 *)ppppppuVar23 = 10;
    }
    else {
      FUN_109e05570(param_3,10);
    }
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppppppuStack_a0);
  }
LAB_109e015b4:
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppppppuStack_88);
  }
  return;
}



/* Entry: 109e01664; end: 109e0175f;  */

undefined8 *
FUN_109e01664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             byte param_13)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined7 uStack_148;
  char cStack_141;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  char cStack_119;
  undefined8 *puStack_118;
  char cStack_101;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_e8 [176];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109e00994(&uStack_168,param_1,param_3,param_4,param_5);
  uVar4 = (ulong)param_13;
  puVar3 = &uStack_168;
  FUN_109e00c28(param_1,param_2,puVar3,uVar4);
  FUN_109d3865c(auStack_e8);
  if (puStack_100 != (undefined8 *)0x0) {
    puStack_f8 = puStack_100;
    __ZdlPv();
  }
  if (cStack_101 < '\0') {
    __ZdlPv();
    puStack_100 = puStack_118;
  }
  puVar2 = puStack_100;
  if (cStack_119 < '\0') {
    __ZdlPv();
    puVar2 = puStack_130;
  }
  if (cStack_141 < '\0') {
    puVar2 = puStack_158;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000109d38208(&uStack_168);
  __Unwind_Resume();
  *puVar2 = param_2;
  puVar2[1] = puVar3;
  if (param_6 < 0x7ffffffffffffff8) {
    puVar7 = puVar2 + 2;
    if (param_6 < 0x17) {
      *(char *)((long)puVar2 + 0x27) = (char)param_6;
      if (param_6 != 0) goto LAB_109e017f4;
    }
    else {
      puVar8 = (undefined8 *)0x19;
      if ((param_6 | 7) != 0x17) {
        puVar8 = (undefined8 *)((param_6 | 7) + 1);
      }
      puVar7 = puVar8;
      __Znwm();
      puVar2[3] = param_6;
      puVar2[4] = (ulong)puVar8 | 0x8000000000000000;
      puVar2[2] = puVar7;
LAB_109e017f4:
      _memmove(puVar7,uVar4,param_6);
    }
    *(undefined1 *)((long)puVar7 + param_6) = 0;
    *(undefined4 *)(puVar2 + 5) = param_7;
    *(undefined4 *)((long)puVar2 + 0x2c) = param_9;
    *(undefined4 *)(puVar2 + 6) = param_11;
    if (uStack_168 < 0x7ffffffffffffff8) {
      puVar7 = puVar2 + 7;
      if (uStack_168 < 0x17) {
        *(char *)((long)puVar2 + 0x4f) = (char)uStack_168;
        if (uStack_168 != 0) goto LAB_109e0185c;
      }
      else {
        puVar8 = (undefined8 *)0x19;
        if ((uStack_168 | 7) != 0x17) {
          puVar8 = (undefined8 *)((uStack_168 | 7) + 1);
        }
        puVar7 = puVar8;
        __Znwm();
        puVar2[8] = uStack_168;
        puVar2[9] = (ulong)puVar8 | 0x8000000000000000;
        puVar2[7] = puVar7;
LAB_109e0185c:
        _memmove(puVar7,uStack_170,uStack_168);
      }
      *(undefined1 *)((long)puVar7 + uStack_168) = 0;
      if (puStack_158 < (undefined8 *)0x7ffffffffffffff8) {
        puVar7 = puVar2 + 10;
        if (puStack_158 < (undefined8 *)0x17) {
          *(char *)((long)puVar2 + 0x67) = (char)puStack_158;
          if (puStack_158 == (undefined8 *)0x0) goto LAB_109e018d0;
        }
        else {
          puVar8 = (undefined8 *)0x19;
          if (((ulong)puStack_158 | 7) != 0x17) {
            puVar8 = (undefined8 *)(((ulong)puStack_158 | 7) + 1);
          }
          puVar7 = puVar8;
          __Znwm();
          puVar2[0xb] = puStack_158;
          puVar2[0xc] = (ulong)puVar8 | 0x8000000000000000;
          puVar2[10] = puVar7;
        }
        _memmove(puVar7,uStack_160,puStack_158);
LAB_109e018d0:
        *(undefined1 *)((long)puVar7 + (long)puStack_158) = 0;
        lVar6 = CONCAT17(cStack_141,uStack_148);
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        if (lVar6 != 0) {
          func_0x000109b7e270(puVar2 + 0xd,lVar6);
          lVar6 = lVar6 << 3;
          puVar7 = (undefined8 *)puVar2[0xe];
          do {
            puVar8 = puVar7 + 1;
            *puVar7 = *puStack_150;
            lVar6 = lVar6 + -8;
            puStack_150 = puStack_150 + 1;
            puVar7 = puVar8;
          } while (lVar6 != 0);
          puVar2[0xe] = puVar8;
        }
        puVar7 = puVar2 + 0x12;
        puVar2[0x10] = puVar7;
        puVar2[0x11] = 0x400000000;
        uVar4 = (lStack_138 * 0x28 >> 3) * -0x3333333333333333;
        if (uVar4 < 5) {
          uVar5 = 0;
        }
        else {
          func_0x000109d384d4(puVar2 + 0x10,uVar4);
          uVar5 = *(uint *)(puVar2 + 0x11);
          puVar7 = (undefined8 *)puVar2[0x10];
        }
        if (lStack_138 != 0) {
          puVar7 = puVar7 + (ulong)uVar5 * 5;
          puVar8 = puStack_140;
          do {
            uVar9 = *puVar8;
            puVar7[1] = puVar8[1];
            *puVar7 = uVar9;
            if (*(char *)((long)puVar8 + 0x27) < '\0') {
              func_0x000107c3192c(puVar7 + 2,puVar8[2],puVar8[3]);
            }
            else {
              uVar10 = puVar8[3];
              uVar9 = puVar8[2];
              puVar7[4] = puVar8[4];
              puVar7[3] = uVar10;
              puVar7[2] = uVar9;
            }
            puVar8 = puVar8 + 5;
            puVar7 = puVar7 + 5;
          } while (puVar8 != puStack_140 + lStack_138 * 5);
          uVar5 = *(uint *)(puVar2 + 0x11);
          puVar7 = (undefined8 *)puVar2[0x10];
        }
        uVar5 = uVar5 + (int)uVar4;
        *(uint *)(puVar2 + 0x11) = uVar5;
        lVar6 = 0;
        if (uVar5 != 0) {
          lVar6 = LZCOUNT((ulong)uVar5) * -2 + 0x7e;
        }
        FUN_109e01f30(puVar7,puVar7 + (ulong)uVar5 * 5,lVar6,1);
        return puVar2;
      }
      func_0x000104c4f6b8();
      goto LAB_109e01aa4;
    }
  }
  else {
    func_0x000104c4f6b8();
  }
  func_0x000104c4f6b8();
LAB_109e01aa4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109e01aa8);
  (*pcVar1)();
}



/* Entry: 109e01760; end: 109e01b1b;  */

undefined8 *
FUN_109e01760(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9,ulong param_10,undefined8 param_11,ulong param_12,
             undefined8 *param_13,long param_14,undefined8 *param_15,long param_16)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_5 < 0x7ffffffffffffff8) {
    puVar6 = param_1 + 2;
    if (param_5 < 0x17) {
      *(char *)((long)param_1 + 0x27) = (char)param_5;
      if (param_5 != 0) goto LAB_109e017f4;
    }
    else {
      puVar4 = (undefined8 *)0x19;
      if ((param_5 | 7) != 0x17) {
        puVar4 = (undefined8 *)((param_5 | 7) + 1);
      }
      puVar6 = puVar4;
      __Znwm();
      param_1[3] = param_5;
      param_1[4] = (ulong)puVar4 | 0x8000000000000000;
      param_1[2] = puVar6;
LAB_109e017f4:
      _memmove(puVar6,param_4,param_5);
    }
    *(undefined1 *)((long)puVar6 + param_5) = 0;
    *(undefined4 *)(param_1 + 5) = param_6;
    *(undefined4 *)((long)param_1 + 0x2c) = param_7;
    *(undefined4 *)(param_1 + 6) = param_8;
    if (param_10 < 0x7ffffffffffffff8) {
      puVar6 = param_1 + 7;
      if (param_10 < 0x17) {
        *(char *)((long)param_1 + 0x4f) = (char)param_10;
        if (param_10 != 0) goto LAB_109e0185c;
      }
      else {
        puVar4 = (undefined8 *)0x19;
        if ((param_10 | 7) != 0x17) {
          puVar4 = (undefined8 *)((param_10 | 7) + 1);
        }
        puVar6 = puVar4;
        __Znwm();
        param_1[8] = param_10;
        param_1[9] = (ulong)puVar4 | 0x8000000000000000;
        param_1[7] = puVar6;
LAB_109e0185c:
        _memmove(puVar6,param_9,param_10);
      }
      *(undefined1 *)((long)puVar6 + param_10) = 0;
      if (param_12 < 0x7ffffffffffffff8) {
        puVar6 = param_1 + 10;
        if (param_12 < 0x17) {
          *(char *)((long)param_1 + 0x67) = (char)param_12;
          if (param_12 == 0) goto LAB_109e018d0;
        }
        else {
          puVar4 = (undefined8 *)0x19;
          if ((param_12 | 7) != 0x17) {
            puVar4 = (undefined8 *)((param_12 | 7) + 1);
          }
          puVar6 = puVar4;
          __Znwm();
          param_1[0xb] = param_12;
          param_1[0xc] = (ulong)puVar4 | 0x8000000000000000;
          param_1[10] = puVar6;
        }
        _memmove(puVar6,param_11,param_12);
LAB_109e018d0:
        *(undefined1 *)((long)puVar6 + param_12) = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        if (param_14 != 0) {
          func_0x000109b7e270(param_1 + 0xd,param_14);
          param_14 = param_14 << 3;
          puVar6 = (undefined8 *)param_1[0xe];
          do {
            puVar4 = puVar6 + 1;
            *puVar6 = *param_13;
            param_14 = param_14 + -8;
            param_13 = param_13 + 1;
            puVar6 = puVar4;
          } while (param_14 != 0);
          param_1[0xe] = puVar4;
        }
        puVar6 = param_1 + 0x12;
        param_1[0x10] = puVar6;
        param_1[0x11] = 0x400000000;
        uVar5 = (param_16 * 0x28 >> 3) * -0x3333333333333333;
        if (uVar5 < 5) {
          uVar3 = 0;
        }
        else {
          func_0x000109d384d4(param_1 + 0x10,uVar5);
          uVar3 = *(uint *)(param_1 + 0x11);
          puVar6 = (undefined8 *)param_1[0x10];
        }
        if (param_16 != 0) {
          puVar4 = param_15 + param_16 * 5;
          puVar6 = puVar6 + (ulong)uVar3 * 5;
          do {
            uVar7 = *param_15;
            puVar6[1] = param_15[1];
            *puVar6 = uVar7;
            if (*(char *)((long)param_15 + 0x27) < '\0') {
              func_0x000107c3192c(puVar6 + 2,param_15[2],param_15[3]);
            }
            else {
              uVar8 = param_15[3];
              uVar7 = param_15[2];
              puVar6[4] = param_15[4];
              puVar6[3] = uVar8;
              puVar6[2] = uVar7;
            }
            param_15 = param_15 + 5;
            puVar6 = puVar6 + 5;
          } while (param_15 != puVar4);
          uVar3 = *(uint *)(param_1 + 0x11);
          puVar6 = (undefined8 *)param_1[0x10];
        }
        uVar3 = uVar3 + (int)uVar5;
        *(uint *)(param_1 + 0x11) = uVar3;
        lVar1 = 0;
        if (uVar3 != 0) {
          lVar1 = LZCOUNT((ulong)uVar3) * -2 + 0x7e;
        }
        FUN_109e01f30(puVar6,puVar6 + (ulong)uVar3 * 5,lVar1,1);
        return param_1;
      }
      func_0x000104c4f6b8();
      goto LAB_109e01aa4;
    }
  }
  else {
    func_0x000104c4f6b8();
  }
  func_0x000104c4f6b8();
LAB_109e01aa4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109e01aa8);
  (*pcVar2)();
}



/* Entry: 109e01b1c; end: 109e01c53;  */

long * FUN_109e01b1c(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  
  plVar5 = param_1;
  if ((uint)param_3 != 0) {
    uVar6 = 0;
    uVar9 = 0;
    do {
      if (param_3 <= uVar6) {
LAB_109e01be8:
        uVar10 = param_3;
        if (uVar6 <= param_3) {
          uVar10 = uVar6;
        }
        plVar5 = param_1;
        FUN_109d2f728(param_1,param_2 + uVar10,param_3 - uVar10);
        break;
      }
      lVar4 = param_2 + uVar6;
      _memchr(lVar4,9,param_3 - uVar6);
      uVar10 = lVar4 - param_2;
      if (lVar4 == 0 || uVar10 == 0xffffffffffffffff) goto LAB_109e01be8;
      uVar2 = uVar6;
      if (uVar6 <= uVar10) {
        uVar2 = uVar10;
      }
      uVar3 = param_3;
      if (uVar10 <= param_3) {
        uVar3 = uVar2;
      }
      plVar5 = param_1;
      FUN_109d2f728(param_1,param_2 + uVar6,uVar3 - uVar6);
      uVar9 = (uVar9 - (int)uVar6) + (int)uVar10;
      do {
        puVar8 = (undefined1 *)param_1[4];
        if (puVar8 < (undefined1 *)param_1[3]) {
          param_1[4] = (long)(puVar8 + 1);
          *puVar8 = 0x20;
        }
        else {
          plVar5 = param_1;
          FUN_109e05570(param_1,0x20);
        }
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 7) != 0);
      uVar1 = (int)uVar10 + 1;
      uVar6 = (ulong)uVar1;
    } while (uVar1 != (uint)param_3);
  }
  puVar8 = (undefined1 *)param_1[4];
  if (puVar8 < (undefined1 *)param_1[3]) {
    param_1[4] = (long)(puVar8 + 1);
    *puVar8 = 10;
    return plVar5;
  }
  puVar8 = (undefined1 *)param_1[3];
  puVar7 = (undefined1 *)param_1[4];
  do {
    if (puVar7 < puVar8) {
LAB_109e055c0:
      param_1[4] = (long)(puVar7 + 1);
      *puVar7 = 10;
      return param_1;
    }
    if (param_1[2] != 0) {
      FUN_109e05520(param_1);
      puVar7 = (undefined1 *)param_1[4];
      goto LAB_109e055c0;
    }
    if ((int)param_1[7] == 0) {
      if (param_1[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_1 + 0x48))(param_1,&stack0xffffffffffffffdf,1);
      return param_1;
    }
    FUN_109e0538c(param_1);
    puVar8 = (undefined1 *)param_1[3];
    puVar7 = (undefined1 *)param_1[4];
  } while( true );
}



/* Entry: 109e01c54; end: 109e01ce7;  */

undefined8 * FUN_109e01c54(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 uStack_41;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    lVar1 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 != lVar1) {
      lVar4 = 0;
      do {
        if (*(char *)(lVar1 + lVar4) == '\n') {
          uStack_41 = (undefined1)lVar4;
          func_0x0001093aa574(puVar3,&uStack_41);
        }
        lVar4 = lVar4 + 1;
      } while (lVar2 - lVar1 != lVar4);
    }
    *param_1 = puVar3;
  }
  return puVar3;
}



/* Entry: 109e01ce8; end: 109e01e07;  */

long * FUN_109e01ce8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x18;
    lVar3 = param_2;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = 0;
    lVar1 = *(long *)(param_2 + 8);
    lVar10 = *(long *)(param_2 + 0x10) - lVar1;
    if (lVar10 != 0) {
      lVar11 = 0;
      plVar2 = plVar7;
      puVar12 = (undefined2 *)0x0;
      do {
        puVar13 = puVar12;
        if (*(char *)(lVar1 + lVar11) == '\n') {
          if (puVar12 < (undefined2 *)plVar7[2]) {
            puVar13 = puVar12 + 1;
            *puVar12 = (short)lVar11;
          }
          else {
            lVar9 = (long)puVar12 - *plVar7;
            lVar6 = lVar9 >> 1;
            if (lVar6 < -1) {
              func_0x0001093664bc();
              pcStack_68 = FUN_109e01e08;
              plVar8 = (long *)*plVar2;
              if (plVar8 == (long *)0x0) {
                plVar8 = (long *)0x18;
                lStack_a0 = lVar11;
                lStack_98 = lVar10;
                lStack_90 = lVar1;
                lStack_88 = lVar9;
                plStack_80 = plVar7;
                puStack_78 = param_1;
                puStack_70 = &stack0xfffffffffffffff0;
                __Znwm();
                plVar8[1] = 0;
                plVar8[2] = 0;
                *plVar8 = 0;
                lVar1 = *(long *)(lVar3 + 8);
                lVar3 = *(long *)(lVar3 + 0x10);
                if (lVar3 != lVar1) {
                  lVar10 = 0;
                  do {
                    if (*(char *)(lVar1 + lVar10) == '\n') {
                      uStack_a4 = (undefined4)lVar10;
                      func_0x0001093aa148(plVar8,&uStack_a4);
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar3 - lVar1 != lVar10);
                }
                *plVar2 = (long)plVar8;
              }
              return plVar8;
            }
            uVar5 = plVar7[2] - *plVar7;
            uVar4 = uVar5;
            if (uVar5 <= lVar6 + 1U) {
              uVar4 = lVar6 + 1;
            }
            if (0x7ffffffffffffffd < uVar5) {
              uVar4 = 0x7fffffffffffffff;
            }
            plVar8 = plVar7;
            func_0x0001093664d0();
            lVar3 = *plVar7;
            puVar12 = (undefined2 *)((long)plVar8 + lVar9);
            lVar6 = (long)puVar12 - (plVar7[1] - lVar3);
            puVar13 = puVar12 + 1;
            *puVar12 = (short)lVar11;
            _memcpy(lVar6);
            plVar2 = (long *)*plVar7;
            *plVar7 = lVar6;
            plVar7[1] = (long)puVar13;
            plVar7[2] = (long)plVar8 + uVar4 * 2;
            if (plVar2 != (long *)0x0) {
              __ZdlPv();
            }
          }
          plVar7[1] = (long)puVar13;
        }
        lVar11 = lVar11 + 1;
        puVar12 = puVar13;
      } while (lVar10 != lVar11);
    }
    *param_1 = plVar7;
  }
  return plVar7;
}



/* Entry: 109e01e08; end: 109e01f2f;  */

undefined8 * FUN_109e01e08(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uStack_44;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    lVar1 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 != lVar1) {
      lVar4 = 0;
      do {
        if (*(char *)(lVar1 + lVar4) == '\n') {
          uStack_44 = (undefined4)lVar4;
          func_0x0001093aa148(puVar3,&uStack_44);
        }
        lVar4 = lVar4 + 1;
      } while (lVar2 - lVar1 != lVar4);
    }
    *param_1 = puVar3;
  }
  return puVar3;
}



/* Entry: 109e01f30; end: 109e02b53;  */

/* WARNING: Possible PIC construction at 0x000109e02260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e02fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e032f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e02fe4) */
/* WARNING: Removing unreachable block (ram,0x000109e02ff4) */
/* WARNING: Removing unreachable block (ram,0x000109e0306c) */
/* WARNING: Removing unreachable block (ram,0x000109e030e8) */
/* WARNING: Removing unreachable block (ram,0x000109e03164) */
/* WARNING: Removing unreachable block (ram,0x000109e031c0) */
/* WARNING: Removing unreachable block (ram,0x000109e031f4) */
/* WARNING: Removing unreachable block (ram,0x000109e031d8) */
/* WARNING: Removing unreachable block (ram,0x000109e02264) */
/* WARNING: Removing unreachable block (ram,0x000109e02434) */
/* WARNING: Removing unreachable block (ram,0x000109e0243c) */
/* WARNING: Removing unreachable block (ram,0x000109e02278) */
/* WARNING: Removing unreachable block (ram,0x000109e032f8) */
/* WARNING: Removing unreachable block (ram,0x000109e02414) */
/* WARNING: Removing unreachable block (ram,0x000109e02238) */

ulong * FUN_109e01f30(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *unaff_x19;
  long lVar15;
  ulong *puVar16;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *puVar17;
  ulong *unaff_x23;
  ulong *puVar18;
  int iVar19;
  ulong *unaff_x24;
  ulong *unaff_x25;
  ulong *puVar20;
  ulong *unaff_x26;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  undefined8 ****unaff_x29;
  code *unaff_x30;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  long lStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  long lStack_68;
  
  ppppuVar1 = (undefined8 ****)&stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = &uStack_c0;
  puVar11 = param_2 + -5;
  puStack_d0 = param_2 + -10;
  puStack_d8 = param_2 + -0xf;
  puVar9 = param_2;
  puVar16 = unaff_x19;
  puVar17 = param_3;
  puVar10 = unaff_x24;
  puVar20 = param_4;
  puVar6 = param_1;
  puStack_c8 = param_2;
LAB_109e01f88:
  puVar8 = puStack_c8;
  uVar23 = (long)puStack_c8 - (long)puVar6;
  puVar21 = (ulong *)(((long)uVar23 >> 3) * -0x3333333333333333);
  if ((long)puVar21 - 2U == 0 || (long)puVar21 < 2) {
    if (puVar21 < (ulong *)0x2) goto LAB_109e02b18;
    if (puVar21 == (ulong *)0x2) {
      param_1 = puVar11;
      puVar9 = puVar6;
      FUN_109e03484();
      if ((int)param_1 != 0) {
        uStack_b8 = puVar6[1];
        uStack_c0 = *puVar6;
        uVar23 = puVar6[2];
        uStack_80 = (undefined7)puVar6[3];
        uVar13 = *(undefined8 *)((long)puVar6 + 0x1f);
        uStack_79 = (undefined1)uVar13;
        uStack_78 = (undefined7)((ulong)uVar13 >> 8);
        uVar3 = *(undefined1 *)((long)puVar6 + 0x27);
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[2] = 0;
        uVar14 = *puVar11;
        puVar6[1] = param_2[-4];
        *puVar6 = uVar14;
        uVar24 = puVar8[-2];
        uVar14 = puVar8[-3];
        puVar6[4] = puVar8[-1];
        puVar6[3] = uVar24;
        puVar6[2] = uVar14;
        param_2[-4] = uStack_b8;
        *puVar11 = uStack_c0;
        puVar8[-3] = uVar23;
        *(undefined8 *)((long)puVar8 + -9) = uVar13;
        puVar8[-2] = CONCAT17(uStack_79,uStack_80);
        *(undefined1 *)((long)puVar8 + -1) = uVar3;
      }
      goto LAB_109e02b18;
    }
  }
  else {
    if (puVar21 == (ulong *)0x3) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_109e02b50;
      puVar9 = puVar6 + 5;
      goto code_r0x000109e02b54;
    }
    if (puVar21 == (ulong *)0x4) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        puVar18 = puVar6 + 5;
        puVar10 = puVar6 + 10;
        puVar16 = puVar6;
        param_4 = puVar11;
        goto FUN_109e02dc8;
      }
      goto LAB_109e02b50;
    }
    if (puVar21 == (ulong *)0x5) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_109e02b50;
      puVar8 = puVar6 + 5;
      puVar21 = puVar6 + 10;
      puVar7 = puVar6 + 0xf;
      param_5 = puVar11;
      goto SUB_109e02fa0;
    }
  }
  if ((long)uVar23 < 0x3c0) {
    if (((ulong)puVar20 & 1) == 0) {
      if ((puVar6 != puStack_c8) && (puVar6 + 5 != puStack_c8)) {
        puVar17 = &uStack_c0;
        puVar18 = puVar6 + -5;
        puVar7 = puVar6 + 5;
        puVar11 = puVar6;
        do {
          puVar6 = puVar7;
          param_1 = puVar6;
          puVar9 = puVar11;
          FUN_109e03484();
          if ((int)param_1 != 0) {
            uStack_b8 = puVar6[1];
            uStack_c0 = *puVar6;
            uStack_a8 = puVar11[8];
            uStack_b0 = puVar11[7];
            uStack_a0 = puVar11[9];
            puVar11[7] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            puVar11 = puVar18;
            do {
              puVar7 = puVar11;
              puVar7[0xb] = puVar7[6];
              puVar7[10] = puVar7[5];
              if (*(char *)((long)puVar7 + 0x77) < '\0') {
                __ZdlPv(puVar7[0xc]);
              }
              puVar7[0xd] = puVar7[8];
              puVar7[0xc] = puVar7[7];
              puVar7[0xe] = puVar7[9];
              *(undefined1 *)((long)puVar7 + 0x4f) = 0;
              *(undefined1 *)(puVar7 + 7) = 0;
              param_1 = &uStack_c0;
              puVar9 = puVar7;
              FUN_109e03484();
              puVar11 = puVar7 + -5;
            } while (((ulong)param_1 & 1) != 0);
            puVar7[6] = uStack_b8;
            puVar7[5] = uStack_c0;
            if (*(char *)((long)puVar7 + 0x4f) < '\0') {
              param_1 = (ulong *)puVar7[7];
              __ZdlPv();
            }
            puVar7[9] = uStack_a0;
            puVar7[8] = uStack_a8;
            puVar7[7] = uStack_b0;
          }
          puVar18 = puVar18 + 5;
          puVar7 = puVar6 + 5;
          puVar11 = puVar6;
        } while (puVar6 + 5 != puVar8);
      }
    }
    else if ((puVar6 != puStack_c8) && (puVar6 + 5 != puStack_c8)) {
      puVar18 = (ulong *)0x0;
      puVar10 = &uStack_c0;
      puVar7 = puVar6 + 5;
      puVar11 = puVar6;
      do {
        puVar17 = puVar7;
        param_1 = puVar17;
        puVar9 = puVar11;
        FUN_109e03484();
        if ((int)param_1 != 0) {
          uStack_b8 = puVar17[1];
          uStack_c0 = *puVar17;
          uStack_a8 = puVar11[8];
          uStack_b0 = puVar11[7];
          uStack_a0 = puVar11[9];
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11 = puVar18;
          do {
            puVar16 = puVar11;
            puVar2 = (undefined8 *)((long)puVar6 + (long)puVar16);
            puVar2[6] = puVar2[1];
            puVar2[5] = *puVar2;
            if (*(char *)((long)puVar2 + 0x4f) < '\0') {
              param_1 = (ulong *)puVar2[7];
              __ZdlPv();
            }
            puVar2[8] = puVar2[3];
            puVar2[7] = puVar2[2];
            puVar2[9] = puVar2[4];
            *(undefined1 *)((long)puVar2 + 0x27) = 0;
            *(undefined1 *)(puVar2 + 2) = 0;
            if (puVar16 == (ulong *)0x0) {
              puVar6[1] = uStack_b8;
              *puVar6 = uStack_c0;
              goto LAB_109e0265c;
            }
            puVar11 = puVar16 + -5;
            param_1 = &uStack_c0;
            puVar9 = (ulong *)((long)puVar11 + (long)puVar6);
            FUN_109e03484();
          } while (((ulong)param_1 & 1) != 0);
          lVar15 = (long)puVar6 + (long)puVar11;
          *(ulong *)(lVar15 + 0x30) = uStack_b8;
          *(ulong *)(lVar15 + 0x28) = uStack_c0;
          if (*(char *)(lVar15 + 0x4f) < '\0') {
            param_1 = *(ulong **)(lVar15 + 0x38);
            __ZdlPv();
          }
LAB_109e0265c:
          lVar15 = (long)puVar6 + (long)puVar16;
          *(ulong *)(lVar15 + 0x20) = uStack_a0;
          *(ulong *)(lVar15 + 0x18) = uStack_a8;
          *(ulong *)(lVar15 + 0x10) = uStack_b0;
        }
        puVar18 = puVar18 + 5;
        puVar7 = puVar17 + 5;
        puVar11 = puVar17;
      } while (puVar17 + 5 != puVar8);
    }
LAB_109e02b18:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_1;
    }
LAB_109e02b50:
    unaff_x26 = puVar21;
    unaff_x25 = puVar20;
    unaff_x24 = puVar10;
    unaff_x23 = puVar18;
    unaff_x22 = puVar17;
    unaff_x21 = puVar11;
    unaff_x20 = puVar6;
    unaff_x19 = puVar16;
    puVar11 = param_3;
    puVar6 = param_1;
    unaff_x30 = FUN_109e02b54;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x29 = ppppuVar1;
code_r0x000109e02b54:
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined8 ****)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22 = puVar9;
    puVar10 = puVar11;
    FUN_109e03484(puVar9,puVar6);
    puVar16 = puVar11;
    puVar18 = puVar9;
    FUN_109e03484();
    if (((ulong)unaff_x22 & 1) == 0) {
      if ((int)puVar16 != 0) {
        uVar23 = *puVar9;
        *(ulong *)((long)register0x00000008 + -0x68) = puVar9[1];
        *(ulong *)((long)register0x00000008 + -0x70) = uVar23;
        unaff_x23 = puVar9 + 2;
        uVar23 = *unaff_x23;
        unaff_x22 = puVar9 + 3;
        *(ulong *)((long)register0x00000008 + -0x58) = *unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)puVar9 + 0x1f);
        uVar3 = *(undefined1 *)((long)puVar9 + 0x27);
        *unaff_x23 = 0;
        puVar9[4] = 0;
        *unaff_x22 = 0;
        uVar14 = *puVar11;
        puVar9[1] = puVar11[1];
        *puVar9 = uVar14;
        uVar14 = puVar11[4];
        uVar24 = puVar11[2];
        puVar9[3] = puVar11[3];
        *unaff_x23 = uVar24;
        puVar9[4] = uVar14;
        uVar14 = *(ulong *)((long)register0x00000008 + -0x70);
        puVar11[1] = *(ulong *)((long)register0x00000008 + -0x68);
        *puVar11 = uVar14;
        uVar14 = *(ulong *)((long)register0x00000008 + -0x58);
        puVar11[2] = uVar23;
        puVar11[3] = uVar14;
        *(undefined8 *)((long)puVar11 + 0x1f) = *(undefined8 *)((long)register0x00000008 + -0x51);
        *(undefined1 *)((long)puVar11 + 0x27) = uVar3;
        puVar16 = puVar9;
        puVar18 = puVar6;
        FUN_109e03484();
        if ((int)puVar16 != 0) {
          uVar23 = *puVar6;
          *(ulong *)((long)register0x00000008 + -0x68) = puVar6[1];
          *(ulong *)((long)register0x00000008 + -0x70) = uVar23;
          uVar23 = puVar6[2];
          *(ulong *)((long)register0x00000008 + -0x58) = puVar6[3];
          *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)puVar6 + 0x1f);
          uVar3 = *(undefined1 *)((long)puVar6 + 0x27);
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[2] = 0;
          uVar14 = *puVar9;
          puVar6[1] = puVar9[1];
          *puVar6 = uVar14;
          uVar14 = puVar9[4];
          uVar24 = *unaff_x23;
          puVar6[3] = puVar9[3];
          puVar6[2] = uVar24;
          puVar6[4] = uVar14;
          uVar14 = *(ulong *)((long)register0x00000008 + -0x70);
          puVar9[1] = *(ulong *)((long)register0x00000008 + -0x68);
          *puVar9 = uVar14;
          puVar9[2] = uVar23;
          *unaff_x22 = *(ulong *)((long)register0x00000008 + -0x58);
          *(undefined8 *)((long)puVar9 + 0x1f) = *(undefined8 *)((long)register0x00000008 + -0x51);
          *(undefined1 *)((long)puVar9 + 0x27) = uVar3;
        }
      }
    }
    else {
      if ((int)puVar16 == 0) {
        uVar23 = *puVar6;
        *(ulong *)((long)register0x00000008 + -0x68) = puVar6[1];
        *(ulong *)((long)register0x00000008 + -0x70) = uVar23;
        uVar23 = puVar6[2];
        *(ulong *)((long)register0x00000008 + -0x58) = puVar6[3];
        *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)puVar6 + 0x1f);
        uVar3 = *(undefined1 *)((long)puVar6 + 0x27);
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[2] = 0;
        uVar14 = *puVar9;
        puVar6[1] = puVar9[1];
        *puVar6 = uVar14;
        uVar14 = puVar9[4];
        uVar24 = puVar9[2];
        puVar6[3] = puVar9[3];
        puVar6[2] = uVar24;
        puVar6[4] = uVar14;
        uVar14 = *(ulong *)((long)register0x00000008 + -0x70);
        puVar9[1] = *(ulong *)((long)register0x00000008 + -0x68);
        *puVar9 = uVar14;
        puVar9[2] = uVar23;
        puVar6 = puVar9 + 3;
        *puVar6 = *(ulong *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)puVar9 + 0x1f) = *(undefined8 *)((long)register0x00000008 + -0x51);
        *(undefined1 *)((long)puVar9 + 0x27) = uVar3;
        puVar16 = puVar11;
        puVar18 = puVar9;
        FUN_109e03484();
        if ((int)puVar16 == 0) goto LAB_109e02d94;
        uVar23 = *puVar9;
        *(ulong *)((long)register0x00000008 + -0x68) = puVar9[1];
        *(ulong *)((long)register0x00000008 + -0x70) = uVar23;
        uVar23 = puVar9[2];
        *(ulong *)((long)register0x00000008 + -0x58) = *puVar6;
        *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)puVar9 + 0x1f);
        uVar3 = *(undefined1 *)((long)puVar9 + 0x27);
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[2] = 0;
        uVar14 = *puVar11;
        puVar9[1] = puVar11[1];
        *puVar9 = uVar14;
        uVar14 = puVar11[4];
        uVar24 = puVar11[2];
        puVar9[3] = puVar11[3];
        puVar9[2] = uVar24;
        puVar9[4] = uVar14;
      }
      else {
        uVar23 = *puVar6;
        *(ulong *)((long)register0x00000008 + -0x68) = puVar6[1];
        *(ulong *)((long)register0x00000008 + -0x70) = uVar23;
        uVar23 = puVar6[2];
        *(ulong *)((long)register0x00000008 + -0x58) = puVar6[3];
        *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)puVar6 + 0x1f);
        uVar3 = *(undefined1 *)((long)puVar6 + 0x27);
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[2] = 0;
        uVar14 = *puVar11;
        puVar6[1] = puVar11[1];
        *puVar6 = uVar14;
        uVar14 = puVar11[4];
        uVar24 = puVar11[2];
        puVar6[3] = puVar11[3];
        puVar6[2] = uVar24;
        puVar6[4] = uVar14;
      }
      uVar14 = *(ulong *)((long)register0x00000008 + -0x70);
      puVar11[1] = *(ulong *)((long)register0x00000008 + -0x68);
      *puVar11 = uVar14;
      uVar14 = *(ulong *)((long)register0x00000008 + -0x58);
      puVar11[2] = uVar23;
      puVar11[3] = uVar14;
      *(undefined8 *)((long)puVar11 + 0x1f) = *(undefined8 *)((long)register0x00000008 + -0x51);
      *(undefined1 *)((long)puVar11 + 0x27) = uVar3;
    }
LAB_109e02d94:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return puVar16;
    }
    unaff_x30 = (code *)0x109e02dc8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = puVar9;
    unaff_x20 = puVar11;
    unaff_x21 = puVar6;
    goto FUN_109e02dc8;
  }
  if (puVar17 == (ulong *)0x0) {
    if (puVar6 != puStack_c8) {
      puVar18 = (ulong *)((long)puVar21 - 2U >> 1);
      puVar10 = puVar18;
      do {
        if ((long)puVar10 <= (long)puVar18) {
          puVar9 = (ulong *)((long)puVar10 << 1 | 1);
          puVar17 = puVar6 + (long)puVar9 * 5;
          puVar16 = (ulong *)((long)puVar10 * 2 + 2);
          puVar20 = puVar17;
          puVar8 = puVar9;
          if ((long)puVar16 < (long)puVar21) {
            puVar7 = puVar17;
            FUN_109e03484(puVar17,puVar17 + 5);
            puVar20 = puVar17 + 5;
            puVar8 = puVar16;
            if ((int)puVar7 == 0) {
              puVar20 = puVar17;
              puVar8 = puVar9;
            }
          }
          puVar17 = puVar6 + (long)puVar10 * 5;
          param_1 = puVar20;
          puVar9 = puVar17;
          FUN_109e03484();
          if (((ulong)param_1 & 1) == 0) {
            uStack_b8 = puVar17[1];
            uStack_c0 = *puVar17;
            uStack_a8 = puVar17[3];
            uStack_b0 = puVar17[2];
            uStack_a0 = puVar17[4];
            puVar17[3] = 0;
            puVar17[4] = 0;
            puVar17[2] = 0;
            do {
              puVar11 = puVar20;
              uVar14 = *puVar11;
              puVar17[1] = puVar11[1];
              *puVar17 = uVar14;
              if (*(char *)((long)puVar17 + 0x27) < '\0') {
                param_1 = (ulong *)puVar17[2];
                __ZdlPv();
              }
              uVar24 = puVar11[3];
              uVar14 = puVar11[2];
              puVar17[4] = puVar11[4];
              puVar17[3] = uVar24;
              puVar17[2] = uVar14;
              *(undefined1 *)((long)puVar11 + 0x27) = 0;
              *(undefined1 *)(puVar11 + 2) = 0;
              if ((long)puVar18 < (long)puVar8) {
                puVar11[1] = uStack_b8;
                *puVar11 = uStack_c0;
                goto LAB_109e027d0;
              }
              puVar17 = (ulong *)((long)puVar8 << 1 | 1);
              puVar7 = puVar6 + (long)puVar17 * 5;
              puVar9 = (ulong *)((long)puVar8 * 2 + 2);
              puVar16 = puVar17;
              puVar20 = puVar7;
              if ((long)puVar9 < (long)puVar21) {
                puVar8 = puVar7;
                FUN_109e03484(puVar7,puVar7 + 5);
                puVar16 = puVar9;
                puVar20 = puVar7 + 5;
                if ((int)puVar8 == 0) {
                  puVar16 = puVar17;
                  puVar20 = puVar7;
                }
              }
              puVar9 = &uStack_c0;
              param_1 = puVar20;
              FUN_109e03484();
              puVar17 = puVar11;
              puVar8 = puVar16;
            } while ((int)param_1 == 0);
            puVar11[1] = uStack_b8;
            *puVar11 = uStack_c0;
            if (*(char *)((long)puVar11 + 0x27) < '\0') {
              param_1 = (ulong *)puVar11[2];
              __ZdlPv();
            }
LAB_109e027d0:
            puVar11[4] = uStack_a0;
            puVar11[3] = uStack_a8;
            puVar11[2] = uStack_b0;
          }
        }
        bVar5 = puVar10 != (ulong *)0x0;
        puVar10 = (ulong *)((long)puVar10 + -1);
      } while (bVar5);
      puVar10 = puStack_c8;
      puVar8 = (ulong *)((uVar23 >> 3) * -0x3333333333333333);
      do {
        if (1 < (long)puVar8) {
          puVar20 = (ulong *)0x0;
          uStack_78 = (undefined7)puVar6[1];
          uStack_71 = (undefined1)(puVar6[1] >> 0x38);
          uStack_80 = (undefined7)*puVar6;
          uStack_79 = (undefined1)(*puVar6 >> 0x38);
          puStack_d0 = (ulong *)puVar6[2];
          uStack_90 = (undefined7)puVar6[3];
          uStack_89 = (undefined1)*(undefined8 *)((long)puVar6 + 0x1f);
          uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)puVar6 + 0x1f) >> 8);
          puStack_c8 = (ulong *)CONCAT44(puStack_c8._4_4_,(uint)*(byte *)((long)puVar6 + 0x27));
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar16 = (ulong *)((long)puVar8 - 2U >> 1);
          puVar6[2] = 0;
          puVar17 = puVar6;
          do {
            puVar11 = puVar17 + (long)puVar20 * 5 + 5;
            puVar18 = (ulong *)((long)puVar20 << 1 | 1);
            puVar21 = (ulong *)((long)puVar20 * 2 + 2);
            if ((long)puVar21 < (long)puVar8) {
              param_1 = puVar11;
              puVar9 = puVar17 + (long)puVar20 * 5 + 10;
              FUN_109e03484();
              puVar20 = puVar17 + (long)puVar20 * 5 + 10;
              if ((int)param_1 == 0) {
                puVar21 = puVar18;
                puVar20 = puVar11;
              }
              puVar11 = puVar20;
              uVar23 = *puVar11;
              puVar17[1] = puVar11[1];
              *puVar17 = uVar23;
              puVar20 = puVar21;
              if (*(char *)((long)puVar17 + 0x27) < '\0') {
                param_1 = (ulong *)puVar17[2];
                __ZdlPv();
              }
            }
            else {
              uVar23 = *puVar11;
              puVar17[1] = puVar17[(long)puVar20 * 5 + 6];
              *puVar17 = uVar23;
              puVar20 = puVar18;
            }
            puVar21 = puVar17 + 2;
            uVar14 = puVar11[3];
            uVar23 = puVar11[2];
            puVar17[4] = puVar11[4];
            puVar17[3] = uVar14;
            *puVar21 = uVar23;
            *(undefined1 *)((long)puVar11 + 0x27) = 0;
            *(undefined1 *)(puVar11 + 2) = 0;
            puVar17 = puVar11;
          } while ((long)puVar20 <= (long)puVar16);
          puVar20 = puVar10 + -5;
          if (puVar11 == puVar20) {
            puVar11[1] = CONCAT17(uStack_71,uStack_78);
            *puVar11 = CONCAT17(uStack_79,uStack_80);
            puVar11[2] = (ulong)puStack_d0;
            puVar11[3] = CONCAT17(uStack_89,uStack_90);
            *(ulong *)((long)puVar11 + 0x1f) = CONCAT71(uStack_88,uStack_89);
            *(char *)((long)puVar11 + 0x27) = (char)puStack_c8;
          }
          else {
            uVar23 = *puVar20;
            puVar11[1] = puVar10[-4];
            *puVar11 = uVar23;
            uVar14 = puVar10[-2];
            uVar23 = puVar10[-3];
            puVar11[4] = puVar10[-1];
            puVar11[3] = uVar14;
            puVar11[2] = uVar23;
            puVar10[-4] = CONCAT17(uStack_71,uStack_78);
            *puVar20 = CONCAT17(uStack_79,uStack_80);
            puVar10[-3] = (ulong)puStack_d0;
            *(ulong *)((long)puVar10 + -9) = CONCAT71(uStack_88,uStack_89);
            puVar10[-2] = CONCAT17(uStack_89,uStack_90);
            *(char *)((long)puVar10 + -1) = (char)puStack_c8;
            uVar23 = (long)puVar11 + (0x28 - (long)puVar6);
            if (0x28 < (long)uVar23) {
              puVar16 = (ulong *)((uVar23 >> 3) * -0x3333333333333333 - 2 >> 1);
              puVar17 = puVar6 + (long)puVar16 * 5;
              param_1 = puVar17;
              puVar9 = puVar11;
              FUN_109e03484();
              if ((int)param_1 != 0) {
                uStack_b8 = puVar11[1];
                uStack_c0 = *puVar11;
                uStack_a8 = puVar11[3];
                uStack_b0 = puVar11[2];
                uStack_a0 = puVar11[4];
                puVar11[3] = 0;
                puVar11[4] = 0;
                puVar11[2] = 0;
                do {
                  puVar18 = puVar17;
                  uVar23 = *puVar18;
                  puVar11[1] = puVar18[1];
                  *puVar11 = uVar23;
                  if (*(char *)((long)puVar11 + 0x27) < '\0') {
                    param_1 = (ulong *)puVar11[2];
                    __ZdlPv();
                  }
                  uVar14 = puVar18[3];
                  uVar23 = puVar18[2];
                  puVar11[4] = puVar18[4];
                  puVar11[3] = uVar14;
                  puVar11[2] = uVar23;
                  *(undefined1 *)((long)puVar18 + 0x27) = 0;
                  *(undefined1 *)(puVar18 + 2) = 0;
                  if (puVar16 == (ulong *)0x0) {
                    puVar18[1] = uStack_b8;
                    *puVar18 = uStack_c0;
                    puVar16 = (ulong *)0x0;
                    puVar17 = puVar18;
                    goto LAB_109e02a20;
                  }
                  puVar16 = (ulong *)((long)puVar16 - 1U >> 1);
                  puVar17 = puVar6 + (long)puVar16 * 5;
                  puVar9 = &uStack_c0;
                  param_1 = puVar17;
                  FUN_109e03484();
                  puVar11 = puVar18;
                } while (((ulong)param_1 & 1) != 0);
                puVar18[1] = uStack_b8;
                *puVar18 = uStack_c0;
                if (*(char *)((long)puVar18 + 0x27) < '\0') {
                  param_1 = (ulong *)puVar18[2];
                  __ZdlPv();
                }
LAB_109e02a20:
                puVar18[4] = uStack_a0;
                puVar18[3] = uStack_a8;
                puVar18[2] = uStack_b0;
              }
            }
          }
        }
        puVar10 = puVar10 + -5;
        puVar20 = (ulong *)((long)puVar8 + -1);
        bVar5 = (ulong *)0x2 < puVar8;
        puVar8 = puVar20;
      } while (bVar5);
    }
    goto LAB_109e02b18;
  }
  puVar9 = puVar6 + ((ulong)puVar21 >> 1) * 5;
  if (uVar23 < 0x1401) {
    param_3 = puVar11;
    FUN_109e02b54(puVar9,puVar6);
  }
  else {
    FUN_109e02b54(puVar6,puVar9,puVar11);
    FUN_109e02b54(puVar6 + 5,puVar9 + -5,puStack_d0);
    FUN_109e02b54(puVar6 + 10,puVar9 + 5,puStack_d8);
    param_3 = puVar9 + 5;
    FUN_109e02b54(puVar9 + -5,puVar9);
    uStack_b8 = puVar6[1];
    uStack_c0 = *puVar6;
    uVar23 = puVar6[2];
    uStack_80 = (undefined7)puVar6[3];
    uVar13 = *(undefined8 *)((long)puVar6 + 0x1f);
    uStack_79 = (undefined1)uVar13;
    uStack_78 = (undefined7)((ulong)uVar13 >> 8);
    uVar3 = *(undefined1 *)((long)puVar6 + 0x27);
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[2] = 0;
    uVar14 = *puVar9;
    puVar6[1] = puVar9[1];
    *puVar6 = uVar14;
    uVar24 = puVar9[3];
    uVar14 = puVar9[2];
    puVar6[4] = puVar9[4];
    puVar6[3] = uVar24;
    puVar6[2] = uVar14;
    puVar9[1] = uStack_b8;
    *puVar9 = uStack_c0;
    puVar9[2] = uVar23;
    *(undefined8 *)((long)puVar9 + 0x1f) = uVar13;
    puVar9[3] = CONCAT17(uStack_79,uStack_80);
    *(undefined1 *)((long)puVar9 + 0x27) = uVar3;
  }
  puVar17 = (ulong *)((long)puVar17 + -1);
  if (((ulong)puVar20 & 1) == 0) {
    puVar9 = puVar6 + -5;
    FUN_109e03484(puVar9,puVar6);
    if (((ulong)puVar9 & 1) != 0) goto LAB_109e020c4;
    uStack_b8 = puVar6[1];
    uStack_c0 = *puVar6;
    uStack_a8 = puVar6[3];
    uStack_b0 = puVar6[2];
    uStack_a0 = puVar6[4];
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[2] = 0;
    param_1 = &uStack_c0;
    puVar9 = puVar11;
    FUN_109e03484();
    puVar21 = puVar6;
    if (((ulong)param_1 & 1) == 0) {
      do {
        puVar21 = puVar21 + 5;
        if (puVar8 <= puVar21) break;
        param_1 = &uStack_c0;
        puVar9 = puVar21;
        FUN_109e03484();
      } while ((int)param_1 == 0);
    }
    else {
      do {
        puVar21 = puVar21 + 5;
        param_1 = &uStack_c0;
        puVar9 = puVar21;
        FUN_109e03484();
      } while (((ulong)param_1 & 1) == 0);
    }
    if (puVar21 < puVar8) {
      do {
        puVar8 = puVar8 + -5;
        param_1 = &uStack_c0;
        puVar9 = puVar8;
        FUN_109e03484();
      } while (((ulong)param_1 & 1) != 0);
    }
    while (puVar21 < puVar8) {
      uVar25 = puVar21[1];
      uVar14 = *puVar21;
      uStack_78 = (undefined7)uVar25;
      uStack_71 = (undefined1)(uVar25 >> 0x38);
      uStack_80 = (undefined7)uVar14;
      uStack_79 = (undefined1)(uVar14 >> 0x38);
      uVar23 = puVar21[2];
      uStack_90 = (undefined7)puVar21[3];
      uVar13 = *(undefined8 *)((long)puVar21 + 0x1f);
      uStack_89 = (undefined1)uVar13;
      uStack_88 = (undefined7)((ulong)uVar13 >> 8);
      uVar3 = *(undefined1 *)((long)puVar21 + 0x27);
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[2] = 0;
      uVar24 = *puVar8;
      puVar21[1] = puVar8[1];
      *puVar21 = uVar24;
      uVar26 = puVar8[3];
      uVar24 = puVar8[2];
      puVar21[4] = puVar8[4];
      puVar21[3] = uVar26;
      puVar21[2] = uVar24;
      puVar8[1] = uVar25;
      *puVar8 = uVar14;
      puVar8[2] = uVar23;
      puVar8[3] = CONCAT17(uStack_89,uStack_90);
      *(undefined8 *)((long)puVar8 + 0x1f) = uVar13;
      *(undefined1 *)((long)puVar8 + 0x27) = uVar3;
      do {
        puVar21 = puVar21 + 5;
        puVar9 = &uStack_c0;
        FUN_109e03484(puVar9,puVar21);
      } while ((int)puVar9 == 0);
      do {
        puVar8 = puVar8 + -5;
        param_1 = &uStack_c0;
        puVar9 = puVar8;
        FUN_109e03484();
      } while (((ulong)param_1 & 1) != 0);
    }
    puVar10 = puVar21 + -5;
    if (puVar10 == puVar6) {
      puVar6[1] = uStack_b8;
      *puVar6 = uStack_c0;
    }
    else {
      uVar23 = *puVar10;
      puVar6[1] = puVar21[-4];
      *puVar6 = uVar23;
      if (*(char *)((long)puVar6 + 0x27) < '\0') {
        param_1 = (ulong *)puVar6[2];
        __ZdlPv();
      }
      uVar14 = puVar21[-2];
      uVar23 = puVar21[-3];
      puVar6[4] = puVar21[-1];
      puVar6[3] = uVar14;
      puVar6[2] = uVar23;
      *(undefined1 *)((long)puVar21 + -1) = 0;
      *(undefined1 *)(puVar21 + -3) = 0;
      puVar21[-4] = uStack_b8;
      *puVar10 = uStack_c0;
    }
    puVar16 = puVar21 + -3;
    puVar20 = (ulong *)0x0;
    puVar21[-1] = uStack_a0;
    puVar21[-2] = uStack_a8;
    *puVar16 = uStack_b0;
    puVar6 = puVar21;
    goto LAB_109e01f88;
  }
LAB_109e020c4:
  lVar15 = 0;
  uStack_b8 = puVar6[1];
  uStack_c0 = *puVar6;
  uStack_a8 = puVar6[3];
  uStack_b0 = puVar6[2];
  uStack_a0 = puVar6[4];
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = 0;
  do {
    lVar15 = lVar15 + 0x28;
    uVar23 = lVar15 + (long)puVar6;
    FUN_109e03484(uVar23,&uStack_c0);
  } while ((uVar23 & 1) != 0);
  puVar10 = (ulong *)((long)puVar6 + lVar15);
  if (lVar15 == 0x28) {
    do {
      if (puVar8 <= puVar10) break;
      puVar8 = puVar8 + -5;
      puVar9 = puVar8;
      FUN_109e03484(puVar8,&uStack_c0);
    } while (((ulong)puVar9 & 1) == 0);
  }
  else {
    do {
      puVar8 = puVar8 + -5;
      puVar9 = puVar8;
      FUN_109e03484(puVar8,&uStack_c0);
    } while ((int)puVar9 == 0);
  }
  puVar22 = puVar10;
  puVar9 = puVar8;
  if (puVar10 < puVar8) {
    do {
      uVar25 = puVar22[1];
      uVar14 = *puVar22;
      uStack_78 = (undefined7)uVar25;
      uStack_71 = (undefined1)(uVar25 >> 0x38);
      uStack_80 = (undefined7)uVar14;
      uStack_79 = (undefined1)(uVar14 >> 0x38);
      uVar23 = puVar22[2];
      uStack_90 = (undefined7)puVar22[3];
      uVar13 = *(undefined8 *)((long)puVar22 + 0x1f);
      uStack_89 = (undefined1)uVar13;
      uStack_88 = (undefined7)((ulong)uVar13 >> 8);
      uVar3 = *(undefined1 *)((long)puVar22 + 0x27);
      puVar22[3] = 0;
      puVar22[4] = 0;
      puVar22[2] = 0;
      uVar24 = *puVar9;
      puVar22[1] = puVar9[1];
      *puVar22 = uVar24;
      uVar26 = puVar9[3];
      uVar24 = puVar9[2];
      puVar22[4] = puVar9[4];
      puVar22[3] = uVar26;
      puVar22[2] = uVar24;
      puVar9[1] = uVar25;
      *puVar9 = uVar14;
      puVar9[2] = uVar23;
      puVar9[3] = CONCAT17(uStack_89,uStack_90);
      *(undefined8 *)((long)puVar9 + 0x1f) = uVar13;
      *(undefined1 *)((long)puVar9 + 0x27) = uVar3;
      do {
        puVar22 = puVar22 + 5;
        puVar16 = puVar22;
        FUN_109e03484(puVar22,&uStack_c0);
      } while (((ulong)puVar16 & 1) != 0);
      do {
        puVar9 = puVar9 + -5;
        puVar16 = puVar9;
        FUN_109e03484(puVar9,&uStack_c0);
      } while ((int)puVar16 == 0);
    } while (puVar22 < puVar9);
  }
  puVar9 = puVar22 + -5;
  if (puVar9 == puVar6) {
    puVar6[1] = uStack_b8;
    *puVar6 = uStack_c0;
  }
  else {
    uVar23 = *puVar9;
    puVar6[1] = puVar22[-4];
    *puVar6 = uVar23;
    if (*(char *)((long)puVar6 + 0x27) < '\0') {
      __ZdlPv(puVar6[2]);
    }
    uVar14 = puVar22[-2];
    uVar23 = puVar22[-3];
    puVar6[4] = puVar22[-1];
    puVar6[3] = uVar14;
    puVar6[2] = uVar23;
    *(undefined1 *)((long)puVar22 + -1) = 0;
    *(undefined1 *)(puVar22 + -3) = 0;
    puVar22[-4] = uStack_b8;
    *puVar9 = uStack_c0;
  }
  puVar16 = puVar22 + -3;
  puVar22[-1] = uStack_a0;
  puVar22[-2] = uStack_a8;
  *puVar16 = uStack_b0;
  if (puVar10 < puVar8) {
    param_4 = (ulong *)(ulong)((uint)puVar20 & 1);
    param_3 = puVar17;
    FUN_109e01f30();
    puVar20 = (ulong *)0x0;
    param_1 = puVar6;
    puVar6 = puVar22;
    goto LAB_109e01f88;
  }
  uStack_e8 = 0x109e02264;
  unaff_x29 = &pppuStack_f0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = ((long)puVar9 - (long)puVar6 >> 3) * -0x3333333333333333;
  puStack_130 = puVar22;
  puStack_128 = puVar20;
  puStack_120 = puVar10;
  puStack_118 = puVar18;
  puStack_110 = puVar17;
  puStack_108 = puVar11;
  puStack_100 = puVar6;
  puStack_f8 = puVar16;
  pppuStack_f0 = ppppuVar1;
  if ((long)uVar23 < 3) {
    puVar18 = puVar9;
    if (1 < uVar23) {
      if (uVar23 == 2) {
        puVar10 = puVar22 + -10;
        puVar9 = puVar10;
        puVar18 = puVar6;
        FUN_109e03484();
        if ((int)puVar9 != 0) {
          uStack_168 = puVar6[1];
          uStack_170 = *puVar6;
          uVar23 = puVar6[2];
          uStack_148 = (undefined7)puVar6[3];
          uVar13 = *(undefined8 *)((long)puVar6 + 0x1f);
          uStack_141 = (undefined1)uVar13;
          uStack_140 = (undefined7)((ulong)uVar13 >> 8);
          uVar3 = *(undefined1 *)((long)puVar6 + 0x27);
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[2] = 0;
          uVar14 = *puVar10;
          puVar6[1] = puVar22[-9];
          *puVar6 = uVar14;
          uVar14 = puVar22[-6];
          uVar24 = puVar22[-8];
          puVar6[3] = puVar22[-7];
          puVar6[2] = uVar24;
          puVar6[4] = uVar14;
          puVar22[-9] = uStack_168;
          *puVar10 = uStack_170;
          puVar22[-8] = uVar23;
          puVar22[-7] = CONCAT17(uStack_141,uStack_148);
          *(undefined8 *)((long)puVar22 + -0x31) = uVar13;
          puVar9 = (ulong *)0x1;
          *(undefined1 *)((long)puVar22 + -0x29) = uVar3;
          goto LAB_109e0343c;
        }
      }
      else {
LAB_109e03310:
        puVar18 = puVar6 + 5;
        FUN_109e02b54(puVar6,puVar18,puVar6 + 10);
        if (puVar6 + 0xf != puVar9) {
          lVar15 = 0;
          iVar19 = 0;
          puVar10 = puVar6 + 0xf;
          puVar16 = puVar6 + 10;
          do {
            puVar18 = puVar16;
            puVar16 = puVar10;
            puVar10 = puVar16;
            FUN_109e03484();
            if ((int)puVar10 != 0) {
              uStack_168 = puVar16[1];
              uStack_170 = *puVar16;
              uStack_158 = puVar16[3];
              uStack_160 = puVar16[2];
              uStack_150 = puVar16[4];
              puVar16[2] = 0;
              puVar16[3] = 0;
              puVar16[4] = 0;
              lVar4 = lVar15;
              do {
                lVar12 = lVar4;
                *(undefined8 *)((long)puVar6 + lVar12 + 0x80) =
                     *(undefined8 *)((long)puVar6 + lVar12 + 0x58);
                *(undefined8 *)((long)puVar6 + lVar12 + 0x78) =
                     *(undefined8 *)((long)puVar6 + lVar12 + 0x50);
                if (*(char *)((long)puVar6 + lVar12 + 0x9f) < '\0') {
                  __ZdlPv(*(undefined8 *)((long)puVar6 + lVar12 + 0x88));
                }
                *(undefined8 *)((long)puVar6 + lVar12 + 0x90) =
                     *(undefined8 *)((long)puVar6 + lVar12 + 0x68);
                *(undefined8 *)((long)puVar6 + lVar12 + 0x88) =
                     *(undefined8 *)((long)puVar6 + lVar12 + 0x60);
                *(undefined8 *)((long)puVar6 + lVar12 + 0x98) =
                     *(undefined8 *)((long)puVar6 + lVar12 + 0x70);
                *(undefined1 *)((long)puVar6 + lVar12 + 0x77) = 0;
                *(undefined1 *)((long)puVar6 + lVar12 + 0x60) = 0;
                if (lVar12 == -0x50) {
                  puVar6[1] = uStack_168;
                  *puVar6 = uStack_170;
                  goto LAB_109e033ec;
                }
                puVar18 = (ulong *)((long)puVar6 + lVar12 + 0x28);
                uVar23 = 0;
                FUN_109e03484();
                lVar4 = lVar12 + -0x28;
              } while ((uVar23 & 1) != 0);
              *(ulong *)((long)puVar6 + lVar12 + 0x58) = uStack_168;
              *(ulong *)((long)puVar6 + lVar12 + 0x50) = uStack_170;
              if (*(char *)((long)puVar6 + lVar12 + 0x77) < '\0') {
                __ZdlPv(*(undefined8 *)((long)puVar6 + lVar12 + 0x60));
              }
LAB_109e033ec:
              *(ulong *)((long)puVar6 + lVar12 + 0x68) = uStack_158;
              *(ulong *)((long)puVar6 + lVar12 + 0x60) = uStack_160;
              *(ulong *)((long)puVar6 + lVar12 + 0x70) = uStack_150;
              iVar19 = iVar19 + 1;
              if (iVar19 == 8) {
                puVar9 = (ulong *)(ulong)(puVar16 + 5 == puVar9);
                goto LAB_109e0343c;
              }
            }
            lVar15 = lVar15 + 0x28;
            puVar10 = puVar16 + 5;
          } while (puVar16 + 5 != puVar9);
        }
      }
    }
  }
  else if (uVar23 == 3) {
    puVar18 = puVar6 + 5;
    FUN_109e02b54(puVar6,puVar18,puVar22 + -10);
  }
  else {
    if (uVar23 != 4) {
      if (uVar23 == 5) {
        puVar8 = puVar6 + 5;
        puVar21 = puVar6 + 10;
        puVar7 = puVar6 + 0xf;
        unaff_x30 = (code *)0x109e032f8;
        register0x00000008 = (BADSPACEBASE *)&uStack_170;
        param_5 = puVar22 + -10;
        unaff_x19 = puVar6;
        unaff_x20 = puVar9;
        unaff_x21 = puVar11;
        unaff_x22 = puVar17;
        unaff_x23 = puVar18;
        unaff_x24 = puVar10;
        unaff_x25 = puVar20;
        unaff_x26 = puVar22;
SUB_109e02fa0:
        while( true ) {
          *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
          *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined8 ****)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          unaff_x30 = (code *)0x109e02fe4;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
          puVar16 = puVar6;
          puVar18 = puVar8;
          puVar10 = puVar21;
          param_4 = puVar7;
          unaff_x19 = puVar8;
          unaff_x20 = puVar6;
          unaff_x21 = puVar21;
          unaff_x22 = puVar7;
          unaff_x23 = param_5;
FUN_109e02dc8:
          *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
          *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined8 ****)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puVar21 = puVar10;
          puVar7 = param_4;
          FUN_109e02b54();
          puVar6 = param_4;
          puVar8 = puVar10;
          FUN_109e03484();
          if ((int)puVar6 != 0) {
            uVar23 = *puVar10;
            *(ulong *)((long)register0x00000008 + -0x78) = puVar10[1];
            *(ulong *)((long)register0x00000008 + -0x80) = uVar23;
            unaff_x24 = puVar10 + 2;
            uVar23 = *unaff_x24;
            unaff_x23 = puVar10 + 3;
            *(ulong *)((long)register0x00000008 + -0x68) = *unaff_x23;
            *(undefined8 *)((long)register0x00000008 + -0x61) =
                 *(undefined8 *)((long)puVar10 + 0x1f);
            uVar3 = *(undefined1 *)((long)puVar10 + 0x27);
            *unaff_x24 = 0;
            puVar10[4] = 0;
            *unaff_x23 = 0;
            uVar14 = *param_4;
            puVar10[1] = param_4[1];
            *puVar10 = uVar14;
            uVar14 = param_4[4];
            uVar24 = param_4[2];
            puVar10[3] = param_4[3];
            *unaff_x24 = uVar24;
            puVar10[4] = uVar14;
            uVar14 = *(ulong *)((long)register0x00000008 + -0x80);
            param_4[1] = *(ulong *)((long)register0x00000008 + -0x78);
            *param_4 = uVar14;
            uVar14 = *(ulong *)((long)register0x00000008 + -0x68);
            param_4[2] = uVar23;
            param_4[3] = uVar14;
            *(undefined8 *)((long)param_4 + 0x1f) =
                 *(undefined8 *)((long)register0x00000008 + -0x61);
            *(undefined1 *)((long)param_4 + 0x27) = uVar3;
            puVar6 = puVar10;
            puVar8 = puVar18;
            FUN_109e03484();
            if ((int)puVar6 != 0) {
              uVar23 = *puVar18;
              *(ulong *)((long)register0x00000008 + -0x78) = puVar18[1];
              *(ulong *)((long)register0x00000008 + -0x80) = uVar23;
              unaff_x25 = puVar18 + 2;
              uVar23 = *unaff_x25;
              param_4 = puVar18 + 3;
              *(ulong *)((long)register0x00000008 + -0x68) = *param_4;
              *(undefined8 *)((long)register0x00000008 + -0x61) =
                   *(undefined8 *)((long)puVar18 + 0x1f);
              uVar3 = *(undefined1 *)((long)puVar18 + 0x27);
              *unaff_x25 = 0;
              puVar18[4] = 0;
              *param_4 = 0;
              uVar14 = *puVar10;
              puVar18[1] = puVar10[1];
              *puVar18 = uVar14;
              uVar14 = puVar10[4];
              uVar24 = *unaff_x24;
              puVar18[3] = puVar10[3];
              *unaff_x25 = uVar24;
              puVar18[4] = uVar14;
              uVar14 = *(ulong *)((long)register0x00000008 + -0x80);
              puVar10[1] = *(ulong *)((long)register0x00000008 + -0x78);
              *puVar10 = uVar14;
              puVar10[2] = uVar23;
              *unaff_x23 = *(ulong *)((long)register0x00000008 + -0x68);
              *(undefined8 *)((long)puVar10 + 0x1f) =
                   *(undefined8 *)((long)register0x00000008 + -0x61);
              *(undefined1 *)((long)puVar10 + 0x27) = uVar3;
              puVar6 = puVar18;
              puVar8 = puVar16;
              FUN_109e03484();
              if ((int)puVar6 != 0) {
                uVar23 = *puVar16;
                *(ulong *)((long)register0x00000008 + -0x78) = puVar16[1];
                *(ulong *)((long)register0x00000008 + -0x80) = uVar23;
                uVar23 = puVar16[2];
                *(ulong *)((long)register0x00000008 + -0x68) = puVar16[3];
                *(undefined8 *)((long)register0x00000008 + -0x61) =
                     *(undefined8 *)((long)puVar16 + 0x1f);
                uVar3 = *(undefined1 *)((long)puVar16 + 0x27);
                puVar16[3] = 0;
                puVar16[4] = 0;
                puVar16[2] = 0;
                uVar14 = *puVar18;
                puVar16[1] = puVar18[1];
                *puVar16 = uVar14;
                uVar14 = puVar18[4];
                uVar24 = *unaff_x25;
                puVar16[3] = puVar18[3];
                puVar16[2] = uVar24;
                puVar16[4] = uVar14;
                uVar14 = *(ulong *)((long)register0x00000008 + -0x80);
                puVar18[1] = *(ulong *)((long)register0x00000008 + -0x78);
                *puVar18 = uVar14;
                puVar18[2] = uVar23;
                *param_4 = *(ulong *)((long)register0x00000008 + -0x68);
                *(undefined8 *)((long)puVar18 + 0x1f) =
                     *(undefined8 *)((long)register0x00000008 + -0x61);
                *(undefined1 *)((long)puVar18 + 0x27) = uVar3;
              }
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) break;
          unaff_x30 = (code *)0x109e02fa0;
          ___stack_chk_fail();
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
          unaff_x19 = puVar18;
          unaff_x20 = puVar16;
          unaff_x21 = puVar10;
          unaff_x22 = param_4;
        }
        return puVar6;
      }
      goto LAB_109e03310;
    }
    puVar18 = puVar6 + 5;
    func_0x000109e02dc8(puVar6,puVar18,puVar6 + 10,puVar22 + -10);
  }
  puVar9 = (ulong *)0x1;
LAB_109e0343c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return puVar9;
  }
  ___stack_chk_fail();
  bVar5 = *puVar18 <= *puVar9;
  if ((*puVar9 == *puVar18) && (bVar5 = puVar18[1] <= puVar9[1], puVar9[1] == puVar18[1])) {
    puVar9 = puVar9 + 2;
    func_0x000107c2abd4(puVar9,puVar18 + 2);
    return (ulong *)(ulong)((char)puVar9 < '\0');
  }
  return (ulong *)(ulong)!bVar5;
}



/* Entry: 109e02b54; end: 109e02dc7;  */

/* WARNING: Possible PIC construction at 0x000109e032f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e032f8) */

ulong * FUN_109e02b54(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  undefined1 uVar1;
  long lVar2;
  ulong *puVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong *unaff_x23;
  long lVar17;
  int iVar18;
  ulong *unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  undefined1 **ppuVar19;
  ulong uVar20;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puVar9 = param_3;
  FUN_109e03484(param_2,param_1);
  puVar6 = param_3;
  puVar8 = param_2;
  FUN_109e03484();
  if (((ulong)puVar5 & 1) == 0) {
    if ((int)puVar6 != 0) {
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      unaff_x23 = param_2 + 2;
      uVar13 = *unaff_x23;
      puVar5 = param_2 + 3;
      uStack_58 = (undefined7)*puVar5;
      uVar15 = *(undefined8 *)((long)param_2 + 0x1f);
      uStack_51 = (undefined1)uVar15;
      uStack_50 = (undefined7)((ulong)uVar15 >> 8);
      uVar1 = *(undefined1 *)((long)param_2 + 0x27);
      *unaff_x23 = 0;
      param_2[4] = 0;
      *puVar5 = 0;
      uVar16 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar16;
      uVar16 = param_3[4];
      uVar20 = param_3[2];
      param_2[3] = param_3[3];
      *unaff_x23 = uVar20;
      param_2[4] = uVar16;
      param_3[1] = uStack_68;
      *param_3 = uStack_70;
      param_3[2] = uVar13;
      param_3[3] = CONCAT17(uStack_51,uStack_58);
      *(undefined8 *)((long)param_3 + 0x1f) = uVar15;
      *(undefined1 *)((long)param_3 + 0x27) = uVar1;
      puVar6 = param_2;
      puVar8 = param_1;
      FUN_109e03484();
      if ((int)puVar6 != 0) {
        uStack_68 = param_1[1];
        uStack_70 = *param_1;
        uVar13 = param_1[2];
        uStack_58 = (undefined7)param_1[3];
        uVar15 = *(undefined8 *)((long)param_1 + 0x1f);
        uStack_51 = (undefined1)uVar15;
        uStack_50 = (undefined7)((ulong)uVar15 >> 8);
        uVar1 = *(undefined1 *)((long)param_1 + 0x27);
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        uVar16 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar16;
        uVar16 = param_2[4];
        uVar20 = *unaff_x23;
        param_1[3] = param_2[3];
        param_1[2] = uVar20;
        param_1[4] = uVar16;
        param_2[1] = uStack_68;
        *param_2 = uStack_70;
        param_2[2] = uVar13;
        *puVar5 = CONCAT17(uStack_51,uStack_58);
        *(undefined8 *)((long)param_2 + 0x1f) = uVar15;
        *(undefined1 *)((long)param_2 + 0x27) = uVar1;
      }
    }
  }
  else {
    if ((int)puVar6 == 0) {
      uStack_68 = param_1[1];
      uStack_70 = *param_1;
      uVar13 = param_1[2];
      uStack_58 = (undefined7)param_1[3];
      uVar15 = *(undefined8 *)((long)param_1 + 0x1f);
      uStack_51 = (undefined1)uVar15;
      uStack_50 = (undefined7)((ulong)uVar15 >> 8);
      uVar1 = *(undefined1 *)((long)param_1 + 0x27);
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[2] = 0;
      uVar16 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar16;
      uVar16 = param_2[4];
      uVar20 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar20;
      param_1[4] = uVar16;
      param_2[1] = uStack_68;
      *param_2 = uStack_70;
      param_2[2] = uVar13;
      param_2[3] = CONCAT17(uStack_51,uStack_58);
      *(undefined8 *)((long)param_2 + 0x1f) = uVar15;
      *(undefined1 *)((long)param_2 + 0x27) = uVar1;
      puVar6 = param_3;
      puVar8 = param_2;
      FUN_109e03484();
      if ((int)puVar6 == 0) goto LAB_109e02d94;
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      uVar13 = param_2[2];
      uStack_58 = (undefined7)param_2[3];
      uStack_51 = (undefined1)*(undefined8 *)((long)param_2 + 0x1f);
      uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x1f) >> 8);
      uVar1 = *(undefined1 *)((long)param_2 + 0x27);
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[2] = 0;
      uVar16 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar16;
      uVar16 = param_3[4];
      uVar20 = param_3[2];
      param_2[3] = param_3[3];
      param_2[2] = uVar20;
      param_2[4] = uVar16;
    }
    else {
      uStack_68 = param_1[1];
      uStack_70 = *param_1;
      uVar13 = param_1[2];
      uStack_58 = (undefined7)param_1[3];
      uStack_51 = (undefined1)*(undefined8 *)((long)param_1 + 0x1f);
      uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x1f) >> 8);
      uVar1 = *(undefined1 *)((long)param_1 + 0x27);
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[2] = 0;
      uVar16 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar16;
      uVar16 = param_3[4];
      uVar20 = param_3[2];
      param_1[3] = param_3[3];
      param_1[2] = uVar20;
      param_1[4] = uVar16;
    }
    param_3[1] = uStack_68;
    *param_3 = uStack_70;
    param_3[2] = uVar13;
    param_3[3] = CONCAT17(uStack_51,uStack_58);
    *(ulong *)((long)param_3 + 0x1f) = CONCAT71(uStack_50,uStack_51);
    *(undefined1 *)((long)param_3 + 0x27) = uVar1;
  }
LAB_109e02d94:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_109e02dc8;
  ppuVar19 = &puStack_80;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar12 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109e02b54();
  puVar7 = param_4;
  puVar5 = puVar9;
  FUN_109e03484();
  if ((int)puVar7 != 0) {
    uStack_e8 = puVar9[1];
    uStack_f0 = *puVar9;
    unaff_x24 = puVar9 + 2;
    uVar13 = *unaff_x24;
    unaff_x23 = puVar9 + 3;
    uStack_d8 = (undefined7)*unaff_x23;
    uVar15 = *(undefined8 *)((long)puVar9 + 0x1f);
    uStack_d1 = (undefined1)uVar15;
    uStack_d0 = (undefined7)((ulong)uVar15 >> 8);
    uVar1 = *(undefined1 *)((long)puVar9 + 0x27);
    *unaff_x24 = 0;
    puVar9[4] = 0;
    *unaff_x23 = 0;
    uVar16 = *param_4;
    puVar9[1] = param_4[1];
    *puVar9 = uVar16;
    uVar16 = param_4[4];
    uVar20 = param_4[2];
    puVar9[3] = param_4[3];
    *unaff_x24 = uVar20;
    puVar9[4] = uVar16;
    param_4[1] = uStack_e8;
    *param_4 = uStack_f0;
    param_4[2] = uVar13;
    param_4[3] = CONCAT17(uStack_d1,uStack_d8);
    *(undefined8 *)((long)param_4 + 0x1f) = uVar15;
    *(undefined1 *)((long)param_4 + 0x27) = uVar1;
    puVar7 = puVar9;
    puVar5 = puVar8;
    FUN_109e03484();
    if ((int)puVar7 != 0) {
      uStack_e8 = puVar8[1];
      uStack_f0 = *puVar8;
      unaff_x25 = puVar8 + 2;
      uVar13 = *unaff_x25;
      param_4 = puVar8 + 3;
      uStack_d8 = (undefined7)*param_4;
      uVar15 = *(undefined8 *)((long)puVar8 + 0x1f);
      uStack_d1 = (undefined1)uVar15;
      uStack_d0 = (undefined7)((ulong)uVar15 >> 8);
      uVar1 = *(undefined1 *)((long)puVar8 + 0x27);
      *unaff_x25 = 0;
      puVar8[4] = 0;
      *param_4 = 0;
      uVar16 = *puVar9;
      puVar8[1] = puVar9[1];
      *puVar8 = uVar16;
      uVar16 = puVar9[4];
      uVar20 = *unaff_x24;
      puVar8[3] = puVar9[3];
      *unaff_x25 = uVar20;
      puVar8[4] = uVar16;
      puVar9[1] = uStack_e8;
      *puVar9 = uStack_f0;
      puVar9[2] = uVar13;
      *unaff_x23 = CONCAT17(uStack_d1,uStack_d8);
      *(undefined8 *)((long)puVar9 + 0x1f) = uVar15;
      *(undefined1 *)((long)puVar9 + 0x27) = uVar1;
      puVar7 = puVar8;
      puVar5 = puVar6;
      FUN_109e03484();
      if ((int)puVar7 != 0) {
        uStack_e8 = puVar6[1];
        uStack_f0 = *puVar6;
        uVar13 = puVar6[2];
        uStack_d8 = (undefined7)puVar6[3];
        uVar15 = *(undefined8 *)((long)puVar6 + 0x1f);
        uStack_d1 = (undefined1)uVar15;
        uStack_d0 = (undefined7)((ulong)uVar15 >> 8);
        uVar1 = *(undefined1 *)((long)puVar6 + 0x27);
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[2] = 0;
        uVar16 = *puVar8;
        puVar6[1] = puVar8[1];
        *puVar6 = uVar16;
        uVar16 = puVar8[4];
        uVar20 = *unaff_x25;
        puVar6[3] = puVar8[3];
        puVar6[2] = uVar20;
        puVar6[4] = uVar16;
        puVar8[1] = uStack_e8;
        *puVar8 = uStack_f0;
        puVar8[2] = uVar13;
        *param_4 = CONCAT17(uStack_d1,uStack_d8);
        *(undefined8 *)((long)puVar8 + 0x1f) = uVar15;
        *(undefined1 *)((long)puVar8 + 0x27) = uVar1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar7;
  }
  uVar15 = 0x109e02fa0;
  ___stack_chk_fail();
  puVar3 = &uStack_f0;
  while( true ) {
    puVar11 = puVar10;
    *(ulong **)((long)puVar3 + -0x50) = unaff_x26;
    *(ulong **)((long)puVar3 + -0x48) = unaff_x25;
    *(ulong **)((long)puVar3 + -0x40) = unaff_x24;
    *(ulong **)((long)puVar3 + -0x38) = unaff_x23;
    *(ulong **)((long)puVar3 + -0x30) = param_4;
    *(ulong **)((long)puVar3 + -0x28) = puVar9;
    *(ulong **)((long)puVar3 + -0x20) = puVar6;
    *(ulong **)((long)puVar3 + -0x18) = puVar8;
    *(undefined1 ***)((long)puVar3 + -0x10) = ppuVar19;
    *(undefined8 *)((long)puVar3 + -8) = uVar15;
    *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_109e02dc8();
    puVar8 = param_5;
    puVar6 = puVar12;
    FUN_109e03484();
    param_4 = puVar12;
    unaff_x23 = param_5;
    if ((int)puVar8 != 0) {
      uVar13 = *puVar12;
      *(ulong *)((long)puVar3 + -0x78) = puVar12[1];
      *(ulong *)((long)puVar3 + -0x80) = uVar13;
      unaff_x25 = puVar12 + 2;
      uVar13 = *unaff_x25;
      unaff_x24 = puVar12 + 3;
      *(ulong *)((long)puVar3 + -0x68) = *unaff_x24;
      *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar12 + 0x1f);
      uVar1 = *(undefined1 *)((long)puVar12 + 0x27);
      *unaff_x25 = 0;
      puVar12[4] = 0;
      *unaff_x24 = 0;
      uVar16 = *param_5;
      puVar12[1] = param_5[1];
      *puVar12 = uVar16;
      uVar16 = param_5[4];
      uVar20 = param_5[2];
      puVar12[3] = param_5[3];
      *unaff_x25 = uVar20;
      puVar12[4] = uVar16;
      uVar16 = *(ulong *)((long)puVar3 + -0x80);
      param_5[1] = *(ulong *)((long)puVar3 + -0x78);
      *param_5 = uVar16;
      uVar16 = *(ulong *)((long)puVar3 + -0x68);
      param_5[2] = uVar13;
      param_5[3] = uVar16;
      *(undefined8 *)((long)param_5 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
      *(undefined1 *)((long)param_5 + 0x27) = uVar1;
      puVar8 = puVar12;
      puVar6 = puVar11;
      FUN_109e03484();
      if ((int)puVar8 != 0) {
        uVar13 = *puVar11;
        *(ulong *)((long)puVar3 + -0x78) = puVar11[1];
        *(ulong *)((long)puVar3 + -0x80) = uVar13;
        unaff_x26 = puVar11 + 2;
        uVar13 = *unaff_x26;
        unaff_x23 = puVar11 + 3;
        *(ulong *)((long)puVar3 + -0x68) = *unaff_x23;
        *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar11 + 0x1f);
        uVar1 = *(undefined1 *)((long)puVar11 + 0x27);
        *unaff_x26 = 0;
        puVar11[4] = 0;
        *unaff_x23 = 0;
        uVar16 = *puVar12;
        puVar11[1] = puVar12[1];
        *puVar11 = uVar16;
        uVar16 = puVar12[4];
        uVar20 = *unaff_x25;
        puVar11[3] = puVar12[3];
        *unaff_x26 = uVar20;
        puVar11[4] = uVar16;
        uVar16 = *(ulong *)((long)puVar3 + -0x80);
        puVar12[1] = *(ulong *)((long)puVar3 + -0x78);
        *puVar12 = uVar16;
        puVar12[2] = uVar13;
        *unaff_x24 = *(ulong *)((long)puVar3 + -0x68);
        *(undefined8 *)((long)puVar12 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
        *(undefined1 *)((long)puVar12 + 0x27) = uVar1;
        puVar8 = puVar11;
        puVar6 = puVar5;
        FUN_109e03484();
        if ((int)puVar8 != 0) {
          uVar13 = *puVar5;
          *(ulong *)((long)puVar3 + -0x78) = puVar5[1];
          *(ulong *)((long)puVar3 + -0x80) = uVar13;
          unaff_x24 = puVar5 + 2;
          uVar13 = *unaff_x24;
          param_4 = puVar5 + 3;
          *(ulong *)((long)puVar3 + -0x68) = *param_4;
          *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar5 + 0x1f);
          uVar1 = *(undefined1 *)((long)puVar5 + 0x27);
          *unaff_x24 = 0;
          puVar5[4] = 0;
          *param_4 = 0;
          uVar16 = *puVar11;
          puVar5[1] = puVar11[1];
          *puVar5 = uVar16;
          uVar16 = puVar11[4];
          uVar20 = *unaff_x26;
          puVar5[3] = puVar11[3];
          *unaff_x24 = uVar20;
          puVar5[4] = uVar16;
          uVar16 = *(ulong *)((long)puVar3 + -0x80);
          puVar11[1] = *(ulong *)((long)puVar3 + -0x78);
          *puVar11 = uVar16;
          puVar11[2] = uVar13;
          *unaff_x23 = *(ulong *)((long)puVar3 + -0x68);
          *(undefined8 *)((long)puVar11 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
          *(undefined1 *)((long)puVar11 + 0x27) = uVar1;
          puVar8 = puVar5;
          puVar6 = puVar7;
          FUN_109e03484();
          if ((int)puVar8 != 0) {
            uVar13 = *puVar7;
            *(ulong *)((long)puVar3 + -0x78) = puVar7[1];
            *(ulong *)((long)puVar3 + -0x80) = uVar13;
            uVar13 = puVar7[2];
            *(ulong *)((long)puVar3 + -0x68) = puVar7[3];
            *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar7 + 0x1f);
            uVar1 = *(undefined1 *)((long)puVar7 + 0x27);
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[2] = 0;
            uVar16 = *puVar5;
            puVar7[1] = puVar5[1];
            *puVar7 = uVar16;
            uVar16 = puVar5[4];
            uVar20 = *unaff_x24;
            puVar7[3] = puVar5[3];
            puVar7[2] = uVar20;
            puVar7[4] = uVar16;
            uVar16 = *(ulong *)((long)puVar3 + -0x80);
            puVar5[1] = *(ulong *)((long)puVar3 + -0x78);
            *puVar5 = uVar16;
            puVar5[2] = uVar13;
            *param_4 = *(ulong *)((long)puVar3 + -0x68);
            *(undefined8 *)((long)puVar5 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
            *(undefined1 *)((long)puVar5 + 0x27) = uVar1;
          }
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar3 + -0x58)) {
      return puVar8;
    }
    ___stack_chk_fail();
    *(ulong **)((long)puVar3 + -0xd0) = unaff_x26;
    *(ulong **)((long)puVar3 + -200) = unaff_x25;
    *(ulong **)((long)puVar3 + -0xc0) = unaff_x24;
    *(ulong **)((long)puVar3 + -0xb8) = unaff_x23;
    *(ulong **)((long)puVar3 + -0xb0) = param_4;
    *(ulong **)((long)puVar3 + -0xa8) = puVar11;
    *(ulong **)((long)puVar3 + -0xa0) = puVar7;
    *(ulong **)((long)puVar3 + -0x98) = puVar5;
    *(undefined1 **)((long)puVar3 + -0x90) = (undefined1 *)((long)puVar3 + -0x10);
    *(undefined8 *)((long)puVar3 + -0x88) = 0x109e031f8;
    ppuVar19 = (undefined1 **)((long)puVar3 + -0x90);
    *(undefined8 *)((long)puVar3 + -0xd8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar13 = ((long)puVar6 - (long)puVar8 >> 3) * -0x3333333333333333;
    if ((long)uVar13 < 3) break;
    if (uVar13 == 3) {
      puVar5 = puVar8 + 5;
      FUN_109e02b54(puVar8,puVar5,puVar6 + -5);
      goto LAB_109e03438;
    }
    if (uVar13 == 4) {
      puVar5 = puVar8 + 5;
      FUN_109e02dc8(puVar8,puVar5,puVar8 + 10,puVar6 + -5);
      goto LAB_109e03438;
    }
    if (uVar13 != 5) goto LAB_109e03310;
    param_5 = puVar6 + -5;
    puVar5 = puVar8 + 5;
    puVar12 = puVar8 + 0xf;
    uVar15 = 0x109e032f8;
    puVar3 = (ulong *)((long)puVar3 + -0x110);
    puVar7 = puVar8;
    puVar10 = puVar8 + 10;
    puVar9 = puVar11;
  }
  puVar5 = puVar6;
  if (uVar13 < 2) goto LAB_109e03438;
  if (uVar13 == 2) {
    puVar12 = puVar6 + -5;
    puVar9 = puVar12;
    puVar5 = puVar8;
    FUN_109e03484();
    if ((int)puVar9 == 0) goto LAB_109e03438;
    uVar13 = *puVar8;
    *(ulong *)((long)puVar3 + -0x108) = puVar8[1];
    *(ulong *)((long)puVar3 + -0x110) = uVar13;
    uVar13 = puVar8[2];
    *(ulong *)((long)puVar3 + -0xe8) = puVar8[3];
    *(undefined8 *)((long)puVar3 + -0xe1) = *(undefined8 *)((long)puVar8 + 0x1f);
    uVar1 = *(undefined1 *)((long)puVar8 + 0x27);
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[2] = 0;
    uVar16 = *puVar12;
    puVar8[1] = puVar6[-4];
    *puVar8 = uVar16;
    uVar16 = puVar6[-1];
    uVar20 = puVar6[-3];
    puVar8[3] = puVar6[-2];
    puVar8[2] = uVar20;
    puVar8[4] = uVar16;
    uVar16 = *(ulong *)((long)puVar3 + -0x110);
    puVar6[-4] = *(ulong *)((long)puVar3 + -0x108);
    *puVar12 = uVar16;
    uVar16 = *(ulong *)((long)puVar3 + -0xe8);
    puVar6[-3] = uVar13;
    puVar6[-2] = uVar16;
    *(undefined8 *)((long)puVar6 + -9) = *(undefined8 *)((long)puVar3 + -0xe1);
    puVar8 = (ulong *)0x1;
    *(undefined1 *)((long)puVar6 + -1) = uVar1;
    goto LAB_109e0343c;
  }
LAB_109e03310:
  puVar5 = puVar8 + 5;
  FUN_109e02b54(puVar8,puVar5,puVar8 + 10);
  if (puVar8 + 0xf != puVar6) {
    lVar17 = 0;
    iVar18 = 0;
    puVar9 = puVar8 + 0xf;
    puVar12 = puVar8 + 10;
    do {
      puVar5 = puVar12;
      puVar12 = puVar9;
      puVar9 = puVar12;
      FUN_109e03484();
      if ((int)puVar9 != 0) {
        uVar13 = *puVar12;
        uVar20 = puVar12[3];
        uVar16 = puVar12[2];
        *(ulong *)((long)puVar3 + -0x108) = puVar12[1];
        *(ulong *)((long)puVar3 + -0x110) = uVar13;
        *(ulong *)((long)puVar3 + -0xf8) = uVar20;
        *(ulong *)((long)puVar3 + -0x100) = uVar16;
        *(ulong *)((long)puVar3 + -0xf0) = puVar12[4];
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        lVar2 = lVar17;
        do {
          lVar14 = lVar2;
          *(undefined8 *)((long)puVar8 + lVar14 + 0x80) =
               *(undefined8 *)((long)puVar8 + lVar14 + 0x58);
          *(undefined8 *)((long)puVar8 + lVar14 + 0x78) =
               *(undefined8 *)((long)puVar8 + lVar14 + 0x50);
          if (*(char *)((long)puVar8 + lVar14 + 0x9f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)puVar8 + lVar14 + 0x88));
          }
          *(undefined8 *)((long)puVar8 + lVar14 + 0x90) =
               *(undefined8 *)((long)puVar8 + lVar14 + 0x68);
          *(undefined8 *)((long)puVar8 + lVar14 + 0x88) =
               *(undefined8 *)((long)puVar8 + lVar14 + 0x60);
          *(undefined8 *)((long)puVar8 + lVar14 + 0x98) =
               *(undefined8 *)((long)puVar8 + lVar14 + 0x70);
          *(undefined1 *)((long)puVar8 + lVar14 + 0x77) = 0;
          *(undefined1 *)((long)puVar8 + lVar14 + 0x60) = 0;
          if (lVar14 == -0x50) {
            uVar13 = *(ulong *)((long)puVar3 + -0x110);
            puVar8[1] = *(ulong *)((long)puVar3 + -0x108);
            *puVar8 = uVar13;
            goto LAB_109e033ec;
          }
          puVar5 = (ulong *)((long)puVar8 + lVar14 + 0x28);
          uVar13 = 0;
          FUN_109e03484();
          lVar2 = lVar14 + -0x28;
        } while ((uVar13 & 1) != 0);
        uVar15 = *(undefined8 *)((long)puVar3 + -0x110);
        *(undefined8 *)((long)puVar8 + lVar14 + 0x58) = *(undefined8 *)((long)puVar3 + -0x108);
        *(undefined8 *)((long)puVar8 + lVar14 + 0x50) = uVar15;
        if (*(char *)((long)puVar8 + lVar14 + 0x77) < '\0') {
          __ZdlPv(*(undefined8 *)((long)puVar8 + lVar14 + 0x60));
        }
LAB_109e033ec:
        uVar15 = *(undefined8 *)((long)puVar3 + -0x100);
        *(undefined8 *)((long)puVar8 + lVar14 + 0x68) = *(undefined8 *)((long)puVar3 + -0xf8);
        *(undefined8 *)((long)puVar8 + lVar14 + 0x60) = uVar15;
        *(undefined8 *)((long)puVar8 + lVar14 + 0x70) = *(undefined8 *)((long)puVar3 + -0xf0);
        iVar18 = iVar18 + 1;
        if (iVar18 == 8) {
          puVar8 = (ulong *)(ulong)(puVar12 + 5 == puVar6);
          goto LAB_109e0343c;
        }
      }
      lVar17 = lVar17 + 0x28;
      puVar9 = puVar12 + 5;
    } while (puVar12 + 5 != puVar6);
  }
LAB_109e03438:
  puVar8 = (ulong *)0x1;
LAB_109e0343c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar3 + -0xd8)) {
    return puVar8;
  }
  ___stack_chk_fail();
  bVar4 = *puVar5 <= *puVar8;
  if ((*puVar8 == *puVar5) && (bVar4 = puVar5[1] <= puVar8[1], puVar8[1] == puVar5[1])) {
    *(undefined1 ***)((long)puVar3 + -0x120) = ppuVar19;
    *(code **)((long)puVar3 + -0x118) = FUN_109e03484;
    puVar8 = puVar8 + 2;
    func_0x000107c2abd4(puVar8,puVar5 + 2);
    return (ulong *)(ulong)((char)puVar8 < '\0');
  }
  return (ulong *)(ulong)!bVar4;
}



/* Entry: 109e02dc8; end: 109e03483;  */

/* WARNING: Possible PIC construction at 0x000109e032f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e032f8) */

ulong * FUN_109e02dc8(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  undefined1 uVar1;
  long lVar2;
  ulong *puVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong *unaff_x23;
  long lVar14;
  int iVar15;
  ulong *unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uStack_80;
  ulong uStack_78;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long lStack_58;
  
  puVar16 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar6 = param_4;
  FUN_109e02b54();
  puVar5 = param_4;
  puVar7 = param_3;
  FUN_109e03484();
  if ((int)puVar5 != 0) {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    unaff_x24 = param_3 + 2;
    uVar10 = *unaff_x24;
    unaff_x23 = param_3 + 3;
    uStack_68 = (undefined7)*unaff_x23;
    uVar12 = *(undefined8 *)((long)param_3 + 0x1f);
    uStack_61 = (undefined1)uVar12;
    uStack_60 = (undefined7)((ulong)uVar12 >> 8);
    uVar1 = *(undefined1 *)((long)param_3 + 0x27);
    *unaff_x24 = 0;
    param_3[4] = 0;
    *unaff_x23 = 0;
    uVar13 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar13;
    uVar13 = param_4[4];
    uVar17 = param_4[2];
    param_3[3] = param_4[3];
    *unaff_x24 = uVar17;
    param_3[4] = uVar13;
    param_4[1] = uStack_78;
    *param_4 = uStack_80;
    param_4[2] = uVar10;
    param_4[3] = CONCAT17(uStack_61,uStack_68);
    *(undefined8 *)((long)param_4 + 0x1f) = uVar12;
    *(undefined1 *)((long)param_4 + 0x27) = uVar1;
    puVar5 = param_3;
    puVar7 = param_2;
    FUN_109e03484();
    if ((int)puVar5 != 0) {
      uStack_78 = param_2[1];
      uStack_80 = *param_2;
      unaff_x25 = param_2 + 2;
      uVar10 = *unaff_x25;
      param_4 = param_2 + 3;
      uStack_68 = (undefined7)*param_4;
      uVar12 = *(undefined8 *)((long)param_2 + 0x1f);
      uStack_61 = (undefined1)uVar12;
      uStack_60 = (undefined7)((ulong)uVar12 >> 8);
      uVar1 = *(undefined1 *)((long)param_2 + 0x27);
      *unaff_x25 = 0;
      param_2[4] = 0;
      *param_4 = 0;
      uVar13 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar13;
      uVar13 = param_3[4];
      uVar17 = *unaff_x24;
      param_2[3] = param_3[3];
      *unaff_x25 = uVar17;
      param_2[4] = uVar13;
      param_3[1] = uStack_78;
      *param_3 = uStack_80;
      param_3[2] = uVar10;
      *unaff_x23 = CONCAT17(uStack_61,uStack_68);
      *(undefined8 *)((long)param_3 + 0x1f) = uVar12;
      *(undefined1 *)((long)param_3 + 0x27) = uVar1;
      puVar5 = param_2;
      puVar7 = param_1;
      FUN_109e03484();
      if ((int)puVar5 != 0) {
        uStack_78 = param_1[1];
        uStack_80 = *param_1;
        uVar10 = param_1[2];
        uStack_68 = (undefined7)param_1[3];
        uVar12 = *(undefined8 *)((long)param_1 + 0x1f);
        uStack_61 = (undefined1)uVar12;
        uStack_60 = (undefined7)((ulong)uVar12 >> 8);
        uVar1 = *(undefined1 *)((long)param_1 + 0x27);
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        uVar13 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar13;
        uVar13 = param_2[4];
        uVar17 = *unaff_x25;
        param_1[3] = param_2[3];
        param_1[2] = uVar17;
        param_1[4] = uVar13;
        param_2[1] = uStack_78;
        *param_2 = uStack_80;
        param_2[2] = uVar10;
        *param_4 = CONCAT17(uStack_61,uStack_68);
        *(undefined8 *)((long)param_2 + 0x1f) = uVar12;
        *(undefined1 *)((long)param_2 + 0x27) = uVar1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  uVar12 = 0x109e02fa0;
  ___stack_chk_fail();
  puVar3 = &uStack_80;
  while( true ) {
    puVar9 = puVar8;
    *(ulong **)((long)puVar3 + -0x50) = unaff_x26;
    *(ulong **)((long)puVar3 + -0x48) = unaff_x25;
    *(ulong **)((long)puVar3 + -0x40) = unaff_x24;
    *(ulong **)((long)puVar3 + -0x38) = unaff_x23;
    *(ulong **)((long)puVar3 + -0x30) = param_4;
    *(ulong **)((long)puVar3 + -0x28) = param_3;
    *(ulong **)((long)puVar3 + -0x20) = param_1;
    *(ulong **)((long)puVar3 + -0x18) = param_2;
    *(undefined1 **)((long)puVar3 + -0x10) = puVar16;
    *(undefined8 *)((long)puVar3 + -8) = uVar12;
    *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_109e02dc8();
    param_2 = param_5;
    param_1 = puVar6;
    FUN_109e03484();
    param_4 = puVar6;
    unaff_x23 = param_5;
    if ((int)param_2 != 0) {
      uVar10 = *puVar6;
      *(ulong *)((long)puVar3 + -0x78) = puVar6[1];
      *(ulong *)((long)puVar3 + -0x80) = uVar10;
      unaff_x25 = puVar6 + 2;
      uVar10 = *unaff_x25;
      unaff_x24 = puVar6 + 3;
      *(ulong *)((long)puVar3 + -0x68) = *unaff_x24;
      *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar6 + 0x1f);
      uVar1 = *(undefined1 *)((long)puVar6 + 0x27);
      *unaff_x25 = 0;
      puVar6[4] = 0;
      *unaff_x24 = 0;
      uVar13 = *param_5;
      puVar6[1] = param_5[1];
      *puVar6 = uVar13;
      uVar13 = param_5[4];
      uVar17 = param_5[2];
      puVar6[3] = param_5[3];
      *unaff_x25 = uVar17;
      puVar6[4] = uVar13;
      uVar13 = *(ulong *)((long)puVar3 + -0x80);
      param_5[1] = *(ulong *)((long)puVar3 + -0x78);
      *param_5 = uVar13;
      uVar13 = *(ulong *)((long)puVar3 + -0x68);
      param_5[2] = uVar10;
      param_5[3] = uVar13;
      *(undefined8 *)((long)param_5 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
      *(undefined1 *)((long)param_5 + 0x27) = uVar1;
      param_2 = puVar6;
      param_1 = puVar9;
      FUN_109e03484();
      if ((int)param_2 != 0) {
        uVar10 = *puVar9;
        *(ulong *)((long)puVar3 + -0x78) = puVar9[1];
        *(ulong *)((long)puVar3 + -0x80) = uVar10;
        unaff_x26 = puVar9 + 2;
        uVar10 = *unaff_x26;
        unaff_x23 = puVar9 + 3;
        *(ulong *)((long)puVar3 + -0x68) = *unaff_x23;
        *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar9 + 0x1f);
        uVar1 = *(undefined1 *)((long)puVar9 + 0x27);
        *unaff_x26 = 0;
        puVar9[4] = 0;
        *unaff_x23 = 0;
        uVar13 = *puVar6;
        puVar9[1] = puVar6[1];
        *puVar9 = uVar13;
        uVar13 = puVar6[4];
        uVar17 = *unaff_x25;
        puVar9[3] = puVar6[3];
        *unaff_x26 = uVar17;
        puVar9[4] = uVar13;
        uVar13 = *(ulong *)((long)puVar3 + -0x80);
        puVar6[1] = *(ulong *)((long)puVar3 + -0x78);
        *puVar6 = uVar13;
        puVar6[2] = uVar10;
        *unaff_x24 = *(ulong *)((long)puVar3 + -0x68);
        *(undefined8 *)((long)puVar6 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
        *(undefined1 *)((long)puVar6 + 0x27) = uVar1;
        param_2 = puVar9;
        param_1 = puVar7;
        FUN_109e03484();
        if ((int)param_2 != 0) {
          uVar10 = *puVar7;
          *(ulong *)((long)puVar3 + -0x78) = puVar7[1];
          *(ulong *)((long)puVar3 + -0x80) = uVar10;
          unaff_x24 = puVar7 + 2;
          uVar10 = *unaff_x24;
          param_4 = puVar7 + 3;
          *(ulong *)((long)puVar3 + -0x68) = *param_4;
          *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar7 + 0x1f);
          uVar1 = *(undefined1 *)((long)puVar7 + 0x27);
          *unaff_x24 = 0;
          puVar7[4] = 0;
          *param_4 = 0;
          uVar13 = *puVar9;
          puVar7[1] = puVar9[1];
          *puVar7 = uVar13;
          uVar13 = puVar9[4];
          uVar17 = *unaff_x26;
          puVar7[3] = puVar9[3];
          *unaff_x24 = uVar17;
          puVar7[4] = uVar13;
          uVar13 = *(ulong *)((long)puVar3 + -0x80);
          puVar9[1] = *(ulong *)((long)puVar3 + -0x78);
          *puVar9 = uVar13;
          puVar9[2] = uVar10;
          *unaff_x23 = *(ulong *)((long)puVar3 + -0x68);
          *(undefined8 *)((long)puVar9 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
          *(undefined1 *)((long)puVar9 + 0x27) = uVar1;
          param_2 = puVar7;
          param_1 = puVar5;
          FUN_109e03484();
          if ((int)param_2 != 0) {
            uVar10 = *puVar5;
            *(ulong *)((long)puVar3 + -0x78) = puVar5[1];
            *(ulong *)((long)puVar3 + -0x80) = uVar10;
            uVar10 = puVar5[2];
            *(ulong *)((long)puVar3 + -0x68) = puVar5[3];
            *(undefined8 *)((long)puVar3 + -0x61) = *(undefined8 *)((long)puVar5 + 0x1f);
            uVar1 = *(undefined1 *)((long)puVar5 + 0x27);
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[2] = 0;
            uVar13 = *puVar7;
            puVar5[1] = puVar7[1];
            *puVar5 = uVar13;
            uVar13 = puVar7[4];
            uVar17 = *unaff_x24;
            puVar5[3] = puVar7[3];
            puVar5[2] = uVar17;
            puVar5[4] = uVar13;
            uVar13 = *(ulong *)((long)puVar3 + -0x80);
            puVar7[1] = *(ulong *)((long)puVar3 + -0x78);
            *puVar7 = uVar13;
            puVar7[2] = uVar10;
            *param_4 = *(ulong *)((long)puVar3 + -0x68);
            *(undefined8 *)((long)puVar7 + 0x1f) = *(undefined8 *)((long)puVar3 + -0x61);
            *(undefined1 *)((long)puVar7 + 0x27) = uVar1;
          }
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar3 + -0x58)) {
      return param_2;
    }
    ___stack_chk_fail();
    *(ulong **)((long)puVar3 + -0xd0) = unaff_x26;
    *(ulong **)((long)puVar3 + -200) = unaff_x25;
    *(ulong **)((long)puVar3 + -0xc0) = unaff_x24;
    *(ulong **)((long)puVar3 + -0xb8) = unaff_x23;
    *(ulong **)((long)puVar3 + -0xb0) = param_4;
    *(ulong **)((long)puVar3 + -0xa8) = puVar9;
    *(ulong **)((long)puVar3 + -0xa0) = puVar5;
    *(ulong **)((long)puVar3 + -0x98) = puVar7;
    *(undefined1 **)((long)puVar3 + -0x90) = (undefined1 *)((long)puVar3 + -0x10);
    *(undefined8 *)((long)puVar3 + -0x88) = 0x109e031f8;
    puVar16 = (undefined1 *)((long)puVar3 + -0x90);
    *(undefined8 *)((long)puVar3 + -0xd8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = ((long)param_1 - (long)param_2 >> 3) * -0x3333333333333333;
    if ((long)uVar10 < 3) break;
    if (uVar10 == 3) {
      puVar7 = param_2 + 5;
      FUN_109e02b54(param_2,puVar7,param_1 + -5);
      goto LAB_109e03438;
    }
    if (uVar10 == 4) {
      puVar7 = param_2 + 5;
      FUN_109e02dc8(param_2,puVar7,param_2 + 10,param_1 + -5);
      goto LAB_109e03438;
    }
    if (uVar10 != 5) goto LAB_109e03310;
    param_5 = param_1 + -5;
    puVar7 = param_2 + 5;
    puVar6 = param_2 + 0xf;
    uVar12 = 0x109e032f8;
    puVar3 = (ulong *)((long)puVar3 + -0x110);
    puVar5 = param_2;
    puVar8 = param_2 + 10;
    param_3 = puVar9;
  }
  puVar7 = param_1;
  if (uVar10 < 2) goto LAB_109e03438;
  if (uVar10 == 2) {
    puVar5 = param_1 + -5;
    puVar6 = puVar5;
    puVar7 = param_2;
    FUN_109e03484();
    if ((int)puVar6 == 0) goto LAB_109e03438;
    uVar10 = *param_2;
    *(ulong *)((long)puVar3 + -0x108) = param_2[1];
    *(ulong *)((long)puVar3 + -0x110) = uVar10;
    uVar10 = param_2[2];
    *(ulong *)((long)puVar3 + -0xe8) = param_2[3];
    *(undefined8 *)((long)puVar3 + -0xe1) = *(undefined8 *)((long)param_2 + 0x1f);
    uVar1 = *(undefined1 *)((long)param_2 + 0x27);
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    uVar13 = *puVar5;
    param_2[1] = param_1[-4];
    *param_2 = uVar13;
    uVar13 = param_1[-1];
    uVar17 = param_1[-3];
    param_2[3] = param_1[-2];
    param_2[2] = uVar17;
    param_2[4] = uVar13;
    uVar13 = *(ulong *)((long)puVar3 + -0x110);
    param_1[-4] = *(ulong *)((long)puVar3 + -0x108);
    *puVar5 = uVar13;
    uVar13 = *(ulong *)((long)puVar3 + -0xe8);
    param_1[-3] = uVar10;
    param_1[-2] = uVar13;
    *(undefined8 *)((long)param_1 + -9) = *(undefined8 *)((long)puVar3 + -0xe1);
    puVar6 = (ulong *)0x1;
    *(undefined1 *)((long)param_1 + -1) = uVar1;
    goto LAB_109e0343c;
  }
LAB_109e03310:
  puVar7 = param_2 + 5;
  FUN_109e02b54(param_2,puVar7,param_2 + 10);
  if (param_2 + 0xf != param_1) {
    lVar14 = 0;
    iVar15 = 0;
    puVar6 = param_2 + 0xf;
    puVar5 = param_2 + 10;
    do {
      puVar7 = puVar5;
      puVar5 = puVar6;
      puVar6 = puVar5;
      FUN_109e03484();
      if ((int)puVar6 != 0) {
        uVar10 = *puVar5;
        uVar17 = puVar5[3];
        uVar13 = puVar5[2];
        *(ulong *)((long)puVar3 + -0x108) = puVar5[1];
        *(ulong *)((long)puVar3 + -0x110) = uVar10;
        *(ulong *)((long)puVar3 + -0xf8) = uVar17;
        *(ulong *)((long)puVar3 + -0x100) = uVar13;
        *(ulong *)((long)puVar3 + -0xf0) = puVar5[4];
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        lVar2 = lVar14;
        do {
          lVar11 = lVar2;
          *(undefined8 *)((long)param_2 + lVar11 + 0x80) =
               *(undefined8 *)((long)param_2 + lVar11 + 0x58);
          *(undefined8 *)((long)param_2 + lVar11 + 0x78) =
               *(undefined8 *)((long)param_2 + lVar11 + 0x50);
          if (*(char *)((long)param_2 + lVar11 + 0x9f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_2 + lVar11 + 0x88));
          }
          *(undefined8 *)((long)param_2 + lVar11 + 0x90) =
               *(undefined8 *)((long)param_2 + lVar11 + 0x68);
          *(undefined8 *)((long)param_2 + lVar11 + 0x88) =
               *(undefined8 *)((long)param_2 + lVar11 + 0x60);
          *(undefined8 *)((long)param_2 + lVar11 + 0x98) =
               *(undefined8 *)((long)param_2 + lVar11 + 0x70);
          *(undefined1 *)((long)param_2 + lVar11 + 0x77) = 0;
          *(undefined1 *)((long)param_2 + lVar11 + 0x60) = 0;
          if (lVar11 == -0x50) {
            uVar10 = *(ulong *)((long)puVar3 + -0x110);
            param_2[1] = *(ulong *)((long)puVar3 + -0x108);
            *param_2 = uVar10;
            goto LAB_109e033ec;
          }
          puVar7 = (ulong *)((long)param_2 + lVar11 + 0x28);
          uVar10 = 0;
          FUN_109e03484();
          lVar2 = lVar11 + -0x28;
        } while ((uVar10 & 1) != 0);
        uVar12 = *(undefined8 *)((long)puVar3 + -0x110);
        *(undefined8 *)((long)param_2 + lVar11 + 0x58) = *(undefined8 *)((long)puVar3 + -0x108);
        *(undefined8 *)((long)param_2 + lVar11 + 0x50) = uVar12;
        if (*(char *)((long)param_2 + lVar11 + 0x77) < '\0') {
          __ZdlPv(*(undefined8 *)((long)param_2 + lVar11 + 0x60));
        }
LAB_109e033ec:
        uVar12 = *(undefined8 *)((long)puVar3 + -0x100);
        *(undefined8 *)((long)param_2 + lVar11 + 0x68) = *(undefined8 *)((long)puVar3 + -0xf8);
        *(undefined8 *)((long)param_2 + lVar11 + 0x60) = uVar12;
        *(undefined8 *)((long)param_2 + lVar11 + 0x70) = *(undefined8 *)((long)puVar3 + -0xf0);
        iVar15 = iVar15 + 1;
        if (iVar15 == 8) {
          puVar6 = (ulong *)(ulong)(puVar5 + 5 == param_1);
          goto LAB_109e0343c;
        }
      }
      lVar14 = lVar14 + 0x28;
      puVar6 = puVar5 + 5;
    } while (puVar5 + 5 != param_1);
  }
LAB_109e03438:
  puVar6 = (ulong *)0x1;
LAB_109e0343c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar3 + -0xd8)) {
    return puVar6;
  }
  ___stack_chk_fail();
  bVar4 = *puVar7 <= *puVar6;
  if ((*puVar6 == *puVar7) && (bVar4 = puVar7[1] <= puVar6[1], puVar6[1] == puVar7[1])) {
    *(undefined1 **)((long)puVar3 + -0x120) = puVar16;
    *(code **)((long)puVar3 + -0x118) = FUN_109e03484;
    puVar6 = puVar6 + 2;
    func_0x000107c2abd4(puVar6,puVar7 + 2);
    return (ulong *)(ulong)((char)puVar6 < '\0');
  }
  return (ulong *)(ulong)!bVar4;
}



/* Entry: 109e03484; end: 109e034d3;  */

bool FUN_109e03484(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  
  bVar1 = *param_2 <= *param_1;
  if (*param_1 == *param_2) {
    bVar1 = param_2[1] <= param_1[1];
    if (param_1[1] == param_2[1]) {
      param_1 = param_1 + 2;
      func_0x000107c2abd4(param_1,param_2 + 2);
      return (char)param_1 < '\0';
    }
  }
  return !bVar1;
}



/* Entry: 109e034d4; end: 109e0360f;  */

void FUN_109e034d4(long *param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long lStack_50;
  undefined1 *puStack_48;
  
  plVar4 = &lStack_50;
  plVar5 = &lStack_50;
  lStack_50 = param_2;
  puStack_48 = param_3;
  func_0x000109e03bec(&lStack_50,param_4,param_5,0);
  func_0x000109e03b70(&lStack_50,param_4,param_5,plVar4);
  puVar1 = param_3;
  if (plVar4 <= param_3) {
    puVar1 = (undefined1 *)plVar4;
  }
  puVar3 = puVar1;
  if (puVar1 <= plVar5) {
    puVar3 = (undefined1 *)plVar5;
  }
  puVar2 = param_3;
  if (plVar5 <= param_3) {
    puVar2 = puVar3;
  }
  puVar3 = param_3;
  if (plVar5 <= param_3) {
    puVar3 = (undefined1 *)plVar5;
  }
  *param_1 = (long)(puVar1 + param_2);
  param_1[1] = (long)puVar2 - (long)puVar1;
  param_1[2] = (long)(puVar3 + param_2);
  param_1[3] = (long)param_3 - (long)puVar3;
  return;
}



/* Entry: 109e03610; end: 109e03713;  */

uint FUN_109e03610(long *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar5 = 0;
    pbVar2 = param_2;
    for (lVar6 = param_3; lVar6 != 0; lVar6 = lVar6 + -1) {
      uVar5 = uVar5 * 0x21 + (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    lVar6 = *param_1;
    iVar7 = 1;
    uVar3 = uVar5;
    while( true ) {
      uVar3 = uVar3 & uVar1 - 1;
      plVar4 = *(long **)(lVar6 + (ulong)uVar3 * 8);
      if (plVar4 == (long *)0x0) break;
      if (((plVar4 != (long *)0xfffffffffffffff8) &&
          (*(uint *)(lVar6 + (ulong)uVar1 * 8 + 8 + (ulong)uVar3 * 4) == uVar5)) &&
         (param_3 == *plVar4)) {
        if (param_3 == 0) {
          return uVar3;
        }
        pbVar2 = param_2;
        _memcmp(param_2,(long)plVar4 + (ulong)*(uint *)((long)param_1 + 0x14));
        if ((int)pbVar2 == 0) {
          return uVar3;
        }
      }
      uVar3 = iVar7 + uVar3;
      iVar7 = iVar7 + 1;
    }
  }
  return 0xffffffff;
}



/* Entry: 109e03714; end: 109e0376b;  */

undefined8 FUN_109e03714(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = param_1;
  FUN_109e03610();
  iVar1 = (int)plVar2;
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*param_1 + (long)iVar1 * 8);
    *(undefined8 *)(*param_1 + (long)iVar1 * 8) = 0xfffffffffffffff8;
    *(ulong *)((long)param_1 + 0xc) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20) + 1,
                  (int)*(undefined8 *)((long)param_1 + 0xc) + -1);
  }
  return uVar3;
}



/* Entry: 109e0376c; end: 109e037bb;  */

undefined4 FUN_109e0376c(byte *param_1,byte *param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar2 = *param_1;
    uVar4 = bVar2 | 0x20;
    bVar3 = *param_2;
    if (0x19 < bVar2 - 0x41) {
      uVar4 = (uint)bVar2;
    }
    uVar5 = bVar3 | 0x20;
    if (0x19 < bVar3 - 0x41) {
      uVar5 = (uint)bVar3;
    }
    if (uVar4 != uVar5) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  uVar1 = 1;
  if (uVar4 < uVar5) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 109e037bc; end: 109e038f3;  */

byte * FUN_109e037bc(byte *param_1,byte *param_2,short *param_3,ulong param_4,byte *param_5)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  short *psVar8;
  byte *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  short *psVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  
  uVar17 = *(ulong *)(param_2 + 8);
  if (0x7ffffffffffffff7 < uVar17) {
    func_0x000104c4f6b8();
    uVar17 = *(ulong *)(param_2 + 8);
    if (0x7ffffffffffffff7 < uVar17) {
      func_0x000104c4f6b8();
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar17 = (long)*(byte **)(param_2 + 8) - (long)param_5;
      psVar8 = param_3;
      if (param_5 <= *(byte **)(param_2 + 8)) {
        pbVar7 = param_2;
        pbVar18 = param_5;
        if (param_4 == 0) goto LAB_109e03948;
        if (param_4 <= uVar17) {
          lVar20 = *(long *)param_2;
          pbVar7 = param_5 + lVar20;
          uVar6 = param_4 - 1;
          if (uVar6 == 0) {
            psVar8 = (short *)(long)(char)*param_3;
            _memchr();
            pbVar18 = (byte *)0xffffffffffffffff;
            if (pbVar7 != (byte *)0x0) {
              pbVar18 = pbVar7 + -lVar20;
            }
            goto LAB_109e03948;
          }
          pbVar16 = pbVar7 + (uVar17 - param_4);
          if (param_4 == 2) {
            do {
              pbVar7 = param_2;
              if (*(short *)(pbVar18 + lVar20) == *param_3) goto LAB_109e03948;
              pbVar18 = pbVar18 + 1;
            } while (pbVar18 + lVar20 + -1 < pbVar16);
          }
          else if ((param_4 < 0x100) && (0xf < uVar17)) {
            uVar9 = 0;
            uVar19 = (undefined1)param_4;
            uStack_e8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                ));
            uStack_f0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                ));
            uStack_d8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                ));
            uStack_e0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                ));
            uStack_108 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_110 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_f8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                ));
            uStack_100 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_128 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_130 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_118 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_120 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_148 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_150 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_138 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_140 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_168 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_170 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_158 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_160 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_188 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_190 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_178 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_180 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_1a8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_1b0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_198 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_1a0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_1c8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_1d0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_1b8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uStack_1c0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(
                                                  uVar19,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))
                                                 ));
            uVar10 = uVar6;
            do {
              *(char *)((long)&uStack_1d0 + (ulong)*(byte *)((long)param_3 + uVar9)) = (char)uVar10;
              uVar9 = uVar9 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar6 != (uVar9 & 0xffffffff));
            bVar5 = *(byte *)((long)param_3 + uVar6);
            pbVar18 = pbVar7;
            do {
              pbVar7 = param_2;
              bVar3 = pbVar18[uVar6];
              if (((uint)bVar3 == (uint)bVar5) &&
                 (pbVar7 = pbVar18, psVar8 = param_3, uVar17 = uVar6, _memcmp(), (int)pbVar7 == 0))
              {
                pbVar18 = pbVar18 + -lVar20;
                goto LAB_109e03948;
              }
              pbVar18 = pbVar18 + *(byte *)((long)&uStack_1d0 + (ulong)(uint)bVar3);
              param_2 = pbVar7;
            } while (pbVar18 < pbVar16 + 1);
          }
          else {
            do {
              pbVar7 = pbVar18 + lVar20;
              psVar8 = param_3;
              uVar17 = param_4;
              _memcmp();
              if ((int)pbVar7 == 0) goto LAB_109e03948;
              pbVar18 = pbVar18 + 1;
              param_2 = pbVar7;
            } while (pbVar18 + lVar20 + -1 < pbVar16);
          }
        }
      }
      pbVar7 = param_2;
      pbVar18 = (byte *)0xffffffffffffffff;
LAB_109e03948:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
        return pbVar18;
      }
      ___stack_chk_fail();
      pcVar2 = *(char **)pbVar7;
      pbVar7 = *(byte **)(pbVar7 + 8);
      pbVar18 = pbVar7;
      if (param_5 <= pbVar7) {
        pbVar18 = param_5;
      }
      pbVar16 = pbVar18 + uVar17;
      if ((ulong)((long)pbVar7 - (long)pbVar18) <= uVar17) {
        pbVar16 = pbVar7;
      }
      pcVar1 = pcVar2 + (long)pbVar16;
      pcVar12 = pcVar1;
      if ((uVar17 != 0) && (pbVar16 != (byte *)0x0)) {
        pcVar13 = pcVar2;
        pcVar14 = pcVar2;
        do {
          while (pcVar14 = pcVar14 + 1, psVar15 = psVar8, uVar6 = uVar17, *pcVar13 == (char)*psVar8)
          {
            do {
              psVar15 = (short *)((long)psVar15 + 1);
              pcVar11 = pcVar13;
              if (uVar6 - 1 == 0) break;
              if (pcVar14 == pcVar1) goto LAB_109e03b5c;
              cVar4 = *pcVar14;
              pcVar11 = pcVar12;
              pcVar14 = pcVar14 + 1;
              uVar6 = uVar6 - 1;
            } while (cVar4 == *(char *)psVar15);
            pcVar13 = pcVar13 + 1;
            pcVar12 = pcVar11;
            pcVar14 = pcVar13;
            if (pcVar13 == pcVar1) goto LAB_109e03b5c;
          }
          pcVar13 = pcVar13 + 1;
        } while (pcVar13 != pcVar1);
      }
LAB_109e03b5c:
      pbVar18 = (byte *)(pcVar12 + -(long)pcVar2);
      if (pcVar12 == pcVar1 && uVar17 != 0) {
        pbVar18 = (byte *)0xffffffffffffffff;
      }
      return pbVar18;
    }
    pbVar18 = *(byte **)param_2;
    if (uVar17 < 0x17) {
      extraout_x8[0x17] = (byte)uVar17;
      pbVar7 = extraout_x8;
      pbVar16 = extraout_x8;
      if (uVar17 == 0) goto LAB_109e038dc;
    }
    else {
      pbVar7 = (byte *)0x19;
      if ((uVar17 | 7) != 0x17) {
        pbVar7 = (byte *)((uVar17 | 7) + 1);
      }
      param_2 = pbVar7;
      __Znwm();
      *(ulong *)(extraout_x8 + 8) = uVar17;
      *(ulong *)(extraout_x8 + 0x10) = (ulong)pbVar7 | 0x8000000000000000;
      *(byte **)extraout_x8 = param_2;
      pbVar7 = param_2;
    }
    do {
      bVar3 = *pbVar18;
      bVar5 = bVar3 - 0x20;
      if (0x19 < bVar3 - 0x61) {
        bVar5 = bVar3;
      }
      pbVar16 = pbVar7 + 1;
      *pbVar7 = bVar5;
      uVar17 = uVar17 - 1;
      pbVar7 = pbVar16;
      pbVar18 = pbVar18 + 1;
    } while (uVar17 != 0);
LAB_109e038dc:
    *pbVar16 = 0;
    return param_2;
  }
  pbVar18 = *(byte **)param_2;
  if (uVar17 < 0x17) {
    param_1[0x17] = (byte)uVar17;
    pbVar7 = param_1;
    if (uVar17 == 0) goto LAB_109e03840;
  }
  else {
    pbVar7 = (byte *)0x19;
    if ((uVar17 | 7) != 0x17) {
      pbVar7 = (byte *)((uVar17 | 7) + 1);
    }
    param_2 = pbVar7;
    __Znwm();
    *(ulong *)(param_1 + 8) = uVar17;
    *(ulong *)(param_1 + 0x10) = (ulong)pbVar7 | 0x8000000000000000;
    *(byte **)param_1 = param_2;
    pbVar7 = param_2;
  }
  do {
    bVar3 = *pbVar18;
    bVar5 = bVar3 | 0x20;
    if (0x19 < bVar3 - 0x41) {
      bVar5 = bVar3;
    }
    param_1 = pbVar7 + 1;
    *pbVar7 = bVar5;
    uVar17 = uVar17 - 1;
    pbVar7 = param_1;
    pbVar18 = pbVar18 + 1;
  } while (uVar17 != 0);
LAB_109e03840:
  *param_1 = 0;
  return param_2;
}



/* Entry: 109e038f4; end: 109e03abb;  */

ulong FUN_109e038f4(long *param_1,short *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  short *psVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  short *psVar17;
  long *plVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1[1] - param_4;
  psVar9 = param_2;
  if (param_4 <= (ulong)param_1[1]) {
    plVar8 = param_1;
    uVar11 = param_4;
    if (param_3 == 0) goto LAB_109e03948;
    if (param_3 <= uVar10) {
      lVar20 = *param_1;
      plVar8 = (long *)(lVar20 + param_4);
      uVar4 = param_3 - 1;
      if (uVar4 == 0) {
        psVar9 = (short *)(long)(char)*param_2;
        _memchr();
        uVar11 = 0xffffffffffffffff;
        if (plVar8 != (long *)0x0) {
          uVar11 = (long)plVar8 - lVar20;
        }
        goto LAB_109e03948;
      }
      uVar1 = (long)plVar8 + (uVar10 - param_3);
      if (param_3 == 2) {
        do {
          plVar8 = param_1;
          if (*(short *)(lVar20 + uVar11) == *param_2) goto LAB_109e03948;
          uVar11 = uVar11 + 1;
        } while ((lVar20 + uVar11) - 1 < uVar1);
      }
      else if ((param_3 < 0x100) && (0xf < uVar10)) {
        uVar11 = 0;
        uVar19 = (undefined1)param_3;
        uStack_88 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_90 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_78 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_80 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_a8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_b0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_98 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_a0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_c8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_d0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_b8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_c0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_e8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_f0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_d8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_e0 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_108 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_110 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_f8 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_100 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_128 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_130 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_118 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_120 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_148 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_150 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_138 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_140 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_168 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_170 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_158 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uStack_160 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19
                                                  ,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
        uVar12 = uVar4;
        do {
          *(char *)((long)&uStack_170 + (ulong)*(byte *)((long)param_2 + uVar11)) = (char)uVar12;
          uVar11 = uVar11 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar4 != (uVar11 & 0xffffffff));
        bVar6 = *(byte *)((long)param_2 + uVar4);
        plVar18 = plVar8;
        do {
          plVar8 = param_1;
          bVar7 = *(byte *)((long)plVar18 + uVar4);
          if (((uint)bVar7 == (uint)bVar6) &&
             (plVar8 = plVar18, psVar9 = param_2, uVar10 = uVar4, _memcmp(), (int)plVar8 == 0)) {
            uVar11 = (long)plVar18 - lVar20;
            goto LAB_109e03948;
          }
          plVar18 = (long *)((long)plVar18 +
                            (ulong)*(byte *)((long)&uStack_170 + (ulong)(uint)bVar7));
          param_1 = plVar8;
        } while (plVar18 < (long *)(uVar1 + 1));
      }
      else {
        do {
          plVar8 = (long *)(lVar20 + uVar11);
          psVar9 = param_2;
          uVar10 = param_3;
          _memcmp();
          if ((int)plVar8 == 0) goto LAB_109e03948;
          uVar11 = uVar11 + 1;
          param_1 = plVar8;
        } while ((lVar20 + uVar11) - 1 < uVar1);
      }
    }
  }
  plVar8 = param_1;
  uVar11 = 0xffffffffffffffff;
LAB_109e03948:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar11;
  }
  ___stack_chk_fail();
  pcVar3 = (char *)*plVar8;
  uVar4 = plVar8[1];
  uVar11 = uVar4;
  if (param_4 <= uVar4) {
    uVar11 = param_4;
  }
  uVar1 = uVar11 + uVar10;
  if (uVar4 - uVar11 <= uVar10) {
    uVar1 = uVar4;
  }
  pcVar2 = pcVar3 + uVar1;
  pcVar14 = pcVar2;
  if ((uVar10 != 0) && (uVar1 != 0)) {
    pcVar15 = pcVar3;
    pcVar16 = pcVar3;
    do {
      while (pcVar16 = pcVar16 + 1, psVar17 = psVar9, uVar11 = uVar10, *pcVar15 == (char)*psVar9) {
        do {
          psVar17 = (short *)((long)psVar17 + 1);
          pcVar13 = pcVar15;
          if (uVar11 - 1 == 0) break;
          if (pcVar16 == pcVar2) goto LAB_109e03b5c;
          cVar5 = *pcVar16;
          pcVar13 = pcVar14;
          pcVar16 = pcVar16 + 1;
          uVar11 = uVar11 - 1;
        } while (cVar5 == *(char *)psVar17);
        pcVar15 = pcVar15 + 1;
        pcVar14 = pcVar13;
        pcVar16 = pcVar15;
        if (pcVar15 == pcVar2) goto LAB_109e03b5c;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 != pcVar2);
  }
LAB_109e03b5c:
  uVar11 = (long)pcVar14 - (long)pcVar3;
  if (pcVar14 == pcVar2 && uVar10 != 0) {
    uVar11 = 0xffffffffffffffff;
  }
  return uVar11;
}



/* Entry: 109e03abc; end: 109e03b6f;  */

long FUN_109e03abc(long *param_1,char *param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  
  pcVar4 = (char *)*param_1;
  uVar5 = param_1[1];
  uVar2 = uVar5;
  if (param_4 <= uVar5) {
    uVar2 = param_4;
  }
  uVar3 = uVar2 + param_3;
  if (uVar5 - uVar2 <= param_3) {
    uVar3 = uVar5;
  }
  pcVar1 = pcVar4 + uVar3;
  pcVar9 = pcVar1;
  if ((param_3 != 0) && (uVar3 != 0)) {
    pcVar10 = pcVar4;
    pcVar11 = pcVar4;
    do {
      while (pcVar11 = pcVar11 + 1, pcVar12 = param_2, uVar2 = param_3, *pcVar10 == *param_2) {
        do {
          pcVar12 = pcVar12 + 1;
          pcVar8 = pcVar10;
          if (uVar2 - 1 == 0) break;
          if (pcVar11 == pcVar1) goto LAB_109e03b5c;
          cVar6 = *pcVar11;
          pcVar8 = pcVar9;
          pcVar11 = pcVar11 + 1;
          uVar2 = uVar2 - 1;
        } while (cVar6 == *pcVar12);
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar8;
        pcVar11 = pcVar10;
        if (pcVar10 == pcVar1) goto LAB_109e03b5c;
      }
      pcVar10 = pcVar10 + 1;
    } while (pcVar10 != pcVar1);
  }
LAB_109e03b5c:
  lVar7 = (long)pcVar9 - (long)pcVar4;
  if (pcVar9 == pcVar1 && param_3 != 0) {
    lVar7 = -1;
  }
  return lVar7;
}



/* Entry: 109e03b70; end: 109e03d6f;  */

ulong FUN_109e03b70(long *param_1,byte *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong auStack_20 [4];
  
  auStack_20[1] = 0;
  auStack_20[0] = 0;
  auStack_20[3] = 0;
  auStack_20[2] = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = (ulong)(*param_2 >> 3) & 0x18;
    *(ulong *)((long)auStack_20 + uVar1) =
         1L << ((ulong)*param_2 & 0x3f) | *(ulong *)((long)auStack_20 + uVar1);
    param_2 = param_2 + 1;
  }
  if (param_4 < (ulong)param_1[1]) {
    do {
      if ((auStack_20[*(byte *)(*param_1 + param_4) >> 6] >>
           ((ulong)*(byte *)(*param_1 + param_4) & 0x3f) & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 + 1;
    } while (param_1[1] != param_4);
  }
  return 0xffffffffffffffff;
}


