/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092f1c08; end: 1092f1e3f;  */

void FUN_1092f1c08(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uStack_44;
  
  if ((int)param_3 == 1) {
    *param_1 = 0;
  }
  else {
    if ((int)param_3 != 0) {
      uVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x18) -
              *(long *)(*(long *)(param_2 + 0x28) + 0x10);
      plVar1 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar1 + 1) = 0;
      *plVar1 = (long)&PTR_DAT_110aea720;
      uStack_44 = 0;
      FUN_1092cd11c(plVar1 + 2,(long)(uVar5 * 0x40000000) >> 0x20,&uStack_44);
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      if (0 < (int)(uVar5 >> 2)) {
        uVar6 = 0;
        do {
          uVar3 = *(undefined8 *)(param_2 + 0x10);
          FUN_1092f0dfc(uVar3,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0x28) + 0x10) + uVar6 * 4),param_3);
          *(int *)(plVar1[2] + uVar6 * 4) = (int)uVar3;
          uVar6 = uVar6 + 1;
        } while ((uVar5 >> 2 & 0x7fffffff) != uVar6);
      }
      lVar2 = 0x30;
      __Znwm();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      FUN_1092f108c();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      *param_1 = lVar2;
      iVar4 = (int)plVar1[1] + -1;
      *(int *)(plVar1 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
        (**(code **)(*plVar1 + 8))(plVar1);
        iVar4 = (int)plVar1[1];
      }
      *(int *)(plVar1 + 1) = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if ((*(byte *)(lVar2 + 0x5c) & 1) == 0) {
      FUN_1092f0714(lVar2);
    }
    *param_1 = 0;
    param_2 = *(long *)(lVar2 + 0x40);
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) &&
     (iVar4 = (int)plVar1[1] + -1, *(int *)(plVar1 + 1) = iVar4, iVar4 == 0)) {
    *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092f1e40; end: 1092f208b;  */

long * FUN_1092f1e40(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uStack_54;
  
  if (param_3 < 0) {
    plVar1 = (long *)0x10;
    ___cxa_allocate_exception();
    FUN_1092efc84();
    ___cxa_throw();
    iVar8 = (int)unaff_x19[1] + -1;
    *(int *)(unaff_x19 + 1) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x19 + 8))();
    }
    __ZdlPv();
    iVar8 = (int)unaff_x19[1] + -1;
    *(int *)(unaff_x19 + 1) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x19 + 8))();
    }
    __Unwind_Resume();
    *plVar1 = (long)&PTR_FUN_110aeaa20;
    plVar1[3] = (long)&PTR_DAT_110aea6e8;
    plVar5 = (long *)plVar1[5];
    if ((plVar5 != (long *)0x0) &&
       (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
      *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
      (**(code **)(*plVar5 + 8))();
    }
    plVar1[5] = 0;
    return plVar1;
  }
  if ((int)param_4 != 0) {
    uVar7 = *(long *)(*(long *)(param_2 + 0x28) + 0x18) -
            *(long *)(*(long *)(param_2 + 0x28) + 0x10);
    plVar1 = (long *)0x28;
    __Znwm();
    iVar8 = (int)(uVar7 >> 2);
    *(undefined4 *)(plVar1 + 1) = 0;
    *plVar1 = (long)&PTR_DAT_110aea720;
    uStack_54 = 0;
    FUN_1092cd11c(plVar1 + 2,(long)(param_3 + iVar8),&uStack_54);
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    if (0 < iVar8) {
      uVar6 = 0;
      do {
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        FUN_1092f0dfc(uVar2,*(undefined4 *)(*(long *)(*(long *)(param_2 + 0x28) + 0x10) + uVar6 * 4)
                      ,param_4);
        *(int *)(plVar1[2] + uVar6 * 4) = (int)uVar2;
        uVar6 = uVar6 + 1;
      } while ((uVar7 >> 2 & 0x7fffffff) != uVar6);
    }
    plVar3 = (long *)0x30;
    __Znwm();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    plVar5 = plVar3;
    FUN_1092f108c();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    *param_1 = (long)plVar3;
    iVar8 = (int)plVar1[1] + -1;
    *(int *)(plVar1 + 1) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
      plVar5 = plVar1;
      (**(code **)(*plVar1 + 8))(plVar1);
      iVar8 = (int)plVar1[1];
    }
    *(int *)(plVar1 + 1) = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar5 = plVar1;
    }
    return plVar5;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  if ((*(byte *)(lVar4 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar4);
  }
  *param_1 = 0;
  lVar4 = *(long *)(lVar4 + 0x40);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) &&
     (iVar8 = (int)plVar1[1] + -1, *(int *)(plVar1 + 1) = iVar8, iVar8 == 0)) {
    *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = lVar4;
  return plVar1;
}



/* Entry: 1092f208c; end: 1092f215f;  */

undefined8 * FUN_1092f208c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aeaa20;
  param_1[3] = &PTR_DAT_110aea6e8;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  return param_1;
}



/* Entry: 1092f2160; end: 1092f3893;  */

void FUN_1092f2160(long *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long *plVar26;
  long *plStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  long *plStack_e8;
  undefined **appuStack_e0 [2];
  long *plStack_d0;
  undefined **ppuStack_c8;
  undefined4 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  plVar4 = (long *)0x30;
  __Znwm();
  lVar12 = *param_1;
  uStack_c0 = 0;
  ppuStack_c8 = &PTR_DAT_110aea6e8;
  plVar17 = *(long **)(param_2 + 0x10);
  if (plVar17 != (long *)0x0) {
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
  }
  plStack_b8 = plVar17;
  FUN_1092f108c(plVar4,lVar12,&ppuStack_c8);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  ppuStack_c8 = &PTR_DAT_110aea6e8;
  if ((plVar17 != (long *)0x0) &&
     (iVar13 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  plStack_b8 = (long *)0x0;
  FUN_1092eb560(appuStack_e0,param_3);
  uVar25 = (uint)param_3;
  if ((int)uVar25 < 1) goto LAB_1092f308c;
  uVar18 = 0;
  bVar1 = true;
  iVar13 = -1;
  do {
    lVar12 = *param_1;
    iVar16 = *(int *)(lVar12 + 0x58);
    if ((*(byte *)(lVar12 + 0x5c) & 1) == 0) {
      FUN_1092f0714(lVar12);
    }
    plVar5 = plVar4;
    FUN_1092f13bc(plVar4,*(undefined4 *)
                          (*(long *)(lVar12 + 0x10) + (long)(int)(uVar18 + iVar16) * 4));
    plVar17 = plStack_d0;
    *(int *)(plStack_d0[2] + (long)(iVar13 + (int)((ulong)(plStack_d0[3] - plStack_d0[2]) >> 2)) * 4
            ) = (int)plVar5;
    bVar1 = (bool)((int)plVar5 == 0 & bVar1);
    uVar18 = uVar18 + 1;
    iVar13 = iVar13 + -1;
  } while (uVar25 != uVar18);
  if (bVar1) goto LAB_1092f308c;
  plVar5 = (long *)0x30;
  __Znwm();
  uStack_f0 = 0;
  ppuStack_f8 = &PTR_DAT_110aea6e8;
  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
  plStack_e8 = plVar17;
  FUN_1092f108c();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  ppuStack_f8 = &PTR_DAT_110aea6e8;
  iVar13 = (int)plVar17[1] + -1;
  *(int *)(plVar17 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  plStack_e8 = (long *)0x0;
  FUN_1092f0b18(&plStack_118,*param_1,param_3,1);
  plVar17 = plStack_118;
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  plVar24 = plVar5;
  if ((int)((ulong)(*(long *)(plStack_118[5] + 0x18) - *(long *)(plStack_118[5] + 0x10)) >> 2) <
      (int)((ulong)(*(long *)(plVar5[5] + 0x18) - *(long *)(plVar5[5] + 0x10)) >> 2)) {
    *(int *)(plStack_118 + 1) = (int)plStack_118[1] + 1;
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    iVar13 = (int)plStack_118[1];
    *(int *)(plStack_118 + 1) = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      *(undefined4 *)(plStack_118 + 1) = 0xdeadf001;
      (**(code **)(*plStack_118 + 8))(plStack_118);
      iVar13 = (int)plStack_118[1] + 1;
    }
    *(int *)(plStack_118 + 1) = iVar13;
    iVar13 = (int)plVar5[1] + -1;
    *(int *)(plVar5 + 1) = iVar13;
    plStack_118 = plVar5;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    iVar13 = (int)plVar17[1] + -1;
    *(int *)(plVar17 + 1) = iVar13;
    plVar24 = plVar17;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
      (**(code **)(*plVar17 + 8))(plVar17);
    }
  }
  plVar17 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    *(int *)(plStack_118 + 1) = (int)plStack_118[1] + 1;
  }
  *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
  FUN_1092f0aa0(&uStack_70,*param_1);
  func_0x0001092f0adc(&plStack_78,*param_1);
  lVar12 = plVar24[5];
  iVar13 = (int)((ulong)(*(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10)) >> 2);
  plVar8 = plVar24 + 5;
  plVar11 = plVar24;
  plVar9 = uStack_70;
  while (plVar2 = plVar11, uStack_70 = plVar9, (int)(uVar25 >> 1) < iVar13) {
    if (plVar17 != (long *)0x0) {
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    }
    if (plVar9 != (long *)0x0) {
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    }
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    if ((plVar17 != (long *)0x0) &&
       (iVar13 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
      (**(code **)(*plVar17 + 8))(plVar17);
    }
    plVar11 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
    }
    if ((uStack_70 != (long *)0x0) &&
       (iVar13 = (int)uStack_70[1] + -1, *(int *)(uStack_70 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(uStack_70 + 1) = 0xdeadf001;
      (**(code **)(*uStack_70 + 8))();
    }
    uStack_70 = plVar11;
    if (**(int **)(*plVar8 + 0x10) == 0) {
      ___cxa_allocate_exception(0x10);
      FUN_1092f3938();
      ___cxa_throw();
      goto LAB_1092f31f0;
    }
    if (plVar17 != (long *)0x0) {
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    }
    iVar13 = (int)plVar2[1] + -1;
    *(int *)(plVar2 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    FUN_1092f0aa0(&plStack_80,*param_1);
    lVar12 = *param_1;
    func_0x0001092f0d84(lVar12,**(undefined4 **)(*plVar8 + 0x10));
    piVar14 = *(int **)(plVar17[5] + 0x10);
    uVar19 = (ulong)(*(long *)(plVar17[5] + 0x18) - (long)piVar14) >> 2;
    uVar23 = (ulong)(*(long *)(*plVar8 + 0x18) - *(long *)(*plVar8 + 0x10)) >> 2;
    plVar11 = plVar17;
    plVar26 = plVar17;
    if ((int)uVar23 <= (int)uVar19) {
      do {
        plVar11 = plVar26;
        if (*piVar14 == 0) break;
        lVar6 = *param_1;
        FUN_1092f0dfc(lVar6,*piVar14,lVar12);
        plVar11 = plStack_80;
        iVar13 = (int)uVar19 - (int)uVar23;
        FUN_1092f0b18(&plStack_90,*param_1,iVar13,lVar6);
        FUN_1092f1480(&plStack_88,plVar11,&plStack_90);
        plVar11 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
        }
        if ((plStack_80 != (long *)0x0) &&
           (iVar16 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar16, iVar16 == 0)) {
          *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
          (**(code **)(*plStack_80 + 8))(plStack_80);
        }
        plStack_80 = plVar11;
        if ((plStack_88 != (long *)0x0) &&
           (iVar16 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar16, iVar16 == 0)) {
          *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
          (**(code **)(*plStack_88 + 8))();
        }
        if ((plStack_90 != (long *)0x0) &&
           (iVar16 = (int)plStack_90[1] + -1, *(int *)(plStack_90 + 1) = iVar16, iVar16 == 0)) {
          *(undefined4 *)(plStack_90 + 1) = 0xdeadf001;
          (**(code **)(*plStack_90 + 8))();
        }
        FUN_1092f1e40(&plStack_98,plVar2,iVar13,lVar6);
        FUN_1092f1480(&plStack_88,plVar26,&plStack_98);
        plVar11 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
        }
        iVar13 = (int)plVar26[1] + -1;
        *(int *)(plVar26 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar26 + 1) = 0xdeadf001;
          (**(code **)(*plVar26 + 8))(plVar26);
        }
        if ((plStack_88 != (long *)0x0) &&
           (iVar13 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar13, iVar13 == 0)) {
          *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
          (**(code **)(*plStack_88 + 8))();
        }
        if ((plStack_98 != (long *)0x0) &&
           (iVar13 = (int)plStack_98[1] + -1, *(int *)(plStack_98 + 1) = iVar13, iVar13 == 0)) {
          *(undefined4 *)(plStack_98 + 1) = 0xdeadf001;
          (**(code **)(*plStack_98 + 8))();
        }
        piVar14 = *(int **)(plVar11[5] + 0x10);
        uVar19 = (ulong)(*(long *)(plVar11[5] + 0x18) - (long)piVar14) >> 2;
        uVar23 = (ulong)(*(long *)(*plVar8 + 0x18) - *(long *)(*plVar8 + 0x10)) >> 2;
        plVar26 = plVar11;
      } while ((int)uVar23 <= (int)uVar19);
    }
    if (uStack_70 != (long *)0x0) {
      *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
    }
    plStack_a8 = uStack_70;
    FUN_1092f1870(&plStack_a0,plStack_80,&plStack_a8);
    if (plVar9 != (long *)0x0) {
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    }
    plStack_b0 = plVar9;
    FUN_1092f1480(&plStack_88,plStack_a0,&plStack_b0);
    plVar26 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
    }
    if ((plStack_78 != (long *)0x0) &&
       (iVar13 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
      (**(code **)(*plStack_78 + 8))(plStack_78);
    }
    plStack_78 = plVar26;
    if ((plStack_88 != (long *)0x0) &&
       (iVar13 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
      (**(code **)(*plStack_88 + 8))();
    }
    if ((plStack_b0 != (long *)0x0) &&
       (iVar13 = (int)plStack_b0[1] + -1, *(int *)(plStack_b0 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plStack_b0 + 1) = 0xdeadf001;
      (**(code **)(*plStack_b0 + 8))();
    }
    if ((plStack_a0 != (long *)0x0) &&
       (iVar13 = (int)plStack_a0[1] + -1, *(int *)(plStack_a0 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plStack_a0 + 1) = 0xdeadf001;
      (**(code **)(*plStack_a0 + 8))();
    }
    if ((plStack_a8 != (long *)0x0) &&
       (iVar13 = (int)plStack_a8[1] + -1, *(int *)(plStack_a8 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plStack_a8 + 1) = 0xdeadf001;
      (**(code **)(*plStack_a8 + 8))();
    }
    plVar26 = plVar11 + 5;
    if ((int)((ulong)(*(long *)(*plVar8 + 0x18) - *(long *)(*plVar8 + 0x10)) >> 2) <=
        (int)((ulong)(*(long *)(*plVar26 + 0x18) - *(long *)(*plVar26 + 0x10)) >> 2)) {
      puVar7 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      FUN_1092ea600();
      *puVar7 = &PTR_FUN_110aeaa70;
      ___cxa_throw();
      goto LAB_1092f31f0;
    }
    if ((plStack_80 != (long *)0x0) &&
       (iVar13 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
      (**(code **)(*plStack_80 + 8))();
    }
    if ((plVar9 != (long *)0x0) &&
       (iVar13 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plVar9 + 1) = 0xdeadf001;
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    if ((plVar17 != (long *)0x0) &&
       (iVar13 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar13, iVar13 == 0)) {
      *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
      (**(code **)(*plVar17 + 8))(plVar17);
    }
    plVar8 = plVar26;
    plVar17 = plVar2;
    plVar9 = uStack_70;
    iVar13 = (int)((ulong)(*(long *)(*plVar26 + 0x18) - *(long *)(*plVar26 + 0x10)) >> 2);
  }
  lVar12 = *(long *)(plStack_78[5] + 0x10);
  if (*(int *)(lVar12 + ((*(long *)(plStack_78[5] + 0x18) - lVar12) * 0x40000000 + -0x100000000 >>
                        0x20) * 4) == 0) {
    ___cxa_allocate_exception(0x10);
    FUN_1092f3938();
    ___cxa_throw();
LAB_1092f31f0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1092f31f4);
    (*pcVar3)();
  }
  lVar12 = *param_1;
  func_0x0001092f0d84(lVar12);
  FUN_1092f1c08(&plStack_80,plStack_78,lVar12);
  FUN_1092f1c08(&plStack_88,plVar2,lVar12);
  puStack_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x10;
  __Znwm();
  puStack_108 = puVar7 + 2;
  *puVar7 = 0;
  puVar7[1] = 0;
  puStack_110 = puVar7;
  puStack_100 = puStack_108;
  func_0x0001092f1028();
  func_0x0001092f1028(puVar7 + 1,plStack_88);
  if ((plStack_88 != (long *)0x0) &&
     (iVar13 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
    (**(code **)(*plStack_88 + 8))();
  }
  if ((plStack_80 != (long *)0x0) &&
     (iVar13 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
    (**(code **)(*plStack_80 + 8))();
  }
  if ((plStack_78 != (long *)0x0) &&
     (iVar13 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
    (**(code **)(*plStack_78 + 8))();
  }
  if ((uStack_70 != (long *)0x0) &&
     (iVar13 = (int)uStack_70[1] + -1, *(int *)(uStack_70 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(uStack_70 + 1) = 0xdeadf001;
    (**(code **)(*uStack_70 + 8))();
  }
  iVar13 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if ((plVar17 != (long *)0x0) &&
     (iVar13 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  iVar13 = (int)plVar24[1] + -1;
  *(int *)(plVar24 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar24 + 1) = 0xdeadf001;
    (**(code **)(*plVar24 + 8))();
  }
  if ((plStack_118 != (long *)0x0) &&
     (iVar13 = (int)plStack_118[1] + -1, *(int *)(plStack_118 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plStack_118 + 1) = 0xdeadf001;
    (**(code **)(*plStack_118 + 8))();
  }
  plVar17 = (long *)*puStack_110;
  if (plVar17 != (long *)0x0) {
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
  }
  plVar24 = (long *)puStack_110[1];
  if (plVar24 != (long *)0x0) {
    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
  }
  if (plVar17 != (long *)0x0) {
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
  }
  lVar12 = *(long *)(plVar17[5] + 0x10);
  lVar6 = *(long *)(plVar17[5] + 0x18);
  plVar8 = (long *)0x28;
  __Znwm();
  iVar16 = (int)((ulong)(lVar6 - lVar12) >> 2);
  iVar13 = iVar16 + -1;
  *(undefined4 *)(plVar8 + 1) = 0;
  *plVar8 = (long)&PTR_DAT_110aea720;
  if (iVar13 == 1) {
    uStack_70 = (long *)((ulong)uStack_70._4_4_ << 0x20);
    FUN_1092cd11c(plVar8 + 2,1,&uStack_70);
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    lVar12 = *(long *)(plVar17[5] + 0x10);
    *(undefined4 *)plVar8[2] =
         *(undefined4 *)
          (lVar12 + ((*(long *)(plVar17[5] + 0x18) - lVar12) * 0x40000000 + -0x200000000 >> 0x20) *
                    4);
LAB_1092f2d64:
    iVar13 = (int)plVar17[1] + -1;
    *(int *)(plVar17 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
      (**(code **)(*plVar17 + 8))(plVar17);
    }
  }
  else {
    uStack_70 = (long *)((ulong)uStack_70._4_4_ << 0x20);
    FUN_1092cd11c(plVar8 + 2,(long)iVar13,&uStack_70);
    iVar22 = 0;
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    if ((1 < *(int *)(*param_1 + 0x50)) && (1 < iVar16)) {
      iVar22 = 0;
      iVar16 = 1;
      do {
        plVar9 = plVar17;
        FUN_1092f13bc(plVar17,iVar16);
        if ((int)plVar9 == 0) {
          lVar12 = *param_1;
          func_0x0001092f0d84(lVar12,iVar16);
          *(int *)(plVar8[2] + (long)iVar22 * 4) = (int)lVar12;
          iVar22 = iVar22 + 1;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*param_1 + 0x50) && iVar22 < iVar13);
    }
    if (iVar22 != iVar13) {
      ___cxa_allocate_exception(0x10);
      FUN_1092f3938();
      ___cxa_throw();
      goto LAB_1092f31f0;
    }
    if (plVar17 != (long *)0x0) goto LAB_1092f2d64;
  }
  if (plVar24 != (long *)0x0) {
    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
  }
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  lVar12 = plVar8[2];
  lVar6 = plVar8[3];
  plVar9 = (long *)0x28;
  __Znwm();
  uVar19 = lVar6 - lVar12;
  *(undefined4 *)(plVar9 + 1) = 0;
  *plVar9 = (long)&PTR_DAT_110aea720;
  uStack_70 = (long *)((ulong)uStack_70 & 0xffffffff00000000);
  FUN_1092cd11c(plVar9 + 2,(long)(uVar19 * 0x40000000) >> 0x20,&uStack_70);
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  if (0 < (int)(uVar19 >> 2)) {
    uVar23 = 0;
    uVar19 = uVar19 >> 2 & 0x7fffffff;
    do {
      lVar6 = *param_1;
      func_0x0001092f0d84(lVar6,*(undefined4 *)(plVar8[2] + uVar23 * 4));
      uVar20 = 0;
      lVar12 = 1;
      do {
        lVar15 = lVar12;
        if (uVar23 != uVar20) {
          lVar10 = *param_1;
          FUN_1092f0dfc(lVar10,*(undefined4 *)(plVar8[2] + uVar20 * 4),lVar6);
          lVar15 = *param_1;
          FUN_1092f0dfc(lVar15,lVar12,(uint)lVar10 ^ 1);
        }
        uVar20 = uVar20 + 1;
        lVar12 = lVar15;
      } while (uVar19 != uVar20);
      lVar10 = *param_1;
      plVar11 = plVar24;
      FUN_1092f13bc(plVar24,lVar6);
      lVar12 = *param_1;
      func_0x0001092f0d84(lVar12,lVar15);
      FUN_1092f0dfc(lVar10,plVar11,lVar12);
      *(int *)(plVar9[2] + uVar23 * 4) = (int)lVar10;
      lVar12 = *param_1;
      if (*(int *)(lVar12 + 0x58) != 0) {
        FUN_1092f0dfc(lVar12,lVar10,lVar6);
        *(int *)(plVar9[2] + uVar23 * 4) = (int)lVar12;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar19);
  }
  iVar13 = (int)plVar8[1] + -1;
  *(int *)(plVar8 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar8 + 1) = 0xdeadf001;
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((plVar24 != (long *)0x0) &&
     (iVar13 = (int)plVar24[1] + -1, *(int *)(plVar24 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plVar24 + 1) = 0xdeadf001;
    (**(code **)(*plVar24 + 8))(plVar24);
  }
  lVar12 = plVar8[2];
  if (0 < (int)((ulong)(plVar8[3] - lVar12) >> 2)) {
    lVar6 = 0;
    lVar15 = *(long *)(param_2 + 0x10);
    lVar10 = *(long *)(lVar15 + 0x10);
    do {
      lVar21 = *(long *)(lVar15 + 0x18);
      lVar15 = *param_1;
      func_0x0001092f0d20(lVar15,*(undefined4 *)(lVar12 + lVar6 * 4));
      uVar25 = (int)((ulong)(lVar21 - lVar10) >> 2) + ~(uint)lVar15;
      if ((int)uVar25 < 0) {
        ___cxa_allocate_exception(0x10);
        FUN_1092f3938();
        ___cxa_throw();
        goto LAB_1092f31f0;
      }
      lVar15 = *(long *)(param_2 + 0x10);
      lVar10 = *(long *)(lVar15 + 0x10);
      *(uint *)(lVar10 + (ulong)uVar25 * 4) =
           *(uint *)(plVar9[2] + lVar6 * 4) ^ *(uint *)(lVar10 + (ulong)uVar25 * 4);
      lVar6 = lVar6 + 1;
      lVar12 = plVar8[2];
    } while (lVar6 < (int)((ulong)(plVar8[3] - lVar12) >> 2));
  }
  iVar13 = (int)plVar9[1] + -1;
  *(int *)(plVar9 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar9 + 1) = 0xdeadf001;
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  iVar13 = (int)plVar8[1] + -1;
  *(int *)(plVar8 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar8 + 1) = 0xdeadf001;
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((plVar24 != (long *)0x0) &&
     (iVar13 = (int)plVar24[1] + -1, *(int *)(plVar24 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plVar24 + 1) = 0xdeadf001;
    (**(code **)(*plVar24 + 8))(plVar24);
  }
  if ((plVar17 != (long *)0x0) &&
     (iVar13 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  FUN_1092f3898(&puStack_110);
  iVar13 = (int)plVar5[1] + -1;
  *(int *)(plVar5 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
    (**(code **)(*plVar5 + 8))();
  }
LAB_1092f308c:
  appuStack_e0[0] = &PTR_DAT_110aea6e8;
  if ((plStack_d0 != (long *)0x0) &&
     (iVar13 = (int)plStack_d0[1] + -1, *(int *)(plStack_d0 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plStack_d0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_d0 + 8))();
  }
  iVar13 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return;
}



/* Entry: 1092f3894; end: 1092f3897;  */

void FUN_1092f3894(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea520;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092f3898; end: 1092f3923;  */

void FUN_1092f3898(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)param_1[1];
  plVar2 = plVar3;
  if (plVar4 != plVar3) {
    do {
      plVar4 = plVar4 + -1;
      plVar2 = (long *)*plVar4;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))();
      }
    } while (plVar4 != plVar3);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1092f3924; end: 1092f3937;  */

void FUN_1092f3924(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092f3938; end: 1092f397b;  */

undefined8 * FUN_1092f3938(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aea520;
  func_0x0001092ea740();
  *param_1 = &PTR_FUN_110aeaa98;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092f397c; end: 1092f397f;  */

void FUN_1092f397c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea520;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092f3980; end: 1092f3993;  */

void FUN_1092f3980(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092f3994; end: 1092f39cf;  */

undefined8 * FUN_1092f3994(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110aea520;
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x0001092ea740();
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 1092f39d0; end: 1092f3a83;  */

undefined8 * FUN_1092f39d0(undefined8 *param_1,int param_2)

{
  int iVar1;
  long *plStack_28;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110aeaad8;
  plStack_28 = (long *)0x0;
  FUN_1092f3b10(param_1 + 2,(long)param_2,&plStack_28);
  if ((plStack_28 != (long *)0x0) &&
     (iVar1 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
    (**(code **)(*plStack_28 + 8))();
  }
  return param_1;
}



/* Entry: 1092f3a84; end: 1092f3b0f;  */

undefined8 * FUN_1092f3a84(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110aeaad8;
  func_0x0001092f3c2c(&puStack_28);
  return param_1;
}



/* Entry: 1092f3b10; end: 1092f3bab;  */

undefined8 * FUN_1092f3b10(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092f3bac(param_1);
    puVar1 = (undefined8 *)param_1[1];
    lVar2 = param_2 << 3;
    puVar3 = puVar1;
    do {
      *puVar3 = 0;
      FUN_1092eb3c8(puVar3,*param_3);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
    param_1[1] = puVar1 + param_2;
  }
  return param_1;
}



/* Entry: 1092f3bac; end: 1092f3be3;  */

void FUN_1092f3bac(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_1092f3bf8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_1092f3be4();
  puVar2 = (undefined8 *)&UNK_10f5664b1;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar2 != 0) {
    FUN_1092f3c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar2);
    return;
  }
  return;
}



/* Entry: 1092f3be4; end: 1092f3bf7;  */

void FUN_1092f3be4(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f5664b1;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar1 != 0) {
    FUN_1092f3c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 1092f3bf8; end: 1092f3c6b;  */

void FUN_1092f3bf8(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*param_1 != 0) {
    FUN_1092f3c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1092f3c6c; end: 1092f3cdb;  */

void FUN_1092f3c6c(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  while (plVar3 != param_2) {
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1092f3cdc; end: 1092f3d6b;  */

undefined8 * FUN_1092f3cdc(uint param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  
  if (param_1 < 4) {
    if ((int)param_1 < 2) {
      if (param_1 == 0) {
        FUN_1092f3d70();
        puVar2 = (undefined8 *)0x113829c58;
      }
      else {
        FUN_1092f3e14();
        puVar2 = (undefined8 *)0x113829c30;
      }
    }
    else if (param_1 == 2) {
      FUN_1092f3eb8();
      puVar2 = (undefined8 *)0x113829ca8;
    }
    else {
      FUN_1092f3f5c();
      puVar2 = (undefined8 *)0x113829c80;
    }
    return puVar2;
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_1092f3d6c();
  ppuVar1 = &PTR_DAT_110aea3f0;
  ___cxa_throw();
  *puVar2 = &PTR_FUN_110aea520;
  func_0x0001092ea740();
  *puVar2 = &PTR_DAT_110aea4f8;
  puVar2[1] = ppuVar1;
  return puVar2;
}



/* Entry: 1092f3d6c; end: 1092f3d6f;  */

undefined8 * FUN_1092f3d6c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aea520;
  func_0x0001092ea740();
  *param_1 = &PTR_DAT_110aea4f8;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092f3d70; end: 1092f3e13;  */

undefined8 FUN_1092f3d70(void)

{
  int iVar1;
  
  if ((bRam0000000113829c78 & 1) == 0) {
    iVar1 = 0x13829c78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829c58 = 1;
      func_0x000107c31940(0x113829c60,&UNK_10f5664de);
      ___cxa_atexit(FUN_1092f4000,0x113829c58,0x100000000);
      ___cxa_guard_release(0x113829c78);
    }
  }
  return 0x113829c58;
}



/* Entry: 1092f3e14; end: 1092f3eb7;  */

undefined8 FUN_1092f3e14(void)

{
  int iVar1;
  
  if ((bRam0000000113829c50 & 1) == 0) {
    iVar1 = 0x13829c50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829c30 = 0x100000000;
      func_0x000107c31940(0x113829c38,&UNK_10f5664dc);
      ___cxa_atexit(FUN_1092f4000,0x113829c30,0x100000000);
      ___cxa_guard_release(0x113829c50);
    }
  }
  return 0x113829c30;
}



/* Entry: 1092f3eb8; end: 1092f3f5b;  */

undefined8 FUN_1092f3eb8(void)

{
  int iVar1;
  
  if ((bRam0000000113829cc8 & 1) == 0) {
    iVar1 = 0x13829cc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829ca8 = 0x200000003;
      func_0x000107c31940(0x113829cb0,&UNK_10f5664e2);
      ___cxa_atexit(FUN_1092f4000,0x113829ca8,0x100000000);
      ___cxa_guard_release(0x113829cc8);
    }
  }
  return 0x113829ca8;
}



/* Entry: 1092f3f5c; end: 1092f3fff;  */

undefined8 FUN_1092f3f5c(void)

{
  int iVar1;
  
  if ((bRam0000000113829ca0 & 1) == 0) {
    iVar1 = 0x13829ca0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829c80 = 0x300000002;
      func_0x000107c31940(0x113829c88,&UNK_10f5664e0);
      ___cxa_atexit(FUN_1092f4000,0x113829c80,0x100000000);
      ___cxa_guard_release(0x113829ca0);
    }
  }
  return 0x113829c80;
}



/* Entry: 1092f4000; end: 1092f402f;  */

long FUN_1092f4000(long param_1)

{
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1092f4030; end: 1092f409b;  */

int FUN_1092f4030(uint param_1,uint param_2)

{
  param_2 = param_2 ^ param_1;
  return *(int *)((ulong)(param_2 >> 4 & 0xf) * 4 + 0x1132cf210) +
         *(int *)((ulong)(param_2 & 0xf) * 4 + 0x1132cf210) +
         *(int *)((ulong)(param_2 >> 8 & 0xf) * 4 + 0x1132cf210) +
         *(int *)((ulong)(param_2 >> 0xc & 0xf) * 4 + 0x1132cf210) +
         *(int *)((ulong)(param_2 >> 0x10 & 0xf) * 4 + 0x1132cf210) +
         *(int *)((ulong)(param_2 >> 0x14 & 0xf) * 4 + 0x1132cf210) +
         *(int *)((ulong)(param_2 >> 0x18 & 0xf) * 4 + 0x1132cf210) +
         *(int *)((ulong)(param_2 >> 0x1c) * 4 + 0x1132cf210);
}



/* Entry: 1092f409c; end: 1092f4137;  */

void FUN_1092f409c(undefined8 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  long *in_stack_ffffffffffffffc8;
  
  FUN_1092f4138(&stack0xffffffffffffffc8);
  if (in_stack_ffffffffffffffc8 != (long *)0x0) {
    lVar7 = in_stack_ffffffffffffffc8[1];
    *param_1 = in_stack_ffffffffffffffc8;
    if ((int)lVar7 != 0) {
      return;
    }
    *(undefined4 *)(in_stack_ffffffffffffffc8 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092f4134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_stack_ffffffffffffffc8 + 8))();
    return;
  }
  param_2 = param_2 ^ 0x5412;
  param_3 = param_3 ^ 0x5412;
  uVar5 = 0;
  uVar8 = 0x7fffffff;
  lVar7 = 0x20;
  puVar6 = (uint *)&UNK_10dfc4d94;
  do {
    uVar1 = puVar6[-1];
    if (uVar1 == param_2 || uVar1 == param_3) {
      puVar4 = (undefined8 *)0x20;
      __Znwm();
      uVar5 = *puVar6;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_FUN_110aeab10;
      uVar8 = (ulong)(uVar5 >> 3 & 3);
      FUN_1092f3cdc();
      puVar4[2] = uVar8;
      bVar2 = (byte)uVar5;
      goto LAB_1092f4234;
    }
    uVar3 = (ulong)param_2;
    FUN_1092f4030((ulong)param_2,uVar1);
    if ((int)uVar3 < (int)uVar8) {
      uVar5 = *puVar6;
      uVar8 = uVar3;
    }
    if ((param_2 != param_3) &&
       (uVar3 = (ulong)param_3, FUN_1092f4030((ulong)param_3,uVar1), (int)uVar3 < (int)uVar8)) {
      uVar5 = *puVar6;
      uVar8 = uVar3;
    }
    puVar6 = puVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if ((int)uVar8 < 4) {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_110aeab10;
    uVar8 = (ulong)(uVar5 >> 3 & 3);
    FUN_1092f3cdc();
    puVar4[2] = uVar8;
    bVar2 = (byte)uVar5;
LAB_1092f4234:
    *(byte *)(puVar4 + 3) = bVar2 & 7;
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 1092f4138; end: 1092f427f;  */

void FUN_1092f4138(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = 0;
  uVar9 = 0x7fffffff;
  lVar8 = 0x20;
  puVar7 = (uint *)&UNK_10dfc4d94;
  do {
    uVar1 = puVar7[-1];
    if (uVar1 == (uint)param_2 || uVar1 == (uint)param_3) {
      puVar4 = (undefined8 *)0x20;
      __Znwm();
      uVar6 = *puVar7;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_FUN_110aeab10;
      uVar5 = (ulong)(uVar6 >> 3 & 3);
      FUN_1092f3cdc();
      puVar4[2] = uVar5;
      bVar2 = (byte)uVar6;
      goto LAB_1092f4234;
    }
    uVar3 = param_2;
    FUN_1092f4030(param_2,uVar1);
    if ((int)uVar3 < (int)uVar9) {
      uVar6 = *puVar7;
      uVar9 = uVar3;
    }
    if (((uint)param_2 != (uint)param_3) &&
       (uVar3 = param_3, FUN_1092f4030(param_3,uVar1), (int)uVar3 < (int)uVar9)) {
      uVar6 = *puVar7;
      uVar9 = uVar3;
    }
    puVar7 = puVar7 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((int)uVar9 < 4) {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_110aeab10;
    uVar5 = (ulong)(uVar6 >> 3 & 3);
    FUN_1092f3cdc();
    puVar4[2] = uVar5;
    bVar2 = (byte)uVar6;
LAB_1092f4234:
    *(byte *)(puVar4 + 3) = bVar2 & 7;
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 1092f4280; end: 1092f4287;  */

void FUN_1092f4280(void)

{
  return;
}



/* Entry: 1092f4288; end: 1092f42eb;  */

void FUN_1092f4288(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092f42ec; end: 1092f4713;  */

void FUN_1092f42ec(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuStack_c8;
  undefined4 uStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined4 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  (**(code **)(**(long **)(*param_3 + 0x10) + 0x18))(&plStack_78);
  uStack_68 = 0;
  ppuStack_70 = &PTR_FUN_110aeaf80;
  if (plStack_78 == (long *)0x0) {
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)0x0;
  }
  else {
    plStack_60 = plStack_78;
    plStack_58 = (long *)0x0;
    if ((int)plStack_78[1] == 0) {
      *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
      (**(code **)(*plStack_78 + 8))();
    }
  }
  FUN_1092fe3dc(&plStack_80,&ppuStack_70,param_4);
  plVar3 = (long *)plStack_80[5];
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plStack_90 = (long *)plStack_80[2];
  if (plStack_90 != (long *)0x0) {
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
  }
  FUN_1092fcae4(&plStack_88,param_2 + 0x10,&plStack_90);
  if ((plStack_90 != (long *)0x0) &&
     (iVar1 = (int)plStack_90[1] + -1, *(int *)(plStack_90 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_90 + 1) = 0xdeadf001;
    (**(code **)(*plStack_90 + 8))();
  }
  lVar2 = 0x50;
  __Znwm();
  plVar4 = (long *)plStack_88[5];
  if (plVar4 != (long *)0x0) {
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  }
  uStack_a8 = 0;
  ppuStack_b0 = &PTR_FUN_110ae9d40;
  plVar5 = (long *)plStack_88[4];
  if (plVar5 != (long *)0x0) {
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  }
  uStack_c0 = 0;
  ppuStack_c8 = &PTR_DAT_110aea660;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plStack_b8 = plVar3;
  plStack_a0 = plVar5;
  plStack_98 = plVar4;
  FUN_1092eb0ac(lVar2,&plStack_98,&ppuStack_b0,&ppuStack_c8,0xc);
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  *param_1 = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if ((plVar5 != (long *)0x0) &&
     (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if ((plStack_88 != (long *)0x0) &&
     (iVar1 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
    (**(code **)(*plStack_88 + 8))();
  }
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if ((plStack_80 != (long *)0x0) &&
     (iVar1 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
    (**(code **)(*plStack_80 + 8))();
  }
  ppuStack_70 = &PTR_FUN_110aeaf80;
  if ((plStack_58 != (long *)0x0) &&
     (iVar1 = (int)plStack_58[1] + -1, *(int *)(plStack_58 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_58 + 1) = 0xdeadf001;
    (**(code **)(*plStack_58 + 8))();
  }
  if ((plStack_60 != (long *)0x0) &&
     (iVar1 = (int)plStack_60[1] + -1, *(int *)(plStack_60 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_60 + 1) = 0xdeadf001;
    (**(code **)(*plStack_60 + 8))();
  }
  return;
}



/* Entry: 1092f4714; end: 1092f4857;  */

undefined8 * FUN_1092f4714(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aeaf80;
  plVar2 = (long *)param_1[3];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092f4858; end: 1092f490f;  */

undefined4 * FUN_1092f4858(undefined4 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = param_2;
  plVar2 = (long *)(param_1 + 2);
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *plVar2 = (long)puVar1;
  *puVar1 = param_3;
  *(undefined8 **)(param_1 + 4) = puVar1 + 1;
  *(undefined8 **)(param_1 + 6) = puVar1 + 1;
  lVar4 = 2;
  FUN_1092f9b58();
  plVar2[1] = param_4;
  lVar5 = (long)(plVar2 + 1) - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
  _memcpy(lVar5);
  lVar3 = *(long *)(param_1 + 2);
  *(long *)(param_1 + 2) = lVar5;
  *(long **)(param_1 + 4) = plVar2 + 2;
  *(long **)(param_1 + 6) = plVar2 + lVar4;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  *(long **)(param_1 + 4) = plVar2 + 2;
  return param_1;
}



/* Entry: 1092f4910; end: 1092f49bb;  */

long * FUN_1092f4910(uint param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  long *extraout_x8;
  
  if ((param_1 & 0x80000003) == 1) {
    plVar2 = (long *)(ulong)(uint)((int)(param_1 - 0x11) >> 2);
    FUN_1092f49bc(plVar2);
    return plVar2;
  }
  puVar3 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar3 = &PTR_FUN_110aea548;
  puVar3[1] = 0;
  iVar15 = 0x10aea560;
  ___cxa_throw();
  if (iVar15 == 1) {
    ___cxa_begin_catch(puVar3);
    puVar3 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    *puVar3 = &PTR_FUN_110aea548;
    puVar3[1] = 0;
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1092f49a8);
    (*pcVar1)();
  }
  __Unwind_Resume();
  func_0x000104bd46a0();
  if ((bRam0000000113829ce8 & 1) == 0) {
    iVar15 = 0x13829ce8;
    ___cxa_guard_acquire();
    if (iVar15 != 0) {
      FUN_1092f4a8c(0x113829cd0);
      ___cxa_atexit(FUN_1092f9454,0x113829cd0,0x100000000);
      ___cxa_guard_release(0x113829ce8);
    }
  }
  if (0xffffffd7 < (int)puVar3 - 0x29U) {
    return *(long **)(lRam0000000113829cd0 + ((ulong)puVar3 & 0xffffffff) * 8 + -8);
  }
  uVar4 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092f3d6c();
  ___cxa_throw();
  ___cxa_guard_abort(0x113829ce8);
  __Unwind_Resume(uVar4);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 0;
  FUN_1092f9a90(0);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1300000001;
  *puVar5 = 7;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1000000001;
  *puVar7 = 10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xd00000001;
  *puVar8 = 0xd;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x900000001;
  *puVar9 = 0x11;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,1,uVar4,puVar5,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2200000001;
  *puVar5 = 10;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1c00000001;
  *puVar7 = 0x10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1600000001;
  *puVar8 = 0x16;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1000000001;
  *puVar9 = 0x1c;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,2,uVar4,puVar5,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x3700000001;
  *puVar5 = 0xf;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2c00000001;
  *puVar7 = 0x1a;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1100000002;
  *puVar8 = 0x12;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xd00000002;
  *puVar9 = 0x16;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,3,uVar4,puVar5,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x5000000001;
  *puVar5 = 0x14;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2000000002;
  *puVar7 = 0x12;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000002;
  *puVar8 = 0x1a;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x900000004;
  *puVar9 = 0x10;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,4,uVar4,puVar5,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6c00000001;
  *puVar5 = 0x1a;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2b00000002;
  *puVar7 = 0x18;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000002;
  FUN_1092f4858(uVar10,0x12,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xb00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000002;
  FUN_1092f4858(uVar11,0x16,puVar3,puVar6);
  FUN_1092f9478(plVar2,5,uVar4,puVar5,puVar7,uVar10,uVar11);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x4400000002;
  *puVar5 = 0x12;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1b00000004;
  *puVar7 = 0x10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1300000004;
  *puVar8 = 0x18;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000004;
  *puVar9 = 0x1c;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,6,uVar4,puVar5,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x4e00000002;
  *puVar5 = 0x14;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1f00000004;
  *puVar7 = 0x12;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000004;
  FUN_1092f4858(uVar10,0x12,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xd00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000001;
  FUN_1092f4858(uVar11,0x1a,puVar3,puVar6);
  FUN_1092f9478(plVar2,7,uVar4,puVar5,puVar7,uVar10,uVar11);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6100000002;
  *puVar5 = 0x18;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2600000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2700000002;
  FUN_1092f4858(uVar10,0x16,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1200000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1300000002;
  FUN_1092f4858(uVar11,0x16,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xe00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000002;
  FUN_1092f4858(uVar12,0x1a,puVar3,puVar6);
  FUN_1092f9478(plVar2,8,uVar4,puVar5,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7400000002;
  *puVar5 = 0x1e;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2400000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2500000002;
  FUN_1092f4858(uVar10,0x16,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1000000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000004;
  FUN_1092f4858(uVar11,0x14,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xc00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000004;
  FUN_1092f4858(uVar12,0x18,puVar3,puVar6);
  FUN_1092f9478(plVar2,9,uVar4,puVar5,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 3;
  FUN_1092f9a90(3);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x4400000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x4500000002;
  FUN_1092f4858(uVar10,0x12,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2b00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000001;
  FUN_1092f4858(uVar11,0x1a,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1300000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000002;
  FUN_1092f4858(uVar12,0x18,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000002;
  FUN_1092f4858(uVar13,0x1c,puVar3,puVar6);
  FUN_1092f9478(plVar2,10,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x5100000004;
  *puVar5 = 0x14;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x3200000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3300000004;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1600000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000004;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xc00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000008;
  FUN_1092f4858(uVar12,0x18,puVar3,puVar6);
  FUN_1092f9478(plVar2,0xb,uVar4,puVar5,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 3;
  FUN_1092f9a90(3);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x5c00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5d00000002;
  FUN_1092f4858(uVar10,0x18,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2400000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2500000002;
  FUN_1092f4858(uVar11,0x16,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1400000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1500000006;
  FUN_1092f4858(uVar12,0x1a,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xe00000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000004;
  FUN_1092f4858(uVar13,0x1c,puVar3,puVar6);
  FUN_1092f9478(plVar2,0xc,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6b00000004;
  *puVar5 = 0x1a;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2500000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2600000001;
  FUN_1092f4858(uVar10,0x16,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1400000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1500000004;
  FUN_1092f4858(uVar11,0x18,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xb0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000004;
  FUN_1092f4858(uVar12,0x16,puVar3,puVar6);
  FUN_1092f9478(plVar2,0xd,uVar4,puVar5,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7300000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000001;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2800000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2900000005;
  FUN_1092f4858(uVar11,0x18,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x100000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000005;
  FUN_1092f4858(uVar12,0x14,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xc0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000005;
  FUN_1092f4858(uVar13,0x18,puVar3,puVar6);
  FUN_1092f9478(plVar2,0xe,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x5700000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5800000001;
  FUN_1092f4858(uVar10,0x16,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2900000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2a00000005;
  FUN_1092f4858(uVar11,0x18,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000007;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xc0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000007;
  FUN_1092f4858(uVar13,0x18,puVar3,puVar6);
  FUN_1092f9478(plVar2,0xf,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6200000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6300000001;
  FUN_1092f4858(uVar10,0x18,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2d00000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000003;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x130000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000002;
  FUN_1092f4858(uVar12,0x18,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000d;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x10,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6b00000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6c00000005;
  FUN_1092f4858(uVar10,0x1c,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000001;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1600000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x170000000f;
  FUN_1092f4858(uVar12,0x1c,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000011;
  FUN_1092f4858(uVar13,0x1c,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x11,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7800000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7900000001;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2b00000009;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000004;
  FUN_1092f4858(uVar11,0x1a,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1600000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000001;
  FUN_1092f4858(uVar12,0x1c,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000013;
  FUN_1092f4858(uVar13,0x1c,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x12,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7100000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7200000004;
  FUN_1092f4858(uVar10,0x1c,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2c00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d0000000b;
  FUN_1092f4858(uVar11,0x1a,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1500000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000004;
  FUN_1092f4858(uVar12,0x1a,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xd00000009;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000010;
  FUN_1092f4858(uVar13,0x1a,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x13,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6b00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6c00000005;
  FUN_1092f4858(uVar10,0x1c,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2900000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2a0000000d;
  FUN_1092f4858(uVar11,0x1a,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000005;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf0000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000a;
  FUN_1092f4858(uVar13,0x1c,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x14,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7400000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000004;
  FUN_1092f4858(uVar10,0x1c,puVar3,puVar6);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2a00000011;
  *puVar5 = 0x1a;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1600000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000006;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1000000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000006;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x15,uVar4,uVar10,puVar5,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6f00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7000000007;
  FUN_1092f4858(uVar10,0x1c,puVar3,puVar6);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e00000011;
  *puVar5 = 0x1c;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000010;
  FUN_1092f4858(uVar11,0x1e,puVar3,puVar6);
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xd00000022;
  *puVar7 = 0x18;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,0x16,uVar4,uVar10,puVar5,uVar11,puVar7);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7900000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000005;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2f00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000e;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000010;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000e;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x17,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7500000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7600000004;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2d00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000e;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000010;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x100000001e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000002;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x18,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x6a00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6b00000004;
  FUN_1092f4858(uVar10,0x1a,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2f00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000d;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000016;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000d;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x19,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x720000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7300000002;
  FUN_1092f4858(uVar10,0x1c,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000004;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x160000001c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000006;
  FUN_1092f4858(uVar12,0x1c,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1000000021;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000004;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x1a,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7a00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000004;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2d00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000003;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1700000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000001a;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001c;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x1b,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7500000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x760000000a;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2d00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000017;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000001f;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001f;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x1c,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7400000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000007;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2d00000015;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000007;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1700000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000025;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001a;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x1d,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7300000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x740000000a;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2f00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000a;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000019;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000017;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000019;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x1e,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x730000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000003;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f0000001d;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000002a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000001;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000017;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001c;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x1f,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 6;
  FUN_1092f9a90(6);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7300000011;
  *puVar5 = 0x1e;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(puVar5 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000017;
  FUN_1092f4858(uVar10,0x1c,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000023;
  FUN_1092f4858(uVar11,0x1e,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000023;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x20,uVar4,puVar5,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7300000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000001;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e0000000e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000015;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000001d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000013;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000002e;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x21,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x730000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000006;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e0000000e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000017;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000002c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000007;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x100000003b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000001;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x22,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x790000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000007;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2f0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000001a;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000027;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000029;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x23,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7900000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a0000000e;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2f00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3000000022;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000002e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000a;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000040;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x24,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7a00000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000004;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e0000001d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f0000000e;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000031;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000a;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000018;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000002e;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x25,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7a00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000012;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2e0000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000020;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000030;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf0000002a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000020;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x26,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar4 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7500000014;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7600000004;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2f00000028;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3000000007;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x180000002b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000016;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000043;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar2,0x27,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar2);
  iVar15 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar14 = (long *)0x38;
  __Znwm();
  uVar4 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x7600000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7700000006;
  FUN_1092f4858(uVar10,0x1e,puVar3,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x2f00000012;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000001f;
  FUN_1092f4858(uVar11,0x1c,puVar3,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0x1800000022;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000022;
  FUN_1092f4858(uVar12,0x1e,puVar3,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar3 = (undefined8 *)0x8;
  __Znwm();
  *puVar3 = 0xf00000014;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000003d;
  FUN_1092f4858(uVar13,0x1e,puVar3,puVar6);
  FUN_1092f9478(plVar14,0x28,uVar4,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  plVar2 = extraout_x8;
  FUN_1092f98a0(extraout_x8,plVar14);
  iVar15 = (int)plVar14[1] + -1;
  *(int *)(plVar14 + 1) = iVar15;
  if (iVar15 != 0) {
    return plVar2;
  }
  *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092f8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 8))(plVar14);
  return plVar14;
}



/* Entry: 1092f49bc; end: 1092f4a8b;  */

long * FUN_1092f49bc(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *extraout_x8;
  
  if ((bRam0000000113829ce8 & 1) == 0) {
    iVar1 = 0x13829ce8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1092f4a8c(0x113829cd0);
      ___cxa_atexit(FUN_1092f9454,0x113829cd0,0x100000000);
      ___cxa_guard_release(0x113829ce8);
    }
  }
  if (0xffffffd7 < param_1 - 0x29) {
    return *(long **)(lRam0000000113829cd0 + (ulong)param_1 * 8 + -8);
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092f3d6c();
  ___cxa_throw();
  ___cxa_guard_abort(0x113829ce8);
  __Unwind_Resume(uVar2);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 0;
  FUN_1092f9a90(0);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1300000001;
  *puVar4 = 7;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000001;
  *puVar7 = 10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000001;
  *puVar8 = 0xd;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x900000001;
  *puVar9 = 0x11;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar3,1,uVar2,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2200000001;
  *puVar4 = 10;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1c00000001;
  *puVar7 = 0x10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000001;
  *puVar8 = 0x16;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000001;
  *puVar9 = 0x1c;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar3,2,uVar2,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x3700000001;
  *puVar4 = 0xf;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2c00000001;
  *puVar7 = 0x1a;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1100000002;
  *puVar8 = 0x12;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000002;
  *puVar9 = 0x16;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar3,3,uVar2,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5000000001;
  *puVar4 = 0x14;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2000000002;
  *puVar7 = 0x12;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000002;
  *puVar8 = 0x1a;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x900000004;
  *puVar9 = 0x10;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar3,4,uVar2,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6c00000001;
  *puVar4 = 0x1a;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2b00000002;
  *puVar7 = 0x18;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000002;
  FUN_1092f4858(uVar10,0x12,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xb00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000002;
  FUN_1092f4858(uVar11,0x16,puVar5,puVar6);
  FUN_1092f9478(plVar3,5,uVar2,puVar4,puVar7,uVar10,uVar11);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x4400000002;
  *puVar4 = 0x12;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1b00000004;
  *puVar7 = 0x10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1300000004;
  *puVar8 = 0x18;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000004;
  *puVar9 = 0x1c;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar3,6,uVar2,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x4e00000002;
  *puVar4 = 0x14;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1f00000004;
  *puVar7 = 0x12;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000004;
  FUN_1092f4858(uVar10,0x12,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000001;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  FUN_1092f9478(plVar3,7,uVar2,puVar4,puVar7,uVar10,uVar11);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6100000002;
  *puVar4 = 0x18;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2600000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2700000002;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1200000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1300000002;
  FUN_1092f4858(uVar11,0x16,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000002;
  FUN_1092f4858(uVar12,0x1a,puVar5,puVar6);
  FUN_1092f9478(plVar3,8,uVar2,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7400000002;
  *puVar4 = 0x1e;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2400000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2500000002;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000004;
  FUN_1092f4858(uVar11,0x14,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000004;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar3,9,uVar2,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 3;
  FUN_1092f9a90(3);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x4400000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x4500000002;
  FUN_1092f4858(uVar10,0x12,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2b00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000001;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1300000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000002;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000002;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar3,10,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5100000004;
  *puVar4 = 0x14;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x3200000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3300000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000004;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000008;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar3,0xb,uVar2,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 3;
  FUN_1092f9a90(3);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5c00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5d00000002;
  FUN_1092f4858(uVar10,0x18,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2400000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2500000002;
  FUN_1092f4858(uVar11,0x16,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1400000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1500000006;
  FUN_1092f4858(uVar12,0x1a,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000004;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar3,0xc,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6b00000004;
  *puVar4 = 0x1a;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2500000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2600000001;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1400000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1500000004;
  FUN_1092f4858(uVar11,0x18,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xb0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000004;
  FUN_1092f4858(uVar12,0x16,puVar5,puVar6);
  FUN_1092f9478(plVar3,0xd,uVar2,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000001;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2800000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2900000005;
  FUN_1092f4858(uVar11,0x18,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x100000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000005;
  FUN_1092f4858(uVar12,0x14,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000005;
  FUN_1092f4858(uVar13,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar3,0xe,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5700000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5800000001;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2900000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2a00000005;
  FUN_1092f4858(uVar11,0x18,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000007;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000007;
  FUN_1092f4858(uVar13,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar3,0xf,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6200000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6300000001;
  FUN_1092f4858(uVar10,0x18,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000003;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x130000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000002;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000d;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x10,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6b00000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6c00000005;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000001;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x170000000f;
  FUN_1092f4858(uVar12,0x1c,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000011;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x11,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7800000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7900000001;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2b00000009;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000004;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000001;
  FUN_1092f4858(uVar12,0x1c,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000013;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x12,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7100000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7200000004;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2c00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d0000000b;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1500000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000004;
  FUN_1092f4858(uVar12,0x1a,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000009;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000010;
  FUN_1092f4858(uVar13,0x1a,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x13,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6b00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6c00000005;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2900000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2a0000000d;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000005;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000a;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x14,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7400000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000004;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2a00000011;
  *puVar4 = 0x1a;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000006;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000006;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x15,uVar2,uVar10,puVar4,uVar11,uVar12);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6f00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7000000007;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e00000011;
  *puVar4 = 0x1c;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000010;
  FUN_1092f4858(uVar11,0x1e,puVar5,puVar6);
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000022;
  *puVar7 = 0x18;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar3,0x16,uVar2,uVar10,puVar4,uVar11,puVar7);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7900000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000005;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000e;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000010;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000e;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x17,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7500000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7600000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000e;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000010;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x100000001e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000002;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x18,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6a00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6b00000004;
  FUN_1092f4858(uVar10,0x1a,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000d;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000016;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000d;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x19,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x720000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7300000002;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000004;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x160000001c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000006;
  FUN_1092f4858(uVar12,0x1c,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000021;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000004;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x1a,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7a00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000003;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1700000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000001a;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001c;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x1b,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7500000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x760000000a;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000017;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000001f;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001f;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x1c,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7400000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000007;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000015;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000007;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1700000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000025;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001a;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x1d,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x740000000a;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000a;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000019;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000017;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000019;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x1e,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x730000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000003;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f0000001d;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000001;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000017;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001c;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x1f,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 6;
  FUN_1092f9a90(6);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000011;
  *puVar4 = 0x1e;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000017;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000023;
  FUN_1092f4858(uVar11,0x1e,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000023;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x20,uVar2,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000001;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000015;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000001d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000013;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000002e;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x21,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x730000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000006;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000017;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000007;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x100000003b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000001;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x22,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x790000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000007;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000001a;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000027;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000029;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x23,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7900000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a0000000e;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3000000022;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000a;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000040;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x24,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7a00000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000001d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f0000000e;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000031;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000a;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000018;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000002e;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x25,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7a00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000012;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000020;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000030;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000002a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000020;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x26,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uVar2 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7500000014;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7600000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000028;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3000000007;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000016;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000043;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar3,0x27,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar3);
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar14 = (long *)0x38;
  __Znwm();
  uVar2 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7600000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7700000006;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000012;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000001f;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000022;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000022;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000014;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000003d;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar14,0x28,uVar2,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  plVar3 = extraout_x8;
  FUN_1092f98a0(extraout_x8,plVar14);
  iVar1 = (int)plVar14[1] + -1;
  *(int *)(plVar14 + 1) = iVar1;
  if (iVar1 != 0) {
    return plVar3;
  }
  *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092f8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 8))(plVar14);
  return plVar14;
}



/* Entry: 1092f4a8c; end: 1092f9453;  */

void FUN_1092f4a8c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 0;
  FUN_1092f9a90(0);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1300000001;
  *puVar4 = 7;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000001;
  *puVar7 = 10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000001;
  *puVar8 = 0xd;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x900000001;
  *puVar9 = 0x11;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,1,uVar3,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2200000001;
  *puVar4 = 10;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1c00000001;
  *puVar7 = 0x10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000001;
  *puVar8 = 0x16;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000001;
  *puVar9 = 0x1c;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,2,uVar3,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x3700000001;
  *puVar4 = 0xf;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2c00000001;
  *puVar7 = 0x1a;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1100000002;
  *puVar8 = 0x12;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000002;
  *puVar9 = 0x16;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,3,uVar3,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5000000001;
  *puVar4 = 0x14;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2000000002;
  *puVar7 = 0x12;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000002;
  *puVar8 = 0x1a;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x900000004;
  *puVar9 = 0x10;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,4,uVar3,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6c00000001;
  *puVar4 = 0x1a;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2b00000002;
  *puVar7 = 0x18;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000002;
  FUN_1092f4858(uVar10,0x12,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xb00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000002;
  FUN_1092f4858(uVar11,0x16,puVar5,puVar6);
  FUN_1092f9478(plVar2,5,uVar3,puVar4,puVar7,uVar10,uVar11);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x4400000002;
  *puVar4 = 0x12;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1b00000004;
  *puVar7 = 0x10;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1300000004;
  *puVar8 = 0x18;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar8 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar6 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000004;
  *puVar9 = 0x1c;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar9 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,6,uVar3,puVar4,puVar7,puVar8,puVar9);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x4e00000002;
  *puVar4 = 0x14;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1f00000004;
  *puVar7 = 0x12;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000004;
  FUN_1092f4858(uVar10,0x12,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000001;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  FUN_1092f9478(plVar2,7,uVar3,puVar4,puVar7,uVar10,uVar11);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6100000002;
  *puVar4 = 0x18;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2600000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2700000002;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1200000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1300000002;
  FUN_1092f4858(uVar11,0x16,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000002;
  FUN_1092f4858(uVar12,0x1a,puVar5,puVar6);
  FUN_1092f9478(plVar2,8,uVar3,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7400000002;
  *puVar4 = 0x1e;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2400000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2500000002;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000004;
  FUN_1092f4858(uVar11,0x14,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000004;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar2,9,uVar3,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x4400000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x4500000002;
  FUN_1092f4858(uVar10,0x12,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2b00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000001;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1300000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000002;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000002;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar2,10,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5100000004;
  *puVar4 = 0x14;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x3200000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3300000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000004;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000008;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar2,0xb,uVar3,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5c00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5d00000002;
  FUN_1092f4858(uVar10,0x18,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2400000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2500000002;
  FUN_1092f4858(uVar11,0x16,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1400000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1500000006;
  FUN_1092f4858(uVar12,0x1a,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000004;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar2,0xc,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6b00000004;
  *puVar4 = 0x1a;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2500000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2600000001;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1400000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1500000004;
  FUN_1092f4858(uVar11,0x18,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xb0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000004;
  FUN_1092f4858(uVar12,0x16,puVar5,puVar6);
  FUN_1092f9478(plVar2,0xd,uVar3,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000001;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2800000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2900000005;
  FUN_1092f4858(uVar11,0x18,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x100000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000005;
  FUN_1092f4858(uVar12,0x14,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000005;
  FUN_1092f4858(uVar13,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar2,0xe,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x5700000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5800000001;
  FUN_1092f4858(uVar10,0x16,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2900000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2a00000005;
  FUN_1092f4858(uVar11,0x18,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000007;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xc0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000007;
  FUN_1092f4858(uVar13,0x18,puVar5,puVar6);
  FUN_1092f9478(plVar2,0xf,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6200000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6300000001;
  FUN_1092f4858(uVar10,0x18,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000003;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x130000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000002;
  FUN_1092f4858(uVar12,0x18,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000d;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x10,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6b00000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6c00000005;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000001;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x170000000f;
  FUN_1092f4858(uVar12,0x1c,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000011;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x11,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7800000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7900000001;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2b00000009;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000004;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000001;
  FUN_1092f4858(uVar12,0x1c,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xe00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000013;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x12,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7100000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7200000004;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2c00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d0000000b;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1500000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000004;
  FUN_1092f4858(uVar12,0x1a,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000009;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000010;
  FUN_1092f4858(uVar13,0x1a,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x13,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6b00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6c00000005;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2900000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2a0000000d;
  FUN_1092f4858(uVar11,0x1a,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000005;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000a;
  FUN_1092f4858(uVar13,0x1c,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x14,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7400000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000004;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2a00000011;
  *puVar4 = 0x1a;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1600000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000006;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000006;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x15,uVar3,uVar10,puVar4,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6f00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7000000007;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e00000011;
  *puVar4 = 0x1c;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000010;
  FUN_1092f4858(uVar11,0x1e,puVar5,puVar6);
  puVar7 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xd00000022;
  *puVar7 = 0x18;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar7 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar7 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar7 + 6) = puVar6 + 1;
  FUN_1092f9478(plVar2,0x16,uVar3,uVar10,puVar4,uVar11,puVar7);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7900000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000005;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000e;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000010;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000e;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x17,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7500000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7600000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000e;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000010;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x100000001e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000002;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x18,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x6a00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6b00000004;
  FUN_1092f4858(uVar10,0x1a,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000d;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000016;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000d;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x19,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x720000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7300000002;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000004;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x160000001c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000006;
  FUN_1092f4858(uVar12,0x1c,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1000000021;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000004;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x1a,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7a00000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000003;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1700000008;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000001a;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001c;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x1b,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7500000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x760000000a;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000003;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000017;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000001f;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001f;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x1c,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7400000007;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000007;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2d00000015;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000007;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1700000001;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000025;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001a;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x1d,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000005;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x740000000a;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000000a;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000f;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000019;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000017;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000019;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x1e,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x730000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000003;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f0000001d;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000001;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000017;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001c;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x1f,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  puVar4 = (undefined4 *)0x20;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000011;
  *puVar4 = 0x1e;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar4 + 2) = puVar6;
  *puVar6 = puVar5;
  *(undefined8 **)(puVar4 + 4) = puVar6 + 1;
  *(undefined8 **)(puVar4 + 6) = puVar6 + 1;
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000017;
  FUN_1092f4858(uVar10,0x1c,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000023;
  FUN_1092f4858(uVar11,0x1e,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000023;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x20,uVar3,puVar4,uVar10,uVar11,uVar12);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7300000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000001;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000015;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000001d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000013;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000002e;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x21,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x730000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000006;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000017;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000007;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x100000003b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000001;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x22,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x790000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000007;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f0000000c;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000001a;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000027;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000016;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000029;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x23,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7900000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a0000000e;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000006;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3000000022;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002e;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000a;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000002;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000040;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x24,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7a00000011;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000001d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f0000000e;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000031;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000a;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000018;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000002e;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x25,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7a00000004;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7b00000012;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2e0000000d;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000020;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000030;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x190000000e;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000002a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000020;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x26,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7500000014;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7600000004;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000028;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3000000007;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x180000002b;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000016;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf0000000a;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000043;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x27,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar10 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x7600000013;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7700000006;
  FUN_1092f4858(uVar10,0x1e,puVar5,puVar6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x2f00000012;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x300000001f;
  FUN_1092f4858(uVar11,0x1c,puVar5,puVar6);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0x1800000022;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1900000022;
  FUN_1092f4858(uVar12,0x1e,puVar5,puVar6);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  *puVar5 = 0xf00000014;
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000003d;
  FUN_1092f4858(uVar13,0x1e,puVar5,puVar6);
  FUN_1092f9478(plVar2,0x28,uVar3,uVar10,uVar11,uVar12,uVar13);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  FUN_1092f98a0(param_1,plVar2);
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092f8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2);
  return;
}



/* Entry: 1092f9454; end: 1092f9477;  */

undefined8 FUN_1092f9454(undefined8 param_1)

{
  FUN_1092f9b8c();
  return param_1;
}



/* Entry: 1092f9478; end: 1092f9527;  */

undefined8 *
FUN_1092f9478(undefined8 *param_1,undefined4 param_2,undefined8 param_3,int *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110aeab90;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  param_1[4] = puVar1 + 4;
  param_1[5] = puVar1 + 4;
  param_1[3] = puVar1;
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  puVar1[3] = param_7;
  lVar3 = *(long *)(param_4 + 4) - (long)*(undefined8 **)(param_4 + 2);
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    lVar3 = lVar3 >> 3;
    puVar1 = *(undefined8 **)(param_4 + 2);
    do {
      iVar2 = iVar2 + (((int *)*puVar1)[1] + *param_4) * *(int *)*puVar1;
      lVar3 = lVar3 + -1;
      puVar1 = puVar1 + 1;
    } while (lVar3 != 0);
  }
  *(int *)(param_1 + 6) = iVar2;
  return param_1;
}



/* Entry: 1092f9528; end: 1092f95fb;  */

undefined8 * FUN_1092f9528(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_110aeab90;
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    if (*plVar4 != 0) {
      plVar4[1] = *plVar4;
      __ZdlPv();
    }
    __ZdlPv(plVar4);
  }
  lVar1 = param_1[3];
  lVar3 = param_1[4];
  if (lVar3 != lVar1) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(lVar1 + uVar6 * 8);
      if (lVar5 != 0) {
        lVar1 = *(long *)(lVar5 + 8);
        lVar3 = *(long *)(lVar5 + 0x10);
        if (lVar3 != lVar1) {
          uVar7 = 0;
          do {
            lVar2 = *(long *)(lVar1 + uVar7 * 8);
            if (lVar2 != 0) {
              __ZdlPv(lVar2);
              lVar1 = *(long *)(lVar5 + 8);
              lVar3 = *(long *)(lVar5 + 0x10);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ulong)(lVar3 - lVar1 >> 3));
        }
        if (lVar1 != 0) {
          *(long *)(lVar5 + 0x10) = lVar1;
          __ZdlPv();
        }
        __ZdlPv(lVar5);
        lVar1 = param_1[3];
        lVar3 = param_1[4];
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar3 - lVar1 >> 3));
  }
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092f95fc; end: 1092f95ff;  */

undefined8 * FUN_1092f95fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_110aeab90;
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    if (*plVar4 != 0) {
      plVar4[1] = *plVar4;
      __ZdlPv();
    }
    __ZdlPv(plVar4);
  }
  lVar1 = param_1[3];
  lVar3 = param_1[4];
  if (lVar3 != lVar1) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(lVar1 + uVar6 * 8);
      if (lVar5 != 0) {
        lVar1 = *(long *)(lVar5 + 8);
        lVar3 = *(long *)(lVar5 + 0x10);
        if (lVar3 != lVar1) {
          uVar7 = 0;
          do {
            lVar2 = *(long *)(lVar1 + uVar7 * 8);
            if (lVar2 != 0) {
              __ZdlPv(lVar2);
              lVar1 = *(long *)(lVar5 + 8);
              lVar3 = *(long *)(lVar5 + 0x10);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ulong)(lVar3 - lVar1 >> 3));
        }
        if (lVar1 != 0) {
          *(long *)(lVar5 + 0x10) = lVar1;
          __ZdlPv();
        }
        __ZdlPv(lVar5);
        lVar1 = param_1[3];
        lVar3 = param_1[4];
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar3 - lVar1 >> 3));
  }
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092f9600; end: 1092f9613;  */

void FUN_1092f9600(void)

{
  FUN_1092f9528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092f9614; end: 1092f96ab;  */

long * FUN_1092f9614(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *extraout_x8;
  uint uVar16;
  long lVar17;
  int iVar18;
  
  lVar17 = 0;
  uVar16 = 0;
  iVar18 = 0x7fffffff;
  do {
    if (*(int *)(lVar17 * 4 + 0x1132cf250) == param_1) {
      uVar16 = (int)lVar17 + 7;
      goto FUN_1092f49bc;
    }
    iVar2 = param_1;
    FUN_1092f4030();
    uVar1 = (int)lVar17 + 7;
    if (iVar18 <= iVar2) {
      iVar2 = iVar18;
      uVar1 = uVar16;
    }
    uVar16 = uVar1;
    lVar17 = lVar17 + 1;
    iVar18 = iVar2;
  } while (lVar17 != 0x22);
  if (3 < iVar2) {
    return (long *)0x0;
  }
FUN_1092f49bc:
  if ((bRam0000000113829ce8 & 1) == 0) {
    iVar18 = 0x13829ce8;
    ___cxa_guard_acquire();
    if (iVar18 != 0) {
      FUN_1092f4a8c(0x113829cd0);
      ___cxa_atexit(FUN_1092f9454,0x113829cd0,0x100000000);
      ___cxa_guard_release(0x113829ce8);
    }
  }
  if (0xffffffd7 < uVar16 - 0x29) {
    return *(long **)(lRam0000000113829cd0 + (ulong)uVar16 * 8 + -8);
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092f3d6c();
  ___cxa_throw();
  ___cxa_guard_abort(0x113829ce8);
  __Unwind_Resume(uVar3);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 0;
  FUN_1092f9a90(0);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1300000001;
  *puVar5 = 7;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000001;
  *puVar8 = 10;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000001;
  *puVar9 = 0xd;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar9 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar7 + 1;
  puVar10 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x900000001;
  *puVar10 = 0x11;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  *(undefined8 *)(puVar10 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar10 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar10 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar10 + 6) = puVar7 + 1;
  FUN_1092f9478(plVar4,1,uVar3,puVar5,puVar8,puVar9,puVar10);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2200000001;
  *puVar5 = 10;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1c00000001;
  *puVar8 = 0x10;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000001;
  *puVar9 = 0x16;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar9 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar7 + 1;
  puVar10 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000001;
  *puVar10 = 0x1c;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  *(undefined8 *)(puVar10 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar10 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar10 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar10 + 6) = puVar7 + 1;
  FUN_1092f9478(plVar4,2,uVar3,puVar5,puVar8,puVar9,puVar10);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3700000001;
  *puVar5 = 0xf;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000001;
  *puVar8 = 0x1a;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1100000002;
  *puVar9 = 0x12;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar9 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar7 + 1;
  puVar10 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000002;
  *puVar10 = 0x16;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  *(undefined8 *)(puVar10 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar10 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar10 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar10 + 6) = puVar7 + 1;
  FUN_1092f9478(plVar4,3,uVar3,puVar5,puVar8,puVar9,puVar10);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5000000001;
  *puVar5 = 0x14;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2000000002;
  *puVar8 = 0x12;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000002;
  *puVar9 = 0x1a;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar9 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar7 + 1;
  puVar10 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x900000004;
  *puVar10 = 0x10;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  *(undefined8 *)(puVar10 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar10 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar10 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar10 + 6) = puVar7 + 1;
  FUN_1092f9478(plVar4,4,uVar3,puVar5,puVar8,puVar9,puVar10);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6c00000001;
  *puVar5 = 0x1a;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2b00000002;
  *puVar8 = 0x18;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000002;
  FUN_1092f4858(uVar11,0x12,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xb00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xc00000002;
  FUN_1092f4858(uVar12,0x16,puVar6,puVar7);
  FUN_1092f9478(plVar4,5,uVar3,puVar5,puVar8,uVar11,uVar12);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 2;
  FUN_1092f9a90(2);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x4400000002;
  *puVar5 = 0x12;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1b00000004;
  *puVar8 = 0x10;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  puVar9 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1300000004;
  *puVar9 = 0x18;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar9 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar9 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar9 + 6) = puVar7 + 1;
  puVar10 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000004;
  *puVar10 = 0x1c;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  *(undefined8 *)(puVar10 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar10 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar10 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar10 + 6) = puVar7 + 1;
  FUN_1092f9478(plVar4,6,uVar3,puVar5,puVar8,puVar9,puVar10);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x4e00000002;
  *puVar5 = 0x14;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1f00000004;
  *puVar8 = 0x12;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xf00000004;
  FUN_1092f4858(uVar11,0x12,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xe00000001;
  FUN_1092f4858(uVar12,0x1a,puVar6,puVar7);
  FUN_1092f9478(plVar4,7,uVar3,puVar5,puVar8,uVar11,uVar12);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6100000002;
  *puVar5 = 0x18;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2600000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2700000002;
  FUN_1092f4858(uVar11,0x16,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1200000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1300000002;
  FUN_1092f4858(uVar12,0x16,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xf00000002;
  FUN_1092f4858(uVar13,0x1a,puVar6,puVar7);
  FUN_1092f9478(plVar4,8,uVar3,puVar5,uVar11,uVar12,uVar13);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000002;
  *puVar5 = 0x1e;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2400000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2500000002;
  FUN_1092f4858(uVar11,0x16,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1100000004;
  FUN_1092f4858(uVar12,0x14,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xd00000004;
  FUN_1092f4858(uVar13,0x18,puVar6,puVar7);
  FUN_1092f9478(plVar4,9,uVar3,puVar5,uVar11,uVar12,uVar13);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x4400000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x4500000002;
  FUN_1092f4858(uVar11,0x12,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2b00000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2c00000001;
  FUN_1092f4858(uVar12,0x1a,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1300000006;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1400000002;
  FUN_1092f4858(uVar13,0x18,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000006;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000002;
  FUN_1092f4858(uVar14,0x1c,puVar6,puVar7);
  FUN_1092f9478(plVar4,10,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5100000004;
  *puVar5 = 0x14;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x3200000001;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x3300000004;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1700000004;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc00000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xd00000008;
  FUN_1092f4858(uVar13,0x18,puVar6,puVar7);
  FUN_1092f9478(plVar4,0xb,uVar3,puVar5,uVar11,uVar12,uVar13);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5c00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x5d00000002;
  FUN_1092f4858(uVar11,0x18,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2400000006;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2500000002;
  FUN_1092f4858(uVar12,0x16,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1500000006;
  FUN_1092f4858(uVar13,0x1a,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000007;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xf00000004;
  FUN_1092f4858(uVar14,0x1c,puVar6,puVar7);
  FUN_1092f9478(plVar4,0xc,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 3;
  FUN_1092f9a90(3);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6b00000004;
  *puVar5 = 0x1a;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2500000008;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2600000001;
  FUN_1092f4858(uVar11,0x16,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1400000008;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1500000004;
  FUN_1092f4858(uVar12,0x18,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xb0000000c;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xc00000004;
  FUN_1092f4858(uVar13,0x16,puVar6,puVar7);
  FUN_1092f9478(plVar4,0xd,uVar3,puVar5,uVar11,uVar12,uVar13);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7300000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7400000001;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2800000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2900000005;
  FUN_1092f4858(uVar12,0x18,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000000b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1100000005;
  FUN_1092f4858(uVar13,0x14,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc0000000b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xd00000005;
  FUN_1092f4858(uVar14,0x18,puVar6,puVar7);
  FUN_1092f9478(plVar4,0xe,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x5700000005;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x5800000001;
  FUN_1092f4858(uVar11,0x16,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2900000005;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2a00000005;
  FUN_1092f4858(uVar12,0x18,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000005;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000007;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xc0000000b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xd00000007;
  FUN_1092f4858(uVar14,0x18,puVar6,puVar7);
  FUN_1092f9478(plVar4,0xf,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6200000005;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x6300000001;
  FUN_1092f4858(uVar11,0x18,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d00000007;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2e00000003;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x130000000f;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1400000002;
  FUN_1092f4858(uVar13,0x18,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000000d;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x10,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6b00000001;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x6c00000005;
  FUN_1092f4858(uVar11,0x1c,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000a;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f00000001;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000001;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x170000000f;
  FUN_1092f4858(uVar13,0x1c,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xf00000011;
  FUN_1092f4858(uVar14,0x1c,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x11,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7800000005;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7900000001;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2b00000009;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2c00000004;
  FUN_1092f4858(uVar12,0x1a,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000011;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1700000001;
  FUN_1092f4858(uVar13,0x1c,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xe00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xf00000013;
  FUN_1092f4858(uVar14,0x1c,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x12,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7100000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7200000004;
  FUN_1092f4858(uVar11,0x1c,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2c00000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2d0000000b;
  FUN_1092f4858(uVar12,0x1a,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1500000011;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1600000004;
  FUN_1092f4858(uVar13,0x1a,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000009;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0xe00000010;
  FUN_1092f4858(uVar14,0x1a,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x13,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 4;
  FUN_1092f9a90(4);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6b00000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x6c00000005;
  FUN_1092f4858(uVar11,0x1c,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2900000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2a0000000d;
  FUN_1092f4858(uVar12,0x1a,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000000f;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000005;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf0000000f;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000000a;
  FUN_1092f4858(uVar14,0x1c,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x14,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7500000004;
  FUN_1092f4858(uVar11,0x1c,puVar6,puVar7);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2a00000011;
  *puVar5 = 0x1a;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1600000011;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1700000006;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000013;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1100000006;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x15,uVar3,uVar11,puVar5,uVar12,uVar13);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6f00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7000000007;
  FUN_1092f4858(uVar11,0x1c,puVar6,puVar7);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000011;
  *puVar5 = 0x1c;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000007;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000010;
  FUN_1092f4858(uVar12,0x1e,puVar6,puVar7);
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xd00000022;
  *puVar8 = 0x18;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar8 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar8 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar8 + 6) = puVar7 + 1;
  FUN_1092f9478(plVar4,0x16,uVar3,uVar11,puVar5,uVar12,puVar8);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7900000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7a00000005;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x300000000e;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000000b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x190000000e;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000010;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000000e;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x17,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000006;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7600000004;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d00000006;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2e0000000e;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000000b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000010;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000001e;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1100000002;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x18,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x6a00000008;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x6b00000004;
  FUN_1092f4858(uVar11,0x1a,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000008;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x300000000d;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000007;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000016;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000016;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000000d;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x19,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x720000000a;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7300000002;
  FUN_1092f4858(uVar11,0x1c,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000013;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f00000004;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x160000001c;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1700000006;
  FUN_1092f4858(uVar13,0x1c,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1000000021;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1100000004;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x1a,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 5;
  FUN_1092f9a90(5);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000008;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7b00000004;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d00000016;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2e00000003;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000008;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x180000001a;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf0000000c;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000001c;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x1b,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x760000000a;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d00000003;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2e00000017;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x190000001f;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf0000000b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000001f;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x1c,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7400000007;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7500000007;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2d00000015;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2e00000007;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1700000001;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1800000025;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000013;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000001a;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x1d,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7300000005;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x740000000a;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000013;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x300000000a;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000000f;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000019;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000017;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000019;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x1e,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x730000000d;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7400000003;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f0000001d;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000002a;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000001;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000017;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000001c;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x1f,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  puVar5 = (undefined4 *)0x20;
  __Znwm();
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7300000011;
  *puVar5 = 0x1e;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *(undefined8 **)(puVar5 + 2) = puVar7;
  *puVar7 = puVar6;
  *(undefined8 **)(puVar5 + 4) = puVar7 + 1;
  *(undefined8 **)(puVar5 + 6) = puVar7 + 1;
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000a;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f00000017;
  FUN_1092f4858(uVar11,0x1c,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000000a;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000023;
  FUN_1092f4858(uVar12,0x1e,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000013;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000023;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x20,uVar3,puVar5,uVar11,uVar12,uVar13);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7300000011;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7400000001;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000e;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f00000015;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000001d;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000013;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf0000000b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000002e;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x21,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 6;
  FUN_1092f9a90(6);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x730000000d;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7400000006;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000e;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f00000017;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000002c;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000007;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x100000003b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1100000001;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x22,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x790000000c;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7a00000007;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f0000000c;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x300000001a;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000027;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x190000000e;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000016;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000029;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x23,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7900000006;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7a0000000e;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000006;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x3000000022;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000002e;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x190000000a;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000002;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000040;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x24,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000011;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7b00000004;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000001d;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f0000000e;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000031;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x190000000a;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000018;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000002e;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x25,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7a00000004;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7b00000012;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2e0000000d;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x2f00000020;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000030;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x190000000e;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf0000002a;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000020;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x26,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7500000014;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7600000004;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000028;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x3000000007;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x180000002b;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000016;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf0000000a;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1000000043;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar4,0x27,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  FUN_1092f98a0(extraout_x8,plVar4);
  iVar18 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar15 = (long *)0x38;
  __Znwm();
  uVar3 = 7;
  FUN_1092f9a90(7);
  uVar11 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x7600000013;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x7700000006;
  FUN_1092f4858(uVar11,0x1e,puVar6,puVar7);
  uVar12 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x2f00000012;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x300000001f;
  FUN_1092f4858(uVar12,0x1c,puVar6,puVar7);
  uVar13 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0x1800000022;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x1900000022;
  FUN_1092f4858(uVar13,0x1e,puVar6,puVar7);
  uVar14 = 0x20;
  __Znwm(0x20);
  puVar6 = (undefined8 *)0x8;
  __Znwm();
  *puVar6 = 0xf00000014;
  puVar7 = (undefined8 *)0x8;
  __Znwm();
  *puVar7 = 0x100000003d;
  FUN_1092f4858(uVar14,0x1e,puVar6,puVar7);
  FUN_1092f9478(plVar15,0x28,uVar3,uVar11,uVar12,uVar13,uVar14);
  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
  plVar4 = extraout_x8;
  FUN_1092f98a0(extraout_x8,plVar15);
  iVar18 = (int)plVar15[1] + -1;
  *(int *)(plVar15 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092f8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 8))(plVar15);
    return plVar15;
  }
  return plVar4;
}



/* Entry: 1092f96ac; end: 1092f989f;  */

void FUN_1092f96ac(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar2 = *(int *)(param_2 + 0xc) * 4;
  lVar3 = 0x30;
  __Znwm();
  FUN_1092eb7c4();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  *param_1 = lVar3;
  FUN_1092ebac4(lVar3,0,0,9,9);
  FUN_1092ebac4(lVar3,iVar2 + 9,0,8,9);
  FUN_1092ebac4(lVar3,0,iVar2 + 9,9,8);
  lVar5 = (*(long **)(param_2 + 0x10))[1] - **(long **)(param_2 + 0x10);
  if (lVar5 != 0) {
    lVar4 = 0;
    lVar5 = lVar5 >> 2;
    do {
      lVar6 = 0;
      iVar1 = *(int *)(**(long **)(param_2 + 0x10) + lVar4 * 4);
      do {
        if (lVar4 == 0) {
          if ((lVar6 != 0) && (lVar5 + -1 != lVar6)) goto LAB_1092f9790;
        }
        else if ((lVar4 != lVar5 + -1) || (lVar6 != 0)) {
LAB_1092f9790:
          FUN_1092ebac4(lVar3,*(int *)(**(long **)(param_2 + 0x10) + lVar6 * 4) + -2,iVar1 + -2,5,5)
          ;
        }
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar5);
  }
  FUN_1092ebac4(lVar3,6,9,1,iVar2);
  FUN_1092ebac4(lVar3,9,6,iVar2,1);
  if (6 < *(int *)(param_2 + 0xc)) {
    FUN_1092ebac4(lVar3,iVar2 + 6,0,3,6);
    FUN_1092ebac4(lVar3,0,iVar2 + 6,6,3);
  }
  return;
}



/* Entry: 1092f98a0; end: 1092f9a8f;  */

long * FUN_1092f98a0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 *puStack_d8;
  undefined4 auStack_b0 [2];
  long lStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 < (long *)param_1[2]) {
    *plVar8 = 0;
    plVar7 = plVar8;
    FUN_1092f9c18(plVar8,param_2);
    plVar8 = plVar8 + 1;
    param_1[1] = (long)plVar8;
  }
  else {
    lVar12 = (long)plVar8 - *param_1;
    uVar1 = (lVar12 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1092f9c7c();
LAB_1092f9a5c:
      func_0x000104c4f740();
      func_0x0001092f9d0c(&lStack_a8);
      __Unwind_Resume();
      plVar8 = (long *)0x18;
      __Znwm();
      FUN_10925b8c4();
      if (param_1 != (long *)0x0) {
        puVar10 = (undefined4 *)*plVar8;
        puStack_d8 = auStack_b0;
        do {
          *puVar10 = *puStack_d8;
          param_1 = (long *)((long)param_1 + -1);
          puVar10 = puVar10 + 1;
          puStack_d8 = puStack_d8 + 2;
        } while (param_1 != (long *)0x0);
      }
      return plVar8;
    }
    uVar9 = param_1[2] - *param_1;
    uVar11 = (long)uVar9 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar11 = 0x1fffffffffffffff;
    }
    plStack_88 = param_1;
    if (uVar11 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar11 >> 0x3d != 0) goto LAB_1092f9a5c;
      lVar5 = uVar11 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar5 + lVar12);
    lVar12 = lVar5 + uVar11 * 8;
    *puVar2 = 0;
    lStack_a8 = lVar5;
    puStack_a0 = puVar2;
    plStack_98 = puVar2;
    lStack_90 = lVar12;
    FUN_1092f9c18(puVar2,param_2);
    plVar8 = puVar2 + 1;
    plVar7 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    uStack_68 = 0;
    puVar2 = (undefined8 *)((long)puVar2 + ((long)plVar7 - (long)plVar3));
    puStack_58 = puVar2;
    plVar6 = plVar7;
    plStack_98 = plVar8;
    plStack_80 = param_1;
    puStack_60 = puVar2;
    if ((long)plVar7 - (long)plVar3 == 0) {
      uStack_68 = 1;
    }
    else {
      do {
        *puStack_58 = 0;
        plVar13 = plVar6 + 1;
        FUN_1092f9c18(puStack_58,*plVar6);
        puStack_58 = puStack_58 + 1;
        plVar6 = plVar13;
      } while (plVar13 != plVar3);
      uStack_68 = 1;
      do {
        plVar6 = (long *)*plVar7;
        if ((plVar6 != (long *)0x0) &&
           (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
          *(undefined4 *)(plVar6 + 1) = 0xdeadf001;
          (**(code **)(*plVar6 + 8))();
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar3);
    }
    FUN_1092f9c90(&plStack_80);
    lStack_a8 = *param_1;
    *param_1 = (long)puVar2;
    param_1[1] = (long)plVar8;
    lStack_90 = param_1[2];
    param_1[2] = lVar12;
    plVar7 = &lStack_a8;
    puStack_a0 = (undefined8 *)lStack_a8;
    plStack_98 = (long *)lStack_a8;
    func_0x0001092f9d0c(plVar7);
  }
  param_1[1] = (long)plVar8;
  return plVar7;
}



/* Entry: 1092f9a90; end: 1092f9b0b;  */

undefined8 * FUN_1092f9a90(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  FUN_10925b8c4();
  if (param_1 != 0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar3 = (undefined4 *)register0x00000008;
    do {
      *puVar2 = *puVar3;
      param_1 = param_1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (param_1 != 0);
  }
  return puVar1;
}



/* Entry: 1092f9b0c; end: 1092f9b43;  */

void FUN_1092f9b0c(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 >> 0x3d == 0) {
    plVar4 = param_1;
    FUN_1092f9b58();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + param_2);
    return;
  }
  FUN_1092f9b44();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d != 0) {
    func_0x000104c4f740();
    plVar4 = (long *)*puVar2;
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar5 = (long *)puVar2[1];
    plVar3 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = plVar5 + -1;
        plVar3 = (long *)*plVar5;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))();
        }
      } while (plVar5 != plVar4);
      plVar3 = (long *)*puVar2;
    }
    puVar2[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return;
  }
  __Znwm(param_2 << 3);
  return;
}



/* Entry: 1092f9b44; end: 1092f9b57;  */

void FUN_1092f9b44(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*puVar2;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)puVar2[1];
  plVar3 = plVar4;
  if (plVar5 != plVar4) {
    do {
      plVar5 = plVar5 + -1;
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))();
      }
    } while (plVar5 != plVar4);
    plVar3 = (long *)*puVar2;
  }
  puVar2[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar3);
  return;
}



/* Entry: 1092f9b58; end: 1092f9b8b;  */

void FUN_1092f9b58(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)param_1[1];
  plVar2 = plVar3;
  if (plVar4 != plVar3) {
    do {
      plVar4 = plVar4 + -1;
      plVar2 = (long *)*plVar4;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))();
      }
    } while (plVar4 != plVar3);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1092f9b8c; end: 1092f9c17;  */

void FUN_1092f9b8c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)param_1[1];
  plVar2 = plVar3;
  if (plVar4 != plVar3) {
    do {
      plVar4 = plVar4 + -1;
      plVar2 = (long *)*plVar4;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))();
      }
    } while (plVar4 != plVar3);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1092f9c18; end: 1092f9c7b;  */

void FUN_1092f9c18(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092f9c7c; end: 1092f9c8f;  */

undefined * FUN_1092f9c7c(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((puVar2[0x18] & 1) == 0) {
    plVar4 = (long *)**(undefined8 **)(puVar2 + 8);
    plVar5 = (long *)**(long **)(puVar2 + 0x10);
    while (plVar5 != plVar4) {
      plVar5 = plVar5 + -1;
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  return puVar2;
}



/* Entry: 1092f9c90; end: 1092f9d8b;  */

long FUN_1092f9c90(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar3 = (long *)**(undefined8 **)(param_1 + 8);
    plVar4 = (long *)**(long **)(param_1 + 0x10);
    while (plVar4 != plVar3) {
      plVar4 = plVar4 + -1;
      plVar2 = (long *)*plVar4;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 1092f9d8c; end: 1092f9e8f;  */

undefined8 * FUN_1092f9d8c(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110aeabc8;
  param_1[2] = 0;
  func_0x0001092ee114(param_1 + 2,*param_2);
  param_1[3] = 0;
  param_1[4] = 0;
  if (0x14 < *(uint *)(*param_2 + 0x10) && (*(uint *)(*param_2 + 0x10) & 3) == 1) {
    return param_1;
  }
  ___cxa_allocate_exception(0x10);
  FUN_1092ea600();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092f9e24);
  (*pcVar1)();
}



/* Entry: 1092f9e90; end: 1092fa02b;  */

long * FUN_1092f9e90(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  bool bVar20;
  long *extraout_x8;
  long lVar21;
  long extraout_x8_00;
  int iVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  long *in_stack_ffffffffffffff50;
  long *in_stack_ffffffffffffff58;
  long *plStack_28;
  
  plVar19 = param_2 + 4;
  lVar21 = *plVar19;
  if (lVar21 == 0) {
    uVar29 = 0;
    uVar28 = 0;
    lVar26 = param_2[2];
    iVar5 = *(int *)(lVar26 + 0x14);
    lVar24 = (long)iVar5;
    lVar21 = *(long *)(*(long *)(lVar26 + 0x28) + 0x10);
    uVar23 = *(uint *)(lVar21 + lVar24 * 0x20);
    do {
      uVar29 = uVar23 >> (ulong)(uVar28 & 0x1f) & 1 | uVar29 << 1;
      uVar28 = uVar28 + 1;
    } while (uVar28 != 6);
    uVar28 = (uVar23 >> 6 & 2 | uVar29 << 2 | uVar23 >> 8 & 1) << 1 |
             *(uint *)(lVar21 + (long)iVar5 * 0x1c) >> 8 & 1;
    puVar30 = (uint *)(lVar21 + (long)iVar5 * 0x14);
    lVar32 = -6;
    do {
      uVar28 = uVar28 << 1 | *puVar30 >> 8 & 1;
      puVar30 = puVar30 + -lVar24;
      bVar4 = lVar32 != -1;
      lVar32 = lVar32 + 1;
    } while (bVar4);
    uVar29 = 0;
    iVar25 = *(int *)(lVar26 + 0x10);
    lVar32 = (long)iVar25;
    lVar26 = lVar32 + 1;
    puVar30 = (uint *)(lVar21 + (lVar32 + -1) * lVar24 * 4);
    do {
      uVar29 = uVar29 << 1 | *puVar30 >> 8 & 1;
      lVar26 = lVar26 + -1;
      puVar30 = puVar30 + -lVar24;
    } while (lVar32 + -6 < lVar26);
    uVar23 = iVar25 - 8;
    do {
      uVar29 = *(uint *)(lVar21 + (long)(iVar5 * 8 + ((int)uVar23 >> 5)) * 4) >>
               (ulong)(uVar23 & 0x1f) & 1 | uVar29 << 1;
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar25);
    FUN_1092f409c(&plStack_28,uVar28,uVar29);
    FUN_1092f4288(plVar19,plStack_28);
    if ((plStack_28 != (long *)0x0) &&
       (iVar5 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar5, iVar5 == 0)) {
      *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
      (**(code **)(*plStack_28 + 8))();
    }
    lVar21 = *plVar19;
    param_2 = plStack_28;
    if (lVar21 == 0) {
      lVar21 = 0x10;
      ___cxa_allocate_exception();
      FUN_1092f3d6c();
      ___cxa_throw();
      plVar19 = *(long **)(lVar21 + 0x18);
      if (plVar19 == (long *)0x0) {
        lVar24 = *(long *)(lVar21 + 0x10);
        iVar5 = *(int *)(lVar24 + 0x10);
        uVar28 = iVar5 + -0x11 >> 2;
        if ((int)uVar28 < 7) {
          if ((bRam0000000113829ce8 & 1) == 0) {
            iVar5 = 0x13829ce8;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              FUN_1092f4a8c(0x113829cd0);
              ___cxa_atexit(FUN_1092f9454,0x113829cd0,0x100000000);
              ___cxa_guard_release(0x113829ce8);
            }
          }
          if (0xffffffd7 < uVar28 - 0x29) {
            return *(long **)(lRam0000000113829cd0 + (ulong)uVar28 * 8 + -8);
          }
          uVar7 = 0x10;
          ___cxa_allocate_exception();
          FUN_1092f3d6c();
          ___cxa_throw();
          ___cxa_guard_abort(0x113829ce8);
          __Unwind_Resume(uVar7);
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 0;
          FUN_1092f9a90(0);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1300000001;
          *puVar8 = 7;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1000000001;
          *puVar11 = 10;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          puVar12 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xd00000001;
          *puVar12 = 0xd;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0;
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar12 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar12 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar12 + 6) = puVar10 + 1;
          puVar13 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x900000001;
          *puVar13 = 0x11;
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0;
          *(undefined8 *)(puVar13 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar13 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar13 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar13 + 6) = puVar10 + 1;
          FUN_1092f9478(plVar19,1,uVar7,puVar8,puVar11,puVar12,puVar13);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 2;
          FUN_1092f9a90(2);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2200000001;
          *puVar8 = 10;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1c00000001;
          *puVar11 = 0x10;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          puVar12 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1600000001;
          *puVar12 = 0x16;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0;
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar12 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar12 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar12 + 6) = puVar10 + 1;
          puVar13 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1000000001;
          *puVar13 = 0x1c;
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0;
          *(undefined8 *)(puVar13 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar13 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar13 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar13 + 6) = puVar10 + 1;
          FUN_1092f9478(plVar19,2,uVar7,puVar8,puVar11,puVar12,puVar13);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 2;
          FUN_1092f9a90(2);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x3700000001;
          *puVar8 = 0xf;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2c00000001;
          *puVar11 = 0x1a;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          puVar12 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1100000002;
          *puVar12 = 0x12;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0;
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar12 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar12 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar12 + 6) = puVar10 + 1;
          puVar13 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xd00000002;
          *puVar13 = 0x16;
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0;
          *(undefined8 *)(puVar13 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar13 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar13 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar13 + 6) = puVar10 + 1;
          FUN_1092f9478(plVar19,3,uVar7,puVar8,puVar11,puVar12,puVar13);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 2;
          FUN_1092f9a90(2);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x5000000001;
          *puVar8 = 0x14;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2000000002;
          *puVar11 = 0x12;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          puVar12 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000002;
          *puVar12 = 0x1a;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0;
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar12 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar12 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar12 + 6) = puVar10 + 1;
          puVar13 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x900000004;
          *puVar13 = 0x10;
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0;
          *(undefined8 *)(puVar13 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar13 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar13 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar13 + 6) = puVar10 + 1;
          FUN_1092f9478(plVar19,4,uVar7,puVar8,puVar11,puVar12,puVar13);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 2;
          FUN_1092f9a90(2);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6c00000001;
          *puVar8 = 0x1a;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2b00000002;
          *puVar11 = 0x18;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000002;
          FUN_1092f4858(uVar14,0x12,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xb00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xc00000002;
          FUN_1092f4858(uVar15,0x16,puVar9,puVar10);
          FUN_1092f9478(plVar19,5,uVar7,puVar8,puVar11,uVar14,uVar15);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 2;
          FUN_1092f9a90(2);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x4400000002;
          *puVar8 = 0x12;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1b00000004;
          *puVar11 = 0x10;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          puVar12 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1300000004;
          *puVar12 = 0x18;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0;
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar12 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar12 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar12 + 6) = puVar10 + 1;
          puVar13 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000004;
          *puVar13 = 0x1c;
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0;
          *(undefined8 *)(puVar13 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar13 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar13 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar13 + 6) = puVar10 + 1;
          FUN_1092f9478(plVar19,6,uVar7,puVar8,puVar11,puVar12,puVar13);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 3;
          FUN_1092f9a90(3);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x4e00000002;
          *puVar8 = 0x14;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1f00000004;
          *puVar11 = 0x12;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xe00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xf00000004;
          FUN_1092f4858(uVar14,0x12,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xd00000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xe00000001;
          FUN_1092f4858(uVar15,0x1a,puVar9,puVar10);
          FUN_1092f9478(plVar19,7,uVar7,puVar8,puVar11,uVar14,uVar15);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 3;
          FUN_1092f9a90(3);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6100000002;
          *puVar8 = 0x18;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2600000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2700000002;
          FUN_1092f4858(uVar14,0x16,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1200000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1300000002;
          FUN_1092f4858(uVar15,0x16,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xe00000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xf00000002;
          FUN_1092f4858(uVar16,0x1a,puVar9,puVar10);
          FUN_1092f9478(plVar19,8,uVar7,puVar8,uVar14,uVar15,uVar16);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 3;
          FUN_1092f9a90(3);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7400000002;
          *puVar8 = 0x1e;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2400000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2500000002;
          FUN_1092f4858(uVar14,0x16,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1000000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1100000004;
          FUN_1092f4858(uVar15,0x14,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xc00000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xd00000004;
          FUN_1092f4858(uVar16,0x18,puVar9,puVar10);
          FUN_1092f9478(plVar19,9,uVar7,puVar8,uVar14,uVar15,uVar16);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 3;
          FUN_1092f9a90(3);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x4400000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x4500000002;
          FUN_1092f4858(uVar14,0x12,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2b00000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2c00000001;
          FUN_1092f4858(uVar15,0x1a,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1300000006;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1400000002;
          FUN_1092f4858(uVar16,0x18,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000006;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000002;
          FUN_1092f4858(uVar17,0x1c,puVar9,puVar10);
          FUN_1092f9478(plVar19,10,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 3;
          FUN_1092f9a90(3);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x5100000004;
          *puVar8 = 0x14;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x3200000001;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x3300000004;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1600000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1700000004;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xc00000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xd00000008;
          FUN_1092f4858(uVar16,0x18,puVar9,puVar10);
          FUN_1092f9478(plVar19,0xb,uVar7,puVar8,uVar14,uVar15,uVar16);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 3;
          FUN_1092f9a90(3);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x5c00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x5d00000002;
          FUN_1092f4858(uVar14,0x18,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2400000006;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2500000002;
          FUN_1092f4858(uVar15,0x16,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1400000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1500000006;
          FUN_1092f4858(uVar16,0x1a,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xe00000007;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xf00000004;
          FUN_1092f4858(uVar17,0x1c,puVar9,puVar10);
          FUN_1092f9478(plVar19,0xc,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 3;
          FUN_1092f9a90(3);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6b00000004;
          *puVar8 = 0x1a;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2500000008;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2600000001;
          FUN_1092f4858(uVar14,0x16,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1400000008;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1500000004;
          FUN_1092f4858(uVar15,0x18,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xb0000000c;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xc00000004;
          FUN_1092f4858(uVar16,0x16,puVar9,puVar10);
          FUN_1092f9478(plVar19,0xd,uVar7,puVar8,uVar14,uVar15,uVar16);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 4;
          FUN_1092f9a90(4);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7300000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7400000001;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2800000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2900000005;
          FUN_1092f4858(uVar15,0x18,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x100000000b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1100000005;
          FUN_1092f4858(uVar16,0x14,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xc0000000b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xd00000005;
          FUN_1092f4858(uVar17,0x18,puVar9,puVar10);
          FUN_1092f9478(plVar19,0xe,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 4;
          FUN_1092f9a90(4);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x5700000005;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x5800000001;
          FUN_1092f4858(uVar14,0x16,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2900000005;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2a00000005;
          FUN_1092f4858(uVar15,0x18,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000005;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000007;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xc0000000b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xd00000007;
          FUN_1092f4858(uVar17,0x18,puVar9,puVar10);
          FUN_1092f9478(plVar19,0xf,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 4;
          FUN_1092f9a90(4);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6200000005;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x6300000001;
          FUN_1092f4858(uVar14,0x18,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2d00000007;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2e00000003;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x130000000f;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1400000002;
          FUN_1092f4858(uVar16,0x18,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000000d;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x10,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 4;
          FUN_1092f9a90(4);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6b00000001;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x6c00000005;
          FUN_1092f4858(uVar14,0x1c,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e0000000a;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f00000001;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1600000001;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x170000000f;
          FUN_1092f4858(uVar16,0x1c,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xe00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xf00000011;
          FUN_1092f4858(uVar17,0x1c,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x11,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 4;
          FUN_1092f9a90(4);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7800000005;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7900000001;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2b00000009;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2c00000004;
          FUN_1092f4858(uVar15,0x1a,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1600000011;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1700000001;
          FUN_1092f4858(uVar16,0x1c,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xe00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xf00000013;
          FUN_1092f4858(uVar17,0x1c,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x12,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 4;
          FUN_1092f9a90(4);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7100000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7200000004;
          FUN_1092f4858(uVar14,0x1c,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2c00000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2d0000000b;
          FUN_1092f4858(uVar15,0x1a,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1500000011;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1600000004;
          FUN_1092f4858(uVar16,0x1a,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xd00000009;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0xe00000010;
          FUN_1092f4858(uVar17,0x1a,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x13,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 4;
          FUN_1092f9a90(4);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6b00000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x6c00000005;
          FUN_1092f4858(uVar14,0x1c,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2900000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2a0000000d;
          FUN_1092f4858(uVar15,0x1a,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000000f;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000005;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf0000000f;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000000a;
          FUN_1092f4858(uVar17,0x1c,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x14,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 5;
          FUN_1092f9a90(5);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7400000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7500000004;
          FUN_1092f4858(uVar14,0x1c,puVar9,puVar10);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2a00000011;
          *puVar8 = 0x1a;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1600000011;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1700000006;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1000000013;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1100000006;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x15,uVar7,uVar14,puVar8,uVar15,uVar16);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 5;
          FUN_1092f9a90(5);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6f00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7000000007;
          FUN_1092f4858(uVar14,0x1c,puVar9,puVar10);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e00000011;
          *puVar8 = 0x1c;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000007;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000010;
          FUN_1092f4858(uVar15,0x1e,puVar9,puVar10);
          puVar11 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xd00000022;
          *puVar11 = 0x18;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar11 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar11 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar11 + 6) = puVar10 + 1;
          FUN_1092f9478(plVar19,0x16,uVar7,uVar14,puVar8,uVar15,puVar11);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 5;
          FUN_1092f9a90(5);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7900000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7a00000005;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2f00000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x300000000e;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000000b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x190000000e;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000010;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000000e;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x17,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 5;
          FUN_1092f9a90(5);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7500000006;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7600000004;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2d00000006;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2e0000000e;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000000b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000010;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x100000001e;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1100000002;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x18,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 5;
          FUN_1092f9a90(5);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x6a00000008;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x6b00000004;
          FUN_1092f4858(uVar14,0x1a,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2f00000008;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x300000000d;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000007;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000016;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000016;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000000d;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x19,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 5;
          FUN_1092f9a90(5);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x720000000a;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7300000002;
          FUN_1092f4858(uVar14,0x1c,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e00000013;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f00000004;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x160000001c;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1700000006;
          FUN_1092f4858(uVar16,0x1c,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1000000021;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1100000004;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x1a,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 5;
          FUN_1092f9a90(5);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7a00000008;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7b00000004;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2d00000016;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2e00000003;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1700000008;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x180000001a;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf0000000c;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000001c;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x1b,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 6;
          FUN_1092f9a90(6);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7500000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x760000000a;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2d00000003;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2e00000017;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x190000001f;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf0000000b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000001f;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x1c,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 6;
          FUN_1092f9a90(6);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7400000007;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7500000007;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2d00000015;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2e00000007;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1700000001;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1800000025;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000013;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000001a;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x1d,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 6;
          FUN_1092f9a90(6);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7300000005;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x740000000a;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2f00000013;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x300000000a;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000000f;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000019;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000017;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000019;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x1e,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 6;
          FUN_1092f9a90(6);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x730000000d;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7400000003;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f0000001d;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000002a;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000001;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000017;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000001c;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x1f,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 6;
          FUN_1092f9a90(6);
          puVar8 = (undefined4 *)0x20;
          __Znwm();
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7300000011;
          *puVar8 = 0x1e;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *(undefined8 **)(puVar8 + 2) = puVar10;
          *puVar10 = puVar9;
          *(undefined8 **)(puVar8 + 4) = puVar10 + 1;
          *(undefined8 **)(puVar8 + 6) = puVar10 + 1;
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e0000000a;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f00000017;
          FUN_1092f4858(uVar14,0x1c,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000000a;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000023;
          FUN_1092f4858(uVar15,0x1e,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000013;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000023;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x20,uVar7,puVar8,uVar14,uVar15,uVar16);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 6;
          FUN_1092f9a90(6);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7300000011;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7400000001;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e0000000e;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f00000015;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000001d;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000013;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf0000000b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000002e;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x21,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 6;
          FUN_1092f9a90(6);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x730000000d;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7400000006;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e0000000e;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f00000017;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000002c;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000007;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x100000003b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1100000001;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x22,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 7;
          FUN_1092f9a90(7);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x790000000c;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7a00000007;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2f0000000c;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x300000001a;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000027;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x190000000e;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000016;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000029;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x23,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 7;
          FUN_1092f9a90(7);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7900000006;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7a0000000e;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2f00000006;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x3000000022;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000002e;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x190000000a;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000002;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000040;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x24,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 7;
          FUN_1092f9a90(7);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7a00000011;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7b00000004;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e0000001d;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f0000000e;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000031;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x190000000a;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000018;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000002e;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x25,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 7;
          FUN_1092f9a90(7);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7a00000004;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7b00000012;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2e0000000d;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x2f00000020;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000030;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x190000000e;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf0000002a;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000020;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x26,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar19 = (long *)0x38;
          __Znwm();
          uVar7 = 7;
          FUN_1092f9a90(7);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7500000014;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7600000004;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2f00000028;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x3000000007;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x180000002b;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000016;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf0000000a;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1000000043;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar19,0x27,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          FUN_1092f98a0(extraout_x8,plVar19);
          iVar5 = (int)plVar19[1] + -1;
          *(int *)(plVar19 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
            (**(code **)(*plVar19 + 8))(plVar19);
          }
          plVar18 = (long *)0x38;
          __Znwm();
          uVar7 = 7;
          FUN_1092f9a90(7);
          uVar14 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x7600000013;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x7700000006;
          FUN_1092f4858(uVar14,0x1e,puVar9,puVar10);
          uVar15 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x2f00000012;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x300000001f;
          FUN_1092f4858(uVar15,0x1c,puVar9,puVar10);
          uVar16 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0x1800000022;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x1900000022;
          FUN_1092f4858(uVar16,0x1e,puVar9,puVar10);
          uVar17 = 0x20;
          __Znwm(0x20);
          puVar9 = (undefined8 *)0x8;
          __Znwm();
          *puVar9 = 0xf00000014;
          puVar10 = (undefined8 *)0x8;
          __Znwm();
          *puVar10 = 0x100000003d;
          FUN_1092f4858(uVar17,0x1e,puVar9,puVar10);
          FUN_1092f9478(plVar18,0x28,uVar7,uVar14,uVar15,uVar16,uVar17);
          *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
          plVar19 = extraout_x8;
          FUN_1092f98a0(extraout_x8,plVar18);
          iVar5 = (int)plVar18[1] + -1;
          *(int *)(plVar18 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092f8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar18 + 8))(plVar18);
            return plVar18;
          }
          return plVar19;
        }
        plVar19 = (long *)0x0;
        uVar28 = iVar5 - 9;
        iVar25 = 5;
        do {
          uVar29 = uVar28;
          do {
            plVar19 = (long *)(ulong)(*(uint *)(*(long *)(*(long *)(lVar24 + 0x28) + 0x10) +
                                               (long)(iVar25 * *(int *)(lVar24 + 0x14) +
                                                     ((int)uVar29 >> 5)) * 4) >>
                                      (ulong)(uVar29 & 0x1f) & 1 | (int)plVar19 << 1);
            bVar4 = (int)((long)iVar5 + -0xb) < (int)uVar29;
            uVar29 = uVar29 - 1;
          } while (bVar4);
          bVar4 = iVar25 != 0;
          iVar25 = iVar25 + -1;
        } while (bVar4);
        FUN_1092f9614();
        *(long **)(lVar21 + 0x18) = plVar19;
        if ((plVar19 == (long *)0x0) || (*(int *)((long)plVar19 + 0xc) * 4 + 0x11 != iVar5)) {
          plVar19 = (long *)0x0;
          iVar25 = *(int *)(*(long *)(lVar21 + 0x10) + 0x14);
          uVar27 = 5;
          do {
            puVar30 = (uint *)(*(long *)(*(long *)(*(long *)(lVar21 + 0x10) + 0x28) + 0x10) +
                               (long)iVar25 * (long)(int)uVar28 * 4 + (uVar27 >> 5) * 4);
            lVar24 = (long)(int)uVar28 + 1;
            do {
              uVar29 = (uint)uVar27;
              plVar19 = (long *)(ulong)(*puVar30 >> (ulong)(uVar29 & 0x1f) & 1 | (int)plVar19 << 1);
              lVar24 = lVar24 + -1;
              puVar30 = puVar30 + -(long)iVar25;
            } while ((long)iVar5 + -0xb < lVar24);
            uVar27 = uVar27 - 1;
          } while (uVar29 != 0);
          FUN_1092f9614();
          *(long **)(lVar21 + 0x18) = plVar19;
          if ((plVar19 == (long *)0x0) || (*(int *)((long)plVar19 + 0xc) * 4 + 0x11 != iVar5)) {
            lVar24 = 0x10;
            ___cxa_allocate_exception();
            FUN_1092f3d6c();
            ___cxa_throw();
            FUN_1092f9e90(&stack0xffffffffffffff58);
            lVar21 = lVar24;
            FUN_1092fa02c();
            FUN_1092fad50((long)(char)in_stack_ffffffffffffff58[3]);
            iVar5 = *(int *)(*(long *)(lVar24 + 0x10) + 0x10);
            FUN_1092facb4();
            FUN_1092f96ac(&stack0xffffffffffffff50,lVar21);
            FUN_1092ead9c(extraout_x8_00,*(undefined4 *)(lVar21 + 0x30));
            if (iVar5 < 2) {
              iVar25 = 0;
            }
            else {
              iVar22 = 0;
              uVar28 = 0;
              iVar25 = 0;
              bVar4 = true;
              iVar33 = iVar5 + -1;
              do {
                iVar31 = 0;
                iVar1 = 5;
                if (iVar33 != 6) {
                  iVar1 = iVar33;
                }
                do {
                  iVar6 = 0;
                  iVar33 = (iVar5 + -1) - iVar31;
                  if (!bVar4) {
                    iVar33 = iVar31;
                  }
                  bVar2 = true;
                  do {
                    bVar20 = bVar2;
                    uVar29 = iVar6 + iVar1;
                    if ((*(uint *)(*(long *)(in_stack_ffffffffffffff50[5] + 0x10) +
                                  (long)(int)(*(int *)((long)in_stack_ffffffffffffff50 + 0x14) *
                                              iVar33 + (uVar29 >> 5)) * 4) >> (ulong)(uVar29 & 0x1f)
                        & 1) == 0) {
                      iVar22 = iVar22 + 1;
                      uVar28 = *(uint *)(*(long *)(*(long *)(*(long *)(lVar24 + 0x10) + 0x28) + 0x10
                                                  ) +
                                        (long)(int)((uVar29 >> 5) +
                                                   *(int *)(*(long *)(lVar24 + 0x10) + 0x14) *
                                                   iVar33) * 4) >> (ulong)(uVar29 & 0x1f) & 1 |
                               uVar28 << 1;
                      if (iVar22 == 8) {
                        iVar22 = 0;
                        *(char *)(*(long *)(*(long *)(extraout_x8_00 + 0x10) + 0x10) + (long)iVar25)
                             = (char)uVar28;
                        iVar25 = iVar25 + 1;
                        uVar28 = 0;
                      }
                    }
                    iVar6 = -1;
                    bVar2 = false;
                  } while (bVar20);
                  iVar31 = iVar31 + 1;
                } while (iVar31 != iVar5);
                bVar4 = (bool)(bVar4 ^ 1);
                iVar33 = iVar1 + -2;
              } while (iVar33 != 0 && 1 < iVar1);
            }
            if (iVar25 != *(int *)(lVar21 + 0x30)) {
              ___cxa_allocate_exception(0x10);
              FUN_1092ea600();
              ___cxa_throw();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1092fa3a4);
              (*pcVar3)();
            }
            if ((in_stack_ffffffffffffff50 != (long *)0x0) &&
               (iVar5 = (int)in_stack_ffffffffffffff50[1] + -1,
               *(int *)(in_stack_ffffffffffffff50 + 1) = iVar5, iVar5 == 0)) {
              *(undefined4 *)(in_stack_ffffffffffffff50 + 1) = 0xdeadf001;
              (**(code **)(*in_stack_ffffffffffffff50 + 8))();
            }
            if ((in_stack_ffffffffffffff58 != (long *)0x0) &&
               (iVar5 = (int)in_stack_ffffffffffffff58[1] + -1,
               *(int *)(in_stack_ffffffffffffff58 + 1) = iVar5, iVar5 == 0)) {
              *(undefined4 *)(in_stack_ffffffffffffff58 + 1) = 0xdeadf001;
              (**(code **)(*in_stack_ffffffffffffff58 + 8))(in_stack_ffffffffffffff58);
              in_stack_ffffffffffffff50 = in_stack_ffffffffffffff58;
            }
            return in_stack_ffffffffffffff50;
          }
        }
      }
      return plVar19;
    }
  }
  *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
  *param_1 = lVar21;
  return param_2;
}



/* Entry: 1092fa02c; end: 1092fa19b;  */

long * FUN_1092fa02c(long param_1)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  long *extraout_x8;
  long extraout_x8_00;
  int iVar21;
  long lVar22;
  bool bVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  long *in_stack_ffffffffffffff80;
  long *in_stack_ffffffffffffff88;
  
  plVar18 = *(long **)(param_1 + 0x18);
  if (plVar18 == (long *)0x0) {
    lVar22 = *(long *)(param_1 + 0x10);
    iVar4 = *(int *)(lVar22 + 0x10);
    uVar27 = iVar4 + -0x11 >> 2;
    if ((int)uVar27 < 7) {
      if ((bRam0000000113829ce8 & 1) == 0) {
        iVar4 = 0x13829ce8;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          FUN_1092f4a8c(0x113829cd0);
          ___cxa_atexit(FUN_1092f9454,0x113829cd0,0x100000000);
          ___cxa_guard_release(0x113829ce8);
        }
      }
      if (0xffffffd7 < uVar27 - 0x29) {
        return *(long **)(lRam0000000113829cd0 + (ulong)uVar27 * 8 + -8);
      }
      uVar6 = 0x10;
      ___cxa_allocate_exception();
      FUN_1092f3d6c();
      ___cxa_throw();
      ___cxa_guard_abort(0x113829ce8);
      __Unwind_Resume(uVar6);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 0;
      FUN_1092f9a90(0);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1300000001;
      *puVar7 = 7;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1000000001;
      *puVar10 = 10;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      puVar11 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xd00000001;
      *puVar11 = 0xd;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar11 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar11 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar11 + 6) = puVar9 + 1;
      puVar12 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x900000001;
      *puVar12 = 0x11;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar12 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar12 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar12 + 6) = puVar9 + 1;
      FUN_1092f9478(plVar18,1,uVar6,puVar7,puVar10,puVar11,puVar12);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 2;
      FUN_1092f9a90(2);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2200000001;
      *puVar7 = 10;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1c00000001;
      *puVar10 = 0x10;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      puVar11 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1600000001;
      *puVar11 = 0x16;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar11 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar11 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar11 + 6) = puVar9 + 1;
      puVar12 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1000000001;
      *puVar12 = 0x1c;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar12 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar12 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar12 + 6) = puVar9 + 1;
      FUN_1092f9478(plVar18,2,uVar6,puVar7,puVar10,puVar11,puVar12);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 2;
      FUN_1092f9a90(2);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x3700000001;
      *puVar7 = 0xf;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2c00000001;
      *puVar10 = 0x1a;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      puVar11 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1100000002;
      *puVar11 = 0x12;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar11 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar11 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar11 + 6) = puVar9 + 1;
      puVar12 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xd00000002;
      *puVar12 = 0x16;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar12 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar12 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar12 + 6) = puVar9 + 1;
      FUN_1092f9478(plVar18,3,uVar6,puVar7,puVar10,puVar11,puVar12);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 2;
      FUN_1092f9a90(2);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x5000000001;
      *puVar7 = 0x14;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2000000002;
      *puVar10 = 0x12;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      puVar11 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000002;
      *puVar11 = 0x1a;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar11 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar11 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar11 + 6) = puVar9 + 1;
      puVar12 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x900000004;
      *puVar12 = 0x10;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar12 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar12 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar12 + 6) = puVar9 + 1;
      FUN_1092f9478(plVar18,4,uVar6,puVar7,puVar10,puVar11,puVar12);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 2;
      FUN_1092f9a90(2);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6c00000001;
      *puVar7 = 0x1a;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2b00000002;
      *puVar10 = 0x18;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000002;
      FUN_1092f4858(uVar13,0x12,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xb00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xc00000002;
      FUN_1092f4858(uVar14,0x16,puVar8,puVar9);
      FUN_1092f9478(plVar18,5,uVar6,puVar7,puVar10,uVar13,uVar14);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 2;
      FUN_1092f9a90(2);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x4400000002;
      *puVar7 = 0x12;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1b00000004;
      *puVar10 = 0x10;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      puVar11 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1300000004;
      *puVar11 = 0x18;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar11 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar11 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar11 + 6) = puVar9 + 1;
      puVar12 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000004;
      *puVar12 = 0x1c;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar12 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar12 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar12 + 6) = puVar9 + 1;
      FUN_1092f9478(plVar18,6,uVar6,puVar7,puVar10,puVar11,puVar12);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 3;
      FUN_1092f9a90(3);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x4e00000002;
      *puVar7 = 0x14;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1f00000004;
      *puVar10 = 0x12;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xe00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xf00000004;
      FUN_1092f4858(uVar13,0x12,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xd00000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xe00000001;
      FUN_1092f4858(uVar14,0x1a,puVar8,puVar9);
      FUN_1092f9478(plVar18,7,uVar6,puVar7,puVar10,uVar13,uVar14);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 3;
      FUN_1092f9a90(3);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6100000002;
      *puVar7 = 0x18;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2600000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2700000002;
      FUN_1092f4858(uVar13,0x16,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1200000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1300000002;
      FUN_1092f4858(uVar14,0x16,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xe00000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xf00000002;
      FUN_1092f4858(uVar15,0x1a,puVar8,puVar9);
      FUN_1092f9478(plVar18,8,uVar6,puVar7,uVar13,uVar14,uVar15);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 3;
      FUN_1092f9a90(3);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7400000002;
      *puVar7 = 0x1e;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2400000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2500000002;
      FUN_1092f4858(uVar13,0x16,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1000000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1100000004;
      FUN_1092f4858(uVar14,0x14,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xc00000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xd00000004;
      FUN_1092f4858(uVar15,0x18,puVar8,puVar9);
      FUN_1092f9478(plVar18,9,uVar6,puVar7,uVar13,uVar14,uVar15);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 3;
      FUN_1092f9a90(3);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x4400000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x4500000002;
      FUN_1092f4858(uVar13,0x12,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2b00000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2c00000001;
      FUN_1092f4858(uVar14,0x1a,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1300000006;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1400000002;
      FUN_1092f4858(uVar15,0x18,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000006;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000002;
      FUN_1092f4858(uVar16,0x1c,puVar8,puVar9);
      FUN_1092f9478(plVar18,10,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 3;
      FUN_1092f9a90(3);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x5100000004;
      *puVar7 = 0x14;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x3200000001;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x3300000004;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1600000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1700000004;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xc00000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xd00000008;
      FUN_1092f4858(uVar15,0x18,puVar8,puVar9);
      FUN_1092f9478(plVar18,0xb,uVar6,puVar7,uVar13,uVar14,uVar15);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 3;
      FUN_1092f9a90(3);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x5c00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x5d00000002;
      FUN_1092f4858(uVar13,0x18,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2400000006;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2500000002;
      FUN_1092f4858(uVar14,0x16,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1400000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1500000006;
      FUN_1092f4858(uVar15,0x1a,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xe00000007;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xf00000004;
      FUN_1092f4858(uVar16,0x1c,puVar8,puVar9);
      FUN_1092f9478(plVar18,0xc,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 3;
      FUN_1092f9a90(3);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6b00000004;
      *puVar7 = 0x1a;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2500000008;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2600000001;
      FUN_1092f4858(uVar13,0x16,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1400000008;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1500000004;
      FUN_1092f4858(uVar14,0x18,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xb0000000c;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xc00000004;
      FUN_1092f4858(uVar15,0x16,puVar8,puVar9);
      FUN_1092f9478(plVar18,0xd,uVar6,puVar7,uVar13,uVar14,uVar15);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 4;
      FUN_1092f9a90(4);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7300000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7400000001;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2800000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2900000005;
      FUN_1092f4858(uVar14,0x18,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x100000000b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1100000005;
      FUN_1092f4858(uVar15,0x14,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xc0000000b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xd00000005;
      FUN_1092f4858(uVar16,0x18,puVar8,puVar9);
      FUN_1092f9478(plVar18,0xe,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 4;
      FUN_1092f9a90(4);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x5700000005;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x5800000001;
      FUN_1092f4858(uVar13,0x16,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2900000005;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2a00000005;
      FUN_1092f4858(uVar14,0x18,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000005;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000007;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xc0000000b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xd00000007;
      FUN_1092f4858(uVar16,0x18,puVar8,puVar9);
      FUN_1092f9478(plVar18,0xf,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 4;
      FUN_1092f9a90(4);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6200000005;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x6300000001;
      FUN_1092f4858(uVar13,0x18,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2d00000007;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2e00000003;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x130000000f;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1400000002;
      FUN_1092f4858(uVar15,0x18,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000000d;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x10,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 4;
      FUN_1092f9a90(4);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6b00000001;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x6c00000005;
      FUN_1092f4858(uVar13,0x1c,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e0000000a;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f00000001;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1600000001;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x170000000f;
      FUN_1092f4858(uVar15,0x1c,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xe00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xf00000011;
      FUN_1092f4858(uVar16,0x1c,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x11,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 4;
      FUN_1092f9a90(4);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7800000005;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7900000001;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2b00000009;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2c00000004;
      FUN_1092f4858(uVar14,0x1a,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1600000011;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1700000001;
      FUN_1092f4858(uVar15,0x1c,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xe00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xf00000013;
      FUN_1092f4858(uVar16,0x1c,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x12,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 4;
      FUN_1092f9a90(4);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7100000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7200000004;
      FUN_1092f4858(uVar13,0x1c,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2c00000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2d0000000b;
      FUN_1092f4858(uVar14,0x1a,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1500000011;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1600000004;
      FUN_1092f4858(uVar15,0x1a,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xd00000009;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0xe00000010;
      FUN_1092f4858(uVar16,0x1a,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x13,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 4;
      FUN_1092f9a90(4);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6b00000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x6c00000005;
      FUN_1092f4858(uVar13,0x1c,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2900000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2a0000000d;
      FUN_1092f4858(uVar14,0x1a,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000000f;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000005;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf0000000f;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000000a;
      FUN_1092f4858(uVar16,0x1c,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x14,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 5;
      FUN_1092f9a90(5);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7400000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7500000004;
      FUN_1092f4858(uVar13,0x1c,puVar8,puVar9);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2a00000011;
      *puVar7 = 0x1a;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1600000011;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1700000006;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1000000013;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1100000006;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x15,uVar6,uVar13,puVar7,uVar14,uVar15);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 5;
      FUN_1092f9a90(5);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6f00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7000000007;
      FUN_1092f4858(uVar13,0x1c,puVar8,puVar9);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e00000011;
      *puVar7 = 0x1c;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000007;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000010;
      FUN_1092f4858(uVar14,0x1e,puVar8,puVar9);
      puVar10 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xd00000022;
      *puVar10 = 0x18;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar10 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar10 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar10 + 6) = puVar9 + 1;
      FUN_1092f9478(plVar18,0x16,uVar6,uVar13,puVar7,uVar14,puVar10);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 5;
      FUN_1092f9a90(5);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7900000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7a00000005;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2f00000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x300000000e;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000000b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x190000000e;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000010;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000000e;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x17,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 5;
      FUN_1092f9a90(5);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7500000006;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7600000004;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2d00000006;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2e0000000e;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000000b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000010;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x100000001e;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1100000002;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x18,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 5;
      FUN_1092f9a90(5);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x6a00000008;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x6b00000004;
      FUN_1092f4858(uVar13,0x1a,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2f00000008;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x300000000d;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000007;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000016;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000016;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000000d;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x19,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 5;
      FUN_1092f9a90(5);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x720000000a;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7300000002;
      FUN_1092f4858(uVar13,0x1c,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e00000013;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f00000004;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x160000001c;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1700000006;
      FUN_1092f4858(uVar15,0x1c,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1000000021;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1100000004;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x1a,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 5;
      FUN_1092f9a90(5);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7a00000008;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7b00000004;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2d00000016;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2e00000003;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1700000008;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x180000001a;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf0000000c;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000001c;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x1b,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 6;
      FUN_1092f9a90(6);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7500000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x760000000a;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2d00000003;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2e00000017;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x190000001f;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf0000000b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000001f;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x1c,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 6;
      FUN_1092f9a90(6);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7400000007;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7500000007;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2d00000015;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2e00000007;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1700000001;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1800000025;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000013;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000001a;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x1d,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 6;
      FUN_1092f9a90(6);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7300000005;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x740000000a;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2f00000013;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x300000000a;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000000f;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000019;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000017;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000019;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x1e,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 6;
      FUN_1092f9a90(6);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x730000000d;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7400000003;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f0000001d;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000002a;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000001;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000017;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000001c;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x1f,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 6;
      FUN_1092f9a90(6);
      puVar7 = (undefined4 *)0x20;
      __Znwm();
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7300000011;
      *puVar7 = 0x1e;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *(undefined8 **)(puVar7 + 2) = puVar9;
      *puVar9 = puVar8;
      *(undefined8 **)(puVar7 + 4) = puVar9 + 1;
      *(undefined8 **)(puVar7 + 6) = puVar9 + 1;
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e0000000a;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f00000017;
      FUN_1092f4858(uVar13,0x1c,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000000a;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000023;
      FUN_1092f4858(uVar14,0x1e,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000013;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000023;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x20,uVar6,puVar7,uVar13,uVar14,uVar15);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 6;
      FUN_1092f9a90(6);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7300000011;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7400000001;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e0000000e;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f00000015;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000001d;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000013;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf0000000b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000002e;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x21,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 6;
      FUN_1092f9a90(6);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x730000000d;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7400000006;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e0000000e;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f00000017;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000002c;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000007;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x100000003b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1100000001;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x22,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 7;
      FUN_1092f9a90(7);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x790000000c;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7a00000007;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2f0000000c;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x300000001a;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000027;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x190000000e;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000016;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000029;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x23,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 7;
      FUN_1092f9a90(7);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7900000006;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7a0000000e;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2f00000006;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x3000000022;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000002e;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x190000000a;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000002;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000040;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x24,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 7;
      FUN_1092f9a90(7);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7a00000011;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7b00000004;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e0000001d;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f0000000e;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000031;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x190000000a;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000018;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000002e;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x25,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 7;
      FUN_1092f9a90(7);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7a00000004;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7b00000012;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2e0000000d;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x2f00000020;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000030;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x190000000e;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf0000002a;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000020;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x26,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar18 = (long *)0x38;
      __Znwm();
      uVar6 = 7;
      FUN_1092f9a90(7);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7500000014;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7600000004;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2f00000028;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x3000000007;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x180000002b;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000016;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf0000000a;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1000000043;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar18,0x27,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      FUN_1092f98a0(extraout_x8,plVar18);
      iVar4 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      plVar17 = (long *)0x38;
      __Znwm();
      uVar6 = 7;
      FUN_1092f9a90(7);
      uVar13 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x7600000013;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x7700000006;
      FUN_1092f4858(uVar13,0x1e,puVar8,puVar9);
      uVar14 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x2f00000012;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x300000001f;
      FUN_1092f4858(uVar14,0x1c,puVar8,puVar9);
      uVar15 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0x1800000022;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x1900000022;
      FUN_1092f4858(uVar15,0x1e,puVar8,puVar9);
      uVar16 = 0x20;
      __Znwm(0x20);
      puVar8 = (undefined8 *)0x8;
      __Znwm();
      *puVar8 = 0xf00000014;
      puVar9 = (undefined8 *)0x8;
      __Znwm();
      *puVar9 = 0x100000003d;
      FUN_1092f4858(uVar16,0x1e,puVar8,puVar9);
      FUN_1092f9478(plVar17,0x28,uVar6,uVar13,uVar14,uVar15,uVar16);
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      plVar18 = extraout_x8;
      FUN_1092f98a0(extraout_x8,plVar17);
      iVar4 = (int)plVar17[1] + -1;
      *(int *)(plVar17 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092f8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar17 + 8))(plVar17);
        return plVar17;
      }
      return plVar18;
    }
    plVar18 = (long *)0x0;
    uVar27 = iVar4 - 9;
    iVar24 = 5;
    do {
      uVar26 = uVar27;
      do {
        plVar18 = (long *)(ulong)(*(uint *)(*(long *)(*(long *)(lVar22 + 0x28) + 0x10) +
                                           (long)(iVar24 * *(int *)(lVar22 + 0x14) +
                                                 ((int)uVar26 >> 5)) * 4) >> (ulong)(uVar26 & 0x1f)
                                  & 1 | (int)plVar18 << 1);
        bVar23 = (int)((long)iVar4 + -0xb) < (int)uVar26;
        uVar26 = uVar26 - 1;
      } while (bVar23);
      bVar23 = iVar24 != 0;
      iVar24 = iVar24 + -1;
    } while (bVar23);
    FUN_1092f9614();
    *(long **)(param_1 + 0x18) = plVar18;
    if ((plVar18 == (long *)0x0) || (*(int *)((long)plVar18 + 0xc) * 4 + 0x11 != iVar4)) {
      plVar18 = (long *)0x0;
      iVar24 = *(int *)(*(long *)(param_1 + 0x10) + 0x14);
      uVar25 = 5;
      do {
        puVar28 = (uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x10) +
                           (long)iVar24 * (long)(int)uVar27 * 4 + (uVar25 >> 5) * 4);
        lVar22 = (long)(int)uVar27 + 1;
        do {
          uVar26 = (uint)uVar25;
          plVar18 = (long *)(ulong)(*puVar28 >> (ulong)(uVar26 & 0x1f) & 1 | (int)plVar18 << 1);
          lVar22 = lVar22 + -1;
          puVar28 = puVar28 + -(long)iVar24;
        } while ((long)iVar4 + -0xb < lVar22);
        uVar25 = uVar25 - 1;
      } while (uVar26 != 0);
      FUN_1092f9614();
      *(long **)(param_1 + 0x18) = plVar18;
      if ((plVar18 == (long *)0x0) || (*(int *)((long)plVar18 + 0xc) * 4 + 0x11 != iVar4)) {
        lVar19 = 0x10;
        ___cxa_allocate_exception();
        FUN_1092f3d6c();
        ___cxa_throw();
        FUN_1092f9e90(&stack0xffffffffffffff88);
        lVar22 = lVar19;
        FUN_1092fa02c();
        FUN_1092fad50((long)(char)in_stack_ffffffffffffff88[3]);
        iVar4 = *(int *)(*(long *)(lVar19 + 0x10) + 0x10);
        FUN_1092facb4();
        FUN_1092f96ac(&stack0xffffffffffffff80,lVar22);
        FUN_1092ead9c(extraout_x8_00,*(undefined4 *)(lVar22 + 0x30));
        if (iVar4 < 2) {
          iVar24 = 0;
        }
        else {
          iVar21 = 0;
          uVar27 = 0;
          iVar24 = 0;
          bVar23 = true;
          iVar30 = iVar4 + -1;
          do {
            iVar29 = 0;
            iVar1 = 5;
            if (iVar30 != 6) {
              iVar1 = iVar30;
            }
            do {
              iVar5 = 0;
              iVar30 = (iVar4 + -1) - iVar29;
              if (!bVar23) {
                iVar30 = iVar29;
              }
              bVar2 = true;
              do {
                bVar20 = bVar2;
                uVar26 = iVar5 + iVar1;
                if ((*(uint *)(*(long *)(in_stack_ffffffffffffff80[5] + 0x10) +
                              (long)(int)(*(int *)((long)in_stack_ffffffffffffff80 + 0x14) * iVar30
                                         + (uVar26 >> 5)) * 4) >> (ulong)(uVar26 & 0x1f) & 1) == 0)
                {
                  iVar21 = iVar21 + 1;
                  uVar27 = *(uint *)(*(long *)(*(long *)(*(long *)(lVar19 + 0x10) + 0x28) + 0x10) +
                                    (long)(int)((uVar26 >> 5) +
                                               *(int *)(*(long *)(lVar19 + 0x10) + 0x14) * iVar30) *
                                    4) >> (ulong)(uVar26 & 0x1f) & 1 | uVar27 << 1;
                  if (iVar21 == 8) {
                    iVar21 = 0;
                    *(char *)(*(long *)(*(long *)(extraout_x8_00 + 0x10) + 0x10) + (long)iVar24) =
                         (char)uVar27;
                    iVar24 = iVar24 + 1;
                    uVar27 = 0;
                  }
                }
                iVar5 = -1;
                bVar2 = false;
              } while (bVar20);
              iVar29 = iVar29 + 1;
            } while (iVar29 != iVar4);
            bVar23 = (bool)(bVar23 ^ 1);
            iVar30 = iVar1 + -2;
          } while (iVar30 != 0 && 1 < iVar1);
        }
        if (iVar24 != *(int *)(lVar22 + 0x30)) {
          ___cxa_allocate_exception(0x10);
          FUN_1092ea600();
          ___cxa_throw();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1092fa3a4);
          (*pcVar3)();
        }
        if ((in_stack_ffffffffffffff80 != (long *)0x0) &&
           (iVar4 = (int)in_stack_ffffffffffffff80[1] + -1,
           *(int *)(in_stack_ffffffffffffff80 + 1) = iVar4, iVar4 == 0)) {
          *(undefined4 *)(in_stack_ffffffffffffff80 + 1) = 0xdeadf001;
          (**(code **)(*in_stack_ffffffffffffff80 + 8))();
        }
        if ((in_stack_ffffffffffffff88 != (long *)0x0) &&
           (iVar4 = (int)in_stack_ffffffffffffff88[1] + -1,
           *(int *)(in_stack_ffffffffffffff88 + 1) = iVar4, iVar4 == 0)) {
          *(undefined4 *)(in_stack_ffffffffffffff88 + 1) = 0xdeadf001;
          (**(code **)(*in_stack_ffffffffffffff88 + 8))(in_stack_ffffffffffffff88);
          in_stack_ffffffffffffff80 = in_stack_ffffffffffffff88;
        }
        return in_stack_ffffffffffffff80;
      }
    }
  }
  return plVar18;
}



/* Entry: 1092fa19c; end: 1092fa477;  */

void FUN_1092fa19c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long *plStack_50;
  long *plStack_48;
  
  FUN_1092f9e90(&plStack_48);
  lVar7 = param_2;
  FUN_1092fa02c();
  FUN_1092fad50((long)(char)plStack_48[3]);
  iVar3 = *(int *)(*(long *)(param_2 + 0x10) + 0x10);
  FUN_1092facb4();
  FUN_1092f96ac(&plStack_50,lVar7);
  FUN_1092ead9c(param_1,*(undefined4 *)(lVar7 + 0x30));
  if (iVar3 < 2) {
    iVar9 = 0;
  }
  else {
    iVar10 = 0;
    uVar12 = 0;
    iVar9 = 0;
    bVar11 = true;
    iVar14 = iVar3 + -1;
    do {
      iVar13 = 0;
      iVar2 = 5;
      if (iVar14 != 6) {
        iVar2 = iVar14;
      }
      do {
        iVar6 = 0;
        iVar14 = (iVar3 + -1) - iVar13;
        if (!bVar11) {
          iVar14 = iVar13;
        }
        bVar4 = true;
        do {
          bVar8 = bVar4;
          uVar1 = iVar6 + iVar2;
          if ((*(uint *)(*(long *)(plStack_50[5] + 0x10) +
                        (long)(int)(*(int *)((long)plStack_50 + 0x14) * iVar14 + (uVar1 >> 5)) * 4)
               >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
            iVar10 = iVar10 + 1;
            uVar12 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x28) + 0x10) +
                              (long)(int)((uVar1 >> 5) +
                                         *(int *)(*(long *)(param_2 + 0x10) + 0x14) * iVar14) * 4)
                     >> (ulong)(uVar1 & 0x1f) & 1 | uVar12 << 1;
            if (iVar10 == 8) {
              iVar10 = 0;
              *(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + (long)iVar9) = (char)uVar12;
              iVar9 = iVar9 + 1;
              uVar12 = 0;
            }
          }
          iVar6 = -1;
          bVar4 = false;
        } while (bVar8);
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar3);
      bVar11 = (bool)(bVar11 ^ 1);
      iVar14 = iVar2 + -2;
    } while (iVar14 != 0 && 1 < iVar2);
  }
  if (iVar9 != *(int *)(lVar7 + 0x30)) {
    ___cxa_allocate_exception(0x10);
    FUN_1092ea600();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1092fa3a4);
    (*pcVar5)();
  }
  if ((plStack_50 != (long *)0x0) &&
     (iVar3 = (int)plStack_50[1] + -1, *(int *)(plStack_50 + 1) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(plStack_50 + 1) = 0xdeadf001;
    (**(code **)(*plStack_50 + 8))();
  }
  if ((plStack_48 != (long *)0x0) &&
     (iVar3 = (int)plStack_48[1] + -1, *(int *)(plStack_48 + 1) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(plStack_48 + 1) = 0xdeadf001;
    (**(code **)(*plStack_48 + 8))(plStack_48);
  }
  return;
}



/* Entry: 1092fa478; end: 1092fa58f;  */

undefined8 * FUN_1092fa478(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aeabc8;
  plVar2 = (long *)param_1[4];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092fa590; end: 1092fab1b;  */

void FUN_1092fa590(undefined **param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  piVar19 = *(int **)(*(long *)(param_3 + 0x18) + (long)*param_4 * 8);
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_78 = 0;
  lVar7 = *(long *)(piVar19 + 2);
  lVar15 = *(long *)(piVar19 + 4) - lVar7;
  FUN_1092f9b0c(&lStack_78,lVar15 >> 3);
  lVar14 = lStack_70;
  _memmove(lStack_70,lVar7,lVar15);
  lVar13 = lStack_78;
  iVar6 = 0;
  lVar7 = 0;
  lVar14 = lVar14 + lVar15;
  do {
    iVar6 = **(int **)(lStack_78 + lVar7 * 8) + iVar6;
    lVar7 = lVar7 + 1;
  } while (lVar14 - lStack_78 >> 3 != lVar7);
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  uStack_88 = 0;
  ppuStack_90 = param_1;
  lStack_70 = lVar14;
  if (iVar6 != 0) {
    if (iVar6 < 0) {
      FUN_1092fabf0();
      goto LAB_1092faa5c;
    }
    puVar17 = (undefined *)((long)iVar6 * 8);
    puVar16 = puVar17;
    __Znwm();
    *param_1 = puVar16;
    param_1[2] = puVar16 + (long)iVar6 * 8;
    _bzero();
    param_1[1] = puVar16 + (long)puVar17;
  }
  uVar18 = 0;
  uVar8 = 0;
  do {
    piVar20 = *(int **)(lVar13 + uVar8 * 8);
    uVar18 = (ulong)(int)uVar18;
    if (0 < *piVar20) {
      iVar6 = 0;
      do {
        iVar1 = piVar20[1];
        FUN_1092ead9c(&ppuStack_90,*piVar19 + iVar1);
        plVar3 = (long *)0x28;
        __Znwm();
        plVar4 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        }
        *plVar3 = (long)&PTR_FUN_110aeac00;
        *(undefined4 *)(plVar3 + 1) = 0;
        *(int *)((long)plVar3 + 0xc) = iVar1;
        *(undefined4 *)(plVar3 + 3) = 0;
        plVar3[2] = (long)&PTR_FUN_110ae9d40;
        plVar3[4] = 0;
        func_0x0001092ead38(plVar3 + 2,plStack_80);
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        puVar16 = *param_1;
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        plVar4 = *(long **)(puVar16 + uVar18 * 8);
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
          (**(code **)(*plVar4 + 8))();
        }
        *(long **)(puVar16 + uVar18 * 8) = plVar3;
        iVar1 = (int)plVar3[1] + -1;
        *(int *)(plVar3 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        ppuStack_90 = &PTR_FUN_110ae9d40;
        if ((plStack_80 != (long *)0x0) &&
           (iVar1 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
          (**(code **)(*plStack_80 + 8))();
        }
        iVar6 = iVar6 + 1;
        uVar18 = uVar18 + 1;
        lVar14 = lStack_70;
        lVar13 = lStack_78;
      } while (iVar6 < *piVar20);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < (ulong)(lVar14 - lVar13 >> 3));
  plVar4 = (long *)*param_1;
  iVar6 = *(int *)(*(long *)(*plVar4 + 0x20) + 0x18) - *(int *)(*(long *)(*plVar4 + 0x20) + 0x10);
  uVar8 = (ulong)((long)param_1[1] - (long)plVar4) >> 3 & 0xffffffff;
  uVar12 = (uint)((ulong)((long)param_1[1] - (long)plVar4) >> 3);
  do {
    uVar9 = (ulong)(uVar12 & (int)uVar12 >> 0x1f);
    if (((int)uVar8 < 1) ||
       (iVar1 = *(int *)(*(long *)(plVar4[uVar8 - 1] + 0x20) + 0x18) -
                *(int *)(*(long *)(plVar4[uVar8 - 1] + 0x20) + 0x10), uVar9 = uVar8, iVar1 == iVar6)
       ) {
      uVar8 = (long)iVar6 - (long)*piVar19;
      if ((int)uVar8 < 1) {
        lVar7 = 0;
      }
      else {
        uVar10 = 0;
        lVar7 = 0;
        do {
          if (0 < (long)uVar18) {
            lVar14 = 0;
            lVar13 = (long)(int)lVar7;
            do {
              lVar7 = lVar13 + 1;
              *(undefined1 *)
               (*(long *)(*(long *)(*(long *)(*param_1 + lVar14) + 0x20) + 0x10) + uVar10) =
                   *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + lVar13);
              lVar14 = lVar14 + 8;
              lVar13 = lVar7;
            } while ((uVar18 & 0xffffffff) << 3 != lVar14);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != (uVar8 & 0xffffffff));
      }
      iVar6 = (int)uVar9;
      if (iVar6 < (int)uVar18) {
        lVar14 = (long)iVar6;
        lVar13 = (long)(int)lVar7;
        do {
          lVar7 = lVar13 + 1;
          *(undefined1 *)
           (*(long *)(*(long *)(*(long *)(*param_1 + lVar14 * 8) + 0x20) + 0x10) + uVar8) =
               *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + lVar13);
          lVar14 = lVar14 + 1;
          lVar13 = lVar7;
        } while ((int)uVar18 != lVar14);
      }
      iVar11 = (int)lVar7;
      iVar1 = *(int *)(*(long *)(*(long *)*param_1 + 0x20) + 0x18) -
              *(int *)(*(long *)(*(long *)*param_1 + 0x20) + 0x10);
      if ((int)uVar8 < iVar1) {
        do {
          iVar5 = (int)uVar8;
          if (0 < (long)uVar18) {
            uVar8 = 0;
            lVar14 = (long)(int)lVar7;
            do {
              lVar7 = lVar14 + 1;
              iVar11 = iVar5;
              if ((long)iVar6 <= (long)uVar8) {
                iVar11 = iVar5 + 1;
              }
              *(undefined1 *)
               (*(long *)(*(long *)(*(long *)(*param_1 + uVar8 * 8) + 0x20) + 0x10) + (long)iVar11)
                   = *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + lVar14);
              uVar8 = uVar8 + 1;
              lVar14 = lVar7;
            } while ((uVar18 & 0xffffffff) != uVar8);
          }
          iVar11 = (int)lVar7;
          uVar8 = (ulong)(iVar5 + 1U);
        } while ((int)(iVar5 + 1U) < iVar1);
      }
      if (iVar11 == *(int *)(*(long *)(param_2 + 0x10) + 0x18) -
                    *(int *)(*(long *)(param_2 + 0x10) + 0x10)) {
        if (lStack_78 != 0) {
          lStack_70 = lStack_78;
          __ZdlPv();
        }
        return;
      }
      ___cxa_allocate_exception(0x10);
      FUN_1092efc40();
      ___cxa_throw();
      goto LAB_1092faa5c;
    }
    uVar8 = uVar8 - 1;
  } while (iVar6 + 1 == iVar1);
  ___cxa_allocate_exception(0x10);
  FUN_1092efc40();
  ___cxa_throw();
LAB_1092faa5c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1092faa60);
  (*pcVar2)();
}



/* Entry: 1092fab1c; end: 1092fabef;  */

undefined8 * FUN_1092fab1c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aeac00;
  param_1[2] = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[4];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1092fabf0; end: 1092fac03;  */

void FUN_1092fabf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(long *)*puVar1 != 0) {
    FUN_1092fac44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 1092fac04; end: 1092fac43;  */

void FUN_1092fac04(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1092fac44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1092fac44; end: 1092facb3;  */

void FUN_1092fac44(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  while (plVar3 != param_2) {
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1092facb4; end: 1092fad4f;  */

void FUN_1092facb4(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      lVar5 = 0;
      do {
        plVar2 = param_1;
        (**(code **)(*param_1 + 0x10))(param_1,lVar4,lVar5);
        if ((int)plVar2 != 0) {
          iVar1 = *(int *)(param_2 + 0x14) * (int)lVar4 + ((int)(uint)lVar5 >> 5);
          lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x10);
          *(uint *)(lVar3 + (long)iVar1 * 4) =
               *(uint *)(lVar3 + (long)iVar1 * 4) ^ 1 << (ulong)((uint)lVar5 & 0x1f);
        }
        lVar5 = lVar5 + 1;
      } while (param_3 != lVar5);
      lVar4 = lVar4 + 1;
    } while (lVar4 != param_3);
  }
  return;
}



/* Entry: 1092fad50; end: 1092fb003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1092fad50(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113732c38 & 1) == 0) {
    iVar1 = 0x13732c38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732c78 = &PTR_FUN_110aeac50;
      uRam0000000113732c80 = 0;
      ___cxa_guard_release(0x113732c38);
    }
  }
  if ((bRam0000000113732c40 & 1) == 0) {
    iVar1 = 0x13732c40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732c88 = &PTR_DAT_110aeac90;
      uRam0000000113732c90 = 0;
      ___cxa_guard_release(0x113732c40);
    }
  }
  if ((bRam0000000113732c48 & 1) == 0) {
    iVar1 = 0x13732c48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732c98 = &PTR_DAT_110aeacd0;
      uRam0000000113732ca0 = 0;
      ___cxa_guard_release(0x113732c48);
    }
  }
  if ((bRam0000000113732c50 & 1) == 0) {
    iVar1 = 0x13732c50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732ca8 = &PTR_DAT_110aead10;
      uRam0000000113732cb0 = 0;
      ___cxa_guard_release(0x113732c50);
    }
  }
  if ((bRam0000000113732c58 & 1) == 0) {
    iVar1 = 0x13732c58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732cb8 = &PTR_DAT_110aead50;
      uRam0000000113732cc0 = 0;
      ___cxa_guard_release(0x113732c58);
    }
  }
  if ((bRam0000000113732c60 & 1) == 0) {
    iVar1 = 0x13732c60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732cc8 = &PTR_DAT_110aead90;
      uRam0000000113732cd0 = 0;
      ___cxa_guard_release(0x113732c60);
    }
  }
  if ((bRam0000000113732c68 & 1) == 0) {
    iVar1 = 0x13732c68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732cd8 = &PTR_DAT_110aeadd0;
      uRam0000000113732ce0 = 0;
      ___cxa_guard_release(0x113732c68);
    }
  }
  if ((bRam0000000113732c70 & 1) == 0) {
    iVar1 = 0x13732c70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_113732ce8 = &PTR_DAT_110aeae10;
      uRam0000000113732cf0 = 0;
      ___cxa_guard_release(0x113732c70);
    }
  }
  if (param_1 < 8) {
    return (&PTR_DAT_110aeae40)[param_1];
  }
  puVar2 = (undefined *)0x10;
  ___cxa_allocate_exception(0x10);
  FUN_1092efc84();
  ___cxa_throw();
  return puVar2;
}



/* Entry: 1092fb004; end: 1092fb143;  */

void FUN_1092fb004(void)

{
  return;
}



/* Entry: 1092fb144; end: 1092fb18b;  */

/* WARNING: Removing unreachable block (ram,0x0001092fbb90) */
/* WARNING: Removing unreachable block (ram,0x0001092fba0c) */
/* WARNING: Removing unreachable block (ram,0x0001092fbc50) */
/* WARNING: Removing unreachable block (ram,0x0001092fbe44) */
/* WARNING: Removing unreachable block (ram,0x0001092fbaf0) */

undefined *** FUN_1092fb144(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined ******ppppppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  long *extraout_x8;
  undefined ***pppuVar21;
  long lVar22;
  int iVar23;
  undefined ***pppuVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  uint uVar28;
  undefined1 *puVar29;
  undefined **ppuVar30;
  long *plVar31;
  bool bVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined ***pppuStack_320;
  long *plStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined ***pppuStack_2e0;
  undefined ***pppuStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *****pppppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined7 uStack_298;
  char cStack_291;
  undefined8 uStack_260;
  char cStack_249;
  undefined **appuStack_238 [19];
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined ***pppuStack_180;
  undefined8 uStack_158;
  char cStack_141;
  undefined **appuStack_130 [19];
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  
  if (param_1 < 0x2d) {
    return (undefined ***)(long)(char)(&UNK_10dfc5700)[param_1];
  }
  puVar10 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar10 = &PTR_FUN_110aea548;
  puVar10[1] = 0;
  ppuVar20 = &PTR_DAT_110aea560;
  pcVar6 = FUN_1092ea780;
  ___cxa_throw();
  pppuVar11 = (undefined ***)0x30;
  __Znwm();
  *(undefined4 *)(pppuVar11 + 1) = 0;
  *pppuVar11 = &PTR_DAT_110aeae90;
  *(undefined4 *)(pppuVar11 + 3) = 0;
  pppuVar11[2] = &PTR_FUN_110ae9d40;
  pppuVar11[4] = (undefined **)0x0;
  func_0x0001092ead38(pppuVar11 + 2,puVar10[2]);
  pppuVar11[5] = (undefined **)0x0;
  *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
  pppuVar12 = (undefined ***)0x38;
  __Znwm();
  *(undefined1 *)pppuVar12 = 0;
  lStack_2c8 = -0x7fffffffffffffc8;
  lStack_2d0 = 0;
  uStack_2e8 = 0;
  ppuStack_2f0 = &PTR_FUN_110aea800;
  pppuVar13 = (undefined ***)0x28;
  pppuStack_2d8 = pppuVar12;
  __Znwm();
  bVar32 = false;
  pppuStack_320 = (undefined ***)0x0;
  pppuVar24 = pppuVar13 + 2;
  *pppuVar24 = (undefined **)0x0;
  *pppuVar13 = &PTR_DAT_110aeaec8;
  pppuVar13[3] = (undefined **)0x0;
  pppuVar13[4] = (undefined **)0x0;
  *(undefined4 *)(pppuVar13 + 1) = 1;
  ppuVar1 = (undefined **)
            (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  pppuVar12 = pppuVar13;
  pppuStack_2e0 = pppuVar13;
  do {
    if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) - *(int *)(pppuVar11 + 5)) * 8 -
        *(int *)((long)pppuVar11 + 0x2c) < 4) {
      FUN_1092fd284();
      pppuVar14 = pppuVar12;
    }
    else {
      pppuVar14 = pppuVar11;
      FUN_1092ebba0(pppuVar11,4);
      FUN_1092fd6a8();
    }
    pppuVar12 = pppuVar14;
    FUN_1092fd284();
    if (pppuVar14 != pppuVar12) {
      func_0x0001092fd570();
      if ((pppuVar14 == pppuVar12) || (func_0x0001092fd5d4(), pppuVar14 == pppuVar12)) {
        bVar32 = true;
      }
      else {
        func_0x0001092fd3c8();
        if (pppuVar14 == pppuVar12) {
          if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) - *(int *)(pppuVar11 + 5))
              * 8 - *(int *)((long)pppuVar11 + 0x2c) < 0x10) {
            puVar10 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            *puVar10 = &PTR_FUN_110aea548;
            puVar10[1] = 0;
            ___cxa_throw();
            goto LAB_1092fc7a8;
          }
          pppuVar12 = pppuVar11;
          FUN_1092ebba0(pppuVar11,0x10);
        }
        else {
          func_0x0001092fd49c();
          if (pppuVar14 == pppuVar12) {
            pppuVar12 = pppuVar11;
            FUN_1092ebba0(pppuVar11,8);
            uVar8 = (uint)pppuVar12;
            if ((uVar8 >> 7 & 1) == 0) {
              uVar8 = uVar8 & 0x7f;
LAB_1092fb6fc:
              pppuVar12 = (undefined ***)(ulong)uVar8;
              FUN_1092ed6c8();
              pppuStack_320 = pppuVar12;
              if (pppuVar12 != (undefined ***)0x0) goto LAB_1092fb440;
            }
            else {
              if ((uVar8 & 0xc0) == 0x80) {
                pppuVar12 = pppuVar11;
                FUN_1092ebba0(pppuVar11,8);
                uVar28 = (uint)pppuVar12;
                uVar8 = (uVar8 & 0x3f) << 8;
LAB_1092fb6f8:
                uVar8 = uVar28 | uVar8;
                goto LAB_1092fb6fc;
              }
              if ((uVar8 & 0xe0) == 0xc0) {
                pppuVar12 = pppuVar11;
                FUN_1092ebba0(pppuVar11,0x10);
                uVar28 = (uint)pppuVar12;
                uVar8 = (uVar8 & 0x1f) << 0x10;
                goto LAB_1092fb6f8;
              }
            }
            puVar10 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            *puVar10 = &PTR_FUN_110aea548;
            puVar10[1] = 0;
            ___cxa_throw();
LAB_1092fc7a8:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1092fc7ac);
            (*pcVar6)();
          }
          func_0x0001092fd638();
          if (pppuVar14 == pppuVar12) {
            pppuVar15 = pppuVar11;
            FUN_1092ebba0(pppuVar11,4);
            pppuVar21 = pppuVar14;
            if (9 < (int)*(uint *)((long)ppuVar20 + 0xc)) {
              pppuVar21 = pppuVar14 + 1;
              if (*(uint *)((long)ppuVar20 + 0xc) < 0x1b) {
                pppuVar21 = (undefined ***)((long)pppuVar14 + 4);
              }
            }
            pppuVar12 = pppuVar11;
            FUN_1092ebba0(pppuVar11,*(undefined4 *)pppuVar21);
            if ((int)pppuVar15 != 1) goto LAB_1092fb440;
            *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
            iVar9 = (int)pppuVar12;
            if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) - *(int *)(pppuVar11 + 5)
                ) * 8 - *(int *)((long)pppuVar11 + 0x2c) < iVar9 * 0xd) {
              puVar10 = (undefined8 *)0x10;
              ___cxa_allocate_exception();
              *puVar10 = &PTR_FUN_110aea548;
              puVar10[1] = 0;
              ___cxa_throw();
              goto LAB_1092fc7a8;
            }
            pppuVar12 = (undefined ***)(long)(iVar9 << 1);
            __Znam();
            if (0 < iVar9) {
              puVar27 = (undefined1 *)((long)pppuVar12 + 1);
              uVar8 = iVar9 + 1;
              do {
                pppuVar15 = pppuVar11;
                FUN_1092ebba0(pppuVar11,0xd);
                uVar28 = (int)pppuVar15 % 0x60 | ((int)pppuVar15 / 0x60) * 0x100;
                iVar23 = 0xa1a1;
                if (0x3be < (int)uVar28) {
                  iVar23 = 0xa6a1;
                }
                uVar28 = iVar23 + uVar28;
                *(ushort *)(puVar27 + -1) =
                     (ushort)(uVar28 >> 8) & 0xff | (ushort)((uVar28 & 0xff00ff) << 8);
                puVar27 = puVar27 + 2;
                uVar8 = uVar8 - 1;
              } while (1 < uVar8);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppuStack_2d8,pppuVar12,(undefined ***)(long)(iVar9 << 1));
LAB_1092fb944:
            __ZdaPv();
            iVar9 = *(int *)(pppuVar11 + 1) + -1;
            *(int *)(pppuVar11 + 1) = iVar9;
          }
          else {
            pppuVar12 = pppuVar14 + 1;
            if (*(uint *)((long)ppuVar20 + 0xc) < 0x1b) {
              pppuVar12 = (undefined ***)((long)pppuVar14 + 4);
            }
            pppuVar15 = pppuVar14;
            if (9 < (int)*(uint *)((long)ppuVar20 + 0xc)) {
              pppuVar15 = pppuVar12;
            }
            pppuVar21 = pppuVar11;
            FUN_1092ebba0(pppuVar11,*(undefined4 *)pppuVar15);
            pppuVar12 = pppuVar21;
            func_0x0001092fd2e8();
            uVar8 = (uint)pppuVar21;
            if (pppuVar14 == pppuVar12) {
              *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
              pppuVar12 = (undefined ***)(long)(int)uVar8;
              __Znam();
              if ((int)uVar8 < 3) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                do {
                  if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) -
                      *(int *)(pppuVar11 + 5)) * 8 - *(int *)((long)pppuVar11 + 0x2c) < 10)
                  goto LAB_1092fc064;
                  pppuVar15 = pppuVar11;
                  FUN_1092ebba0(pppuVar11,10);
                  iVar9 = (int)pppuVar15;
                  if (999 < iVar9) {
                    FUN_10926db08(&ppuStack_1a0);
                    FUN_1092b4db8(&ppuStack_1a0,&UNK_10f56660b,0x20);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                    __ZdaPv(pppuVar12);
                    uVar19 = 0x10;
                    ___cxa_allocate_exception(0x10);
                    FUN_10926dc5c(&pppppuStack_2a8,&ppuStack_198,&uStack_90);
                    ppppppuVar3 = (undefined ******)pppppuStack_2a8;
                    if (-1 < cStack_291) {
                      ppppppuVar3 = &pppppuStack_2a8;
                    }
                    FUN_1092ea600(uVar19,ppppppuVar3);
                    ___cxa_throw();
                    goto LAB_1092fc7a8;
                  }
                  puVar27 = (undefined1 *)((long)pppuVar12 + lVar17);
                  *puVar27 = (&UNK_10dfc5700)[iVar9 / 100];
                  uVar7 = (&UNK_10dfc5700)[iVar9 % 10];
                  puVar27[1] = (&UNK_10dfc5700)[(iVar9 / 10) % 10];
                  lVar17 = lVar17 + 3;
                  puVar27[2] = uVar7;
                  iVar9 = (int)pppuVar21;
                  pppuVar21 = (undefined ***)(ulong)(iVar9 - 3);
                } while (5 < iVar9);
              }
              if ((int)pppuVar21 == 1) {
                if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) -
                    *(int *)(pppuVar11 + 5)) * 8 - *(int *)((long)pppuVar11 + 0x2c) < 4) {
LAB_1092fc064:
                  __ZdaPv(pppuVar12);
                  ___cxa_allocate_exception(0x10);
                  FUN_1092ea600();
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                pppuVar15 = pppuVar11;
                FUN_1092ebba0(pppuVar11,4);
                if (9 < (int)pppuVar15) {
                  FUN_10926db08(&ppuStack_1a0);
                  FUN_1092b4db8(&ppuStack_1a0,&UNK_10f56664d,0x1e);
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                  __ZdaPv(pppuVar12);
                  uVar19 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  FUN_10926dc5c(&pppppuStack_2a8,&ppuStack_198,&uStack_90);
                  ppppppuVar3 = (undefined ******)pppppuStack_2a8;
                  if (-1 < cStack_291) {
                    ppppppuVar3 = &pppppuStack_2a8;
                  }
                  FUN_1092ea600(uVar19,ppppppuVar3);
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                *(undefined *)((long)pppuVar12 + lVar17) = (&UNK_10dfc5700)[(int)pppuVar15];
              }
              else if ((int)pppuVar21 == 2) {
                if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) -
                    *(int *)(pppuVar11 + 5)) * 8 - *(int *)((long)pppuVar11 + 0x2c) < 7)
                goto LAB_1092fc064;
                pppuVar15 = pppuVar11;
                FUN_1092ebba0(pppuVar11,7);
                iVar9 = (int)pppuVar15;
                if (99 < iVar9) {
                  FUN_10926db08(&ppuStack_1a0);
                  FUN_1092b4db8(&ppuStack_1a0,&UNK_10f56662c,0x20);
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                  __ZdaPv(pppuVar12);
                  uVar19 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  FUN_10926dc5c(&pppppuStack_2a8,&ppuStack_198,&uStack_90);
                  ppppppuVar3 = (undefined ******)pppppuStack_2a8;
                  if (-1 < cStack_291) {
                    ppppppuVar3 = &pppppuStack_2a8;
                  }
                  FUN_1092ea600(uVar19,ppppppuVar3);
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                *(undefined1 *)((long)pppuVar12 + lVar17) = (&UNK_10dfc5700)[iVar9 / 10];
                ((undefined1 *)((long)pppuVar12 + lVar17))[1] = (&UNK_10dfc5700)[iVar9 % 10];
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&pppuStack_2d8,pppuVar12,(undefined ***)(long)(int)uVar8);
              goto LAB_1092fb944;
            }
            func_0x0001092fd358();
            if (pppuVar14 == pppuVar12) {
              *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
              FUN_10926db08(&ppuStack_1a0);
              if (1 < (int)uVar8) {
                do {
                  if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) -
                      *(int *)(pppuVar11 + 5)) * 8 - *(int *)((long)pppuVar11 + 0x2c) < 0xb)
                  goto LAB_1092fc118;
                  pppuVar12 = pppuVar11;
                  FUN_1092ebba0(pppuVar11,0xb);
                  uVar7 = (undefined1)((int)pppuVar12 / 0x2d);
                  FUN_1092fb144();
                  pppppuStack_2a8._0_1_ = uVar7;
                  FUN_1092b4db8(&ppuStack_1a0,&pppppuStack_2a8,1);
                  uVar7 = (undefined1)((int)pppuVar12 % 0x2d);
                  FUN_1092fb144();
                  pppppuStack_2a8 = (undefined *****)CONCAT71(pppppuStack_2a8._1_7_,uVar7);
                  FUN_1092b4db8(&ppuStack_1a0,&pppppuStack_2a8,1);
                  iVar9 = (int)pppuVar21;
                  uVar8 = iVar9 - 2;
                  pppuVar21 = (undefined ***)(ulong)uVar8;
                } while (3 < iVar9);
              }
              if (uVar8 == 1) {
                if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) -
                    *(int *)(pppuVar11 + 5)) * 8 - *(int *)((long)pppuVar11 + 0x2c) < 6) {
LAB_1092fc118:
                  puVar10 = (undefined8 *)0x10;
                  ___cxa_allocate_exception();
                  *puVar10 = &PTR_FUN_110aea548;
                  puVar10[1] = 0;
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                pppuVar12 = pppuVar11;
                FUN_1092ebba0(pppuVar11,6);
                uVar7 = SUB81(pppuVar12,0);
                FUN_1092fb144();
                pppppuStack_2a8 = (undefined *****)CONCAT71(pppppuStack_2a8._1_7_,uVar7);
                FUN_1092b4db8(&ppuStack_1a0,&pppppuStack_2a8,1);
              }
              FUN_10926dc5c(&uStack_90,&ppuStack_198,&pppppuStack_2a8);
              if (bVar32) {
                FUN_10926db08(&pppppuStack_2a8);
                uVar26 = (ulong)ppuStack_80 >> 0x38;
                if (uVar26 != 0) {
                  uVar25 = 0;
                  do {
                    if (*(char *)((long)&uStack_90 + uVar25) == '%') {
                      if ((uVar25 < uVar26 - 1) && (*(char *)((long)&uStack_90 + uVar25 + 1) == '%')
                         ) {
                        uStack_2c0 = *(undefined1 *)((long)&uStack_90 + uVar25);
                        FUN_1092b4db8(&pppppuStack_2a8,&uStack_2c0,1);
                        uVar25 = uVar25 + 1;
                      }
                      else {
                        uStack_2c0 = 0x1d;
                        FUN_1092b4db8(&pppppuStack_2a8,&uStack_2c0,1);
                      }
                    }
                    else {
                      uStack_2c0 = *(undefined1 *)((long)&uStack_90 + uVar25);
                      FUN_1092b4db8(&pppppuStack_2a8,&uStack_2c0,1);
                    }
                    uVar25 = uVar25 + 1;
                    uVar26 = (ulong)ppuStack_80 >> 0x38;
                  } while (uVar25 < uVar26);
                }
                FUN_10926dc5c(&uStack_2c0,&ppuStack_2a0,&uStack_91);
                uStack_90 = (undefined **)CONCAT71(uStack_2bf,uStack_2c0);
                ppuStack_88 = ppuStack_2b8;
                ppuStack_80 = ppuStack_2b0;
                appuStack_238[0] = &PTR_DAT_11088d708;
                pppppuStack_2a8 = (undefined *****)&PTR_SUB_11088d6e0;
                ppuStack_2a0 = &PTR_DAT_11088d7b0;
                if (cStack_249 < '\0') {
                  __ZdlPv(uStack_260);
                }
                ppuStack_2a0 = ppuVar1;
                __ZNSt3__16localeD1Ev(&uStack_298);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev
                          (&pppppuStack_2a8,&PTR_PTR_11088d720);
                __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_238);
              }
              ppuVar30 = ppuStack_88;
              ppuVar16 = uStack_90;
              if (-1 < (long)ppuStack_80) {
                ppuVar30 = (undefined **)((ulong)ppuStack_80 >> 0x38);
                ppuVar16 = (undefined **)&uStack_90;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&pppuStack_2d8,ppuVar16,ppuVar30);
              appuStack_130[0] = &PTR_DAT_11088d708;
              ppuStack_1a0 = &PTR_SUB_11088d6e0;
              ppuStack_198 = &PTR_DAT_11088d7b0;
              if (cStack_141 < '\0') {
                __ZdlPv(uStack_158);
              }
              ppuStack_198 = (undefined **)
                             (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 +
                             0x10);
              __ZNSt3__16localeD1Ev(&ppuStack_190);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1a0,&PTR_PTR_11088d720)
              ;
              pppuVar12 = appuStack_130;
              __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
            }
            else {
              func_0x0001092fd42c();
              if (pppuVar14 != pppuVar12) {
                func_0x0001092fd500();
                if (pppuVar14 != pppuVar12) {
                  puVar10 = (undefined8 *)0x10;
                  ___cxa_allocate_exception();
                  *puVar10 = &PTR_FUN_110aea548;
                  puVar10[1] = 0;
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
                pppuVar12 = (undefined ***)(long)(int)(uVar8 << 1);
                __Znam();
                if (0 < (int)uVar8) {
                  puVar27 = (undefined1 *)((long)pppuVar12 + 1);
                  uVar28 = uVar8 + 1;
                  do {
                    pppuVar15 = pppuVar11;
                    FUN_1092ebba0(pppuVar11,0xd);
                    uVar5 = (int)pppuVar15 % 0xc0 | ((int)pppuVar15 / 0xc0) * 0x100;
                    iVar9 = 0x8140;
                    if (0x1eff < (int)uVar5) {
                      iVar9 = 0xc140;
                    }
                    uVar5 = iVar9 + uVar5;
                    *(ushort *)(puVar27 + -1) =
                         (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
                    puVar27 = puVar27 + 2;
                    uVar28 = uVar28 - 1;
                  } while (1 < uVar28);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&pppuStack_2d8,pppuVar12,(undefined ***)(long)(int)(uVar8 << 1));
                goto LAB_1092fb944;
              }
              *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
              if (((*(int *)(pppuVar11[4] + 3) - *(int *)(pppuVar11[4] + 2)) -
                  *(int *)(pppuVar11 + 5)) * 8 - *(int *)((long)pppuVar11 + 0x2c) < (int)(uVar8 * 8)
                 ) {
                puVar10 = (undefined8 *)0x10;
                ___cxa_allocate_exception();
                *puVar10 = &PTR_FUN_110aea548;
                puVar10[1] = 0;
                ___cxa_throw();
                goto LAB_1092fc7a8;
              }
              FUN_1092ead9c(&pppppuStack_2a8,pppuVar21);
              puVar27 = *(undefined1 **)(CONCAT17(cStack_291,uStack_298) + 0x10);
              if (0 < (int)uVar8) {
                uVar26 = (ulong)pppuVar21 & 0xffffffff;
                puVar29 = puVar27;
                do {
                  pppuVar12 = pppuVar11;
                  FUN_1092ebba0(pppuVar11,8);
                  *puVar29 = (char)pppuVar12;
                  uVar26 = uVar26 - 1;
                  puVar29 = puVar29 + 1;
                } while (uVar26 != 0);
              }
              uStack_90 = (undefined **)0x0;
              ppuStack_88 = (undefined **)0x0;
              ppuStack_80 = (undefined **)0x0;
              if (pppuStack_320 == (undefined ***)0x0) {
                FUN_1092f022c(&ppuStack_1a0,puVar27,pppuVar21,param_4);
                ppuStack_88 = ppuStack_198;
                uStack_90 = ppuStack_1a0;
                ppuStack_80 = ppuStack_190;
              }
              else {
                func_0x000107c2c4dc(&uStack_90,*pppuStack_320[3]);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&pppuStack_2d8,puVar27,(long)(int)uVar8);
              ppuVar30 = pppuVar13[3];
              if (ppuVar30 < pppuVar13[4]) {
                *(undefined4 *)(ppuVar30 + 1) = 0;
                *ppuVar30 = (undefined *)&PTR_FUN_110ae9d40;
                ppuVar30[2] = (undefined *)0x0;
                func_0x0001092ead38(ppuVar30,CONCAT17(cStack_291,uStack_298));
                ppuVar30 = ppuVar30 + 3;
                pppuVar13[3] = ppuVar30;
              }
              else {
                lVar17 = (long)ppuVar30 - (long)*pppuVar24;
                uVar26 = (lVar17 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar26) {
                  FUN_1092fc828();
                  goto LAB_1092fc7a8;
                }
                lVar22 = (long)pppuVar13[4] - (long)*pppuVar24 >> 3;
                uVar25 = lVar22 * 0x5555555555555556;
                if (uVar25 < uVar26 || uVar25 - uVar26 == 0) {
                  uVar25 = uVar26;
                }
                if (0x555555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
                  uVar25 = 0xaaaaaaaaaaaaaaa;
                }
                pppuStack_180 = pppuVar24;
                if (uVar25 == 0) {
                  ppuVar16 = (undefined **)0x0;
                }
                else {
                  if (0xaaaaaaaaaaaaaaa < uVar25) {
                    func_0x000104c4f740();
                    goto LAB_1092fc7a8;
                  }
                  ppuVar16 = (undefined **)(uVar25 * 0x18);
                  __Znwm();
                }
                ppuVar30 = (undefined **)((long)ppuVar16 + lVar17);
                ppuVar33 = ppuVar16 + uVar25 * 3;
                *(undefined4 *)(ppuVar30 + 1) = 0;
                *ppuVar30 = (undefined *)&PTR_FUN_110ae9d40;
                ppuVar30[2] = (undefined *)0x0;
                ppuStack_1a0 = ppuVar16;
                ppuStack_198 = ppuVar30;
                ppuStack_190 = ppuVar30;
                ppuStack_188 = ppuVar33;
                func_0x0001092ead38(ppuVar30,CONCAT17(cStack_291,uStack_298));
                ppuVar16 = pppuVar13[2];
                ppuVar4 = pppuVar13[3];
                ppuVar34 = (undefined **)((long)ppuVar30 - ((long)ppuVar4 - (long)ppuVar16));
                ppuVar30 = ppuVar30 + 3;
                if (ppuVar4 != ppuVar16) {
                  lVar17 = 0;
                  ppuStack_190 = ppuVar30;
                  do {
                    puVar2 = (undefined8 *)((long)ppuVar34 + lVar17);
                    *(undefined4 *)(puVar2 + 1) = 0;
                    *puVar2 = &PTR_FUN_110ae9d40;
                    puVar2[2] = 0;
                    func_0x0001092ead38(puVar2,*(undefined8 *)((long)ppuVar16 + lVar17 + 0x10));
                    lVar17 = lVar17 + 0x18;
                  } while ((undefined **)((long)ppuVar16 + lVar17) != ppuVar4);
                  do {
                    ppuVar30 = ppuVar16 + 3;
                    (**(code **)*ppuVar16)(ppuVar16);
                    ppuVar16 = ppuVar30;
                  } while (ppuVar30 != ppuVar4);
                  ppuVar16 = *pppuVar24;
                  ppuVar30 = ppuStack_190;
                  ppuVar33 = ppuStack_188;
                }
                pppuVar13[2] = ppuVar34;
                pppuVar13[3] = ppuVar30;
                ppuStack_188 = pppuVar13[4];
                pppuVar13[4] = ppuVar33;
                ppuStack_1a0 = ppuVar16;
                ppuStack_198 = ppuVar16;
                ppuStack_190 = ppuVar16;
                FUN_1092fc83c(&ppuStack_1a0);
              }
              pppuVar13[3] = ppuVar30;
              pppppuStack_2a8 = (undefined *****)&PTR_FUN_110ae9d40;
              pppuVar12 = (undefined ***)CONCAT17(cStack_291,uStack_298);
              if ((pppuVar12 != (undefined ***)0x0) &&
                 (iVar9 = *(int *)(pppuVar12 + 1), *(int *)(pppuVar12 + 1) = iVar9 + -1,
                 iVar9 + -1 == 0)) {
                *(undefined4 *)(pppuVar12 + 1) = 0xdeadf001;
                (*(code *)(*pppuVar12)[1])();
              }
            }
            iVar9 = *(int *)(pppuVar11 + 1) + -1;
            *(int *)(pppuVar11 + 1) = iVar9;
          }
          if (iVar9 == 0) {
            *(undefined4 *)(pppuVar11 + 1) = 0xdeadf001;
            pppuVar12 = pppuVar11;
            (*(code *)(*pppuVar11)[1])();
          }
        }
      }
    }
LAB_1092fb440:
    FUN_1092fd284();
    if (pppuVar14 == pppuVar12) {
      lVar17 = 0x60;
      __Znwm();
      uStack_300 = 0;
      ppuStack_308 = &PTR_FUN_110ae9d40;
      plVar31 = (long *)puVar10[2];
      if (plVar31 != (long *)0x0) {
        *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
      }
      plVar18 = (long *)0x28;
      plStack_2f8 = plVar31;
      __Znwm();
      *(undefined4 *)(plVar18 + 1) = 0;
      *plVar18 = (long)&PTR_FUN_110aea9b0;
      if (lStack_2c8 < 0) {
        func_0x000107c3192c(plVar18 + 2,pppuStack_2d8,lStack_2d0);
        iVar9 = (int)plVar18[1] + 1;
      }
      else {
        plVar18[3] = lStack_2d0;
        plVar18[2] = (long)pppuStack_2d8;
        plVar18[4] = lStack_2c8;
        iVar9 = 1;
      }
      *(int *)(plVar18 + 1) = iVar9;
      plStack_310 = plVar18;
      if ((char)pcVar6[0x1f] < '\0') {
        func_0x000107c3192c(&ppuStack_1a0,*(undefined8 *)(pcVar6 + 8),*(undefined8 *)(pcVar6 + 0x10)
                           );
      }
      else {
        ppuStack_198 = *(undefined ***)(pcVar6 + 0x10);
        ppuStack_1a0 = *(undefined ***)(pcVar6 + 8);
        ppuStack_190 = *(undefined ***)(pcVar6 + 0x18);
      }
      FUN_1092edbd0(lVar17,&ppuStack_308,&plStack_310,&ppuStack_2f0,&ppuStack_1a0);
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      *extraout_x8 = lVar17;
      if ((long)ppuStack_190 < 0) {
        __ZdlPv(ppuStack_1a0);
      }
      iVar9 = (int)plVar18[1] + -1;
      *(int *)(plVar18 + 1) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)(plVar18 + 1) = 0xdeadf001;
        (**(code **)(*plVar18 + 8))(plVar18);
      }
      if ((plVar31 != (long *)0x0) &&
         (iVar9 = (int)plVar31[1] + -1, *(int *)(plVar31 + 1) = iVar9, iVar9 == 0)) {
        *(undefined4 *)(plVar31 + 1) = 0xdeadf001;
        (**(code **)(*plVar31 + 8))(plVar31);
      }
      iVar9 = *(int *)(pppuVar13 + 1);
      *(int *)(pppuVar13 + 1) = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        *(undefined4 *)(pppuVar13 + 1) = 0xdeadf001;
        (*(code *)(*pppuVar13)[1])();
      }
      if (lStack_2c8 < 0) {
        pppuVar13 = pppuStack_2d8;
        __ZdlPv(pppuStack_2d8);
      }
      iVar9 = *(int *)(pppuVar11 + 1);
      *(int *)(pppuVar11 + 1) = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        *(undefined4 *)(pppuVar11 + 1) = 0xdeadf001;
        (*(code *)(*pppuVar11)[1])(pppuVar11);
        pppuVar13 = pppuVar11;
      }
      return pppuVar13;
    }
  } while( true );
}



/* Entry: 1092fb18c; end: 1092fc827;  */

/* WARNING: Removing unreachable block (ram,0x0001092fbb90) */
/* WARNING: Removing unreachable block (ram,0x0001092fba0c) */
/* WARNING: Removing unreachable block (ram,0x0001092fbc50) */
/* WARNING: Removing unreachable block (ram,0x0001092fbe44) */
/* WARNING: Removing unreachable block (ram,0x0001092fbaf0) */

void FUN_1092fb18c(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  undefined ******ppppppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined ***pppuVar20;
  long lVar21;
  int iVar22;
  undefined ***pppuVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  undefined1 *puVar27;
  undefined **ppuVar28;
  long *plVar29;
  bool bVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined ***pppuStack_310;
  long *plStack_300;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  long *plStack_2e8;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined ***pppuStack_2d0;
  undefined1 *puStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined *****pppppuStack_298;
  undefined **ppuStack_290;
  undefined7 uStack_288;
  char cStack_281;
  undefined8 uStack_250;
  char cStack_239;
  undefined **appuStack_228 [19];
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined ***pppuStack_170;
  undefined8 uStack_148;
  char cStack_131;
  undefined **appuStack_120 [19];
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  
  pppuVar9 = (undefined ***)0x30;
  __Znwm();
  *(undefined4 *)(pppuVar9 + 1) = 0;
  *pppuVar9 = &PTR_DAT_110aeae90;
  *(undefined4 *)(pppuVar9 + 3) = 0;
  pppuVar9[2] = &PTR_FUN_110ae9d40;
  pppuVar9[4] = (undefined **)0x0;
  func_0x0001092ead38(pppuVar9 + 2,*(undefined8 *)(param_2 + 0x10));
  pppuVar9[5] = (undefined **)0x0;
  *(int *)(pppuVar9 + 1) = *(int *)(pppuVar9 + 1) + 1;
  puVar10 = (undefined1 *)0x38;
  __Znwm();
  *puVar10 = 0;
  lStack_2b8 = -0x7fffffffffffffc8;
  lStack_2c0 = 0;
  uStack_2d8 = 0;
  ppuStack_2e0 = &PTR_FUN_110aea800;
  pppuVar11 = (undefined ***)0x28;
  puStack_2c8 = puVar10;
  __Znwm();
  bVar30 = false;
  pppuStack_310 = (undefined ***)0x0;
  pppuVar23 = pppuVar11 + 2;
  *pppuVar23 = (undefined **)0x0;
  *pppuVar11 = &PTR_DAT_110aeaec8;
  pppuVar11[3] = (undefined **)0x0;
  pppuVar11[4] = (undefined **)0x0;
  *(undefined4 *)(pppuVar11 + 1) = 1;
  ppuVar1 = (undefined **)
            (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  pppuVar13 = pppuVar11;
  pppuStack_2d0 = pppuVar11;
  do {
    if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) - *(int *)(pppuVar9 + 5)) * 8 -
        *(int *)((long)pppuVar9 + 0x2c) < 4) {
      FUN_1092fd284();
      pppuVar12 = pppuVar13;
    }
    else {
      pppuVar12 = pppuVar9;
      FUN_1092ebba0(pppuVar9,4);
      FUN_1092fd6a8();
    }
    pppuVar13 = pppuVar12;
    FUN_1092fd284();
    if (pppuVar12 != pppuVar13) {
      func_0x0001092fd570();
      if ((pppuVar12 == pppuVar13) || (func_0x0001092fd5d4(), pppuVar12 == pppuVar13)) {
        bVar30 = true;
      }
      else {
        func_0x0001092fd3c8();
        if (pppuVar12 == pppuVar13) {
          if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) - *(int *)(pppuVar9 + 5)) * 8
              - *(int *)((long)pppuVar9 + 0x2c) < 0x10) {
            puVar18 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            *puVar18 = &PTR_FUN_110aea548;
            puVar18[1] = 0;
            ___cxa_throw();
            goto LAB_1092fc7a8;
          }
          pppuVar13 = pppuVar9;
          FUN_1092ebba0(pppuVar9,0x10);
        }
        else {
          func_0x0001092fd49c();
          if (pppuVar12 == pppuVar13) {
            pppuVar13 = pppuVar9;
            FUN_1092ebba0(pppuVar9,8);
            uVar7 = (uint)pppuVar13;
            if ((uVar7 >> 7 & 1) == 0) {
              uVar7 = uVar7 & 0x7f;
LAB_1092fb6fc:
              pppuVar13 = (undefined ***)(ulong)uVar7;
              FUN_1092ed6c8();
              pppuStack_310 = pppuVar13;
              if (pppuVar13 != (undefined ***)0x0) goto LAB_1092fb440;
            }
            else {
              if ((uVar7 & 0xc0) == 0x80) {
                pppuVar13 = pppuVar9;
                FUN_1092ebba0(pppuVar9,8);
                uVar26 = (uint)pppuVar13;
                uVar7 = (uVar7 & 0x3f) << 8;
LAB_1092fb6f8:
                uVar7 = uVar26 | uVar7;
                goto LAB_1092fb6fc;
              }
              if ((uVar7 & 0xe0) == 0xc0) {
                pppuVar13 = pppuVar9;
                FUN_1092ebba0(pppuVar9,0x10);
                uVar26 = (uint)pppuVar13;
                uVar7 = (uVar7 & 0x1f) << 0x10;
                goto LAB_1092fb6f8;
              }
            }
            puVar18 = (undefined8 *)0x10;
            ___cxa_allocate_exception();
            *puVar18 = &PTR_FUN_110aea548;
            puVar18[1] = 0;
            ___cxa_throw();
LAB_1092fc7a8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1092fc7ac);
            (*pcVar5)();
          }
          func_0x0001092fd638();
          if (pppuVar12 == pppuVar13) {
            pppuVar14 = pppuVar9;
            FUN_1092ebba0(pppuVar9,4);
            pppuVar20 = pppuVar12;
            if (9 < (int)*(uint *)(param_3 + 0xc)) {
              pppuVar20 = pppuVar12 + 1;
              if (*(uint *)(param_3 + 0xc) < 0x1b) {
                pppuVar20 = (undefined ***)((long)pppuVar12 + 4);
              }
            }
            pppuVar13 = pppuVar9;
            FUN_1092ebba0(pppuVar9,*(undefined4 *)pppuVar20);
            if ((int)pppuVar14 != 1) goto LAB_1092fb440;
            *(int *)(pppuVar9 + 1) = *(int *)(pppuVar9 + 1) + 1;
            iVar8 = (int)pppuVar13;
            if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) - *(int *)(pppuVar9 + 5)) *
                8 - *(int *)((long)pppuVar9 + 0x2c) < iVar8 * 0xd) {
              puVar18 = (undefined8 *)0x10;
              ___cxa_allocate_exception();
              *puVar18 = &PTR_FUN_110aea548;
              puVar18[1] = 0;
              ___cxa_throw();
              goto LAB_1092fc7a8;
            }
            pppuVar13 = (undefined ***)(long)(iVar8 << 1);
            __Znam();
            if (0 < iVar8) {
              lVar16 = (long)pppuVar13 + 1;
              uVar7 = iVar8 + 1;
              do {
                pppuVar14 = pppuVar9;
                FUN_1092ebba0(pppuVar9,0xd);
                uVar26 = (int)pppuVar14 % 0x60 | ((int)pppuVar14 / 0x60) * 0x100;
                iVar22 = 0xa1a1;
                if (0x3be < (int)uVar26) {
                  iVar22 = 0xa6a1;
                }
                uVar26 = iVar22 + uVar26;
                *(ushort *)(lVar16 + -1) =
                     (ushort)(uVar26 >> 8) & 0xff | (ushort)((uVar26 & 0xff00ff) << 8);
                lVar16 = lVar16 + 2;
                uVar7 = uVar7 - 1;
              } while (1 < uVar7);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&puStack_2c8,pppuVar13,(undefined ***)(long)(iVar8 << 1));
LAB_1092fb944:
            __ZdaPv();
            iVar8 = *(int *)(pppuVar9 + 1) + -1;
            *(int *)(pppuVar9 + 1) = iVar8;
          }
          else {
            pppuVar13 = pppuVar12 + 1;
            if (*(uint *)(param_3 + 0xc) < 0x1b) {
              pppuVar13 = (undefined ***)((long)pppuVar12 + 4);
            }
            pppuVar14 = pppuVar12;
            if (9 < (int)*(uint *)(param_3 + 0xc)) {
              pppuVar14 = pppuVar13;
            }
            pppuVar20 = pppuVar9;
            FUN_1092ebba0(pppuVar9,*(undefined4 *)pppuVar14);
            pppuVar13 = pppuVar20;
            func_0x0001092fd2e8();
            uVar7 = (uint)pppuVar20;
            if (pppuVar12 == pppuVar13) {
              *(int *)(pppuVar9 + 1) = *(int *)(pppuVar9 + 1) + 1;
              pppuVar13 = (undefined ***)(long)(int)uVar7;
              __Znam();
              if ((int)uVar7 < 3) {
                lVar16 = 0;
              }
              else {
                lVar16 = 0;
                do {
                  if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) -
                      *(int *)(pppuVar9 + 5)) * 8 - *(int *)((long)pppuVar9 + 0x2c) < 10)
                  goto LAB_1092fc064;
                  pppuVar14 = pppuVar9;
                  FUN_1092ebba0(pppuVar9,10);
                  iVar8 = (int)pppuVar14;
                  if (999 < iVar8) {
                    FUN_10926db08(&ppuStack_190);
                    FUN_1092b4db8(&ppuStack_190,&UNK_10f56660b,0x20);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                    __ZdaPv(pppuVar13);
                    uVar19 = 0x10;
                    ___cxa_allocate_exception(0x10);
                    FUN_10926dc5c(&pppppuStack_298,&ppuStack_188,&uStack_80);
                    ppppppuVar2 = (undefined ******)pppppuStack_298;
                    if (-1 < cStack_281) {
                      ppppppuVar2 = &pppppuStack_298;
                    }
                    FUN_1092ea600(uVar19,ppppppuVar2);
                    ___cxa_throw();
                    goto LAB_1092fc7a8;
                  }
                  puVar10 = (undefined1 *)((long)pppuVar13 + lVar16);
                  *puVar10 = (&UNK_10dfc5700)[iVar8 / 100];
                  uVar6 = (&UNK_10dfc5700)[iVar8 % 10];
                  puVar10[1] = (&UNK_10dfc5700)[(iVar8 / 10) % 10];
                  lVar16 = lVar16 + 3;
                  puVar10[2] = uVar6;
                  iVar8 = (int)pppuVar20;
                  pppuVar20 = (undefined ***)(ulong)(iVar8 - 3);
                } while (5 < iVar8);
              }
              if ((int)pppuVar20 == 1) {
                if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) -
                    *(int *)(pppuVar9 + 5)) * 8 - *(int *)((long)pppuVar9 + 0x2c) < 4) {
LAB_1092fc064:
                  __ZdaPv(pppuVar13);
                  ___cxa_allocate_exception(0x10);
                  FUN_1092ea600();
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                pppuVar14 = pppuVar9;
                FUN_1092ebba0(pppuVar9,4);
                if (9 < (int)pppuVar14) {
                  FUN_10926db08(&ppuStack_190);
                  FUN_1092b4db8(&ppuStack_190,&UNK_10f56664d,0x1e);
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                  __ZdaPv(pppuVar13);
                  uVar19 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  FUN_10926dc5c(&pppppuStack_298,&ppuStack_188,&uStack_80);
                  ppppppuVar2 = (undefined ******)pppppuStack_298;
                  if (-1 < cStack_281) {
                    ppppppuVar2 = &pppppuStack_298;
                  }
                  FUN_1092ea600(uVar19,ppppppuVar2);
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                *(undefined *)((long)pppuVar13 + lVar16) = (&UNK_10dfc5700)[(int)pppuVar14];
              }
              else if ((int)pppuVar20 == 2) {
                if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) -
                    *(int *)(pppuVar9 + 5)) * 8 - *(int *)((long)pppuVar9 + 0x2c) < 7)
                goto LAB_1092fc064;
                pppuVar14 = pppuVar9;
                FUN_1092ebba0(pppuVar9,7);
                iVar8 = (int)pppuVar14;
                if (99 < iVar8) {
                  FUN_10926db08(&ppuStack_190);
                  FUN_1092b4db8(&ppuStack_190,&UNK_10f56662c,0x20);
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                  __ZdaPv(pppuVar13);
                  uVar19 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  FUN_10926dc5c(&pppppuStack_298,&ppuStack_188,&uStack_80);
                  ppppppuVar2 = (undefined ******)pppppuStack_298;
                  if (-1 < cStack_281) {
                    ppppppuVar2 = &pppppuStack_298;
                  }
                  FUN_1092ea600(uVar19,ppppppuVar2);
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                *(undefined1 *)((long)pppuVar13 + lVar16) = (&UNK_10dfc5700)[iVar8 / 10];
                ((undefined1 *)((long)pppuVar13 + lVar16))[1] = (&UNK_10dfc5700)[iVar8 % 10];
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&puStack_2c8,pppuVar13,(undefined ***)(long)(int)uVar7);
              goto LAB_1092fb944;
            }
            func_0x0001092fd358();
            if (pppuVar12 == pppuVar13) {
              *(int *)(pppuVar9 + 1) = *(int *)(pppuVar9 + 1) + 1;
              FUN_10926db08(&ppuStack_190);
              if (1 < (int)uVar7) {
                do {
                  if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) -
                      *(int *)(pppuVar9 + 5)) * 8 - *(int *)((long)pppuVar9 + 0x2c) < 0xb)
                  goto LAB_1092fc118;
                  pppuVar13 = pppuVar9;
                  FUN_1092ebba0(pppuVar9,0xb);
                  uVar6 = (undefined1)((int)pppuVar13 / 0x2d);
                  FUN_1092fb144();
                  pppppuStack_298._0_1_ = uVar6;
                  FUN_1092b4db8(&ppuStack_190,&pppppuStack_298,1);
                  uVar6 = (undefined1)((int)pppuVar13 % 0x2d);
                  FUN_1092fb144();
                  pppppuStack_298 = (undefined *****)CONCAT71(pppppuStack_298._1_7_,uVar6);
                  FUN_1092b4db8(&ppuStack_190,&pppppuStack_298,1);
                  iVar8 = (int)pppuVar20;
                  uVar7 = iVar8 - 2;
                  pppuVar20 = (undefined ***)(ulong)uVar7;
                } while (3 < iVar8);
              }
              if (uVar7 == 1) {
                if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) -
                    *(int *)(pppuVar9 + 5)) * 8 - *(int *)((long)pppuVar9 + 0x2c) < 6) {
LAB_1092fc118:
                  puVar18 = (undefined8 *)0x10;
                  ___cxa_allocate_exception();
                  *puVar18 = &PTR_FUN_110aea548;
                  puVar18[1] = 0;
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                pppuVar13 = pppuVar9;
                FUN_1092ebba0(pppuVar9,6);
                uVar6 = SUB81(pppuVar13,0);
                FUN_1092fb144();
                pppppuStack_298 = (undefined *****)CONCAT71(pppppuStack_298._1_7_,uVar6);
                FUN_1092b4db8(&ppuStack_190,&pppppuStack_298,1);
              }
              FUN_10926dc5c(&uStack_80,&ppuStack_188,&pppppuStack_298);
              if (bVar30) {
                FUN_10926db08(&pppppuStack_298);
                uVar25 = (ulong)ppuStack_70 >> 0x38;
                if (uVar25 != 0) {
                  uVar24 = 0;
                  do {
                    if (*(char *)((long)&uStack_80 + uVar24) == '%') {
                      if ((uVar24 < uVar25 - 1) && (*(char *)((long)&uStack_80 + uVar24 + 1) == '%')
                         ) {
                        uStack_2b0 = *(undefined1 *)((long)&uStack_80 + uVar24);
                        FUN_1092b4db8(&pppppuStack_298,&uStack_2b0,1);
                        uVar24 = uVar24 + 1;
                      }
                      else {
                        uStack_2b0 = 0x1d;
                        FUN_1092b4db8(&pppppuStack_298,&uStack_2b0,1);
                      }
                    }
                    else {
                      uStack_2b0 = *(undefined1 *)((long)&uStack_80 + uVar24);
                      FUN_1092b4db8(&pppppuStack_298,&uStack_2b0,1);
                    }
                    uVar24 = uVar24 + 1;
                    uVar25 = (ulong)ppuStack_70 >> 0x38;
                  } while (uVar24 < uVar25);
                }
                FUN_10926dc5c(&uStack_2b0,&ppuStack_290,&uStack_81);
                uStack_80 = (undefined **)CONCAT71(uStack_2af,uStack_2b0);
                ppuStack_78 = ppuStack_2a8;
                ppuStack_70 = ppuStack_2a0;
                appuStack_228[0] = &PTR_DAT_11088d708;
                pppppuStack_298 = (undefined *****)&PTR_SUB_11088d6e0;
                ppuStack_290 = &PTR_DAT_11088d7b0;
                if (cStack_239 < '\0') {
                  __ZdlPv(uStack_250);
                }
                ppuStack_290 = ppuVar1;
                __ZNSt3__16localeD1Ev(&uStack_288);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev
                          (&pppppuStack_298,&PTR_PTR_11088d720);
                __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_228);
              }
              ppuVar28 = ppuStack_78;
              ppuVar15 = uStack_80;
              if (-1 < (long)ppuStack_70) {
                ppuVar28 = (undefined **)((ulong)ppuStack_70 >> 0x38);
                ppuVar15 = (undefined **)&uStack_80;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&puStack_2c8,ppuVar15,ppuVar28);
              appuStack_120[0] = &PTR_DAT_11088d708;
              ppuStack_190 = &PTR_SUB_11088d6e0;
              ppuStack_188 = &PTR_DAT_11088d7b0;
              if (cStack_131 < '\0') {
                __ZdlPv(uStack_148);
              }
              ppuStack_188 = (undefined **)
                             (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 +
                             0x10);
              __ZNSt3__16localeD1Ev(&ppuStack_180);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_190,&PTR_PTR_11088d720)
              ;
              pppuVar13 = appuStack_120;
              __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
            }
            else {
              func_0x0001092fd42c();
              if (pppuVar12 != pppuVar13) {
                func_0x0001092fd500();
                if (pppuVar12 != pppuVar13) {
                  puVar18 = (undefined8 *)0x10;
                  ___cxa_allocate_exception();
                  *puVar18 = &PTR_FUN_110aea548;
                  puVar18[1] = 0;
                  ___cxa_throw();
                  goto LAB_1092fc7a8;
                }
                *(int *)(pppuVar9 + 1) = *(int *)(pppuVar9 + 1) + 1;
                pppuVar13 = (undefined ***)(long)(int)(uVar7 << 1);
                __Znam();
                if (0 < (int)uVar7) {
                  lVar16 = (long)pppuVar13 + 1;
                  uVar26 = uVar7 + 1;
                  do {
                    pppuVar14 = pppuVar9;
                    FUN_1092ebba0(pppuVar9,0xd);
                    uVar4 = (int)pppuVar14 % 0xc0 | ((int)pppuVar14 / 0xc0) * 0x100;
                    iVar8 = 0x8140;
                    if (0x1eff < (int)uVar4) {
                      iVar8 = 0xc140;
                    }
                    uVar4 = iVar8 + uVar4;
                    *(ushort *)(lVar16 + -1) =
                         (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
                    lVar16 = lVar16 + 2;
                    uVar26 = uVar26 - 1;
                  } while (1 < uVar26);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&puStack_2c8,pppuVar13,(undefined ***)(long)(int)(uVar7 << 1));
                goto LAB_1092fb944;
              }
              *(int *)(pppuVar9 + 1) = *(int *)(pppuVar9 + 1) + 1;
              if (((*(int *)(pppuVar9[4] + 3) - *(int *)(pppuVar9[4] + 2)) - *(int *)(pppuVar9 + 5))
                  * 8 - *(int *)((long)pppuVar9 + 0x2c) < (int)(uVar7 * 8)) {
                puVar18 = (undefined8 *)0x10;
                ___cxa_allocate_exception();
                *puVar18 = &PTR_FUN_110aea548;
                puVar18[1] = 0;
                ___cxa_throw();
                goto LAB_1092fc7a8;
              }
              FUN_1092ead9c(&pppppuStack_298,pppuVar20);
              puVar10 = *(undefined1 **)(CONCAT17(cStack_281,uStack_288) + 0x10);
              if (0 < (int)uVar7) {
                uVar25 = (ulong)pppuVar20 & 0xffffffff;
                puVar27 = puVar10;
                do {
                  pppuVar13 = pppuVar9;
                  FUN_1092ebba0(pppuVar9,8);
                  *puVar27 = (char)pppuVar13;
                  uVar25 = uVar25 - 1;
                  puVar27 = puVar27 + 1;
                } while (uVar25 != 0);
              }
              uStack_80 = (undefined **)0x0;
              ppuStack_78 = (undefined **)0x0;
              ppuStack_70 = (undefined **)0x0;
              if (pppuStack_310 == (undefined ***)0x0) {
                FUN_1092f022c(&ppuStack_190,puVar10,pppuVar20,param_5);
                ppuStack_78 = ppuStack_188;
                uStack_80 = ppuStack_190;
                ppuStack_70 = ppuStack_180;
              }
              else {
                func_0x000107c2c4dc(&uStack_80,*pppuStack_310[3]);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&puStack_2c8,puVar10,(long)(int)uVar7);
              ppuVar28 = pppuVar11[3];
              if (ppuVar28 < pppuVar11[4]) {
                *(undefined4 *)(ppuVar28 + 1) = 0;
                *ppuVar28 = (undefined *)&PTR_FUN_110ae9d40;
                ppuVar28[2] = (undefined *)0x0;
                func_0x0001092ead38(ppuVar28,CONCAT17(cStack_281,uStack_288));
                ppuVar28 = ppuVar28 + 3;
                pppuVar11[3] = ppuVar28;
              }
              else {
                lVar16 = (long)ppuVar28 - (long)*pppuVar23;
                uVar25 = (lVar16 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar25) {
                  FUN_1092fc828();
                  goto LAB_1092fc7a8;
                }
                lVar21 = (long)pppuVar11[4] - (long)*pppuVar23 >> 3;
                uVar24 = lVar21 * 0x5555555555555556;
                if (uVar24 < uVar25 || uVar24 - uVar25 == 0) {
                  uVar24 = uVar25;
                }
                if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
                  uVar24 = 0xaaaaaaaaaaaaaaa;
                }
                pppuStack_170 = pppuVar23;
                if (uVar24 == 0) {
                  ppuVar15 = (undefined **)0x0;
                }
                else {
                  if (0xaaaaaaaaaaaaaaa < uVar24) {
                    func_0x000104c4f740();
                    goto LAB_1092fc7a8;
                  }
                  ppuVar15 = (undefined **)(uVar24 * 0x18);
                  __Znwm();
                }
                ppuVar28 = (undefined **)((long)ppuVar15 + lVar16);
                ppuVar31 = ppuVar15 + uVar24 * 3;
                *(undefined4 *)(ppuVar28 + 1) = 0;
                *ppuVar28 = (undefined *)&PTR_FUN_110ae9d40;
                ppuVar28[2] = (undefined *)0x0;
                ppuStack_190 = ppuVar15;
                ppuStack_188 = ppuVar28;
                ppuStack_180 = ppuVar28;
                ppuStack_178 = ppuVar31;
                func_0x0001092ead38(ppuVar28,CONCAT17(cStack_281,uStack_288));
                ppuVar15 = pppuVar11[2];
                ppuVar3 = pppuVar11[3];
                ppuVar32 = (undefined **)((long)ppuVar28 - ((long)ppuVar3 - (long)ppuVar15));
                ppuVar28 = ppuVar28 + 3;
                if (ppuVar3 != ppuVar15) {
                  lVar16 = 0;
                  ppuStack_180 = ppuVar28;
                  do {
                    puVar18 = (undefined8 *)((long)ppuVar32 + lVar16);
                    *(undefined4 *)(puVar18 + 1) = 0;
                    *puVar18 = &PTR_FUN_110ae9d40;
                    puVar18[2] = 0;
                    func_0x0001092ead38(puVar18,*(undefined8 *)((long)ppuVar15 + lVar16 + 0x10));
                    lVar16 = lVar16 + 0x18;
                  } while ((undefined **)((long)ppuVar15 + lVar16) != ppuVar3);
                  do {
                    ppuVar28 = ppuVar15 + 3;
                    (**(code **)*ppuVar15)(ppuVar15);
                    ppuVar15 = ppuVar28;
                  } while (ppuVar28 != ppuVar3);
                  ppuVar15 = *pppuVar23;
                  ppuVar28 = ppuStack_180;
                  ppuVar31 = ppuStack_178;
                }
                pppuVar11[2] = ppuVar32;
                pppuVar11[3] = ppuVar28;
                ppuStack_178 = pppuVar11[4];
                pppuVar11[4] = ppuVar31;
                ppuStack_190 = ppuVar15;
                ppuStack_188 = ppuVar15;
                ppuStack_180 = ppuVar15;
                FUN_1092fc83c(&ppuStack_190);
              }
              pppuVar11[3] = ppuVar28;
              pppppuStack_298 = (undefined *****)&PTR_FUN_110ae9d40;
              pppuVar13 = (undefined ***)CONCAT17(cStack_281,uStack_288);
              if ((pppuVar13 != (undefined ***)0x0) &&
                 (iVar8 = *(int *)(pppuVar13 + 1), *(int *)(pppuVar13 + 1) = iVar8 + -1,
                 iVar8 + -1 == 0)) {
                *(undefined4 *)(pppuVar13 + 1) = 0xdeadf001;
                (*(code *)(*pppuVar13)[1])();
              }
            }
            iVar8 = *(int *)(pppuVar9 + 1) + -1;
            *(int *)(pppuVar9 + 1) = iVar8;
          }
          if (iVar8 == 0) {
            *(undefined4 *)(pppuVar9 + 1) = 0xdeadf001;
            pppuVar13 = pppuVar9;
            (*(code *)(*pppuVar9)[1])();
          }
        }
      }
    }
LAB_1092fb440:
    FUN_1092fd284();
    if (pppuVar12 == pppuVar13) {
      lVar16 = 0x60;
      __Znwm();
      uStack_2f0 = 0;
      ppuStack_2f8 = &PTR_FUN_110ae9d40;
      plVar29 = *(long **)(param_2 + 0x10);
      if (plVar29 != (long *)0x0) {
        *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
      }
      plVar17 = (long *)0x28;
      plStack_2e8 = plVar29;
      __Znwm();
      *(undefined4 *)(plVar17 + 1) = 0;
      *plVar17 = (long)&PTR_FUN_110aea9b0;
      if (lStack_2b8 < 0) {
        func_0x000107c3192c(plVar17 + 2,puStack_2c8,lStack_2c0);
        iVar8 = (int)plVar17[1] + 1;
      }
      else {
        plVar17[3] = lStack_2c0;
        plVar17[2] = (long)puStack_2c8;
        plVar17[4] = lStack_2b8;
        iVar8 = 1;
      }
      *(int *)(plVar17 + 1) = iVar8;
      plStack_300 = plVar17;
      if (*(char *)(param_4 + 0x1f) < '\0') {
        func_0x000107c3192c(&ppuStack_190,*(undefined8 *)(param_4 + 8),
                            *(undefined8 *)(param_4 + 0x10));
      }
      else {
        ppuStack_188 = *(undefined ***)(param_4 + 0x10);
        ppuStack_190 = *(undefined ***)(param_4 + 8);
        ppuStack_180 = *(undefined ***)(param_4 + 0x18);
      }
      FUN_1092edbd0(lVar16,&ppuStack_2f8,&plStack_300,&ppuStack_2e0,&ppuStack_190);
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
      *param_1 = lVar16;
      if ((long)ppuStack_180 < 0) {
        __ZdlPv(ppuStack_190);
      }
      iVar8 = (int)plVar17[1] + -1;
      *(int *)(plVar17 + 1) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
        (**(code **)(*plVar17 + 8))(plVar17);
      }
      if ((plVar29 != (long *)0x0) &&
         (iVar8 = (int)plVar29[1] + -1, *(int *)(plVar29 + 1) = iVar8, iVar8 == 0)) {
        *(undefined4 *)(plVar29 + 1) = 0xdeadf001;
        (**(code **)(*plVar29 + 8))(plVar29);
      }
      iVar8 = *(int *)(pppuVar11 + 1);
      *(int *)(pppuVar11 + 1) = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        *(undefined4 *)(pppuVar11 + 1) = 0xdeadf001;
        (*(code *)(*pppuVar11)[1])();
      }
      if (lStack_2b8 < 0) {
        __ZdlPv(puStack_2c8);
      }
      iVar8 = *(int *)(pppuVar9 + 1);
      *(int *)(pppuVar9 + 1) = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        *(undefined4 *)(pppuVar9 + 1) = 0xdeadf001;
        (*(code *)(*pppuVar9)[1])(pppuVar9);
      }
      return;
    }
  } while( true );
}



/* Entry: 1092fc828; end: 1092fc83b;  */

long * FUN_1092fc828(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x18);
    plVar2[2] = (long)(lVar3 + -0x18);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 1092fc83c; end: 1092fc9bf;  */

long * FUN_1092fc83c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x18);
    param_1[2] = (long)(lVar2 + -0x18);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092fc9c0; end: 1092fca37;  */

void FUN_1092fc9c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -3;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1092fca38; end: 1092fcae3;  */

undefined8 * FUN_1092fca38(undefined8 *param_1)

{
  int iVar1;
  long *plStack_28;
  
  FUN_1092f05e8(&plStack_28);
  *param_1 = 0;
  func_0x0001092f0fc4(param_1,plStack_28);
  if ((plStack_28 != (long *)0x0) &&
     (iVar1 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
    (**(code **)(*plStack_28 + 8))();
  }
  return param_1;
}



/* Entry: 1092fcae4; end: 1092fd233;  */

void FUN_1092fcae4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined ***pppuVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  long *plStack_130;
  undefined **appuStack_128 [2];
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined **appuStack_e0 [2];
  long *plStack_d0;
  long *plStack_c8;
  undefined **appuStack_c0 [2];
  long *plStack_b0;
  long *plStack_a0;
  undefined **ppuStack_98;
  undefined4 uStack_90;
  long *plStack_88;
  long **pplStack_80;
  long *plStack_78;
  long *plStack_70;
  
  plVar10 = (long *)*param_3;
  if (plVar10 != (long *)0x0) {
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
  }
  plStack_c8 = plVar10;
  FUN_1092f9d8c(appuStack_c0,&plStack_c8);
  if ((plVar10 != (long *)0x0) &&
     (iVar2 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  pppuVar1 = appuStack_c0;
  FUN_1092fa02c();
  FUN_1092f9e90(&pplStack_80,appuStack_c0);
  plVar10 = pplStack_80[2];
  iVar2 = *(int *)(pplStack_80 + 1);
  *(int *)(pplStack_80 + 1) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    *(undefined4 *)(pplStack_80 + 1) = 0xdeadf001;
    (*(code *)(*pplStack_80)[1])();
  }
  FUN_1092fa19c(appuStack_e0,appuStack_c0);
  uStack_108 = 0;
  ppuStack_110 = &PTR_FUN_110ae9d40;
  if (plStack_d0 != (long *)0x0) {
    *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
  }
  plStack_100 = plStack_d0;
  FUN_1092fa590(&plStack_f8,&ppuStack_110,pppuVar1,plVar10);
  ppuStack_110 = &PTR_FUN_110ae9d40;
  if ((plStack_100 != (long *)0x0) &&
     (iVar2 = (int)plStack_100[1] + -1, *(int *)(plStack_100 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_100 + 1) = 0xdeadf001;
    (**(code **)(*plStack_100 + 8))();
  }
  plStack_100 = (long *)0x0;
  iVar2 = 0;
  if ((long)plStack_f0 - (long)plStack_f8 != 0) {
    lVar3 = (long)plStack_f0 - (long)plStack_f8 >> 3;
    plVar11 = plStack_f8;
    do {
      iVar2 = *(int *)(*plVar11 + 0xc) + iVar2;
      lVar3 = lVar3 + -1;
      plVar11 = plVar11 + 1;
    } while (lVar3 != 0);
  }
  FUN_1092ead9c(appuStack_128,iVar2);
  if (plStack_f0 != plStack_f8) {
    uVar8 = 0;
    lVar3 = 0;
    do {
      plVar11 = (long *)plStack_f8[uVar8];
      if (plVar11 != (long *)0x0) {
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      }
      plVar12 = (long *)plVar11[4];
      if (plVar12 == (long *)0x0) {
        uVar9 = *(uint *)((long)plVar11 + 0xc);
      }
      else {
        uVar9 = *(uint *)((long)plVar11 + 0xc);
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 2;
      }
      uVar13 = plVar12[3] - plVar12[2];
      FUN_1092eb560(&pplStack_80,uVar13);
      if ((int)uVar13 < 1) {
        if (plStack_70 != (long *)0x0) goto LAB_1092fccf4;
      }
      else {
        uVar7 = uVar13 & 0x7fffffff;
        pbVar4 = (byte *)plVar12[2];
        puVar6 = (uint *)plStack_70[2];
        do {
          *puVar6 = (uint)*pbVar4;
          uVar7 = uVar7 - 1;
          pbVar4 = pbVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != 0);
LAB_1092fccf4:
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      }
      uStack_90 = 0;
      ppuStack_98 = &PTR_DAT_110aea6e8;
      plStack_88 = plStack_70;
      FUN_1092f2160(param_2,&ppuStack_98,(int)uVar13 - uVar9);
      ppuStack_98 = &PTR_DAT_110aea6e8;
      if ((plStack_88 != (long *)0x0) &&
         (iVar2 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar2, iVar2 == 0)) {
        *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
        (**(code **)(*plStack_88 + 8))();
      }
      plStack_88 = (long *)0x0;
      if (0 < (int)uVar9) {
        uVar13 = 0;
        do {
          *(char *)(plVar12[2] + uVar13) = (char)*(undefined4 *)(plStack_70[2] + uVar13 * 4);
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
      pplStack_80 = (long **)&PTR_DAT_110aea6e8;
      if ((plStack_70 != (long *)0x0) &&
         (iVar2 = (int)plStack_70[1] + -1, *(int *)(plStack_70 + 1) = iVar2, iVar2 == 0)) {
        *(undefined4 *)(plStack_70 + 1) = 0xdeadf001;
        (**(code **)(*plStack_70 + 8))();
      }
      iVar2 = (int)plVar12[1] + -1;
      *(int *)(plVar12 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
        (**(code **)(*plVar12 + 8))(plVar12);
      }
      if (0 < (int)uVar9) {
        uVar13 = 0;
        lVar5 = (long)(int)lVar3;
        do {
          lVar3 = lVar5 + 1;
          *(undefined1 *)(plStack_118[2] + lVar5) = *(undefined1 *)(plVar12[2] + uVar13);
          uVar13 = uVar13 + 1;
          lVar5 = lVar3;
        } while (uVar9 != uVar13);
      }
      iVar2 = (int)plVar12[1] + -1;
      *(int *)(plVar12 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
        (**(code **)(*plVar12 + 8))(plVar12);
      }
      iVar2 = (int)plVar11[1] + -1;
      *(int *)(plVar11 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)((long)plStack_f0 - (long)plStack_f8 >> 3));
  }
  uStack_138 = 0;
  ppuStack_140 = &PTR_FUN_110ae9d40;
  if (plStack_118 != (long *)0x0) {
    *(int *)(plStack_118 + 1) = (int)plStack_118[1] + 1;
  }
  plStack_130 = plStack_118;
  pplStack_80 = &plStack_78;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  FUN_1092fb18c(param_1,&ppuStack_140,pppuVar1,plVar10,&pplStack_80);
  FUN_1092fd234(&pplStack_80,plStack_78);
  ppuStack_140 = &PTR_FUN_110ae9d40;
  if ((plStack_130 != (long *)0x0) &&
     (iVar2 = (int)plStack_130[1] + -1, *(int *)(plStack_130 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_130 + 1) = 0xdeadf001;
    (**(code **)(*plStack_130 + 8))();
  }
  plStack_130 = (long *)0x0;
  appuStack_128[0] = &PTR_FUN_110ae9d40;
  if ((plStack_118 != (long *)0x0) &&
     (iVar2 = (int)plStack_118[1] + -1, *(int *)(plStack_118 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_118 + 1) = 0xdeadf001;
    (**(code **)(*plStack_118 + 8))();
  }
  pplStack_80 = &plStack_f8;
  FUN_1092fac04(&pplStack_80);
  appuStack_e0[0] = &PTR_FUN_110ae9d40;
  if ((plStack_d0 != (long *)0x0) &&
     (iVar2 = (int)plStack_d0[1] + -1, *(int *)(plStack_d0 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_d0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_d0 + 8))();
  }
  appuStack_c0[0] = &PTR_FUN_110aeabc8;
  if ((plStack_a0 != (long *)0x0) &&
     (iVar2 = (int)plStack_a0[1] + -1, *(int *)(plStack_a0 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_a0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_a0 + 8))();
  }
  if ((plStack_b0 != (long *)0x0) &&
     (iVar2 = (int)plStack_b0[1] + -1, *(int *)(plStack_b0 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_b0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_b0 + 8))();
  }
  return;
}



/* Entry: 1092fd234; end: 1092fd283;  */

void FUN_1092fd234(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1092fd234(param_1,*param_2);
    FUN_1092fd234(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x3f) < '\0') {
      __ZdlPv(param_2[5]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1092fd284; end: 1092fd6a7;  */

undefined8 FUN_1092fd284(void)

{
  int iVar1;
  
  if ((bRam0000000113829d08 & 1) == 0) {
    iVar1 = 0x13829d08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829cf0 = 0;
      uRam0000000113829cf8 = 0;
      puRam0000000113829d00 = &UNK_10f56666c;
      ___cxa_guard_release(0x113829d08);
    }
  }
  return 0x113829cf0;
}



/* Entry: 1092fd6a8; end: 1092fd847;  */

undefined8 FUN_1092fd6a8(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***apppuStack_158 [2];
  char cStack_141;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [263];
  undefined1 uStack_31;
  
  switch(param_1) {
  case 0:
    func_0x0001092fd284();
    uVar2 = 0x113829cf0;
    break;
  case 1:
    func_0x0001092fd2e8();
    uVar2 = 0x113829d10;
    break;
  case 2:
    func_0x0001092fd358();
    uVar2 = 0x113829d30;
    break;
  case 3:
    func_0x0001092fd3c8();
    uVar2 = 0x113829d50;
    break;
  case 4:
    func_0x0001092fd42c();
    uVar2 = 0x113829d70;
    break;
  case 5:
    func_0x0001092fd570();
    uVar2 = 0x113829dd0;
    break;
  default:
    FUN_10926db08(auStack_140);
    FUN_1092b4db8(auStack_140,&UNK_10f5666dc,0x13);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10926dc5c(apppuStack_158,auStack_138,&uStack_31);
    if (-1 < cStack_141) {
      apppuStack_158[0] = apppuStack_158;
    }
    FUN_1092ea600(uVar2,apppuStack_158[0]);
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1092fd80c);
    (*pcVar1)();
  case 7:
    func_0x0001092fd49c();
    uVar2 = 0x113829d90;
    break;
  case 8:
    func_0x0001092fd500();
    uVar2 = 0x113829db0;
    break;
  case 9:
    func_0x0001092fd5d4();
    uVar2 = 0x113829df0;
    break;
  case 0xd:
    func_0x0001092fd638();
    uVar2 = 0x113829e10;
  }
  return uVar2;
}



/* Entry: 1092fd848; end: 1092fd8df;  */

bool FUN_1092fd848(float param_1,float param_2,float param_3,long *param_4)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = param_1;
  (**(code **)(*param_4 + 0x18))();
  fVar2 = ABS(param_2 - fVar2);
  if ((param_1 < fVar2) || ((**(code **)(*param_4 + 0x10))(param_4), param_1 < ABS(param_3 - fVar2))
     ) {
    bVar1 = false;
  }
  else {
    fVar2 = ABS(param_1 - *(float *)((long)param_4 + 0x14));
    if (fVar2 <= 1.0) {
      bVar1 = true;
    }
    else {
      bVar1 = fVar2 <= *(float *)((long)param_4 + 0x14);
    }
  }
  return bVar1;
}



/* Entry: 1092fd8e0; end: 1092fd987;  */

void FUN_1092fd8e0(undefined8 *param_1,float param_2,float param_3,float param_4,long *param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_2;
  (**(code **)(*param_5 + 0x10))();
  param_3 = param_3 + fVar2;
  fVar2 = param_3 * 0.5;
  (**(code **)(*param_5 + 0x18))(param_5);
  fVar3 = *(float *)((long)param_5 + 0x14);
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *(float *)((long)puVar1 + 0xc) = fVar2;
  *(float *)(puVar1 + 2) = (param_2 + param_3) * 0.5;
  *puVar1 = &PTR_FUN_110aeaf00;
  *(float *)((long)puVar1 + 0x14) = (param_4 + fVar3) * 0.5;
  *(undefined4 *)(puVar1 + 1) = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 1092fd988; end: 1092fd98f;  */

void FUN_1092fd988(void)

{
  return;
}



/* Entry: 1092fd990; end: 1092fd9f3;  */

void FUN_1092fd990(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092fd9f4; end: 1092fdecb;  */

long * FUN_1092fd9f4(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,int param_5,
                    undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  ulong uVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  undefined4 uStack_9c;
  long *aplStack_98 [3];
  
  piVar17 = (int *)*param_3;
  iVar16 = *piVar17;
  iVar3 = piVar17[1];
  iVar29 = piVar17[2];
  fVar30 = (float)(param_5 - iVar29) + (float)iVar3 * -0.5;
  iVar5 = *(int *)(*(long *)(param_2 + 0x10) + 0x10);
  uStack_9c = 0;
  puVar12 = &uStack_9c;
  puVar10 = (undefined8 *)0x3;
  uVar14 = param_4;
  FUN_1092cd11c(aplStack_98);
  iVar24 = (int)param_4;
  if (-1 < iVar24) {
    iVar29 = iVar3 + iVar16 + iVar29;
    iVar3 = iVar3 * 2;
    lVar19 = *(long *)(param_2 + 0x10);
    iVar2 = (int)fVar30 >> 5;
    lVar20 = *(long *)(*(long *)(lVar19 + 0x28) + 0x10);
    uVar6 = 1 << (ulong)((int)fVar30 & 0x1f);
    piVar17 = (int *)((long)aplStack_98[0] + 4);
    iVar16 = *piVar17;
    do {
      iVar21 = (int)param_4;
      if ((*(uint *)(lVar20 + (long)(iVar2 + *(int *)(lVar19 + 0x14) * iVar21) * 4) & uVar6) == 0 ||
          iVar3 < iVar16) {
        if (iVar3 < iVar16) {
          fVar28 = NAN;
          goto LAB_1092fdb3c;
        }
        iVar21 = (int)*aplStack_98[0];
        goto LAB_1092fdaf4;
      }
      iVar16 = iVar16 + 1;
      *piVar17 = iVar16;
      param_4 = (ulong)(iVar21 - 1);
    } while (0 < iVar21);
  }
LAB_1092fdb2c:
  fVar28 = NAN;
  goto LAB_1092fdb34;
  while( true ) {
    iVar21 = iVar21 + 1;
    *(int *)aplStack_98[0] = iVar21;
    param_4 = (ulong)(iVar22 - 1);
    if (iVar22 < 1) break;
LAB_1092fdaf4:
    iVar22 = (int)param_4;
    uVar1 = *(uint *)(lVar20 + (long)(iVar2 + *(int *)(lVar19 + 0x14) * iVar22) * 4) & uVar6;
    puVar10 = (undefined8 *)(ulong)uVar1;
    if (uVar1 != 0 || iVar3 < iVar21) break;
  }
  if (iVar3 < iVar21) goto LAB_1092fdb2c;
  iVar24 = iVar24 + 1;
  if (iVar24 < iVar5) {
    do {
      uVar1 = *(uint *)(lVar20 + (long)(iVar2 + *(int *)(lVar19 + 0x14) * iVar24) * 4) & uVar6;
      puVar10 = (undefined8 *)(ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar16) goto LAB_1092fdda4;
      iVar16 = iVar16 + 1;
      *piVar17 = iVar16;
      iVar24 = iVar24 + 1;
    } while (iVar5 != iVar24);
    goto LAB_1092fdb2c;
  }
LAB_1092fdda4:
  puVar10 = (undefined8 *)0x7fc00000;
  fVar28 = NAN;
  if ((iVar24 != iVar5) && (iVar16 <= iVar3)) {
    iVar22 = iVar24;
    if (iVar24 < iVar5) {
      do {
        uVar1 = *(uint *)(lVar20 + (long)(iVar2 + *(int *)(lVar19 + 0x14) * iVar24) * 4);
        puVar10 = (undefined8 *)(ulong)uVar1;
        iVar22 = iVar24;
        if ((uVar1 & uVar6) != 0) break;
        uVar1 = *(uint *)(aplStack_98[0] + 1);
        puVar10 = (undefined8 *)(ulong)uVar1;
        if (iVar3 < (int)uVar1) break;
        puVar10 = (undefined8 *)(ulong)(uVar1 + 1);
        *(uint *)(aplStack_98[0] + 1) = uVar1 + 1;
        iVar24 = iVar24 + 1;
        iVar22 = iVar5;
      } while (iVar5 != iVar24);
    }
    iVar24 = (int)aplStack_98[0][1];
    if (iVar24 <= iVar3) {
      iVar3 = (iVar21 - iVar29) + iVar16 + iVar24;
      iVar5 = -iVar3;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      if (iVar5 * 5 < iVar29 * 2) {
        fVar28 = *(float *)(param_2 + 0x30);
        if (ABS(fVar28 - (float)iVar21) < fVar28 * 0.5) {
          lVar19 = 1;
          do {
            if (lVar19 == -1) goto LAB_1092fde70;
            iVar29 = *piVar17;
            lVar19 = lVar19 + -1;
            piVar17 = piVar17 + 1;
          } while (ABS(fVar28 - (float)iVar29) < fVar28 * 0.5);
          if (1 < (ulong)-lVar19) {
LAB_1092fde70:
            fVar28 = (float)(iVar22 - iVar24) + (float)iVar16 * -0.5;
            goto LAB_1092fdb34;
          }
        }
      }
    }
    goto LAB_1092fdb2c;
  }
LAB_1092fdb34:
  plVar23 = aplStack_98[0];
  if (aplStack_98[0] != (long *)0x0) {
LAB_1092fdb3c:
    __ZdlPv();
    plVar23 = aplStack_98[0];
  }
  uVar15 = (undefined4)param_6;
  uVar11 = SUB84(puVar12,0);
  uVar13 = (undefined4)uVar14;
  if (!NAN(fVar28)) {
    piVar17 = (int *)*param_3;
    fVar27 = (float)(piVar17[1] + *piVar17 + piVar17[2]);
    fVar31 = fVar27 / 3.0;
    uVar18 = (*(long **)(param_2 + 0x18))[1] - **(long **)(param_2 + 0x18);
    if (0 < (int)(uVar18 >> 3)) {
      uVar25 = 0;
      do {
        plVar23 = *(long **)(**(long **)(param_2 + 0x18) + uVar25 * 8);
        if (plVar23 != (long *)0x0) {
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        }
        plVar7 = plVar23;
        fVar27 = fVar31;
        FUN_1092fd848(fVar31,fVar28,fVar30);
        if ((int)plVar7 != 0) {
          plVar7 = plVar23;
          FUN_1092fd8e0(param_1,fVar28,fVar30,fVar31,plVar23);
          if (plVar23 == (long *)0x0) {
            return plVar7;
          }
          iVar24 = (int)plVar23[1] + -1;
          *(int *)(plVar23 + 1) = iVar24;
          if (iVar24 != 0) {
            return plVar7;
          }
          *(undefined4 *)(plVar23 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092fdd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar23 + 8))(plVar23);
          return plVar23;
        }
        if ((plVar23 != (long *)0x0) &&
           (iVar24 = (int)plVar23[1] + -1, *(int *)(plVar23 + 1) = iVar24, iVar24 == 0)) {
          *(undefined4 *)(plVar23 + 1) = 0xdeadf001;
          (**(code **)(*plVar23 + 8))(plVar23);
        }
        uVar15 = (undefined4)param_6;
        uVar11 = SUB84(puVar12,0);
        uVar13 = (undefined4)uVar14;
        uVar25 = uVar25 + 1;
      } while ((uVar18 >> 3 & 0x7fffffff) != uVar25);
    }
    plVar7 = (long *)0x18;
    __Znwm();
    *(float *)((long)plVar7 + 0xc) = fVar30;
    *(float *)(plVar7 + 2) = fVar28;
    *plVar7 = (long)&PTR_FUN_110aeaf00;
    *(float *)((long)plVar7 + 0x14) = fVar31;
    *(undefined4 *)(plVar7 + 1) = 1;
    plVar23 = *(long **)(param_2 + 0x18);
    puVar4 = (undefined8 *)plVar23[1];
    if (puVar4 < (undefined8 *)plVar23[2]) {
      puVar26 = puVar4 + 1;
      *puVar4 = plVar7;
    }
    else {
      lVar19 = *plVar23;
      lVar20 = (long)puVar4 - lVar19;
      uVar14 = (lVar20 >> 3) + 1;
      plVar9 = plVar7;
      if (uVar14 >> 0x3d != 0) {
        FUN_1092fe3c8();
LAB_1092fde90:
        func_0x000104c4f740();
        if ((plVar7 != (long *)0x0) &&
           (iVar24 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar24, iVar24 == 0)) {
          *(int *)(plVar7 + 1) = (int)lVar19;
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        __Unwind_Resume();
        *(undefined4 *)(plVar9 + 1) = 0;
        *plVar9 = (long)&PTR_FUN_110aeaf48;
        plVar9[2] = 0;
        func_0x0001092ee114(plVar9 + 2,*puVar10);
        puVar10 = (undefined8 *)0x18;
        __Znwm();
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        plVar9[3] = (long)puVar10;
        *(undefined4 *)(plVar9 + 4) = uVar11;
        *(undefined4 *)((long)plVar9 + 0x24) = uVar13;
        *(int *)(plVar9 + 5) = param_5;
        *(undefined4 *)((long)plVar9 + 0x2c) = uVar15;
        *(float *)(plVar9 + 6) = fVar27;
        plVar9[7] = 0;
        func_0x0001092ea6dc(plVar9 + 7,*param_7);
        return plVar9;
      }
      uVar25 = plVar23[2] - lVar19;
      uVar18 = (long)uVar25 >> 2;
      if (uVar18 <= uVar14) {
        uVar18 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar25) {
        uVar18 = 0x1fffffffffffffff;
      }
      if (uVar18 >> 0x3d != 0) goto LAB_1092fde90;
      lVar8 = uVar18 << 3;
      __Znwm();
      puVar10 = (undefined8 *)(lVar8 + lVar20);
      puVar26 = puVar10 + 1;
      *puVar10 = plVar7;
      _memcpy(puVar10 + -(lVar20 >> 3),lVar19,lVar20);
      *plVar23 = (long)(puVar10 + -(lVar20 >> 3));
      plVar23[1] = (long)puVar26;
      plVar23[2] = lVar8 + uVar18 * 8;
      if (lVar19 != 0) {
        __ZdlPv(lVar19);
      }
    }
    plVar23[1] = (long)puVar26;
    plVar23 = *(long **)(param_2 + 0x38);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x10))(plVar23,plVar7);
    }
  }
  *param_1 = 0;
  return plVar23;
}



/* Entry: 1092fdecc; end: 1092fdfb3;  */

undefined8 *
FUN_1092fdecc(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = &PTR_FUN_110aeaf48;
  param_2[2] = 0;
  func_0x0001092ee114(param_2 + 2,*param_3);
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_2[3] = puVar1;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_5;
  *(undefined4 *)(param_2 + 5) = param_6;
  *(undefined4 *)((long)param_2 + 0x2c) = param_7;
  *(undefined4 *)(param_2 + 6) = param_1;
  param_2[7] = 0;
  func_0x0001092ea6dc(param_2 + 7,*param_8);
  return param_2;
}



/* Entry: 1092fdfb4; end: 1092fe0bf;  */

undefined8 * FUN_1092fdfb4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110aeaf48;
  plVar3 = (long *)param_1[3];
  lVar2 = *plVar3;
  if (0 < (int)((ulong)(plVar3[1] - lVar2) >> 3)) {
    lVar4 = 0;
    do {
      plVar3 = *(long **)(lVar2 + lVar4 * 8);
      iVar1 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))(plVar3);
        lVar2 = *(long *)param_1[3];
      }
      *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
      plVar3 = (long *)param_1[3];
      lVar2 = *plVar3;
    } while (lVar4 < (int)((ulong)(plVar3[1] - lVar2) >> 3));
  }
  if (lVar2 != 0) {
    plVar3[1] = lVar2;
    __ZdlPv();
  }
  __ZdlPv(plVar3);
  plVar3 = (long *)param_1[7];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1092fe0c0; end: 1092fe0c3;  */

undefined8 * FUN_1092fe0c0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110aeaf48;
  plVar3 = (long *)param_1[3];
  lVar2 = *plVar3;
  if (0 < (int)((ulong)(plVar3[1] - lVar2) >> 3)) {
    lVar4 = 0;
    do {
      plVar3 = *(long **)(lVar2 + lVar4 * 8);
      iVar1 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))(plVar3);
        lVar2 = *(long *)param_1[3];
      }
      *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
      plVar3 = (long *)param_1[3];
      lVar2 = *plVar3;
    } while (lVar4 < (int)((ulong)(plVar3[1] - lVar2) >> 3));
  }
  if (lVar2 != 0) {
    plVar3[1] = lVar2;
    __ZdlPv();
  }
  __ZdlPv(plVar3);
  plVar3 = (long *)param_1[7];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1092fe0c4; end: 1092fe0d7;  */

void FUN_1092fe0c4(void)

{
  FUN_1092fdfb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092fe0d8; end: 1092fe3c7;  */

void FUN_1092fe0d8(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack_7c;
  int *piStack_78;
  int *piStack_70;
  
  iVar3 = *(int *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x24);
  iVar12 = *(int *)(param_2 + 0x28);
  iVar5 = *(int *)(param_2 + 0x2c);
  uStack_7c = 0;
  FUN_1092cd11c(&piStack_78,3,&uStack_7c);
  if (0 < *(int *)(param_2 + 0x2c)) {
    uVar16 = 0;
    uVar2 = iVar12 + iVar3;
    do {
      iVar3 = (int)(uVar16 >> 1);
      uVar7 = uVar16 & 1;
      uVar1 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar1;
      if (uVar7 != 0) {
        iVar3 = -(uVar1 >> 1);
      }
      iVar3 = iVar4 + (iVar5 >> 1) + iVar3;
      piStack_78[0] = 0;
      piStack_78[1] = 0;
      piStack_78[2] = 0;
      uVar15 = *(uint *)(param_2 + 0x20);
      piVar11 = piStack_78;
      if ((int)uVar15 < (int)uVar2) {
        do {
          if ((*(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x28) + 0x10) +
                        (long)(*(int *)(*(long *)(param_2 + 0x10) + 0x14) * iVar3 +
                              ((int)uVar15 >> 5)) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0)
          goto LAB_1092fe1ac;
          uVar15 = uVar15 + 1;
        } while (uVar2 != uVar15);
        fVar18 = 0.0;
      }
      else {
LAB_1092fe1ac:
        fVar18 = 0.0;
        if ((int)uVar15 < (int)uVar2) {
          iVar12 = 0;
          do {
            if ((*(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x28) + 0x10) +
                          (long)(*(int *)(*(long *)(param_2 + 0x10) + 0x14) * iVar3 +
                                ((int)uVar15 >> 5)) * 4) >> (ulong)(uVar15 & 0x1f) & 1) == 0) {
              iVar8 = 2;
              if (iVar12 != 1) {
                iVar8 = iVar12;
              }
LAB_1092fe294:
              iVar12 = iVar8;
              piVar11[iVar12] = piVar11[iVar12] + 1;
            }
            else {
              if (iVar12 == 2) {
                fVar18 = *(float *)(param_2 + 0x30);
                if (ABS(fVar18 - (float)*piVar11) < fVar18 * 0.5) {
                  lVar14 = 1;
                  do {
                    lVar13 = lVar14;
                    if (lVar13 == 3) goto LAB_1092fe258;
                    lVar14 = lVar13 + 1;
                  } while (ABS(fVar18 - (float)piVar11[lVar13]) < fVar18 * 0.5);
                  if (1 < lVar13 - 1U) {
LAB_1092fe258:
                    FUN_1092fd9f4(param_1,param_2,&piStack_78,iVar3,uVar15);
                    piVar11 = piStack_78;
                    if (*param_1 != 0) goto LAB_1092fe348;
                  }
                }
                *piVar11 = piVar11[2];
                piVar11[1] = 1;
                piVar11[2] = 0;
              }
              else {
                if (iVar12 != 1) {
                  iVar8 = iVar12 + 1;
                  goto LAB_1092fe294;
                }
                piVar11[1] = piVar11[1] + 1;
              }
              iVar12 = 1;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar2);
          fVar18 = (float)*piVar11;
        }
      }
      fVar17 = *(float *)(param_2 + 0x30);
      if (ABS(fVar17 - fVar18) < fVar17 * 0.5) {
        lVar14 = 1;
        do {
          piVar11 = piVar11 + 1;
          if (lVar14 == -1) goto LAB_1092fe2fc;
          lVar14 = lVar14 + -1;
        } while (ABS(fVar17 - (float)*piVar11) < fVar17 * 0.5);
        if (1 < (ulong)-lVar14) {
LAB_1092fe2fc:
          FUN_1092fd9f4(param_1,param_2,&piStack_78,iVar3,uVar2);
          if (*param_1 != 0) goto LAB_1092fe348;
        }
      }
    } while ((int)uVar1 < *(int *)(param_2 + 0x2c));
  }
  puVar6 = (undefined8 *)**(long **)(param_2 + 0x18);
  if ((undefined8 *)(*(long **)(param_2 + 0x18))[1] == puVar6) {
    ___cxa_allocate_exception(0x10);
    FUN_1092ea600();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1092fe3a4);
    (*pcVar9)();
  }
  uVar10 = *puVar6;
  *param_1 = 0;
  FUN_1092fd990(param_1,uVar10);
LAB_1092fe348:
  if (piStack_78 != (int *)0x0) {
    piStack_70 = piStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092fe3c8; end: 1092fe3db;  */

void FUN_1092fe3c8(float param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long ***ppplVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long *****ppppplVar17;
  int iVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  long *plStack_248;
  long *plStack_240;
  long alStack_238 [3];
  undefined1 uStack_220;
  long *plStack_218;
  long *plStack_210;
  long ****pppplStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long ***ppplStack_1e8;
  long ****apppplStack_1e0 [2];
  char cStack_1c9;
  long *plStack_1c8;
  undefined1 auStack_1c0 [256];
  long *aplStack_c0 [2];
  
  plVar16 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar10 = *(long **)(param_3 + 8);
  if (plVar10 == (long *)0x0) {
    func_0x0001092ea6dc(plVar16 + 3,0);
  }
  else {
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    func_0x0001092ea6dc(plVar16 + 3,plVar10);
    iVar18 = (int)plVar10[1] + -1;
    *(int *)(plVar10 + 1) = iVar18;
    if (iVar18 == 0) {
      *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  plVar10 = (long *)plVar16[2];
  if (plVar10 != (long *)0x0) {
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
  }
  plStack_218 = *(long **)(param_3 + 8);
  if (plStack_218 != (long *)0x0) {
    *(int *)(plStack_218 + 1) = (int)plStack_218[1] + 1;
  }
  if (plVar10 != (long *)0x0) {
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
  }
  alStack_238[0] = 0;
  alStack_238[1] = 0;
  alStack_238[2] = 0;
  uStack_220 = 0;
  plStack_240 = plVar10;
  if (plStack_218 == (long *)0x0) {
    plStack_218 = (long *)0x0;
  }
  else if ((int)plStack_218[1] == 0) {
    *(undefined4 *)(plStack_218 + 1) = 0xdeadf001;
    (**(code **)(*plStack_218 + 8))();
  }
  if ((plVar10 != (long *)0x0) &&
     (iVar18 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  FUN_109300b50(&plStack_248,&plStack_240,param_3);
  plVar10 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    *(int *)(plStack_248 + 1) = (int)plStack_248[1] + 1;
  }
  plVar11 = (long *)plStack_248[3];
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  plVar12 = (long *)plStack_248[4];
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  plVar13 = (long *)plStack_248[2];
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  FUN_1092ffa78(plVar16,plVar11,plVar12);
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  fVar31 = param_1;
  FUN_1092ffa78(plVar16,plVar11,plVar13);
  if ((plVar13 != (long *)0x0) &&
     (iVar18 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  if ((plVar11 != (long *)0x0) &&
     (iVar18 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if ((plVar12 != (long *)0x0) &&
     (iVar18 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if ((plVar11 != (long *)0x0) &&
     (iVar18 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if ((plVar13 != (long *)0x0) &&
     (iVar18 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  if ((plVar12 != (long *)0x0) &&
     (iVar18 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  fVar31 = (param_1 + fVar31) * 0.5;
  if (plVar11 == (long *)0x0) {
    if (fVar31 < 1.0) goto LAB_1092ff198;
  }
  else {
    iVar18 = (int)plVar11[1] + -1;
    *(int *)(plVar11 + 1) = iVar18;
    if (iVar18 == 0) {
      *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    if (fVar31 < 1.0) {
LAB_1092ff198:
      ___cxa_allocate_exception(0x10);
      FUN_1092ea600();
      ___cxa_throw();
      goto LAB_1092ff238;
    }
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  if (plVar12 == (long *)0x0) {
    iVar18 = iRam0000000000000008 + -1;
  }
  else {
    iVar18 = (int)plVar12[1];
    *(int *)(plVar12 + 1) = iVar18 + 1;
  }
  fVar27 = *(float *)(plVar11 + 2);
  fVar28 = *(float *)(plVar12 + 2);
  fVar20 = *(float *)((long)plVar11 + 0xc) - *(float *)((long)plVar12 + 0xc);
  *(int *)(plVar12 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  iVar18 = (int)plVar11[1];
  *(int *)(plVar11 + 1) = iVar18 + -1;
  if (iVar18 + -1 == 0) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
    iVar18 = (int)plVar11[1] + 1;
  }
  *(int *)(plVar11 + 1) = iVar18;
  if (plVar13 == (long *)0x0) {
    iVar18 = iRam0000000000000008 + -1;
  }
  else {
    iVar18 = (int)plVar13[1];
    *(int *)(plVar13 + 1) = iVar18 + 1;
  }
  fVar21 = *(float *)((long)plVar11 + 0xc) - *(float *)((long)plVar13 + 0xc);
  fVar21 = SQRT((*(float *)(plVar11 + 2) - *(float *)(plVar13 + 2)) *
                (*(float *)(plVar11 + 2) - *(float *)(plVar13 + 2)) + fVar21 * fVar21) / fVar31;
  fVar30 = fVar21 + 0.5;
  *(int *)(plVar13 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  iVar18 = (int)plVar11[1] + -1;
  *(int *)(plVar11 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  iVar18 = (int)fVar30 +
           (int)(SQRT((fVar27 - fVar28) * (fVar27 - fVar28) + fVar20 * fVar20) / fVar31 + 0.5) >> 1;
  uVar1 = iVar18 + 7U & 3;
  if (uVar1 < 2) {
    uVar3 = iVar18 + 8;
    if (uVar1 != 0) {
      uVar3 = iVar18 + 7U;
    }
  }
  else {
    if (uVar1 != 2) {
      FUN_10926db08(&plStack_1c8);
      FUN_1092b4db8(&plStack_1c8,&UNK_10f566721,0xf);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_10926dc5c(apppplStack_1e0,auStack_1c0,aplStack_c0);
      if (-1 < cStack_1c9) {
        apppplStack_1e0[0] = (long ****)apppplStack_1e0;
      }
      FUN_1092ea600(uVar8,apppplStack_1e0[0]);
      ___cxa_throw();
      goto LAB_1092ff238;
    }
    uVar3 = iVar18 + 6;
  }
  iVar18 = (int)plVar13[1] + -1;
  *(int *)(plVar13 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  iVar18 = (int)plVar12[1] + -1;
  *(int *)(plVar12 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  iVar18 = (int)plVar11[1] + -1;
  *(int *)(plVar11 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  uVar6 = (ulong)uVar3;
  FUN_1092f4910();
  if ((*(long **)(uVar6 + 0x10))[1] != **(long **)(uVar6 + 0x10)) {
    iVar18 = *(int *)(uVar6 + 0xc);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    fVar20 = fVar21;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    fVar27 = fVar20;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    fVar28 = fVar27;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    fVar30 = fVar28;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    fVar22 = fVar30;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    fVar23 = fVar22;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    fVar24 = fVar23;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    fVar25 = fVar24;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    fVar26 = fVar25;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    fVar29 = -3.0 / (float)(iVar18 * 4 + 10) + 1.0;
    iVar18 = (int)(fVar23 + (((fVar21 - fVar20) + fVar27) - fVar24) * fVar29);
    iVar14 = (int)(fVar25 + (((fVar28 - fVar30) + fVar22) - fVar26) * fVar29);
    iVar9 = (int)(fVar31 * 4.0);
    uVar1 = iVar18 - iVar9;
    plVar19 = (long *)plVar16[2];
    iVar2 = *(int *)((long)plVar19 + 0xc) + -1;
    iVar18 = iVar9 + iVar18;
    if (iVar2 <= iVar18) {
      iVar18 = iVar2;
    }
    if (fVar31 * 3.0 <= (float)(int)(iVar18 - (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)))) {
      uVar1 = iVar14 - iVar9;
      iVar18 = (int)plVar19[2] + -1;
      iVar9 = iVar9 + iVar14;
      if (iVar18 <= iVar9) {
        iVar9 = iVar18;
      }
      if (fVar31 * 3.0 <= (float)(int)(iVar9 - (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)))) {
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        aplStack_c0[0] = plVar19;
        FUN_1092fdecc(&plStack_1c8,aplStack_c0);
        iVar18 = (int)plVar19[1] + -1;
        *(int *)(plVar19 + 1) = iVar18;
        if (iVar18 == 0) {
          *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
          (**(code **)(*plVar19 + 8))(plVar19);
        }
        FUN_1092fe0d8(apppplStack_1e0,&plStack_1c8);
        FUN_1092fdfb4(&plStack_1c8);
        if (((long *****)apppplStack_1e0[0] != (long *****)0x0) &&
           (*(int *)(apppplStack_1e0[0] + 1) == 0)) {
          *(undefined4 *)(apppplStack_1e0[0] + 1) = 0xdeadf001;
          (*(code *)(*apppplStack_1e0[0])[1])(apppplStack_1e0[0]);
        }
        ppppplVar17 = (long *****)apppplStack_1e0[0];
        if (plVar11 == (long *)0x0) goto LAB_1092fec44;
        goto LAB_1092fec38;
      }
    }
    ___cxa_allocate_exception(0x10);
    FUN_1092ea600();
    ___cxa_throw();
LAB_1092ff238:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1092ff23c);
    (*pcVar5)();
  }
  apppplStack_1e0[0] = (long ****)0x0;
LAB_1092fec38:
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  ppppplVar17 = (long *****)apppplStack_1e0[0];
LAB_1092fec44:
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  if (ppppplVar17 != (long *****)0x0) {
    *(int *)(ppppplVar17 + 1) = *(int *)(ppppplVar17 + 1) + 1;
  }
  pppplStack_208 = (long ****)ppppplVar17;
  plStack_200 = plVar13;
  plStack_1f8 = plVar12;
  plStack_1f0 = plVar11;
  (**(code **)(*plVar16 + 0x10))
            (&ppplStack_1e8,plVar16,&plStack_1f0,&plStack_1f8,&plStack_200,&pppplStack_208,
             (ulong)uVar3);
  if (((long *****)pppplStack_208 != (long *****)0x0) &&
     (iVar18 = *(int *)(pppplStack_208 + 1), *(int *)(pppplStack_208 + 1) = iVar18 + -1,
     iVar18 + -1 == 0)) {
    *(undefined4 *)(pppplStack_208 + 1) = 0xdeadf001;
    (*(code *)(*pppplStack_208)[1])();
  }
  if ((plStack_200 != (long *)0x0) &&
     (iVar18 = (int)plStack_200[1] + -1, *(int *)(plStack_200 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_200 + 1) = 0xdeadf001;
    (**(code **)(*plStack_200 + 8))();
  }
  if ((plStack_1f8 != (long *)0x0) &&
     (iVar18 = (int)plStack_1f8[1] + -1, *(int *)(plStack_1f8 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_1f8 + 1) = 0xdeadf001;
    (**(code **)(*plStack_1f8 + 8))();
  }
  if ((plStack_1f0 != (long *)0x0) &&
     (iVar18 = (int)plStack_1f0[1] + -1, *(int *)(plStack_1f0 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_1f0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_1f0 + 8))();
  }
  ppplVar4 = ppplStack_1e8;
  plVar16 = (long *)plVar16[2];
  if (plVar16 != (long *)0x0) {
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  }
  if ((long ****)ppplStack_1e8 != (long ****)0x0) {
    *(int *)(ppplStack_1e8 + 1) = *(int *)(ppplStack_1e8 + 1) + 1;
  }
  FUN_1092ef1c0();
  if (plVar16 != (long *)0x0) {
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  }
  if ((long ****)ppplVar4 != (long ****)0x0) {
    *(int *)(ppplVar4 + 1) = *(int *)(ppplVar4 + 1) + 1;
  }
  apppplStack_1e0[0] = (long ****)ppplVar4;
  plStack_1c8 = plVar16;
  FUN_1092eedf4(&plStack_210);
  if ((apppplStack_1e0[0] != (long ****)0x0) &&
     (iVar18 = *(int *)(apppplStack_1e0[0] + 1), *(int *)(apppplStack_1e0[0] + 1) = iVar18 + -1,
     iVar18 + -1 == 0)) {
    *(undefined4 *)(apppplStack_1e0[0] + 1) = 0xdeadf001;
    (*(code *)(*apppplStack_1e0[0])[1])();
  }
  if ((plStack_1c8 != (long *)0x0) &&
     (iVar18 = (int)plStack_1c8[1] + -1, *(int *)(plStack_1c8 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_1c8 + 1) = 0xdeadf001;
    (**(code **)(*plStack_1c8 + 8))();
  }
  if (((long ****)ppplVar4 != (long ****)0x0) &&
     (iVar18 = *(int *)(ppplVar4 + 1), *(int *)(ppplVar4 + 1) = iVar18 + -1, iVar18 + -1 == 0)) {
    *(undefined4 *)(ppplVar4 + 1) = 0xdeadf001;
    (*(code *)(*ppplVar4)[1])(ppplVar4);
  }
  if ((plVar16 != (long *)0x0) &&
     (iVar18 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  plVar16 = (long *)0x28;
  __Znwm();
  FUN_1092f39d0();
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  FUN_1092eb3c8(plVar16[2],plVar13);
  FUN_1092eb3c8(plVar16[2] + 8,plVar11);
  FUN_1092eb3c8(plVar16[2] + 0x10,plVar12);
  if (ppppplVar17 != (long *****)0x0) {
    lVar15 = plVar16[2];
    *(int *)(ppppplVar17 + 1) = *(int *)(ppppplVar17 + 1) + 1;
    plVar19 = *(long **)(lVar15 + 0x18);
    if ((plVar19 != (long *)0x0) &&
       (iVar18 = (int)plVar19[1] + -1, *(int *)(plVar19 + 1) = iVar18, iVar18 == 0)) {
      *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
      (**(code **)(*plVar19 + 8))();
    }
    *(long ******)(lVar15 + 0x18) = ppppplVar17;
  }
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  plVar19 = plStack_210;
  if (plStack_210 != (long *)0x0) {
    *(int *)(plStack_210 + 1) = (int)plStack_210[1] + 1;
  }
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = &PTR_DAT_110aea838;
  puVar7[2] = 0;
  func_0x0001092ee114(puVar7 + 2,plStack_210);
  *(undefined4 *)(puVar7 + 4) = 0;
  puVar7[3] = &PTR_DAT_110aea660;
  lVar15 = plVar16[1];
  puVar7[5] = plVar16;
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  *extraout_x8 = puVar7;
  if ((int)lVar15 == 0) {
    *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  if ((plVar19 != (long *)0x0) &&
     (iVar18 = (int)plVar19[1] + -1, *(int *)(plVar19 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  iVar18 = (int)plVar16[1] + -1;
  *(int *)(plVar16 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  if ((plStack_210 != (long *)0x0) &&
     (iVar18 = (int)plStack_210[1] + -1, *(int *)(plStack_210 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_210 + 1) = 0xdeadf001;
    (**(code **)(*plStack_210 + 8))();
  }
  if (((long ****)ppplStack_1e8 != (long ****)0x0) &&
     (iVar18 = *(int *)(ppplStack_1e8 + 1), *(int *)(ppplStack_1e8 + 1) = iVar18 + -1,
     iVar18 + -1 == 0)) {
    *(undefined4 *)(ppplStack_1e8 + 1) = 0xdeadf001;
    (*(code *)(*ppplStack_1e8)[1])();
  }
  if ((ppppplVar17 != (long *****)0x0) &&
     (iVar18 = *(int *)(ppppplVar17 + 1), *(int *)(ppppplVar17 + 1) = iVar18 + -1, iVar18 + -1 == 0)
     ) {
    *(undefined4 *)(ppppplVar17 + 1) = 0xdeadf001;
    (*(code *)(*ppppplVar17)[1])(ppppplVar17);
  }
  if ((plVar13 != (long *)0x0) &&
     (iVar18 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  if ((plVar12 != (long *)0x0) &&
     (iVar18 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if ((plVar11 != (long *)0x0) &&
     (iVar18 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if ((plVar10 != (long *)0x0) &&
     (iVar18 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  if ((plStack_248 != (long *)0x0) &&
     (iVar18 = (int)plStack_248[1] + -1, *(int *)(plStack_248 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_248 + 1) = 0xdeadf001;
    (**(code **)(*plStack_248 + 8))();
  }
  if ((plStack_218 != (long *)0x0) &&
     (iVar18 = (int)plStack_218[1] + -1, *(int *)(plStack_218 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_218 + 1) = 0xdeadf001;
    (**(code **)(*plStack_218 + 8))();
  }
  plStack_1c8 = alStack_238;
  func_0x0001092ffe74(&plStack_1c8);
  if ((plStack_240 != (long *)0x0) &&
     (iVar18 = (int)plStack_240[1] + -1, *(int *)(plStack_240 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_240 + 1) = 0xdeadf001;
    (**(code **)(*plStack_240 + 8))();
  }
  return;
}



/* Entry: 1092fe3dc; end: 1092ff807;  */

void FUN_1092fe3dc(undefined8 *param_1,float param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long ***ppplVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long *****ppppplVar17;
  int iVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  long *plStack_238;
  long *plStack_230;
  long alStack_228 [3];
  undefined1 uStack_210;
  long *plStack_208;
  long *plStack_200;
  long ****pppplStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long ***ppplStack_1d8;
  long ****apppplStack_1d0 [2];
  char cStack_1b9;
  long *plStack_1b8;
  undefined1 auStack_1b0 [256];
  long *aplStack_b0 [2];
  
  plVar11 = *(long **)(param_4 + 8);
  if (plVar11 == (long *)0x0) {
    func_0x0001092ea6dc(param_3 + 3,0);
  }
  else {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    func_0x0001092ea6dc(param_3 + 3,plVar11);
    iVar18 = (int)plVar11[1] + -1;
    *(int *)(plVar11 + 1) = iVar18;
    if (iVar18 == 0) {
      *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  plVar11 = (long *)param_3[2];
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  plStack_208 = *(long **)(param_4 + 8);
  if (plStack_208 != (long *)0x0) {
    *(int *)(plStack_208 + 1) = (int)plStack_208[1] + 1;
  }
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  alStack_228[0] = 0;
  alStack_228[1] = 0;
  alStack_228[2] = 0;
  uStack_210 = 0;
  plStack_230 = plVar11;
  if (plStack_208 == (long *)0x0) {
    plStack_208 = (long *)0x0;
  }
  else if ((int)plStack_208[1] == 0) {
    *(undefined4 *)(plStack_208 + 1) = 0xdeadf001;
    (**(code **)(*plStack_208 + 8))();
  }
  if ((plVar11 != (long *)0x0) &&
     (iVar18 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  FUN_109300b50(&plStack_238,&plStack_230,param_4);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    *(int *)(plStack_238 + 1) = (int)plStack_238[1] + 1;
  }
  plVar12 = (long *)plStack_238[3];
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  plVar13 = (long *)plStack_238[4];
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  plVar14 = (long *)plStack_238[2];
  if (plVar14 != (long *)0x0) {
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  }
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  if (plVar14 != (long *)0x0) {
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  }
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  FUN_1092ffa78(param_3,plVar12,plVar13);
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar14 != (long *)0x0) {
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  }
  fVar31 = param_2;
  FUN_1092ffa78(param_3,plVar12,plVar14);
  if ((plVar14 != (long *)0x0) &&
     (iVar18 = (int)plVar14[1] + -1, *(int *)(plVar14 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  if ((plVar12 != (long *)0x0) &&
     (iVar18 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if ((plVar13 != (long *)0x0) &&
     (iVar18 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  if ((plVar12 != (long *)0x0) &&
     (iVar18 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if ((plVar14 != (long *)0x0) &&
     (iVar18 = (int)plVar14[1] + -1, *(int *)(plVar14 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  if ((plVar13 != (long *)0x0) &&
     (iVar18 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  fVar31 = (param_2 + fVar31) * 0.5;
  if (plVar12 == (long *)0x0) {
    if (fVar31 < 1.0) goto LAB_1092ff198;
  }
  else {
    iVar18 = (int)plVar12[1] + -1;
    *(int *)(plVar12 + 1) = iVar18;
    if (iVar18 == 0) {
      *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
      (**(code **)(*plVar12 + 8))(plVar12);
    }
    if (fVar31 < 1.0) {
LAB_1092ff198:
      ___cxa_allocate_exception(0x10);
      FUN_1092ea600();
      ___cxa_throw();
      goto LAB_1092ff238;
    }
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  if (plVar14 != (long *)0x0) {
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  }
  if (plVar12 != (long *)0x0) {
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  }
  if (plVar13 == (long *)0x0) {
    iVar18 = iRam0000000000000008 + -1;
  }
  else {
    iVar18 = (int)plVar13[1];
    *(int *)(plVar13 + 1) = iVar18 + 1;
  }
  fVar27 = *(float *)(plVar12 + 2);
  fVar28 = *(float *)(plVar13 + 2);
  fVar20 = *(float *)((long)plVar12 + 0xc) - *(float *)((long)plVar13 + 0xc);
  *(int *)(plVar13 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  iVar18 = (int)plVar12[1];
  *(int *)(plVar12 + 1) = iVar18 + -1;
  if (iVar18 + -1 == 0) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
    iVar18 = (int)plVar12[1] + 1;
  }
  *(int *)(plVar12 + 1) = iVar18;
  if (plVar14 == (long *)0x0) {
    iVar18 = iRam0000000000000008 + -1;
  }
  else {
    iVar18 = (int)plVar14[1];
    *(int *)(plVar14 + 1) = iVar18 + 1;
  }
  fVar21 = *(float *)((long)plVar12 + 0xc) - *(float *)((long)plVar14 + 0xc);
  fVar21 = SQRT((*(float *)(plVar12 + 2) - *(float *)(plVar14 + 2)) *
                (*(float *)(plVar12 + 2) - *(float *)(plVar14 + 2)) + fVar21 * fVar21) / fVar31;
  fVar30 = fVar21 + 0.5;
  *(int *)(plVar14 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  iVar18 = (int)plVar12[1] + -1;
  *(int *)(plVar12 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  iVar18 = (int)fVar30 +
           (int)(SQRT((fVar27 - fVar28) * (fVar27 - fVar28) + fVar20 * fVar20) / fVar31 + 0.5) >> 1;
  uVar1 = iVar18 + 7U & 3;
  if (uVar1 < 2) {
    uVar3 = iVar18 + 8;
    if (uVar1 != 0) {
      uVar3 = iVar18 + 7U;
    }
  }
  else {
    if (uVar1 != 2) {
      FUN_10926db08(&plStack_1b8);
      FUN_1092b4db8(&plStack_1b8,&UNK_10f566721,0xf);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      uVar9 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_10926dc5c(apppplStack_1d0,auStack_1b0,aplStack_b0);
      if (-1 < cStack_1b9) {
        apppplStack_1d0[0] = (long ****)apppplStack_1d0;
      }
      FUN_1092ea600(uVar9,apppplStack_1d0[0]);
      ___cxa_throw();
      goto LAB_1092ff238;
    }
    uVar3 = iVar18 + 6;
  }
  iVar18 = (int)plVar14[1] + -1;
  *(int *)(plVar14 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  iVar18 = (int)plVar13[1] + -1;
  *(int *)(plVar13 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  iVar18 = (int)plVar12[1] + -1;
  *(int *)(plVar12 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  uVar6 = (ulong)uVar3;
  FUN_1092f4910();
  if ((*(long **)(uVar6 + 0x10))[1] != **(long **)(uVar6 + 0x10)) {
    iVar18 = *(int *)(uVar6 + 0xc);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    fVar20 = fVar21;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    fVar27 = fVar20;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    fVar28 = fVar27;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    fVar30 = fVar28;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    fVar22 = fVar30;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    fVar23 = fVar22;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    fVar24 = fVar23;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    fVar25 = fVar24;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    fVar26 = fVar25;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    fVar29 = -3.0 / (float)(iVar18 * 4 + 10) + 1.0;
    iVar18 = (int)(fVar23 + (((fVar21 - fVar20) + fVar27) - fVar24) * fVar29);
    iVar15 = (int)(fVar25 + (((fVar28 - fVar30) + fVar22) - fVar26) * fVar29);
    iVar10 = (int)(fVar31 * 4.0);
    uVar1 = iVar18 - iVar10;
    plVar19 = (long *)param_3[2];
    iVar2 = *(int *)((long)plVar19 + 0xc) + -1;
    iVar18 = iVar10 + iVar18;
    if (iVar2 <= iVar18) {
      iVar18 = iVar2;
    }
    if (fVar31 * 3.0 <= (float)(int)(iVar18 - (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)))) {
      uVar1 = iVar15 - iVar10;
      iVar18 = (int)plVar19[2] + -1;
      iVar10 = iVar10 + iVar15;
      if (iVar18 <= iVar10) {
        iVar10 = iVar18;
      }
      if (fVar31 * 3.0 <= (float)(int)(iVar10 - (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)))) {
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        aplStack_b0[0] = plVar19;
        FUN_1092fdecc(&plStack_1b8,aplStack_b0);
        iVar18 = (int)plVar19[1] + -1;
        *(int *)(plVar19 + 1) = iVar18;
        if (iVar18 == 0) {
          *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
          (**(code **)(*plVar19 + 8))(plVar19);
        }
        FUN_1092fe0d8(apppplStack_1d0,&plStack_1b8);
        FUN_1092fdfb4(&plStack_1b8);
        if (((long *****)apppplStack_1d0[0] != (long *****)0x0) &&
           (*(int *)(apppplStack_1d0[0] + 1) == 0)) {
          *(undefined4 *)(apppplStack_1d0[0] + 1) = 0xdeadf001;
          (*(code *)(*apppplStack_1d0[0])[1])(apppplStack_1d0[0]);
        }
        ppppplVar17 = (long *****)apppplStack_1d0[0];
        if (plVar12 == (long *)0x0) goto LAB_1092fec44;
        goto LAB_1092fec38;
      }
    }
    ___cxa_allocate_exception(0x10);
    FUN_1092ea600();
    ___cxa_throw();
LAB_1092ff238:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1092ff23c);
    (*pcVar5)();
  }
  apppplStack_1d0[0] = (long ****)0x0;
LAB_1092fec38:
  *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  ppppplVar17 = (long *****)apppplStack_1d0[0];
LAB_1092fec44:
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  if (plVar14 != (long *)0x0) {
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  }
  if (ppppplVar17 != (long *****)0x0) {
    *(int *)(ppppplVar17 + 1) = *(int *)(ppppplVar17 + 1) + 1;
  }
  pppplStack_1f8 = (long ****)ppppplVar17;
  plStack_1f0 = plVar14;
  plStack_1e8 = plVar13;
  plStack_1e0 = plVar12;
  (**(code **)(*param_3 + 0x10))
            (&ppplStack_1d8,param_3,&plStack_1e0,&plStack_1e8,&plStack_1f0,&pppplStack_1f8,
             (ulong)uVar3);
  if (((long *****)pppplStack_1f8 != (long *****)0x0) &&
     (iVar18 = *(int *)(pppplStack_1f8 + 1), *(int *)(pppplStack_1f8 + 1) = iVar18 + -1,
     iVar18 + -1 == 0)) {
    *(undefined4 *)(pppplStack_1f8 + 1) = 0xdeadf001;
    (*(code *)(*pppplStack_1f8)[1])();
  }
  if ((plStack_1f0 != (long *)0x0) &&
     (iVar18 = (int)plStack_1f0[1] + -1, *(int *)(plStack_1f0 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_1f0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_1f0 + 8))();
  }
  if ((plStack_1e8 != (long *)0x0) &&
     (iVar18 = (int)plStack_1e8[1] + -1, *(int *)(plStack_1e8 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_1e8 + 1) = 0xdeadf001;
    (**(code **)(*plStack_1e8 + 8))();
  }
  if ((plStack_1e0 != (long *)0x0) &&
     (iVar18 = (int)plStack_1e0[1] + -1, *(int *)(plStack_1e0 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_1e0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_1e0 + 8))();
  }
  ppplVar4 = ppplStack_1d8;
  plVar19 = (long *)param_3[2];
  if (plVar19 != (long *)0x0) {
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
  }
  if ((long ****)ppplStack_1d8 != (long ****)0x0) {
    *(int *)(ppplStack_1d8 + 1) = *(int *)(ppplStack_1d8 + 1) + 1;
  }
  FUN_1092ef1c0();
  if (plVar19 != (long *)0x0) {
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
  }
  if ((long ****)ppplVar4 != (long ****)0x0) {
    *(int *)(ppplVar4 + 1) = *(int *)(ppplVar4 + 1) + 1;
  }
  apppplStack_1d0[0] = (long ****)ppplVar4;
  plStack_1b8 = plVar19;
  FUN_1092eedf4(&plStack_200);
  if ((apppplStack_1d0[0] != (long ****)0x0) &&
     (iVar18 = *(int *)(apppplStack_1d0[0] + 1), *(int *)(apppplStack_1d0[0] + 1) = iVar18 + -1,
     iVar18 + -1 == 0)) {
    *(undefined4 *)(apppplStack_1d0[0] + 1) = 0xdeadf001;
    (*(code *)(*apppplStack_1d0[0])[1])();
  }
  if ((plStack_1b8 != (long *)0x0) &&
     (iVar18 = (int)plStack_1b8[1] + -1, *(int *)(plStack_1b8 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_1b8 + 1) = 0xdeadf001;
    (**(code **)(*plStack_1b8 + 8))();
  }
  if (((long ****)ppplVar4 != (long ****)0x0) &&
     (iVar18 = *(int *)(ppplVar4 + 1), *(int *)(ppplVar4 + 1) = iVar18 + -1, iVar18 + -1 == 0)) {
    *(undefined4 *)(ppplVar4 + 1) = 0xdeadf001;
    (*(code *)(*ppplVar4)[1])(ppplVar4);
  }
  if ((plVar19 != (long *)0x0) &&
     (iVar18 = (int)plVar19[1] + -1, *(int *)(plVar19 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  plVar19 = (long *)0x28;
  __Znwm();
  FUN_1092f39d0();
  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
  FUN_1092eb3c8(plVar19[2],plVar14);
  FUN_1092eb3c8(plVar19[2] + 8,plVar12);
  FUN_1092eb3c8(plVar19[2] + 0x10,plVar13);
  if (ppppplVar17 != (long *****)0x0) {
    lVar16 = plVar19[2];
    *(int *)(ppppplVar17 + 1) = *(int *)(ppppplVar17 + 1) + 1;
    plVar7 = *(long **)(lVar16 + 0x18);
    if ((plVar7 != (long *)0x0) &&
       (iVar18 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar18, iVar18 == 0)) {
      *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
      (**(code **)(*plVar7 + 8))();
    }
    *(long ******)(lVar16 + 0x18) = ppppplVar17;
  }
  puVar8 = (undefined8 *)0x30;
  __Znwm();
  plVar7 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    *(int *)(plStack_200 + 1) = (int)plStack_200[1] + 1;
  }
  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = &PTR_DAT_110aea838;
  puVar8[2] = 0;
  func_0x0001092ee114(puVar8 + 2,plStack_200);
  *(undefined4 *)(puVar8 + 4) = 0;
  puVar8[3] = &PTR_DAT_110aea660;
  lVar16 = plVar19[1];
  puVar8[5] = plVar19;
  *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
  *param_1 = puVar8;
  if ((int)lVar16 == 0) {
    *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  if ((plVar7 != (long *)0x0) &&
     (iVar18 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  iVar18 = (int)plVar19[1] + -1;
  *(int *)(plVar19 + 1) = iVar18;
  if (iVar18 == 0) {
    *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  if ((plStack_200 != (long *)0x0) &&
     (iVar18 = (int)plStack_200[1] + -1, *(int *)(plStack_200 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_200 + 1) = 0xdeadf001;
    (**(code **)(*plStack_200 + 8))();
  }
  if (((long ****)ppplStack_1d8 != (long ****)0x0) &&
     (iVar18 = *(int *)(ppplStack_1d8 + 1), *(int *)(ppplStack_1d8 + 1) = iVar18 + -1,
     iVar18 + -1 == 0)) {
    *(undefined4 *)(ppplStack_1d8 + 1) = 0xdeadf001;
    (*(code *)(*ppplStack_1d8)[1])();
  }
  if ((ppppplVar17 != (long *****)0x0) &&
     (iVar18 = *(int *)(ppppplVar17 + 1), *(int *)(ppppplVar17 + 1) = iVar18 + -1, iVar18 + -1 == 0)
     ) {
    *(undefined4 *)(ppppplVar17 + 1) = 0xdeadf001;
    (*(code *)(*ppppplVar17)[1])(ppppplVar17);
  }
  if ((plVar14 != (long *)0x0) &&
     (iVar18 = (int)plVar14[1] + -1, *(int *)(plVar14 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  if ((plVar13 != (long *)0x0) &&
     (iVar18 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  if ((plVar12 != (long *)0x0) &&
     (iVar18 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  if ((plVar11 != (long *)0x0) &&
     (iVar18 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if ((plStack_238 != (long *)0x0) &&
     (iVar18 = (int)plStack_238[1] + -1, *(int *)(plStack_238 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_238 + 1) = 0xdeadf001;
    (**(code **)(*plStack_238 + 8))();
  }
  if ((plStack_208 != (long *)0x0) &&
     (iVar18 = (int)plStack_208[1] + -1, *(int *)(plStack_208 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_208 + 1) = 0xdeadf001;
    (**(code **)(*plStack_208 + 8))();
  }
  plStack_1b8 = alStack_228;
  func_0x0001092ffe74(&plStack_1b8);
  if ((plStack_230 != (long *)0x0) &&
     (iVar18 = (int)plStack_230[1] + -1, *(int *)(plStack_230 + 1) = iVar18, iVar18 == 0)) {
    *(undefined4 *)(plStack_230 + 1) = 0xdeadf001;
    (**(code **)(*plStack_230 + 8))();
  }
  return;
}



/* Entry: 1092ff808; end: 1092ff89f;  */

long * FUN_1092ff808(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plStack_28;
  
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plStack_28 = param_1 + 1;
  func_0x0001092ffe74(&plStack_28);
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092ff8a0; end: 1092ffa77;  */

void FUN_1092ff8a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,long *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_7 + -3.5;
  if ((long *)*param_6 == (long *)0x0) {
    (**(code **)(*(long *)*param_4 + 0x10))();
    (**(code **)(*(long *)*param_3 + 0x10))();
    (**(code **)(*(long *)*param_5 + 0x10))();
    (**(code **)(*(long *)*param_4 + 0x18))();
    (**(code **)(*(long *)*param_3 + 0x18))();
    (**(code **)(*(long *)*param_5 + 0x18))();
    fVar2 = fVar1;
  }
  else {
    (**(code **)(*(long *)*param_6 + 0x10))();
    (**(code **)(*(long *)*param_6 + 0x18))();
    fVar2 = fVar1 + -3.0;
  }
  (**(code **)(*(long *)*param_3 + 0x10))();
  (**(code **)(*(long *)*param_3 + 0x18))();
  (**(code **)(*(long *)*param_4 + 0x10))();
  (**(code **)(*(long *)*param_4 + 0x18))();
  (**(code **)(*(long *)*param_5 + 0x10))();
  (**(code **)(*(long *)*param_5 + 0x18))();
  FUN_1092efca0(param_1,0x40600000,0x40600000,fVar1,0x40600000,fVar2,fVar2,0x40600000,fVar1);
  return;
}



/* Entry: 1092ffa78; end: 1092ffccf;  */

void FUN_1092ffa78(float param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_3 + 0x10))(param_3);
  iVar1 = (int)param_1;
  (**(code **)(*param_3 + 0x18))(param_3);
  iVar2 = (int)param_1;
  (**(code **)(*param_4 + 0x10))(param_4);
  iVar3 = (int)param_1;
  (**(code **)(*param_4 + 0x18))(param_4);
  func_0x0001092ffba4(param_2,iVar1,iVar2,iVar3,(int)param_1);
  (**(code **)(*param_4 + 0x10))(param_4);
  iVar2 = (int)param_1;
  (**(code **)(*param_4 + 0x18))(param_4);
  iVar1 = (int)param_1;
  (**(code **)(*param_3 + 0x10))(param_3);
  iVar3 = (int)param_1;
  (**(code **)(*param_3 + 0x18))(param_3);
  func_0x0001092ffba4(param_2,iVar2,iVar1,iVar3,(int)param_1);
  return;
}



/* Entry: 1092ffcd0; end: 1092ffde7;  */

float FUN_1092ffcd0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar6 = param_5 - param_3;
  uVar15 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar15 = uVar6;
  }
  uVar14 = param_4 - param_2;
  uVar1 = -uVar14;
  if (-1 < (int)uVar14) {
    uVar1 = uVar14;
  }
  uVar4 = param_2;
  uVar5 = param_4;
  uVar9 = uVar1;
  uVar10 = uVar15;
  if (uVar1 < uVar15) {
    uVar4 = param_3;
    param_3 = param_2;
    uVar5 = param_5;
    param_5 = param_4;
    uVar9 = uVar15;
    uVar6 = uVar14;
    uVar10 = uVar1;
  }
  iVar2 = -1;
  if ((int)uVar4 < (int)uVar5) {
    iVar2 = 1;
  }
  iVar3 = -1;
  if ((int)param_3 < (int)param_5) {
    iVar3 = 1;
  }
  iVar7 = (iVar2 + uVar5) - uVar4;
  if (iVar7 != 0) {
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = (int)-uVar9 >> 1;
    uVar14 = param_3;
    do {
      uVar5 = uVar4 + iVar11;
      uVar8 = uVar14;
      if (uVar15 <= uVar1) {
        uVar5 = uVar14;
        uVar8 = uVar4 + iVar11;
      }
      if ((((uint)(iVar12 == 1) ^
           *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x10) +
                    (long)(int)(uVar5 * *(int *)(*(long *)(param_1 + 0x10) + 0x14) +
                               ((int)uVar8 >> 5)) * 4) >> (ulong)(uVar8 & 0x1f)) & 1) == 0) {
        if (iVar12 == 2) {
          uVar15 = (uVar14 - param_3) * (uVar14 - param_3) + iVar11 * iVar11;
          goto LAB_1092ffdd8;
        }
        iVar12 = iVar12 + 1;
      }
      iVar13 = iVar13 + uVar10;
      if (0 < iVar13) {
        if (uVar14 == param_5) break;
        uVar14 = uVar14 + iVar3;
        iVar13 = iVar13 - uVar9;
      }
      iVar11 = iVar11 + iVar2;
    } while (iVar7 != iVar11);
    if (iVar12 == 2) {
      uVar15 = uVar6 * uVar6 + iVar7 * iVar7;
LAB_1092ffdd8:
      return SQRT((float)uVar15);
    }
  }
  return NAN;
}



/* Entry: 1092ffde8; end: 1092ffeb3;  */

void FUN_1092ffde8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aeaf80;
  plVar2 = (long *)param_1[3];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1092ffeb4; end: 1092fff23;  */

void FUN_1092ffeb4(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  while (plVar3 != param_2) {
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1092fff24; end: 1092fffbb;  */

bool FUN_1092fff24(float param_1,float param_2,float param_3,long *param_4)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = param_1;
  (**(code **)(*param_4 + 0x18))();
  fVar2 = ABS(param_2 - fVar2);
  if ((param_1 < fVar2) || ((**(code **)(*param_4 + 0x10))(param_4), param_1 < ABS(param_3 - fVar2))
     ) {
    bVar1 = false;
  }
  else {
    fVar2 = ABS(param_1 - *(float *)((long)param_4 + 0x14));
    if (fVar2 <= 1.0) {
      bVar1 = true;
    }
    else {
      bVar1 = fVar2 <= *(float *)((long)param_4 + 0x14);
    }
  }
  return bVar1;
}



/* Entry: 1092fffbc; end: 109300087;  */

void FUN_1092fffbc(undefined8 *param_1,float param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = param_5[3];
  iVar1 = (int)lVar2 + 1;
  fVar5 = param_2;
  (**(code **)(*param_5 + 0x10))();
  fVar9 = (float)iVar1;
  fVar6 = *(float *)(param_5 + 3);
  fVar7 = (float)(int)fVar6;
  (**(code **)(*param_5 + 0x18))(param_5);
  fVar8 = *(float *)((long)param_5 + 0x14);
  lVar3 = param_5[3];
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  *(float *)((long)puVar4 + 0xc) = (param_3 + fVar5 * (float)(int)lVar2) / fVar9;
  *(float *)(puVar4 + 2) = (param_2 + fVar6 * fVar7) / fVar9;
  *puVar4 = &PTR_FUN_110aeafc0;
  *(float *)((long)puVar4 + 0x14) = (param_4 + fVar8 * (float)(int)lVar3) / fVar9;
  *(int *)(puVar4 + 3) = iVar1;
  *(undefined4 *)(puVar4 + 1) = 1;
  *param_1 = puVar4;
  return;
}



/* Entry: 109300088; end: 10930008f;  */

void FUN_109300088(void)

{
  return;
}



/* Entry: 109300090; end: 1093000f3;  */

void FUN_109300090(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1093000f4; end: 1093001ab;  */

bool FUN_1093000f4(int *param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = 0;
  uVar1 = 0;
  do {
    if (*(int *)((long)param_1 + lVar2) == 0) {
      return false;
    }
    uVar1 = *(int *)((long)param_1 + lVar2) + uVar1;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x14);
  if (6 < (int)uVar1) {
    fVar3 = (float)uVar1 / 7.0;
    fVar4 = fVar3 * 0.5;
    if ((((ABS(fVar3 - (float)*param_1) < fVar4) && (ABS(fVar3 - (float)param_1[1]) < fVar4)) &&
        (ABS(fVar3 * 3.0 - (float)param_1[2]) < fVar4 * 3.0)) &&
       (ABS(fVar3 - (float)param_1[3]) < fVar4)) {
      return ABS(fVar3 - (float)param_1[4]) < fVar4;
    }
  }
  return false;
}



/* Entry: 1093001ac; end: 109300a07;  */

void FUN_1093001ac(long *param_1,long *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  long *unaff_x19;
  int iVar18;
  int iVar19;
  int iVar20;
  long *unaff_x20;
  long *plVar21;
  long lVar22;
  undefined8 *unaff_x22;
  uint unaff_w23;
  int iVar23;
  uint uVar24;
  uint uVar25;
  long *unaff_x24;
  long lVar26;
  bool bVar27;
  long lVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long *plStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined1 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (-1 < (int)param_3) {
    unaff_x24 = (long *)0x0;
    iVar1 = (int)param_2[1];
    iVar19 = (int)param_2[2] + *(int *)((long)param_2 + 0xc);
    unaff_w23 = (uint)((float)(param_4 - iVar19) + (float)iVar1 * -0.5);
    uVar5 = *(int *)((long)param_2 + 4) + (int)*param_2 + iVar1 + iVar19;
    param_2 = (long *)(ulong)uVar5;
    lVar26 = *param_1;
    iVar12 = *(int *)(lVar26 + 0x10);
    iVar20 = *(int *)(lVar26 + 0x14);
    lVar28 = (long)iVar20;
    unaff_x22 = *(undefined8 **)(*(long *)(lVar26 + 0x28) + 0x10);
    uVar2 = 1 << (ulong)(unaff_w23 & 0x1f);
    lVar22 = (long)((ulong)unaff_w23 << 0x20) >> 0x25;
    iVar19 = param_3 + 1;
    puVar15 = (uint *)((long)unaff_x22 +
                      (long)iVar20 * (long)(int)((ulong)param_3 & 0x7fffffff) * 4 +
                      (long)((int)unaff_w23 >> 5) * 4);
    lVar17 = ((ulong)param_3 & 0x7fffffff) + 1;
    do {
      iVar23 = (int)unaff_x24;
      unaff_x19 = param_1;
      if ((*puVar15 & uVar2) == 0) {
        iVar29 = 0;
        uStack_a8 = (long *)CONCAT44(uStack_a8._4_4_,iVar23);
        plVar14 = param_2;
        goto LAB_10930029c;
      }
      unaff_x24 = (long *)(ulong)(iVar23 + 1);
      puVar15 = puVar15 + -lVar28;
      lVar3 = lVar17 + -1;
      bVar27 = 0 < lVar17;
      lVar17 = lVar3;
    } while (lVar3 != 0 && bVar27);
  }
  goto LAB_109300360;
  while( true ) {
    iVar29 = iVar29 + 1;
    puVar15 = puVar15 + -lVar28;
    plVar14 = (long *)(ulong)((int)plVar14 - 1);
    lVar3 = lVar17 + -1;
    bVar27 = lVar17 < 1;
    lVar17 = lVar3;
    if (lVar3 == 0 || bVar27) break;
LAB_10930029c:
    if ((*puVar15 & uVar2) != 0 || iVar1 < iVar29) {
      uStack_b0 = (long *)CONCAT44(iVar29,(undefined4)uStack_b0);
      if (iVar29 <= iVar1) {
        iVar16 = 0;
        goto LAB_1093002dc;
      }
      break;
    }
  }
  goto LAB_109300360;
  while( true ) {
    puVar15 = puVar15 + -lVar28;
    iVar16 = iVar16 + 1;
    lVar3 = lVar17 + -1;
    bVar27 = lVar17 < 1;
    lVar17 = lVar3;
    if (lVar3 == 0 || bVar27) break;
LAB_1093002dc:
    if ((*puVar15 & uVar2) == 0 || iVar1 < iVar16) break;
  }
  uStack_b0 = (long *)CONCAT44(iVar29,iVar16);
  if (iVar16 <= iVar1) {
    if (iVar19 < iVar12) {
      iVar29 = 0;
      puVar15 = (uint *)((long)unaff_x22 + (long)iVar20 * (long)iVar19 * 4 + lVar22 * 4);
      do {
        if ((*puVar15 & uVar2) == 0) {
          iVar19 = iVar19 - iVar29;
          unaff_x24 = (long *)(ulong)(uint)(iVar23 - iVar29);
          uStack_a8 = (long *)CONCAT44(uStack_a8._4_4_,iVar23 - iVar29);
          goto LAB_109300358;
        }
        puVar15 = puVar15 + lVar28;
        iVar29 = iVar29 + -1;
      } while (iVar19 - iVar12 != iVar29);
    }
    else {
LAB_109300358:
      if (iVar19 - iVar12 != 0) {
        iVar23 = 0;
        if (iVar19 < iVar12) {
          puVar15 = (uint *)((long)unaff_x22 + (long)iVar20 * (long)iVar19 * 4 + lVar22 * 4);
          do {
            if ((iVar1 <= iVar23) || ((*puVar15 & uVar2) != 0)) {
              iVar19 = iVar19 + iVar23;
              goto LAB_1093003ec;
            }
            puVar15 = puVar15 + lVar28;
            iVar23 = iVar23 + 1;
          } while ((iVar19 - iVar12) + iVar23 != 0);
        }
        else {
LAB_1093003ec:
          uStack_a8 = (long *)CONCAT44(iVar23,(undefined4)uStack_a8);
          if ((iVar23 < iVar1) && (iVar12 - iVar19 != 0)) {
            plVar21 = (long *)0x0;
            unaff_x20 = plVar21;
            iVar29 = iVar19;
            if (iVar19 <= iVar12) {
              puVar15 = (uint *)((long)unaff_x22 + (long)iVar20 * (long)iVar19 * 4 + lVar22 * 4);
              do {
                iVar18 = (int)plVar21;
                if ((iVar1 <= iVar18) || ((*puVar15 & uVar2) == 0)) {
                  unaff_x20 = plVar21;
                  iVar29 = iVar19 + iVar18;
                  break;
                }
                puVar15 = puVar15 + lVar28;
                plVar21 = (long *)(ulong)(iVar18 + 1U);
                unaff_x20 = (long *)(ulong)(uint)(iVar12 - iVar19);
                iVar29 = iVar12;
              } while ((iVar19 - iVar12) + iVar18 + 1U != 0);
            }
            iVar19 = (int)unaff_x20;
            plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,iVar19);
            if (iVar19 < iVar1) {
              iVar16 = (iVar19 + iVar16 + (int)unaff_x24 + iVar23) - (int)plVar14;
              iVar12 = -iVar16;
              if (-1 < iVar16) {
                iVar12 = iVar16;
              }
              if (iVar12 * 5 < (int)(uVar5 * 2)) {
                uVar7 = 0;
                FUN_1093000f4();
                if (((uVar7 & 1) != 0) && (-1 < (int)unaff_w23)) {
                  iVar12 = 0;
                  fVar30 = (float)(iVar29 - (iVar19 + iVar23)) + (float)(int)unaff_x24 * -0.5;
                  uVar2 = *(uint *)(lVar26 + 0xc);
                  iVar20 = iVar20 * (int)fVar30;
                  plVar14 = (long *)(ulong)(unaff_w23 + 1);
                  do {
                    uVar24 = unaff_w23 + iVar12;
                    unaff_x24 = plVar14;
                    if ((*(uint *)((long)unaff_x22 + (long)(int)(iVar20 + (uVar24 >> 5)) * 4) >>
                         (ulong)(uVar24 & 0x1f) & 1) == 0) {
                      iVar19 = 0;
                      iVar12 = -iVar12;
                      uStack_a8 = (long *)CONCAT44(uStack_a8._4_4_,iVar12);
                      uVar13 = uVar5;
                      goto LAB_109300500;
                    }
                    iVar12 = iVar12 + -1;
                  } while (unaff_w23 + iVar12 != -1);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_109300360;
  while( true ) {
    iVar19 = iVar19 + 1;
    uVar13 = uVar13 - 1;
    bVar27 = (int)uVar24 < 1;
    uVar24 = uVar24 - 1;
    if (bVar27) break;
LAB_109300500:
    if (((*(uint *)((long)unaff_x22 + (long)(int)(iVar20 + (uVar24 >> 5)) * 4) >>
          (ulong)(uVar24 & 0x1f) & 1) != 0) || (iVar1 < iVar19)) {
      uStack_b0 = (long *)CONCAT44(iVar19,(undefined4)uStack_b0);
      if (iVar19 <= iVar1) {
        iVar23 = 0;
        goto LAB_109300540;
      }
      break;
    }
  }
  goto LAB_109300360;
  while( true ) {
    iVar23 = iVar23 + 1;
    bVar27 = (int)uVar24 < 1;
    uVar24 = uVar24 - 1;
    if (bVar27) break;
LAB_109300540:
    if (((*(uint *)((long)unaff_x22 + (long)(int)(iVar20 + (uVar24 >> 5)) * 4) >>
          (ulong)(uVar24 & 0x1f) & 1) == 0) || (iVar1 < iVar23)) break;
  }
  uStack_b0 = (long *)CONCAT44(iVar19,iVar23);
  if (iVar23 <= iVar1) {
    if ((int)(unaff_w23 + 1) < (int)uVar2) {
      do {
        uVar24 = (uint)plVar14;
        if ((*(uint *)((long)unaff_x22 + (long)(int)(iVar20 + (uVar24 >> 5)) * 4) >>
             (ulong)(uVar24 & 0x1f) & 1) == 0) {
          uStack_a8 = (long *)CONCAT44(uStack_a8._4_4_,iVar12);
          goto LAB_1093005a4;
        }
        iVar12 = iVar12 + 1;
        plVar14 = (long *)(ulong)(uVar24 + 1);
        unaff_x24 = plVar14;
      } while (uVar2 != uVar24 + 1);
    }
    else {
LAB_1093005a4:
      unaff_x24 = plVar14;
      if ((uint)plVar14 != uVar2) {
        iVar19 = 0;
        if ((int)(uint)plVar14 < (int)uVar2) {
          do {
            uVar24 = (uint)plVar14;
            if (((*(uint *)((long)unaff_x22 + (long)(iVar20 + ((int)uVar24 >> 5)) * 4) >>
                  (ulong)(uVar24 & 0x1f) & 1) != 0) || (iVar1 <= iVar19)) goto LAB_1093005e0;
            iVar19 = iVar19 + 1;
            plVar14 = (long *)(ulong)(uVar24 + 1);
            unaff_x24 = plVar14;
          } while (uVar2 != uVar24 + 1);
        }
        else {
LAB_1093005e0:
          uStack_a8 = (long *)CONCAT44(iVar19,(undefined4)uStack_a8);
          uVar24 = (uint)plVar14;
          unaff_x24 = plVar14;
          if ((uVar2 != uVar24) && (iVar19 < iVar1)) {
            plVar21 = (long *)0x0;
            unaff_x20 = plVar21;
            if (uVar2 - uVar24 != 0 && (int)uVar24 <= (int)uVar2) {
              do {
                uVar25 = (uint)plVar14;
                unaff_x20 = plVar21;
                unaff_x24 = plVar14;
                if (((*(uint *)((long)unaff_x22 + (long)(iVar20 + ((int)uVar25 >> 5)) * 4) >>
                      (ulong)(uVar25 & 0x1f) & 1) == 0) || (iVar1 <= (int)plVar21)) break;
                plVar21 = (long *)(ulong)((int)plVar21 + 1);
                plVar14 = (long *)(ulong)(uVar25 + 1);
                unaff_x20 = (long *)(ulong)(uVar2 - uVar24);
                unaff_x24 = (long *)(ulong)uVar2;
              } while (uVar2 != uVar25 + 1);
            }
            iVar20 = (int)unaff_x20;
            plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,iVar20);
            if (iVar20 < iVar1) {
              iVar23 = (iVar12 + iVar23 + iVar20 + iVar19) - uVar13;
              iVar1 = -iVar23;
              if (-1 < iVar23) {
                iVar1 = iVar23;
              }
              if (iVar1 * 5 < (int)uVar5) {
                uVar7 = 0;
                FUN_1093000f4();
                if ((uVar7 & 1) != 0) {
                  unaff_w23 = 0xdeadf001;
                  fVar32 = (float)((int)unaff_x24 - (iVar20 + iVar19)) + (float)iVar12 * -0.5;
                  fVar31 = (float)uVar5 / 7.0;
                  unaff_x24 = param_1 + 1;
                  if (param_1[2] - *unaff_x24 != 0) {
                    unaff_x22 = (undefined8 *)0x0;
                    bVar27 = false;
                    lVar22 = param_1[2] - *unaff_x24 >> 3;
                    do {
                      lVar22 = lVar22 + -1;
                      unaff_x20 = *(long **)(*unaff_x24 + (long)unaff_x22);
                      if (unaff_x20 != (long *)0x0) {
                        *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 1;
                      }
                      plVar14 = unaff_x20;
                      FUN_1092fff24(fVar31,fVar30,fVar32);
                      uVar5 = (uint)plVar14;
                      if (uVar5 != 0) {
                        FUN_1092fffbc(&uStack_b0,fVar30,fVar32,fVar31,unaff_x20);
                        param_2 = uStack_b0;
                        FUN_109300090(*unaff_x24 + (long)unaff_x22);
                        if ((uStack_b0 != (long *)0x0) &&
                           (iVar19 = (int)uStack_b0[1] + -1, *(int *)(uStack_b0 + 1) = iVar19,
                           iVar19 == 0)) {
                          *(int *)(uStack_b0 + 1) = -0x21520fff;
                          (**(code **)(*uStack_b0 + 8))();
                        }
                        bVar27 = true;
                      }
                      if ((unaff_x20 != (long *)0x0) &&
                         (iVar19 = (int)unaff_x20[1] + -1, *(int *)(unaff_x20 + 1) = iVar19,
                         iVar19 == 0)) {
                        *(int *)(unaff_x20 + 1) = -0x21520fff;
                        (**(code **)(*unaff_x20 + 8))(unaff_x20);
                      }
                      if (lVar22 == 0) {
                        uVar5 = 1;
                      }
                      unaff_x22 = unaff_x22 + 1;
                    } while ((uVar5 & 1) == 0);
                    if (bVar27) goto LAB_109300954;
                  }
                  unaff_x20 = (long *)0x20;
                  __Znwm();
                  *(float *)((long)unaff_x20 + 0xc) = fVar32;
                  *(float *)(unaff_x20 + 2) = fVar30;
                  *unaff_x20 = (long)&PTR_FUN_110aeafc0;
                  *(float *)((long)unaff_x20 + 0x14) = fVar31;
                  *(int *)(unaff_x20 + 3) = 1;
                  *(int *)(unaff_x20 + 1) = 1;
                  unaff_x22 = (undefined8 *)param_1[2];
                  puVar9 = (undefined8 *)param_1[3];
                  if (puVar9 <= unaff_x22) goto LAB_1093007e0;
                  *unaff_x22 = 0;
                  param_2 = unaff_x20;
                  FUN_109300090(unaff_x22);
                  unaff_x22 = unaff_x22 + 1;
                  param_1[2] = (long)unaff_x22;
                  goto LAB_109300914;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_109300360:
  uVar6 = 0;
  param_1 = unaff_x19;
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail(uVar6);
    puVar9 = extraout_x8;
LAB_1093007e0:
    lVar22 = (long)unaff_x22 - *unaff_x24;
    uVar7 = (lVar22 >> 3) + 1;
    if (uVar7 >> 0x3d != 0) break;
    uVar10 = (long)puVar9 - *unaff_x24;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    plStack_90 = unaff_x24;
    if (uVar11 == 0) {
      param_2 = (long *)0x0;
    }
    else {
      FUN_109301ab8();
    }
    puVar9 = (undefined8 *)(uVar11 + lVar22);
    lVar22 = uVar11 + (long)param_2 * 8;
    *puVar9 = 0;
    param_2 = unaff_x20;
    uStack_b0 = (long *)uVar11;
    uStack_a8 = puVar9;
    plStack_a0 = puVar9;
    lStack_98 = lVar22;
    FUN_109300090(puVar9);
    unaff_x22 = puVar9 + 1;
    plVar14 = (long *)param_1[1];
    plVar21 = (long *)param_1[2];
    ppuStack_d8 = &puStack_c0;
    ppuStack_d0 = &puStack_b8;
    uStack_c8 = 0;
    puVar9 = (undefined8 *)((long)puVar9 + ((long)plVar14 - (long)plVar21));
    puStack_b8 = puVar9;
    plVar8 = plVar14;
    plStack_e0 = unaff_x24;
    puStack_c0 = puVar9;
    plStack_a0 = unaff_x22;
    if ((long)plVar14 - (long)plVar21 == 0) {
      uStack_c8 = 1;
    }
    else {
      do {
        *puStack_b8 = 0;
        unaff_x24 = plVar8 + 1;
        param_2 = (long *)*plVar8;
        FUN_109300090();
        puStack_b8 = puStack_b8 + 1;
        plVar8 = unaff_x24;
      } while (unaff_x24 != plVar21);
      uStack_c8 = 1;
      do {
        plVar8 = (long *)*plVar14;
        if ((plVar8 != (long *)0x0) &&
           (iVar19 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar19, iVar19 == 0)) {
          *(uint *)(plVar8 + 1) = unaff_w23;
          (**(code **)(*plVar8 + 8))();
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar21);
    }
    FUN_109301aec(&plStack_e0);
    uStack_b0 = (long *)param_1[1];
    param_1[1] = (long)puVar9;
    param_1[2] = (long)unaff_x22;
    lStack_98 = param_1[3];
    param_1[3] = lVar22;
    uStack_a8 = uStack_b0;
    plStack_a0 = uStack_b0;
    func_0x000109301b68(&uStack_b0);
LAB_109300914:
    param_1[2] = (long)unaff_x22;
    if ((long *)param_1[5] != (long *)0x0) {
      param_2 = unaff_x20;
      (**(code **)(*(long *)param_1[5] + 0x10))();
    }
    iVar19 = (int)unaff_x20[1] + -1;
    *(int *)(unaff_x20 + 1) = iVar19;
    if (iVar19 == 0) {
      *(uint *)(unaff_x20 + 1) = unaff_w23;
      (**(code **)(*unaff_x20 + 8))(unaff_x20);
    }
LAB_109300954:
    uVar6 = 1;
  }
  FUN_109301aa4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109300964);
  (*pcVar4)();
}



/* Entry: 109300a08; end: 109300b4f;  */

bool FUN_109300a08(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar7 = 0;
    iVar6 = 0;
    uVar5 = lVar2 >> 3;
    fVar8 = 0.0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      if (1 < (int)plVar4[3]) {
        iVar6 = iVar6 + 1;
        fVar8 = fVar8 + *(float *)((long)plVar4 + 0x14);
      }
      iVar1 = (int)plVar4[1] + -1;
      *(int *)(plVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    if (iVar6 < 3) {
      bVar3 = false;
    }
    else {
      uVar7 = 0;
      fVar9 = 0.0;
      do {
        plVar4 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
        if (plVar4 == (long *)0x0) {
          iVar6 = iRam0000000000000008 + -1;
        }
        else {
          iVar6 = (int)plVar4[1];
        }
        fVar10 = *(float *)((long)plVar4 + 0x14);
        *(int *)(plVar4 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
          (**(code **)(*plVar4 + 8))();
        }
        fVar9 = fVar9 + ABS(fVar10 - fVar8 / (float)uVar5);
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      bVar3 = fVar9 <= fVar8 * 0.05;
    }
    return bVar3;
  }
  return false;
}


