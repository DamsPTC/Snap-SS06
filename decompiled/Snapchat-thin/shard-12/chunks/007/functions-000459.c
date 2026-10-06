/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109574760; end: 10957486f;  */

long * FUN_109574760(undefined8 *param_1,int param_2,long param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plStack_108;
  long *plStack_100;
  undefined1 auStack_f8 [8];
  long *plStack_f0;
  long alStack_e8 [3];
  long *plStack_d0;
  undefined **ppuStack_c8;
  long *plStack_c0;
  undefined ***pppuStack_b0;
  long lStack_98;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_58,param_3 + (long)*(int *)(param_4 + (long)param_2 * 4) * 0x50);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  func_0x0001095707b8(param_1,auStack_58);
  plVar5 = alStack_48;
  func_0x000105687250(param_1 + 2,alStack_48);
  if (plStack_30 == alStack_48) {
    lVar7 = 0x20;
LAB_1095747dc:
    (**(code **)(*plStack_30 + lVar7))();
    plVar6 = plStack_30;
  }
  else {
    plVar6 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_1095747dc;
    }
  }
  if (plStack_50 != (long *)0x0) {
    plVar9 = plStack_50 + 1;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      plVar6 = plStack_50;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_109574aa8(plStack_50);
  func_0x000105681f78(auStack_58);
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095472b8(&ppuStack_c8,0,plVar5);
  plVar5 = (long *)0x38;
  __Znwm();
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_1108a6378;
  plVar5[1] = 0;
  plVar9 = plVar5 + 3;
  *plVar9 = 0;
  plVar5[4] = 0;
  lVar7 = 0x30;
  __Znwm();
  FUN_1095472b8();
  plVar5[3] = (long)FUN_109576c8c;
  plVar5[4] = lVar7;
  FUN_10934ffa0(&ppuStack_c8);
  ppuStack_c8 = &PTR_FUN_110afc260;
  plStack_108 = plVar9;
  plStack_100 = plVar5;
  plStack_c0 = plVar9;
  pppuStack_b0 = &ppuStack_c8;
  FUN_109567d5c(auStack_f8,&plStack_108,&ppuStack_c8);
  if (pppuStack_b0 == &ppuStack_c8) {
    lVar7 = 0x20;
LAB_109574940:
    (**(code **)((long)*pppuStack_b0 + lVar7))();
  }
  else if (pppuStack_b0 != (undefined ***)0x0) {
    lVar7 = 0x28;
    goto LAB_109574940;
  }
  plVar5 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    plVar9 = plStack_100 + 1;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  puVar8 = (undefined8 *)(*(long *)(plVar6[1] + 0x78) + (long)(int)*plVar6 * 0x18);
  piVar2 = (int *)puVar8[1];
  for (piVar1 = (int *)*puVar8; piVar1 != piVar2; piVar1 = piVar1 + 2) {
    if (*piVar1 == 0) {
      func_0x000109566260(*(long *)plVar6[1] + (long)piVar1[1] * 0x50 + 0x18,auStack_f8);
    }
  }
  if (plStack_d0 == alStack_e8) {
    lVar7 = 0x20;
LAB_1095749fc:
    (**(code **)(*plStack_d0 + lVar7))();
  }
  else if (plStack_d0 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_1095749fc;
  }
  plVar5 = plStack_d0;
  if (plStack_f0 != (long *)0x0) {
    plVar6 = plStack_f0 + 1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return plVar5;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(piVar1);
  __ZdlPv();
  FUN_10934ffa0(&ppuStack_c8);
  __Unwind_Resume();
  plVar6 = (long *)plVar5[5];
  if (plVar6 == plVar5 + 2) {
    lVar7 = 0x20;
  }
  else {
    if (plVar6 == (long *)0x0) goto SUB_10951ea70;
    lVar7 = 0x28;
  }
  (**(code **)(*plVar6 + lVar7))();
SUB_10951ea70:
  plVar6 = (long *)plVar5[1];
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 1;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar5;
}



/* Entry: 109574870; end: 109574aa7;  */

long * FUN_109574870(int *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long alStack_88 [3];
  long *plStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095472b8(&ppuStack_68,0,param_2);
  plVar6 = (long *)0x38;
  __Znwm();
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_1108a6378;
  plVar6[1] = 0;
  plVar8 = plVar6 + 3;
  *plVar8 = 0;
  plVar6[4] = 0;
  lVar7 = 0x30;
  __Znwm();
  FUN_1095472b8();
  plVar6[3] = (long)FUN_109576c8c;
  plVar6[4] = lVar7;
  FUN_10934ffa0(&ppuStack_68);
  ppuStack_68 = &PTR_FUN_110afc260;
  plStack_a8 = plVar8;
  plStack_a0 = plVar6;
  plStack_60 = plVar8;
  pppuStack_50 = &ppuStack_68;
  FUN_109567d5c(auStack_98,&plStack_a8,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar7 = 0x20;
LAB_109574940:
    (**(code **)((long)*pppuStack_50 + lVar7))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar7 = 0x28;
    goto LAB_109574940;
  }
  plVar6 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar9 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar3 = (int *)puVar9[1];
  for (piVar2 = (int *)*puVar9; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_98);
    }
  }
  if (plStack_70 == alStack_88) {
    lVar7 = 0x20;
LAB_1095749fc:
    (**(code **)(*plStack_70 + lVar7))();
  }
  else if (plStack_70 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_1095749fc;
  }
  plVar6 = plStack_70;
  if (plStack_90 != (long *)0x0) {
    plVar8 = plStack_90 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_90;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(piVar2);
  __ZdlPv();
  FUN_10934ffa0(&ppuStack_68);
  __Unwind_Resume();
  plVar8 = (long *)plVar6[5];
  if (plVar8 == plVar6 + 2) {
    lVar7 = 0x20;
  }
  else {
    if (plVar8 == (long *)0x0) goto SUB_10951ea70;
    lVar7 = 0x28;
  }
  (**(code **)(*plVar8 + lVar7))();
SUB_10951ea70:
  plVar8 = (long *)plVar6[1];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar6;
}



/* Entry: 109574aa8; end: 109574b6b;  */

long FUN_109574aa8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109574b6c; end: 109574bb3;  */

void FUN_109574b6c(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_110afbf98,&UNK_10dfd31c0);
  }
  return;
}



/* Entry: 109574bb4; end: 109574c17;  */

long * FUN_109574bb4(long *param_1)

{
  long *plStack_28;
  
  if ((char)param_1[9] == '\x01') {
    plStack_28 = param_1 + 6;
    FUN_1093702c4(&plStack_28);
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109574c18; end: 109575347;  */

void FUN_109574c18(ulong *param_1,long param_2,float *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  float fVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  float *pfVar20;
  ulong uVar21;
  ulong uVar22;
  float *pfVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  int *piVar27;
  float fVar28;
  int iVar29;
  undefined4 uVar30;
  int *piStack_b8;
  int *piStack_b0;
  undefined8 uStack_a8;
  float *pfStack_a0;
  float *pfStack_98;
  int *piStack_88;
  int *piStack_80;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (*(char *)((long)param_4 + 0x19) == '\x01') {
      lVar25 = *param_4;
      uVar2 = *(undefined4 *)((long)param_4 + 0xc);
      uVar22 = (ulong)(int)param_4[1];
      lVar10 = param_4[2];
      uVar30 = *(undefined4 *)((long)param_4 + 0x14);
      bVar5 = *(byte *)(param_4 + 3);
      FUN_109367d10(&piStack_88,lVar25);
      FUN_10925b8c4(&pfStack_a0,lVar25);
      if (lVar25 != 0) {
        lVar9 = 0;
        uVar13 = (ulong)bVar5 ^ 1;
        do {
          pfVar23 = param_3 + uVar13;
          param_3 = param_3 + uVar22;
          pfVar14 = pfVar23;
          if ((uVar13 != uVar22) && (pfVar23 + 1 != param_3)) {
            fVar28 = *pfVar23;
            pfVar16 = pfVar23;
            lVar19 = uVar22 * 4 + uVar13 * -4 + -4;
            pfVar20 = pfVar23 + 1;
            do {
              pfVar14 = pfVar20;
              fVar7 = *pfVar20;
              if (*pfVar20 <= fVar28) {
                pfVar14 = pfVar16;
                fVar7 = fVar28;
              }
              fVar28 = fVar7;
              lVar19 = lVar19 + -4;
              pfVar16 = pfVar14;
              pfVar20 = pfVar20 + 1;
            } while (lVar19 != 0);
          }
          piStack_88[lVar9] = (int)*pfVar14;
          pfStack_a0[lVar9] =
               (float)((int)((ulong)((long)pfVar14 - (long)pfVar23) >> 2) + (int)uVar13);
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar25);
      }
      piStack_b8 = (int *)0x0;
      piStack_b0 = (int *)0x0;
      uStack_a8 = 0;
      FUN_1095753a0((int)lVar10,uVar30,param_2,lVar25,piStack_88,uVar2,&piStack_b8,param_5);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar22 = (long)piStack_b0 - (long)piStack_b8 >> 2;
      FUN_1095756a0(param_1);
      piVar26 = piStack_b0;
      if (piStack_b8 != piStack_b0) {
        piVar27 = (int *)param_1[1];
        piVar11 = piStack_b8;
        do {
          piVar12 = piStack_88;
          pfVar23 = pfStack_a0;
          iVar3 = *piVar11;
          if (piVar27 < (int *)param_1[2]) {
            fVar28 = pfStack_a0[iVar3];
            iVar29 = piStack_88[iVar3];
            *piVar27 = iVar3;
            piVar27[1] = (int)fVar28;
            piVar27[2] = iVar29;
            piVar27 = piVar27 + 3;
          }
          else {
            uVar21 = *param_1;
            uVar13 = ((long)((long)piVar27 - uVar21) >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar13) {
              FUN_109575750();
LAB_1095752a4:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1095752a8);
              (*pcVar8)();
            }
            lVar10 = (long)((long)param_1[2] - uVar21) >> 2;
            uVar15 = lVar10 * 0x5555555555555556;
            if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
              uVar15 = uVar13;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
              uVar15 = 0x1555555555555555;
            }
            FUN_109575764();
            fVar28 = pfVar23[iVar3];
            iVar29 = piVar12[iVar3];
            piVar27 = (int *)(uVar15 + ((long)piVar27 - uVar21));
            lVar10 = uVar22 * 0xc;
            *piVar27 = iVar3;
            piVar27[1] = (int)fVar28;
            piVar27[2] = iVar29;
            piVar27 = piVar27 + 3;
            uVar22 = uVar21;
            _memcpy();
            *param_1 = uVar15;
            param_1[1] = (ulong)piVar27;
            param_1[2] = uVar15 + lVar10;
            if (uVar21 != 0) {
              __ZdlPv(uVar21);
            }
          }
          param_1[1] = (ulong)piVar27;
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar26);
      }
      if (piStack_b8 != (int *)0x0) {
        piStack_b0 = piStack_b8;
        __ZdlPv(piStack_b8);
      }
    }
    else {
      iVar3 = *(int *)((long)param_4 + 0xc);
      FUN_10925b8c4(&piStack_88,(long)iVar3 << 1);
      FUN_109367d10(&pfStack_a0,*param_4);
      uVar22 = (ulong)*(byte *)(param_4 + 3) ^ 1;
      uVar4 = *(uint *)(param_4 + 1);
      if ((int)uVar22 < (int)uVar4) {
        uVar13 = 0;
        pfVar23 = param_3 + uVar22;
        do {
          lVar10 = *param_4;
          if (lVar10 != 0) {
            pfVar14 = pfVar23;
            pfVar16 = pfStack_a0;
            lVar25 = lVar10;
            do {
              *pfVar16 = *pfVar14;
              pfVar14 = (float *)((long)pfVar14 +
                                 (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2))
              ;
              lVar25 = lVar25 + -1;
              pfVar16 = pfVar16 + 1;
            } while (lVar25 != 0);
          }
          piStack_b8 = (int *)0x0;
          piStack_b0 = (int *)0x0;
          uStack_a8 = 0;
          FUN_1095753a0((int)param_4[2],*(undefined4 *)((long)param_4 + 0x14),param_2,lVar10,
                        pfStack_a0,(long)iVar3,&piStack_b8,param_5);
          piVar26 = piStack_88;
          uVar21 = uVar13;
          if (piStack_b8 != piStack_b0) {
            piVar27 = piStack_88 + (int)uVar13;
            piVar11 = piStack_b8;
            do {
              piVar12 = piVar11 + 1;
              *piVar27 = (int)uVar22 + (int)param_4[1] * *piVar11;
              uVar21 = (ulong)((int)uVar21 + 1);
              piVar27 = piVar27 + 1;
              piVar11 = piVar12;
            } while (piVar12 != piStack_b0);
          }
          uVar24 = (uint)uVar21;
          uVar4 = *(uint *)((long)param_4 + 0xc);
          if ((int)uVar24 <= (int)*(uint *)((long)param_4 + 0xc)) {
            uVar4 = uVar24;
          }
          uVar13 = (ulong)uVar4;
          if (uVar4 != 0) {
            lVar10 = (long)(int)uVar4;
            if (1 < (int)uVar4) {
              uVar15 = lVar10 - 2U >> 1;
              piVar27 = piStack_88 + uVar15;
              lVar25 = uVar15 + 1;
              do {
                func_0x000109576ac8(piVar26,param_3,lVar10,piVar27);
                piVar27 = piVar27 + -1;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
            piVar27 = piVar26 + (int)uVar4;
            if ((-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2) !=
                (-(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2)) {
              piVar11 = piVar27;
              do {
                iVar29 = *piVar11;
                if (param_3[*piVar26] < param_3[iVar29]) {
                  *piVar11 = *piVar26;
                  *piVar26 = iVar29;
                  func_0x000109576ac8(piVar26,param_3,lVar10,piVar26);
                }
                piVar11 = piVar11 + 1;
              } while (piVar11 != piVar26 + (int)uVar24);
            }
            if (1 < (int)uVar4) {
              do {
                iVar29 = *piVar26;
                piVar11 = piVar26;
                uVar21 = 0;
                do {
                  piVar12 = piVar11 + uVar21 + 1;
                  uVar17 = uVar21 << 1 | 1;
                  uVar15 = uVar21 * 2 + 2;
                  if (((long)uVar15 < lVar10) && (param_3[piVar11[uVar21 + 2]] < param_3[*piVar12]))
                  {
                    piVar12 = piVar11 + uVar21 + 2;
                    uVar17 = uVar15;
                  }
                  *piVar11 = *piVar12;
                  piVar11 = piVar12;
                  uVar21 = uVar17;
                } while ((long)uVar17 <= (long)(lVar10 - 2U >> 1));
                piVar27 = piVar27 + -1;
                if (piVar27 == piVar12) {
                  *piVar12 = iVar29;
                }
                else {
                  *piVar12 = *piVar27;
                  *piVar27 = iVar29;
                  lVar25 = (long)piVar12 + (4 - (long)piVar26) >> 2;
                  if (1 < lVar25) {
                    uVar21 = lVar25 - 2U >> 1;
                    lVar25 = (long)piVar26[uVar21];
                    iVar29 = *piVar12;
                    fVar28 = param_3[iVar29];
                    piVar11 = piVar26 + uVar21;
                    if (fVar28 < param_3[lVar25]) {
                      do {
                        piVar18 = piVar11;
                        *piVar12 = (int)lVar25;
                        if (uVar21 == 0) break;
                        uVar21 = uVar21 - 1 >> 1;
                        lVar25 = (long)piVar26[uVar21];
                        piVar12 = piVar18;
                        piVar11 = piVar26 + uVar21;
                      } while (fVar28 < param_3[lVar25]);
                      *piVar18 = iVar29;
                    }
                  }
                }
                bVar1 = 2 < lVar10;
                lVar10 = lVar10 + -1;
              } while (bVar1);
            }
          }
          if (piStack_b8 != (int *)0x0) {
            piStack_b0 = piStack_b8;
            __ZdlPv();
          }
          uVar22 = uVar22 + 1;
          uVar4 = *(uint *)(param_4 + 1);
          pfVar23 = pfVar23 + 1;
        } while ((int)uVar22 < (int)uVar4);
      }
      else {
        uVar13 = 0;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar22 = (ulong)(int)uVar13;
      FUN_1095756a0(param_1);
      if (0 < (int)uVar13) {
        lVar10 = 0;
        piVar26 = (int *)param_1[1];
        do {
          iVar29 = *(int *)((long)piStack_88 + lVar10);
          iVar3 = (int)param_4[1];
          iVar6 = 0;
          if (iVar3 != 0) {
            iVar6 = iVar29 / iVar3;
          }
          iVar3 = iVar29 - iVar6 * iVar3;
          fVar28 = param_3[iVar29];
          if (piVar26 < (int *)param_1[2]) {
            *piVar26 = iVar6;
            piVar26[1] = iVar3;
            piVar26[2] = (int)fVar28;
            piVar26 = piVar26 + 3;
          }
          else {
            uVar15 = *param_1;
            uVar21 = ((long)((long)piVar26 - uVar15) >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar21) {
              FUN_109575750();
              goto LAB_1095752a4;
            }
            lVar25 = (long)((long)param_1[2] - uVar15) >> 2;
            uVar17 = lVar25 * 0x5555555555555556;
            if (uVar17 < uVar21 || uVar17 - uVar21 == 0) {
              uVar17 = uVar21;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar25 * -0x5555555555555555)) {
              uVar17 = 0x1555555555555555;
            }
            FUN_109575764();
            piVar26 = (int *)(uVar17 + ((long)piVar26 - uVar15));
            lVar25 = uVar22 * 0xc;
            *piVar26 = iVar6;
            piVar26[1] = iVar3;
            piVar26[2] = (int)fVar28;
            piVar26 = piVar26 + 3;
            uVar22 = uVar15;
            _memcpy();
            *param_1 = uVar17;
            param_1[1] = (ulong)piVar26;
            param_1[2] = uVar17 + lVar25;
            if (uVar15 != 0) {
              __ZdlPv(uVar15);
            }
          }
          param_1[1] = (ulong)piVar26;
          lVar10 = lVar10 + 4;
        } while (uVar13 << 2 != lVar10);
      }
    }
    if (pfStack_a0 != (float *)0x0) {
      pfStack_98 = pfStack_a0;
      __ZdlPv();
    }
    if (piStack_88 != (int *)0x0) {
      piStack_80 = piStack_88;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 109575348; end: 10957539f;  */

float FUN_109575348(ulong *param_1,ulong *param_2)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar6 = *param_2;
  uVar9 = param_2[1];
  fVar3 = (float)(uVar4 >> 0x20);
  uVar9 = uVar9 ^ (uVar9 ^ uVar4) &
                  ~CONCAT44(-(uint)((float)(uVar9 >> 0x20) < fVar3),
                            -(uint)((float)uVar9 < (float)uVar4));
  fVar1 = (float)(uVar2 >> 0x20);
  uVar6 = uVar6 ^ (uVar6 ^ uVar2) &
                  ~CONCAT44(-(uint)(fVar1 < (float)(uVar6 >> 0x20)),
                            -(uint)((float)uVar2 < (float)uVar6));
  fVar5 = (float)uVar9 - (float)uVar6;
  fVar7 = (float)(uVar9 >> 0x20) - (float)(uVar6 >> 0x20);
  iVar8 = -(uint)(fVar5 < 0.0);
  iVar10 = -(uint)(fVar7 < 0.0);
  fVar5 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                          CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                   CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                            SUB41(fVar5,0) & ~(byte)iVar8)));
  fVar1 = ((float)uVar4 - (float)uVar2) * (fVar3 - fVar1);
  fVar5 = fVar5 * (float)(CONCAT17((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                   CONCAT16((byte)((uint)fVar7 >> 0x10) &
                                            ~(byte)((uint)iVar10 >> 0x10),
                                            CONCAT15((byte)((uint)fVar7 >> 8) &
                                                     ~(byte)((uint)iVar10 >> 8),
                                                     CONCAT14(SUB41(fVar7,0) & ~(byte)iVar10,fVar5))
                                           )) >> 0x20);
  fVar3 = (fVar1 + fVar1) - fVar5;
  fVar1 = fVar5 / fVar3;
  if (fVar3 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



/* Entry: 1095753a0; end: 10957569f;  */

void FUN_1095753a0(float param_1,float param_2,long param_3,float *param_4,long param_5,int param_6,
                  long *param_7,undefined8 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  float fStack_74;
  
  param_7[1] = *param_7;
  if (param_4 == (float *)0x0) {
    pfVar9 = (float *)0x0;
    pfVar12 = (float *)0x0;
  }
  else {
    pfVar12 = (float *)0x0;
    pfVar10 = (float *)0x0;
    pfVar15 = (float *)0x0;
    pfVar5 = param_4;
    pfVar8 = (float *)0x0;
    do {
      fVar16 = *(float *)(param_5 + (long)pfVar15 * 4);
      pfVar9 = pfVar8;
      if (param_1 <= fVar16) {
        if (pfVar12 < pfVar10) {
          *pfVar12 = fVar16;
          pfVar12[1] = SUB84(pfVar15,0);
          *(undefined1 *)(pfVar12 + 2) = 1;
          pfVar12 = pfVar12 + 3;
        }
        else {
          uVar6 = ((long)pfVar12 - (long)pfVar8 >> 2) * -0x5555555555555555 + 1;
          if (0x1555555555555555 < uVar6) {
            FUN_1095757a8();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109575678);
            (*pcVar4)();
          }
          lVar14 = (long)pfVar10 - (long)pfVar8 >> 2;
          uVar7 = lVar14 * 0x5555555555555556;
          if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
            uVar7 = uVar6;
          }
          if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
            uVar7 = 0x1555555555555555;
          }
          FUN_1095757bc();
          lVar14 = (long)pfVar12 - (long)pfVar8;
          puVar1 = (undefined4 *)(uVar7 + ((long)pfVar12 - (long)pfVar8));
          pfVar10 = (float *)(uVar7 + (long)pfVar5 * 0xc);
          *puVar1 = *(undefined4 *)(param_5 + (long)pfVar15 * 4);
          puVar1[1] = SUB84(pfVar15,0);
          *(undefined1 *)(puVar1 + 2) = 1;
          pfVar12 = (float *)(puVar1 + 3);
          uVar6 = SUB168(SEXT816(lVar14) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          pfVar9 = (float *)(puVar1 + ((uVar6 >> 1) - ((long)uVar6 >> 0x3f)) * 3);
          pfVar5 = pfVar8;
          _memcpy(pfVar9);
          if (pfVar8 != (float *)0x0) {
            __ZdlPv(pfVar8);
          }
        }
      }
      pfVar15 = (float *)((long)pfVar15 + 1);
      pfVar8 = pfVar9;
    } while (param_4 != pfVar15);
  }
  lVar14 = 0;
  if (pfVar12 != pfVar9) {
    lVar14 = LZCOUNT(((long)pfVar12 - (long)pfVar9 >> 2) * -0x5555555555555555) * -2 + 0x7e;
  }
  FUN_109575800(pfVar9,pfVar12,lVar14,1);
  iVar2 = (int)((ulong)((long)pfVar12 - (long)pfVar9) >> 2) * -0x55555555;
  if (iVar2 < 1) {
LAB_109575640:
    if (pfVar9 == (float *)0x0) {
      return;
    }
  }
  else {
    lVar14 = 0;
    pfVar12 = pfVar9 + 5;
    iVar11 = iVar2;
    iVar3 = iVar2;
    do {
      iVar3 = iVar3 + -1;
      if (param_6 <= (int)((ulong)(param_7[1] - *param_7) >> 2)) goto LAB_109575640;
      if (((uint)pfVar9[lVar14 * 3 + 2] & 1) != 0) {
        fStack_74 = pfVar9[lVar14 * 3 + 1];
        FUN_10923b3a0(param_7,&fStack_74);
        *(undefined1 *)(pfVar9 + lVar14 * 3 + 2) = 0;
        iVar11 = iVar11 + -1;
        pfVar15 = pfVar12;
        iVar13 = iVar3;
        if ((int)lVar14 + 1 < iVar2) {
          do {
            if (*(char *)pfVar15 == '\x01') {
              pfVar5 = (float *)(param_3 + (long)(int)fStack_74 * 0x10);
              puVar1 = (undefined4 *)(param_3 + (long)(int)pfVar15[-1] * 0x10);
              fVar16 = *pfVar5;
              (*(code *)*param_8)(fVar16,pfVar5[1],pfVar5[2],pfVar5[3],*puVar1,puVar1[1],puVar1[2],
                                  puVar1[3],param_8);
              if (param_2 < fVar16) {
                *(char *)pfVar15 = '\0';
                iVar11 = iVar11 + -1;
              }
            }
            pfVar15 = pfVar15 + 3;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      lVar14 = lVar14 + 1;
      pfVar12 = pfVar12 + 3;
    } while (0 < iVar11);
  }
  __ZdlPv(pfVar9);
  return;
}



/* Entry: 1095756a0; end: 10957574f;  */

void FUN_1095756a0(long *param_1,float *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  float *pfVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float *pfStack_108;
  
  lVar15 = *param_1;
  if ((float *)((param_1[2] - lVar15 >> 2) * -0x5555555555555555) < param_2) {
    if ((float *)0x1555555555555555 < param_2) {
      FUN_109575750();
      puVar7 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (puVar7 < (undefined *)0x1555555555555556) {
        __Znwm((long)puVar7 * 0xc);
        return;
      }
      func_0x000104c4f740();
      pfVar8 = (float *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (pfVar8 < (float *)0x1555555555555556) {
        __Znwm((long)pfVar8 * 0xc);
        return;
      }
      func_0x000104c4f740();
      pfStack_108 = param_2;
LAB_10957583c:
      pfVar12 = pfStack_108 + -3;
      pfVar9 = pfVar8;
LAB_109575854:
      while( true ) {
        pfVar8 = pfVar9;
        uVar27 = (long)pfStack_108 - (long)pfVar8;
        uVar25 = ((long)uVar27 >> 2) * -0x5555555555555555;
        if (uVar25 - 2 == 0 || (long)uVar25 < 2) {
          if (uVar25 < 2) {
            return;
          }
          if (uVar25 == 2) {
            FUN_109576a70(pfVar12,pfVar8);
            if (((uint)pfVar12 & 0xff) != 1) {
              return;
            }
            fVar28 = *pfVar8;
            *pfVar8 = pfStack_108[-3];
            pfStack_108[-3] = fVar28;
            fVar28 = pfVar8[1];
            pfVar8[1] = pfStack_108[-2];
            pfStack_108[-2] = fVar28;
            uVar4 = *(undefined1 *)(pfVar8 + 2);
            *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfStack_108 + -1);
            *(undefined1 *)(pfStack_108 + -1) = uVar4;
            return;
          }
        }
        else {
          if (uVar25 == 3) {
            pfVar9 = pfVar8 + 3;
            pfVar10 = pfVar9;
            FUN_109576a70(pfVar9,pfVar8);
            pfVar11 = pfVar12;
            FUN_109576a70(pfVar12,pfVar9);
            uVar14 = (uint)pfVar11 & 0xff;
            if (((uint)pfVar10 & 0xff) == 1) {
              pfVar10 = pfVar8 + 2;
              fVar28 = *pfVar8;
              if (uVar14 == 1) {
                *pfVar8 = *pfVar12;
                *pfVar12 = fVar28;
                fVar28 = pfVar8[1];
                pfVar8[1] = pfStack_108[-2];
                pfStack_108[-2] = fVar28;
              }
              else {
                *pfVar8 = *pfVar9;
                *pfVar9 = fVar28;
                fVar29 = pfVar8[1];
                pfVar8[1] = pfVar8[4];
                pfVar8[4] = fVar29;
                pfVar10 = pfVar8 + 5;
                uVar4 = *(undefined1 *)(pfVar8 + 2);
                *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)pfVar10;
                *(undefined1 *)pfVar10 = uVar4;
                pfVar11 = pfVar12;
                FUN_109576a70(pfVar12,pfVar9);
                if (((uint)pfVar11 & 0xff) != 1) {
                  return;
                }
                *pfVar9 = *pfVar12;
                *pfVar12 = fVar28;
                pfVar8[4] = pfStack_108[-2];
                pfStack_108[-2] = fVar29;
              }
              pfVar12 = pfStack_108 + -1;
            }
            else {
              if (uVar14 != 1) {
                return;
              }
              fVar28 = *pfVar9;
              *pfVar9 = *pfVar12;
              *pfVar12 = fVar28;
              fVar28 = pfVar8[4];
              pfVar8[4] = pfStack_108[-2];
              pfStack_108[-2] = fVar28;
              pfVar12 = pfVar8 + 5;
              uVar4 = *(undefined1 *)pfVar12;
              *(undefined1 *)pfVar12 = *(undefined1 *)(pfStack_108 + -1);
              *(undefined1 *)(pfStack_108 + -1) = uVar4;
              pfVar10 = pfVar9;
              FUN_109576a70(pfVar9,pfVar8);
              if (((uint)pfVar10 & 0xff) != 1) {
                return;
              }
              fVar28 = *pfVar8;
              *pfVar8 = *pfVar9;
              *pfVar9 = fVar28;
              fVar28 = pfVar8[1];
              pfVar8[1] = pfVar8[4];
              pfVar8[4] = fVar28;
              pfVar10 = pfVar8 + 2;
            }
            uVar4 = *(undefined1 *)pfVar10;
            *(undefined1 *)pfVar10 = *(undefined1 *)pfVar12;
            *(undefined1 *)pfVar12 = uVar4;
            return;
          }
          if (uVar25 == 4) {
            pfVar9 = pfVar8 + 3;
            pfVar10 = pfVar8 + 6;
            FUN_109576458();
            pfVar11 = pfVar12;
            FUN_109576a70(pfVar12,pfVar10);
            if (((uint)pfVar11 & 0xff) == 1) {
              fVar28 = *pfVar10;
              *pfVar10 = *pfVar12;
              *pfVar12 = fVar28;
              fVar28 = pfVar8[7];
              pfVar8[7] = pfStack_108[-2];
              pfStack_108[-2] = fVar28;
              uVar4 = *(undefined1 *)(pfVar8 + 8);
              *(undefined1 *)(pfVar8 + 8) = *(undefined1 *)(pfStack_108 + -1);
              *(undefined1 *)(pfStack_108 + -1) = uVar4;
              pfVar12 = pfVar10;
              FUN_109576a70(pfVar10,pfVar9);
              if (((uint)pfVar12 & 0xff) == 1) {
                fVar28 = *pfVar9;
                *pfVar9 = *pfVar10;
                *pfVar10 = fVar28;
                fVar28 = pfVar8[4];
                pfVar8[4] = pfVar8[7];
                pfVar8[7] = fVar28;
                uVar4 = *(undefined1 *)(pfVar8 + 5);
                *(undefined1 *)(pfVar8 + 5) = *(undefined1 *)(pfVar8 + 8);
                *(undefined1 *)(pfVar8 + 8) = uVar4;
                pfVar12 = pfVar9;
                FUN_109576a70(pfVar9,pfVar8);
                if (((uint)pfVar12 & 0xff) == 1) {
                  fVar28 = *pfVar8;
                  *pfVar8 = *pfVar9;
                  *pfVar9 = fVar28;
                  fVar28 = pfVar8[1];
                  pfVar8[1] = pfVar8[4];
                  pfVar8[4] = fVar28;
                  uVar4 = *(undefined1 *)(pfVar8 + 2);
                  *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar8 + 5);
                  *(undefined1 *)(pfVar8 + 5) = uVar4;
                }
              }
            }
            return;
          }
          if (uVar25 == 5) {
            pfVar9 = pfVar8 + 3;
            pfVar10 = pfVar8 + 6;
            pfVar11 = pfVar8 + 9;
            FUN_1095765dc();
            pfVar13 = pfVar12;
            FUN_109576a70(pfVar12,pfVar11);
            if (((uint)pfVar13 & 0xff) == 1) {
              fVar28 = *pfVar11;
              *pfVar11 = *pfVar12;
              *pfVar12 = fVar28;
              fVar28 = pfVar8[10];
              pfVar8[10] = pfStack_108[-2];
              pfStack_108[-2] = fVar28;
              uVar4 = *(undefined1 *)(pfVar8 + 0xb);
              *(undefined1 *)(pfVar8 + 0xb) = *(undefined1 *)(pfStack_108 + -1);
              *(undefined1 *)(pfStack_108 + -1) = uVar4;
              pfVar12 = pfVar11;
              FUN_109576a70(pfVar11,pfVar10);
              if (((uint)pfVar12 & 0xff) == 1) {
                fVar28 = *pfVar10;
                *pfVar10 = *pfVar11;
                *pfVar11 = fVar28;
                fVar28 = pfVar8[7];
                pfVar8[7] = pfVar8[10];
                pfVar8[10] = fVar28;
                uVar4 = *(undefined1 *)(pfVar8 + 8);
                *(undefined1 *)(pfVar8 + 8) = *(undefined1 *)(pfVar8 + 0xb);
                *(undefined1 *)(pfVar8 + 0xb) = uVar4;
                pfVar12 = pfVar10;
                FUN_109576a70(pfVar10,pfVar9);
                if (((uint)pfVar12 & 0xff) == 1) {
                  fVar28 = *pfVar9;
                  *pfVar9 = *pfVar10;
                  *pfVar10 = fVar28;
                  fVar28 = pfVar8[4];
                  pfVar8[4] = pfVar8[7];
                  pfVar8[7] = fVar28;
                  uVar4 = *(undefined1 *)(pfVar8 + 5);
                  *(undefined1 *)(pfVar8 + 5) = *(undefined1 *)(pfVar8 + 8);
                  *(undefined1 *)(pfVar8 + 8) = uVar4;
                  pfVar12 = pfVar9;
                  FUN_109576a70(pfVar9,pfVar8);
                  if (((uint)pfVar12 & 0xff) == 1) {
                    fVar28 = *pfVar8;
                    *pfVar8 = *pfVar9;
                    *pfVar9 = fVar28;
                    fVar28 = pfVar8[1];
                    pfVar8[1] = pfVar8[4];
                    pfVar8[4] = fVar28;
                    uVar4 = *(undefined1 *)(pfVar8 + 2);
                    *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar8 + 5);
                    *(undefined1 *)(pfVar8 + 5) = uVar4;
                  }
                }
              }
            }
            return;
          }
        }
        if ((long)uVar27 < 0x120) {
          pfVar9 = pfVar8 + 3;
          if ((param_4 & 1) == 0) {
            if (pfVar8 == pfStack_108 || pfVar9 == pfStack_108) {
              return;
            }
            pfVar12 = pfVar8 + 5;
            do {
              pfVar10 = pfVar9;
              pfVar9 = pfVar10;
              FUN_109576a70(pfVar10,pfVar8);
              if (((uint)pfVar9 & 0xff) == 1) {
                fVar29 = *pfVar10;
                fVar28 = pfVar10[1];
                bVar5 = *(byte *)(pfVar10 + 2);
                fVar30 = *pfVar8;
                pfVar8 = pfVar12;
                do {
                  pfVar9 = pfVar8;
                  pfVar9[-2] = fVar30;
                  pfVar9[-1] = pfVar9[-4];
                  pfVar8 = pfVar9 + -3;
                  *(byte *)pfVar9 = *(byte *)pfVar8;
                  fVar30 = pfVar9[-8];
                  uVar14 = 0;
                  if (fVar29 != fVar30) {
                    uVar14 = 0xffffff81;
                  }
                  if (fVar30 < fVar29) {
                    uVar14 = 1;
                  }
                  if (fVar29 < fVar30) {
                    uVar14 = 0xffffffff;
                  }
                  if (uVar14 == 0) {
                    uVar14 = 1;
                    if ((int)fVar28 < (int)pfVar9[-7]) {
                      uVar14 = 0xffffffff;
                    }
                    if ((fVar28 == pfVar9[-7]) &&
                       (uVar14 = (uint)(*(byte *)(pfVar9 + -6) < bVar5),
                       bVar5 < *(byte *)(pfVar9 + -6))) {
                      uVar14 = 0xffffffff;
                    }
                  }
                } while ((uVar14 & 0xff) == 1);
                pfVar9[-5] = fVar29;
                pfVar9[-4] = fVar28;
                *(byte *)pfVar8 = bVar5;
              }
              pfVar12 = pfVar12 + 3;
              pfVar9 = pfVar10 + 3;
              pfVar8 = pfVar10;
            } while (pfVar10 + 3 != pfStack_108);
            return;
          }
          if (pfVar8 == pfStack_108 || pfVar9 == pfStack_108) {
            return;
          }
          lVar15 = 0;
          pfVar12 = pfVar8;
          goto LAB_109575f5c;
        }
        if (param_3 == 0) {
          if (pfVar8 == pfStack_108) {
            return;
          }
          uVar24 = uVar25 - 2 >> 1;
          uVar16 = uVar24;
          goto LAB_10957603c;
        }
        pfVar9 = pfVar8 + (uVar25 >> 1) * 3;
        if (uVar27 < 0x601) {
          FUN_109576458(pfVar9,pfVar8,pfVar12);
        }
        else {
          FUN_109576458(pfVar8,pfVar9,pfVar12);
          FUN_109576458(pfVar8 + 3,pfVar9 + -3,pfStack_108 + -6);
          FUN_109576458(pfVar8 + 6,pfVar9 + 3,pfStack_108 + -9);
          FUN_109576458(pfVar9 + -3,pfVar9,pfVar9 + 3);
          fVar28 = *pfVar8;
          *pfVar8 = *pfVar9;
          *pfVar9 = fVar28;
          fVar28 = pfVar8[1];
          pfVar8[1] = pfVar9[1];
          pfVar9[1] = fVar28;
          uVar4 = *(undefined1 *)(pfVar8 + 2);
          *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar9 + 2);
          *(undefined1 *)(pfVar9 + 2) = uVar4;
        }
        param_3 = param_3 + -1;
        uVar14 = 0xffffff81;
        uVar21 = 0xffffffff;
        if ((param_4 & 1) != 0) break;
        pfVar9 = pfVar8 + -3;
        FUN_109576a70(pfVar9,pfVar8);
        if (((uint)pfVar9 & 0xff) == 1) break;
        fVar29 = *pfVar8;
        fVar28 = pfVar8[1];
        bVar5 = *(byte *)(pfVar8 + 2);
        fVar30 = *pfVar12;
        uVar18 = 0;
        if (fVar29 != fVar30) {
          uVar18 = uVar14;
        }
        if (fVar30 < fVar29) {
          uVar18 = 1;
        }
        if (fVar29 < fVar30) {
          uVar18 = 0xffffffff;
        }
        if (uVar18 == 0) {
          uVar18 = 1;
          if ((int)fVar28 < (int)pfStack_108[-2]) {
            uVar18 = uVar21;
          }
          if ((fVar28 == pfStack_108[-2]) &&
             (uVar18 = (uint)(*(byte *)(pfStack_108 + -1) < bVar5),
             bVar5 < *(byte *)(pfStack_108 + -1))) {
            uVar18 = 0xffffffff;
          }
        }
        pfVar10 = pfVar8;
        if ((uVar18 & 0xff) == 1) {
          do {
            pfVar9 = pfVar10 + 3;
            fVar30 = *pfVar9;
            uVar18 = 0;
            if (fVar29 != fVar30) {
              uVar18 = uVar14;
            }
            if (fVar30 < fVar29) {
              uVar18 = 1;
            }
            if (fVar29 < fVar30) {
              uVar18 = 0xffffffff;
            }
            if (uVar18 == 0) {
              uVar18 = 1;
              if ((int)fVar28 < (int)pfVar10[4]) {
                uVar18 = uVar21;
              }
              if ((fVar28 == pfVar10[4]) &&
                 (uVar18 = (uint)(*(byte *)(pfVar10 + 5) < bVar5), bVar5 < *(byte *)(pfVar10 + 5)))
              {
                uVar18 = 0xffffffff;
              }
            }
            pfVar10 = pfVar9;
          } while ((uVar18 & 0xff) != 1);
        }
        else {
          do {
            pfVar9 = pfVar10 + 3;
            if (pfStack_108 <= pfVar9) break;
            fVar30 = *pfVar9;
            uVar18 = 0;
            if (fVar29 != fVar30) {
              uVar18 = uVar14;
            }
            if (fVar30 < fVar29) {
              uVar18 = 1;
            }
            if (fVar29 < fVar30) {
              uVar18 = 0xffffffff;
            }
            if (uVar18 == 0) {
              uVar18 = 1;
              if ((int)fVar28 < (int)pfVar10[4]) {
                uVar18 = uVar21;
              }
              if ((fVar28 == pfVar10[4]) &&
                 (uVar18 = (uint)(*(byte *)(pfVar10 + 5) < bVar5), bVar5 < *(byte *)(pfVar10 + 5)))
              {
                uVar18 = 0xffffffff;
              }
            }
            pfVar10 = pfVar9;
          } while ((uVar18 & 0xff) != 1);
        }
        pfVar10 = pfStack_108;
        pfVar11 = pfStack_108;
        if (pfVar9 < pfStack_108) {
          do {
            pfVar10 = pfVar11 + -3;
            fVar30 = *pfVar10;
            uVar18 = 0;
            if (fVar29 != fVar30) {
              uVar18 = uVar14;
            }
            if (fVar30 < fVar29) {
              uVar18 = 1;
            }
            if (fVar29 < fVar30) {
              uVar18 = 0xffffffff;
            }
            if (uVar18 == 0) {
              uVar18 = 1;
              if ((int)fVar28 < (int)pfVar11[-2]) {
                uVar18 = uVar21;
              }
              if ((fVar28 == pfVar11[-2]) &&
                 (uVar18 = (uint)(*(byte *)(pfVar11 + -1) < bVar5), bVar5 < *(byte *)(pfVar11 + -1))
                 ) {
                uVar18 = 0xffffffff;
              }
            }
            pfVar11 = pfVar10;
          } while ((uVar18 & 0xff) == 1);
        }
        if (pfVar9 < pfVar10) {
          fVar30 = *pfVar9;
          fVar31 = *pfVar10;
          do {
            *pfVar9 = fVar31;
            *pfVar10 = fVar30;
            fVar30 = pfVar9[1];
            pfVar9[1] = pfVar10[1];
            pfVar10[1] = fVar30;
            uVar4 = *(undefined1 *)(pfVar9 + 2);
            *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + 2);
            *(undefined1 *)(pfVar10 + 2) = uVar4;
            pfVar11 = pfVar9;
            do {
              pfVar9 = pfVar11 + 3;
              fVar30 = *pfVar9;
              uVar18 = 0;
              if (fVar29 != fVar30) {
                uVar18 = uVar14;
              }
              if (fVar30 < fVar29) {
                uVar18 = 1;
              }
              if (fVar29 < fVar30) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 == 0) {
                uVar18 = 1;
                if ((int)fVar28 < (int)pfVar11[4]) {
                  uVar18 = uVar21;
                }
                if ((fVar28 == pfVar11[4]) &&
                   (uVar18 = (uint)(*(byte *)(pfVar11 + 5) < bVar5), bVar5 < *(byte *)(pfVar11 + 5))
                   ) {
                  uVar18 = 0xffffffff;
                }
              }
              pfVar13 = pfVar10;
              pfVar11 = pfVar9;
            } while ((uVar18 & 0xff) != 1);
            do {
              pfVar10 = pfVar13 + -3;
              fVar31 = *pfVar10;
              uVar18 = 0;
              if (fVar29 != fVar31) {
                uVar18 = uVar14;
              }
              if (fVar31 < fVar29) {
                uVar18 = 1;
              }
              if (fVar29 < fVar31) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 == 0) {
                uVar18 = 1;
                if ((int)fVar28 < (int)pfVar13[-2]) {
                  uVar18 = uVar21;
                }
                if ((fVar28 == pfVar13[-2]) &&
                   (uVar18 = (uint)(*(byte *)(pfVar13 + -1) < bVar5),
                   bVar5 < *(byte *)(pfVar13 + -1))) {
                  uVar18 = 0xffffffff;
                }
              }
              pfVar13 = pfVar10;
            } while ((uVar18 & 0xff) == 1);
          } while (pfVar9 < pfVar10);
        }
        if (pfVar9 + -3 != pfVar8) {
          *pfVar8 = pfVar9[-3];
          pfVar8[1] = pfVar9[-2];
          *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar9 + -1);
        }
        param_4 = 0;
        pfVar9[-3] = fVar29;
        pfVar9[-2] = fVar28;
        *(byte *)(pfVar9 + -1) = bVar5;
      }
      lVar15 = 0;
      fVar29 = *pfVar8;
      fVar28 = pfVar8[1];
      bVar5 = *(byte *)(pfVar8 + 2);
      do {
        fVar30 = *(float *)((long)pfVar8 + lVar15 + 0xc);
        uVar23 = 0xffffff81;
        uVar18 = 0;
        if (fVar30 != fVar29) {
          uVar18 = uVar23;
        }
        if (fVar29 < fVar30) {
          uVar18 = 1;
        }
        if (fVar30 < fVar29) {
          uVar18 = 0xffffffff;
        }
        if (uVar18 == 0) {
          fVar31 = *(float *)((long)pfVar8 + lVar15 + 0x10);
          uVar18 = 1;
          if ((int)fVar31 < (int)fVar28) {
            uVar18 = 0xffffffff;
          }
          if ((fVar31 == fVar28) &&
             (bVar6 = *(byte *)((long)pfVar8 + lVar15 + 0x14), uVar18 = (uint)(bVar5 < bVar6),
             bVar6 < bVar5)) {
            uVar18 = 0xffffffff;
          }
        }
        lVar15 = lVar15 + 0xc;
      } while ((uVar18 & 0xff) == 1);
      pfVar10 = (float *)((long)pfVar8 + lVar15);
      pfVar9 = pfStack_108;
      if (lVar15 == 0xc) {
        do {
          pfVar11 = pfVar9;
          if (pfVar9 <= pfVar10) break;
          pfVar11 = pfVar9 + -3;
          fVar31 = *pfVar11;
          uVar18 = 0;
          if (fVar31 != fVar29) {
            uVar18 = uVar23;
          }
          if (fVar29 < fVar31) {
            uVar18 = 1;
          }
          if (fVar31 < fVar29) {
            uVar18 = 0xffffffff;
          }
          if (uVar18 == 0) {
            uVar18 = 1;
            if ((int)pfVar9[-2] < (int)fVar28) {
              uVar18 = uVar21;
            }
            if ((pfVar9[-2] == fVar28) &&
               (uVar18 = (uint)(bVar5 < *(byte *)(pfVar9 + -1)), *(byte *)(pfVar9 + -1) < bVar5)) {
              uVar18 = 0xffffffff;
            }
          }
          pfVar9 = pfVar11;
        } while ((uVar18 & 0xff) != 1);
      }
      else {
        do {
          pfVar11 = pfVar9 + -3;
          fVar31 = *pfVar11;
          uVar18 = 0;
          if (fVar31 != fVar29) {
            uVar18 = uVar23;
          }
          if (fVar29 < fVar31) {
            uVar18 = 1;
          }
          if (fVar31 < fVar29) {
            uVar18 = 0xffffffff;
          }
          if (uVar18 == 0) {
            uVar18 = 1;
            if ((int)pfVar9[-2] < (int)fVar28) {
              uVar18 = uVar21;
            }
            if ((pfVar9[-2] == fVar28) &&
               (uVar18 = (uint)(bVar5 < *(byte *)(pfVar9 + -1)), *(byte *)(pfVar9 + -1) < bVar5)) {
              uVar18 = 0xffffffff;
            }
          }
          pfVar9 = pfVar11;
        } while ((uVar18 & 0xff) != 1);
      }
      pfVar9 = pfVar10;
      if (pfVar10 < pfVar11) {
        fVar31 = *pfVar11;
        pfVar13 = pfVar11;
        do {
          *pfVar9 = fVar31;
          *pfVar13 = fVar30;
          fVar30 = pfVar9[1];
          pfVar9[1] = pfVar13[1];
          pfVar13[1] = fVar30;
          uVar4 = *(undefined1 *)(pfVar9 + 2);
          *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar13 + 2);
          *(undefined1 *)(pfVar13 + 2) = uVar4;
          pfVar26 = pfVar9;
          do {
            pfVar9 = pfVar26 + 3;
            fVar30 = *pfVar9;
            uVar21 = 0;
            if (fVar30 != fVar29) {
              uVar21 = uVar23;
            }
            if (fVar29 < fVar30) {
              uVar21 = 1;
            }
            if (fVar30 < fVar29) {
              uVar21 = 0xffffffff;
            }
            if (uVar21 == 0) {
              uVar21 = 1;
              if ((int)pfVar26[4] < (int)fVar28) {
                uVar21 = 0xffffffff;
              }
              if ((pfVar26[4] == fVar28) &&
                 (uVar21 = (uint)(bVar5 < *(byte *)(pfVar26 + 5)), *(byte *)(pfVar26 + 5) < bVar5))
              {
                uVar21 = 0xffffffff;
              }
            }
            pfVar20 = pfVar13;
            pfVar26 = pfVar9;
          } while ((uVar21 & 0xff) == 1);
          do {
            pfVar13 = pfVar20 + -3;
            fVar31 = *pfVar13;
            uVar21 = 0;
            if (fVar31 != fVar29) {
              uVar21 = uVar14;
            }
            if (fVar29 < fVar31) {
              uVar21 = 1;
            }
            if (fVar31 < fVar29) {
              uVar21 = 0xffffffff;
            }
            if (uVar21 == 0) {
              uVar21 = 1;
              if ((int)pfVar20[-2] < (int)fVar28) {
                uVar21 = 0xffffffff;
              }
              if ((pfVar20[-2] == fVar28) &&
                 (uVar21 = (uint)(bVar5 < *(byte *)(pfVar20 + -1)), *(byte *)(pfVar20 + -1) < bVar5)
                 ) {
                uVar21 = 0xffffffff;
              }
            }
            pfVar20 = pfVar13;
          } while ((uVar21 & 0xff) != 1);
        } while (pfVar9 < pfVar13);
      }
      pfVar13 = pfVar9 + -3;
      if (pfVar13 != pfVar8) {
        *pfVar8 = pfVar9[-3];
        pfVar8[1] = pfVar9[-2];
        *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar9 + -1);
      }
      pfVar9[-3] = fVar29;
      pfVar9[-2] = fVar28;
      *(byte *)(pfVar9 + -1) = bVar5;
      if (pfVar11 <= pfVar10) {
        pfVar10 = pfVar8;
        FUN_109576848(pfVar8,pfVar13);
        pfVar11 = pfVar9;
        FUN_109576848(pfVar9,pfStack_108);
        if ((int)pfVar11 != 0) goto LAB_109575e3c;
        if (((ulong)pfVar10 & 1) != 0) goto LAB_109575854;
      }
      FUN_109575800(pfVar8,pfVar13,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_109575854;
    }
    lVar17 = param_1[1];
    pfVar8 = param_2;
    FUN_109575764();
    puVar7 = (undefined *)((long)param_2 + (lVar17 - lVar15));
    lVar17 = (long)puVar7 - (param_1[1] - *param_1);
    _memcpy(lVar17);
    lVar15 = *param_1;
    *param_1 = lVar17;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)(param_2 + (long)pfVar8 * 3);
    if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
LAB_109575f5c:
  pfVar10 = pfVar9;
  pfVar9 = pfVar10;
  FUN_109576a70(pfVar10,pfVar12);
  if (((uint)pfVar9 & 0xff) == 1) {
    fVar29 = *pfVar10;
    fVar28 = pfVar10[1];
    bVar5 = *(byte *)(pfVar10 + 2);
    fVar30 = *pfVar12;
    lVar17 = lVar15;
    do {
      lVar19 = lVar17;
      *(float *)((long)pfVar8 + lVar19 + 0xc) = fVar30;
      *(undefined4 *)((long)pfVar8 + lVar19 + 0x10) = *(undefined4 *)((long)pfVar8 + lVar19 + 4);
      *(undefined *)((long)pfVar8 + lVar19 + 0x14) = *(undefined *)((long)pfVar8 + lVar19 + 8);
      pfVar9 = pfVar8;
      if (lVar19 == 0) goto LAB_109576008;
      fVar30 = *(float *)((long)pfVar8 + lVar19 + -0xc);
      uVar14 = 0;
      if (fVar29 != fVar30) {
        uVar14 = 0xffffff81;
      }
      if (fVar30 < fVar29) {
        uVar14 = 1;
      }
      if (fVar29 < fVar30) {
        uVar14 = 0xffffffff;
      }
      if (uVar14 == 0) {
        fVar31 = *(float *)((long)pfVar8 + lVar19 + -8);
        uVar14 = 1;
        if ((int)fVar28 < (int)fVar31) {
          uVar14 = 0xffffffff;
        }
        if ((fVar28 == fVar31) &&
           (bVar6 = *(byte *)((long)pfVar8 + lVar19 + -4), uVar14 = (uint)(bVar6 < bVar5),
           bVar5 < bVar6)) {
          uVar14 = 0xffffffff;
        }
      }
      lVar17 = lVar19 + -0xc;
    } while ((uVar14 & 0xff) == 1);
    pfVar9 = (float *)((long)pfVar8 + lVar19);
LAB_109576008:
    *pfVar9 = fVar29;
    pfVar9[1] = fVar28;
    *(byte *)(pfVar9 + 2) = bVar5;
  }
  lVar15 = lVar15 + 0xc;
  pfVar9 = pfVar10 + 3;
  pfVar12 = pfVar10;
  if (pfVar10 + 3 == pfStack_108) {
    return;
  }
  goto LAB_109575f5c;
LAB_10957603c:
  do {
    if ((long)uVar16 <= (long)uVar24) {
      uVar2 = uVar16 << 1 | 1;
      pfVar12 = pfVar8 + uVar2 * 3;
      uVar1 = uVar16 * 2 + 2;
      uVar22 = uVar2;
      pfVar9 = pfVar12;
      if ((long)uVar1 < (long)uVar25) {
        pfVar10 = pfVar12;
        FUN_109576a70(pfVar12,pfVar12 + 3);
        uVar22 = uVar1;
        pfVar9 = pfVar12 + 3;
        if (((uint)pfVar10 & 0xff) != 1) {
          uVar22 = uVar2;
          pfVar9 = pfVar12;
        }
      }
      pfVar10 = pfVar8 + uVar16 * 3;
      pfVar12 = pfVar9;
      FUN_109576a70(pfVar9,pfVar10);
      if (((uint)pfVar12 & 0xff) != 1) {
        fVar30 = *pfVar10;
        fVar28 = pfVar10[1];
        bVar5 = *(byte *)(pfVar10 + 2);
        fVar29 = *pfVar9;
        do {
          pfVar12 = pfVar9;
          *pfVar10 = fVar29;
          pfVar10[1] = pfVar12[1];
          *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar12 + 2);
          if ((long)uVar24 < (long)uVar22) break;
          uVar2 = uVar22 << 1 | 1;
          pfVar10 = pfVar8 + uVar2 * 3;
          uVar1 = uVar22 * 2 + 2;
          uVar22 = uVar2;
          pfVar9 = pfVar10;
          if ((long)uVar1 < (long)uVar25) {
            pfVar11 = pfVar10;
            FUN_109576a70(pfVar10,pfVar10 + 3);
            uVar22 = uVar1;
            pfVar9 = pfVar10 + 3;
            if (((uint)pfVar11 & 0xff) != 1) {
              uVar22 = uVar2;
              pfVar9 = pfVar10;
            }
          }
          fVar29 = *pfVar9;
          uVar14 = 0;
          if (fVar29 != fVar30) {
            uVar14 = 0xffffff81;
          }
          if (fVar30 < fVar29) {
            uVar14 = 1;
          }
          if (fVar29 < fVar30) {
            uVar14 = 0xffffffff;
          }
          if (uVar14 == 0) {
            uVar14 = 1;
            if ((int)pfVar9[1] < (int)fVar28) {
              uVar14 = 0xffffffff;
            }
            if ((pfVar9[1] == fVar28) &&
               (uVar14 = (uint)(bVar5 < *(byte *)(pfVar9 + 2)), *(byte *)(pfVar9 + 2) < bVar5)) {
              uVar14 = 0xffffffff;
            }
          }
          pfVar10 = pfVar12;
        } while ((uVar14 & 0xff) != 1);
        *pfVar12 = fVar30;
        pfVar12[1] = fVar28;
        *(byte *)(pfVar12 + 2) = bVar5;
      }
    }
    bVar3 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar3);
  lVar15 = (uVar27 >> 2) * -0x5555555555555555;
  do {
    uVar25 = 0;
    fVar29 = *pfVar8;
    fVar28 = pfVar8[1];
    uVar4 = *(undefined1 *)(pfVar8 + 2);
    pfVar9 = pfVar8;
    do {
      pfVar12 = pfVar9 + uVar25 * 3 + 3;
      uVar16 = uVar25 << 1 | 1;
      uVar27 = uVar25 * 2 + 2;
      uVar24 = uVar16;
      pfVar10 = pfVar12;
      if ((long)uVar27 < lVar15) {
        pfVar11 = pfVar12;
        FUN_109576a70(pfVar12,pfVar9 + uVar25 * 3 + 6);
        uVar24 = uVar27;
        pfVar10 = pfVar9 + uVar25 * 3 + 6;
        if (((uint)pfVar11 & 0xff) != 1) {
          uVar24 = uVar16;
          pfVar10 = pfVar12;
        }
      }
      uVar25 = uVar24;
      *pfVar9 = *pfVar10;
      pfVar9[1] = pfVar10[1];
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + 2);
      pfVar9 = pfVar10;
    } while ((long)uVar25 <= (lVar15 + -2) / 2);
    if (pfVar10 == pfStack_108 + -3) {
      *pfVar10 = fVar29;
      pfVar10[1] = fVar28;
      *(undefined1 *)(pfVar10 + 2) = uVar4;
    }
    else {
      *pfVar10 = pfStack_108[-3];
      pfVar10[1] = pfStack_108[-2];
      *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfStack_108 + -1);
      pfStack_108[-3] = fVar29;
      pfStack_108[-2] = fVar28;
      *(undefined1 *)(pfStack_108 + -1) = uVar4;
      puVar7 = (undefined *)((long)pfVar10 + (0xc - (long)pfVar8));
      if (0xc < (long)puVar7) {
        uVar25 = ((ulong)puVar7 >> 2) * -0x5555555555555555 - 2 >> 1;
        pfVar12 = pfVar8 + uVar25 * 3;
        pfVar9 = pfVar12;
        FUN_109576a70(pfVar12,pfVar10);
        if (((uint)pfVar9 & 0xff) == 1) {
          fVar29 = *pfVar10;
          fVar28 = pfVar10[1];
          bVar5 = *(byte *)(pfVar10 + 2);
          fVar30 = *pfVar12;
          do {
            pfVar9 = pfVar12;
            *pfVar10 = fVar30;
            pfVar10[1] = pfVar9[1];
            *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar9 + 2);
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1 >> 1;
            pfVar12 = pfVar8 + uVar25 * 3;
            fVar30 = *pfVar12;
            uVar14 = 0;
            if (fVar30 != fVar29) {
              uVar14 = 0xffffff81;
            }
            if (fVar29 < fVar30) {
              uVar14 = 1;
            }
            if (fVar30 < fVar29) {
              uVar14 = 0xffffffff;
            }
            if (uVar14 == 0) {
              uVar14 = 1;
              if ((int)pfVar12[1] < (int)fVar28) {
                uVar14 = 0xffffffff;
              }
              if ((pfVar12[1] == fVar28) &&
                 (uVar14 = (uint)(bVar5 < *(byte *)(pfVar12 + 2)), *(byte *)(pfVar12 + 2) < bVar5))
              {
                uVar14 = 0xffffffff;
              }
            }
            pfVar10 = pfVar9;
          } while ((uVar14 & 0xff) == 1);
          *pfVar9 = fVar29;
          pfVar9[1] = fVar28;
          *(byte *)(pfVar9 + 2) = bVar5;
        }
      }
    }
    bVar3 = lVar15 < 3;
    lVar15 = lVar15 + -1;
    pfStack_108 = pfStack_108 + -3;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_109575e3c:
  pfStack_108 = pfVar13;
  if (((ulong)pfVar10 & 1) != 0) {
    return;
  }
  goto LAB_10957583c;
}



/* Entry: 109575750; end: 109575763;  */

void FUN_109575750(undefined8 param_1,float *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float *pfStack_d8;
  
  puVar8 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar8 < (undefined *)0x1555555555555556) {
    __Znwm((long)puVar8 * 0xc);
    return;
  }
  func_0x000104c4f740();
  pfVar9 = (float *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (pfVar9 < (float *)0x1555555555555556) {
    __Znwm((long)pfVar9 * 0xc);
    return;
  }
  func_0x000104c4f740();
  pfStack_d8 = param_2;
LAB_10957583c:
  pfVar13 = pfStack_d8 + -3;
  pfVar10 = pfVar9;
LAB_109575854:
  while( true ) {
    pfVar9 = pfVar10;
    uVar27 = (long)pfStack_d8 - (long)pfVar9;
    uVar25 = ((long)uVar27 >> 2) * -0x5555555555555555;
    if (uVar25 - 2 == 0 || (long)uVar25 < 2) {
      if (uVar25 < 2) {
        return;
      }
      if (uVar25 == 2) {
        FUN_109576a70(pfVar13,pfVar9);
        if (((uint)pfVar13 & 0xff) != 1) {
          return;
        }
        fVar28 = *pfVar9;
        *pfVar9 = pfStack_d8[-3];
        pfStack_d8[-3] = fVar28;
        fVar28 = pfVar9[1];
        pfVar9[1] = pfStack_d8[-2];
        pfStack_d8[-2] = fVar28;
        uVar4 = *(undefined1 *)(pfVar9 + 2);
        *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfStack_d8 + -1);
        *(undefined1 *)(pfStack_d8 + -1) = uVar4;
        return;
      }
    }
    else {
      if (uVar25 == 3) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar10;
        FUN_109576a70(pfVar10,pfVar9);
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar10);
        uVar15 = (uint)pfVar12 & 0xff;
        if (((uint)pfVar11 & 0xff) == 1) {
          pfVar11 = pfVar9 + 2;
          fVar28 = *pfVar9;
          if (uVar15 == 1) {
            *pfVar9 = *pfVar13;
            *pfVar13 = fVar28;
            fVar28 = pfVar9[1];
            pfVar9[1] = pfStack_d8[-2];
            pfStack_d8[-2] = fVar28;
          }
          else {
            *pfVar9 = *pfVar10;
            *pfVar10 = fVar28;
            fVar29 = pfVar9[1];
            pfVar9[1] = pfVar9[4];
            pfVar9[4] = fVar29;
            pfVar11 = pfVar9 + 5;
            uVar4 = *(undefined1 *)(pfVar9 + 2);
            *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)pfVar11;
            *(undefined1 *)pfVar11 = uVar4;
            pfVar12 = pfVar13;
            FUN_109576a70(pfVar13,pfVar10);
            if (((uint)pfVar12 & 0xff) != 1) {
              return;
            }
            *pfVar10 = *pfVar13;
            *pfVar13 = fVar28;
            pfVar9[4] = pfStack_d8[-2];
            pfStack_d8[-2] = fVar29;
          }
          pfVar13 = pfStack_d8 + -1;
        }
        else {
          if (uVar15 != 1) {
            return;
          }
          fVar28 = *pfVar10;
          *pfVar10 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[4];
          pfVar9[4] = pfStack_d8[-2];
          pfStack_d8[-2] = fVar28;
          pfVar13 = pfVar9 + 5;
          uVar4 = *(undefined1 *)pfVar13;
          *(undefined1 *)pfVar13 = *(undefined1 *)(pfStack_d8 + -1);
          *(undefined1 *)(pfStack_d8 + -1) = uVar4;
          pfVar11 = pfVar10;
          FUN_109576a70(pfVar10,pfVar9);
          if (((uint)pfVar11 & 0xff) != 1) {
            return;
          }
          fVar28 = *pfVar9;
          *pfVar9 = *pfVar10;
          *pfVar10 = fVar28;
          fVar28 = pfVar9[1];
          pfVar9[1] = pfVar9[4];
          pfVar9[4] = fVar28;
          pfVar11 = pfVar9 + 2;
        }
        uVar4 = *(undefined1 *)pfVar11;
        *(undefined1 *)pfVar11 = *(undefined1 *)pfVar13;
        *(undefined1 *)pfVar13 = uVar4;
        return;
      }
      if (uVar25 == 4) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar9 + 6;
        FUN_109576458();
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar11);
        if (((uint)pfVar12 & 0xff) == 1) {
          fVar28 = *pfVar11;
          *pfVar11 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[7];
          pfVar9[7] = pfStack_d8[-2];
          pfStack_d8[-2] = fVar28;
          uVar4 = *(undefined1 *)(pfVar9 + 8);
          *(undefined1 *)(pfVar9 + 8) = *(undefined1 *)(pfStack_d8 + -1);
          *(undefined1 *)(pfStack_d8 + -1) = uVar4;
          pfVar13 = pfVar11;
          FUN_109576a70(pfVar11,pfVar10);
          if (((uint)pfVar13 & 0xff) == 1) {
            fVar28 = *pfVar10;
            *pfVar10 = *pfVar11;
            *pfVar11 = fVar28;
            fVar28 = pfVar9[4];
            pfVar9[4] = pfVar9[7];
            pfVar9[7] = fVar28;
            uVar4 = *(undefined1 *)(pfVar9 + 5);
            *(undefined1 *)(pfVar9 + 5) = *(undefined1 *)(pfVar9 + 8);
            *(undefined1 *)(pfVar9 + 8) = uVar4;
            pfVar13 = pfVar10;
            FUN_109576a70(pfVar10,pfVar9);
            if (((uint)pfVar13 & 0xff) == 1) {
              fVar28 = *pfVar9;
              *pfVar9 = *pfVar10;
              *pfVar10 = fVar28;
              fVar28 = pfVar9[1];
              pfVar9[1] = pfVar9[4];
              pfVar9[4] = fVar28;
              uVar4 = *(undefined1 *)(pfVar9 + 2);
              *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar9 + 5);
              *(undefined1 *)(pfVar9 + 5) = uVar4;
            }
          }
        }
        return;
      }
      if (uVar25 == 5) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar9 + 6;
        pfVar12 = pfVar9 + 9;
        FUN_1095765dc();
        pfVar14 = pfVar13;
        FUN_109576a70(pfVar13,pfVar12);
        if (((uint)pfVar14 & 0xff) == 1) {
          fVar28 = *pfVar12;
          *pfVar12 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[10];
          pfVar9[10] = pfStack_d8[-2];
          pfStack_d8[-2] = fVar28;
          uVar4 = *(undefined1 *)(pfVar9 + 0xb);
          *(undefined1 *)(pfVar9 + 0xb) = *(undefined1 *)(pfStack_d8 + -1);
          *(undefined1 *)(pfStack_d8 + -1) = uVar4;
          pfVar13 = pfVar12;
          FUN_109576a70(pfVar12,pfVar11);
          if (((uint)pfVar13 & 0xff) == 1) {
            fVar28 = *pfVar11;
            *pfVar11 = *pfVar12;
            *pfVar12 = fVar28;
            fVar28 = pfVar9[7];
            pfVar9[7] = pfVar9[10];
            pfVar9[10] = fVar28;
            uVar4 = *(undefined1 *)(pfVar9 + 8);
            *(undefined1 *)(pfVar9 + 8) = *(undefined1 *)(pfVar9 + 0xb);
            *(undefined1 *)(pfVar9 + 0xb) = uVar4;
            pfVar13 = pfVar11;
            FUN_109576a70(pfVar11,pfVar10);
            if (((uint)pfVar13 & 0xff) == 1) {
              fVar28 = *pfVar10;
              *pfVar10 = *pfVar11;
              *pfVar11 = fVar28;
              fVar28 = pfVar9[4];
              pfVar9[4] = pfVar9[7];
              pfVar9[7] = fVar28;
              uVar4 = *(undefined1 *)(pfVar9 + 5);
              *(undefined1 *)(pfVar9 + 5) = *(undefined1 *)(pfVar9 + 8);
              *(undefined1 *)(pfVar9 + 8) = uVar4;
              pfVar13 = pfVar10;
              FUN_109576a70(pfVar10,pfVar9);
              if (((uint)pfVar13 & 0xff) == 1) {
                fVar28 = *pfVar9;
                *pfVar9 = *pfVar10;
                *pfVar10 = fVar28;
                fVar28 = pfVar9[1];
                pfVar9[1] = pfVar9[4];
                pfVar9[4] = fVar28;
                uVar4 = *(undefined1 *)(pfVar9 + 2);
                *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar9 + 5);
                *(undefined1 *)(pfVar9 + 5) = uVar4;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar27 < 0x120) {
      pfVar10 = pfVar9 + 3;
      if ((param_4 & 1) == 0) {
        if (pfVar9 == pfStack_d8 || pfVar10 == pfStack_d8) {
          return;
        }
        pfVar13 = pfVar9 + 5;
        do {
          pfVar11 = pfVar10;
          pfVar10 = pfVar11;
          FUN_109576a70(pfVar11,pfVar9);
          if (((uint)pfVar10 & 0xff) == 1) {
            fVar29 = *pfVar11;
            fVar28 = pfVar11[1];
            bVar5 = *(byte *)(pfVar11 + 2);
            fVar30 = *pfVar9;
            pfVar9 = pfVar13;
            do {
              pfVar10 = pfVar9;
              pfVar10[-2] = fVar30;
              pfVar10[-1] = pfVar10[-4];
              pfVar9 = pfVar10 + -3;
              *(byte *)pfVar10 = *(byte *)pfVar9;
              fVar30 = pfVar10[-8];
              uVar15 = 0;
              if (fVar29 != fVar30) {
                uVar15 = 0xffffff81;
              }
              if (fVar30 < fVar29) {
                uVar15 = 1;
              }
              if (fVar29 < fVar30) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 == 0) {
                uVar15 = 1;
                if ((int)fVar28 < (int)pfVar10[-7]) {
                  uVar15 = 0xffffffff;
                }
                if ((fVar28 == pfVar10[-7]) &&
                   (uVar15 = (uint)(*(byte *)(pfVar10 + -6) < bVar5),
                   bVar5 < *(byte *)(pfVar10 + -6))) {
                  uVar15 = 0xffffffff;
                }
              }
            } while ((uVar15 & 0xff) == 1);
            pfVar10[-5] = fVar29;
            pfVar10[-4] = fVar28;
            *(byte *)pfVar9 = bVar5;
          }
          pfVar13 = pfVar13 + 3;
          pfVar10 = pfVar11 + 3;
          pfVar9 = pfVar11;
        } while (pfVar11 + 3 != pfStack_d8);
        return;
      }
      if (pfVar9 == pfStack_d8 || pfVar10 == pfStack_d8) {
        return;
      }
      lVar19 = 0;
      pfVar13 = pfVar9;
      goto LAB_109575f5c;
    }
    if (param_3 == 0) {
      if (pfVar9 == pfStack_d8) {
        return;
      }
      uVar24 = uVar25 - 2 >> 1;
      uVar16 = uVar24;
      goto LAB_10957603c;
    }
    pfVar10 = pfVar9 + (uVar25 >> 1) * 3;
    if (uVar27 < 0x601) {
      FUN_109576458(pfVar10,pfVar9,pfVar13);
    }
    else {
      FUN_109576458(pfVar9,pfVar10,pfVar13);
      FUN_109576458(pfVar9 + 3,pfVar10 + -3,pfStack_d8 + -6);
      FUN_109576458(pfVar9 + 6,pfVar10 + 3,pfStack_d8 + -9);
      FUN_109576458(pfVar10 + -3,pfVar10,pfVar10 + 3);
      fVar28 = *pfVar9;
      *pfVar9 = *pfVar10;
      *pfVar10 = fVar28;
      fVar28 = pfVar9[1];
      pfVar9[1] = pfVar10[1];
      pfVar10[1] = fVar28;
      uVar4 = *(undefined1 *)(pfVar9 + 2);
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + 2);
      *(undefined1 *)(pfVar10 + 2) = uVar4;
    }
    param_3 = param_3 + -1;
    uVar15 = 0xffffff81;
    uVar21 = 0xffffffff;
    if ((param_4 & 1) != 0) break;
    pfVar10 = pfVar9 + -3;
    FUN_109576a70(pfVar10,pfVar9);
    if (((uint)pfVar10 & 0xff) == 1) break;
    fVar29 = *pfVar9;
    fVar28 = pfVar9[1];
    bVar5 = *(byte *)(pfVar9 + 2);
    fVar30 = *pfVar13;
    uVar17 = 0;
    if (fVar29 != fVar30) {
      uVar17 = uVar15;
    }
    if (fVar30 < fVar29) {
      uVar17 = 1;
    }
    if (fVar29 < fVar30) {
      uVar17 = 0xffffffff;
    }
    if (uVar17 == 0) {
      uVar17 = 1;
      if ((int)fVar28 < (int)pfStack_d8[-2]) {
        uVar17 = uVar21;
      }
      if ((fVar28 == pfStack_d8[-2]) &&
         (uVar17 = (uint)(*(byte *)(pfStack_d8 + -1) < bVar5), bVar5 < *(byte *)(pfStack_d8 + -1)))
      {
        uVar17 = 0xffffffff;
      }
    }
    pfVar11 = pfVar9;
    if ((uVar17 & 0xff) == 1) {
      do {
        pfVar10 = pfVar11 + 3;
        fVar30 = *pfVar10;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar11[4]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar11[4]) &&
             (uVar17 = (uint)(*(byte *)(pfVar11 + 5) < bVar5), bVar5 < *(byte *)(pfVar11 + 5))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar11 = pfVar10;
      } while ((uVar17 & 0xff) != 1);
    }
    else {
      do {
        pfVar10 = pfVar11 + 3;
        if (pfStack_d8 <= pfVar10) break;
        fVar30 = *pfVar10;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar11[4]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar11[4]) &&
             (uVar17 = (uint)(*(byte *)(pfVar11 + 5) < bVar5), bVar5 < *(byte *)(pfVar11 + 5))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar11 = pfVar10;
      } while ((uVar17 & 0xff) != 1);
    }
    pfVar11 = pfStack_d8;
    pfVar12 = pfStack_d8;
    if (pfVar10 < pfStack_d8) {
      do {
        pfVar11 = pfVar12 + -3;
        fVar30 = *pfVar11;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar12[-2]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar12[-2]) &&
             (uVar17 = (uint)(*(byte *)(pfVar12 + -1) < bVar5), bVar5 < *(byte *)(pfVar12 + -1))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar12 = pfVar11;
      } while ((uVar17 & 0xff) == 1);
    }
    if (pfVar10 < pfVar11) {
      fVar30 = *pfVar10;
      fVar31 = *pfVar11;
      do {
        *pfVar10 = fVar31;
        *pfVar11 = fVar30;
        fVar30 = pfVar10[1];
        pfVar10[1] = pfVar11[1];
        pfVar11[1] = fVar30;
        uVar4 = *(undefined1 *)(pfVar10 + 2);
        *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar11 + 2);
        *(undefined1 *)(pfVar11 + 2) = uVar4;
        pfVar12 = pfVar10;
        do {
          pfVar10 = pfVar12 + 3;
          fVar30 = *pfVar10;
          uVar17 = 0;
          if (fVar29 != fVar30) {
            uVar17 = uVar15;
          }
          if (fVar30 < fVar29) {
            uVar17 = 1;
          }
          if (fVar29 < fVar30) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 == 0) {
            uVar17 = 1;
            if ((int)fVar28 < (int)pfVar12[4]) {
              uVar17 = uVar21;
            }
            if ((fVar28 == pfVar12[4]) &&
               (uVar17 = (uint)(*(byte *)(pfVar12 + 5) < bVar5), bVar5 < *(byte *)(pfVar12 + 5))) {
              uVar17 = 0xffffffff;
            }
          }
          pfVar14 = pfVar11;
          pfVar12 = pfVar10;
        } while ((uVar17 & 0xff) != 1);
        do {
          pfVar11 = pfVar14 + -3;
          fVar31 = *pfVar11;
          uVar17 = 0;
          if (fVar29 != fVar31) {
            uVar17 = uVar15;
          }
          if (fVar31 < fVar29) {
            uVar17 = 1;
          }
          if (fVar29 < fVar31) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 == 0) {
            uVar17 = 1;
            if ((int)fVar28 < (int)pfVar14[-2]) {
              uVar17 = uVar21;
            }
            if ((fVar28 == pfVar14[-2]) &&
               (uVar17 = (uint)(*(byte *)(pfVar14 + -1) < bVar5), bVar5 < *(byte *)(pfVar14 + -1)))
            {
              uVar17 = 0xffffffff;
            }
          }
          pfVar14 = pfVar11;
        } while ((uVar17 & 0xff) == 1);
      } while (pfVar10 < pfVar11);
    }
    if (pfVar10 + -3 != pfVar9) {
      *pfVar9 = pfVar10[-3];
      pfVar9[1] = pfVar10[-2];
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + -1);
    }
    param_4 = 0;
    pfVar10[-3] = fVar29;
    pfVar10[-2] = fVar28;
    *(byte *)(pfVar10 + -1) = bVar5;
  }
  lVar19 = 0;
  fVar29 = *pfVar9;
  fVar28 = pfVar9[1];
  bVar5 = *(byte *)(pfVar9 + 2);
  do {
    fVar30 = *(float *)((long)pfVar9 + lVar19 + 0xc);
    uVar23 = 0xffffff81;
    uVar17 = 0;
    if (fVar30 != fVar29) {
      uVar17 = uVar23;
    }
    if (fVar29 < fVar30) {
      uVar17 = 1;
    }
    if (fVar30 < fVar29) {
      uVar17 = 0xffffffff;
    }
    if (uVar17 == 0) {
      fVar31 = *(float *)((long)pfVar9 + lVar19 + 0x10);
      uVar17 = 1;
      if ((int)fVar31 < (int)fVar28) {
        uVar17 = 0xffffffff;
      }
      if ((fVar31 == fVar28) &&
         (bVar6 = *(byte *)((long)pfVar9 + lVar19 + 0x14), uVar17 = (uint)(bVar5 < bVar6),
         bVar6 < bVar5)) {
        uVar17 = 0xffffffff;
      }
    }
    lVar19 = lVar19 + 0xc;
  } while ((uVar17 & 0xff) == 1);
  pfVar11 = (float *)((long)pfVar9 + lVar19);
  pfVar10 = pfStack_d8;
  if (lVar19 == 0xc) {
    do {
      pfVar12 = pfVar10;
      if (pfVar10 <= pfVar11) break;
      pfVar12 = pfVar10 + -3;
      fVar31 = *pfVar12;
      uVar17 = 0;
      if (fVar31 != fVar29) {
        uVar17 = uVar23;
      }
      if (fVar29 < fVar31) {
        uVar17 = 1;
      }
      if (fVar31 < fVar29) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 == 0) {
        uVar17 = 1;
        if ((int)pfVar10[-2] < (int)fVar28) {
          uVar17 = uVar21;
        }
        if ((pfVar10[-2] == fVar28) &&
           (uVar17 = (uint)(bVar5 < *(byte *)(pfVar10 + -1)), *(byte *)(pfVar10 + -1) < bVar5)) {
          uVar17 = 0xffffffff;
        }
      }
      pfVar10 = pfVar12;
    } while ((uVar17 & 0xff) != 1);
  }
  else {
    do {
      pfVar12 = pfVar10 + -3;
      fVar31 = *pfVar12;
      uVar17 = 0;
      if (fVar31 != fVar29) {
        uVar17 = uVar23;
      }
      if (fVar29 < fVar31) {
        uVar17 = 1;
      }
      if (fVar31 < fVar29) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 == 0) {
        uVar17 = 1;
        if ((int)pfVar10[-2] < (int)fVar28) {
          uVar17 = uVar21;
        }
        if ((pfVar10[-2] == fVar28) &&
           (uVar17 = (uint)(bVar5 < *(byte *)(pfVar10 + -1)), *(byte *)(pfVar10 + -1) < bVar5)) {
          uVar17 = 0xffffffff;
        }
      }
      pfVar10 = pfVar12;
    } while ((uVar17 & 0xff) != 1);
  }
  pfVar10 = pfVar11;
  if (pfVar11 < pfVar12) {
    fVar31 = *pfVar12;
    pfVar14 = pfVar12;
    do {
      *pfVar10 = fVar31;
      *pfVar14 = fVar30;
      fVar30 = pfVar10[1];
      pfVar10[1] = pfVar14[1];
      pfVar14[1] = fVar30;
      uVar4 = *(undefined1 *)(pfVar10 + 2);
      *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar14 + 2);
      *(undefined1 *)(pfVar14 + 2) = uVar4;
      pfVar26 = pfVar10;
      do {
        pfVar10 = pfVar26 + 3;
        fVar30 = *pfVar10;
        uVar21 = 0;
        if (fVar30 != fVar29) {
          uVar21 = uVar23;
        }
        if (fVar29 < fVar30) {
          uVar21 = 1;
        }
        if (fVar30 < fVar29) {
          uVar21 = 0xffffffff;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
          if ((int)pfVar26[4] < (int)fVar28) {
            uVar21 = 0xffffffff;
          }
          if ((pfVar26[4] == fVar28) &&
             (uVar21 = (uint)(bVar5 < *(byte *)(pfVar26 + 5)), *(byte *)(pfVar26 + 5) < bVar5)) {
            uVar21 = 0xffffffff;
          }
        }
        pfVar20 = pfVar14;
        pfVar26 = pfVar10;
      } while ((uVar21 & 0xff) == 1);
      do {
        pfVar14 = pfVar20 + -3;
        fVar31 = *pfVar14;
        uVar21 = 0;
        if (fVar31 != fVar29) {
          uVar21 = uVar15;
        }
        if (fVar29 < fVar31) {
          uVar21 = 1;
        }
        if (fVar31 < fVar29) {
          uVar21 = 0xffffffff;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
          if ((int)pfVar20[-2] < (int)fVar28) {
            uVar21 = 0xffffffff;
          }
          if ((pfVar20[-2] == fVar28) &&
             (uVar21 = (uint)(bVar5 < *(byte *)(pfVar20 + -1)), *(byte *)(pfVar20 + -1) < bVar5)) {
            uVar21 = 0xffffffff;
          }
        }
        pfVar20 = pfVar14;
      } while ((uVar21 & 0xff) != 1);
    } while (pfVar10 < pfVar14);
  }
  pfVar14 = pfVar10 + -3;
  if (pfVar14 != pfVar9) {
    *pfVar9 = pfVar10[-3];
    pfVar9[1] = pfVar10[-2];
    *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + -1);
  }
  pfVar10[-3] = fVar29;
  pfVar10[-2] = fVar28;
  *(byte *)(pfVar10 + -1) = bVar5;
  if (pfVar12 <= pfVar11) {
    pfVar11 = pfVar9;
    FUN_109576848(pfVar9,pfVar14);
    pfVar12 = pfVar10;
    FUN_109576848(pfVar10,pfStack_d8);
    if ((int)pfVar12 != 0) goto LAB_109575e3c;
    if (((ulong)pfVar11 & 1) != 0) goto LAB_109575854;
  }
  FUN_109575800(pfVar9,pfVar14,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_109575854;
LAB_109575f5c:
  pfVar11 = pfVar10;
  pfVar10 = pfVar11;
  FUN_109576a70(pfVar11,pfVar13);
  if (((uint)pfVar10 & 0xff) == 1) {
    fVar29 = *pfVar11;
    fVar28 = pfVar11[1];
    bVar5 = *(byte *)(pfVar11 + 2);
    fVar30 = *pfVar13;
    lVar7 = lVar19;
    do {
      lVar18 = lVar7;
      *(float *)((long)pfVar9 + lVar18 + 0xc) = fVar30;
      *(undefined4 *)((long)pfVar9 + lVar18 + 0x10) = *(undefined4 *)((long)pfVar9 + lVar18 + 4);
      *(undefined *)((long)pfVar9 + lVar18 + 0x14) = *(undefined *)((long)pfVar9 + lVar18 + 8);
      pfVar10 = pfVar9;
      if (lVar18 == 0) goto LAB_109576008;
      fVar30 = *(float *)((long)pfVar9 + lVar18 + -0xc);
      uVar15 = 0;
      if (fVar29 != fVar30) {
        uVar15 = 0xffffff81;
      }
      if (fVar30 < fVar29) {
        uVar15 = 1;
      }
      if (fVar29 < fVar30) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0) {
        fVar31 = *(float *)((long)pfVar9 + lVar18 + -8);
        uVar15 = 1;
        if ((int)fVar28 < (int)fVar31) {
          uVar15 = 0xffffffff;
        }
        if ((fVar28 == fVar31) &&
           (bVar6 = *(byte *)((long)pfVar9 + lVar18 + -4), uVar15 = (uint)(bVar6 < bVar5),
           bVar5 < bVar6)) {
          uVar15 = 0xffffffff;
        }
      }
      lVar7 = lVar18 + -0xc;
    } while ((uVar15 & 0xff) == 1);
    pfVar10 = (float *)((long)pfVar9 + lVar18);
LAB_109576008:
    *pfVar10 = fVar29;
    pfVar10[1] = fVar28;
    *(byte *)(pfVar10 + 2) = bVar5;
  }
  lVar19 = lVar19 + 0xc;
  pfVar10 = pfVar11 + 3;
  pfVar13 = pfVar11;
  if (pfVar11 + 3 == pfStack_d8) {
    return;
  }
  goto LAB_109575f5c;
LAB_10957603c:
  do {
    if ((long)uVar16 <= (long)uVar24) {
      uVar2 = uVar16 << 1 | 1;
      pfVar13 = pfVar9 + uVar2 * 3;
      uVar1 = uVar16 * 2 + 2;
      uVar22 = uVar2;
      pfVar10 = pfVar13;
      if ((long)uVar1 < (long)uVar25) {
        pfVar11 = pfVar13;
        FUN_109576a70(pfVar13,pfVar13 + 3);
        uVar22 = uVar1;
        pfVar10 = pfVar13 + 3;
        if (((uint)pfVar11 & 0xff) != 1) {
          uVar22 = uVar2;
          pfVar10 = pfVar13;
        }
      }
      pfVar11 = pfVar9 + uVar16 * 3;
      pfVar13 = pfVar10;
      FUN_109576a70(pfVar10,pfVar11);
      if (((uint)pfVar13 & 0xff) != 1) {
        fVar30 = *pfVar11;
        fVar28 = pfVar11[1];
        bVar5 = *(byte *)(pfVar11 + 2);
        fVar29 = *pfVar10;
        do {
          pfVar13 = pfVar10;
          *pfVar11 = fVar29;
          pfVar11[1] = pfVar13[1];
          *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfVar13 + 2);
          if ((long)uVar24 < (long)uVar22) break;
          uVar2 = uVar22 << 1 | 1;
          pfVar11 = pfVar9 + uVar2 * 3;
          uVar1 = uVar22 * 2 + 2;
          uVar22 = uVar2;
          pfVar10 = pfVar11;
          if ((long)uVar1 < (long)uVar25) {
            pfVar12 = pfVar11;
            FUN_109576a70(pfVar11,pfVar11 + 3);
            uVar22 = uVar1;
            pfVar10 = pfVar11 + 3;
            if (((uint)pfVar12 & 0xff) != 1) {
              uVar22 = uVar2;
              pfVar10 = pfVar11;
            }
          }
          fVar29 = *pfVar10;
          uVar15 = 0;
          if (fVar29 != fVar30) {
            uVar15 = 0xffffff81;
          }
          if (fVar30 < fVar29) {
            uVar15 = 1;
          }
          if (fVar29 < fVar30) {
            uVar15 = 0xffffffff;
          }
          if (uVar15 == 0) {
            uVar15 = 1;
            if ((int)pfVar10[1] < (int)fVar28) {
              uVar15 = 0xffffffff;
            }
            if ((pfVar10[1] == fVar28) &&
               (uVar15 = (uint)(bVar5 < *(byte *)(pfVar10 + 2)), *(byte *)(pfVar10 + 2) < bVar5)) {
              uVar15 = 0xffffffff;
            }
          }
          pfVar11 = pfVar13;
        } while ((uVar15 & 0xff) != 1);
        *pfVar13 = fVar30;
        pfVar13[1] = fVar28;
        *(byte *)(pfVar13 + 2) = bVar5;
      }
    }
    bVar3 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar3);
  lVar19 = (uVar27 >> 2) * -0x5555555555555555;
  do {
    uVar25 = 0;
    fVar29 = *pfVar9;
    fVar28 = pfVar9[1];
    uVar4 = *(undefined1 *)(pfVar9 + 2);
    pfVar10 = pfVar9;
    do {
      pfVar13 = pfVar10 + uVar25 * 3 + 3;
      uVar16 = uVar25 << 1 | 1;
      uVar27 = uVar25 * 2 + 2;
      uVar24 = uVar16;
      pfVar11 = pfVar13;
      if ((long)uVar27 < lVar19) {
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar10 + uVar25 * 3 + 6);
        uVar24 = uVar27;
        pfVar11 = pfVar10 + uVar25 * 3 + 6;
        if (((uint)pfVar12 & 0xff) != 1) {
          uVar24 = uVar16;
          pfVar11 = pfVar13;
        }
      }
      uVar25 = uVar24;
      *pfVar10 = *pfVar11;
      pfVar10[1] = pfVar11[1];
      *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar11 + 2);
      pfVar10 = pfVar11;
    } while ((long)uVar25 <= (lVar19 + -2) / 2);
    if (pfVar11 == pfStack_d8 + -3) {
      *pfVar11 = fVar29;
      pfVar11[1] = fVar28;
      *(undefined1 *)(pfVar11 + 2) = uVar4;
    }
    else {
      *pfVar11 = pfStack_d8[-3];
      pfVar11[1] = pfStack_d8[-2];
      *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfStack_d8 + -1);
      pfStack_d8[-3] = fVar29;
      pfStack_d8[-2] = fVar28;
      *(undefined1 *)(pfStack_d8 + -1) = uVar4;
      puVar8 = (undefined *)((long)pfVar11 + (0xc - (long)pfVar9));
      if (0xc < (long)puVar8) {
        uVar25 = ((ulong)puVar8 >> 2) * -0x5555555555555555 - 2 >> 1;
        pfVar13 = pfVar9 + uVar25 * 3;
        pfVar10 = pfVar13;
        FUN_109576a70(pfVar13,pfVar11);
        if (((uint)pfVar10 & 0xff) == 1) {
          fVar29 = *pfVar11;
          fVar28 = pfVar11[1];
          bVar5 = *(byte *)(pfVar11 + 2);
          fVar30 = *pfVar13;
          do {
            pfVar10 = pfVar13;
            *pfVar11 = fVar30;
            pfVar11[1] = pfVar10[1];
            *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfVar10 + 2);
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1 >> 1;
            pfVar13 = pfVar9 + uVar25 * 3;
            fVar30 = *pfVar13;
            uVar15 = 0;
            if (fVar30 != fVar29) {
              uVar15 = 0xffffff81;
            }
            if (fVar29 < fVar30) {
              uVar15 = 1;
            }
            if (fVar30 < fVar29) {
              uVar15 = 0xffffffff;
            }
            if (uVar15 == 0) {
              uVar15 = 1;
              if ((int)pfVar13[1] < (int)fVar28) {
                uVar15 = 0xffffffff;
              }
              if ((pfVar13[1] == fVar28) &&
                 (uVar15 = (uint)(bVar5 < *(byte *)(pfVar13 + 2)), *(byte *)(pfVar13 + 2) < bVar5))
              {
                uVar15 = 0xffffffff;
              }
            }
            pfVar11 = pfVar10;
          } while ((uVar15 & 0xff) == 1);
          *pfVar10 = fVar29;
          pfVar10[1] = fVar28;
          *(byte *)(pfVar10 + 2) = bVar5;
        }
      }
    }
    bVar3 = lVar19 < 3;
    lVar19 = lVar19 + -1;
    pfStack_d8 = pfStack_d8 + -3;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_109575e3c:
  pfStack_d8 = pfVar14;
  if (((ulong)pfVar11 & 1) != 0) {
    return;
  }
  goto LAB_10957583c;
}



/* Entry: 109575764; end: 1095757a7;  */

void FUN_109575764(ulong param_1,float *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float *pfStack_c8;
  
  if (param_1 < 0x1555555555555556) {
    __Znwm(param_1 * 0xc);
    return;
  }
  func_0x000104c4f740();
  pfVar9 = (float *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (pfVar9 < (float *)0x1555555555555556) {
    __Znwm((long)pfVar9 * 0xc);
    return;
  }
  func_0x000104c4f740();
  pfStack_c8 = param_2;
LAB_10957583c:
  pfVar13 = pfStack_c8 + -3;
  pfVar10 = pfVar9;
LAB_109575854:
  while( true ) {
    pfVar9 = pfVar10;
    uVar27 = (long)pfStack_c8 - (long)pfVar9;
    uVar25 = ((long)uVar27 >> 2) * -0x5555555555555555;
    if (uVar25 - 2 == 0 || (long)uVar25 < 2) {
      if (uVar25 < 2) {
        return;
      }
      if (uVar25 == 2) {
        FUN_109576a70(pfVar13,pfVar9);
        if (((uint)pfVar13 & 0xff) != 1) {
          return;
        }
        fVar28 = *pfVar9;
        *pfVar9 = pfStack_c8[-3];
        pfStack_c8[-3] = fVar28;
        fVar28 = pfVar9[1];
        pfVar9[1] = pfStack_c8[-2];
        pfStack_c8[-2] = fVar28;
        uVar5 = *(undefined1 *)(pfVar9 + 2);
        *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfStack_c8 + -1);
        *(undefined1 *)(pfStack_c8 + -1) = uVar5;
        return;
      }
    }
    else {
      if (uVar25 == 3) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar10;
        FUN_109576a70(pfVar10,pfVar9);
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar10);
        uVar15 = (uint)pfVar12 & 0xff;
        if (((uint)pfVar11 & 0xff) == 1) {
          pfVar11 = pfVar9 + 2;
          fVar28 = *pfVar9;
          if (uVar15 == 1) {
            *pfVar9 = *pfVar13;
            *pfVar13 = fVar28;
            fVar28 = pfVar9[1];
            pfVar9[1] = pfStack_c8[-2];
            pfStack_c8[-2] = fVar28;
          }
          else {
            *pfVar9 = *pfVar10;
            *pfVar10 = fVar28;
            fVar29 = pfVar9[1];
            pfVar9[1] = pfVar9[4];
            pfVar9[4] = fVar29;
            pfVar11 = pfVar9 + 5;
            uVar5 = *(undefined1 *)(pfVar9 + 2);
            *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)pfVar11;
            *(undefined1 *)pfVar11 = uVar5;
            pfVar12 = pfVar13;
            FUN_109576a70(pfVar13,pfVar10);
            if (((uint)pfVar12 & 0xff) != 1) {
              return;
            }
            *pfVar10 = *pfVar13;
            *pfVar13 = fVar28;
            pfVar9[4] = pfStack_c8[-2];
            pfStack_c8[-2] = fVar29;
          }
          pfVar13 = pfStack_c8 + -1;
        }
        else {
          if (uVar15 != 1) {
            return;
          }
          fVar28 = *pfVar10;
          *pfVar10 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[4];
          pfVar9[4] = pfStack_c8[-2];
          pfStack_c8[-2] = fVar28;
          pfVar13 = pfVar9 + 5;
          uVar5 = *(undefined1 *)pfVar13;
          *(undefined1 *)pfVar13 = *(undefined1 *)(pfStack_c8 + -1);
          *(undefined1 *)(pfStack_c8 + -1) = uVar5;
          pfVar11 = pfVar10;
          FUN_109576a70(pfVar10,pfVar9);
          if (((uint)pfVar11 & 0xff) != 1) {
            return;
          }
          fVar28 = *pfVar9;
          *pfVar9 = *pfVar10;
          *pfVar10 = fVar28;
          fVar28 = pfVar9[1];
          pfVar9[1] = pfVar9[4];
          pfVar9[4] = fVar28;
          pfVar11 = pfVar9 + 2;
        }
        uVar5 = *(undefined1 *)pfVar11;
        *(undefined1 *)pfVar11 = *(undefined1 *)pfVar13;
        *(undefined1 *)pfVar13 = uVar5;
        return;
      }
      if (uVar25 == 4) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar9 + 6;
        FUN_109576458();
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar11);
        if (((uint)pfVar12 & 0xff) == 1) {
          fVar28 = *pfVar11;
          *pfVar11 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[7];
          pfVar9[7] = pfStack_c8[-2];
          pfStack_c8[-2] = fVar28;
          uVar5 = *(undefined1 *)(pfVar9 + 8);
          *(undefined1 *)(pfVar9 + 8) = *(undefined1 *)(pfStack_c8 + -1);
          *(undefined1 *)(pfStack_c8 + -1) = uVar5;
          pfVar13 = pfVar11;
          FUN_109576a70(pfVar11,pfVar10);
          if (((uint)pfVar13 & 0xff) == 1) {
            fVar28 = *pfVar10;
            *pfVar10 = *pfVar11;
            *pfVar11 = fVar28;
            fVar28 = pfVar9[4];
            pfVar9[4] = pfVar9[7];
            pfVar9[7] = fVar28;
            uVar5 = *(undefined1 *)(pfVar9 + 5);
            *(undefined1 *)(pfVar9 + 5) = *(undefined1 *)(pfVar9 + 8);
            *(undefined1 *)(pfVar9 + 8) = uVar5;
            pfVar13 = pfVar10;
            FUN_109576a70(pfVar10,pfVar9);
            if (((uint)pfVar13 & 0xff) == 1) {
              fVar28 = *pfVar9;
              *pfVar9 = *pfVar10;
              *pfVar10 = fVar28;
              fVar28 = pfVar9[1];
              pfVar9[1] = pfVar9[4];
              pfVar9[4] = fVar28;
              uVar5 = *(undefined1 *)(pfVar9 + 2);
              *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar9 + 5);
              *(undefined1 *)(pfVar9 + 5) = uVar5;
            }
          }
        }
        return;
      }
      if (uVar25 == 5) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar9 + 6;
        pfVar12 = pfVar9 + 9;
        FUN_1095765dc();
        pfVar14 = pfVar13;
        FUN_109576a70(pfVar13,pfVar12);
        if (((uint)pfVar14 & 0xff) == 1) {
          fVar28 = *pfVar12;
          *pfVar12 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[10];
          pfVar9[10] = pfStack_c8[-2];
          pfStack_c8[-2] = fVar28;
          uVar5 = *(undefined1 *)(pfVar9 + 0xb);
          *(undefined1 *)(pfVar9 + 0xb) = *(undefined1 *)(pfStack_c8 + -1);
          *(undefined1 *)(pfStack_c8 + -1) = uVar5;
          pfVar13 = pfVar12;
          FUN_109576a70(pfVar12,pfVar11);
          if (((uint)pfVar13 & 0xff) == 1) {
            fVar28 = *pfVar11;
            *pfVar11 = *pfVar12;
            *pfVar12 = fVar28;
            fVar28 = pfVar9[7];
            pfVar9[7] = pfVar9[10];
            pfVar9[10] = fVar28;
            uVar5 = *(undefined1 *)(pfVar9 + 8);
            *(undefined1 *)(pfVar9 + 8) = *(undefined1 *)(pfVar9 + 0xb);
            *(undefined1 *)(pfVar9 + 0xb) = uVar5;
            pfVar13 = pfVar11;
            FUN_109576a70(pfVar11,pfVar10);
            if (((uint)pfVar13 & 0xff) == 1) {
              fVar28 = *pfVar10;
              *pfVar10 = *pfVar11;
              *pfVar11 = fVar28;
              fVar28 = pfVar9[4];
              pfVar9[4] = pfVar9[7];
              pfVar9[7] = fVar28;
              uVar5 = *(undefined1 *)(pfVar9 + 5);
              *(undefined1 *)(pfVar9 + 5) = *(undefined1 *)(pfVar9 + 8);
              *(undefined1 *)(pfVar9 + 8) = uVar5;
              pfVar13 = pfVar10;
              FUN_109576a70(pfVar10,pfVar9);
              if (((uint)pfVar13 & 0xff) == 1) {
                fVar28 = *pfVar9;
                *pfVar9 = *pfVar10;
                *pfVar10 = fVar28;
                fVar28 = pfVar9[1];
                pfVar9[1] = pfVar9[4];
                pfVar9[4] = fVar28;
                uVar5 = *(undefined1 *)(pfVar9 + 2);
                *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar9 + 5);
                *(undefined1 *)(pfVar9 + 5) = uVar5;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar27 < 0x120) {
      pfVar10 = pfVar9 + 3;
      if ((param_4 & 1) == 0) {
        if (pfVar9 == pfStack_c8 || pfVar10 == pfStack_c8) {
          return;
        }
        pfVar13 = pfVar9 + 5;
        do {
          pfVar11 = pfVar10;
          pfVar10 = pfVar11;
          FUN_109576a70(pfVar11,pfVar9);
          if (((uint)pfVar10 & 0xff) == 1) {
            fVar29 = *pfVar11;
            fVar28 = pfVar11[1];
            bVar6 = *(byte *)(pfVar11 + 2);
            fVar30 = *pfVar9;
            pfVar9 = pfVar13;
            do {
              pfVar10 = pfVar9;
              pfVar10[-2] = fVar30;
              pfVar10[-1] = pfVar10[-4];
              pfVar9 = pfVar10 + -3;
              *(byte *)pfVar10 = *(byte *)pfVar9;
              fVar30 = pfVar10[-8];
              uVar15 = 0;
              if (fVar29 != fVar30) {
                uVar15 = 0xffffff81;
              }
              if (fVar30 < fVar29) {
                uVar15 = 1;
              }
              if (fVar29 < fVar30) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 == 0) {
                uVar15 = 1;
                if ((int)fVar28 < (int)pfVar10[-7]) {
                  uVar15 = 0xffffffff;
                }
                if ((fVar28 == pfVar10[-7]) &&
                   (uVar15 = (uint)(*(byte *)(pfVar10 + -6) < bVar6),
                   bVar6 < *(byte *)(pfVar10 + -6))) {
                  uVar15 = 0xffffffff;
                }
              }
            } while ((uVar15 & 0xff) == 1);
            pfVar10[-5] = fVar29;
            pfVar10[-4] = fVar28;
            *(byte *)pfVar9 = bVar6;
          }
          pfVar13 = pfVar13 + 3;
          pfVar10 = pfVar11 + 3;
          pfVar9 = pfVar11;
        } while (pfVar11 + 3 != pfStack_c8);
        return;
      }
      if (pfVar9 == pfStack_c8 || pfVar10 == pfStack_c8) {
        return;
      }
      lVar19 = 0;
      pfVar13 = pfVar9;
      goto LAB_109575f5c;
    }
    if (param_3 == 0) {
      if (pfVar9 == pfStack_c8) {
        return;
      }
      uVar24 = uVar25 - 2 >> 1;
      uVar16 = uVar24;
      goto LAB_10957603c;
    }
    pfVar10 = pfVar9 + (uVar25 >> 1) * 3;
    if (uVar27 < 0x601) {
      FUN_109576458(pfVar10,pfVar9,pfVar13);
    }
    else {
      FUN_109576458(pfVar9,pfVar10,pfVar13);
      FUN_109576458(pfVar9 + 3,pfVar10 + -3,pfStack_c8 + -6);
      FUN_109576458(pfVar9 + 6,pfVar10 + 3,pfStack_c8 + -9);
      FUN_109576458(pfVar10 + -3,pfVar10,pfVar10 + 3);
      fVar28 = *pfVar9;
      *pfVar9 = *pfVar10;
      *pfVar10 = fVar28;
      fVar28 = pfVar9[1];
      pfVar9[1] = pfVar10[1];
      pfVar10[1] = fVar28;
      uVar5 = *(undefined1 *)(pfVar9 + 2);
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + 2);
      *(undefined1 *)(pfVar10 + 2) = uVar5;
    }
    param_3 = param_3 + -1;
    uVar15 = 0xffffff81;
    uVar21 = 0xffffffff;
    if ((param_4 & 1) != 0) break;
    pfVar10 = pfVar9 + -3;
    FUN_109576a70(pfVar10,pfVar9);
    if (((uint)pfVar10 & 0xff) == 1) break;
    fVar29 = *pfVar9;
    fVar28 = pfVar9[1];
    bVar6 = *(byte *)(pfVar9 + 2);
    fVar30 = *pfVar13;
    uVar17 = 0;
    if (fVar29 != fVar30) {
      uVar17 = uVar15;
    }
    if (fVar30 < fVar29) {
      uVar17 = 1;
    }
    if (fVar29 < fVar30) {
      uVar17 = 0xffffffff;
    }
    if (uVar17 == 0) {
      uVar17 = 1;
      if ((int)fVar28 < (int)pfStack_c8[-2]) {
        uVar17 = uVar21;
      }
      if ((fVar28 == pfStack_c8[-2]) &&
         (uVar17 = (uint)(*(byte *)(pfStack_c8 + -1) < bVar6), bVar6 < *(byte *)(pfStack_c8 + -1)))
      {
        uVar17 = 0xffffffff;
      }
    }
    pfVar11 = pfVar9;
    if ((uVar17 & 0xff) == 1) {
      do {
        pfVar10 = pfVar11 + 3;
        fVar30 = *pfVar10;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar11[4]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar11[4]) &&
             (uVar17 = (uint)(*(byte *)(pfVar11 + 5) < bVar6), bVar6 < *(byte *)(pfVar11 + 5))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar11 = pfVar10;
      } while ((uVar17 & 0xff) != 1);
    }
    else {
      do {
        pfVar10 = pfVar11 + 3;
        if (pfStack_c8 <= pfVar10) break;
        fVar30 = *pfVar10;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar11[4]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar11[4]) &&
             (uVar17 = (uint)(*(byte *)(pfVar11 + 5) < bVar6), bVar6 < *(byte *)(pfVar11 + 5))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar11 = pfVar10;
      } while ((uVar17 & 0xff) != 1);
    }
    pfVar11 = pfStack_c8;
    pfVar12 = pfStack_c8;
    if (pfVar10 < pfStack_c8) {
      do {
        pfVar11 = pfVar12 + -3;
        fVar30 = *pfVar11;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar12[-2]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar12[-2]) &&
             (uVar17 = (uint)(*(byte *)(pfVar12 + -1) < bVar6), bVar6 < *(byte *)(pfVar12 + -1))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar12 = pfVar11;
      } while ((uVar17 & 0xff) == 1);
    }
    if (pfVar10 < pfVar11) {
      fVar30 = *pfVar10;
      fVar31 = *pfVar11;
      do {
        *pfVar10 = fVar31;
        *pfVar11 = fVar30;
        fVar30 = pfVar10[1];
        pfVar10[1] = pfVar11[1];
        pfVar11[1] = fVar30;
        uVar5 = *(undefined1 *)(pfVar10 + 2);
        *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar11 + 2);
        *(undefined1 *)(pfVar11 + 2) = uVar5;
        pfVar12 = pfVar10;
        do {
          pfVar10 = pfVar12 + 3;
          fVar30 = *pfVar10;
          uVar17 = 0;
          if (fVar29 != fVar30) {
            uVar17 = uVar15;
          }
          if (fVar30 < fVar29) {
            uVar17 = 1;
          }
          if (fVar29 < fVar30) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 == 0) {
            uVar17 = 1;
            if ((int)fVar28 < (int)pfVar12[4]) {
              uVar17 = uVar21;
            }
            if ((fVar28 == pfVar12[4]) &&
               (uVar17 = (uint)(*(byte *)(pfVar12 + 5) < bVar6), bVar6 < *(byte *)(pfVar12 + 5))) {
              uVar17 = 0xffffffff;
            }
          }
          pfVar14 = pfVar11;
          pfVar12 = pfVar10;
        } while ((uVar17 & 0xff) != 1);
        do {
          pfVar11 = pfVar14 + -3;
          fVar31 = *pfVar11;
          uVar17 = 0;
          if (fVar29 != fVar31) {
            uVar17 = uVar15;
          }
          if (fVar31 < fVar29) {
            uVar17 = 1;
          }
          if (fVar29 < fVar31) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 == 0) {
            uVar17 = 1;
            if ((int)fVar28 < (int)pfVar14[-2]) {
              uVar17 = uVar21;
            }
            if ((fVar28 == pfVar14[-2]) &&
               (uVar17 = (uint)(*(byte *)(pfVar14 + -1) < bVar6), bVar6 < *(byte *)(pfVar14 + -1)))
            {
              uVar17 = 0xffffffff;
            }
          }
          pfVar14 = pfVar11;
        } while ((uVar17 & 0xff) == 1);
      } while (pfVar10 < pfVar11);
    }
    if (pfVar10 + -3 != pfVar9) {
      *pfVar9 = pfVar10[-3];
      pfVar9[1] = pfVar10[-2];
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + -1);
    }
    param_4 = 0;
    pfVar10[-3] = fVar29;
    pfVar10[-2] = fVar28;
    *(byte *)(pfVar10 + -1) = bVar6;
  }
  lVar19 = 0;
  fVar29 = *pfVar9;
  fVar28 = pfVar9[1];
  bVar6 = *(byte *)(pfVar9 + 2);
  do {
    fVar30 = *(float *)((long)pfVar9 + lVar19 + 0xc);
    uVar23 = 0xffffff81;
    uVar17 = 0;
    if (fVar30 != fVar29) {
      uVar17 = uVar23;
    }
    if (fVar29 < fVar30) {
      uVar17 = 1;
    }
    if (fVar30 < fVar29) {
      uVar17 = 0xffffffff;
    }
    if (uVar17 == 0) {
      fVar31 = *(float *)((long)pfVar9 + lVar19 + 0x10);
      uVar17 = 1;
      if ((int)fVar31 < (int)fVar28) {
        uVar17 = 0xffffffff;
      }
      if ((fVar31 == fVar28) &&
         (bVar7 = *(byte *)((long)pfVar9 + lVar19 + 0x14), uVar17 = (uint)(bVar6 < bVar7),
         bVar7 < bVar6)) {
        uVar17 = 0xffffffff;
      }
    }
    lVar19 = lVar19 + 0xc;
  } while ((uVar17 & 0xff) == 1);
  pfVar11 = (float *)((long)pfVar9 + lVar19);
  pfVar10 = pfStack_c8;
  if (lVar19 == 0xc) {
    do {
      pfVar12 = pfVar10;
      if (pfVar10 <= pfVar11) break;
      pfVar12 = pfVar10 + -3;
      fVar31 = *pfVar12;
      uVar17 = 0;
      if (fVar31 != fVar29) {
        uVar17 = uVar23;
      }
      if (fVar29 < fVar31) {
        uVar17 = 1;
      }
      if (fVar31 < fVar29) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 == 0) {
        uVar17 = 1;
        if ((int)pfVar10[-2] < (int)fVar28) {
          uVar17 = uVar21;
        }
        if ((pfVar10[-2] == fVar28) &&
           (uVar17 = (uint)(bVar6 < *(byte *)(pfVar10 + -1)), *(byte *)(pfVar10 + -1) < bVar6)) {
          uVar17 = 0xffffffff;
        }
      }
      pfVar10 = pfVar12;
    } while ((uVar17 & 0xff) != 1);
  }
  else {
    do {
      pfVar12 = pfVar10 + -3;
      fVar31 = *pfVar12;
      uVar17 = 0;
      if (fVar31 != fVar29) {
        uVar17 = uVar23;
      }
      if (fVar29 < fVar31) {
        uVar17 = 1;
      }
      if (fVar31 < fVar29) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 == 0) {
        uVar17 = 1;
        if ((int)pfVar10[-2] < (int)fVar28) {
          uVar17 = uVar21;
        }
        if ((pfVar10[-2] == fVar28) &&
           (uVar17 = (uint)(bVar6 < *(byte *)(pfVar10 + -1)), *(byte *)(pfVar10 + -1) < bVar6)) {
          uVar17 = 0xffffffff;
        }
      }
      pfVar10 = pfVar12;
    } while ((uVar17 & 0xff) != 1);
  }
  pfVar10 = pfVar11;
  if (pfVar11 < pfVar12) {
    fVar31 = *pfVar12;
    pfVar14 = pfVar12;
    do {
      *pfVar10 = fVar31;
      *pfVar14 = fVar30;
      fVar30 = pfVar10[1];
      pfVar10[1] = pfVar14[1];
      pfVar14[1] = fVar30;
      uVar5 = *(undefined1 *)(pfVar10 + 2);
      *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar14 + 2);
      *(undefined1 *)(pfVar14 + 2) = uVar5;
      pfVar26 = pfVar10;
      do {
        pfVar10 = pfVar26 + 3;
        fVar30 = *pfVar10;
        uVar21 = 0;
        if (fVar30 != fVar29) {
          uVar21 = uVar23;
        }
        if (fVar29 < fVar30) {
          uVar21 = 1;
        }
        if (fVar30 < fVar29) {
          uVar21 = 0xffffffff;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
          if ((int)pfVar26[4] < (int)fVar28) {
            uVar21 = 0xffffffff;
          }
          if ((pfVar26[4] == fVar28) &&
             (uVar21 = (uint)(bVar6 < *(byte *)(pfVar26 + 5)), *(byte *)(pfVar26 + 5) < bVar6)) {
            uVar21 = 0xffffffff;
          }
        }
        pfVar20 = pfVar14;
        pfVar26 = pfVar10;
      } while ((uVar21 & 0xff) == 1);
      do {
        pfVar14 = pfVar20 + -3;
        fVar31 = *pfVar14;
        uVar21 = 0;
        if (fVar31 != fVar29) {
          uVar21 = uVar15;
        }
        if (fVar29 < fVar31) {
          uVar21 = 1;
        }
        if (fVar31 < fVar29) {
          uVar21 = 0xffffffff;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
          if ((int)pfVar20[-2] < (int)fVar28) {
            uVar21 = 0xffffffff;
          }
          if ((pfVar20[-2] == fVar28) &&
             (uVar21 = (uint)(bVar6 < *(byte *)(pfVar20 + -1)), *(byte *)(pfVar20 + -1) < bVar6)) {
            uVar21 = 0xffffffff;
          }
        }
        pfVar20 = pfVar14;
      } while ((uVar21 & 0xff) != 1);
    } while (pfVar10 < pfVar14);
  }
  pfVar14 = pfVar10 + -3;
  if (pfVar14 != pfVar9) {
    *pfVar9 = pfVar10[-3];
    pfVar9[1] = pfVar10[-2];
    *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + -1);
  }
  pfVar10[-3] = fVar29;
  pfVar10[-2] = fVar28;
  *(byte *)(pfVar10 + -1) = bVar6;
  if (pfVar12 <= pfVar11) {
    pfVar11 = pfVar9;
    FUN_109576848(pfVar9,pfVar14);
    pfVar12 = pfVar10;
    FUN_109576848(pfVar10,pfStack_c8);
    if ((int)pfVar12 != 0) goto LAB_109575e3c;
    if (((ulong)pfVar11 & 1) != 0) goto LAB_109575854;
  }
  FUN_109575800(pfVar9,pfVar14,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_109575854;
LAB_109575f5c:
  pfVar11 = pfVar10;
  pfVar10 = pfVar11;
  FUN_109576a70(pfVar11,pfVar13);
  if (((uint)pfVar10 & 0xff) == 1) {
    fVar29 = *pfVar11;
    fVar28 = pfVar11[1];
    bVar6 = *(byte *)(pfVar11 + 2);
    fVar30 = *pfVar13;
    lVar8 = lVar19;
    do {
      lVar18 = lVar8;
      *(float *)((long)pfVar9 + lVar18 + 0xc) = fVar30;
      *(undefined4 *)((long)pfVar9 + lVar18 + 0x10) = *(undefined4 *)((long)pfVar9 + lVar18 + 4);
      *(undefined *)((long)pfVar9 + lVar18 + 0x14) = *(undefined *)((long)pfVar9 + lVar18 + 8);
      pfVar10 = pfVar9;
      if (lVar18 == 0) goto LAB_109576008;
      fVar30 = *(float *)((long)pfVar9 + lVar18 + -0xc);
      uVar15 = 0;
      if (fVar29 != fVar30) {
        uVar15 = 0xffffff81;
      }
      if (fVar30 < fVar29) {
        uVar15 = 1;
      }
      if (fVar29 < fVar30) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0) {
        fVar31 = *(float *)((long)pfVar9 + lVar18 + -8);
        uVar15 = 1;
        if ((int)fVar28 < (int)fVar31) {
          uVar15 = 0xffffffff;
        }
        if ((fVar28 == fVar31) &&
           (bVar7 = *(byte *)((long)pfVar9 + lVar18 + -4), uVar15 = (uint)(bVar7 < bVar6),
           bVar6 < bVar7)) {
          uVar15 = 0xffffffff;
        }
      }
      lVar8 = lVar18 + -0xc;
    } while ((uVar15 & 0xff) == 1);
    pfVar10 = (float *)((long)pfVar9 + lVar18);
LAB_109576008:
    *pfVar10 = fVar29;
    pfVar10[1] = fVar28;
    *(byte *)(pfVar10 + 2) = bVar6;
  }
  lVar19 = lVar19 + 0xc;
  pfVar10 = pfVar11 + 3;
  pfVar13 = pfVar11;
  if (pfVar11 + 3 == pfStack_c8) {
    return;
  }
  goto LAB_109575f5c;
LAB_10957603c:
  do {
    if ((long)uVar16 <= (long)uVar24) {
      uVar3 = uVar16 << 1 | 1;
      pfVar13 = pfVar9 + uVar3 * 3;
      uVar1 = uVar16 * 2 + 2;
      uVar22 = uVar3;
      pfVar10 = pfVar13;
      if ((long)uVar1 < (long)uVar25) {
        pfVar11 = pfVar13;
        FUN_109576a70(pfVar13,pfVar13 + 3);
        uVar22 = uVar1;
        pfVar10 = pfVar13 + 3;
        if (((uint)pfVar11 & 0xff) != 1) {
          uVar22 = uVar3;
          pfVar10 = pfVar13;
        }
      }
      pfVar11 = pfVar9 + uVar16 * 3;
      pfVar13 = pfVar10;
      FUN_109576a70(pfVar10,pfVar11);
      if (((uint)pfVar13 & 0xff) != 1) {
        fVar30 = *pfVar11;
        fVar28 = pfVar11[1];
        bVar6 = *(byte *)(pfVar11 + 2);
        fVar29 = *pfVar10;
        do {
          pfVar13 = pfVar10;
          *pfVar11 = fVar29;
          pfVar11[1] = pfVar13[1];
          *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfVar13 + 2);
          if ((long)uVar24 < (long)uVar22) break;
          uVar3 = uVar22 << 1 | 1;
          pfVar11 = pfVar9 + uVar3 * 3;
          uVar1 = uVar22 * 2 + 2;
          uVar22 = uVar3;
          pfVar10 = pfVar11;
          if ((long)uVar1 < (long)uVar25) {
            pfVar12 = pfVar11;
            FUN_109576a70(pfVar11,pfVar11 + 3);
            uVar22 = uVar1;
            pfVar10 = pfVar11 + 3;
            if (((uint)pfVar12 & 0xff) != 1) {
              uVar22 = uVar3;
              pfVar10 = pfVar11;
            }
          }
          fVar29 = *pfVar10;
          uVar15 = 0;
          if (fVar29 != fVar30) {
            uVar15 = 0xffffff81;
          }
          if (fVar30 < fVar29) {
            uVar15 = 1;
          }
          if (fVar29 < fVar30) {
            uVar15 = 0xffffffff;
          }
          if (uVar15 == 0) {
            uVar15 = 1;
            if ((int)pfVar10[1] < (int)fVar28) {
              uVar15 = 0xffffffff;
            }
            if ((pfVar10[1] == fVar28) &&
               (uVar15 = (uint)(bVar6 < *(byte *)(pfVar10 + 2)), *(byte *)(pfVar10 + 2) < bVar6)) {
              uVar15 = 0xffffffff;
            }
          }
          pfVar11 = pfVar13;
        } while ((uVar15 & 0xff) != 1);
        *pfVar13 = fVar30;
        pfVar13[1] = fVar28;
        *(byte *)(pfVar13 + 2) = bVar6;
      }
    }
    bVar4 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar4);
  lVar19 = (uVar27 >> 2) * -0x5555555555555555;
  do {
    uVar25 = 0;
    fVar29 = *pfVar9;
    fVar28 = pfVar9[1];
    uVar5 = *(undefined1 *)(pfVar9 + 2);
    pfVar10 = pfVar9;
    do {
      pfVar13 = pfVar10 + uVar25 * 3 + 3;
      uVar16 = uVar25 << 1 | 1;
      uVar27 = uVar25 * 2 + 2;
      uVar24 = uVar16;
      pfVar11 = pfVar13;
      if ((long)uVar27 < lVar19) {
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar10 + uVar25 * 3 + 6);
        uVar24 = uVar27;
        pfVar11 = pfVar10 + uVar25 * 3 + 6;
        if (((uint)pfVar12 & 0xff) != 1) {
          uVar24 = uVar16;
          pfVar11 = pfVar13;
        }
      }
      uVar25 = uVar24;
      *pfVar10 = *pfVar11;
      pfVar10[1] = pfVar11[1];
      *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar11 + 2);
      pfVar10 = pfVar11;
    } while ((long)uVar25 <= (lVar19 + -2) / 2);
    if (pfVar11 == pfStack_c8 + -3) {
      *pfVar11 = fVar29;
      pfVar11[1] = fVar28;
      *(undefined1 *)(pfVar11 + 2) = uVar5;
    }
    else {
      *pfVar11 = pfStack_c8[-3];
      pfVar11[1] = pfStack_c8[-2];
      *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfStack_c8 + -1);
      pfStack_c8[-3] = fVar29;
      pfStack_c8[-2] = fVar28;
      *(undefined1 *)(pfStack_c8 + -1) = uVar5;
      puVar2 = (undefined *)((long)pfVar11 + (0xc - (long)pfVar9));
      if (0xc < (long)puVar2) {
        uVar25 = ((ulong)puVar2 >> 2) * -0x5555555555555555 - 2 >> 1;
        pfVar13 = pfVar9 + uVar25 * 3;
        pfVar10 = pfVar13;
        FUN_109576a70(pfVar13,pfVar11);
        if (((uint)pfVar10 & 0xff) == 1) {
          fVar29 = *pfVar11;
          fVar28 = pfVar11[1];
          bVar6 = *(byte *)(pfVar11 + 2);
          fVar30 = *pfVar13;
          do {
            pfVar10 = pfVar13;
            *pfVar11 = fVar30;
            pfVar11[1] = pfVar10[1];
            *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfVar10 + 2);
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1 >> 1;
            pfVar13 = pfVar9 + uVar25 * 3;
            fVar30 = *pfVar13;
            uVar15 = 0;
            if (fVar30 != fVar29) {
              uVar15 = 0xffffff81;
            }
            if (fVar29 < fVar30) {
              uVar15 = 1;
            }
            if (fVar30 < fVar29) {
              uVar15 = 0xffffffff;
            }
            if (uVar15 == 0) {
              uVar15 = 1;
              if ((int)pfVar13[1] < (int)fVar28) {
                uVar15 = 0xffffffff;
              }
              if ((pfVar13[1] == fVar28) &&
                 (uVar15 = (uint)(bVar6 < *(byte *)(pfVar13 + 2)), *(byte *)(pfVar13 + 2) < bVar6))
              {
                uVar15 = 0xffffffff;
              }
            }
            pfVar11 = pfVar10;
          } while ((uVar15 & 0xff) == 1);
          *pfVar10 = fVar29;
          pfVar10[1] = fVar28;
          *(byte *)(pfVar10 + 2) = bVar6;
        }
      }
    }
    bVar4 = lVar19 < 3;
    lVar19 = lVar19 + -1;
    pfStack_c8 = pfStack_c8 + -3;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_109575e3c:
  pfStack_c8 = pfVar14;
  if (((ulong)pfVar11 & 1) != 0) {
    return;
  }
  goto LAB_10957583c;
}



/* Entry: 1095757a8; end: 1095757bb;  */

void FUN_1095757a8(undefined8 param_1,float *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float *pfStack_a8;
  
  pfVar9 = (float *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (pfVar9 < (float *)0x1555555555555556) {
    __Znwm((long)pfVar9 * 0xc);
    return;
  }
  func_0x000104c4f740();
  pfStack_a8 = param_2;
LAB_10957583c:
  pfVar13 = pfStack_a8 + -3;
  pfVar10 = pfVar9;
LAB_109575854:
  while( true ) {
    pfVar9 = pfVar10;
    uVar27 = (long)pfStack_a8 - (long)pfVar9;
    uVar25 = ((long)uVar27 >> 2) * -0x5555555555555555;
    if (uVar25 - 2 == 0 || (long)uVar25 < 2) {
      if (uVar25 < 2) {
        return;
      }
      if (uVar25 == 2) {
        FUN_109576a70(pfVar13,pfVar9);
        if (((uint)pfVar13 & 0xff) != 1) {
          return;
        }
        fVar28 = *pfVar9;
        *pfVar9 = pfStack_a8[-3];
        pfStack_a8[-3] = fVar28;
        fVar28 = pfVar9[1];
        pfVar9[1] = pfStack_a8[-2];
        pfStack_a8[-2] = fVar28;
        uVar5 = *(undefined1 *)(pfVar9 + 2);
        *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfStack_a8 + -1);
        *(undefined1 *)(pfStack_a8 + -1) = uVar5;
        return;
      }
    }
    else {
      if (uVar25 == 3) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar10;
        FUN_109576a70(pfVar10,pfVar9);
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar10);
        uVar15 = (uint)pfVar12 & 0xff;
        if (((uint)pfVar11 & 0xff) == 1) {
          pfVar11 = pfVar9 + 2;
          fVar28 = *pfVar9;
          if (uVar15 == 1) {
            *pfVar9 = *pfVar13;
            *pfVar13 = fVar28;
            fVar28 = pfVar9[1];
            pfVar9[1] = pfStack_a8[-2];
            pfStack_a8[-2] = fVar28;
          }
          else {
            *pfVar9 = *pfVar10;
            *pfVar10 = fVar28;
            fVar29 = pfVar9[1];
            pfVar9[1] = pfVar9[4];
            pfVar9[4] = fVar29;
            pfVar11 = pfVar9 + 5;
            uVar5 = *(undefined1 *)(pfVar9 + 2);
            *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)pfVar11;
            *(undefined1 *)pfVar11 = uVar5;
            pfVar12 = pfVar13;
            FUN_109576a70(pfVar13,pfVar10);
            if (((uint)pfVar12 & 0xff) != 1) {
              return;
            }
            *pfVar10 = *pfVar13;
            *pfVar13 = fVar28;
            pfVar9[4] = pfStack_a8[-2];
            pfStack_a8[-2] = fVar29;
          }
          pfVar13 = pfStack_a8 + -1;
        }
        else {
          if (uVar15 != 1) {
            return;
          }
          fVar28 = *pfVar10;
          *pfVar10 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[4];
          pfVar9[4] = pfStack_a8[-2];
          pfStack_a8[-2] = fVar28;
          pfVar13 = pfVar9 + 5;
          uVar5 = *(undefined1 *)pfVar13;
          *(undefined1 *)pfVar13 = *(undefined1 *)(pfStack_a8 + -1);
          *(undefined1 *)(pfStack_a8 + -1) = uVar5;
          pfVar11 = pfVar10;
          FUN_109576a70(pfVar10,pfVar9);
          if (((uint)pfVar11 & 0xff) != 1) {
            return;
          }
          fVar28 = *pfVar9;
          *pfVar9 = *pfVar10;
          *pfVar10 = fVar28;
          fVar28 = pfVar9[1];
          pfVar9[1] = pfVar9[4];
          pfVar9[4] = fVar28;
          pfVar11 = pfVar9 + 2;
        }
        uVar5 = *(undefined1 *)pfVar11;
        *(undefined1 *)pfVar11 = *(undefined1 *)pfVar13;
        *(undefined1 *)pfVar13 = uVar5;
        return;
      }
      if (uVar25 == 4) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar9 + 6;
        FUN_109576458();
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar11);
        if (((uint)pfVar12 & 0xff) == 1) {
          fVar28 = *pfVar11;
          *pfVar11 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[7];
          pfVar9[7] = pfStack_a8[-2];
          pfStack_a8[-2] = fVar28;
          uVar5 = *(undefined1 *)(pfVar9 + 8);
          *(undefined1 *)(pfVar9 + 8) = *(undefined1 *)(pfStack_a8 + -1);
          *(undefined1 *)(pfStack_a8 + -1) = uVar5;
          pfVar13 = pfVar11;
          FUN_109576a70(pfVar11,pfVar10);
          if (((uint)pfVar13 & 0xff) == 1) {
            fVar28 = *pfVar10;
            *pfVar10 = *pfVar11;
            *pfVar11 = fVar28;
            fVar28 = pfVar9[4];
            pfVar9[4] = pfVar9[7];
            pfVar9[7] = fVar28;
            uVar5 = *(undefined1 *)(pfVar9 + 5);
            *(undefined1 *)(pfVar9 + 5) = *(undefined1 *)(pfVar9 + 8);
            *(undefined1 *)(pfVar9 + 8) = uVar5;
            pfVar13 = pfVar10;
            FUN_109576a70(pfVar10,pfVar9);
            if (((uint)pfVar13 & 0xff) == 1) {
              fVar28 = *pfVar9;
              *pfVar9 = *pfVar10;
              *pfVar10 = fVar28;
              fVar28 = pfVar9[1];
              pfVar9[1] = pfVar9[4];
              pfVar9[4] = fVar28;
              uVar5 = *(undefined1 *)(pfVar9 + 2);
              *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar9 + 5);
              *(undefined1 *)(pfVar9 + 5) = uVar5;
            }
          }
        }
        return;
      }
      if (uVar25 == 5) {
        pfVar10 = pfVar9 + 3;
        pfVar11 = pfVar9 + 6;
        pfVar12 = pfVar9 + 9;
        FUN_1095765dc();
        pfVar14 = pfVar13;
        FUN_109576a70(pfVar13,pfVar12);
        if (((uint)pfVar14 & 0xff) == 1) {
          fVar28 = *pfVar12;
          *pfVar12 = *pfVar13;
          *pfVar13 = fVar28;
          fVar28 = pfVar9[10];
          pfVar9[10] = pfStack_a8[-2];
          pfStack_a8[-2] = fVar28;
          uVar5 = *(undefined1 *)(pfVar9 + 0xb);
          *(undefined1 *)(pfVar9 + 0xb) = *(undefined1 *)(pfStack_a8 + -1);
          *(undefined1 *)(pfStack_a8 + -1) = uVar5;
          pfVar13 = pfVar12;
          FUN_109576a70(pfVar12,pfVar11);
          if (((uint)pfVar13 & 0xff) == 1) {
            fVar28 = *pfVar11;
            *pfVar11 = *pfVar12;
            *pfVar12 = fVar28;
            fVar28 = pfVar9[7];
            pfVar9[7] = pfVar9[10];
            pfVar9[10] = fVar28;
            uVar5 = *(undefined1 *)(pfVar9 + 8);
            *(undefined1 *)(pfVar9 + 8) = *(undefined1 *)(pfVar9 + 0xb);
            *(undefined1 *)(pfVar9 + 0xb) = uVar5;
            pfVar13 = pfVar11;
            FUN_109576a70(pfVar11,pfVar10);
            if (((uint)pfVar13 & 0xff) == 1) {
              fVar28 = *pfVar10;
              *pfVar10 = *pfVar11;
              *pfVar11 = fVar28;
              fVar28 = pfVar9[4];
              pfVar9[4] = pfVar9[7];
              pfVar9[7] = fVar28;
              uVar5 = *(undefined1 *)(pfVar9 + 5);
              *(undefined1 *)(pfVar9 + 5) = *(undefined1 *)(pfVar9 + 8);
              *(undefined1 *)(pfVar9 + 8) = uVar5;
              pfVar13 = pfVar10;
              FUN_109576a70(pfVar10,pfVar9);
              if (((uint)pfVar13 & 0xff) == 1) {
                fVar28 = *pfVar9;
                *pfVar9 = *pfVar10;
                *pfVar10 = fVar28;
                fVar28 = pfVar9[1];
                pfVar9[1] = pfVar9[4];
                pfVar9[4] = fVar28;
                uVar5 = *(undefined1 *)(pfVar9 + 2);
                *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar9 + 5);
                *(undefined1 *)(pfVar9 + 5) = uVar5;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar27 < 0x120) {
      pfVar10 = pfVar9 + 3;
      if ((param_4 & 1) == 0) {
        if (pfVar9 == pfStack_a8 || pfVar10 == pfStack_a8) {
          return;
        }
        pfVar13 = pfVar9 + 5;
        do {
          pfVar11 = pfVar10;
          pfVar10 = pfVar11;
          FUN_109576a70(pfVar11,pfVar9);
          if (((uint)pfVar10 & 0xff) == 1) {
            fVar29 = *pfVar11;
            fVar28 = pfVar11[1];
            bVar6 = *(byte *)(pfVar11 + 2);
            fVar30 = *pfVar9;
            pfVar9 = pfVar13;
            do {
              pfVar10 = pfVar9;
              pfVar10[-2] = fVar30;
              pfVar10[-1] = pfVar10[-4];
              pfVar9 = pfVar10 + -3;
              *(byte *)pfVar10 = *(byte *)pfVar9;
              fVar30 = pfVar10[-8];
              uVar15 = 0;
              if (fVar29 != fVar30) {
                uVar15 = 0xffffff81;
              }
              if (fVar30 < fVar29) {
                uVar15 = 1;
              }
              if (fVar29 < fVar30) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 == 0) {
                uVar15 = 1;
                if ((int)fVar28 < (int)pfVar10[-7]) {
                  uVar15 = 0xffffffff;
                }
                if ((fVar28 == pfVar10[-7]) &&
                   (uVar15 = (uint)(*(byte *)(pfVar10 + -6) < bVar6),
                   bVar6 < *(byte *)(pfVar10 + -6))) {
                  uVar15 = 0xffffffff;
                }
              }
            } while ((uVar15 & 0xff) == 1);
            pfVar10[-5] = fVar29;
            pfVar10[-4] = fVar28;
            *(byte *)pfVar9 = bVar6;
          }
          pfVar13 = pfVar13 + 3;
          pfVar10 = pfVar11 + 3;
          pfVar9 = pfVar11;
        } while (pfVar11 + 3 != pfStack_a8);
        return;
      }
      if (pfVar9 == pfStack_a8 || pfVar10 == pfStack_a8) {
        return;
      }
      lVar19 = 0;
      pfVar13 = pfVar9;
      goto LAB_109575f5c;
    }
    if (param_3 == 0) {
      if (pfVar9 == pfStack_a8) {
        return;
      }
      uVar24 = uVar25 - 2 >> 1;
      uVar16 = uVar24;
      goto LAB_10957603c;
    }
    pfVar10 = pfVar9 + (uVar25 >> 1) * 3;
    if (uVar27 < 0x601) {
      FUN_109576458(pfVar10,pfVar9,pfVar13);
    }
    else {
      FUN_109576458(pfVar9,pfVar10,pfVar13);
      FUN_109576458(pfVar9 + 3,pfVar10 + -3,pfStack_a8 + -6);
      FUN_109576458(pfVar9 + 6,pfVar10 + 3,pfStack_a8 + -9);
      FUN_109576458(pfVar10 + -3,pfVar10,pfVar10 + 3);
      fVar28 = *pfVar9;
      *pfVar9 = *pfVar10;
      *pfVar10 = fVar28;
      fVar28 = pfVar9[1];
      pfVar9[1] = pfVar10[1];
      pfVar10[1] = fVar28;
      uVar5 = *(undefined1 *)(pfVar9 + 2);
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + 2);
      *(undefined1 *)(pfVar10 + 2) = uVar5;
    }
    param_3 = param_3 + -1;
    uVar15 = 0xffffff81;
    uVar21 = 0xffffffff;
    if ((param_4 & 1) != 0) break;
    pfVar10 = pfVar9 + -3;
    FUN_109576a70(pfVar10,pfVar9);
    if (((uint)pfVar10 & 0xff) == 1) break;
    fVar29 = *pfVar9;
    fVar28 = pfVar9[1];
    bVar6 = *(byte *)(pfVar9 + 2);
    fVar30 = *pfVar13;
    uVar17 = 0;
    if (fVar29 != fVar30) {
      uVar17 = uVar15;
    }
    if (fVar30 < fVar29) {
      uVar17 = 1;
    }
    if (fVar29 < fVar30) {
      uVar17 = 0xffffffff;
    }
    if (uVar17 == 0) {
      uVar17 = 1;
      if ((int)fVar28 < (int)pfStack_a8[-2]) {
        uVar17 = uVar21;
      }
      if ((fVar28 == pfStack_a8[-2]) &&
         (uVar17 = (uint)(*(byte *)(pfStack_a8 + -1) < bVar6), bVar6 < *(byte *)(pfStack_a8 + -1)))
      {
        uVar17 = 0xffffffff;
      }
    }
    pfVar11 = pfVar9;
    if ((uVar17 & 0xff) == 1) {
      do {
        pfVar10 = pfVar11 + 3;
        fVar30 = *pfVar10;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar11[4]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar11[4]) &&
             (uVar17 = (uint)(*(byte *)(pfVar11 + 5) < bVar6), bVar6 < *(byte *)(pfVar11 + 5))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar11 = pfVar10;
      } while ((uVar17 & 0xff) != 1);
    }
    else {
      do {
        pfVar10 = pfVar11 + 3;
        if (pfStack_a8 <= pfVar10) break;
        fVar30 = *pfVar10;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar11[4]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar11[4]) &&
             (uVar17 = (uint)(*(byte *)(pfVar11 + 5) < bVar6), bVar6 < *(byte *)(pfVar11 + 5))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar11 = pfVar10;
      } while ((uVar17 & 0xff) != 1);
    }
    pfVar11 = pfStack_a8;
    pfVar12 = pfStack_a8;
    if (pfVar10 < pfStack_a8) {
      do {
        pfVar11 = pfVar12 + -3;
        fVar30 = *pfVar11;
        uVar17 = 0;
        if (fVar29 != fVar30) {
          uVar17 = uVar15;
        }
        if (fVar30 < fVar29) {
          uVar17 = 1;
        }
        if (fVar29 < fVar30) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
          if ((int)fVar28 < (int)pfVar12[-2]) {
            uVar17 = uVar21;
          }
          if ((fVar28 == pfVar12[-2]) &&
             (uVar17 = (uint)(*(byte *)(pfVar12 + -1) < bVar6), bVar6 < *(byte *)(pfVar12 + -1))) {
            uVar17 = 0xffffffff;
          }
        }
        pfVar12 = pfVar11;
      } while ((uVar17 & 0xff) == 1);
    }
    if (pfVar10 < pfVar11) {
      fVar30 = *pfVar10;
      fVar31 = *pfVar11;
      do {
        *pfVar10 = fVar31;
        *pfVar11 = fVar30;
        fVar30 = pfVar10[1];
        pfVar10[1] = pfVar11[1];
        pfVar11[1] = fVar30;
        uVar5 = *(undefined1 *)(pfVar10 + 2);
        *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar11 + 2);
        *(undefined1 *)(pfVar11 + 2) = uVar5;
        pfVar12 = pfVar10;
        do {
          pfVar10 = pfVar12 + 3;
          fVar30 = *pfVar10;
          uVar17 = 0;
          if (fVar29 != fVar30) {
            uVar17 = uVar15;
          }
          if (fVar30 < fVar29) {
            uVar17 = 1;
          }
          if (fVar29 < fVar30) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 == 0) {
            uVar17 = 1;
            if ((int)fVar28 < (int)pfVar12[4]) {
              uVar17 = uVar21;
            }
            if ((fVar28 == pfVar12[4]) &&
               (uVar17 = (uint)(*(byte *)(pfVar12 + 5) < bVar6), bVar6 < *(byte *)(pfVar12 + 5))) {
              uVar17 = 0xffffffff;
            }
          }
          pfVar14 = pfVar11;
          pfVar12 = pfVar10;
        } while ((uVar17 & 0xff) != 1);
        do {
          pfVar11 = pfVar14 + -3;
          fVar31 = *pfVar11;
          uVar17 = 0;
          if (fVar29 != fVar31) {
            uVar17 = uVar15;
          }
          if (fVar31 < fVar29) {
            uVar17 = 1;
          }
          if (fVar29 < fVar31) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 == 0) {
            uVar17 = 1;
            if ((int)fVar28 < (int)pfVar14[-2]) {
              uVar17 = uVar21;
            }
            if ((fVar28 == pfVar14[-2]) &&
               (uVar17 = (uint)(*(byte *)(pfVar14 + -1) < bVar6), bVar6 < *(byte *)(pfVar14 + -1)))
            {
              uVar17 = 0xffffffff;
            }
          }
          pfVar14 = pfVar11;
        } while ((uVar17 & 0xff) == 1);
      } while (pfVar10 < pfVar11);
    }
    if (pfVar10 + -3 != pfVar9) {
      *pfVar9 = pfVar10[-3];
      pfVar9[1] = pfVar10[-2];
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + -1);
    }
    param_4 = 0;
    pfVar10[-3] = fVar29;
    pfVar10[-2] = fVar28;
    *(byte *)(pfVar10 + -1) = bVar6;
  }
  lVar19 = 0;
  fVar29 = *pfVar9;
  fVar28 = pfVar9[1];
  bVar6 = *(byte *)(pfVar9 + 2);
  do {
    fVar30 = *(float *)((long)pfVar9 + lVar19 + 0xc);
    uVar23 = 0xffffff81;
    uVar17 = 0;
    if (fVar30 != fVar29) {
      uVar17 = uVar23;
    }
    if (fVar29 < fVar30) {
      uVar17 = 1;
    }
    if (fVar30 < fVar29) {
      uVar17 = 0xffffffff;
    }
    if (uVar17 == 0) {
      fVar31 = *(float *)((long)pfVar9 + lVar19 + 0x10);
      uVar17 = 1;
      if ((int)fVar31 < (int)fVar28) {
        uVar17 = 0xffffffff;
      }
      if ((fVar31 == fVar28) &&
         (bVar7 = *(byte *)((long)pfVar9 + lVar19 + 0x14), uVar17 = (uint)(bVar6 < bVar7),
         bVar7 < bVar6)) {
        uVar17 = 0xffffffff;
      }
    }
    lVar19 = lVar19 + 0xc;
  } while ((uVar17 & 0xff) == 1);
  pfVar11 = (float *)((long)pfVar9 + lVar19);
  pfVar10 = pfStack_a8;
  if (lVar19 == 0xc) {
    do {
      pfVar12 = pfVar10;
      if (pfVar10 <= pfVar11) break;
      pfVar12 = pfVar10 + -3;
      fVar31 = *pfVar12;
      uVar17 = 0;
      if (fVar31 != fVar29) {
        uVar17 = uVar23;
      }
      if (fVar29 < fVar31) {
        uVar17 = 1;
      }
      if (fVar31 < fVar29) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 == 0) {
        uVar17 = 1;
        if ((int)pfVar10[-2] < (int)fVar28) {
          uVar17 = uVar21;
        }
        if ((pfVar10[-2] == fVar28) &&
           (uVar17 = (uint)(bVar6 < *(byte *)(pfVar10 + -1)), *(byte *)(pfVar10 + -1) < bVar6)) {
          uVar17 = 0xffffffff;
        }
      }
      pfVar10 = pfVar12;
    } while ((uVar17 & 0xff) != 1);
  }
  else {
    do {
      pfVar12 = pfVar10 + -3;
      fVar31 = *pfVar12;
      uVar17 = 0;
      if (fVar31 != fVar29) {
        uVar17 = uVar23;
      }
      if (fVar29 < fVar31) {
        uVar17 = 1;
      }
      if (fVar31 < fVar29) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 == 0) {
        uVar17 = 1;
        if ((int)pfVar10[-2] < (int)fVar28) {
          uVar17 = uVar21;
        }
        if ((pfVar10[-2] == fVar28) &&
           (uVar17 = (uint)(bVar6 < *(byte *)(pfVar10 + -1)), *(byte *)(pfVar10 + -1) < bVar6)) {
          uVar17 = 0xffffffff;
        }
      }
      pfVar10 = pfVar12;
    } while ((uVar17 & 0xff) != 1);
  }
  pfVar10 = pfVar11;
  if (pfVar11 < pfVar12) {
    fVar31 = *pfVar12;
    pfVar14 = pfVar12;
    do {
      *pfVar10 = fVar31;
      *pfVar14 = fVar30;
      fVar30 = pfVar10[1];
      pfVar10[1] = pfVar14[1];
      pfVar14[1] = fVar30;
      uVar5 = *(undefined1 *)(pfVar10 + 2);
      *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar14 + 2);
      *(undefined1 *)(pfVar14 + 2) = uVar5;
      pfVar26 = pfVar10;
      do {
        pfVar10 = pfVar26 + 3;
        fVar30 = *pfVar10;
        uVar21 = 0;
        if (fVar30 != fVar29) {
          uVar21 = uVar23;
        }
        if (fVar29 < fVar30) {
          uVar21 = 1;
        }
        if (fVar30 < fVar29) {
          uVar21 = 0xffffffff;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
          if ((int)pfVar26[4] < (int)fVar28) {
            uVar21 = 0xffffffff;
          }
          if ((pfVar26[4] == fVar28) &&
             (uVar21 = (uint)(bVar6 < *(byte *)(pfVar26 + 5)), *(byte *)(pfVar26 + 5) < bVar6)) {
            uVar21 = 0xffffffff;
          }
        }
        pfVar20 = pfVar14;
        pfVar26 = pfVar10;
      } while ((uVar21 & 0xff) == 1);
      do {
        pfVar14 = pfVar20 + -3;
        fVar31 = *pfVar14;
        uVar21 = 0;
        if (fVar31 != fVar29) {
          uVar21 = uVar15;
        }
        if (fVar29 < fVar31) {
          uVar21 = 1;
        }
        if (fVar31 < fVar29) {
          uVar21 = 0xffffffff;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
          if ((int)pfVar20[-2] < (int)fVar28) {
            uVar21 = 0xffffffff;
          }
          if ((pfVar20[-2] == fVar28) &&
             (uVar21 = (uint)(bVar6 < *(byte *)(pfVar20 + -1)), *(byte *)(pfVar20 + -1) < bVar6)) {
            uVar21 = 0xffffffff;
          }
        }
        pfVar20 = pfVar14;
      } while ((uVar21 & 0xff) != 1);
    } while (pfVar10 < pfVar14);
  }
  pfVar14 = pfVar10 + -3;
  if (pfVar14 != pfVar9) {
    *pfVar9 = pfVar10[-3];
    pfVar9[1] = pfVar10[-2];
    *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar10 + -1);
  }
  pfVar10[-3] = fVar29;
  pfVar10[-2] = fVar28;
  *(byte *)(pfVar10 + -1) = bVar6;
  if (pfVar12 <= pfVar11) {
    pfVar11 = pfVar9;
    FUN_109576848(pfVar9,pfVar14);
    pfVar12 = pfVar10;
    FUN_109576848(pfVar10,pfStack_a8);
    if ((int)pfVar12 != 0) goto LAB_109575e3c;
    if (((ulong)pfVar11 & 1) != 0) goto LAB_109575854;
  }
  FUN_109575800(pfVar9,pfVar14,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_109575854;
LAB_109575f5c:
  pfVar11 = pfVar10;
  pfVar10 = pfVar11;
  FUN_109576a70(pfVar11,pfVar13);
  if (((uint)pfVar10 & 0xff) == 1) {
    fVar29 = *pfVar11;
    fVar28 = pfVar11[1];
    bVar6 = *(byte *)(pfVar11 + 2);
    fVar30 = *pfVar13;
    lVar8 = lVar19;
    do {
      lVar18 = lVar8;
      *(float *)((long)pfVar9 + lVar18 + 0xc) = fVar30;
      *(undefined4 *)((long)pfVar9 + lVar18 + 0x10) = *(undefined4 *)((long)pfVar9 + lVar18 + 4);
      *(undefined *)((long)pfVar9 + lVar18 + 0x14) = *(undefined *)((long)pfVar9 + lVar18 + 8);
      pfVar10 = pfVar9;
      if (lVar18 == 0) goto LAB_109576008;
      fVar30 = *(float *)((long)pfVar9 + lVar18 + -0xc);
      uVar15 = 0;
      if (fVar29 != fVar30) {
        uVar15 = 0xffffff81;
      }
      if (fVar30 < fVar29) {
        uVar15 = 1;
      }
      if (fVar29 < fVar30) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0) {
        fVar31 = *(float *)((long)pfVar9 + lVar18 + -8);
        uVar15 = 1;
        if ((int)fVar28 < (int)fVar31) {
          uVar15 = 0xffffffff;
        }
        if ((fVar28 == fVar31) &&
           (bVar7 = *(byte *)((long)pfVar9 + lVar18 + -4), uVar15 = (uint)(bVar7 < bVar6),
           bVar6 < bVar7)) {
          uVar15 = 0xffffffff;
        }
      }
      lVar8 = lVar18 + -0xc;
    } while ((uVar15 & 0xff) == 1);
    pfVar10 = (float *)((long)pfVar9 + lVar18);
LAB_109576008:
    *pfVar10 = fVar29;
    pfVar10[1] = fVar28;
    *(byte *)(pfVar10 + 2) = bVar6;
  }
  lVar19 = lVar19 + 0xc;
  pfVar10 = pfVar11 + 3;
  pfVar13 = pfVar11;
  if (pfVar11 + 3 == pfStack_a8) {
    return;
  }
  goto LAB_109575f5c;
LAB_10957603c:
  do {
    if ((long)uVar16 <= (long)uVar24) {
      uVar3 = uVar16 << 1 | 1;
      pfVar13 = pfVar9 + uVar3 * 3;
      uVar1 = uVar16 * 2 + 2;
      uVar22 = uVar3;
      pfVar10 = pfVar13;
      if ((long)uVar1 < (long)uVar25) {
        pfVar11 = pfVar13;
        FUN_109576a70(pfVar13,pfVar13 + 3);
        uVar22 = uVar1;
        pfVar10 = pfVar13 + 3;
        if (((uint)pfVar11 & 0xff) != 1) {
          uVar22 = uVar3;
          pfVar10 = pfVar13;
        }
      }
      pfVar11 = pfVar9 + uVar16 * 3;
      pfVar13 = pfVar10;
      FUN_109576a70(pfVar10,pfVar11);
      if (((uint)pfVar13 & 0xff) != 1) {
        fVar30 = *pfVar11;
        fVar28 = pfVar11[1];
        bVar6 = *(byte *)(pfVar11 + 2);
        fVar29 = *pfVar10;
        do {
          pfVar13 = pfVar10;
          *pfVar11 = fVar29;
          pfVar11[1] = pfVar13[1];
          *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfVar13 + 2);
          if ((long)uVar24 < (long)uVar22) break;
          uVar3 = uVar22 << 1 | 1;
          pfVar11 = pfVar9 + uVar3 * 3;
          uVar1 = uVar22 * 2 + 2;
          uVar22 = uVar3;
          pfVar10 = pfVar11;
          if ((long)uVar1 < (long)uVar25) {
            pfVar12 = pfVar11;
            FUN_109576a70(pfVar11,pfVar11 + 3);
            uVar22 = uVar1;
            pfVar10 = pfVar11 + 3;
            if (((uint)pfVar12 & 0xff) != 1) {
              uVar22 = uVar3;
              pfVar10 = pfVar11;
            }
          }
          fVar29 = *pfVar10;
          uVar15 = 0;
          if (fVar29 != fVar30) {
            uVar15 = 0xffffff81;
          }
          if (fVar30 < fVar29) {
            uVar15 = 1;
          }
          if (fVar29 < fVar30) {
            uVar15 = 0xffffffff;
          }
          if (uVar15 == 0) {
            uVar15 = 1;
            if ((int)pfVar10[1] < (int)fVar28) {
              uVar15 = 0xffffffff;
            }
            if ((pfVar10[1] == fVar28) &&
               (uVar15 = (uint)(bVar6 < *(byte *)(pfVar10 + 2)), *(byte *)(pfVar10 + 2) < bVar6)) {
              uVar15 = 0xffffffff;
            }
          }
          pfVar11 = pfVar13;
        } while ((uVar15 & 0xff) != 1);
        *pfVar13 = fVar30;
        pfVar13[1] = fVar28;
        *(byte *)(pfVar13 + 2) = bVar6;
      }
    }
    bVar4 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar4);
  lVar19 = (uVar27 >> 2) * -0x5555555555555555;
  do {
    uVar25 = 0;
    fVar29 = *pfVar9;
    fVar28 = pfVar9[1];
    uVar5 = *(undefined1 *)(pfVar9 + 2);
    pfVar10 = pfVar9;
    do {
      pfVar13 = pfVar10 + uVar25 * 3 + 3;
      uVar16 = uVar25 << 1 | 1;
      uVar27 = uVar25 * 2 + 2;
      uVar24 = uVar16;
      pfVar11 = pfVar13;
      if ((long)uVar27 < lVar19) {
        pfVar12 = pfVar13;
        FUN_109576a70(pfVar13,pfVar10 + uVar25 * 3 + 6);
        uVar24 = uVar27;
        pfVar11 = pfVar10 + uVar25 * 3 + 6;
        if (((uint)pfVar12 & 0xff) != 1) {
          uVar24 = uVar16;
          pfVar11 = pfVar13;
        }
      }
      uVar25 = uVar24;
      *pfVar10 = *pfVar11;
      pfVar10[1] = pfVar11[1];
      *(undefined1 *)(pfVar10 + 2) = *(undefined1 *)(pfVar11 + 2);
      pfVar10 = pfVar11;
    } while ((long)uVar25 <= (lVar19 + -2) / 2);
    if (pfVar11 == pfStack_a8 + -3) {
      *pfVar11 = fVar29;
      pfVar11[1] = fVar28;
      *(undefined1 *)(pfVar11 + 2) = uVar5;
    }
    else {
      *pfVar11 = pfStack_a8[-3];
      pfVar11[1] = pfStack_a8[-2];
      *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfStack_a8 + -1);
      pfStack_a8[-3] = fVar29;
      pfStack_a8[-2] = fVar28;
      *(undefined1 *)(pfStack_a8 + -1) = uVar5;
      puVar2 = (undefined *)((long)pfVar11 + (0xc - (long)pfVar9));
      if (0xc < (long)puVar2) {
        uVar25 = ((ulong)puVar2 >> 2) * -0x5555555555555555 - 2 >> 1;
        pfVar13 = pfVar9 + uVar25 * 3;
        pfVar10 = pfVar13;
        FUN_109576a70(pfVar13,pfVar11);
        if (((uint)pfVar10 & 0xff) == 1) {
          fVar29 = *pfVar11;
          fVar28 = pfVar11[1];
          bVar6 = *(byte *)(pfVar11 + 2);
          fVar30 = *pfVar13;
          do {
            pfVar10 = pfVar13;
            *pfVar11 = fVar30;
            pfVar11[1] = pfVar10[1];
            *(undefined1 *)(pfVar11 + 2) = *(undefined1 *)(pfVar10 + 2);
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1 >> 1;
            pfVar13 = pfVar9 + uVar25 * 3;
            fVar30 = *pfVar13;
            uVar15 = 0;
            if (fVar30 != fVar29) {
              uVar15 = 0xffffff81;
            }
            if (fVar29 < fVar30) {
              uVar15 = 1;
            }
            if (fVar30 < fVar29) {
              uVar15 = 0xffffffff;
            }
            if (uVar15 == 0) {
              uVar15 = 1;
              if ((int)pfVar13[1] < (int)fVar28) {
                uVar15 = 0xffffffff;
              }
              if ((pfVar13[1] == fVar28) &&
                 (uVar15 = (uint)(bVar6 < *(byte *)(pfVar13 + 2)), *(byte *)(pfVar13 + 2) < bVar6))
              {
                uVar15 = 0xffffffff;
              }
            }
            pfVar11 = pfVar10;
          } while ((uVar15 & 0xff) == 1);
          *pfVar10 = fVar29;
          pfVar10[1] = fVar28;
          *(byte *)(pfVar10 + 2) = bVar6;
        }
      }
    }
    bVar4 = lVar19 < 3;
    lVar19 = lVar19 + -1;
    pfStack_a8 = pfStack_a8 + -3;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_109575e3c:
  pfStack_a8 = pfVar14;
  if (((ulong)pfVar11 & 1) != 0) {
    return;
  }
  goto LAB_10957583c;
}



/* Entry: 1095757bc; end: 1095757ff;  */

void FUN_1095757bc(float *param_1,float *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  float *pfVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float *pfStack_98;
  
  if (param_1 < (float *)0x1555555555555556) {
    __Znwm((long)param_1 * 0xc);
    return;
  }
  func_0x000104c4f740();
  pfStack_98 = param_2;
LAB_10957583c:
  pfVar11 = pfStack_98 + -3;
  pfVar8 = param_1;
LAB_109575854:
  while( true ) {
    param_1 = pfVar8;
    uVar25 = (long)pfStack_98 - (long)param_1;
    uVar23 = ((long)uVar25 >> 2) * -0x5555555555555555;
    if (uVar23 - 2 == 0 || (long)uVar23 < 2) {
      if (uVar23 < 2) {
        return;
      }
      if (uVar23 == 2) {
        FUN_109576a70(pfVar11,param_1);
        if (((uint)pfVar11 & 0xff) != 1) {
          return;
        }
        fVar26 = *param_1;
        *param_1 = pfStack_98[-3];
        pfStack_98[-3] = fVar26;
        fVar26 = param_1[1];
        param_1[1] = pfStack_98[-2];
        pfStack_98[-2] = fVar26;
        uVar4 = *(undefined1 *)(param_1 + 2);
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfStack_98 + -1);
        *(undefined1 *)(pfStack_98 + -1) = uVar4;
        return;
      }
    }
    else {
      if (uVar23 == 3) {
        pfVar8 = param_1 + 3;
        pfVar9 = pfVar8;
        FUN_109576a70(pfVar8,param_1);
        pfVar10 = pfVar11;
        FUN_109576a70(pfVar11,pfVar8);
        uVar13 = (uint)pfVar10 & 0xff;
        if (((uint)pfVar9 & 0xff) == 1) {
          pfVar9 = param_1 + 2;
          fVar26 = *param_1;
          if (uVar13 == 1) {
            *param_1 = *pfVar11;
            *pfVar11 = fVar26;
            fVar26 = param_1[1];
            param_1[1] = pfStack_98[-2];
            pfStack_98[-2] = fVar26;
          }
          else {
            *param_1 = *pfVar8;
            *pfVar8 = fVar26;
            fVar27 = param_1[1];
            param_1[1] = param_1[4];
            param_1[4] = fVar27;
            pfVar9 = param_1 + 5;
            uVar4 = *(undefined1 *)(param_1 + 2);
            *(undefined1 *)(param_1 + 2) = *(undefined1 *)pfVar9;
            *(undefined1 *)pfVar9 = uVar4;
            pfVar10 = pfVar11;
            FUN_109576a70(pfVar11,pfVar8);
            if (((uint)pfVar10 & 0xff) != 1) {
              return;
            }
            *pfVar8 = *pfVar11;
            *pfVar11 = fVar26;
            param_1[4] = pfStack_98[-2];
            pfStack_98[-2] = fVar27;
          }
          pfVar11 = pfStack_98 + -1;
        }
        else {
          if (uVar13 != 1) {
            return;
          }
          fVar26 = *pfVar8;
          *pfVar8 = *pfVar11;
          *pfVar11 = fVar26;
          fVar26 = param_1[4];
          param_1[4] = pfStack_98[-2];
          pfStack_98[-2] = fVar26;
          pfVar11 = param_1 + 5;
          uVar4 = *(undefined1 *)pfVar11;
          *(undefined1 *)pfVar11 = *(undefined1 *)(pfStack_98 + -1);
          *(undefined1 *)(pfStack_98 + -1) = uVar4;
          pfVar9 = pfVar8;
          FUN_109576a70(pfVar8,param_1);
          if (((uint)pfVar9 & 0xff) != 1) {
            return;
          }
          fVar26 = *param_1;
          *param_1 = *pfVar8;
          *pfVar8 = fVar26;
          fVar26 = param_1[1];
          param_1[1] = param_1[4];
          param_1[4] = fVar26;
          pfVar9 = param_1 + 2;
        }
        uVar4 = *(undefined1 *)pfVar9;
        *(undefined1 *)pfVar9 = *(undefined1 *)pfVar11;
        *(undefined1 *)pfVar11 = uVar4;
        return;
      }
      if (uVar23 == 4) {
        pfVar8 = param_1 + 3;
        pfVar9 = param_1 + 6;
        FUN_109576458();
        pfVar10 = pfVar11;
        FUN_109576a70(pfVar11,pfVar9);
        if (((uint)pfVar10 & 0xff) == 1) {
          fVar26 = *pfVar9;
          *pfVar9 = *pfVar11;
          *pfVar11 = fVar26;
          fVar26 = param_1[7];
          param_1[7] = pfStack_98[-2];
          pfStack_98[-2] = fVar26;
          uVar4 = *(undefined1 *)(param_1 + 8);
          *(undefined1 *)(param_1 + 8) = *(undefined1 *)(pfStack_98 + -1);
          *(undefined1 *)(pfStack_98 + -1) = uVar4;
          pfVar11 = pfVar9;
          FUN_109576a70(pfVar9,pfVar8);
          if (((uint)pfVar11 & 0xff) == 1) {
            fVar26 = *pfVar8;
            *pfVar8 = *pfVar9;
            *pfVar9 = fVar26;
            fVar26 = param_1[4];
            param_1[4] = param_1[7];
            param_1[7] = fVar26;
            uVar4 = *(undefined1 *)(param_1 + 5);
            *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 8);
            *(undefined1 *)(param_1 + 8) = uVar4;
            pfVar11 = pfVar8;
            FUN_109576a70(pfVar8,param_1);
            if (((uint)pfVar11 & 0xff) == 1) {
              fVar26 = *param_1;
              *param_1 = *pfVar8;
              *pfVar8 = fVar26;
              fVar26 = param_1[1];
              param_1[1] = param_1[4];
              param_1[4] = fVar26;
              uVar4 = *(undefined1 *)(param_1 + 2);
              *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 5) = uVar4;
            }
          }
        }
        return;
      }
      if (uVar23 == 5) {
        pfVar8 = param_1 + 3;
        pfVar9 = param_1 + 6;
        pfVar10 = param_1 + 9;
        FUN_1095765dc();
        pfVar12 = pfVar11;
        FUN_109576a70(pfVar11,pfVar10);
        if (((uint)pfVar12 & 0xff) == 1) {
          fVar26 = *pfVar10;
          *pfVar10 = *pfVar11;
          *pfVar11 = fVar26;
          fVar26 = param_1[10];
          param_1[10] = pfStack_98[-2];
          pfStack_98[-2] = fVar26;
          uVar4 = *(undefined1 *)(param_1 + 0xb);
          *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(pfStack_98 + -1);
          *(undefined1 *)(pfStack_98 + -1) = uVar4;
          pfVar11 = pfVar10;
          FUN_109576a70(pfVar10,pfVar9);
          if (((uint)pfVar11 & 0xff) == 1) {
            fVar26 = *pfVar9;
            *pfVar9 = *pfVar10;
            *pfVar10 = fVar26;
            fVar26 = param_1[7];
            param_1[7] = param_1[10];
            param_1[10] = fVar26;
            uVar4 = *(undefined1 *)(param_1 + 8);
            *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
            *(undefined1 *)(param_1 + 0xb) = uVar4;
            pfVar11 = pfVar9;
            FUN_109576a70(pfVar9,pfVar8);
            if (((uint)pfVar11 & 0xff) == 1) {
              fVar26 = *pfVar8;
              *pfVar8 = *pfVar9;
              *pfVar9 = fVar26;
              fVar26 = param_1[4];
              param_1[4] = param_1[7];
              param_1[7] = fVar26;
              uVar4 = *(undefined1 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 8);
              *(undefined1 *)(param_1 + 8) = uVar4;
              pfVar11 = pfVar8;
              FUN_109576a70(pfVar8,param_1);
              if (((uint)pfVar11 & 0xff) == 1) {
                fVar26 = *param_1;
                *param_1 = *pfVar8;
                *pfVar8 = fVar26;
                fVar26 = param_1[1];
                param_1[1] = param_1[4];
                param_1[4] = fVar26;
                uVar4 = *(undefined1 *)(param_1 + 2);
                *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 5);
                *(undefined1 *)(param_1 + 5) = uVar4;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar25 < 0x120) {
      pfVar8 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 == pfStack_98 || pfVar8 == pfStack_98) {
          return;
        }
        pfVar11 = param_1 + 5;
        do {
          pfVar9 = pfVar8;
          pfVar8 = pfVar9;
          FUN_109576a70(pfVar9,param_1);
          if (((uint)pfVar8 & 0xff) == 1) {
            fVar27 = *pfVar9;
            fVar26 = pfVar9[1];
            bVar5 = *(byte *)(pfVar9 + 2);
            fVar28 = *param_1;
            pfVar8 = pfVar11;
            do {
              pfVar10 = pfVar8;
              pfVar10[-2] = fVar28;
              pfVar10[-1] = pfVar10[-4];
              pfVar8 = pfVar10 + -3;
              *(byte *)pfVar10 = *(byte *)pfVar8;
              fVar28 = pfVar10[-8];
              uVar13 = 0;
              if (fVar27 != fVar28) {
                uVar13 = 0xffffff81;
              }
              if (fVar28 < fVar27) {
                uVar13 = 1;
              }
              if (fVar27 < fVar28) {
                uVar13 = 0xffffffff;
              }
              if (uVar13 == 0) {
                uVar13 = 1;
                if ((int)fVar26 < (int)pfVar10[-7]) {
                  uVar13 = 0xffffffff;
                }
                if ((fVar26 == pfVar10[-7]) &&
                   (uVar13 = (uint)(*(byte *)(pfVar10 + -6) < bVar5),
                   bVar5 < *(byte *)(pfVar10 + -6))) {
                  uVar13 = 0xffffffff;
                }
              }
            } while ((uVar13 & 0xff) == 1);
            pfVar10[-5] = fVar27;
            pfVar10[-4] = fVar26;
            *(byte *)pfVar8 = bVar5;
          }
          pfVar11 = pfVar11 + 3;
          pfVar8 = pfVar9 + 3;
          param_1 = pfVar9;
        } while (pfVar9 + 3 != pfStack_98);
        return;
      }
      if (param_1 == pfStack_98 || pfVar8 == pfStack_98) {
        return;
      }
      lVar17 = 0;
      pfVar11 = param_1;
      goto LAB_109575f5c;
    }
    if (param_3 == 0) {
      if (param_1 == pfStack_98) {
        return;
      }
      uVar22 = uVar23 - 2 >> 1;
      uVar14 = uVar22;
      goto LAB_10957603c;
    }
    pfVar8 = param_1 + (uVar23 >> 1) * 3;
    if (uVar25 < 0x601) {
      FUN_109576458(pfVar8,param_1,pfVar11);
    }
    else {
      FUN_109576458(param_1,pfVar8,pfVar11);
      FUN_109576458(param_1 + 3,pfVar8 + -3,pfStack_98 + -6);
      FUN_109576458(param_1 + 6,pfVar8 + 3,pfStack_98 + -9);
      FUN_109576458(pfVar8 + -3,pfVar8,pfVar8 + 3);
      fVar26 = *param_1;
      *param_1 = *pfVar8;
      *pfVar8 = fVar26;
      fVar26 = param_1[1];
      param_1[1] = pfVar8[1];
      pfVar8[1] = fVar26;
      uVar4 = *(undefined1 *)(param_1 + 2);
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfVar8 + 2);
      *(undefined1 *)(pfVar8 + 2) = uVar4;
    }
    param_3 = param_3 + -1;
    uVar13 = 0xffffff81;
    uVar19 = 0xffffffff;
    if ((param_4 & 1) != 0) break;
    pfVar8 = param_1 + -3;
    FUN_109576a70(pfVar8,param_1);
    if (((uint)pfVar8 & 0xff) == 1) break;
    fVar27 = *param_1;
    fVar26 = param_1[1];
    bVar5 = *(byte *)(param_1 + 2);
    fVar28 = *pfVar11;
    uVar15 = 0;
    if (fVar27 != fVar28) {
      uVar15 = uVar13;
    }
    if (fVar28 < fVar27) {
      uVar15 = 1;
    }
    if (fVar27 < fVar28) {
      uVar15 = 0xffffffff;
    }
    if (uVar15 == 0) {
      uVar15 = 1;
      if ((int)fVar26 < (int)pfStack_98[-2]) {
        uVar15 = uVar19;
      }
      if ((fVar26 == pfStack_98[-2]) &&
         (uVar15 = (uint)(*(byte *)(pfStack_98 + -1) < bVar5), bVar5 < *(byte *)(pfStack_98 + -1)))
      {
        uVar15 = 0xffffffff;
      }
    }
    pfVar9 = param_1;
    if ((uVar15 & 0xff) == 1) {
      do {
        pfVar8 = pfVar9 + 3;
        fVar28 = *pfVar8;
        uVar15 = 0;
        if (fVar27 != fVar28) {
          uVar15 = uVar13;
        }
        if (fVar28 < fVar27) {
          uVar15 = 1;
        }
        if (fVar27 < fVar28) {
          uVar15 = 0xffffffff;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
          if ((int)fVar26 < (int)pfVar9[4]) {
            uVar15 = uVar19;
          }
          if ((fVar26 == pfVar9[4]) &&
             (uVar15 = (uint)(*(byte *)(pfVar9 + 5) < bVar5), bVar5 < *(byte *)(pfVar9 + 5))) {
            uVar15 = 0xffffffff;
          }
        }
        pfVar9 = pfVar8;
      } while ((uVar15 & 0xff) != 1);
    }
    else {
      do {
        pfVar8 = pfVar9 + 3;
        if (pfStack_98 <= pfVar8) break;
        fVar28 = *pfVar8;
        uVar15 = 0;
        if (fVar27 != fVar28) {
          uVar15 = uVar13;
        }
        if (fVar28 < fVar27) {
          uVar15 = 1;
        }
        if (fVar27 < fVar28) {
          uVar15 = 0xffffffff;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
          if ((int)fVar26 < (int)pfVar9[4]) {
            uVar15 = uVar19;
          }
          if ((fVar26 == pfVar9[4]) &&
             (uVar15 = (uint)(*(byte *)(pfVar9 + 5) < bVar5), bVar5 < *(byte *)(pfVar9 + 5))) {
            uVar15 = 0xffffffff;
          }
        }
        pfVar9 = pfVar8;
      } while ((uVar15 & 0xff) != 1);
    }
    pfVar9 = pfStack_98;
    pfVar10 = pfStack_98;
    if (pfVar8 < pfStack_98) {
      do {
        pfVar9 = pfVar10 + -3;
        fVar28 = *pfVar9;
        uVar15 = 0;
        if (fVar27 != fVar28) {
          uVar15 = uVar13;
        }
        if (fVar28 < fVar27) {
          uVar15 = 1;
        }
        if (fVar27 < fVar28) {
          uVar15 = 0xffffffff;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
          if ((int)fVar26 < (int)pfVar10[-2]) {
            uVar15 = uVar19;
          }
          if ((fVar26 == pfVar10[-2]) &&
             (uVar15 = (uint)(*(byte *)(pfVar10 + -1) < bVar5), bVar5 < *(byte *)(pfVar10 + -1))) {
            uVar15 = 0xffffffff;
          }
        }
        pfVar10 = pfVar9;
      } while ((uVar15 & 0xff) == 1);
    }
    if (pfVar8 < pfVar9) {
      fVar28 = *pfVar8;
      fVar29 = *pfVar9;
      do {
        *pfVar8 = fVar29;
        *pfVar9 = fVar28;
        fVar28 = pfVar8[1];
        pfVar8[1] = pfVar9[1];
        pfVar9[1] = fVar28;
        uVar4 = *(undefined1 *)(pfVar8 + 2);
        *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar9 + 2);
        *(undefined1 *)(pfVar9 + 2) = uVar4;
        pfVar10 = pfVar8;
        do {
          pfVar8 = pfVar10 + 3;
          fVar28 = *pfVar8;
          uVar15 = 0;
          if (fVar27 != fVar28) {
            uVar15 = uVar13;
          }
          if (fVar28 < fVar27) {
            uVar15 = 1;
          }
          if (fVar27 < fVar28) {
            uVar15 = 0xffffffff;
          }
          if (uVar15 == 0) {
            uVar15 = 1;
            if ((int)fVar26 < (int)pfVar10[4]) {
              uVar15 = uVar19;
            }
            if ((fVar26 == pfVar10[4]) &&
               (uVar15 = (uint)(*(byte *)(pfVar10 + 5) < bVar5), bVar5 < *(byte *)(pfVar10 + 5))) {
              uVar15 = 0xffffffff;
            }
          }
          pfVar12 = pfVar9;
          pfVar10 = pfVar8;
        } while ((uVar15 & 0xff) != 1);
        do {
          pfVar9 = pfVar12 + -3;
          fVar29 = *pfVar9;
          uVar15 = 0;
          if (fVar27 != fVar29) {
            uVar15 = uVar13;
          }
          if (fVar29 < fVar27) {
            uVar15 = 1;
          }
          if (fVar27 < fVar29) {
            uVar15 = 0xffffffff;
          }
          if (uVar15 == 0) {
            uVar15 = 1;
            if ((int)fVar26 < (int)pfVar12[-2]) {
              uVar15 = uVar19;
            }
            if ((fVar26 == pfVar12[-2]) &&
               (uVar15 = (uint)(*(byte *)(pfVar12 + -1) < bVar5), bVar5 < *(byte *)(pfVar12 + -1)))
            {
              uVar15 = 0xffffffff;
            }
          }
          pfVar12 = pfVar9;
        } while ((uVar15 & 0xff) == 1);
      } while (pfVar8 < pfVar9);
    }
    if (pfVar8 + -3 != param_1) {
      *param_1 = pfVar8[-3];
      param_1[1] = pfVar8[-2];
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfVar8 + -1);
    }
    param_4 = 0;
    pfVar8[-3] = fVar27;
    pfVar8[-2] = fVar26;
    *(byte *)(pfVar8 + -1) = bVar5;
  }
  lVar17 = 0;
  fVar27 = *param_1;
  fVar26 = param_1[1];
  bVar5 = *(byte *)(param_1 + 2);
  do {
    fVar28 = *(float *)((long)param_1 + lVar17 + 0xc);
    uVar21 = 0xffffff81;
    uVar15 = 0;
    if (fVar28 != fVar27) {
      uVar15 = uVar21;
    }
    if (fVar27 < fVar28) {
      uVar15 = 1;
    }
    if (fVar28 < fVar27) {
      uVar15 = 0xffffffff;
    }
    if (uVar15 == 0) {
      fVar29 = *(float *)((long)param_1 + lVar17 + 0x10);
      uVar15 = 1;
      if ((int)fVar29 < (int)fVar26) {
        uVar15 = 0xffffffff;
      }
      if ((fVar29 == fVar26) &&
         (bVar6 = *(byte *)((long)param_1 + lVar17 + 0x14), uVar15 = (uint)(bVar5 < bVar6),
         bVar6 < bVar5)) {
        uVar15 = 0xffffffff;
      }
    }
    lVar17 = lVar17 + 0xc;
  } while ((uVar15 & 0xff) == 1);
  pfVar9 = (float *)((long)param_1 + lVar17);
  pfVar8 = pfStack_98;
  if (lVar17 == 0xc) {
    do {
      pfVar10 = pfVar8;
      if (pfVar8 <= pfVar9) break;
      pfVar10 = pfVar8 + -3;
      fVar29 = *pfVar10;
      uVar15 = 0;
      if (fVar29 != fVar27) {
        uVar15 = uVar21;
      }
      if (fVar27 < fVar29) {
        uVar15 = 1;
      }
      if (fVar29 < fVar27) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0) {
        uVar15 = 1;
        if ((int)pfVar8[-2] < (int)fVar26) {
          uVar15 = uVar19;
        }
        if ((pfVar8[-2] == fVar26) &&
           (uVar15 = (uint)(bVar5 < *(byte *)(pfVar8 + -1)), *(byte *)(pfVar8 + -1) < bVar5)) {
          uVar15 = 0xffffffff;
        }
      }
      pfVar8 = pfVar10;
    } while ((uVar15 & 0xff) != 1);
  }
  else {
    do {
      pfVar10 = pfVar8 + -3;
      fVar29 = *pfVar10;
      uVar15 = 0;
      if (fVar29 != fVar27) {
        uVar15 = uVar21;
      }
      if (fVar27 < fVar29) {
        uVar15 = 1;
      }
      if (fVar29 < fVar27) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0) {
        uVar15 = 1;
        if ((int)pfVar8[-2] < (int)fVar26) {
          uVar15 = uVar19;
        }
        if ((pfVar8[-2] == fVar26) &&
           (uVar15 = (uint)(bVar5 < *(byte *)(pfVar8 + -1)), *(byte *)(pfVar8 + -1) < bVar5)) {
          uVar15 = 0xffffffff;
        }
      }
      pfVar8 = pfVar10;
    } while ((uVar15 & 0xff) != 1);
  }
  pfVar8 = pfVar9;
  if (pfVar9 < pfVar10) {
    fVar29 = *pfVar10;
    pfVar12 = pfVar10;
    do {
      *pfVar8 = fVar29;
      *pfVar12 = fVar28;
      fVar28 = pfVar8[1];
      pfVar8[1] = pfVar12[1];
      pfVar12[1] = fVar28;
      uVar4 = *(undefined1 *)(pfVar8 + 2);
      *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar12 + 2);
      *(undefined1 *)(pfVar12 + 2) = uVar4;
      pfVar24 = pfVar8;
      do {
        pfVar8 = pfVar24 + 3;
        fVar28 = *pfVar8;
        uVar19 = 0;
        if (fVar28 != fVar27) {
          uVar19 = uVar21;
        }
        if (fVar27 < fVar28) {
          uVar19 = 1;
        }
        if (fVar28 < fVar27) {
          uVar19 = 0xffffffff;
        }
        if (uVar19 == 0) {
          uVar19 = 1;
          if ((int)pfVar24[4] < (int)fVar26) {
            uVar19 = 0xffffffff;
          }
          if ((pfVar24[4] == fVar26) &&
             (uVar19 = (uint)(bVar5 < *(byte *)(pfVar24 + 5)), *(byte *)(pfVar24 + 5) < bVar5)) {
            uVar19 = 0xffffffff;
          }
        }
        pfVar18 = pfVar12;
        pfVar24 = pfVar8;
      } while ((uVar19 & 0xff) == 1);
      do {
        pfVar12 = pfVar18 + -3;
        fVar29 = *pfVar12;
        uVar19 = 0;
        if (fVar29 != fVar27) {
          uVar19 = uVar13;
        }
        if (fVar27 < fVar29) {
          uVar19 = 1;
        }
        if (fVar29 < fVar27) {
          uVar19 = 0xffffffff;
        }
        if (uVar19 == 0) {
          uVar19 = 1;
          if ((int)pfVar18[-2] < (int)fVar26) {
            uVar19 = 0xffffffff;
          }
          if ((pfVar18[-2] == fVar26) &&
             (uVar19 = (uint)(bVar5 < *(byte *)(pfVar18 + -1)), *(byte *)(pfVar18 + -1) < bVar5)) {
            uVar19 = 0xffffffff;
          }
        }
        pfVar18 = pfVar12;
      } while ((uVar19 & 0xff) != 1);
    } while (pfVar8 < pfVar12);
  }
  pfVar12 = pfVar8 + -3;
  if (pfVar12 != param_1) {
    *param_1 = pfVar8[-3];
    param_1[1] = pfVar8[-2];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfVar8 + -1);
  }
  pfVar8[-3] = fVar27;
  pfVar8[-2] = fVar26;
  *(byte *)(pfVar8 + -1) = bVar5;
  if (pfVar10 <= pfVar9) {
    pfVar9 = param_1;
    FUN_109576848(param_1,pfVar12);
    pfVar10 = pfVar8;
    FUN_109576848(pfVar8,pfStack_98);
    if ((int)pfVar10 != 0) goto LAB_109575e3c;
    if (((ulong)pfVar9 & 1) != 0) goto LAB_109575854;
  }
  FUN_109575800(param_1,pfVar12,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_109575854;
LAB_109575f5c:
  pfVar9 = pfVar8;
  pfVar8 = pfVar9;
  FUN_109576a70(pfVar9,pfVar11);
  if (((uint)pfVar8 & 0xff) == 1) {
    fVar27 = *pfVar9;
    fVar26 = pfVar9[1];
    bVar5 = *(byte *)(pfVar9 + 2);
    fVar28 = *pfVar11;
    lVar7 = lVar17;
    do {
      lVar16 = lVar7;
      *(float *)((long)param_1 + lVar16 + 0xc) = fVar28;
      *(undefined4 *)((long)param_1 + lVar16 + 0x10) = *(undefined4 *)((long)param_1 + lVar16 + 4);
      *(undefined1 *)((long)param_1 + lVar16 + 0x14) = *(undefined1 *)((long)param_1 + lVar16 + 8);
      pfVar8 = param_1;
      if (lVar16 == 0) goto LAB_109576008;
      fVar28 = *(float *)((long)param_1 + lVar16 + -0xc);
      uVar13 = 0;
      if (fVar27 != fVar28) {
        uVar13 = 0xffffff81;
      }
      if (fVar28 < fVar27) {
        uVar13 = 1;
      }
      if (fVar27 < fVar28) {
        uVar13 = 0xffffffff;
      }
      if (uVar13 == 0) {
        fVar29 = *(float *)((long)param_1 + lVar16 + -8);
        uVar13 = 1;
        if ((int)fVar26 < (int)fVar29) {
          uVar13 = 0xffffffff;
        }
        if ((fVar26 == fVar29) &&
           (bVar6 = *(byte *)((long)param_1 + lVar16 + -4), uVar13 = (uint)(bVar6 < bVar5),
           bVar5 < bVar6)) {
          uVar13 = 0xffffffff;
        }
      }
      lVar7 = lVar16 + -0xc;
    } while ((uVar13 & 0xff) == 1);
    pfVar8 = (float *)((long)param_1 + lVar16);
LAB_109576008:
    *pfVar8 = fVar27;
    pfVar8[1] = fVar26;
    *(byte *)(pfVar8 + 2) = bVar5;
  }
  lVar17 = lVar17 + 0xc;
  pfVar8 = pfVar9 + 3;
  pfVar11 = pfVar9;
  if (pfVar9 + 3 == pfStack_98) {
    return;
  }
  goto LAB_109575f5c;
LAB_10957603c:
  do {
    if ((long)uVar14 <= (long)uVar22) {
      uVar2 = uVar14 << 1 | 1;
      pfVar11 = param_1 + uVar2 * 3;
      uVar1 = uVar14 * 2 + 2;
      uVar20 = uVar2;
      pfVar8 = pfVar11;
      if ((long)uVar1 < (long)uVar23) {
        pfVar9 = pfVar11;
        FUN_109576a70(pfVar11,pfVar11 + 3);
        uVar20 = uVar1;
        pfVar8 = pfVar11 + 3;
        if (((uint)pfVar9 & 0xff) != 1) {
          uVar20 = uVar2;
          pfVar8 = pfVar11;
        }
      }
      pfVar9 = param_1 + uVar14 * 3;
      pfVar11 = pfVar8;
      FUN_109576a70(pfVar8,pfVar9);
      if (((uint)pfVar11 & 0xff) != 1) {
        fVar28 = *pfVar9;
        fVar26 = pfVar9[1];
        bVar5 = *(byte *)(pfVar9 + 2);
        fVar27 = *pfVar8;
        do {
          pfVar11 = pfVar8;
          *pfVar9 = fVar27;
          pfVar9[1] = pfVar11[1];
          *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar11 + 2);
          if ((long)uVar22 < (long)uVar20) break;
          uVar2 = uVar20 << 1 | 1;
          pfVar9 = param_1 + uVar2 * 3;
          uVar1 = uVar20 * 2 + 2;
          uVar20 = uVar2;
          pfVar8 = pfVar9;
          if ((long)uVar1 < (long)uVar23) {
            pfVar10 = pfVar9;
            FUN_109576a70(pfVar9,pfVar9 + 3);
            uVar20 = uVar1;
            pfVar8 = pfVar9 + 3;
            if (((uint)pfVar10 & 0xff) != 1) {
              uVar20 = uVar2;
              pfVar8 = pfVar9;
            }
          }
          fVar27 = *pfVar8;
          uVar13 = 0;
          if (fVar27 != fVar28) {
            uVar13 = 0xffffff81;
          }
          if (fVar28 < fVar27) {
            uVar13 = 1;
          }
          if (fVar27 < fVar28) {
            uVar13 = 0xffffffff;
          }
          if (uVar13 == 0) {
            uVar13 = 1;
            if ((int)pfVar8[1] < (int)fVar26) {
              uVar13 = 0xffffffff;
            }
            if ((pfVar8[1] == fVar26) &&
               (uVar13 = (uint)(bVar5 < *(byte *)(pfVar8 + 2)), *(byte *)(pfVar8 + 2) < bVar5)) {
              uVar13 = 0xffffffff;
            }
          }
          pfVar9 = pfVar11;
        } while ((uVar13 & 0xff) != 1);
        *pfVar11 = fVar28;
        pfVar11[1] = fVar26;
        *(byte *)(pfVar11 + 2) = bVar5;
      }
    }
    bVar3 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar3);
  lVar17 = (uVar25 >> 2) * -0x5555555555555555;
  do {
    uVar23 = 0;
    fVar27 = *param_1;
    fVar26 = param_1[1];
    uVar4 = *(undefined1 *)(param_1 + 2);
    pfVar8 = param_1;
    do {
      pfVar11 = pfVar8 + uVar23 * 3 + 3;
      uVar14 = uVar23 << 1 | 1;
      uVar25 = uVar23 * 2 + 2;
      uVar22 = uVar14;
      pfVar9 = pfVar11;
      if ((long)uVar25 < lVar17) {
        pfVar10 = pfVar11;
        FUN_109576a70(pfVar11,pfVar8 + uVar23 * 3 + 6);
        uVar22 = uVar25;
        pfVar9 = pfVar8 + uVar23 * 3 + 6;
        if (((uint)pfVar10 & 0xff) != 1) {
          uVar22 = uVar14;
          pfVar9 = pfVar11;
        }
      }
      uVar23 = uVar22;
      *pfVar8 = *pfVar9;
      pfVar8[1] = pfVar9[1];
      *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar9 + 2);
      pfVar8 = pfVar9;
    } while ((long)uVar23 <= (lVar17 + -2) / 2);
    if (pfVar9 == pfStack_98 + -3) {
      *pfVar9 = fVar27;
      pfVar9[1] = fVar26;
      *(undefined1 *)(pfVar9 + 2) = uVar4;
    }
    else {
      *pfVar9 = pfStack_98[-3];
      pfVar9[1] = pfStack_98[-2];
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfStack_98 + -1);
      pfStack_98[-3] = fVar27;
      pfStack_98[-2] = fVar26;
      *(undefined1 *)(pfStack_98 + -1) = uVar4;
      uVar23 = (long)pfVar9 + (0xc - (long)param_1);
      if (0xc < (long)uVar23) {
        uVar23 = (uVar23 >> 2) * -0x5555555555555555 - 2 >> 1;
        pfVar11 = param_1 + uVar23 * 3;
        pfVar8 = pfVar11;
        FUN_109576a70(pfVar11,pfVar9);
        if (((uint)pfVar8 & 0xff) == 1) {
          fVar27 = *pfVar9;
          fVar26 = pfVar9[1];
          bVar5 = *(byte *)(pfVar9 + 2);
          fVar28 = *pfVar11;
          do {
            pfVar8 = pfVar11;
            *pfVar9 = fVar28;
            pfVar9[1] = pfVar8[1];
            *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar8 + 2);
            if (uVar23 == 0) break;
            uVar23 = uVar23 - 1 >> 1;
            pfVar11 = param_1 + uVar23 * 3;
            fVar28 = *pfVar11;
            uVar13 = 0;
            if (fVar28 != fVar27) {
              uVar13 = 0xffffff81;
            }
            if (fVar27 < fVar28) {
              uVar13 = 1;
            }
            if (fVar28 < fVar27) {
              uVar13 = 0xffffffff;
            }
            if (uVar13 == 0) {
              uVar13 = 1;
              if ((int)pfVar11[1] < (int)fVar26) {
                uVar13 = 0xffffffff;
              }
              if ((pfVar11[1] == fVar26) &&
                 (uVar13 = (uint)(bVar5 < *(byte *)(pfVar11 + 2)), *(byte *)(pfVar11 + 2) < bVar5))
              {
                uVar13 = 0xffffffff;
              }
            }
            pfVar9 = pfVar8;
          } while ((uVar13 & 0xff) == 1);
          *pfVar8 = fVar27;
          pfVar8[1] = fVar26;
          *(byte *)(pfVar8 + 2) = bVar5;
        }
      }
    }
    bVar3 = lVar17 < 3;
    lVar17 = lVar17 + -1;
    pfStack_98 = pfStack_98 + -3;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_109575e3c:
  pfStack_98 = pfVar12;
  if (((ulong)pfVar9 & 1) != 0) {
    return;
  }
  goto LAB_10957583c;
}



/* Entry: 109575800; end: 109576457;  */

void FUN_109575800(float *param_1,float *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  float *pfVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float *pfStack_78;
  
  pfStack_78 = param_2;
LAB_10957583c:
  pfVar11 = pfStack_78 + -3;
  pfVar8 = param_1;
LAB_109575854:
  while( true ) {
    param_1 = pfVar8;
    uVar25 = (long)pfStack_78 - (long)param_1;
    uVar23 = ((long)uVar25 >> 2) * -0x5555555555555555;
    if (uVar23 - 2 == 0 || (long)uVar23 < 2) {
      if (uVar23 < 2) {
        return;
      }
      if (uVar23 == 2) {
        FUN_109576a70(pfVar11,param_1);
        if (((uint)pfVar11 & 0xff) != 1) {
          return;
        }
        fVar26 = *param_1;
        *param_1 = pfStack_78[-3];
        pfStack_78[-3] = fVar26;
        fVar26 = param_1[1];
        param_1[1] = pfStack_78[-2];
        pfStack_78[-2] = fVar26;
        uVar4 = *(undefined1 *)(param_1 + 2);
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfStack_78 + -1);
        *(undefined1 *)(pfStack_78 + -1) = uVar4;
        return;
      }
    }
    else {
      if (uVar23 == 3) {
        pfVar8 = param_1 + 3;
        pfVar9 = pfVar8;
        FUN_109576a70(pfVar8,param_1);
        pfVar10 = pfVar11;
        FUN_109576a70(pfVar11,pfVar8);
        uVar13 = (uint)pfVar10 & 0xff;
        if (((uint)pfVar9 & 0xff) == 1) {
          pfVar9 = param_1 + 2;
          fVar26 = *param_1;
          if (uVar13 == 1) {
            *param_1 = *pfVar11;
            *pfVar11 = fVar26;
            fVar26 = param_1[1];
            param_1[1] = pfStack_78[-2];
            pfStack_78[-2] = fVar26;
          }
          else {
            *param_1 = *pfVar8;
            *pfVar8 = fVar26;
            fVar27 = param_1[1];
            param_1[1] = param_1[4];
            param_1[4] = fVar27;
            pfVar9 = param_1 + 5;
            uVar4 = *(undefined1 *)(param_1 + 2);
            *(undefined1 *)(param_1 + 2) = *(undefined1 *)pfVar9;
            *(undefined1 *)pfVar9 = uVar4;
            pfVar10 = pfVar11;
            FUN_109576a70(pfVar11,pfVar8);
            if (((uint)pfVar10 & 0xff) != 1) {
              return;
            }
            *pfVar8 = *pfVar11;
            *pfVar11 = fVar26;
            param_1[4] = pfStack_78[-2];
            pfStack_78[-2] = fVar27;
          }
          pfVar11 = pfStack_78 + -1;
        }
        else {
          if (uVar13 != 1) {
            return;
          }
          fVar26 = *pfVar8;
          *pfVar8 = *pfVar11;
          *pfVar11 = fVar26;
          fVar26 = param_1[4];
          param_1[4] = pfStack_78[-2];
          pfStack_78[-2] = fVar26;
          pfVar11 = param_1 + 5;
          uVar4 = *(undefined1 *)pfVar11;
          *(undefined1 *)pfVar11 = *(undefined1 *)(pfStack_78 + -1);
          *(undefined1 *)(pfStack_78 + -1) = uVar4;
          pfVar9 = pfVar8;
          FUN_109576a70(pfVar8,param_1);
          if (((uint)pfVar9 & 0xff) != 1) {
            return;
          }
          fVar26 = *param_1;
          *param_1 = *pfVar8;
          *pfVar8 = fVar26;
          fVar26 = param_1[1];
          param_1[1] = param_1[4];
          param_1[4] = fVar26;
          pfVar9 = param_1 + 2;
        }
        uVar4 = *(undefined1 *)pfVar9;
        *(undefined1 *)pfVar9 = *(undefined1 *)pfVar11;
        *(undefined1 *)pfVar11 = uVar4;
        return;
      }
      if (uVar23 == 4) {
        pfVar8 = param_1 + 3;
        pfVar9 = param_1 + 6;
        FUN_109576458();
        pfVar10 = pfVar11;
        FUN_109576a70(pfVar11,pfVar9);
        if (((uint)pfVar10 & 0xff) == 1) {
          fVar26 = *pfVar9;
          *pfVar9 = *pfVar11;
          *pfVar11 = fVar26;
          fVar26 = param_1[7];
          param_1[7] = pfStack_78[-2];
          pfStack_78[-2] = fVar26;
          uVar4 = *(undefined1 *)(param_1 + 8);
          *(undefined1 *)(param_1 + 8) = *(undefined1 *)(pfStack_78 + -1);
          *(undefined1 *)(pfStack_78 + -1) = uVar4;
          pfVar11 = pfVar9;
          FUN_109576a70(pfVar9,pfVar8);
          if (((uint)pfVar11 & 0xff) == 1) {
            fVar26 = *pfVar8;
            *pfVar8 = *pfVar9;
            *pfVar9 = fVar26;
            fVar26 = param_1[4];
            param_1[4] = param_1[7];
            param_1[7] = fVar26;
            uVar4 = *(undefined1 *)(param_1 + 5);
            *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 8);
            *(undefined1 *)(param_1 + 8) = uVar4;
            pfVar11 = pfVar8;
            FUN_109576a70(pfVar8,param_1);
            if (((uint)pfVar11 & 0xff) == 1) {
              fVar26 = *param_1;
              *param_1 = *pfVar8;
              *pfVar8 = fVar26;
              fVar26 = param_1[1];
              param_1[1] = param_1[4];
              param_1[4] = fVar26;
              uVar4 = *(undefined1 *)(param_1 + 2);
              *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 5) = uVar4;
            }
          }
        }
        return;
      }
      if (uVar23 == 5) {
        pfVar8 = param_1 + 3;
        pfVar9 = param_1 + 6;
        pfVar10 = param_1 + 9;
        FUN_1095765dc();
        pfVar12 = pfVar11;
        FUN_109576a70(pfVar11,pfVar10);
        if (((uint)pfVar12 & 0xff) == 1) {
          fVar26 = *pfVar10;
          *pfVar10 = *pfVar11;
          *pfVar11 = fVar26;
          fVar26 = param_1[10];
          param_1[10] = pfStack_78[-2];
          pfStack_78[-2] = fVar26;
          uVar4 = *(undefined1 *)(param_1 + 0xb);
          *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(pfStack_78 + -1);
          *(undefined1 *)(pfStack_78 + -1) = uVar4;
          pfVar11 = pfVar10;
          FUN_109576a70(pfVar10,pfVar9);
          if (((uint)pfVar11 & 0xff) == 1) {
            fVar26 = *pfVar9;
            *pfVar9 = *pfVar10;
            *pfVar10 = fVar26;
            fVar26 = param_1[7];
            param_1[7] = param_1[10];
            param_1[10] = fVar26;
            uVar4 = *(undefined1 *)(param_1 + 8);
            *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
            *(undefined1 *)(param_1 + 0xb) = uVar4;
            pfVar11 = pfVar9;
            FUN_109576a70(pfVar9,pfVar8);
            if (((uint)pfVar11 & 0xff) == 1) {
              fVar26 = *pfVar8;
              *pfVar8 = *pfVar9;
              *pfVar9 = fVar26;
              fVar26 = param_1[4];
              param_1[4] = param_1[7];
              param_1[7] = fVar26;
              uVar4 = *(undefined1 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 8);
              *(undefined1 *)(param_1 + 8) = uVar4;
              pfVar11 = pfVar8;
              FUN_109576a70(pfVar8,param_1);
              if (((uint)pfVar11 & 0xff) == 1) {
                fVar26 = *param_1;
                *param_1 = *pfVar8;
                *pfVar8 = fVar26;
                fVar26 = param_1[1];
                param_1[1] = param_1[4];
                param_1[4] = fVar26;
                uVar4 = *(undefined1 *)(param_1 + 2);
                *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 5);
                *(undefined1 *)(param_1 + 5) = uVar4;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar25 < 0x120) {
      pfVar8 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 == pfStack_78 || pfVar8 == pfStack_78) {
          return;
        }
        pfVar11 = param_1 + 5;
        do {
          pfVar9 = pfVar8;
          pfVar8 = pfVar9;
          FUN_109576a70(pfVar9,param_1);
          if (((uint)pfVar8 & 0xff) == 1) {
            fVar27 = *pfVar9;
            fVar26 = pfVar9[1];
            bVar5 = *(byte *)(pfVar9 + 2);
            fVar28 = *param_1;
            pfVar8 = pfVar11;
            do {
              pfVar10 = pfVar8;
              pfVar10[-2] = fVar28;
              pfVar10[-1] = pfVar10[-4];
              pfVar8 = pfVar10 + -3;
              *(byte *)pfVar10 = *(byte *)pfVar8;
              fVar28 = pfVar10[-8];
              uVar13 = 0;
              if (fVar27 != fVar28) {
                uVar13 = 0xffffff81;
              }
              if (fVar28 < fVar27) {
                uVar13 = 1;
              }
              if (fVar27 < fVar28) {
                uVar13 = 0xffffffff;
              }
              if (uVar13 == 0) {
                uVar13 = 1;
                if ((int)fVar26 < (int)pfVar10[-7]) {
                  uVar13 = 0xffffffff;
                }
                if ((fVar26 == pfVar10[-7]) &&
                   (uVar13 = (uint)(*(byte *)(pfVar10 + -6) < bVar5),
                   bVar5 < *(byte *)(pfVar10 + -6))) {
                  uVar13 = 0xffffffff;
                }
              }
            } while ((uVar13 & 0xff) == 1);
            pfVar10[-5] = fVar27;
            pfVar10[-4] = fVar26;
            *(byte *)pfVar8 = bVar5;
          }
          pfVar11 = pfVar11 + 3;
          pfVar8 = pfVar9 + 3;
          param_1 = pfVar9;
        } while (pfVar9 + 3 != pfStack_78);
        return;
      }
      if (param_1 == pfStack_78 || pfVar8 == pfStack_78) {
        return;
      }
      lVar17 = 0;
      pfVar11 = param_1;
      goto LAB_109575f5c;
    }
    if (param_3 == 0) {
      if (param_1 == pfStack_78) {
        return;
      }
      uVar22 = uVar23 - 2 >> 1;
      uVar14 = uVar22;
      goto LAB_10957603c;
    }
    pfVar8 = param_1 + (uVar23 >> 1) * 3;
    if (uVar25 < 0x601) {
      FUN_109576458(pfVar8,param_1,pfVar11);
    }
    else {
      FUN_109576458(param_1,pfVar8,pfVar11);
      FUN_109576458(param_1 + 3,pfVar8 + -3,pfStack_78 + -6);
      FUN_109576458(param_1 + 6,pfVar8 + 3,pfStack_78 + -9);
      FUN_109576458(pfVar8 + -3,pfVar8,pfVar8 + 3);
      fVar26 = *param_1;
      *param_1 = *pfVar8;
      *pfVar8 = fVar26;
      fVar26 = param_1[1];
      param_1[1] = pfVar8[1];
      pfVar8[1] = fVar26;
      uVar4 = *(undefined1 *)(param_1 + 2);
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfVar8 + 2);
      *(undefined1 *)(pfVar8 + 2) = uVar4;
    }
    param_3 = param_3 + -1;
    uVar13 = 0xffffff81;
    uVar19 = 0xffffffff;
    if ((param_4 & 1) != 0) break;
    pfVar8 = param_1 + -3;
    FUN_109576a70(pfVar8,param_1);
    if (((uint)pfVar8 & 0xff) == 1) break;
    fVar27 = *param_1;
    fVar26 = param_1[1];
    bVar5 = *(byte *)(param_1 + 2);
    fVar28 = *pfVar11;
    uVar15 = 0;
    if (fVar27 != fVar28) {
      uVar15 = uVar13;
    }
    if (fVar28 < fVar27) {
      uVar15 = 1;
    }
    if (fVar27 < fVar28) {
      uVar15 = 0xffffffff;
    }
    if (uVar15 == 0) {
      uVar15 = 1;
      if ((int)fVar26 < (int)pfStack_78[-2]) {
        uVar15 = uVar19;
      }
      if ((fVar26 == pfStack_78[-2]) &&
         (uVar15 = (uint)(*(byte *)(pfStack_78 + -1) < bVar5), bVar5 < *(byte *)(pfStack_78 + -1)))
      {
        uVar15 = 0xffffffff;
      }
    }
    pfVar9 = param_1;
    if ((uVar15 & 0xff) == 1) {
      do {
        pfVar8 = pfVar9 + 3;
        fVar28 = *pfVar8;
        uVar15 = 0;
        if (fVar27 != fVar28) {
          uVar15 = uVar13;
        }
        if (fVar28 < fVar27) {
          uVar15 = 1;
        }
        if (fVar27 < fVar28) {
          uVar15 = 0xffffffff;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
          if ((int)fVar26 < (int)pfVar9[4]) {
            uVar15 = uVar19;
          }
          if ((fVar26 == pfVar9[4]) &&
             (uVar15 = (uint)(*(byte *)(pfVar9 + 5) < bVar5), bVar5 < *(byte *)(pfVar9 + 5))) {
            uVar15 = 0xffffffff;
          }
        }
        pfVar9 = pfVar8;
      } while ((uVar15 & 0xff) != 1);
    }
    else {
      do {
        pfVar8 = pfVar9 + 3;
        if (pfStack_78 <= pfVar8) break;
        fVar28 = *pfVar8;
        uVar15 = 0;
        if (fVar27 != fVar28) {
          uVar15 = uVar13;
        }
        if (fVar28 < fVar27) {
          uVar15 = 1;
        }
        if (fVar27 < fVar28) {
          uVar15 = 0xffffffff;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
          if ((int)fVar26 < (int)pfVar9[4]) {
            uVar15 = uVar19;
          }
          if ((fVar26 == pfVar9[4]) &&
             (uVar15 = (uint)(*(byte *)(pfVar9 + 5) < bVar5), bVar5 < *(byte *)(pfVar9 + 5))) {
            uVar15 = 0xffffffff;
          }
        }
        pfVar9 = pfVar8;
      } while ((uVar15 & 0xff) != 1);
    }
    pfVar9 = pfStack_78;
    pfVar10 = pfStack_78;
    if (pfVar8 < pfStack_78) {
      do {
        pfVar9 = pfVar10 + -3;
        fVar28 = *pfVar9;
        uVar15 = 0;
        if (fVar27 != fVar28) {
          uVar15 = uVar13;
        }
        if (fVar28 < fVar27) {
          uVar15 = 1;
        }
        if (fVar27 < fVar28) {
          uVar15 = 0xffffffff;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
          if ((int)fVar26 < (int)pfVar10[-2]) {
            uVar15 = uVar19;
          }
          if ((fVar26 == pfVar10[-2]) &&
             (uVar15 = (uint)(*(byte *)(pfVar10 + -1) < bVar5), bVar5 < *(byte *)(pfVar10 + -1))) {
            uVar15 = 0xffffffff;
          }
        }
        pfVar10 = pfVar9;
      } while ((uVar15 & 0xff) == 1);
    }
    if (pfVar8 < pfVar9) {
      fVar28 = *pfVar8;
      fVar29 = *pfVar9;
      do {
        *pfVar8 = fVar29;
        *pfVar9 = fVar28;
        fVar28 = pfVar8[1];
        pfVar8[1] = pfVar9[1];
        pfVar9[1] = fVar28;
        uVar4 = *(undefined1 *)(pfVar8 + 2);
        *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar9 + 2);
        *(undefined1 *)(pfVar9 + 2) = uVar4;
        pfVar10 = pfVar8;
        do {
          pfVar8 = pfVar10 + 3;
          fVar28 = *pfVar8;
          uVar15 = 0;
          if (fVar27 != fVar28) {
            uVar15 = uVar13;
          }
          if (fVar28 < fVar27) {
            uVar15 = 1;
          }
          if (fVar27 < fVar28) {
            uVar15 = 0xffffffff;
          }
          if (uVar15 == 0) {
            uVar15 = 1;
            if ((int)fVar26 < (int)pfVar10[4]) {
              uVar15 = uVar19;
            }
            if ((fVar26 == pfVar10[4]) &&
               (uVar15 = (uint)(*(byte *)(pfVar10 + 5) < bVar5), bVar5 < *(byte *)(pfVar10 + 5))) {
              uVar15 = 0xffffffff;
            }
          }
          pfVar12 = pfVar9;
          pfVar10 = pfVar8;
        } while ((uVar15 & 0xff) != 1);
        do {
          pfVar9 = pfVar12 + -3;
          fVar29 = *pfVar9;
          uVar15 = 0;
          if (fVar27 != fVar29) {
            uVar15 = uVar13;
          }
          if (fVar29 < fVar27) {
            uVar15 = 1;
          }
          if (fVar27 < fVar29) {
            uVar15 = 0xffffffff;
          }
          if (uVar15 == 0) {
            uVar15 = 1;
            if ((int)fVar26 < (int)pfVar12[-2]) {
              uVar15 = uVar19;
            }
            if ((fVar26 == pfVar12[-2]) &&
               (uVar15 = (uint)(*(byte *)(pfVar12 + -1) < bVar5), bVar5 < *(byte *)(pfVar12 + -1)))
            {
              uVar15 = 0xffffffff;
            }
          }
          pfVar12 = pfVar9;
        } while ((uVar15 & 0xff) == 1);
      } while (pfVar8 < pfVar9);
    }
    if (pfVar8 + -3 != param_1) {
      *param_1 = pfVar8[-3];
      param_1[1] = pfVar8[-2];
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfVar8 + -1);
    }
    param_4 = 0;
    pfVar8[-3] = fVar27;
    pfVar8[-2] = fVar26;
    *(byte *)(pfVar8 + -1) = bVar5;
  }
  lVar17 = 0;
  fVar27 = *param_1;
  fVar26 = param_1[1];
  bVar5 = *(byte *)(param_1 + 2);
  do {
    fVar28 = *(float *)((long)param_1 + lVar17 + 0xc);
    uVar21 = 0xffffff81;
    uVar15 = 0;
    if (fVar28 != fVar27) {
      uVar15 = uVar21;
    }
    if (fVar27 < fVar28) {
      uVar15 = 1;
    }
    if (fVar28 < fVar27) {
      uVar15 = 0xffffffff;
    }
    if (uVar15 == 0) {
      fVar29 = *(float *)((long)param_1 + lVar17 + 0x10);
      uVar15 = 1;
      if ((int)fVar29 < (int)fVar26) {
        uVar15 = 0xffffffff;
      }
      if ((fVar29 == fVar26) &&
         (bVar6 = *(byte *)((long)param_1 + lVar17 + 0x14), uVar15 = (uint)(bVar5 < bVar6),
         bVar6 < bVar5)) {
        uVar15 = 0xffffffff;
      }
    }
    lVar17 = lVar17 + 0xc;
  } while ((uVar15 & 0xff) == 1);
  pfVar9 = (float *)((long)param_1 + lVar17);
  pfVar8 = pfStack_78;
  if (lVar17 == 0xc) {
    do {
      pfVar10 = pfVar8;
      if (pfVar8 <= pfVar9) break;
      pfVar10 = pfVar8 + -3;
      fVar29 = *pfVar10;
      uVar15 = 0;
      if (fVar29 != fVar27) {
        uVar15 = uVar21;
      }
      if (fVar27 < fVar29) {
        uVar15 = 1;
      }
      if (fVar29 < fVar27) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0) {
        uVar15 = 1;
        if ((int)pfVar8[-2] < (int)fVar26) {
          uVar15 = uVar19;
        }
        if ((pfVar8[-2] == fVar26) &&
           (uVar15 = (uint)(bVar5 < *(byte *)(pfVar8 + -1)), *(byte *)(pfVar8 + -1) < bVar5)) {
          uVar15 = 0xffffffff;
        }
      }
      pfVar8 = pfVar10;
    } while ((uVar15 & 0xff) != 1);
  }
  else {
    do {
      pfVar10 = pfVar8 + -3;
      fVar29 = *pfVar10;
      uVar15 = 0;
      if (fVar29 != fVar27) {
        uVar15 = uVar21;
      }
      if (fVar27 < fVar29) {
        uVar15 = 1;
      }
      if (fVar29 < fVar27) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0) {
        uVar15 = 1;
        if ((int)pfVar8[-2] < (int)fVar26) {
          uVar15 = uVar19;
        }
        if ((pfVar8[-2] == fVar26) &&
           (uVar15 = (uint)(bVar5 < *(byte *)(pfVar8 + -1)), *(byte *)(pfVar8 + -1) < bVar5)) {
          uVar15 = 0xffffffff;
        }
      }
      pfVar8 = pfVar10;
    } while ((uVar15 & 0xff) != 1);
  }
  pfVar8 = pfVar9;
  if (pfVar9 < pfVar10) {
    fVar29 = *pfVar10;
    pfVar12 = pfVar10;
    do {
      *pfVar8 = fVar29;
      *pfVar12 = fVar28;
      fVar28 = pfVar8[1];
      pfVar8[1] = pfVar12[1];
      pfVar12[1] = fVar28;
      uVar4 = *(undefined1 *)(pfVar8 + 2);
      *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar12 + 2);
      *(undefined1 *)(pfVar12 + 2) = uVar4;
      pfVar24 = pfVar8;
      do {
        pfVar8 = pfVar24 + 3;
        fVar28 = *pfVar8;
        uVar19 = 0;
        if (fVar28 != fVar27) {
          uVar19 = uVar21;
        }
        if (fVar27 < fVar28) {
          uVar19 = 1;
        }
        if (fVar28 < fVar27) {
          uVar19 = 0xffffffff;
        }
        if (uVar19 == 0) {
          uVar19 = 1;
          if ((int)pfVar24[4] < (int)fVar26) {
            uVar19 = 0xffffffff;
          }
          if ((pfVar24[4] == fVar26) &&
             (uVar19 = (uint)(bVar5 < *(byte *)(pfVar24 + 5)), *(byte *)(pfVar24 + 5) < bVar5)) {
            uVar19 = 0xffffffff;
          }
        }
        pfVar18 = pfVar12;
        pfVar24 = pfVar8;
      } while ((uVar19 & 0xff) == 1);
      do {
        pfVar12 = pfVar18 + -3;
        fVar29 = *pfVar12;
        uVar19 = 0;
        if (fVar29 != fVar27) {
          uVar19 = uVar13;
        }
        if (fVar27 < fVar29) {
          uVar19 = 1;
        }
        if (fVar29 < fVar27) {
          uVar19 = 0xffffffff;
        }
        if (uVar19 == 0) {
          uVar19 = 1;
          if ((int)pfVar18[-2] < (int)fVar26) {
            uVar19 = 0xffffffff;
          }
          if ((pfVar18[-2] == fVar26) &&
             (uVar19 = (uint)(bVar5 < *(byte *)(pfVar18 + -1)), *(byte *)(pfVar18 + -1) < bVar5)) {
            uVar19 = 0xffffffff;
          }
        }
        pfVar18 = pfVar12;
      } while ((uVar19 & 0xff) != 1);
    } while (pfVar8 < pfVar12);
  }
  pfVar12 = pfVar8 + -3;
  if (pfVar12 != param_1) {
    *param_1 = pfVar8[-3];
    param_1[1] = pfVar8[-2];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(pfVar8 + -1);
  }
  pfVar8[-3] = fVar27;
  pfVar8[-2] = fVar26;
  *(byte *)(pfVar8 + -1) = bVar5;
  if (pfVar10 <= pfVar9) {
    pfVar9 = param_1;
    FUN_109576848(param_1,pfVar12);
    pfVar10 = pfVar8;
    FUN_109576848(pfVar8,pfStack_78);
    if ((int)pfVar10 != 0) goto LAB_109575e3c;
    if (((ulong)pfVar9 & 1) != 0) goto LAB_109575854;
  }
  FUN_109575800(param_1,pfVar12,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_109575854;
LAB_109575f5c:
  pfVar9 = pfVar8;
  pfVar8 = pfVar9;
  FUN_109576a70(pfVar9,pfVar11);
  if (((uint)pfVar8 & 0xff) == 1) {
    fVar27 = *pfVar9;
    fVar26 = pfVar9[1];
    bVar5 = *(byte *)(pfVar9 + 2);
    fVar28 = *pfVar11;
    lVar7 = lVar17;
    do {
      lVar16 = lVar7;
      *(float *)((long)param_1 + lVar16 + 0xc) = fVar28;
      *(undefined4 *)((long)param_1 + lVar16 + 0x10) = *(undefined4 *)((long)param_1 + lVar16 + 4);
      *(undefined1 *)((long)param_1 + lVar16 + 0x14) = *(undefined1 *)((long)param_1 + lVar16 + 8);
      pfVar8 = param_1;
      if (lVar16 == 0) goto LAB_109576008;
      fVar28 = *(float *)((long)param_1 + lVar16 + -0xc);
      uVar13 = 0;
      if (fVar27 != fVar28) {
        uVar13 = 0xffffff81;
      }
      if (fVar28 < fVar27) {
        uVar13 = 1;
      }
      if (fVar27 < fVar28) {
        uVar13 = 0xffffffff;
      }
      if (uVar13 == 0) {
        fVar29 = *(float *)((long)param_1 + lVar16 + -8);
        uVar13 = 1;
        if ((int)fVar26 < (int)fVar29) {
          uVar13 = 0xffffffff;
        }
        if ((fVar26 == fVar29) &&
           (bVar6 = *(byte *)((long)param_1 + lVar16 + -4), uVar13 = (uint)(bVar6 < bVar5),
           bVar5 < bVar6)) {
          uVar13 = 0xffffffff;
        }
      }
      lVar7 = lVar16 + -0xc;
    } while ((uVar13 & 0xff) == 1);
    pfVar8 = (float *)((long)param_1 + lVar16);
LAB_109576008:
    *pfVar8 = fVar27;
    pfVar8[1] = fVar26;
    *(byte *)(pfVar8 + 2) = bVar5;
  }
  lVar17 = lVar17 + 0xc;
  pfVar8 = pfVar9 + 3;
  pfVar11 = pfVar9;
  if (pfVar9 + 3 == pfStack_78) {
    return;
  }
  goto LAB_109575f5c;
LAB_10957603c:
  do {
    if ((long)uVar14 <= (long)uVar22) {
      uVar2 = uVar14 << 1 | 1;
      pfVar11 = param_1 + uVar2 * 3;
      uVar1 = uVar14 * 2 + 2;
      uVar20 = uVar2;
      pfVar8 = pfVar11;
      if ((long)uVar1 < (long)uVar23) {
        pfVar9 = pfVar11;
        FUN_109576a70(pfVar11,pfVar11 + 3);
        uVar20 = uVar1;
        pfVar8 = pfVar11 + 3;
        if (((uint)pfVar9 & 0xff) != 1) {
          uVar20 = uVar2;
          pfVar8 = pfVar11;
        }
      }
      pfVar9 = param_1 + uVar14 * 3;
      pfVar11 = pfVar8;
      FUN_109576a70(pfVar8,pfVar9);
      if (((uint)pfVar11 & 0xff) != 1) {
        fVar28 = *pfVar9;
        fVar26 = pfVar9[1];
        bVar5 = *(byte *)(pfVar9 + 2);
        fVar27 = *pfVar8;
        do {
          pfVar11 = pfVar8;
          *pfVar9 = fVar27;
          pfVar9[1] = pfVar11[1];
          *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar11 + 2);
          if ((long)uVar22 < (long)uVar20) break;
          uVar2 = uVar20 << 1 | 1;
          pfVar9 = param_1 + uVar2 * 3;
          uVar1 = uVar20 * 2 + 2;
          uVar20 = uVar2;
          pfVar8 = pfVar9;
          if ((long)uVar1 < (long)uVar23) {
            pfVar10 = pfVar9;
            FUN_109576a70(pfVar9,pfVar9 + 3);
            uVar20 = uVar1;
            pfVar8 = pfVar9 + 3;
            if (((uint)pfVar10 & 0xff) != 1) {
              uVar20 = uVar2;
              pfVar8 = pfVar9;
            }
          }
          fVar27 = *pfVar8;
          uVar13 = 0;
          if (fVar27 != fVar28) {
            uVar13 = 0xffffff81;
          }
          if (fVar28 < fVar27) {
            uVar13 = 1;
          }
          if (fVar27 < fVar28) {
            uVar13 = 0xffffffff;
          }
          if (uVar13 == 0) {
            uVar13 = 1;
            if ((int)pfVar8[1] < (int)fVar26) {
              uVar13 = 0xffffffff;
            }
            if ((pfVar8[1] == fVar26) &&
               (uVar13 = (uint)(bVar5 < *(byte *)(pfVar8 + 2)), *(byte *)(pfVar8 + 2) < bVar5)) {
              uVar13 = 0xffffffff;
            }
          }
          pfVar9 = pfVar11;
        } while ((uVar13 & 0xff) != 1);
        *pfVar11 = fVar28;
        pfVar11[1] = fVar26;
        *(byte *)(pfVar11 + 2) = bVar5;
      }
    }
    bVar3 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar3);
  lVar17 = (uVar25 >> 2) * -0x5555555555555555;
  do {
    uVar23 = 0;
    fVar27 = *param_1;
    fVar26 = param_1[1];
    uVar4 = *(undefined1 *)(param_1 + 2);
    pfVar8 = param_1;
    do {
      pfVar11 = pfVar8 + uVar23 * 3 + 3;
      uVar14 = uVar23 << 1 | 1;
      uVar25 = uVar23 * 2 + 2;
      uVar22 = uVar14;
      pfVar9 = pfVar11;
      if ((long)uVar25 < lVar17) {
        pfVar10 = pfVar11;
        FUN_109576a70(pfVar11,pfVar8 + uVar23 * 3 + 6);
        uVar22 = uVar25;
        pfVar9 = pfVar8 + uVar23 * 3 + 6;
        if (((uint)pfVar10 & 0xff) != 1) {
          uVar22 = uVar14;
          pfVar9 = pfVar11;
        }
      }
      uVar23 = uVar22;
      *pfVar8 = *pfVar9;
      pfVar8[1] = pfVar9[1];
      *(undefined1 *)(pfVar8 + 2) = *(undefined1 *)(pfVar9 + 2);
      pfVar8 = pfVar9;
    } while ((long)uVar23 <= (lVar17 + -2) / 2);
    if (pfVar9 == pfStack_78 + -3) {
      *pfVar9 = fVar27;
      pfVar9[1] = fVar26;
      *(undefined1 *)(pfVar9 + 2) = uVar4;
    }
    else {
      *pfVar9 = pfStack_78[-3];
      pfVar9[1] = pfStack_78[-2];
      *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfStack_78 + -1);
      pfStack_78[-3] = fVar27;
      pfStack_78[-2] = fVar26;
      *(undefined1 *)(pfStack_78 + -1) = uVar4;
      uVar23 = (long)pfVar9 + (0xc - (long)param_1);
      if (0xc < (long)uVar23) {
        uVar23 = (uVar23 >> 2) * -0x5555555555555555 - 2 >> 1;
        pfVar11 = param_1 + uVar23 * 3;
        pfVar8 = pfVar11;
        FUN_109576a70(pfVar11,pfVar9);
        if (((uint)pfVar8 & 0xff) == 1) {
          fVar27 = *pfVar9;
          fVar26 = pfVar9[1];
          bVar5 = *(byte *)(pfVar9 + 2);
          fVar28 = *pfVar11;
          do {
            pfVar8 = pfVar11;
            *pfVar9 = fVar28;
            pfVar9[1] = pfVar8[1];
            *(undefined1 *)(pfVar9 + 2) = *(undefined1 *)(pfVar8 + 2);
            if (uVar23 == 0) break;
            uVar23 = uVar23 - 1 >> 1;
            pfVar11 = param_1 + uVar23 * 3;
            fVar28 = *pfVar11;
            uVar13 = 0;
            if (fVar28 != fVar27) {
              uVar13 = 0xffffff81;
            }
            if (fVar27 < fVar28) {
              uVar13 = 1;
            }
            if (fVar28 < fVar27) {
              uVar13 = 0xffffffff;
            }
            if (uVar13 == 0) {
              uVar13 = 1;
              if ((int)pfVar11[1] < (int)fVar26) {
                uVar13 = 0xffffffff;
              }
              if ((pfVar11[1] == fVar26) &&
                 (uVar13 = (uint)(bVar5 < *(byte *)(pfVar11 + 2)), *(byte *)(pfVar11 + 2) < bVar5))
              {
                uVar13 = 0xffffffff;
              }
            }
            pfVar9 = pfVar8;
          } while ((uVar13 & 0xff) == 1);
          *pfVar8 = fVar27;
          pfVar8[1] = fVar26;
          *(byte *)(pfVar8 + 2) = bVar5;
        }
      }
    }
    bVar3 = lVar17 < 3;
    lVar17 = lVar17 + -1;
    pfStack_78 = pfStack_78 + -3;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_109575e3c:
  pfStack_78 = pfVar12;
  if (((ulong)pfVar9 & 1) != 0) {
    return;
  }
  goto LAB_10957583c;
}



/* Entry: 109576458; end: 1095765db;  */

void FUN_109576458(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  puVar4 = param_2;
  FUN_109576a70(param_2,param_1);
  puVar5 = param_3;
  FUN_109576a70(param_3,param_2);
  uVar1 = (uint)puVar5 & 0xff;
  if (((uint)puVar4 & 0xff) == 1) {
    puVar5 = param_1 + 2;
    uVar6 = *param_1;
    if (uVar1 == 1) {
      *param_1 = *param_3;
      *param_3 = uVar6;
      uVar6 = param_1[1];
      param_1[1] = param_3[1];
      param_3[1] = uVar6;
    }
    else {
      *param_1 = *param_2;
      *param_2 = uVar6;
      uVar2 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar2;
      puVar5 = param_2 + 2;
      uVar3 = *(undefined1 *)(param_1 + 2);
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)puVar5;
      *(undefined1 *)puVar5 = uVar3;
      puVar4 = param_3;
      FUN_109576a70(param_3,param_2);
      if (((uint)puVar4 & 0xff) != 1) {
        return;
      }
      *param_2 = *param_3;
      *param_3 = uVar6;
      param_2[1] = param_3[1];
      param_3[1] = uVar2;
    }
    puVar4 = param_3 + 2;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    uVar6 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar6;
    uVar6 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar6;
    puVar4 = param_2 + 2;
    uVar3 = *(undefined1 *)puVar4;
    *(undefined1 *)puVar4 = *(undefined1 *)(param_3 + 2);
    *(undefined1 *)(param_3 + 2) = uVar3;
    puVar5 = param_2;
    FUN_109576a70(param_2,param_1);
    if (((uint)puVar5 & 0xff) != 1) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar6;
    uVar6 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = uVar6;
    puVar5 = param_1 + 2;
  }
  uVar3 = *(undefined1 *)puVar5;
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  *(undefined1 *)puVar4 = uVar3;
  return;
}



/* Entry: 1095765dc; end: 1095766e7;  */

void FUN_1095765dc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_109576458();
  puVar2 = param_4;
  FUN_109576a70(param_4,param_3);
  if (((uint)puVar2 & 0xff) == 1) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar3 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = uVar3;
    uVar1 = *(undefined1 *)(param_3 + 2);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_4 + 2);
    *(undefined1 *)(param_4 + 2) = uVar1;
    puVar2 = param_3;
    FUN_109576a70(param_3,param_2);
    if (((uint)puVar2 & 0xff) == 1) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar3 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = uVar3;
      uVar1 = *(undefined1 *)(param_2 + 2);
      *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 2);
      *(undefined1 *)(param_3 + 2) = uVar1;
      puVar2 = param_2;
      FUN_109576a70(param_2,param_1);
      if (((uint)puVar2 & 0xff) == 1) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
        uVar3 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = uVar3;
        uVar1 = *(undefined1 *)(param_1 + 2);
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
        *(undefined1 *)(param_2 + 2) = uVar1;
      }
    }
  }
  return;
}



/* Entry: 1095766e8; end: 109576847;  */

void FUN_1095766e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_1095765dc();
  puVar2 = param_5;
  FUN_109576a70(param_5,param_4);
  if (((uint)puVar2 & 0xff) == 1) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar3 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = uVar3;
    uVar1 = *(undefined1 *)(param_4 + 2);
    *(undefined1 *)(param_4 + 2) = *(undefined1 *)(param_5 + 2);
    *(undefined1 *)(param_5 + 2) = uVar1;
    puVar2 = param_4;
    FUN_109576a70(param_4,param_3);
    if (((uint)puVar2 & 0xff) == 1) {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar3 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = uVar3;
      uVar1 = *(undefined1 *)(param_3 + 2);
      *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_4 + 2);
      *(undefined1 *)(param_4 + 2) = uVar1;
      puVar2 = param_3;
      FUN_109576a70(param_3,param_2);
      if (((uint)puVar2 & 0xff) == 1) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar3 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = uVar3;
        uVar1 = *(undefined1 *)(param_2 + 2);
        *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 2);
        *(undefined1 *)(param_3 + 2) = uVar1;
        puVar2 = param_2;
        FUN_109576a70(param_2,param_1);
        if (((uint)puVar2 & 0xff) == 1) {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
          uVar3 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = uVar3;
          uVar1 = *(undefined1 *)(param_1 + 2);
          *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
          *(undefined1 *)(param_2 + 2) = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109576848; end: 109576a6f;  */

bool FUN_109576848(float *param_1,float *param_2)

{
  float fVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar7 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      pfVar6 = param_2 + -3;
      FUN_109576a70(pfVar6,param_1);
      if (((uint)pfVar6 & 0xff) != 1) {
        return true;
      }
      fVar14 = *param_1;
      *param_1 = param_2[-3];
      param_2[-3] = fVar14;
      fVar14 = param_1[1];
      param_1[1] = param_2[-2];
      param_2[-2] = fVar14;
      uVar2 = *(undefined1 *)(param_1 + 2);
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + -1);
      *(undefined1 *)(param_2 + -1) = uVar2;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      FUN_109576458(param_1,param_1 + 3,param_2 + -3);
      return true;
    }
    if (uVar7 == 4) {
      FUN_1095765dc(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      return true;
    }
    if (uVar7 == 5) {
      FUN_1095766e8(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
      return true;
    }
  }
  FUN_109576458(param_1,param_1 + 3,param_1 + 6);
  if (param_1 + 9 != param_2) {
    lVar12 = 0;
    iVar13 = 0;
    pfVar6 = param_1 + 9;
    pfVar11 = param_1 + 6;
    do {
      pfVar10 = pfVar6;
      pfVar6 = pfVar10;
      FUN_109576a70(pfVar10,pfVar11);
      if (((uint)pfVar6 & 0xff) == 1) {
        fVar15 = *pfVar10;
        fVar14 = pfVar10[1];
        bVar3 = *(byte *)(pfVar10 + 2);
        fVar16 = *pfVar11;
        lVar5 = lVar12;
        do {
          lVar8 = lVar5;
          *(float *)((long)param_1 + lVar8 + 0x24) = fVar16;
          *(undefined4 *)((long)param_1 + lVar8 + 0x28) =
               *(undefined4 *)((long)param_1 + lVar8 + 0x1c);
          *(undefined1 *)((long)param_1 + lVar8 + 0x2c) =
               *(undefined1 *)((long)param_1 + lVar8 + 0x20);
          pfVar6 = param_1;
          if (lVar8 == -0x18) goto LAB_109576a00;
          fVar16 = *(float *)((long)param_1 + lVar8 + 0xc);
          uVar9 = 0;
          if (fVar15 != fVar16) {
            uVar9 = 0xffffff81;
          }
          if (fVar16 < fVar15) {
            uVar9 = 1;
          }
          if (fVar15 < fVar16) {
            uVar9 = 0xffffffff;
          }
          if (uVar9 == 0) {
            fVar1 = *(float *)((long)param_1 + lVar8 + 0x10);
            uVar9 = 1;
            if ((int)fVar14 < (int)fVar1) {
              uVar9 = 0xffffffff;
            }
            if ((fVar14 == fVar1) &&
               (bVar4 = *(byte *)((long)param_1 + lVar8 + 0x14), uVar9 = (uint)(bVar4 < bVar3),
               bVar3 < bVar4)) {
              uVar9 = 0xffffffff;
            }
          }
          lVar5 = lVar8 + -0xc;
        } while ((uVar9 & 0xff) == 1);
        pfVar6 = (float *)((long)param_1 + lVar8 + 0x18);
LAB_109576a00:
        *pfVar6 = fVar15;
        pfVar6[1] = fVar14;
        *(byte *)(pfVar6 + 2) = bVar3;
        iVar13 = iVar13 + 1;
        if (iVar13 == 8) {
          return pfVar10 + 3 == param_2;
        }
      }
      lVar12 = lVar12 + 0xc;
      pfVar6 = pfVar10 + 3;
      pfVar11 = pfVar10;
    } while (pfVar10 + 3 != param_2);
  }
  return true;
}



/* Entry: 109576a70; end: 109576b9b;  */

uint FUN_109576a70(float *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_1;
  fVar3 = *param_2;
  uVar1 = 0;
  if (fVar2 != fVar3) {
    uVar1 = 0xffffff81;
  }
  if (fVar3 < fVar2) {
    uVar1 = 1;
  }
  if (fVar2 < fVar3) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
    if ((int)param_1[1] < (int)param_2[1]) {
      uVar1 = 0xffffffff;
    }
    if (param_1[1] == param_2[1]) {
      uVar1 = (uint)(*(byte *)(param_2 + 2) < *(byte *)(param_1 + 2));
      if (*(byte *)(param_1 + 2) < *(byte *)(param_2 + 2)) {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
  }
  return uVar1;
}



/* Entry: 109576b9c; end: 109576bd3;  */

void FUN_109576b9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  long param_9)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = param_5;
  uStack_2c = param_6;
  uStack_28 = param_7;
  uStack_24 = param_8;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  (**(code **)(param_9 + 0x10))(&uStack_20,&uStack_30);
  return;
}



/* Entry: 109576bd4; end: 109576bef;  */

void FUN_109576bd4(void)

{
  return;
}



/* Entry: 109576bf0; end: 109576c8b;  */

void FUN_109576bf0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  FUN_109574b6c();
  if (lVar2 != 0) {
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109576c58);
  (*pcVar1)();
}



/* Entry: 109576c8c; end: 109576d83;  */

undefined **
FUN_109576c8c(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = 0x30;
      __Znwm();
      FUN_10934ff2c();
      *param_3 = FUN_109576c8c;
      param_3[1] = uVar2;
      return (undefined **)0x0;
    }
    FUN_10934ffa0(param_2[1]);
    __ZdlPv();
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_110af1790;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10dfd3404);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110af1790);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    *param_3 = FUN_109576c8c;
    param_3[1] = uVar2;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 109576d84; end: 109576d8b;  */

void FUN_109576d84(void)

{
  return;
}



/* Entry: 109576d8c; end: 109576dbf;  */

void FUN_109576d8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afc260;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109576dc0; end: 109576ddb;  */

void FUN_109576dc0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afc260;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109576ddc; end: 109576e13;  */

void FUN_109576ddc(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 8))
            (3,*(undefined8 **)(param_1 + 8),0,&PTR_DAT_110af1790,&UNK_10dfd3404);
  return;
}



/* Entry: 109576e14; end: 109576e4f;  */

long FUN_109576e14(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc2c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109576e50; end: 109576e5b;  */

undefined ** FUN_109576e50(void)

{
  return &PTR_DAT_110afc2c0;
}



/* Entry: 109576e5c; end: 109576ecb;  */

undefined8 * FUN_109576e5c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110afc2e0;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_1095773e4();
  }
  return param_1;
}



/* Entry: 109576ecc; end: 1095773e3;  */

void FUN_109576ecc(long *param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1e8;
  int *piStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined **ppuStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined **ppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long alStack_138 [3];
  char cStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  int *piStack_f8;
  int *piStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1d0 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    plStack_1d8 = alStack_d0;
    pcStack_1e8 = (code *)alStack_138;
    unaff_x20 = 0x18;
    piStack_1e0 = param_2;
    do {
      FUN_109574760(auStack_e0);
      ppuStack_1c8 = &PTR_FUN_110af16c8;
      uStack_1c0 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      do {
        puVar8 = auStack_e0;
        func_0x000109574af4();
        if (puVar8 == (undefined1 *)0x0) {
          func_0x0001056853dc(auStack_e0);
          func_0x000105688514(&UNK_10f573f98);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109577354);
          (*pcVar7)();
        }
        puVar8 = auStack_e0;
        func_0x000109574af4();
      } while (puVar8 != (undefined1 *)0x1);
      puVar8 = auStack_e0;
      FUN_109576bf0(puVar8);
      puVar16 = (undefined4 *)plStack_1d0[1];
      FUN_109558b3c(&lStack_168,puVar16,puVar8);
      if (lStack_160 - lStack_168 == 0) {
        ppuStack_198 = &PTR_FUN_110af16c8;
        uStack_190 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
      }
      else {
        uStack_118 = lStack_160 - lStack_168 >> 4;
        uStack_110 = 0;
        if (uStack_118 != 0) {
          uStack_110 = (undefined4)((ulong)(lStack_148 - lStack_150 >> 2) / uStack_118);
        }
        uStack_10c = *puVar16;
        uStack_108 = *(undefined8 *)(puVar16 + 1);
        uStack_100 = 0;
        uStack_ff = *(undefined1 *)(puVar16 + 3);
        pcStack_b0 = FUN_109576b9c;
        ppuStack_a8 = &PTR_FUN_110afc238;
        pcStack_a0 = FUN_109575348;
        FUN_109574c18(&piStack_f8,lStack_168,lStack_150,&uStack_118,&pcStack_b0);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        piVar6 = piStack_f0;
        ppuStack_198 = &PTR_FUN_110af16c8;
        uStack_190 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
        for (piVar1 = piStack_f8; piVar1 != piVar6; piVar1 = piVar1 + 3) {
          puVar9 = &uStack_188;
          func_0x000107c303b0(puVar9,FUN_10935032c);
          *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 1;
          uVar10 = puVar9[6];
          if (uVar10 == 0) {
            uVar10 = puVar9[1];
            if ((uVar10 & 1) != 0) {
              uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            FUN_1093492b0();
            puVar9[6] = uVar10;
          }
          puVar11 = (undefined8 *)(lStack_168 + (long)*piVar1 * 0x10);
          uVar17 = *puVar11;
          uVar18 = puVar11[1];
          *(undefined8 *)(uVar10 + 0x10) = uVar17;
          *(ulong *)(uVar10 + 0x18) =
               CONCAT44((float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                        (float)uVar18 - (float)uVar17);
          puVar11 = puVar9 + 3;
          func_0x000107c303b0(puVar11,FUN_10934a22c);
          *(int *)(puVar11 + 3) = piVar1[1];
          *(int *)((long)puVar11 + 0x1c) = piVar1[2];
          uVar10 = puVar11[1];
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(puVar11 + 2,*(long *)(puVar16 + 4) + (long)piVar1[1] * 0x18,uVar10);
          lVar14 = alStack_138[0];
          if (cStack_120 == '\x01') {
            iVar3 = *piVar1;
            *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 4;
            uVar10 = puVar9[8];
            if (uVar10 == 0) {
              uVar10 = puVar9[1];
              if ((uVar10 & 1) != 0) {
                uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
              }
              FUN_1093616ac();
              puVar9[8] = uVar10;
            }
            lVar14 = lVar14 + (long)iVar3 * 0x60;
            *(undefined4 *)(uVar10 + 0x18) = *(undefined4 *)(lVar14 + 0xc);
            iVar3 = *(int *)(lVar14 + 8);
            *(int *)(uVar10 + 0x1c) = iVar3;
            uVar13 = *(ulong *)(uVar10 + 8);
            if ((uVar13 & 1) != 0) {
              uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar10 + 0x10,*(undefined8 *)(lVar14 + 0x10),
                                (long)*(int *)(lVar14 + 0xc) * (long)iVar3,uVar13);
          }
        }
        param_2 = piStack_1e0;
        if (piStack_f8 != (int *)0x0) {
          __ZdlPv(piStack_f8);
          param_2 = piStack_1e0;
        }
      }
      if (cStack_120 == '\x01') {
        pcStack_b0 = pcStack_1e8;
        FUN_1093702c4(&pcStack_b0);
      }
      if (lStack_150 != 0) {
        lStack_148 = lStack_150;
        __ZdlPv();
      }
      if (lStack_168 != 0) {
        lStack_160 = lStack_168;
        __ZdlPv();
      }
      uVar18 = uStack_1b0;
      uVar17 = uStack_1b8;
      uVar10 = uStack_1c0;
      uVar13 = uStack_1c0;
      if ((uStack_1c0 & 1) != 0) {
        uVar13 = *(ulong *)(uStack_1c0 & 0xfffffffffffffffe);
      }
      uVar15 = uStack_190;
      if ((uStack_190 & 1) != 0) {
        uVar15 = *(ulong *)(uStack_190 & 0xfffffffffffffffe);
      }
      if (uVar13 == uVar15) {
        uStack_1c0 = uStack_190;
        uStack_190 = uVar10;
        uStack_1b0 = uStack_180;
        uStack_1b8 = uStack_188;
        uStack_180 = uVar18;
        uStack_188 = uVar17;
      }
      else {
        FUN_10934fff8(&ppuStack_1c8);
        FUN_109350260(&ppuStack_1c8,&ppuStack_198);
      }
      FUN_10934ffa0(&ppuStack_198);
      FUN_109574870(param_2,&ppuStack_1c8);
      FUN_10934ffa0(&ppuStack_1c8);
      param_1 = plStack_b8;
      if (plStack_b8 == plStack_1d8) {
        lVar14 = 0x20;
LAB_109577280:
        (**(code **)(*plStack_b8 + lVar14))();
      }
      else if (plStack_b8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_109577280;
      }
      plVar12 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar2 = plStack_d8 + 1;
        do {
          lVar14 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar12;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  func_0x000109577440(&lStack_168);
  FUN_10934ffa0(&ppuStack_1c8);
  func_0x000109574aa8(auStack_e0);
  plVar12 = param_1;
  __Unwind_Resume();
  uStack_1f8 = 0x1095773e4;
  plStack_218 = plVar12 + 8;
  uStack_210 = unaff_x20;
  plStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  FUN_10955aa20(&plStack_218);
  plStack_218 = plVar12 + 5;
  FUN_10955aa60(&plStack_218);
  plStack_218 = plVar12 + 2;
  func_0x000104c607c8(&plStack_218);
  __ZdlPv(plVar12);
  return;
}



/* Entry: 1095773e4; end: 109577513;  */

void FUN_1095773e4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x40;
  FUN_10955aa20(&lStack_28);
  lStack_28 = param_1 + 0x28;
  FUN_10955aa60(&lStack_28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 109577514; end: 10957811b;  */

long * FUN_109577514(long *param_1,int *param_2)

{
  ulong uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  int *piVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  int *piVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  long lVar30;
  int *piVar31;
  uint uVar32;
  float *pfVar33;
  long lVar34;
  ulong uVar35;
  float fVar36;
  int iVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int iVar45;
  int iVar46;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long *plStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  code *pcStack_250;
  int *piStack_248;
  int *piStack_240;
  long *plStack_238;
  long *plStack_230;
  long lStack_228;
  long lStack_220;
  int *piStack_218;
  undefined **ppuStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined **ppuStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  float *pfStack_198;
  float *pfStack_190;
  long alStack_180 [3];
  char cStack_168;
  int *piStack_160;
  int *piStack_158;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  int *piStack_118;
  int *piStack_110;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  code *pcStack_c0;
  long lStack_90;
  float *pfVar29;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)(long)*param_2;
  plVar16 = (long *)**(undefined8 **)(param_2 + 2);
  plStack_230 = param_1;
  if (plVar16[(long)*(int *)((*(undefined8 **)(param_2 + 2))[0xc] + (long)plVar13 * 4) * 10 + 8] !=
      0) {
    plStack_238 = alStack_f0;
    pcStack_250 = (code *)alStack_180;
    piStack_240 = param_2;
    do {
      FUN_109574760(auStack_100);
      ppuStack_210 = &PTR_FUN_110af16c8;
      uStack_208 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      while( true ) {
        puVar8 = auStack_100;
        func_0x000109574af4();
        if (puVar8 == (undefined1 *)0x0) break;
        puVar8 = auStack_100;
        func_0x000109574af4();
        if (puVar8 == (undefined1 *)0x1) {
          FUN_109576bf0(auStack_100);
          func_0x000105688514(&UNK_10f56faf5);
          goto LAB_109577ff4;
        }
      }
      puVar8 = auStack_100;
      func_0x0001056853dc(puVar8);
      piVar31 = (int *)plStack_230[1];
      FUN_109559b78(&lStack_1b0,piVar31,puVar8);
      pfVar33 = pfStack_198;
      lVar21 = lStack_1b0;
      if (lStack_1a8 - lStack_1b0 == 0) {
        ppuStack_1e0 = &PTR_FUN_110af16c8;
        uStack_1d8 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
      }
      else {
        lVar30 = (long)*piVar31;
        iVar45 = piVar31[1];
        iVar46 = piVar31[2];
        pcStack_d0 = FUN_1095787cc;
        ppuStack_c8 = &PTR_FUN_110afc370;
        pcStack_c0 = FUN_10957838c;
        if (lStack_1b0 == 0) {
          piStack_160 = (int *)0x0;
          piStack_158 = (int *)0x0;
          piStack_150 = (int *)0x0;
        }
        else {
          uVar35 = lStack_1a8 - lStack_1b0 >> 4;
          uVar10 = 0;
          if (uVar35 != 0) {
            uVar10 = (ulong)((long)pfStack_190 - (long)pfStack_198 >> 2) / uVar35;
          }
          if ((char)piVar31[3] == '\0') {
            FUN_10925b8c4(&piStack_118,lVar30 << 1);
            FUN_109367d10(&lStack_130,uVar35);
            iVar37 = (int)uVar10;
            piStack_248 = piVar31;
            if (iVar37 < 1) {
              piVar31 = (int *)0x0;
            }
            else {
              uVar17 = 0;
              piVar31 = (int *)0x0;
              lStack_220 = lVar21;
              lStack_228 = lVar30;
              do {
                uVar19 = 0;
                do {
                  *(float *)(lStack_130 + uVar19 * 4) =
                       pfVar33[uVar17 + uVar19 * (uVar10 & 0x7fffffff)];
                  uVar19 = uVar19 + 1;
                } while (uVar35 != uVar19);
                piStack_148 = (int *)0x0;
                piStack_140 = (int *)0x0;
                uStack_138 = 0;
                FUN_1095783f8(iVar45,iVar46,lVar21,uVar35,lStack_130,lVar30,&piStack_148,&pcStack_d0
                             );
                piVar15 = piStack_118;
                if (piStack_148 != piStack_140) {
                  piVar14 = piStack_118 + (int)piVar31;
                  piVar20 = piStack_148;
                  do {
                    piVar23 = piVar20 + 1;
                    *piVar14 = (int)uVar17 + *piVar20 * iVar37;
                    piVar31 = (int *)(ulong)((int)piVar31 + 1);
                    piVar14 = piVar14 + 1;
                    piVar20 = piVar23;
                  } while (piVar23 != piStack_140);
                }
                uVar32 = (uint)piVar31;
                uVar3 = (uint)lVar30;
                if ((int)uVar32 <= (int)(uint)lVar30) {
                  uVar3 = uVar32;
                }
                piVar14 = (int *)(ulong)uVar3;
                if (uVar3 != 0) {
                  lVar34 = (long)(int)uVar3;
                  piStack_218 = piVar14;
                  if (1 < (int)uVar3) {
                    uVar19 = lVar34 - 2U >> 1;
                    piVar14 = piStack_118 + uVar19;
                    lVar21 = uVar19 + 1;
                    do {
                      FUN_1095786f8(piVar15,pfVar33,lVar34,piVar14);
                      piVar14 = piVar14 + -1;
                      lVar21 = lVar21 + -1;
                    } while (lVar21 != 0);
                  }
                  piVar20 = piVar15 + (int)piStack_218;
                  if ((-((ulong)piStack_218 >> 0x1f & 1) & 0xfffffffc00000000 |
                      ((ulong)piStack_218 & 0xffffffff) << 2) !=
                      (-((ulong)piVar31 >> 0x1f & 1) & 0xfffffffc00000000 |
                      ((ulong)piVar31 & 0xffffffff) << 2)) {
                    piVar31 = piVar20;
                    do {
                      iVar4 = *piVar31;
                      if (pfVar33[*piVar15] < pfVar33[iVar4]) {
                        *piVar31 = *piVar15;
                        *piVar15 = iVar4;
                        FUN_1095786f8(piVar15,pfVar33,lVar34,piVar15);
                      }
                      piVar31 = piVar31 + 1;
                    } while (piVar31 != piVar15 + (int)uVar32);
                  }
                  lVar30 = lStack_228;
                  lVar21 = lStack_220;
                  piVar14 = piStack_218;
                  if (1 < (int)piStack_218) {
                    do {
                      iVar4 = *piVar15;
                      piVar31 = piVar15;
                      uVar19 = 0;
                      do {
                        piVar23 = piVar31 + uVar19 + 1;
                        uVar24 = uVar19 << 1 | 1;
                        uVar1 = uVar19 * 2 + 2;
                        if (((long)uVar1 < lVar34) &&
                           (pfVar33[piVar31[uVar19 + 2]] < pfVar33[*piVar23])) {
                          piVar23 = piVar31 + uVar19 + 2;
                          uVar24 = uVar1;
                        }
                        *piVar31 = *piVar23;
                        piVar31 = piVar23;
                        uVar19 = uVar24;
                      } while ((long)uVar24 <= (long)(lVar34 - 2U >> 1));
                      piVar20 = piVar20 + -1;
                      if (piVar20 == piVar23) {
                        *piVar23 = iVar4;
                      }
                      else {
                        *piVar23 = *piVar20;
                        *piVar20 = iVar4;
                        lVar18 = (long)piVar23 + (4 - (long)piVar15) >> 2;
                        if (1 < lVar18) {
                          uVar19 = lVar18 - 2U >> 1;
                          lVar18 = (long)piVar15[uVar19];
                          iVar4 = *piVar23;
                          fVar36 = pfVar33[iVar4];
                          piVar31 = piVar15 + uVar19;
                          if (fVar36 < pfVar33[lVar18]) {
                            do {
                              piVar25 = piVar31;
                              *piVar23 = (int)lVar18;
                              if (uVar19 == 0) break;
                              uVar19 = uVar19 - 1 >> 1;
                              lVar18 = (long)piVar15[uVar19];
                              piVar23 = piVar25;
                              piVar31 = piVar15 + uVar19;
                            } while (fVar36 < pfVar33[lVar18]);
                            *piVar25 = iVar4;
                          }
                        }
                      }
                      bVar6 = 2 < lVar34;
                      lVar34 = lVar34 + -1;
                    } while (bVar6);
                  }
                }
                piVar31 = piVar14;
                if (piStack_148 != (int *)0x0) {
                  piStack_140 = piStack_148;
                  __ZdlPv();
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < (uVar10 & 0x7fffffff));
            }
            piStack_160 = (int *)0x0;
            piStack_158 = (int *)0x0;
            piStack_150 = (int *)0x0;
            piVar15 = (int *)(long)(int)piVar31;
            FUN_1095756a0(&piStack_160);
            if (0 < (int)piVar31) {
              lVar21 = 0;
              do {
                piVar14 = piStack_160;
                iVar45 = *(int *)((long)piStack_118 + lVar21);
                iVar46 = 0;
                if (iVar37 != 0) {
                  iVar46 = iVar45 / iVar37;
                }
                iVar4 = iVar45 - iVar46 * iVar37;
                fVar36 = pfVar33[iVar45];
                if (piStack_158 < piStack_150) {
                  *piStack_158 = iVar46;
                  piStack_158[1] = iVar4;
                  piStack_158[2] = (int)fVar36;
                  piVar20 = piStack_158 + 3;
                }
                else {
                  lVar30 = (long)piStack_158 - (long)piStack_160;
                  piVar20 = (int *)((lVar30 >> 2) * -0x5555555555555555 + 1);
                  if ((int *)0x1555555555555555 < piVar20) {
                    FUN_109575750();
                    goto LAB_109577ff4;
                  }
                  lVar34 = (long)piStack_150 - (long)piStack_160 >> 2;
                  piVar23 = (int *)(lVar34 * 0x5555555555555556);
                  if (piVar23 < piVar20 || (long)piVar23 - (long)piVar20 == 0) {
                    piVar23 = piVar20;
                  }
                  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar34 * -0x5555555555555555)) {
                    piVar23 = (int *)0x1555555555555555;
                  }
                  FUN_109575764();
                  piVar20 = (int *)((long)piVar23 + lVar30);
                  piStack_218 = piVar23 + (long)piVar15 * 3;
                  *piVar20 = iVar46;
                  piVar20[1] = iVar4;
                  piVar20[2] = (int)fVar36;
                  piVar20 = piVar20 + 3;
                  piVar15 = piVar14;
                  _memcpy();
                  piStack_150 = piStack_218;
                  piStack_160 = piVar23;
                  if (piVar14 != (int *)0x0) {
                    piStack_158 = piVar20;
                    __ZdlPv(piVar14);
                  }
                }
                lVar21 = lVar21 + 4;
                piStack_158 = piVar20;
              } while (((ulong)piVar31 & 0xffffffff) << 2 != lVar21);
            }
            piVar31 = piStack_248;
            if (lStack_130 != 0) {
              lStack_128 = lStack_130;
              __ZdlPv();
              piVar31 = piStack_248;
            }
          }
          else {
            FUN_109367d10(&piStack_118,uVar35);
            FUN_10925b8c4(&lStack_130,uVar35);
            uVar17 = 0;
            do {
              pfVar2 = (float *)((long)pfVar33 +
                                (-(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 |
                                (uVar10 & 0xffffffff) << 2));
              pfVar27 = pfVar33;
              if ((uVar10 & 0xffffffff) >> 1 != 0) {
                fVar36 = *pfVar33;
                pfVar26 = pfVar33;
                pfVar28 = pfVar33 + 1;
                do {
                  pfVar29 = pfVar28 + 1;
                  pfVar27 = pfVar28;
                  fVar39 = *pfVar28;
                  if (*pfVar28 <= fVar36) {
                    pfVar27 = pfVar26;
                    fVar39 = fVar36;
                  }
                  fVar36 = fVar39;
                  pfVar26 = pfVar27;
                  pfVar28 = pfVar29;
                } while (pfVar29 != pfVar2);
              }
              piStack_118[uVar17] = (int)*pfVar27;
              *(int *)(lStack_130 + uVar17 * 4) = (int)((ulong)((long)pfVar27 - (long)pfVar33) >> 2)
              ;
              uVar17 = uVar17 + 1;
              pfVar33 = pfVar2;
            } while (uVar17 != uVar35);
            piStack_148 = (int *)0x0;
            piStack_140 = (int *)0x0;
            uStack_138 = 0;
            FUN_1095783f8(iVar45,iVar46,lVar21,uVar35,piStack_118,lVar30,&piStack_148,&pcStack_d0);
            piStack_160 = (int *)0x0;
            piStack_158 = (int *)0x0;
            piStack_150 = (int *)0x0;
            piVar14 = (int *)((long)piStack_140 - (long)piStack_148 >> 2);
            FUN_1095756a0(&piStack_160);
            piVar25 = piStack_140;
            piVar20 = piStack_160;
            lVar21 = lStack_130;
            piVar23 = piStack_118;
            for (piVar15 = piStack_148; piStack_160 = piVar20, lStack_130 = lVar21,
                piStack_118 = piVar23, piVar15 != piVar25; piVar15 = piVar15 + 1) {
              iVar45 = *piVar15;
              lVar30 = (long)iVar45;
              piStack_248 = piVar31;
              if (piStack_158 < piStack_150) {
                iVar46 = *(int *)(lVar21 + lVar30 * 4);
                iVar37 = piVar23[lVar30];
                *piStack_158 = iVar45;
                piStack_158[1] = iVar46;
                piStack_158[2] = iVar37;
                piVar23 = piStack_158 + 3;
              }
              else {
                lVar34 = (long)piStack_158 - (long)piVar20;
                piVar31 = (int *)((lVar34 >> 2) * -0x5555555555555555 + 1);
                if ((int *)0x1555555555555555 < piVar31) {
                  FUN_109575750();
LAB_109577ff4:
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x109577ff8);
                  (*pcVar7)();
                }
                lVar18 = (long)piStack_150 - (long)piVar20 >> 2;
                piVar22 = (int *)(lVar18 * 0x5555555555555556);
                if (piVar22 < piVar31 || (long)piVar22 - (long)piVar31 == 0) {
                  piVar22 = piVar31;
                }
                if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
                  piVar22 = (int *)0x1555555555555555;
                }
                FUN_109575764();
                iVar46 = *(int *)(lVar21 + lVar30 * 4);
                iVar37 = piVar23[lVar30];
                piVar23 = (int *)((long)piVar22 + lVar34);
                lVar21 = (long)piVar14 * 3;
                *piVar23 = iVar45;
                piVar23[1] = iVar46;
                piVar23[2] = iVar37;
                piVar23 = piVar23 + 3;
                piVar14 = piVar20;
                _memcpy();
                piStack_160 = piVar22;
                piStack_150 = piVar22 + lVar21;
                if (piVar20 != (int *)0x0) {
                  piStack_158 = piVar23;
                  __ZdlPv(piVar20);
                }
              }
              piVar31 = piStack_248;
              piVar20 = piStack_160;
              piStack_158 = piVar23;
              lVar21 = lStack_130;
              piVar23 = piStack_118;
            }
            if (piStack_148 != (int *)0x0) {
              piStack_140 = piStack_148;
              __ZdlPv(piStack_148);
            }
            if (lStack_130 != 0) {
              lStack_128 = lStack_130;
              __ZdlPv();
            }
          }
          if (piStack_118 != (int *)0x0) {
            piStack_110 = piStack_118;
            __ZdlPv();
          }
        }
        (*(code *)*ppuStack_c8)(&ppuStack_c8);
        piVar14 = piStack_158;
        ppuStack_1e0 = &PTR_FUN_110af16c8;
        uStack_1d8 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        for (piVar15 = piStack_160; piVar15 != piVar14; piVar15 = piVar15 + 3) {
          puVar9 = &uStack_1d0;
          func_0x000107c303b0(puVar9,FUN_10935032c);
          *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 1;
          uVar10 = puVar9[6];
          if (uVar10 == 0) {
            uVar10 = puVar9[1];
            if ((uVar10 & 1) != 0) {
              uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            FUN_1093492b0();
            puVar9[6] = uVar10;
          }
          puVar11 = (undefined8 *)(lStack_1b0 + (long)*piVar15 * 0x10);
          uVar38 = *puVar11;
          uVar41 = puVar11[1];
          fVar40 = (float)uVar41 * 0.5;
          fVar42 = (float)((ulong)uVar41 >> 0x20) * 0.5;
          fVar36 = (float)uVar38;
          fVar43 = fVar36 - fVar40;
          fVar39 = (float)((ulong)uVar38 >> 0x20);
          fVar44 = fVar39 - fVar42;
          *(ulong *)(uVar10 + 0x10) = CONCAT44(fVar44,fVar43);
          *(ulong *)(uVar10 + 0x18) =
               CONCAT44((fVar39 + fVar42) - fVar44,(fVar36 + fVar40) - fVar43);
          puVar11 = puVar9 + 3;
          func_0x000107c303b0(puVar11,FUN_10934a22c);
          *(int *)(puVar11 + 3) = piVar15[1];
          *(int *)((long)puVar11 + 0x1c) = piVar15[2];
          uVar10 = puVar11[1];
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(puVar11 + 2,*(long *)(piVar31 + 4) + (long)piVar15[1] * 0x18,uVar10);
          lVar21 = alStack_180[0];
          if (cStack_168 == '\x01') {
            iVar45 = *piVar15;
            *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 4;
            uVar10 = puVar9[8];
            if (uVar10 == 0) {
              uVar10 = puVar9[1];
              if ((uVar10 & 1) != 0) {
                uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
              }
              FUN_1093616ac();
              puVar9[8] = uVar10;
            }
            lVar21 = lVar21 + (long)iVar45 * 0x60;
            *(undefined4 *)(uVar10 + 0x18) = *(undefined4 *)(lVar21 + 0xc);
            iVar45 = *(int *)(lVar21 + 8);
            *(int *)(uVar10 + 0x1c) = iVar45;
            uVar35 = *(ulong *)(uVar10 + 8);
            if ((uVar35 & 1) != 0) {
              uVar35 = *(ulong *)(uVar35 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar10 + 0x10,*(undefined8 *)(lVar21 + 0x10),
                                (long)*(int *)(lVar21 + 0xc) * (long)iVar45,uVar35);
          }
        }
        param_2 = piStack_240;
        if (piStack_160 != (int *)0x0) {
          __ZdlPv(piStack_160);
          param_2 = piStack_240;
        }
      }
      if (cStack_168 == '\x01') {
        pcStack_d0 = pcStack_250;
        FUN_1093702c4(&pcStack_d0);
      }
      if (pfStack_198 != (float *)0x0) {
        pfStack_190 = pfStack_198;
        __ZdlPv();
      }
      if (lStack_1b0 != 0) {
        lStack_1a8 = lStack_1b0;
        __ZdlPv();
      }
      uVar41 = uStack_1f8;
      uVar38 = uStack_200;
      uVar10 = uStack_208;
      uVar35 = uStack_208;
      if ((uStack_208 & 1) != 0) {
        uVar35 = *(ulong *)(uStack_208 & 0xfffffffffffffffe);
      }
      uVar17 = uStack_1d8;
      if ((uStack_1d8 & 1) != 0) {
        uVar17 = *(ulong *)(uStack_1d8 & 0xfffffffffffffffe);
      }
      if (uVar35 == uVar17) {
        uStack_208 = uStack_1d8;
        uStack_1d8 = uVar10;
        uStack_1f8 = uStack_1c8;
        uStack_200 = uStack_1d0;
        uStack_1c8 = uVar41;
        uStack_1d0 = uVar38;
      }
      else {
        FUN_10934fff8(&ppuStack_210);
        FUN_109350260(&ppuStack_210,&ppuStack_1e0);
      }
      FUN_10934ffa0(&ppuStack_1e0);
      FUN_109574870(param_2,&ppuStack_210);
      FUN_10934ffa0(&ppuStack_210);
      param_1 = plStack_d8;
      if (plStack_d8 == plStack_238) {
        lVar21 = 0x20;
LAB_109577f0c:
        (**(code **)(*plStack_d8 + lVar21))();
      }
      else if (plStack_d8 != (long *)0x0) {
        lVar21 = 0x28;
        goto LAB_109577f0c;
      }
      plVar13 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar16 = plStack_f8 + 1;
        do {
          lVar21 = *plVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar13;
        }
      }
      plVar13 = (long *)(long)*param_2;
      plVar16 = (long *)**(undefined8 **)(param_2 + 2);
    } while (plVar16[(long)*(int *)((*(undefined8 **)(param_2 + 2))[0xc] + (long)plVar13 * 4) * 10 +
                     8] != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return param_1;
  }
  ___stack_chk_fail();
  if (piStack_118 != (int *)0x0) {
    piStack_110 = piStack_118;
    __ZdlPv();
  }
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  func_0x000109578328(&lStack_1b0);
  FUN_10934ffa0(&ppuStack_210);
  func_0x000109574aa8(auStack_100);
  plVar12 = param_1;
  __Unwind_Resume();
  pcStack_258 = FUN_10957811c;
  plStack_268 = param_1;
  puStack_260 = &stack0xfffffffffffffff0;
  if (*(char *)((long)plVar13 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_290,*plVar13,plVar13[1]);
  }
  else {
    lStack_288 = plVar13[1];
    lStack_290 = *plVar13;
    lStack_280 = plVar13[2];
  }
  if (*(char *)((long)plVar16 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_2b0,*plVar16,plVar16[1]);
  }
  else {
    lStack_2a8 = plVar16[1];
    lStack_2b0 = *plVar16;
    lStack_2a0 = plVar16[2];
  }
  plVar12[1] = lStack_288;
  *plVar12 = lStack_290;
  plVar12[2] = lStack_280;
  plVar12[4] = lStack_2a8;
  plVar12[3] = lStack_2b0;
  plVar12[5] = lStack_2a0;
  return plVar12;
}



/* Entry: 10957811c; end: 1095781d7;  */

undefined8 * FUN_10957811c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  return param_1;
}



/* Entry: 1095781d8; end: 1095781eb;  */

void FUN_1095781d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(char *)((long)puVar1 + 0x2f) < '\0') {
    __ZdlPv(puVar1[3]);
  }
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 1095781ec; end: 10957827b;  */

void FUN_1095781ec(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10957827c; end: 1095782e3;  */

void FUN_10957827c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_1095781ec(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095782e4; end: 10957838b;  */

void FUN_1095782e4(long param_1)

{
  long lStack_28;
  
  FUN_10957827c(param_1 + 0x28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10957838c; end: 1095783f7;  */

float FUN_10957838c(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar4;
  ulong uVar3;
  float fVar5;
  int iVar6;
  float fVar8;
  float fVar9;
  ulong uVar7;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar2 = (float)param_1[1];
  fVar11 = fVar2 * 0.5;
  fVar5 = (float)((ulong)param_1[1] >> 0x20);
  fVar12 = fVar5 * 0.5;
  fVar1 = (float)*param_1;
  fVar13 = fVar1 - fVar11;
  fVar4 = (float)((ulong)*param_1 >> 0x20);
  fVar14 = fVar4 - fVar12;
  fVar1 = fVar1 + fVar11;
  fVar4 = fVar4 + fVar12;
  uVar3 = CONCAT44(fVar4,fVar1);
  fVar11 = (float)param_2[1] * 0.5;
  fVar8 = (float)((ulong)param_2[1] >> 0x20) * 0.5;
  fVar12 = (float)*param_2;
  fVar15 = fVar12 - fVar11;
  fVar9 = (float)((ulong)*param_2 >> 0x20);
  fVar16 = fVar9 - fVar8;
  fVar12 = fVar12 + fVar11;
  fVar9 = fVar9 + fVar8;
  uVar3 = uVar3 ^ (uVar3 ^ CONCAT44(fVar9,fVar12)) &
                  CONCAT44(-(uint)(fVar9 < fVar4),-(uint)(fVar12 < fVar1));
  uVar7 = CONCAT44(fVar14,fVar13) ^
          (CONCAT44(fVar14,fVar13) ^ CONCAT44(fVar16,fVar15)) &
          CONCAT44(-(uint)(fVar14 < fVar16),-(uint)(fVar13 < fVar15));
  fVar1 = (float)uVar3 - (float)uVar7;
  fVar4 = (float)(uVar3 >> 0x20) - (float)(uVar7 >> 0x20);
  iVar6 = -(uint)(fVar1 < 0.0);
  iVar10 = -(uint)(fVar4 < 0.0);
  fVar1 = (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                          CONCAT12((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                   CONCAT11((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                            SUB41(fVar1,0) & ~(byte)iVar6)));
  fVar2 = fVar2 * fVar5;
  fVar1 = fVar1 * (float)(CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                   CONCAT16((byte)((uint)fVar4 >> 0x10) &
                                            ~(byte)((uint)iVar10 >> 0x10),
                                            CONCAT15((byte)((uint)fVar4 >> 8) &
                                                     ~(byte)((uint)iVar10 >> 8),
                                                     CONCAT14(SUB41(fVar4,0) & ~(byte)iVar10,fVar1))
                                           )) >> 0x20);
  fVar2 = (fVar2 + fVar2) - fVar1;
  fVar1 = fVar1 / fVar2;
  if (fVar2 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



/* Entry: 1095783f8; end: 1095786f7;  */

void FUN_1095783f8(float param_1,float param_2,long param_3,float *param_4,long param_5,int param_6,
                  long *param_7,undefined8 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  float fStack_74;
  
  param_7[1] = *param_7;
  if (param_4 == (float *)0x0) {
    pfVar9 = (float *)0x0;
    pfVar12 = (float *)0x0;
  }
  else {
    pfVar12 = (float *)0x0;
    pfVar10 = (float *)0x0;
    pfVar15 = (float *)0x0;
    pfVar5 = param_4;
    pfVar8 = (float *)0x0;
    do {
      fVar16 = *(float *)(param_5 + (long)pfVar15 * 4);
      pfVar9 = pfVar8;
      if (param_1 <= fVar16) {
        if (pfVar12 < pfVar10) {
          *pfVar12 = fVar16;
          pfVar12[1] = SUB84(pfVar15,0);
          *(undefined1 *)(pfVar12 + 2) = 1;
          pfVar12 = pfVar12 + 3;
        }
        else {
          uVar6 = ((long)pfVar12 - (long)pfVar8 >> 2) * -0x5555555555555555 + 1;
          if (0x1555555555555555 < uVar6) {
            FUN_1095757a8();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1095786d0);
            (*pcVar4)();
          }
          lVar14 = (long)pfVar10 - (long)pfVar8 >> 2;
          uVar7 = lVar14 * 0x5555555555555556;
          if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
            uVar7 = uVar6;
          }
          if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
            uVar7 = 0x1555555555555555;
          }
          FUN_1095757bc();
          lVar14 = (long)pfVar12 - (long)pfVar8;
          puVar1 = (undefined4 *)(uVar7 + ((long)pfVar12 - (long)pfVar8));
          pfVar10 = (float *)(uVar7 + (long)pfVar5 * 0xc);
          *puVar1 = *(undefined4 *)(param_5 + (long)pfVar15 * 4);
          puVar1[1] = SUB84(pfVar15,0);
          *(undefined1 *)(puVar1 + 2) = 1;
          pfVar12 = (float *)(puVar1 + 3);
          uVar6 = SUB168(SEXT816(lVar14) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          pfVar9 = (float *)(puVar1 + ((uVar6 >> 1) - ((long)uVar6 >> 0x3f)) * 3);
          pfVar5 = pfVar8;
          _memcpy(pfVar9);
          if (pfVar8 != (float *)0x0) {
            __ZdlPv(pfVar8);
          }
        }
      }
      pfVar15 = (float *)((long)pfVar15 + 1);
      pfVar8 = pfVar9;
    } while (param_4 != pfVar15);
  }
  lVar14 = 0;
  if (pfVar12 != pfVar9) {
    lVar14 = LZCOUNT(((long)pfVar12 - (long)pfVar9 >> 2) * -0x5555555555555555) * -2 + 0x7e;
  }
  FUN_109575800(pfVar9,pfVar12,lVar14,1);
  iVar2 = (int)((ulong)((long)pfVar12 - (long)pfVar9) >> 2) * -0x55555555;
  if (iVar2 < 1) {
LAB_109578698:
    if (pfVar9 == (float *)0x0) {
      return;
    }
  }
  else {
    lVar14 = 0;
    pfVar12 = pfVar9 + 5;
    iVar11 = iVar2;
    iVar3 = iVar2;
    do {
      iVar3 = iVar3 + -1;
      if (param_6 <= (int)((ulong)(param_7[1] - *param_7) >> 2)) goto LAB_109578698;
      if (((uint)pfVar9[lVar14 * 3 + 2] & 1) != 0) {
        fStack_74 = pfVar9[lVar14 * 3 + 1];
        FUN_10923b3a0(param_7,&fStack_74);
        *(undefined1 *)(pfVar9 + lVar14 * 3 + 2) = 0;
        iVar11 = iVar11 + -1;
        pfVar15 = pfVar12;
        iVar13 = iVar3;
        if ((int)lVar14 + 1 < iVar2) {
          do {
            if (*(char *)pfVar15 == '\x01') {
              pfVar5 = (float *)(param_3 + (long)(int)fStack_74 * 0x10);
              puVar1 = (undefined4 *)(param_3 + (long)(int)pfVar15[-1] * 0x10);
              fVar16 = *pfVar5;
              (*(code *)*param_8)(fVar16,pfVar5[1],pfVar5[2],pfVar5[3],*puVar1,puVar1[1],puVar1[2],
                                  puVar1[3],param_8);
              if (param_2 < fVar16) {
                *(char *)pfVar15 = '\0';
                iVar11 = iVar11 + -1;
              }
            }
            pfVar15 = pfVar15 + 3;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      lVar14 = lVar14 + 1;
      pfVar12 = pfVar12 + 3;
    } while (0 < iVar11);
  }
  __ZdlPv(pfVar9);
  return;
}



/* Entry: 1095786f8; end: 1095787cb;  */

void FUN_1095786f8(long param_1,long param_2,long param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  
  if (1 < param_3) {
    uVar3 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 2 <= (long)uVar3) {
      uVar6 = (long)param_4 - param_1 >> 1;
      uVar7 = uVar6 | 1;
      piVar5 = (int *)(param_1 + uVar7 * 4);
      uVar6 = uVar6 + 2;
      if (((long)uVar6 < param_3) &&
         (*(float *)(param_2 + (long)piVar5[1] * 4) < *(float *)(param_2 + (long)*piVar5 * 4))) {
        piVar5 = piVar5 + 1;
        uVar7 = uVar6;
      }
      lVar8 = (long)*piVar5;
      iVar2 = *param_4;
      fVar9 = *(float *)(param_2 + (long)iVar2 * 4);
      if (*(float *)(param_2 + lVar8 * 4) <= fVar9) {
        do {
          piVar4 = piVar5;
          *param_4 = (int)lVar8;
          if ((long)uVar3 < (long)uVar7) break;
          uVar1 = uVar7 << 1 | 1;
          piVar5 = (int *)(param_1 + uVar1 * 4);
          uVar6 = uVar7 * 2 + 2;
          uVar7 = uVar1;
          if (((long)uVar6 < param_3) &&
             (*(float *)(param_2 + (long)*(int *)(uVar1 * 4 + param_1 + 4) * 4) <
              *(float *)(param_2 + (long)*piVar5 * 4))) {
            piVar5 = piVar5 + 1;
            uVar7 = uVar6;
          }
          lVar8 = (long)*piVar5;
          param_4 = piVar4;
        } while (*(float *)(param_2 + lVar8 * 4) <= fVar9);
        *piVar4 = iVar2;
      }
    }
  }
  return;
}



/* Entry: 1095787cc; end: 109578803;  */

void FUN_1095787cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  long param_9)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = param_5;
  uStack_2c = param_6;
  uStack_28 = param_7;
  uStack_24 = param_8;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  (**(code **)(param_9 + 0x10))(&uStack_20,&uStack_30);
  return;
}



/* Entry: 109578804; end: 10957881f;  */

void FUN_109578804(void)

{
  return;
}



/* Entry: 109578820; end: 10957888f;  */

undefined8 * FUN_109578820(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110afc398;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_109578fb8();
  }
  return param_1;
}



/* Entry: 109578890; end: 109578daf;  */

long * FUN_109578890(long *param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  code *pcStack_1e8;
  int *piStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined **ppuStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined **ppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long alStack_138 [3];
  char cStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  int *piStack_f8;
  int *piStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1d0 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    plStack_1d8 = alStack_d0;
    pcStack_1e8 = (code *)alStack_138;
    unaff_x20 = 0x18;
    piStack_1e0 = param_2;
    do {
      FUN_109574760(auStack_e0);
      ppuStack_1c8 = &PTR_FUN_110af16c8;
      uStack_1c0 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      while( true ) {
        puVar8 = auStack_e0;
        func_0x000109574af4();
        if (puVar8 == (undefined1 *)0x0) break;
        puVar8 = auStack_e0;
        func_0x000109574af4();
        if (puVar8 == (undefined1 *)0x1) {
          FUN_109576bf0(auStack_e0);
          func_0x000105688514(&UNK_10f56faf5);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109578d20);
          (*pcVar7)();
        }
      }
      puVar8 = auStack_e0;
      func_0x0001056853dc(puVar8);
      puVar16 = (undefined4 *)plStack_1d0[1];
      FUN_1095596e0(&lStack_168,puVar16,puVar8);
      if (lStack_160 - lStack_168 == 0) {
        ppuStack_198 = &PTR_FUN_110af16c8;
        uStack_190 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
      }
      else {
        uStack_118 = lStack_160 - lStack_168 >> 4;
        uStack_110 = 0;
        if (uStack_118 != 0) {
          uStack_110 = (undefined4)((ulong)(lStack_148 - lStack_150 >> 2) / uStack_118);
        }
        uStack_10c = *puVar16;
        uStack_108 = *(undefined8 *)(puVar16 + 1);
        uStack_100 = 1;
        uStack_ff = *(undefined1 *)(puVar16 + 3);
        pcStack_b0 = FUN_109576b9c;
        ppuStack_a8 = &PTR_FUN_110afc238;
        pcStack_a0 = FUN_109575348;
        FUN_109574c18(&piStack_f8,lStack_168,lStack_150,&uStack_118,&pcStack_b0);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        piVar6 = piStack_f0;
        ppuStack_198 = &PTR_FUN_110af16c8;
        uStack_190 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
        for (piVar1 = piStack_f8; piVar1 != piVar6; piVar1 = piVar1 + 3) {
          puVar9 = &uStack_188;
          func_0x000107c303b0(puVar9,FUN_10935032c);
          *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 1;
          uVar10 = puVar9[6];
          if (uVar10 == 0) {
            uVar10 = puVar9[1];
            if ((uVar10 & 1) != 0) {
              uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            FUN_1093492b0();
            puVar9[6] = uVar10;
          }
          puVar11 = (undefined8 *)(lStack_168 + (long)*piVar1 * 0x10);
          uVar17 = *puVar11;
          uVar18 = puVar11[1];
          *(undefined8 *)(uVar10 + 0x10) = uVar17;
          *(ulong *)(uVar10 + 0x18) =
               CONCAT44((float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                        (float)uVar18 - (float)uVar17);
          puVar11 = puVar9 + 3;
          func_0x000107c303b0(puVar11,FUN_10934a22c);
          *(int *)(puVar11 + 3) = piVar1[1];
          *(int *)((long)puVar11 + 0x1c) = piVar1[2];
          uVar10 = puVar11[1];
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(puVar11 + 2,*(long *)(puVar16 + 4) + (long)piVar1[1] * 0x18,uVar10);
          lVar14 = alStack_138[0];
          if (cStack_120 == '\x01') {
            iVar3 = *piVar1;
            *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 4;
            uVar10 = puVar9[8];
            if (uVar10 == 0) {
              uVar10 = puVar9[1];
              if ((uVar10 & 1) != 0) {
                uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
              }
              FUN_1093616ac();
              puVar9[8] = uVar10;
            }
            lVar14 = lVar14 + (long)iVar3 * 0x60;
            *(undefined4 *)(uVar10 + 0x18) = *(undefined4 *)(lVar14 + 0xc);
            iVar3 = *(int *)(lVar14 + 8);
            *(int *)(uVar10 + 0x1c) = iVar3;
            uVar13 = *(ulong *)(uVar10 + 8);
            if ((uVar13 & 1) != 0) {
              uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar10 + 0x10,*(undefined8 *)(lVar14 + 0x10),
                                (long)*(int *)(lVar14 + 0xc) * (long)iVar3,uVar13);
          }
        }
        param_2 = piStack_1e0;
        if (piStack_f8 != (int *)0x0) {
          __ZdlPv(piStack_f8);
          param_2 = piStack_1e0;
        }
      }
      if (cStack_120 == '\x01') {
        pcStack_b0 = pcStack_1e8;
        FUN_1093702c4(&pcStack_b0);
      }
      if (lStack_150 != 0) {
        lStack_148 = lStack_150;
        __ZdlPv();
      }
      if (lStack_168 != 0) {
        lStack_160 = lStack_168;
        __ZdlPv();
      }
      uVar18 = uStack_1b0;
      uVar17 = uStack_1b8;
      uVar10 = uStack_1c0;
      uVar13 = uStack_1c0;
      if ((uStack_1c0 & 1) != 0) {
        uVar13 = *(ulong *)(uStack_1c0 & 0xfffffffffffffffe);
      }
      uVar15 = uStack_190;
      if ((uStack_190 & 1) != 0) {
        uVar15 = *(ulong *)(uStack_190 & 0xfffffffffffffffe);
      }
      if (uVar13 == uVar15) {
        uStack_1c0 = uStack_190;
        uStack_190 = uVar10;
        uStack_1b0 = uStack_180;
        uStack_1b8 = uStack_188;
        uStack_180 = uVar18;
        uStack_188 = uVar17;
      }
      else {
        FUN_10934fff8(&ppuStack_1c8);
        FUN_109350260(&ppuStack_1c8,&ppuStack_198);
      }
      FUN_10934ffa0(&ppuStack_198);
      FUN_109574870(param_2,&ppuStack_1c8);
      FUN_10934ffa0(&ppuStack_1c8);
      param_1 = plStack_b8;
      if (plStack_b8 == plStack_1d8) {
        lVar14 = 0x20;
LAB_109578c4c:
        (**(code **)(*plStack_b8 + lVar14))();
      }
      else if (plStack_b8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_109578c4c;
      }
      plVar12 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar2 = plStack_d8 + 1;
        do {
          lVar14 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar12;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  func_0x00010957900c(&lStack_168);
  FUN_10934ffa0(&ppuStack_1c8);
  func_0x000109574aa8(auStack_e0);
  plVar12 = param_1;
  __Unwind_Resume();
  pcStack_1f8 = FUN_109578db0;
  uStack_210 = unaff_x20;
  plStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  FUN_109578f50(plVar12 + 5);
  plStack_218 = plVar12 + 2;
  func_0x000104c607c8(&plStack_218);
  return plVar12;
}



/* Entry: 109578db0; end: 109578def;  */

long FUN_109578db0(long param_1)

{
  long lStack_28;
  
  FUN_109578f50(param_1 + 0x28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  return param_1;
}



/* Entry: 109578df0; end: 109578eab;  */

undefined8 * FUN_109578df0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  return param_1;
}



/* Entry: 109578eac; end: 109578ebf;  */

void FUN_109578eac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(char *)((long)puVar1 + 0x2f) < '\0') {
    __ZdlPv(puVar1[3]);
  }
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 109578ec0; end: 109578f4f;  */

void FUN_109578ec0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109578f50; end: 109578fb7;  */

void FUN_109578f50(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_109578ec0(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109578fb8; end: 109579147;  */

void FUN_109578fb8(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  FUN_109578f50(param_1 + 0x28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 109579148; end: 10957970b;  */

void FUN_109579148(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 ***pppuVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined4 auStack_2b0 [2];
  undefined1 auStack_2a8 [56];
  undefined1 *puStack_270;
  undefined8 *puStack_268;
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
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined8 **ppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 **appuStack_158 [2];
  char cStack_141;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long alStack_110 [3];
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long alStack_e0 [3];
  long *plStack_c8;
  undefined8 uStack_a0;
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    puVar16 = (undefined8 *)((ulong)auStack_2b0 | 4);
    do {
      FUN_109572f9c(auStack_120,param_2);
      puVar9 = auStack_120;
      FUN_109570a30(puVar9);
      if (param_1[2] != param_1[1]) {
        uVar18 = 0;
        iVar17 = 1;
        puVar20 = puVar9;
        do {
          if ((*(byte *)(*(long *)(param_2 + 2) + 0xc0) & 1) == 0) {
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            auStack_2b0[0] = 0x42ff0000;
            puVar16[1] = 0;
            *puVar16 = 0;
            puVar16[3] = 0;
            puVar16[2] = 0;
            puVar16[5] = 0;
            puVar16[4] = 0;
            *(undefined8 *)((long)puVar16 + 0x34) = 0;
            *(undefined8 *)((long)puVar16 + 0x2c) = 0;
            uStack_260 = 0;
            uStack_258 = 0;
            puStack_270 = auStack_2a8;
            puStack_268 = &uStack_260;
            goto LAB_109579578;
          }
          lVar14 = 0x20;
          if ((uVar18 & 1) != 0) {
            lVar14 = 0x160;
          }
          puVar19 = (undefined8 *)(param_1[1] + uVar18 * 0x48);
          uStack_a0 = 0;
          plStack_98 = (long *)0x0;
          plStack_78 = (long *)0x0;
          if (*(char *)(puVar19 + 8) == '\x01') {
            iVar2 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) + iVar17;
            lVar15 = **(long **)(param_2 + 2);
            if (*(long *)(lVar15 + (long)iVar2 * 0x50 + 0x40) == 0) {
              func_0x000105688514(&UNK_10f57420e);
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x109579658);
              (*pcVar8)();
            }
            FUN_1095659c8(&uStack_f0,lVar15 + (long)iVar2 * 0x50);
            plVar10 = plStack_98;
            plStack_98 = plStack_e8;
            uStack_a0 = uStack_f0;
            uStack_f0 = 0;
            plStack_e8 = (long *)0x0;
            if (plVar10 != (long *)0x0) {
              plVar13 = plVar10 + 1;
              do {
                lVar15 = *plVar13;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar7) {
                  *plVar13 = lVar15 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
            func_0x00010951eac8(alStack_90,alStack_e0);
            if (plStack_c8 == alStack_e0) {
              lVar15 = 0x20;
LAB_1095792f0:
              (**(code **)(*plStack_c8 + lVar15))();
            }
            else if (plStack_c8 != (long *)0x0) {
              lVar15 = 0x28;
              goto LAB_1095792f0;
            }
            plVar10 = plStack_e8;
            if (plStack_e8 != (long *)0x0) {
              plVar13 = plStack_e8 + 1;
              do {
                lVar15 = *plVar13;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar7) {
                  *plVar13 = lVar15 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
            iVar17 = iVar17 + 1;
          }
          plVar10 = *(long **)(param_2 + 2);
          FUN_109565a70(plVar10,*param_2);
          uVar5 = plVar10[1];
          if (-1 < (char)*(byte *)((long)plVar10 + 0x17)) {
            uVar5 = (ulong)*(byte *)((long)plVar10 + 0x17);
          }
          func_0x000104c4f768(appuStack_158,uVar5 + 0xb,&ppuStack_170);
          pppuVar4 = (undefined8 ***)appuStack_158[0];
          if (-1 < cStack_141) {
            pppuVar4 = appuStack_158;
          }
          if (uVar5 != 0) {
            plVar13 = (long *)*plVar10;
            if (-1 < *(char *)((long)plVar10 + 0x17)) {
              plVar13 = plVar10;
            }
            _memmove(pppuVar4,plVar13,uVar5);
          }
          puVar3 = (undefined8 *)((long)pppuVar4 + uVar5);
          *puVar3 = 0x6f66736e6172745f;
          *(undefined4 *)((long)puVar3 + 7) = 0x5f6d726f;
          *(undefined1 *)((long)puVar3 + 0xb) = 0;
          __ZNSt3__19to_stringEm(&ppuStack_170,uVar18);
          uVar5 = uStack_168;
          pppuVar4 = (undefined8 ***)ppuStack_170;
          if (-1 < (char)bStack_159) {
            uVar5 = (ulong)bStack_159;
            pppuVar4 = &ppuStack_170;
          }
          pppuVar11 = appuStack_158;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppuVar11,pppuVar4,uVar5);
          puStack_138 = pppuVar11[1];
          puStack_140 = *pppuVar11;
          puStack_130 = pppuVar11[2];
          pppuVar11[1] = (undefined8 **)0x0;
          pppuVar11[2] = (undefined8 **)0x0;
          *pppuVar11 = (undefined8 **)0x0;
          uVar12 = *(undefined8 *)(param_2 + 2);
          FUN_109565a70(uVar12,*param_2);
          FUN_1095617dc(&uStack_f0,&puStack_140,uVar12,*(long *)(param_2 + 2) + 0x108);
          if ((long)puStack_130 < 0) {
            __ZdlPv(puStack_140);
          }
          if ((char)bStack_159 < '\0') {
            __ZdlPv(ppuStack_170);
          }
          if (cStack_141 < '\0') {
            __ZdlPv(appuStack_158[0]);
          }
          puVar9 = (undefined1 *)((long)param_1 + lVar14);
          (*(code *)*puVar19)(puVar20,puVar9,&uStack_a0,puVar19);
          FUN_10956189c(&uStack_f0);
          if (plStack_78 == alStack_90) {
            lVar14 = 0x20;
LAB_1095794a8:
            (**(code **)(*plStack_78 + lVar14))();
          }
          else if (plStack_78 != (long *)0x0) {
            lVar14 = 0x28;
            goto LAB_1095794a8;
          }
          plVar10 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar13 = plStack_98 + 1;
            do {
              lVar14 = *plVar13;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar7) {
                *plVar13 = lVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          uVar18 = uVar18 + 1;
          puVar20 = puVar9;
        } while (uVar18 < (ulong)((param_1[2] - param_1[1] >> 3) * -0x71c71c71c71c71c7));
      }
      FUN_10957ce8c(auStack_2b0,puVar9);
LAB_109579578:
      FUN_10957ea6c(param_2,auStack_2b0);
      FUN_10951f294(auStack_2b0);
      plVar10 = plStack_f8;
      if (plStack_f8 == alStack_110) {
        lVar14 = 0x20;
LAB_1095795ac:
        (**(code **)(*plStack_f8 + lVar14))();
      }
      else if (plStack_f8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_1095795ac;
      }
      plVar13 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar1 = plStack_118 + 1;
        do {
          lVar14 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar14 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          plVar10 = plVar13;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10957342c(auStack_120);
    __Unwind_Resume(plVar10);
    return;
  }
  return;
}



/* Entry: 10957970c; end: 10957970f;  */

void FUN_10957970c(void)

{
  return;
}



/* Entry: 109579710; end: 10957984f;  */

void FUN_109579710(long param_1)

{
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 *puStack_128;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_3b = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_170 = 0x42ff0000;
  lStack_130 = (long)&uStack_16c + 4;
  uStack_164 = 0;
  uStack_16c = 0;
  uStack_154 = 0;
  uStack_15c = 0;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  puStack_128 = &uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  FUN_1095798c8(param_1 + 0x20,&uStack_170);
  *(ulong *)(param_1 + 0x150) = CONCAT35(uStack_3b,uStack_40);
  *(ulong *)(param_1 + 0x148) = CONCAT35(uStack_43,uStack_48);
  *(undefined8 *)(param_1 + 0x158) = uStack_38;
  FUN_10951f294(&uStack_170);
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_3b = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_170 = 0x42ff0000;
  lStack_130 = (long)&uStack_16c + 4;
  uStack_164 = 0;
  uStack_16c = 0;
  uStack_154 = 0;
  uStack_15c = 0;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  puStack_128 = &uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  FUN_1095798c8(param_1 + 0x160,&uStack_170);
  *(ulong *)(param_1 + 0x290) = CONCAT35(uStack_3b,uStack_40);
  *(ulong *)(param_1 + 0x288) = CONCAT35(uStack_43,uStack_48);
  *(undefined8 *)(param_1 + 0x298) = uStack_38;
  FUN_10951f294(&uStack_170);
  return;
}



/* Entry: 109579850; end: 1095798c7;  */

void FUN_109579850(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -8;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1095798c8; end: 109579923;  */

void FUN_1095798c8(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x120);
  if (*(int *)(param_1 + 0x120) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x120) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110afa968)[*(uint *)(param_1 + 0x120)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110afc478)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 109579924; end: 10957993b;  */

void FUN_109579924(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x120) == 0) {
    if (param_2[7] != 0) {
      piVar8 = (int *)(param_2[7] + 0x14);
      do {
        iVar4 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(param_2);
      }
    }
    param_2[7] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    if (0 < *(int *)((long)param_2 + 4)) {
      lVar3 = 0;
      lVar5 = param_2[8];
      do {
        *(undefined4 *)(lVar5 + lVar3 * 4) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)((long)param_2 + 4));
    }
    piVar8 = (int *)((long)param_3 + 4);
    iVar4 = *piVar8;
    uVar9 = *param_3;
    uVar11 = param_3[3];
    uVar10 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = uVar9;
    param_2[3] = uVar11;
    param_2[2] = uVar10;
    uVar9 = param_3[4];
    param_2[5] = param_3[5];
    param_2[4] = uVar9;
    uVar9 = param_3[6];
    param_2[7] = param_3[7];
    param_2[6] = uVar9;
    puVar6 = (undefined8 *)param_2[9];
    puVar7 = param_2 + 10;
    if (puVar6 != puVar7) {
      if (puVar6 != (undefined8 *)0x0) {
        _free(puVar6[-1]);
        iVar4 = *piVar8;
      }
      param_2[8] = param_2 + 1;
      param_2[9] = puVar7;
      puVar6 = puVar7;
    }
    puVar7 = (undefined8 *)param_3[9];
    if (iVar4 < 3) {
      *puVar6 = *puVar7;
      puVar6[1] = puVar7[1];
    }
    else {
      param_2[8] = param_3[8];
      param_2[9] = puVar7;
      param_3[8] = param_3 + 1;
      param_3[9] = param_3 + 10;
    }
    *(undefined4 *)param_3 = 0x42ff0000;
    *(undefined8 *)((long)param_3 + 0xc) = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    *(undefined8 *)((long)param_3 + 0x1c) = 0;
    *(undefined8 *)((long)param_3 + 0x14) = 0;
    *(undefined8 *)((long)param_3 + 0x2c) = 0;
    *(undefined8 *)((long)param_3 + 0x24) = 0;
    param_3[7] = 0;
    param_3[6] = 0;
  }
  else {
    FUN_10951f294();
    func_0x00010951f3ac(lVar3,param_3);
    *(undefined4 *)(lVar3 + 0x120) = 0;
  }
  return;
}



/* Entry: 10957993c; end: 109579a87;  */

void FUN_10957993c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(int *)(param_1 + 0x120) == 0) {
    if (param_2[7] != 0) {
      piVar8 = (int *)(param_2[7] + 0x14);
      do {
        iVar3 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(param_2);
      }
    }
    param_2[7] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    if (0 < *(int *)((long)param_2 + 4)) {
      lVar4 = 0;
      lVar5 = param_2[8];
      do {
        *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)((long)param_2 + 4));
    }
    piVar8 = (int *)((long)param_3 + 4);
    iVar3 = *piVar8;
    uVar9 = *param_3;
    uVar11 = param_3[3];
    uVar10 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = uVar9;
    param_2[3] = uVar11;
    param_2[2] = uVar10;
    uVar9 = param_3[4];
    param_2[5] = param_3[5];
    param_2[4] = uVar9;
    uVar9 = param_3[6];
    param_2[7] = param_3[7];
    param_2[6] = uVar9;
    puVar6 = (undefined8 *)param_2[9];
    puVar7 = param_2 + 10;
    if (puVar6 != puVar7) {
      if (puVar6 != (undefined8 *)0x0) {
        _free(puVar6[-1]);
        iVar3 = *piVar8;
      }
      param_2[8] = param_2 + 1;
      param_2[9] = puVar7;
      puVar6 = puVar7;
    }
    puVar7 = (undefined8 *)param_3[9];
    if (iVar3 < 3) {
      *puVar6 = *puVar7;
      puVar6[1] = puVar7[1];
    }
    else {
      param_2[8] = param_3[8];
      param_2[9] = puVar7;
      param_3[8] = param_3 + 1;
      param_3[9] = param_3 + 10;
    }
    *(undefined4 *)param_3 = 0x42ff0000;
    *(undefined8 *)((long)param_3 + 0xc) = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    *(undefined8 *)((long)param_3 + 0x1c) = 0;
    *(undefined8 *)((long)param_3 + 0x14) = 0;
    *(undefined8 *)((long)param_3 + 0x2c) = 0;
    *(undefined8 *)((long)param_3 + 0x24) = 0;
    param_3[7] = 0;
    param_3[6] = 0;
  }
  else {
    FUN_10951f294();
    func_0x00010951f3ac(param_1,param_3);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return;
}



/* Entry: 109579a88; end: 109579b5f;  */

void FUN_109579a88(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x120) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    param_2[2] = param_3[2];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
    uVar2 = *(undefined8 *)((long)param_3 + 0x24);
    uVar1 = *(undefined8 *)((long)param_3 + 0x1c);
    uVar4 = *(undefined8 *)((long)param_3 + 0x34);
    uVar3 = *(undefined8 *)((long)param_3 + 0x2c);
    uVar6 = *(undefined8 *)((long)param_3 + 0x44);
    uVar5 = *(undefined8 *)((long)param_3 + 0x3c);
    uVar7 = *(undefined8 *)((long)param_3 + 0x4c);
    *(undefined8 *)((long)param_2 + 0x54) = *(undefined8 *)((long)param_3 + 0x54);
    *(undefined8 *)((long)param_2 + 0x4c) = uVar7;
    *(undefined8 *)((long)param_2 + 0x44) = uVar6;
    *(undefined8 *)((long)param_2 + 0x3c) = uVar5;
    *(undefined8 *)((long)param_2 + 0x34) = uVar4;
    *(undefined8 *)((long)param_2 + 0x2c) = uVar3;
    *(undefined8 *)((long)param_2 + 0x24) = uVar2;
    *(undefined8 *)((long)param_2 + 0x1c) = uVar1;
  }
  else {
    FUN_10951f294();
    func_0x000105687b98(param_1,param_3);
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  return;
}



/* Entry: 109579b60; end: 109579e83;  */

undefined8 * FUN_109579b60(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[7] != 0) {
    piVar8 = (int *)(param_1[7] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar4 = 0;
    lVar5 = param_1[8];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 4));
  }
  piVar8 = (int *)((long)param_2 + 4);
  iVar3 = *piVar8;
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar9 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  puVar6 = (undefined8 *)param_1[9];
  puVar7 = param_1 + 10;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[8] = param_1 + 1;
    param_1[9] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[9];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar7;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (param_1[0x13] != 0) {
    piVar8 = (int *)(param_1[0x13] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xc);
    }
  }
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  if (0 < *(int *)((long)param_1 + 100)) {
    lVar4 = 0;
    lVar5 = param_1[0x14];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 100));
  }
  piVar8 = (int *)((long)param_2 + 100);
  iVar3 = *piVar8;
  uVar9 = param_2[0xc];
  uVar11 = param_2[0xf];
  uVar10 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar11;
  param_1[0xe] = uVar10;
  uVar9 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar9;
  uVar9 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar9;
  puVar6 = (undefined8 *)param_1[0x15];
  puVar7 = param_1 + 0x16;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x14] = param_1 + 0xd;
    param_1[0x15] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x15];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = puVar7;
    param_2[0x14] = param_2 + 0xd;
    param_2[0x15] = param_2 + 0x16;
  }
  *(undefined4 *)(param_2 + 0xc) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x6c) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x7c) = 0;
  *(undefined8 *)((long)param_2 + 0x74) = 0;
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  if (param_1[0x1f] != 0) {
    piVar8 = (int *)(param_1[0x1f] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x18);
    }
  }
  param_1[0x1f] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  if (0 < *(int *)((long)param_1 + 0xc4)) {
    lVar4 = 0;
    lVar5 = param_1[0x20];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0xc4));
  }
  piVar8 = (int *)((long)param_2 + 0xc4);
  iVar3 = *piVar8;
  uVar9 = param_2[0x18];
  uVar11 = param_2[0x1b];
  uVar10 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar9;
  param_1[0x1b] = uVar11;
  param_1[0x1a] = uVar10;
  uVar9 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar9;
  uVar9 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar9;
  puVar6 = (undefined8 *)param_1[0x21];
  puVar7 = param_1 + 0x22;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[0x20] = param_1 + 0x19;
    param_1[0x21] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[0x21];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = puVar7;
    param_2[0x20] = param_2 + 0x19;
    param_2[0x21] = param_2 + 0x22;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xcc) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0xdc) = 0;
  *(undefined8 *)((long)param_2 + 0xd4) = 0;
  *(undefined8 *)((long)param_2 + 0xec) = 0;
  *(undefined8 *)((long)param_2 + 0xe4) = 0;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  return param_1;
}



/* Entry: 109579e84; end: 109579e93;  */

void FUN_109579e84(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStack_2f8;
  int iStack_2f4;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d0;
  int iStack_2cc;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 *puStack_288;
  undefined8 auStack_280 [2];
  undefined4 uStack_270;
  int iStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 auStack_220 [2];
  undefined4 uStack_210;
  int iStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 *puStack_168;
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
  undefined8 *puStack_110;
  undefined8 *puStack_108;
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
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined8 uStack_78;
  
  puVar4 = param_4;
  func_0x000105277f8c();
  puVar5 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
  uStack_1a8 = puVar5;
  if (*param_3 == 0) {
    uVar6 = (ulong)*(uint *)(puVar4 + 2);
    uVar8 = (ulong)*(uint *)((long)puVar4 + 0x14);
    uVar1 = *(uint *)(param_4 + 0x24);
    if (*(uint *)(puVar4 + 2) == 0 || *(uint *)((long)puVar4 + 0x14) == 0) {
      uStack_1a8 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
      if (uVar1 < 3) {
        uVar6 = CONCAT44(*(uint *)((long)puVar4 + 0x24),*(undefined4 *)(puVar4 + 5));
        if (*(int *)((long)param_4 + *(long *)(&UNK_10dfd4b50 + (ulong)uVar1 * 8)) <=
            *(int *)(param_4 + 1)) {
          uVar6 = (ulong)*(uint *)((long)puVar4 + 0x24) | uVar6 << 0x20;
        }
        uVar8 = uVar6 >> 0x20;
        goto LAB_109579f10;
      }
LAB_10957a4f8:
      func_0x000105688514(&UNK_10f574011);
      goto LAB_10957a504;
    }
LAB_109579f10:
    iVar9 = (int)uVar6;
    iVar7 = (int)uVar8;
    if (*(int *)((long)puVar4 + 0x1c) - 1U < 2) {
      uStack_1a8 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
      if (2 < uVar1) goto LAB_10957a4f8;
      uStack_1a8 = puVar5;
      if (iVar9 < 1) goto LAB_10957a518;
      if (iVar7 < 1) goto LAB_10957a528;
      if ((int)*(uint *)((long)param_4 + *(long *)(&UNK_10dfd4b50 + (ulong)uVar1 * 8)) < 1)
      goto LAB_10957a538;
      if (0 < (int)*(uint *)(param_4 + 1)) {
        fVar13 = (float)*(uint *)((long)param_4 + *(long *)(&UNK_10dfd4b50 + (ulong)uVar1 * 8));
        fVar10 = (float)(uVar6 & 0xffffffff) / fVar13;
        fVar16 = (float)*(uint *)(param_4 + 1);
        fVar14 = (float)uVar8 / fVar16;
        bVar3 = fVar14 < fVar10;
        if (*(int *)((long)puVar4 + 0x1c) != 1) {
          bVar3 = fVar10 < fVar14;
        }
        if (!bVar3) {
          fVar14 = fVar10;
        }
        fVar10 = fVar14;
        if (fVar14 <= 1.0) {
          fVar10 = 1.0;
        }
        fVar15 = (float)NEON_fminnm(fVar14,0x3f800000);
        if (*(int *)(puVar4 + 4) == 2) {
          fVar14 = fVar15;
        }
        if (*(int *)(puVar4 + 4) != 3) {
          fVar10 = fVar14;
        }
        iVar9 = (int)(fVar10 * fVar13);
        iVar7 = (int)(fVar10 * fVar16);
        goto LAB_109579fbc;
      }
      goto LAB_10957a548;
    }
LAB_109579fbc:
    if (uVar1 != 2) {
      if (uVar1 == 1) {
        uStack_198 = *(undefined4 *)(param_4 + 3);
        uStack_194 = *(undefined4 *)((long)param_4 + 0x1c);
        uStack_188 = (undefined4)param_4[5];
        uStack_184 = (undefined4)((ulong)param_4[5] >> 0x20);
        uStack_190 = (undefined4)param_4[4];
        uStack_18c = (undefined4)((ulong)param_4[4] >> 0x20);
        uStack_180 = *(undefined4 *)(param_4 + 6);
        uStack_174 = (undefined4)*(undefined8 *)((long)param_4 + 0x3c);
        uStack_170._0_4_ = (uint)((ulong)*(undefined8 *)((long)param_4 + 0x3c) >> 0x20);
        uStack_17c = (undefined4)*(undefined8 *)((long)param_4 + 0x34);
        uStack_178 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0x34) >> 0x20);
        uStack_170._4_4_ = *(undefined4 *)((long)param_4 + 0x44);
        uStack_160 = param_4[10];
        puStack_168 = (undefined8 *)param_4[9];
        uStack_80 = (undefined5)param_4[0x26];
        uStack_7b = (undefined3)((ulong)param_4[0x26] >> 0x28);
        uStack_88 = (undefined5)param_4[0x25];
        uStack_83 = (undefined3)((ulong)param_4[0x25] >> 0x28);
        uStack_78 = param_4[0x27];
        uStack_1a8._0_4_ = (undefined4)param_4[1];
        uStack_1a8._4_4_ = (undefined4)((ulong)param_4[1] >> 0x20);
        uStack_1b0 = (undefined4)*param_4;
        iStack_1ac = (int)((ulong)*param_4 >> 0x20);
        uStack_1a0 = (undefined4)param_4[2];
        uStack_19c = (undefined4)((ulong)param_4[2] >> 0x20);
        uStack_158 = CONCAT44(uStack_158._4_4_,*(undefined4 *)(param_4 + 0xb));
        uStack_90 = CONCAT44(uStack_90._4_4_,1);
        FUN_1095798c8(param_2,&uStack_1b0);
        *(ulong *)(param_2 + 0x130) = CONCAT35(uStack_7b,uStack_80);
        *(ulong *)(param_2 + 0x128) = CONCAT35(uStack_83,uStack_88);
        *(undefined8 *)(param_2 + 0x138) = uStack_78;
        FUN_10951f294(&uStack_1b0);
        if (*(int *)(param_2 + 0x120) != 1) goto LAB_10957a504;
        *(int *)(param_2 + 4) = iVar9;
        *(int *)(param_2 + 8) = iVar7;
        *(int *)(param_2 + 0x14) = iVar9;
        *(int *)(param_2 + 0x18) = iVar7;
      }
      else {
        uStack_1a8 = puVar5;
        if (uVar1 != 0) goto LAB_10957a4f8;
        if (*(int *)(param_2 + 0x120) != 0) {
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_7b = 0;
          puStack_a8 = (undefined8 *)0x0;
          puStack_b0 = (undefined8 *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          puStack_108 = (undefined8 *)0x0;
          puStack_110 = (undefined8 *)0x0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_1b0 = 0x42ff0000;
          uStack_170 = &uStack_1a8;
          uStack_1a8._4_4_ = 0;
          uStack_1a0 = 0;
          iStack_1ac = 0;
          uStack_1a8._0_4_ = 0;
          uStack_194 = 0;
          uStack_190 = 0;
          uStack_19c = 0;
          uStack_198 = 0;
          uStack_184 = 0;
          uStack_18c = 0;
          uStack_188 = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_180 = 0;
          uStack_17c = 0;
          puStack_168 = &uStack_160;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_80 = 0;
          uStack_88 = 0;
          uStack_83 = 0;
          FUN_1095798c8(param_2,&uStack_1b0);
          *(ulong *)(param_2 + 0x130) = CONCAT35(uStack_7b,uStack_80);
          *(ulong *)(param_2 + 0x128) = CONCAT35(uStack_83,uStack_88);
          *(undefined8 *)(param_2 + 0x138) = uStack_78;
          FUN_10951f294(&uStack_1b0);
          if (*(int *)(param_4 + 0x24) != 0) goto LAB_10957a504;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_1b0 = 0x1010000;
          if (*(int *)(param_2 + 0x120) != 0) {
            uStack_1a8 = param_4;
            FUN_1092612e0();
            goto LAB_10957a56c;
          }
        }
        uStack_19c = 0;
        uStack_1a0 = 0;
        uStack_1b0 = 0x1010000;
        uStack_2d0 = 0x2010000;
        uStack_2c0 = 0;
        uStack_2f0 = CONCAT44(iVar7,iVar9);
        lStack_2c8 = param_2;
        uStack_1a8 = param_4;
        FUN_109b0f718(0,0,&uStack_1b0,&uStack_2d0,&uStack_2f0,*(undefined4 *)(puVar4 + 3));
        uVar12 = param_4[0x26];
        uVar11 = param_4[0x25];
        *(undefined8 *)(param_2 + 0x138) = param_4[0x27];
        *(undefined8 *)(param_2 + 0x130) = uVar12;
        *(undefined8 *)(param_2 + 0x128) = uVar11;
      }
LAB_10957a490:
      if (*(uint *)(param_4 + 0x24) < 3) {
        *(float *)(param_2 + 300) =
             (*(float *)(param_2 + 300) * (float)iVar9) /
             (float)*(int *)((long)param_4 +
                            *(long *)(&UNK_10dfd4b50 + (ulong)*(uint *)(param_4 + 0x24) * 8));
        *(float *)(param_2 + 0x130) =
             (*(float *)(param_2 + 0x130) * (float)iVar7) / (float)*(int *)(param_4 + 1);
        return;
      }
      goto LAB_10957a4f8;
    }
    func_0x000105688a04(&uStack_2d0,param_4);
    lStack_2e8 = param_4[0x26];
    uStack_2f0 = param_4[0x25];
    uStack_2e0 = param_4[0x27];
    puVar5 = (undefined8 *)((ulong)&uStack_2d0 | 4);
    uStack_170._0_4_ = (uint)&uStack_1b0 | 8;
    uStack_1a8._0_4_ = (undefined4)lStack_2c8;
    uStack_1a8._4_4_ = (undefined4)((ulong)lStack_2c8 >> 0x20);
    uStack_1b0 = uStack_2d0;
    iStack_1ac = iStack_2cc;
    uStack_198 = (undefined4)uStack_2b8;
    uStack_194 = (undefined4)((ulong)uStack_2b8 >> 0x20);
    uStack_1a0 = (undefined4)uStack_2c0;
    uStack_19c = (undefined4)((ulong)uStack_2c0 >> 0x20);
    uStack_188 = (undefined4)uStack_2a8;
    uStack_184 = (undefined4)((ulong)uStack_2a8 >> 0x20);
    uStack_190 = (undefined4)uStack_2b0;
    uStack_18c = (undefined4)((ulong)uStack_2b0 >> 0x20);
    uStack_178 = (undefined4)uStack_298;
    uStack_174 = (undefined4)((ulong)uStack_298 >> 0x20);
    uStack_180 = (undefined4)uStack_2a0;
    uStack_17c = (undefined4)((ulong)uStack_2a0 >> 0x20);
    puStack_168 = &uStack_160;
    uStack_170._4_4_ = (undefined4)((ulong)&uStack_1b0 >> 0x20);
    uStack_160 = 0;
    uStack_158 = 0;
    if (iStack_2cc < 3) {
      uStack_160 = *puStack_288;
      uStack_158 = puStack_288[1];
    }
    else {
      uStack_170._0_4_ = (uint)uStack_290;
      uStack_170._4_4_ = (undefined4)(uStack_290 >> 0x20);
      puStack_168 = puStack_288;
      puStack_288 = auStack_280;
      uStack_290 = (ulong)&uStack_2d0 | 8;
    }
    uStack_2d0 = 0x42ff0000;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    *(undefined8 *)((long)puVar5 + 0x34) = 0;
    *(undefined8 *)((long)puVar5 + 0x2c) = 0;
    puStack_110 = &uStack_148;
    uStack_148 = CONCAT44(uStack_264,uStack_268);
    uStack_150 = CONCAT44(iStack_26c,uStack_270);
    uStack_138 = CONCAT44(uStack_254,uStack_258);
    uStack_140 = CONCAT44(uStack_25c,uStack_260);
    uStack_128 = CONCAT44(uStack_244,uStack_248);
    uStack_130 = CONCAT44(uStack_24c,uStack_250);
    uStack_120 = CONCAT44(uStack_23c,uStack_240);
    uStack_118 = uStack_238;
    puStack_108 = &uStack_100;
    uStack_f8 = 0;
    uStack_100 = 0;
    if (iStack_26c < 3) {
      uStack_100 = *puStack_228;
      uStack_f8 = puStack_228[1];
    }
    else {
      puStack_110 = puStack_230;
      puStack_108 = puStack_228;
      puStack_228 = auStack_220;
      puStack_230 = (undefined8 *)&uStack_268;
    }
    uStack_270 = 0x42ff0000;
    uStack_264 = 0;
    uStack_260 = 0;
    iStack_26c = 0;
    uStack_268 = 0;
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_25c = 0;
    uStack_258 = 0;
    uStack_244 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    puStack_b0 = &uStack_e8;
    uStack_e8 = CONCAT44(uStack_204,uStack_208);
    uStack_f0 = CONCAT44(iStack_20c,uStack_210);
    uStack_d8 = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_e0 = CONCAT44(uStack_1fc,uStack_200);
    uStack_c8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_d0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_c0 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_b8 = uStack_1d8;
    puStack_a8 = &uStack_a0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (iStack_20c < 3) {
      uStack_a0 = *puStack_1c8;
      uStack_98 = puStack_1c8[1];
    }
    else {
      puStack_a8 = puStack_1c8;
      puStack_b0 = puStack_1d0;
      puStack_1c8 = auStack_1c0;
      puStack_1d0 = (undefined8 *)&uStack_208;
    }
    uStack_210 = 0x42ff0000;
    uStack_204 = 0;
    uStack_200 = 0;
    iStack_20c = 0;
    uStack_208 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1e4 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_90 = CONCAT44(uStack_90._4_4_,2);
    uStack_80 = (undefined5)lStack_2e8;
    uStack_7b = (undefined3)((ulong)lStack_2e8 >> 0x28);
    uStack_88 = (undefined5)uStack_2f0;
    uStack_83 = (undefined3)((ulong)uStack_2f0 >> 0x28);
    uStack_78 = uStack_2e0;
    FUN_1095798c8(param_2,&uStack_1b0);
    *(ulong *)(param_2 + 0x130) = CONCAT35(uStack_7b,uStack_80);
    *(ulong *)(param_2 + 0x128) = CONCAT35(uStack_83,uStack_88);
    *(undefined8 *)(param_2 + 0x138) = uStack_78;
    FUN_10951f294(&uStack_1b0);
    func_0x0001056879ec(&uStack_2d0);
    if (*(int *)(param_4 + 0x24) != 2) {
LAB_10957a504:
      FUN_1092612e0();
      goto LAB_10957a508;
    }
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1b0 = 0x1010000;
    uStack_1a8 = param_4;
    if (*(int *)(param_2 + 0x120) == 2) {
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x2010000);
      uStack_2e0 = 0;
      iStack_2f8 = iVar9;
      iStack_2f4 = iVar7;
      lStack_2e8 = param_2;
      FUN_109b0f718(0,0,&uStack_1b0,&uStack_2f0,&iStack_2f8,*(undefined4 *)(puVar4 + 3));
      if (*(int *)(param_4 + 0x24) == 2) {
        uStack_1a8 = param_4 + 0xc;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_1b0 = 0x1010000;
        if (*(int *)(param_2 + 0x120) != 2) {
          FUN_1092612e0();
          goto LAB_10957a56c;
        }
        lStack_2e8 = param_2 + 0x60;
        uStack_2e0 = 0;
        uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x2010000);
        iStack_2f8 = iVar9 / 2;
        iStack_2f4 = iVar7 / 2;
        FUN_109b0f718(0,0,&uStack_1b0,&uStack_2f0,&iStack_2f8,*(undefined4 *)(puVar4 + 3));
        if (*(int *)(param_4 + 0x24) == 2) {
          uStack_1a8 = param_4 + 0x18;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_1b0 = 0x1010000;
          if (*(int *)(param_2 + 0x120) != 2) {
            FUN_1092612e0();
            goto LAB_10957a56c;
          }
          lStack_2e8 = param_2 + 0xc0;
          uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x2010000);
          uStack_2e0 = 0;
          iStack_2f8 = iVar9 / 2;
          iStack_2f4 = iVar7 / 2;
          FUN_109b0f718(0,0,&uStack_1b0,&uStack_2f0,&iStack_2f8,*(undefined4 *)(puVar4 + 3));
          goto LAB_10957a490;
        }
      }
      goto LAB_10957a504;
    }
  }
  else {
LAB_10957a508:
    FUN_109389068(&UNK_10f57394e,0xa5);
LAB_10957a518:
    FUN_109389068(&UNK_10f57394e,0x80);
LAB_10957a528:
    FUN_109389068(&UNK_10f57394e,0x81);
LAB_10957a538:
    FUN_109389068(&UNK_10f57394e,0x82);
LAB_10957a548:
    FUN_109389068(&UNK_10f57394e,0x83);
  }
  FUN_1092612e0();
LAB_10957a56c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10957a570);
  (*pcVar2)();
}



/* Entry: 109579e94; end: 10957a5c3;  */

void FUN_109579e94(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iStack_2e8;
  int iStack_2e4;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c0;
  int iStack_2bc;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 *puStack_278;
  undefined8 auStack_270 [2];
  undefined4 uStack_260;
  int iStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 auStack_210 [2];
  undefined4 uStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 auStack_1b0 [2];
  undefined4 uStack_1a0;
  int iStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 *puStack_158;
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
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
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
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined8 uStack_68;
  
  puVar4 = (undefined8 *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
  uStack_198 = puVar4;
  if (*param_3 == 0) {
    uVar5 = (ulong)*(uint *)(param_4 + 0x10);
    uVar7 = (ulong)*(uint *)(param_4 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(param_4 + 0x10) == 0 || *(uint *)(param_4 + 0x14) == 0) {
      uStack_198 = (undefined8 *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
      if (uVar1 < 3) {
        uVar5 = CONCAT44(*(uint *)(param_4 + 0x24),*(undefined4 *)(param_4 + 0x28));
        if (*(int *)((long)param_1 + *(long *)(&UNK_10dfd4b50 + (ulong)uVar1 * 8)) <=
            *(int *)(param_1 + 1)) {
          uVar5 = (ulong)*(uint *)(param_4 + 0x24) | uVar5 << 0x20;
        }
        uVar7 = uVar5 >> 0x20;
        goto LAB_109579f10;
      }
LAB_10957a4f8:
      func_0x000105688514(&UNK_10f574011);
      goto LAB_10957a504;
    }
LAB_109579f10:
    iVar8 = (int)uVar5;
    iVar6 = (int)uVar7;
    if (*(int *)(param_4 + 0x1c) - 1U < 2) {
      uStack_198 = (undefined8 *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
      if (2 < uVar1) goto LAB_10957a4f8;
      uStack_198 = puVar4;
      if (iVar8 < 1) goto LAB_10957a518;
      if (iVar6 < 1) goto LAB_10957a528;
      if ((int)*(uint *)((long)param_1 + *(long *)(&UNK_10dfd4b50 + (ulong)uVar1 * 8)) < 1)
      goto LAB_10957a538;
      if (0 < (int)*(uint *)(param_1 + 1)) {
        fVar12 = (float)*(uint *)((long)param_1 + *(long *)(&UNK_10dfd4b50 + (ulong)uVar1 * 8));
        fVar9 = (float)(uVar5 & 0xffffffff) / fVar12;
        fVar15 = (float)*(uint *)(param_1 + 1);
        fVar13 = (float)uVar7 / fVar15;
        bVar3 = fVar13 < fVar9;
        if (*(int *)(param_4 + 0x1c) != 1) {
          bVar3 = fVar9 < fVar13;
        }
        if (!bVar3) {
          fVar13 = fVar9;
        }
        fVar9 = fVar13;
        if (fVar13 <= 1.0) {
          fVar9 = 1.0;
        }
        fVar14 = (float)NEON_fminnm(fVar13,0x3f800000);
        if (*(int *)(param_4 + 0x20) == 2) {
          fVar13 = fVar14;
        }
        if (*(int *)(param_4 + 0x20) != 3) {
          fVar9 = fVar13;
        }
        iVar8 = (int)(fVar9 * fVar12);
        iVar6 = (int)(fVar9 * fVar15);
        goto LAB_109579fbc;
      }
      goto LAB_10957a548;
    }
LAB_109579fbc:
    if (uVar1 != 2) {
      if (uVar1 == 1) {
        uStack_188 = *(undefined4 *)(param_1 + 3);
        uStack_184 = *(undefined4 *)((long)param_1 + 0x1c);
        uStack_178 = (undefined4)param_1[5];
        uStack_174 = (undefined4)((ulong)param_1[5] >> 0x20);
        uStack_180 = (undefined4)param_1[4];
        uStack_17c = (undefined4)((ulong)param_1[4] >> 0x20);
        uStack_170 = *(undefined4 *)(param_1 + 6);
        uStack_164 = (undefined4)*(undefined8 *)((long)param_1 + 0x3c);
        uStack_160._0_4_ = (uint)((ulong)*(undefined8 *)((long)param_1 + 0x3c) >> 0x20);
        uStack_16c = (undefined4)*(undefined8 *)((long)param_1 + 0x34);
        uStack_168 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20);
        uStack_160._4_4_ = *(undefined4 *)((long)param_1 + 0x44);
        uStack_150 = param_1[10];
        puStack_158 = (undefined8 *)param_1[9];
        uStack_70 = (undefined5)param_1[0x26];
        uStack_6b = (undefined3)((ulong)param_1[0x26] >> 0x28);
        uStack_78 = (undefined5)param_1[0x25];
        uStack_73 = (undefined3)((ulong)param_1[0x25] >> 0x28);
        uStack_68 = param_1[0x27];
        uStack_198._0_4_ = (undefined4)param_1[1];
        uStack_198._4_4_ = (undefined4)((ulong)param_1[1] >> 0x20);
        uStack_1a0 = (undefined4)*param_1;
        iStack_19c = (int)((ulong)*param_1 >> 0x20);
        uStack_190 = (undefined4)param_1[2];
        uStack_18c = (undefined4)((ulong)param_1[2] >> 0x20);
        uStack_148 = CONCAT44(uStack_148._4_4_,*(undefined4 *)(param_1 + 0xb));
        uStack_80 = CONCAT44(uStack_80._4_4_,1);
        FUN_1095798c8(param_2,&uStack_1a0);
        *(ulong *)(param_2 + 0x130) = CONCAT35(uStack_6b,uStack_70);
        *(ulong *)(param_2 + 0x128) = CONCAT35(uStack_73,uStack_78);
        *(undefined8 *)(param_2 + 0x138) = uStack_68;
        FUN_10951f294(&uStack_1a0);
        if (*(int *)(param_2 + 0x120) != 1) goto LAB_10957a504;
        *(int *)(param_2 + 4) = iVar8;
        *(int *)(param_2 + 8) = iVar6;
        *(int *)(param_2 + 0x14) = iVar8;
        *(int *)(param_2 + 0x18) = iVar6;
      }
      else {
        uStack_198 = puVar4;
        if (uVar1 != 0) goto LAB_10957a4f8;
        if (*(int *)(param_2 + 0x120) != 0) {
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_6b = 0;
          puStack_98 = (undefined8 *)0x0;
          puStack_a0 = (undefined8 *)0x0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          puStack_f8 = (undefined8 *)0x0;
          puStack_100 = (undefined8 *)0x0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_1a0 = 0x42ff0000;
          uStack_160 = &uStack_198;
          uStack_198._4_4_ = 0;
          uStack_190 = 0;
          iStack_19c = 0;
          uStack_198._0_4_ = 0;
          uStack_184 = 0;
          uStack_180 = 0;
          uStack_18c = 0;
          uStack_188 = 0;
          uStack_174 = 0;
          uStack_17c = 0;
          uStack_178 = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          puStack_158 = &uStack_150;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_70 = 0;
          uStack_78 = 0;
          uStack_73 = 0;
          FUN_1095798c8(param_2,&uStack_1a0);
          *(ulong *)(param_2 + 0x130) = CONCAT35(uStack_6b,uStack_70);
          *(ulong *)(param_2 + 0x128) = CONCAT35(uStack_73,uStack_78);
          *(undefined8 *)(param_2 + 0x138) = uStack_68;
          FUN_10951f294(&uStack_1a0);
          if (*(int *)(param_1 + 0x24) != 0) goto LAB_10957a504;
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_1a0 = 0x1010000;
          if (*(int *)(param_2 + 0x120) != 0) {
            uStack_198 = param_1;
            FUN_1092612e0();
            goto LAB_10957a56c;
          }
        }
        uStack_18c = 0;
        uStack_190 = 0;
        uStack_1a0 = 0x1010000;
        uStack_2c0 = 0x2010000;
        uStack_2b0 = 0;
        uStack_2e0 = CONCAT44(iVar6,iVar8);
        lStack_2b8 = param_2;
        uStack_198 = param_1;
        FUN_109b0f718(0,0,&uStack_1a0,&uStack_2c0,&uStack_2e0,*(undefined4 *)(param_4 + 0x18));
        uVar11 = param_1[0x26];
        uVar10 = param_1[0x25];
        *(undefined8 *)(param_2 + 0x138) = param_1[0x27];
        *(undefined8 *)(param_2 + 0x130) = uVar11;
        *(undefined8 *)(param_2 + 0x128) = uVar10;
      }
LAB_10957a490:
      if (*(uint *)(param_1 + 0x24) < 3) {
        *(float *)(param_2 + 300) =
             (*(float *)(param_2 + 300) * (float)iVar8) /
             (float)*(int *)((long)param_1 +
                            *(long *)(&UNK_10dfd4b50 + (ulong)*(uint *)(param_1 + 0x24) * 8));
        *(float *)(param_2 + 0x130) =
             (*(float *)(param_2 + 0x130) * (float)iVar6) / (float)*(int *)(param_1 + 1);
        return;
      }
      goto LAB_10957a4f8;
    }
    func_0x000105688a04(&uStack_2c0,param_1);
    lStack_2d8 = param_1[0x26];
    uStack_2e0 = param_1[0x25];
    uStack_2d0 = param_1[0x27];
    puVar4 = (undefined8 *)((ulong)&uStack_2c0 | 4);
    uStack_160._0_4_ = (uint)&uStack_1a0 | 8;
    uStack_198._0_4_ = (undefined4)lStack_2b8;
    uStack_198._4_4_ = (undefined4)((ulong)lStack_2b8 >> 0x20);
    uStack_1a0 = uStack_2c0;
    iStack_19c = iStack_2bc;
    uStack_188 = (undefined4)uStack_2a8;
    uStack_184 = (undefined4)((ulong)uStack_2a8 >> 0x20);
    uStack_190 = (undefined4)uStack_2b0;
    uStack_18c = (undefined4)((ulong)uStack_2b0 >> 0x20);
    uStack_178 = (undefined4)uStack_298;
    uStack_174 = (undefined4)((ulong)uStack_298 >> 0x20);
    uStack_180 = (undefined4)uStack_2a0;
    uStack_17c = (undefined4)((ulong)uStack_2a0 >> 0x20);
    uStack_168 = (undefined4)uStack_288;
    uStack_164 = (undefined4)((ulong)uStack_288 >> 0x20);
    uStack_170 = (undefined4)uStack_290;
    uStack_16c = (undefined4)((ulong)uStack_290 >> 0x20);
    puStack_158 = &uStack_150;
    uStack_160._4_4_ = (undefined4)((ulong)&uStack_1a0 >> 0x20);
    uStack_150 = 0;
    uStack_148 = 0;
    if (iStack_2bc < 3) {
      uStack_150 = *puStack_278;
      uStack_148 = puStack_278[1];
    }
    else {
      uStack_160._0_4_ = (uint)uStack_280;
      uStack_160._4_4_ = (undefined4)(uStack_280 >> 0x20);
      puStack_158 = puStack_278;
      puStack_278 = auStack_270;
      uStack_280 = (ulong)&uStack_2c0 | 8;
    }
    uStack_2c0 = 0x42ff0000;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    *(undefined8 *)((long)puVar4 + 0x34) = 0;
    *(undefined8 *)((long)puVar4 + 0x2c) = 0;
    puStack_100 = &uStack_138;
    uStack_138 = CONCAT44(uStack_254,uStack_258);
    uStack_140 = CONCAT44(iStack_25c,uStack_260);
    uStack_128 = CONCAT44(uStack_244,uStack_248);
    uStack_130 = CONCAT44(uStack_24c,uStack_250);
    uStack_118 = CONCAT44(uStack_234,uStack_238);
    uStack_120 = CONCAT44(uStack_23c,uStack_240);
    uStack_110 = CONCAT44(uStack_22c,uStack_230);
    uStack_108 = uStack_228;
    puStack_f8 = &uStack_f0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (iStack_25c < 3) {
      uStack_f0 = *puStack_218;
      uStack_e8 = puStack_218[1];
    }
    else {
      puStack_100 = puStack_220;
      puStack_f8 = puStack_218;
      puStack_218 = auStack_210;
      puStack_220 = (undefined8 *)&uStack_258;
    }
    uStack_260 = 0x42ff0000;
    uStack_254 = 0;
    uStack_250 = 0;
    iStack_25c = 0;
    uStack_258 = 0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_234 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    puStack_a0 = &uStack_d8;
    uStack_d8 = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_e0 = CONCAT44(iStack_1fc,uStack_200);
    uStack_c8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_d0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_b8 = CONCAT44(uStack_1d4,uStack_1d8);
    uStack_c0 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_b0 = CONCAT44(uStack_1cc,uStack_1d0);
    uStack_a8 = uStack_1c8;
    puStack_98 = &uStack_90;
    uStack_88 = 0;
    uStack_90 = 0;
    if (iStack_1fc < 3) {
      uStack_90 = *puStack_1b8;
      uStack_88 = puStack_1b8[1];
    }
    else {
      puStack_98 = puStack_1b8;
      puStack_a0 = puStack_1c0;
      puStack_1b8 = auStack_1b0;
      puStack_1c0 = (undefined8 *)&uStack_1f8;
    }
    uStack_200 = 0x42ff0000;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    iStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1d4 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_80 = CONCAT44(uStack_80._4_4_,2);
    uStack_70 = (undefined5)lStack_2d8;
    uStack_6b = (undefined3)((ulong)lStack_2d8 >> 0x28);
    uStack_78 = (undefined5)uStack_2e0;
    uStack_73 = (undefined3)((ulong)uStack_2e0 >> 0x28);
    uStack_68 = uStack_2d0;
    FUN_1095798c8(param_2,&uStack_1a0);
    *(ulong *)(param_2 + 0x130) = CONCAT35(uStack_6b,uStack_70);
    *(ulong *)(param_2 + 0x128) = CONCAT35(uStack_73,uStack_78);
    *(undefined8 *)(param_2 + 0x138) = uStack_68;
    FUN_10951f294(&uStack_1a0);
    func_0x0001056879ec(&uStack_2c0);
    if (*(int *)(param_1 + 0x24) != 2) {
LAB_10957a504:
      FUN_1092612e0();
      goto LAB_10957a508;
    }
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_1a0 = 0x1010000;
    uStack_198 = param_1;
    if (*(int *)(param_2 + 0x120) == 2) {
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2010000);
      uStack_2d0 = 0;
      iStack_2e8 = iVar8;
      iStack_2e4 = iVar6;
      lStack_2d8 = param_2;
      FUN_109b0f718(0,0,&uStack_1a0,&uStack_2e0,&iStack_2e8,*(undefined4 *)(param_4 + 0x18));
      if (*(int *)(param_1 + 0x24) == 2) {
        uStack_198 = param_1 + 0xc;
        uStack_190 = 0;
        uStack_18c = 0;
        uStack_1a0 = 0x1010000;
        if (*(int *)(param_2 + 0x120) != 2) {
          FUN_1092612e0();
          goto LAB_10957a56c;
        }
        lStack_2d8 = param_2 + 0x60;
        uStack_2d0 = 0;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2010000);
        iStack_2e8 = iVar8 / 2;
        iStack_2e4 = iVar6 / 2;
        FUN_109b0f718(0,0,&uStack_1a0,&uStack_2e0,&iStack_2e8,*(undefined4 *)(param_4 + 0x18));
        if (*(int *)(param_1 + 0x24) == 2) {
          uStack_198 = param_1 + 0x18;
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_1a0 = 0x1010000;
          if (*(int *)(param_2 + 0x120) != 2) {
            FUN_1092612e0();
            goto LAB_10957a56c;
          }
          lStack_2d8 = param_2 + 0xc0;
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2010000);
          uStack_2d0 = 0;
          iStack_2e8 = iVar8 / 2;
          iStack_2e4 = iVar6 / 2;
          FUN_109b0f718(0,0,&uStack_1a0,&uStack_2e0,&iStack_2e8,*(undefined4 *)(param_4 + 0x18));
          goto LAB_10957a490;
        }
      }
      goto LAB_10957a504;
    }
  }
  else {
LAB_10957a508:
    FUN_109389068(&UNK_10f57394e,0xa5);
LAB_10957a518:
    FUN_109389068(&UNK_10f57394e,0x80);
LAB_10957a528:
    FUN_109389068(&UNK_10f57394e,0x81);
LAB_10957a538:
    FUN_109389068(&UNK_10f57394e,0x82);
LAB_10957a548:
    FUN_109389068(&UNK_10f57394e,0x83);
  }
  FUN_1092612e0();
LAB_10957a56c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10957a570);
  (*pcVar2)();
}



/* Entry: 10957a5c4; end: 10957a5e7;  */

void FUN_10957a5c4(void)

{
  return;
}



/* Entry: 10957a5e8; end: 10957a61b;  */

void FUN_10957a5e8(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  undefined4 uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 auStack_240 [2];
  undefined4 uStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 *puStack_148;
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
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
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
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined8 uStack_58;
  
  func_0x000105686100();
  iVar3 = *param_3;
  puVar10 = param_1 + 0x25;
  piVar1 = (int *)(param_2 + 0x25);
  uVar15 = *puVar10;
  uVar7 = param_1[0x26];
  param_2[0x27] = param_1[0x27];
  param_2[0x26] = uVar7;
  *(undefined8 *)piVar1 = uVar15;
  iVar3 = (iVar3 >> 0x1f & 0x168U) + iVar3 % 0x168;
  iVar4 = (int)(short)((short)iVar3 + 0x2d) / 0x5a;
  if ((iVar4 - (iVar4 + ((uint)(int)(char)iVar4 >> 0xd & 3) & 0xfc) & 0xfd) == 1) {
    uVar15 = NEON_rev64(*(undefined8 *)((long)param_2 + 300),4);
    *(undefined8 *)((long)param_2 + 300) = uVar15;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 2) {
    func_0x000105688a04(&uStack_2f0,param_1);
    uStack_1d0 = *puVar10;
    uStack_1c8 = param_1[0x26];
    uStack_1c0 = param_1[0x27];
    puVar10 = (undefined8 *)((ulong)&uStack_2f0 | 4);
    uStack_150._0_4_ = (uint)&uStack_190 | 8;
    uStack_188 = (undefined4)uStack_2e8;
    uStack_184 = (undefined4)((ulong)uStack_2e8 >> 0x20);
    uStack_190 = uStack_2f0;
    iStack_18c = iStack_2ec;
    uStack_178 = (undefined4)uStack_2d8;
    uStack_174 = (undefined4)((ulong)uStack_2d8 >> 0x20);
    uStack_180 = (undefined4)uStack_2e0;
    uStack_17c = (undefined4)((ulong)uStack_2e0 >> 0x20);
    uStack_168 = (undefined4)uStack_2c8;
    uStack_164 = (undefined4)((ulong)uStack_2c8 >> 0x20);
    uStack_170 = (undefined4)uStack_2d0;
    uStack_16c = (undefined4)((ulong)uStack_2d0 >> 0x20);
    uStack_158 = (undefined4)uStack_2b8;
    uStack_154 = (undefined4)((ulong)uStack_2b8 >> 0x20);
    uStack_160 = (undefined4)uStack_2c0;
    uStack_15c = (undefined4)((ulong)uStack_2c0 >> 0x20);
    puStack_148 = &uStack_140;
    uStack_150._4_4_ = (undefined4)((ulong)&uStack_190 >> 0x20);
    uStack_140 = 0;
    uStack_138 = 0;
    if (iStack_2ec < 3) {
      uStack_140 = *puStack_2a8;
      uStack_138 = puStack_2a8[1];
    }
    else {
      uStack_150._0_4_ = (uint)uStack_2b0;
      uStack_150._4_4_ = (undefined4)(uStack_2b0 >> 0x20);
      puStack_148 = puStack_2a8;
      puStack_2a8 = auStack_2a0;
      uStack_2b0 = (ulong)&uStack_2f0 | 8;
    }
    uStack_2f0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    puStack_f0 = &uStack_128;
    uStack_130 = CONCAT44(iStack_28c,uStack_290);
    uStack_128 = CONCAT44(uStack_284,uStack_288);
    uStack_118 = CONCAT44(uStack_274,uStack_278);
    uStack_120 = CONCAT44(uStack_27c,uStack_280);
    uStack_108 = CONCAT44(uStack_264,uStack_268);
    uStack_110 = CONCAT44(uStack_26c,uStack_270);
    uStack_100 = CONCAT44(uStack_25c,uStack_260);
    uStack_f8 = uStack_258;
    puStack_e8 = &uStack_e0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (iStack_28c < 3) {
      uStack_e0 = *puStack_248;
      uStack_d8 = puStack_248[1];
    }
    else {
      puStack_e8 = puStack_248;
      puStack_f0 = puStack_250;
      puStack_248 = auStack_240;
      puStack_250 = (undefined8 *)&uStack_288;
    }
    uStack_290 = 0x42ff0000;
    uStack_284 = 0;
    uStack_280 = 0;
    iStack_28c = 0;
    uStack_288 = 0;
    uStack_274 = 0;
    uStack_270 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_264 = 0;
    uStack_26c = 0;
    uStack_268 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    puStack_90 = &uStack_c8;
    uStack_d0 = CONCAT44(iStack_22c,uStack_230);
    uStack_c8 = CONCAT44(uStack_224,uStack_228);
    uStack_b8 = CONCAT44(uStack_214,uStack_218);
    uStack_c0 = CONCAT44(uStack_21c,uStack_220);
    uStack_a8 = CONCAT44(uStack_204,uStack_208);
    uStack_b0 = CONCAT44(uStack_20c,uStack_210);
    uStack_a0 = CONCAT44(uStack_1fc,uStack_200);
    uStack_98 = uStack_1f8;
    puStack_88 = &uStack_80;
    uStack_78 = 0;
    uStack_80 = 0;
    if (iStack_22c < 3) {
      uStack_80 = *puStack_1e8;
      uStack_78 = puStack_1e8[1];
    }
    else {
      puStack_88 = puStack_1e8;
      puStack_90 = puStack_1f0;
      puStack_1e8 = auStack_1e0;
      puStack_1f0 = (undefined8 *)&uStack_228;
    }
    uStack_230 = 0x42ff0000;
    uStack_224 = 0;
    uStack_220 = 0;
    iStack_22c = 0;
    uStack_228 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    uStack_204 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,2);
    uStack_60 = (undefined5)uStack_1c8;
    uStack_5b = (undefined3)(uStack_1c8 >> 0x28);
    uStack_68 = (undefined5)uStack_1d0;
    uStack_63 = (undefined3)((ulong)uStack_1d0 >> 0x28);
    uStack_58 = uStack_1c0;
    FUN_1095798c8(param_2,&uStack_190);
    param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
    *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
    param_2[0x27] = uStack_58;
    FUN_10951f294(&uStack_190);
    func_0x0001056879ec(&uStack_2f0);
    if (*(int *)(param_1 + 0x24) == 2) {
      FUN_10957b024(&uStack_190,param_1,iVar3);
      if (*(int *)(param_2 + 0x24) != 2) {
        FUN_1092612e0();
        goto LAB_10957afd4;
      }
      if (param_2[7] != 0) {
        piVar2 = (int *)(param_2[7] + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_2);
        }
      }
      param_2[7] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      if (0 < *(int *)((long)param_2 + 4)) {
        lVar9 = 0;
        lVar11 = param_2[8];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 4));
      }
      param_2[1] = CONCAT44(uStack_184,uStack_188);
      *param_2 = CONCAT44(iStack_18c,uStack_190);
      param_2[3] = CONCAT44(uStack_174,uStack_178);
      param_2[2] = CONCAT44(uStack_17c,uStack_180);
      param_2[5] = CONCAT44(uStack_164,uStack_168);
      param_2[4] = CONCAT44(uStack_16c,uStack_170);
      param_2[7] = CONCAT44(uStack_154,uStack_158);
      param_2[6] = CONCAT44(uStack_15c,uStack_160);
      puVar12 = (undefined8 *)param_2[9];
      puVar10 = param_2 + 10;
      if (puVar12 != puVar10) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        param_2[8] = param_2 + 1;
        param_2[9] = puVar10;
        puVar12 = puVar10;
      }
      if (iStack_18c < 3) {
        puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
        *puVar12 = *puStack_148;
        puVar12[1] = puStack_148[1];
        uStack_190 = 0x42ff0000;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        *(undefined8 *)((long)puVar10 + 0x34) = 0;
        *(undefined8 *)((long)puVar10 + 0x2c) = 0;
        if (puStack_148 != &uStack_140) {
          _free(puStack_148[-1]);
        }
      }
      else {
        param_2[8] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
        param_2[9] = puStack_148;
      }
      if (*(int *)(param_1 + 0x24) == 2) {
        FUN_10957b024(&uStack_190,param_1 + 0xc,iVar3);
        if (*(int *)(param_2 + 0x24) != 2) {
          FUN_1092612e0();
          goto LAB_10957afd4;
        }
        if (param_2[0x13] != 0) {
          piVar2 = (int *)(param_2[0x13] + 0x14);
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(param_2 + 0xc);
          }
        }
        param_2[0x13] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[0x11] = 0;
        param_2[0x10] = 0;
        if (0 < *(int *)((long)param_2 + 100)) {
          lVar9 = 0;
          lVar11 = param_2[0x14];
          do {
            *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)((long)param_2 + 100));
        }
        param_2[0xd] = CONCAT44(uStack_184,uStack_188);
        param_2[0xc] = CONCAT44(iStack_18c,uStack_190);
        param_2[0xf] = CONCAT44(uStack_174,uStack_178);
        param_2[0xe] = CONCAT44(uStack_17c,uStack_180);
        param_2[0x11] = CONCAT44(uStack_164,uStack_168);
        param_2[0x10] = CONCAT44(uStack_16c,uStack_170);
        param_2[0x13] = CONCAT44(uStack_154,uStack_158);
        param_2[0x12] = CONCAT44(uStack_15c,uStack_160);
        puVar12 = (undefined8 *)param_2[0x15];
        puVar10 = param_2 + 0x16;
        if (puVar12 != puVar10) {
          if (puVar12 != (undefined8 *)0x0) {
            _free(puVar12[-1]);
          }
          param_2[0x14] = param_2 + 0xd;
          param_2[0x15] = puVar10;
          puVar12 = puVar10;
        }
        if (iStack_18c < 3) {
          puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
          *puVar12 = *puStack_148;
          puVar12[1] = puStack_148[1];
          uStack_190 = 0x42ff0000;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          *(undefined8 *)((long)puVar10 + 0x34) = 0;
          *(undefined8 *)((long)puVar10 + 0x2c) = 0;
          if (puStack_148 != &uStack_140) {
            _free(puStack_148[-1]);
          }
        }
        else {
          param_2[0x14] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
          param_2[0x15] = puStack_148;
        }
        if (*(int *)(param_1 + 0x24) == 2) {
          FUN_10957b024(&uStack_190,param_1 + 0x18,iVar3);
          if (*(int *)(param_2 + 0x24) != 2) {
            FUN_1092612e0();
            goto LAB_10957afd4;
          }
          if (param_2[0x1f] != 0) {
            piVar2 = (int *)(param_2[0x1f] + 0x14);
            do {
              iVar4 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(param_2 + 0x18);
            }
          }
          param_2[0x1f] = 0;
          param_2[0x1b] = 0;
          param_2[0x1a] = 0;
          param_2[0x1d] = 0;
          param_2[0x1c] = 0;
          if (0 < *(int *)((long)param_2 + 0xc4)) {
            lVar9 = 0;
            lVar11 = param_2[0x20];
            do {
              *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)((long)param_2 + 0xc4));
          }
          param_2[0x19] = CONCAT44(uStack_184,uStack_188);
          param_2[0x18] = CONCAT44(iStack_18c,uStack_190);
          param_2[0x1b] = CONCAT44(uStack_174,uStack_178);
          param_2[0x1a] = CONCAT44(uStack_17c,uStack_180);
          param_2[0x1d] = CONCAT44(uStack_164,uStack_168);
          param_2[0x1c] = CONCAT44(uStack_16c,uStack_170);
          param_2[0x1f] = CONCAT44(uStack_154,uStack_158);
          param_2[0x1e] = CONCAT44(uStack_15c,uStack_160);
          puVar12 = (undefined8 *)param_2[0x21];
          puVar10 = param_2 + 0x22;
          if (puVar12 != puVar10) {
            if (puVar12 != (undefined8 *)0x0) {
              _free(puVar12[-1]);
            }
            param_2[0x20] = param_2 + 0x19;
            param_2[0x21] = puVar10;
            puVar12 = puVar10;
          }
          if (2 < iStack_18c) {
            param_2[0x20] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
            param_2[0x21] = puStack_148;
            goto LAB_10957af54;
          }
          goto LAB_10957af00;
        }
      }
    }
LAB_10957afa8:
    FUN_1092612e0();
LAB_10957afac:
    func_0x000105688514(&UNK_10f574011);
  }
  else {
    if (iVar4 == 1) {
      uStack_178 = *(undefined4 *)(param_1 + 3);
      uStack_174 = *(undefined4 *)((long)param_1 + 0x1c);
      uStack_168 = (undefined4)param_1[5];
      uStack_164 = (undefined4)((ulong)param_1[5] >> 0x20);
      uStack_170 = (undefined4)param_1[4];
      uStack_16c = (undefined4)((ulong)param_1[4] >> 0x20);
      uStack_160 = *(undefined4 *)(param_1 + 6);
      uStack_154 = (undefined4)*(undefined8 *)((long)param_1 + 0x3c);
      uStack_150._0_4_ = (uint)((ulong)*(undefined8 *)((long)param_1 + 0x3c) >> 0x20);
      uStack_15c = (undefined4)*(undefined8 *)((long)param_1 + 0x34);
      uStack_158 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20);
      uStack_150._4_4_ = *(undefined4 *)((long)param_1 + 0x44);
      uStack_140 = param_1[10];
      puStack_148 = (undefined8 *)param_1[9];
      uStack_60 = (undefined5)param_1[0x26];
      uStack_5b = (undefined3)((ulong)param_1[0x26] >> 0x28);
      uStack_68 = (undefined5)*puVar10;
      uStack_63 = (undefined3)((ulong)*puVar10 >> 0x28);
      uStack_58 = param_1[0x27];
      uStack_188 = (undefined4)param_1[1];
      uStack_184 = (undefined4)((ulong)param_1[1] >> 0x20);
      uStack_190 = (undefined4)*param_1;
      iStack_18c = (int)((ulong)*param_1 >> 0x20);
      uStack_180 = (undefined4)param_1[2];
      uStack_17c = (undefined4)((ulong)param_1[2] >> 0x20);
      uStack_138 = CONCAT44(uStack_138._4_4_,*(undefined4 *)(param_1 + 0xb));
      uStack_70 = CONCAT44(uStack_70._4_4_,1);
      FUN_1095798c8(param_2,&uStack_190);
      param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
      *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
      param_2[0x27] = uStack_58;
      FUN_10951f294(&uStack_190);
      if (*(int *)(param_2 + 0x24) == 1) {
        fVar17 = 0.5;
        fVar13 = (float)___sincosf_stret();
        fVar19 = fVar13 * 0.0;
        fVar20 = fVar19 * fVar19;
        fVar18 = (fVar13 * fVar13 + fVar20) * -2.0 + 1.0;
        fVar21 = fVar13 * fVar17 + fVar20;
        fStack_1ac = fVar13 * fVar19 - fVar17 * fVar19;
        fStack_1ac = fStack_1ac + fStack_1ac;
        fVar14 = fVar20 - fVar13 * fVar17;
        fStack_1b8 = fVar13 * fVar19 + fVar17 * fVar19;
        fStack_1b8 = fStack_1b8 + fStack_1b8;
        uStack_1d0 = CONCAT44(fVar21 + fVar21,fVar18);
        uStack_1c8 = (ulong)(uint)fStack_1ac;
        uStack_1c0 = CONCAT44(fVar18,fVar14 + fVar14);
        uStack_1b4 = 0;
        fStack_1a8 = (fVar20 + fVar20) * -2.0 + 1.0;
        uStack_19c = 0;
        uStack_1a4 = 0;
        uStack_194 = 0x3f800000;
        fStack_1b0 = fStack_1b8;
        FUN_109519fd0(&uStack_190,&uStack_1d0,(long)param_2 + 0x1c);
        *(ulong *)((long)param_2 + 0x24) = CONCAT44(uStack_184,uStack_188);
        *(ulong *)((long)param_2 + 0x1c) = CONCAT44(iStack_18c,uStack_190);
        *(ulong *)((long)param_2 + 0x34) = CONCAT44(uStack_174,uStack_178);
        *(ulong *)((long)param_2 + 0x2c) = CONCAT44(uStack_17c,uStack_180);
        *(ulong *)((long)param_2 + 0x44) = CONCAT44(uStack_164,uStack_168);
        *(ulong *)((long)param_2 + 0x3c) = CONCAT44(uStack_16c,uStack_170);
        *(ulong *)((long)param_2 + 0x54) = CONCAT44(uStack_154,uStack_158);
        *(ulong *)((long)param_2 + 0x4c) = CONCAT44(uStack_15c,uStack_160);
        if ((iVar3 == 0x5a) || (iVar3 == 0x10e)) {
          uVar15 = NEON_rev64(*(undefined8 *)((long)param_2 + 0x14),4);
          *(undefined8 *)((long)param_2 + 0x14) = uVar15;
          auVar16 = NEON_rev64(*(undefined1 (*) [16])((long)param_2 + 4),4);
          *(long *)((long)param_2 + 0xc) = auVar16._8_8_;
          *(long *)((long)param_2 + 4) = auVar16._0_8_;
        }
        goto LAB_10957af54;
      }
      goto LAB_10957afa8;
    }
    if (iVar4 != 0) goto LAB_10957afac;
    if (*(int *)(param_2 + 0x24) != 0) {
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_5b = 0;
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      puStack_e8 = (undefined8 *)0x0;
      puStack_f0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_190 = 0x42ff0000;
      uStack_150 = &uStack_188;
      uStack_184 = 0;
      uStack_180 = 0;
      iStack_18c = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_164 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      puStack_148 = &uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_63 = 0;
      FUN_1095798c8(param_2,&uStack_190);
      param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
      *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
      param_2[0x27] = uStack_58;
      FUN_10951f294(&uStack_190);
      if (*(int *)(param_1 + 0x24) != 0) goto LAB_10957afa8;
    }
    FUN_10957b024(&uStack_190,param_1,iVar3);
    if (*(int *)(param_2 + 0x24) == 0) {
      if (param_2[7] != 0) {
        piVar2 = (int *)(param_2[7] + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_2);
        }
      }
      param_2[7] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      if (0 < *(int *)((long)param_2 + 4)) {
        lVar9 = 0;
        lVar11 = param_2[8];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 4));
      }
      param_2[1] = CONCAT44(uStack_184,uStack_188);
      *param_2 = CONCAT44(iStack_18c,uStack_190);
      param_2[3] = CONCAT44(uStack_174,uStack_178);
      param_2[2] = CONCAT44(uStack_17c,uStack_180);
      param_2[5] = CONCAT44(uStack_164,uStack_168);
      param_2[4] = CONCAT44(uStack_16c,uStack_170);
      param_2[7] = CONCAT44(uStack_154,uStack_158);
      param_2[6] = CONCAT44(uStack_15c,uStack_160);
      puVar12 = (undefined8 *)param_2[9];
      puVar10 = param_2 + 10;
      if (puVar12 != puVar10) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        param_2[8] = param_2 + 1;
        param_2[9] = puVar10;
        puVar12 = puVar10;
      }
      if (2 < iStack_18c) {
        param_2[8] = uStack_150;
        param_2[9] = puStack_148;
        goto LAB_10957af54;
      }
LAB_10957af00:
      puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
      *puVar12 = *puStack_148;
      puVar12[1] = puStack_148[1];
      uStack_190 = 0x42ff0000;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      if (puStack_148 != &uStack_140) {
        _free(puStack_148[-1]);
      }
LAB_10957af54:
      *piVar1 = (*piVar1 - iVar3 >> 0x1f & 0x168U) + (*piVar1 - iVar3) % 0x168;
      return;
    }
  }
  FUN_1092612e0();
LAB_10957afd4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10957afd8);
  (*pcVar8)();
}



/* Entry: 10957a61c; end: 10957b023;  */

void FUN_10957a61c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  undefined4 uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 auStack_240 [2];
  undefined4 uStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 *puStack_148;
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
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
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
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined8 uStack_58;
  
  puVar10 = param_1 + 0x25;
  piVar1 = (int *)(param_2 + 0x25);
  uVar15 = *puVar10;
  uVar7 = param_1[0x26];
  param_2[0x27] = param_1[0x27];
  param_2[0x26] = uVar7;
  *(undefined8 *)piVar1 = uVar15;
  iVar3 = (param_3 >> 0x1f & 0x168U) + param_3 % 0x168;
  iVar4 = (int)(short)((short)iVar3 + 0x2d) / 0x5a;
  if ((iVar4 - (iVar4 + ((uint)(int)(char)iVar4 >> 0xd & 3) & 0xfc) & 0xfd) == 1) {
    uVar15 = NEON_rev64(*(undefined8 *)((long)param_2 + 300),4);
    *(undefined8 *)((long)param_2 + 300) = uVar15;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 2) {
    func_0x000105688a04(&uStack_2f0,param_1);
    uStack_1d0 = *puVar10;
    uStack_1c8 = param_1[0x26];
    uStack_1c0 = param_1[0x27];
    puVar10 = (undefined8 *)((ulong)&uStack_2f0 | 4);
    uStack_150._0_4_ = (uint)&uStack_190 | 8;
    uStack_188 = (undefined4)uStack_2e8;
    uStack_184 = (undefined4)((ulong)uStack_2e8 >> 0x20);
    uStack_190 = uStack_2f0;
    iStack_18c = iStack_2ec;
    uStack_178 = (undefined4)uStack_2d8;
    uStack_174 = (undefined4)((ulong)uStack_2d8 >> 0x20);
    uStack_180 = (undefined4)uStack_2e0;
    uStack_17c = (undefined4)((ulong)uStack_2e0 >> 0x20);
    uStack_168 = (undefined4)uStack_2c8;
    uStack_164 = (undefined4)((ulong)uStack_2c8 >> 0x20);
    uStack_170 = (undefined4)uStack_2d0;
    uStack_16c = (undefined4)((ulong)uStack_2d0 >> 0x20);
    uStack_158 = (undefined4)uStack_2b8;
    uStack_154 = (undefined4)((ulong)uStack_2b8 >> 0x20);
    uStack_160 = (undefined4)uStack_2c0;
    uStack_15c = (undefined4)((ulong)uStack_2c0 >> 0x20);
    puStack_148 = &uStack_140;
    uStack_150._4_4_ = (undefined4)((ulong)&uStack_190 >> 0x20);
    uStack_140 = 0;
    uStack_138 = 0;
    if (iStack_2ec < 3) {
      uStack_140 = *puStack_2a8;
      uStack_138 = puStack_2a8[1];
    }
    else {
      uStack_150._0_4_ = (uint)uStack_2b0;
      uStack_150._4_4_ = (undefined4)(uStack_2b0 >> 0x20);
      puStack_148 = puStack_2a8;
      puStack_2a8 = auStack_2a0;
      uStack_2b0 = (ulong)&uStack_2f0 | 8;
    }
    uStack_2f0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    puStack_f0 = &uStack_128;
    uStack_130 = CONCAT44(iStack_28c,uStack_290);
    uStack_128 = CONCAT44(uStack_284,uStack_288);
    uStack_118 = CONCAT44(uStack_274,uStack_278);
    uStack_120 = CONCAT44(uStack_27c,uStack_280);
    uStack_108 = CONCAT44(uStack_264,uStack_268);
    uStack_110 = CONCAT44(uStack_26c,uStack_270);
    uStack_100 = CONCAT44(uStack_25c,uStack_260);
    uStack_f8 = uStack_258;
    puStack_e8 = &uStack_e0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (iStack_28c < 3) {
      uStack_e0 = *puStack_248;
      uStack_d8 = puStack_248[1];
    }
    else {
      puStack_e8 = puStack_248;
      puStack_f0 = puStack_250;
      puStack_248 = auStack_240;
      puStack_250 = (undefined8 *)&uStack_288;
    }
    uStack_290 = 0x42ff0000;
    uStack_284 = 0;
    uStack_280 = 0;
    iStack_28c = 0;
    uStack_288 = 0;
    uStack_274 = 0;
    uStack_270 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_264 = 0;
    uStack_26c = 0;
    uStack_268 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    puStack_90 = &uStack_c8;
    uStack_d0 = CONCAT44(iStack_22c,uStack_230);
    uStack_c8 = CONCAT44(uStack_224,uStack_228);
    uStack_b8 = CONCAT44(uStack_214,uStack_218);
    uStack_c0 = CONCAT44(uStack_21c,uStack_220);
    uStack_a8 = CONCAT44(uStack_204,uStack_208);
    uStack_b0 = CONCAT44(uStack_20c,uStack_210);
    uStack_a0 = CONCAT44(uStack_1fc,uStack_200);
    uStack_98 = uStack_1f8;
    puStack_88 = &uStack_80;
    uStack_78 = 0;
    uStack_80 = 0;
    if (iStack_22c < 3) {
      uStack_80 = *puStack_1e8;
      uStack_78 = puStack_1e8[1];
    }
    else {
      puStack_88 = puStack_1e8;
      puStack_90 = puStack_1f0;
      puStack_1e8 = auStack_1e0;
      puStack_1f0 = (undefined8 *)&uStack_228;
    }
    uStack_230 = 0x42ff0000;
    uStack_224 = 0;
    uStack_220 = 0;
    iStack_22c = 0;
    uStack_228 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    uStack_204 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,2);
    uStack_60 = (undefined5)uStack_1c8;
    uStack_5b = (undefined3)(uStack_1c8 >> 0x28);
    uStack_68 = (undefined5)uStack_1d0;
    uStack_63 = (undefined3)((ulong)uStack_1d0 >> 0x28);
    uStack_58 = uStack_1c0;
    FUN_1095798c8(param_2,&uStack_190);
    param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
    *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
    param_2[0x27] = uStack_58;
    FUN_10951f294(&uStack_190);
    func_0x0001056879ec(&uStack_2f0);
    if (*(int *)(param_1 + 0x24) == 2) {
      FUN_10957b024(&uStack_190,param_1,iVar3);
      if (*(int *)(param_2 + 0x24) != 2) {
        FUN_1092612e0();
        goto LAB_10957afd4;
      }
      if (param_2[7] != 0) {
        piVar2 = (int *)(param_2[7] + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_2);
        }
      }
      param_2[7] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      if (0 < *(int *)((long)param_2 + 4)) {
        lVar9 = 0;
        lVar11 = param_2[8];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 4));
      }
      param_2[1] = CONCAT44(uStack_184,uStack_188);
      *param_2 = CONCAT44(iStack_18c,uStack_190);
      param_2[3] = CONCAT44(uStack_174,uStack_178);
      param_2[2] = CONCAT44(uStack_17c,uStack_180);
      param_2[5] = CONCAT44(uStack_164,uStack_168);
      param_2[4] = CONCAT44(uStack_16c,uStack_170);
      param_2[7] = CONCAT44(uStack_154,uStack_158);
      param_2[6] = CONCAT44(uStack_15c,uStack_160);
      puVar12 = (undefined8 *)param_2[9];
      puVar10 = param_2 + 10;
      if (puVar12 != puVar10) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        param_2[8] = param_2 + 1;
        param_2[9] = puVar10;
        puVar12 = puVar10;
      }
      if (iStack_18c < 3) {
        puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
        *puVar12 = *puStack_148;
        puVar12[1] = puStack_148[1];
        uStack_190 = 0x42ff0000;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        *(undefined8 *)((long)puVar10 + 0x34) = 0;
        *(undefined8 *)((long)puVar10 + 0x2c) = 0;
        if (puStack_148 != &uStack_140) {
          _free(puStack_148[-1]);
        }
      }
      else {
        param_2[8] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
        param_2[9] = puStack_148;
      }
      if (*(int *)(param_1 + 0x24) == 2) {
        FUN_10957b024(&uStack_190,param_1 + 0xc,iVar3);
        if (*(int *)(param_2 + 0x24) != 2) {
          FUN_1092612e0();
          goto LAB_10957afd4;
        }
        if (param_2[0x13] != 0) {
          piVar2 = (int *)(param_2[0x13] + 0x14);
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(param_2 + 0xc);
          }
        }
        param_2[0x13] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[0x11] = 0;
        param_2[0x10] = 0;
        if (0 < *(int *)((long)param_2 + 100)) {
          lVar9 = 0;
          lVar11 = param_2[0x14];
          do {
            *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)((long)param_2 + 100));
        }
        param_2[0xd] = CONCAT44(uStack_184,uStack_188);
        param_2[0xc] = CONCAT44(iStack_18c,uStack_190);
        param_2[0xf] = CONCAT44(uStack_174,uStack_178);
        param_2[0xe] = CONCAT44(uStack_17c,uStack_180);
        param_2[0x11] = CONCAT44(uStack_164,uStack_168);
        param_2[0x10] = CONCAT44(uStack_16c,uStack_170);
        param_2[0x13] = CONCAT44(uStack_154,uStack_158);
        param_2[0x12] = CONCAT44(uStack_15c,uStack_160);
        puVar12 = (undefined8 *)param_2[0x15];
        puVar10 = param_2 + 0x16;
        if (puVar12 != puVar10) {
          if (puVar12 != (undefined8 *)0x0) {
            _free(puVar12[-1]);
          }
          param_2[0x14] = param_2 + 0xd;
          param_2[0x15] = puVar10;
          puVar12 = puVar10;
        }
        if (iStack_18c < 3) {
          puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
          *puVar12 = *puStack_148;
          puVar12[1] = puStack_148[1];
          uStack_190 = 0x42ff0000;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          *(undefined8 *)((long)puVar10 + 0x34) = 0;
          *(undefined8 *)((long)puVar10 + 0x2c) = 0;
          if (puStack_148 != &uStack_140) {
            _free(puStack_148[-1]);
          }
        }
        else {
          param_2[0x14] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
          param_2[0x15] = puStack_148;
        }
        if (*(int *)(param_1 + 0x24) == 2) {
          FUN_10957b024(&uStack_190,param_1 + 0x18,iVar3);
          if (*(int *)(param_2 + 0x24) != 2) {
            FUN_1092612e0();
            goto LAB_10957afd4;
          }
          if (param_2[0x1f] != 0) {
            piVar2 = (int *)(param_2[0x1f] + 0x14);
            do {
              iVar4 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(param_2 + 0x18);
            }
          }
          param_2[0x1f] = 0;
          param_2[0x1b] = 0;
          param_2[0x1a] = 0;
          param_2[0x1d] = 0;
          param_2[0x1c] = 0;
          if (0 < *(int *)((long)param_2 + 0xc4)) {
            lVar9 = 0;
            lVar11 = param_2[0x20];
            do {
              *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)((long)param_2 + 0xc4));
          }
          param_2[0x19] = CONCAT44(uStack_184,uStack_188);
          param_2[0x18] = CONCAT44(iStack_18c,uStack_190);
          param_2[0x1b] = CONCAT44(uStack_174,uStack_178);
          param_2[0x1a] = CONCAT44(uStack_17c,uStack_180);
          param_2[0x1d] = CONCAT44(uStack_164,uStack_168);
          param_2[0x1c] = CONCAT44(uStack_16c,uStack_170);
          param_2[0x1f] = CONCAT44(uStack_154,uStack_158);
          param_2[0x1e] = CONCAT44(uStack_15c,uStack_160);
          puVar12 = (undefined8 *)param_2[0x21];
          puVar10 = param_2 + 0x22;
          if (puVar12 != puVar10) {
            if (puVar12 != (undefined8 *)0x0) {
              _free(puVar12[-1]);
            }
            param_2[0x20] = param_2 + 0x19;
            param_2[0x21] = puVar10;
            puVar12 = puVar10;
          }
          if (2 < iStack_18c) {
            param_2[0x20] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
            param_2[0x21] = puStack_148;
            goto LAB_10957af54;
          }
          goto LAB_10957af00;
        }
      }
    }
LAB_10957afa8:
    FUN_1092612e0();
LAB_10957afac:
    func_0x000105688514(&UNK_10f574011);
  }
  else {
    if (iVar4 == 1) {
      uStack_178 = *(undefined4 *)(param_1 + 3);
      uStack_174 = *(undefined4 *)((long)param_1 + 0x1c);
      uStack_168 = (undefined4)param_1[5];
      uStack_164 = (undefined4)((ulong)param_1[5] >> 0x20);
      uStack_170 = (undefined4)param_1[4];
      uStack_16c = (undefined4)((ulong)param_1[4] >> 0x20);
      uStack_160 = *(undefined4 *)(param_1 + 6);
      uStack_154 = (undefined4)*(undefined8 *)((long)param_1 + 0x3c);
      uStack_150._0_4_ = (uint)((ulong)*(undefined8 *)((long)param_1 + 0x3c) >> 0x20);
      uStack_15c = (undefined4)*(undefined8 *)((long)param_1 + 0x34);
      uStack_158 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20);
      uStack_150._4_4_ = *(undefined4 *)((long)param_1 + 0x44);
      uStack_140 = param_1[10];
      puStack_148 = (undefined8 *)param_1[9];
      uStack_60 = (undefined5)param_1[0x26];
      uStack_5b = (undefined3)((ulong)param_1[0x26] >> 0x28);
      uStack_68 = (undefined5)*puVar10;
      uStack_63 = (undefined3)((ulong)*puVar10 >> 0x28);
      uStack_58 = param_1[0x27];
      uStack_188 = (undefined4)param_1[1];
      uStack_184 = (undefined4)((ulong)param_1[1] >> 0x20);
      uStack_190 = (undefined4)*param_1;
      iStack_18c = (int)((ulong)*param_1 >> 0x20);
      uStack_180 = (undefined4)param_1[2];
      uStack_17c = (undefined4)((ulong)param_1[2] >> 0x20);
      uStack_138 = CONCAT44(uStack_138._4_4_,*(undefined4 *)(param_1 + 0xb));
      uStack_70 = CONCAT44(uStack_70._4_4_,1);
      FUN_1095798c8(param_2,&uStack_190);
      param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
      *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
      param_2[0x27] = uStack_58;
      FUN_10951f294(&uStack_190);
      if (*(int *)(param_2 + 0x24) == 1) {
        fVar17 = 0.5;
        fVar13 = (float)___sincosf_stret();
        fVar19 = fVar13 * 0.0;
        fVar20 = fVar19 * fVar19;
        fVar18 = (fVar13 * fVar13 + fVar20) * -2.0 + 1.0;
        fVar21 = fVar13 * fVar17 + fVar20;
        fStack_1ac = fVar13 * fVar19 - fVar17 * fVar19;
        fStack_1ac = fStack_1ac + fStack_1ac;
        fVar14 = fVar20 - fVar13 * fVar17;
        fStack_1b8 = fVar13 * fVar19 + fVar17 * fVar19;
        fStack_1b8 = fStack_1b8 + fStack_1b8;
        uStack_1d0 = CONCAT44(fVar21 + fVar21,fVar18);
        uStack_1c8 = (ulong)(uint)fStack_1ac;
        uStack_1c0 = CONCAT44(fVar18,fVar14 + fVar14);
        uStack_1b4 = 0;
        fStack_1a8 = (fVar20 + fVar20) * -2.0 + 1.0;
        uStack_19c = 0;
        uStack_1a4 = 0;
        uStack_194 = 0x3f800000;
        fStack_1b0 = fStack_1b8;
        FUN_109519fd0(&uStack_190,&uStack_1d0,(long)param_2 + 0x1c);
        *(ulong *)((long)param_2 + 0x24) = CONCAT44(uStack_184,uStack_188);
        *(ulong *)((long)param_2 + 0x1c) = CONCAT44(iStack_18c,uStack_190);
        *(ulong *)((long)param_2 + 0x34) = CONCAT44(uStack_174,uStack_178);
        *(ulong *)((long)param_2 + 0x2c) = CONCAT44(uStack_17c,uStack_180);
        *(ulong *)((long)param_2 + 0x44) = CONCAT44(uStack_164,uStack_168);
        *(ulong *)((long)param_2 + 0x3c) = CONCAT44(uStack_16c,uStack_170);
        *(ulong *)((long)param_2 + 0x54) = CONCAT44(uStack_154,uStack_158);
        *(ulong *)((long)param_2 + 0x4c) = CONCAT44(uStack_15c,uStack_160);
        if ((iVar3 == 0x5a) || (iVar3 == 0x10e)) {
          uVar15 = NEON_rev64(*(undefined8 *)((long)param_2 + 0x14),4);
          *(undefined8 *)((long)param_2 + 0x14) = uVar15;
          auVar16 = NEON_rev64(*(undefined1 (*) [16])((long)param_2 + 4),4);
          *(long *)((long)param_2 + 0xc) = auVar16._8_8_;
          *(long *)((long)param_2 + 4) = auVar16._0_8_;
        }
        goto LAB_10957af54;
      }
      goto LAB_10957afa8;
    }
    if (iVar4 != 0) goto LAB_10957afac;
    if (*(int *)(param_2 + 0x24) != 0) {
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_5b = 0;
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      puStack_e8 = (undefined8 *)0x0;
      puStack_f0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_190 = 0x42ff0000;
      uStack_150 = &uStack_188;
      uStack_184 = 0;
      uStack_180 = 0;
      iStack_18c = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_164 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      puStack_148 = &uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_63 = 0;
      FUN_1095798c8(param_2,&uStack_190);
      param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
      *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
      param_2[0x27] = uStack_58;
      FUN_10951f294(&uStack_190);
      if (*(int *)(param_1 + 0x24) != 0) goto LAB_10957afa8;
    }
    FUN_10957b024(&uStack_190,param_1,iVar3);
    if (*(int *)(param_2 + 0x24) == 0) {
      if (param_2[7] != 0) {
        piVar2 = (int *)(param_2[7] + 0x14);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_2);
        }
      }
      param_2[7] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      if (0 < *(int *)((long)param_2 + 4)) {
        lVar9 = 0;
        lVar11 = param_2[8];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 4));
      }
      param_2[1] = CONCAT44(uStack_184,uStack_188);
      *param_2 = CONCAT44(iStack_18c,uStack_190);
      param_2[3] = CONCAT44(uStack_174,uStack_178);
      param_2[2] = CONCAT44(uStack_17c,uStack_180);
      param_2[5] = CONCAT44(uStack_164,uStack_168);
      param_2[4] = CONCAT44(uStack_16c,uStack_170);
      param_2[7] = CONCAT44(uStack_154,uStack_158);
      param_2[6] = CONCAT44(uStack_15c,uStack_160);
      puVar12 = (undefined8 *)param_2[9];
      puVar10 = param_2 + 10;
      if (puVar12 != puVar10) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        param_2[8] = param_2 + 1;
        param_2[9] = puVar10;
        puVar12 = puVar10;
      }
      if (2 < iStack_18c) {
        param_2[8] = uStack_150;
        param_2[9] = puStack_148;
        goto LAB_10957af54;
      }
LAB_10957af00:
      puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
      *puVar12 = *puStack_148;
      puVar12[1] = puStack_148[1];
      uStack_190 = 0x42ff0000;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      if (puStack_148 != &uStack_140) {
        _free(puStack_148[-1]);
      }
LAB_10957af54:
      *piVar1 = (*piVar1 - iVar3 >> 0x1f & 0x168U) + (*piVar1 - iVar3) % 0x168;
      return;
    }
  }
  FUN_1092612e0();
LAB_10957afd4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10957afd8);
  (*pcVar8)();
}



/* Entry: 10957b024; end: 10957b2bb;  */

void FUN_10957b024(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_58 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = (undefined8 *)&uStack_c0;
  piVar11 = (int *)((long)param_1 + 4);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *(undefined4 *)param_1 = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  puVar8 = param_1 + 10;
  *puVar8 = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = puVar8;
  param_1[0xb] = 0;
  uStack_b8 = SUB84(param_1,0);
  uVar5 = uStack_b8;
  uStack_b4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = uStack_b4;
  uStack_b8 = (undefined4)param_2;
  uStack_b4 = (undefined4)((ulong)param_2 >> 0x20);
  if (param_3 == 0x10e) {
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_c0 = 0x1010000;
    auStack_58[0] = 0x2010000;
    uStack_48 = 0;
    puStack_50 = param_1;
    FUN_109a895d0(&uStack_c0,auStack_58);
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_c0 = 0x1010000;
    auStack_58[0] = 0x2010000;
    uStack_48 = 0;
    uStack_b8 = uVar5;
    uStack_b4 = uVar6;
    puStack_50 = param_1;
    FUN_109a491e0(&uStack_c0,auStack_58,0);
  }
  else if (param_3 == 0xb4) {
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_c0 = 0x1010000;
    auStack_58[0] = 0x2010000;
    uStack_48 = 0;
    puStack_50 = param_1;
    FUN_109a491e0(&uStack_c0,auStack_58,0xffffffff);
  }
  else if (param_3 == 0x5a) {
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_c0 = 0x1010000;
    auStack_58[0] = 0x2010000;
    uStack_48 = 0;
    puStack_50 = param_1;
    FUN_109a895d0(&uStack_c0,auStack_58);
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_c0 = 0x1010000;
    auStack_58[0] = 0x2010000;
    uStack_48 = 0;
    uStack_b8 = uVar5;
    uStack_b4 = uVar6;
    puStack_50 = param_1;
    FUN_109a491e0(&uStack_c0,auStack_58,1);
  }
  else {
    uStack_c0 = 0x42ff0000;
    uStack_b4 = 0;
    uStack_b0 = 0;
    iStack_bc = 0;
    uStack_b8 = 0;
    uStack_80 = (ulong)&uStack_c0 | 8;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    auStack_58[0] = 0x2010000;
    uStack_48 = 0;
    puStack_78 = &uStack_70;
    FUN_109a479a0(param_2,auStack_58);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(param_1);
      }
    }
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar7 = 0;
      lVar9 = param_1[8];
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *piVar11);
    }
    param_1[1] = CONCAT44(uStack_b4,uStack_b8);
    *param_1 = CONCAT44(iStack_bc,uStack_c0);
    param_1[3] = CONCAT44(uStack_a4,uStack_a8);
    param_1[2] = CONCAT44(uStack_ac,uStack_b0);
    param_1[5] = CONCAT44(uStack_94,uStack_98);
    param_1[4] = CONCAT44(uStack_9c,uStack_a0);
    param_1[7] = uStack_88;
    param_1[6] = CONCAT44(uStack_8c,uStack_90);
    puVar10 = (undefined8 *)param_1[9];
    if (puVar10 != puVar8) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar8;
      puVar10 = puVar8;
    }
    if (iStack_bc < 3) {
      puVar8 = (undefined8 *)((ulong)&uStack_c0 | 4);
      *puVar10 = *puStack_78;
      puVar10[1] = puStack_78[1];
      uStack_c0 = 0x42ff0000;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      *(undefined8 *)((long)puVar8 + 0x34) = 0;
      *(undefined8 *)((long)puVar8 + 0x2c) = 0;
      if (puStack_78 != &uStack_70) {
        _free(puStack_78[-1]);
      }
    }
    else {
      param_1[8] = uStack_80;
      param_1[9] = puStack_78;
    }
  }
  return;
}



/* Entry: 10957b2bc; end: 10957b2cf;  */

void FUN_10957b2bc(void)

{
  return;
}



/* Entry: 10957b2d0; end: 10957b303;  */

void FUN_10957b2d0(long param_1,long param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 auStack_d0 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  func_0x000105686100();
  iVar2 = *param_3;
  piVar1 = (int *)(param_2 + 0x128);
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  uVar7 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_2 + 0x130) = uVar8;
  *(undefined8 *)piVar1 = uVar7;
  if (*(uint *)(param_1 + 0x120) < 3) {
    iVar2 = (iVar2 >> 0x1f & 0x168U) + iVar2 % 0x168;
    uVar7 = NEON_scvtf(CONCAT44(*(int *)(param_1 + 8) + -1,
                                *(int *)(param_1 +
                                        *(long *)(&UNK_10dfd4b50 +
                                                 (ulong)*(uint *)(param_1 + 0x120) * 8)) + -1),4);
    uStack_110 = CONCAT44((float)((ulong)uVar7 >> 0x20) * 0.5,(float)uVar7 * 0.5);
    FUN_109b1f55c(auStack_a0,(double)-(float)iVar2,0x3ff0000000000000,&uStack_110);
    if (*(int *)(param_1 + 0x120) == 0) {
      uStack_a8 = 0;
      auStack_b8[0] = 0x1010000;
      lStack_b0 = param_1;
      if (*(int *)(param_2 + 0x120) == 0) {
        auStack_d0[0] = 0x2010000;
        uStack_c0 = 0;
        auStack_e8[0] = 0x1010000;
        puStack_e0 = auStack_a0;
        uStack_d8 = 0;
        uStack_f0 = NEON_rev64(*(undefined8 *)(param_1 + 8),4);
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_c8 = param_2;
        FUN_109b1e030(auStack_b8,auStack_d0,auStack_e8,&uStack_f0,1,0,&uStack_110);
        iVar2 = *piVar1 - iVar2;
        iVar2 = (iVar2 >> 0x1f & 0x168U) + iVar2 % 0x168;
        *piVar1 = iVar2;
        iVar2 = (int)(short)((short)iVar2 + 0x2d) / 0x5a;
        if ((iVar2 - (iVar2 + ((uint)(int)(char)iVar2 >> 0xd & 3) & 0xfc) & 0xfd) == 1) {
          uVar7 = NEON_rev64(*(undefined8 *)(param_2 + 300),4);
          *(undefined8 *)(param_2 + 300) = uVar7;
        }
        if (lStack_68 != 0) {
          piVar1 = (int *)(lStack_68 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(auStack_a0);
          }
        }
        lStack_68 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        if (0 < iStack_9c) {
          lVar6 = 0;
          do {
            *(undefined4 *)(lStack_60 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < iStack_9c);
        }
        if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_58 + -8));
        }
        return;
      }
      FUN_1092612e0();
      goto LAB_10957b560;
    }
  }
  else {
    func_0x000105688514(&UNK_10f574011);
  }
  func_0x000105688514(&UNK_10f5740c1);
LAB_10957b560:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10957b564);
  (*pcVar5)();
}



/* Entry: 10957b304; end: 10957b583;  */

void FUN_10957b304(long param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 auStack_d0 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  piVar1 = (int *)(param_2 + 0x128);
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  uVar7 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_2 + 0x130) = uVar8;
  *(undefined8 *)piVar1 = uVar7;
  if (*(uint *)(param_1 + 0x120) < 3) {
    iVar2 = (param_3 >> 0x1f & 0x168U) + param_3 % 0x168;
    uVar7 = NEON_scvtf(CONCAT44(*(int *)(param_1 + 8) + -1,
                                *(int *)(param_1 +
                                        *(long *)(&UNK_10dfd4b50 +
                                                 (ulong)*(uint *)(param_1 + 0x120) * 8)) + -1),4);
    uStack_110 = CONCAT44((float)((ulong)uVar7 >> 0x20) * 0.5,(float)uVar7 * 0.5);
    FUN_109b1f55c(auStack_a0,(double)-(float)iVar2,0x3ff0000000000000,&uStack_110);
    if (*(int *)(param_1 + 0x120) == 0) {
      uStack_a8 = 0;
      auStack_b8[0] = 0x1010000;
      lStack_b0 = param_1;
      if (*(int *)(param_2 + 0x120) == 0) {
        auStack_d0[0] = 0x2010000;
        uStack_c0 = 0;
        auStack_e8[0] = 0x1010000;
        puStack_e0 = auStack_a0;
        uStack_d8 = 0;
        uStack_f0 = NEON_rev64(*(undefined8 *)(param_1 + 8),4);
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_c8 = param_2;
        FUN_109b1e030(auStack_b8,auStack_d0,auStack_e8,&uStack_f0,1,0,&uStack_110);
        iVar2 = *piVar1 - iVar2;
        iVar2 = (iVar2 >> 0x1f & 0x168U) + iVar2 % 0x168;
        *piVar1 = iVar2;
        iVar2 = (int)(short)((short)iVar2 + 0x2d) / 0x5a;
        if ((iVar2 - (iVar2 + ((uint)(int)(char)iVar2 >> 0xd & 3) & 0xfc) & 0xfd) == 1) {
          uVar7 = NEON_rev64(*(undefined8 *)(param_2 + 300),4);
          *(undefined8 *)(param_2 + 300) = uVar7;
        }
        if (lStack_68 != 0) {
          piVar1 = (int *)(lStack_68 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(auStack_a0);
          }
        }
        lStack_68 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        if (0 < iStack_9c) {
          lVar6 = 0;
          do {
            *(undefined4 *)(lStack_60 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < iStack_9c);
        }
        if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_58 + -8));
        }
        return;
      }
      FUN_1092612e0();
      goto LAB_10957b560;
    }
  }
  else {
    func_0x000105688514(&UNK_10f574011);
  }
  func_0x000105688514(&UNK_10f5740c1);
LAB_10957b560:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10957b564);
  (*pcVar5)();
}



/* Entry: 10957b584; end: 10957b597;  */

void FUN_10957b584(void)

{
  return;
}



/* Entry: 10957b598; end: 10957b5bf;  */

void FUN_10957b598(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  undefined4 uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 auStack_240 [2];
  undefined4 uStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 *puStack_148;
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
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
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
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined8 uStack_58;
  
  if (*param_3 != 0) {
    FUN_109389068(&UNK_10f57394e,0x14d);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x25);
  puVar10 = param_1 + 0x25;
  piVar1 = (int *)(param_2 + 0x25);
  uVar15 = *puVar10;
  uVar7 = param_1[0x26];
  param_2[0x27] = param_1[0x27];
  param_2[0x26] = uVar7;
  *(undefined8 *)piVar1 = uVar15;
  iVar4 = (iVar4 >> 0x1f & 0x168U) + iVar4 % 0x168;
  iVar3 = (int)(short)((short)iVar4 + 0x2d) / 0x5a;
  if ((iVar3 - (iVar3 + ((uint)(int)(char)iVar3 >> 0xd & 3) & 0xfc) & 0xfd) == 1) {
    uVar15 = NEON_rev64(*(undefined8 *)((long)param_2 + 300),4);
    *(undefined8 *)((long)param_2 + 300) = uVar15;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 2) {
    func_0x000105688a04(&uStack_2f0,param_1);
    uStack_1d0 = *puVar10;
    uStack_1c8 = param_1[0x26];
    uStack_1c0 = param_1[0x27];
    puVar10 = (undefined8 *)((ulong)&uStack_2f0 | 4);
    uStack_150._0_4_ = (uint)&uStack_190 | 8;
    uStack_188 = (undefined4)uStack_2e8;
    uStack_184 = (undefined4)((ulong)uStack_2e8 >> 0x20);
    uStack_190 = uStack_2f0;
    iStack_18c = iStack_2ec;
    uStack_178 = (undefined4)uStack_2d8;
    uStack_174 = (undefined4)((ulong)uStack_2d8 >> 0x20);
    uStack_180 = (undefined4)uStack_2e0;
    uStack_17c = (undefined4)((ulong)uStack_2e0 >> 0x20);
    uStack_168 = (undefined4)uStack_2c8;
    uStack_164 = (undefined4)((ulong)uStack_2c8 >> 0x20);
    uStack_170 = (undefined4)uStack_2d0;
    uStack_16c = (undefined4)((ulong)uStack_2d0 >> 0x20);
    uStack_158 = (undefined4)uStack_2b8;
    uStack_154 = (undefined4)((ulong)uStack_2b8 >> 0x20);
    uStack_160 = (undefined4)uStack_2c0;
    uStack_15c = (undefined4)((ulong)uStack_2c0 >> 0x20);
    puStack_148 = &uStack_140;
    uStack_150._4_4_ = (undefined4)((ulong)&uStack_190 >> 0x20);
    uStack_140 = 0;
    uStack_138 = 0;
    if (iStack_2ec < 3) {
      uStack_140 = *puStack_2a8;
      uStack_138 = puStack_2a8[1];
    }
    else {
      uStack_150._0_4_ = (uint)uStack_2b0;
      uStack_150._4_4_ = (undefined4)(uStack_2b0 >> 0x20);
      puStack_148 = puStack_2a8;
      puStack_2a8 = auStack_2a0;
      uStack_2b0 = (ulong)&uStack_2f0 | 8;
    }
    uStack_2f0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    puStack_f0 = &uStack_128;
    uStack_130 = CONCAT44(iStack_28c,uStack_290);
    uStack_128 = CONCAT44(uStack_284,uStack_288);
    uStack_118 = CONCAT44(uStack_274,uStack_278);
    uStack_120 = CONCAT44(uStack_27c,uStack_280);
    uStack_108 = CONCAT44(uStack_264,uStack_268);
    uStack_110 = CONCAT44(uStack_26c,uStack_270);
    uStack_100 = CONCAT44(uStack_25c,uStack_260);
    uStack_f8 = uStack_258;
    puStack_e8 = &uStack_e0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (iStack_28c < 3) {
      uStack_e0 = *puStack_248;
      uStack_d8 = puStack_248[1];
    }
    else {
      puStack_e8 = puStack_248;
      puStack_f0 = puStack_250;
      puStack_248 = auStack_240;
      puStack_250 = (undefined8 *)&uStack_288;
    }
    uStack_290 = 0x42ff0000;
    uStack_284 = 0;
    uStack_280 = 0;
    iStack_28c = 0;
    uStack_288 = 0;
    uStack_274 = 0;
    uStack_270 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_264 = 0;
    uStack_26c = 0;
    uStack_268 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    puStack_90 = &uStack_c8;
    uStack_d0 = CONCAT44(iStack_22c,uStack_230);
    uStack_c8 = CONCAT44(uStack_224,uStack_228);
    uStack_b8 = CONCAT44(uStack_214,uStack_218);
    uStack_c0 = CONCAT44(uStack_21c,uStack_220);
    uStack_a8 = CONCAT44(uStack_204,uStack_208);
    uStack_b0 = CONCAT44(uStack_20c,uStack_210);
    uStack_a0 = CONCAT44(uStack_1fc,uStack_200);
    uStack_98 = uStack_1f8;
    puStack_88 = &uStack_80;
    uStack_78 = 0;
    uStack_80 = 0;
    if (iStack_22c < 3) {
      uStack_80 = *puStack_1e8;
      uStack_78 = puStack_1e8[1];
    }
    else {
      puStack_88 = puStack_1e8;
      puStack_90 = puStack_1f0;
      puStack_1e8 = auStack_1e0;
      puStack_1f0 = (undefined8 *)&uStack_228;
    }
    uStack_230 = 0x42ff0000;
    uStack_224 = 0;
    uStack_220 = 0;
    iStack_22c = 0;
    uStack_228 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    uStack_204 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,2);
    uStack_60 = (undefined5)uStack_1c8;
    uStack_5b = (undefined3)(uStack_1c8 >> 0x28);
    uStack_68 = (undefined5)uStack_1d0;
    uStack_63 = (undefined3)((ulong)uStack_1d0 >> 0x28);
    uStack_58 = uStack_1c0;
    FUN_1095798c8(param_2,&uStack_190);
    param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
    *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
    param_2[0x27] = uStack_58;
    FUN_10951f294(&uStack_190);
    func_0x0001056879ec(&uStack_2f0);
    if (*(int *)(param_1 + 0x24) == 2) {
      FUN_10957b024(&uStack_190,param_1,iVar4);
      if (*(int *)(param_2 + 0x24) != 2) {
        FUN_1092612e0();
        goto LAB_10957afd4;
      }
      if (param_2[7] != 0) {
        piVar2 = (int *)(param_2[7] + 0x14);
        do {
          iVar3 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(param_2);
        }
      }
      param_2[7] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      if (0 < *(int *)((long)param_2 + 4)) {
        lVar9 = 0;
        lVar11 = param_2[8];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 4));
      }
      param_2[1] = CONCAT44(uStack_184,uStack_188);
      *param_2 = CONCAT44(iStack_18c,uStack_190);
      param_2[3] = CONCAT44(uStack_174,uStack_178);
      param_2[2] = CONCAT44(uStack_17c,uStack_180);
      param_2[5] = CONCAT44(uStack_164,uStack_168);
      param_2[4] = CONCAT44(uStack_16c,uStack_170);
      param_2[7] = CONCAT44(uStack_154,uStack_158);
      param_2[6] = CONCAT44(uStack_15c,uStack_160);
      puVar12 = (undefined8 *)param_2[9];
      puVar10 = param_2 + 10;
      if (puVar12 != puVar10) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        param_2[8] = param_2 + 1;
        param_2[9] = puVar10;
        puVar12 = puVar10;
      }
      if (iStack_18c < 3) {
        puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
        *puVar12 = *puStack_148;
        puVar12[1] = puStack_148[1];
        uStack_190 = 0x42ff0000;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        *(undefined8 *)((long)puVar10 + 0x34) = 0;
        *(undefined8 *)((long)puVar10 + 0x2c) = 0;
        if (puStack_148 != &uStack_140) {
          _free(puStack_148[-1]);
        }
      }
      else {
        param_2[8] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
        param_2[9] = puStack_148;
      }
      if (*(int *)(param_1 + 0x24) == 2) {
        FUN_10957b024(&uStack_190,param_1 + 0xc,iVar4);
        if (*(int *)(param_2 + 0x24) != 2) {
          FUN_1092612e0();
          goto LAB_10957afd4;
        }
        if (param_2[0x13] != 0) {
          piVar2 = (int *)(param_2[0x13] + 0x14);
          do {
            iVar3 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(param_2 + 0xc);
          }
        }
        param_2[0x13] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[0x11] = 0;
        param_2[0x10] = 0;
        if (0 < *(int *)((long)param_2 + 100)) {
          lVar9 = 0;
          lVar11 = param_2[0x14];
          do {
            *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)((long)param_2 + 100));
        }
        param_2[0xd] = CONCAT44(uStack_184,uStack_188);
        param_2[0xc] = CONCAT44(iStack_18c,uStack_190);
        param_2[0xf] = CONCAT44(uStack_174,uStack_178);
        param_2[0xe] = CONCAT44(uStack_17c,uStack_180);
        param_2[0x11] = CONCAT44(uStack_164,uStack_168);
        param_2[0x10] = CONCAT44(uStack_16c,uStack_170);
        param_2[0x13] = CONCAT44(uStack_154,uStack_158);
        param_2[0x12] = CONCAT44(uStack_15c,uStack_160);
        puVar12 = (undefined8 *)param_2[0x15];
        puVar10 = param_2 + 0x16;
        if (puVar12 != puVar10) {
          if (puVar12 != (undefined8 *)0x0) {
            _free(puVar12[-1]);
          }
          param_2[0x14] = param_2 + 0xd;
          param_2[0x15] = puVar10;
          puVar12 = puVar10;
        }
        if (iStack_18c < 3) {
          puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
          *puVar12 = *puStack_148;
          puVar12[1] = puStack_148[1];
          uStack_190 = 0x42ff0000;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          *(undefined8 *)((long)puVar10 + 0x34) = 0;
          *(undefined8 *)((long)puVar10 + 0x2c) = 0;
          if (puStack_148 != &uStack_140) {
            _free(puStack_148[-1]);
          }
        }
        else {
          param_2[0x14] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
          param_2[0x15] = puStack_148;
        }
        if (*(int *)(param_1 + 0x24) == 2) {
          FUN_10957b024(&uStack_190,param_1 + 0x18,iVar4);
          if (*(int *)(param_2 + 0x24) != 2) {
            FUN_1092612e0();
            goto LAB_10957afd4;
          }
          if (param_2[0x1f] != 0) {
            piVar2 = (int *)(param_2[0x1f] + 0x14);
            do {
              iVar3 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(param_2 + 0x18);
            }
          }
          param_2[0x1f] = 0;
          param_2[0x1b] = 0;
          param_2[0x1a] = 0;
          param_2[0x1d] = 0;
          param_2[0x1c] = 0;
          if (0 < *(int *)((long)param_2 + 0xc4)) {
            lVar9 = 0;
            lVar11 = param_2[0x20];
            do {
              *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)((long)param_2 + 0xc4));
          }
          param_2[0x19] = CONCAT44(uStack_184,uStack_188);
          param_2[0x18] = CONCAT44(iStack_18c,uStack_190);
          param_2[0x1b] = CONCAT44(uStack_174,uStack_178);
          param_2[0x1a] = CONCAT44(uStack_17c,uStack_180);
          param_2[0x1d] = CONCAT44(uStack_164,uStack_168);
          param_2[0x1c] = CONCAT44(uStack_16c,uStack_170);
          param_2[0x1f] = CONCAT44(uStack_154,uStack_158);
          param_2[0x1e] = CONCAT44(uStack_15c,uStack_160);
          puVar12 = (undefined8 *)param_2[0x21];
          puVar10 = param_2 + 0x22;
          if (puVar12 != puVar10) {
            if (puVar12 != (undefined8 *)0x0) {
              _free(puVar12[-1]);
            }
            param_2[0x20] = param_2 + 0x19;
            param_2[0x21] = puVar10;
            puVar12 = puVar10;
          }
          if (2 < iStack_18c) {
            param_2[0x20] = CONCAT44(uStack_150._4_4_,(uint)uStack_150);
            param_2[0x21] = puStack_148;
            goto LAB_10957af54;
          }
          goto LAB_10957af00;
        }
      }
    }
LAB_10957afa8:
    FUN_1092612e0();
LAB_10957afac:
    func_0x000105688514(&UNK_10f574011);
  }
  else {
    if (iVar3 == 1) {
      uStack_178 = *(undefined4 *)(param_1 + 3);
      uStack_174 = *(undefined4 *)((long)param_1 + 0x1c);
      uStack_168 = (undefined4)param_1[5];
      uStack_164 = (undefined4)((ulong)param_1[5] >> 0x20);
      uStack_170 = (undefined4)param_1[4];
      uStack_16c = (undefined4)((ulong)param_1[4] >> 0x20);
      uStack_160 = *(undefined4 *)(param_1 + 6);
      uStack_154 = (undefined4)*(undefined8 *)((long)param_1 + 0x3c);
      uStack_150._0_4_ = (uint)((ulong)*(undefined8 *)((long)param_1 + 0x3c) >> 0x20);
      uStack_15c = (undefined4)*(undefined8 *)((long)param_1 + 0x34);
      uStack_158 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20);
      uStack_150._4_4_ = *(undefined4 *)((long)param_1 + 0x44);
      uStack_140 = param_1[10];
      puStack_148 = (undefined8 *)param_1[9];
      uStack_60 = (undefined5)param_1[0x26];
      uStack_5b = (undefined3)((ulong)param_1[0x26] >> 0x28);
      uStack_68 = (undefined5)*puVar10;
      uStack_63 = (undefined3)((ulong)*puVar10 >> 0x28);
      uStack_58 = param_1[0x27];
      uStack_188 = (undefined4)param_1[1];
      uStack_184 = (undefined4)((ulong)param_1[1] >> 0x20);
      uStack_190 = (undefined4)*param_1;
      iStack_18c = (int)((ulong)*param_1 >> 0x20);
      uStack_180 = (undefined4)param_1[2];
      uStack_17c = (undefined4)((ulong)param_1[2] >> 0x20);
      uStack_138 = CONCAT44(uStack_138._4_4_,*(undefined4 *)(param_1 + 0xb));
      uStack_70 = CONCAT44(uStack_70._4_4_,1);
      FUN_1095798c8(param_2,&uStack_190);
      param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
      *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
      param_2[0x27] = uStack_58;
      FUN_10951f294(&uStack_190);
      if (*(int *)(param_2 + 0x24) == 1) {
        fVar17 = 0.5;
        fVar13 = (float)___sincosf_stret();
        fVar19 = fVar13 * 0.0;
        fVar20 = fVar19 * fVar19;
        fVar18 = (fVar13 * fVar13 + fVar20) * -2.0 + 1.0;
        fVar21 = fVar13 * fVar17 + fVar20;
        fStack_1ac = fVar13 * fVar19 - fVar17 * fVar19;
        fStack_1ac = fStack_1ac + fStack_1ac;
        fVar14 = fVar20 - fVar13 * fVar17;
        fStack_1b8 = fVar13 * fVar19 + fVar17 * fVar19;
        fStack_1b8 = fStack_1b8 + fStack_1b8;
        uStack_1d0 = CONCAT44(fVar21 + fVar21,fVar18);
        uStack_1c8 = (ulong)(uint)fStack_1ac;
        uStack_1c0 = CONCAT44(fVar18,fVar14 + fVar14);
        uStack_1b4 = 0;
        fStack_1a8 = (fVar20 + fVar20) * -2.0 + 1.0;
        uStack_19c = 0;
        uStack_1a4 = 0;
        uStack_194 = 0x3f800000;
        fStack_1b0 = fStack_1b8;
        FUN_109519fd0(&uStack_190,&uStack_1d0,(long)param_2 + 0x1c);
        *(ulong *)((long)param_2 + 0x24) = CONCAT44(uStack_184,uStack_188);
        *(ulong *)((long)param_2 + 0x1c) = CONCAT44(iStack_18c,uStack_190);
        *(ulong *)((long)param_2 + 0x34) = CONCAT44(uStack_174,uStack_178);
        *(ulong *)((long)param_2 + 0x2c) = CONCAT44(uStack_17c,uStack_180);
        *(ulong *)((long)param_2 + 0x44) = CONCAT44(uStack_164,uStack_168);
        *(ulong *)((long)param_2 + 0x3c) = CONCAT44(uStack_16c,uStack_170);
        *(ulong *)((long)param_2 + 0x54) = CONCAT44(uStack_154,uStack_158);
        *(ulong *)((long)param_2 + 0x4c) = CONCAT44(uStack_15c,uStack_160);
        if ((iVar4 == 0x5a) || (iVar4 == 0x10e)) {
          uVar15 = NEON_rev64(*(undefined8 *)((long)param_2 + 0x14),4);
          *(undefined8 *)((long)param_2 + 0x14) = uVar15;
          auVar16 = NEON_rev64(*(undefined1 (*) [16])((long)param_2 + 4),4);
          *(long *)((long)param_2 + 0xc) = auVar16._8_8_;
          *(long *)((long)param_2 + 4) = auVar16._0_8_;
        }
        goto LAB_10957af54;
      }
      goto LAB_10957afa8;
    }
    if (iVar3 != 0) goto LAB_10957afac;
    if (*(int *)(param_2 + 0x24) != 0) {
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_5b = 0;
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      puStack_e8 = (undefined8 *)0x0;
      puStack_f0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_190 = 0x42ff0000;
      uStack_150 = &uStack_188;
      uStack_184 = 0;
      uStack_180 = 0;
      iStack_18c = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_164 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      puStack_148 = &uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_63 = 0;
      FUN_1095798c8(param_2,&uStack_190);
      param_2[0x26] = CONCAT35(uStack_5b,uStack_60);
      *(ulong *)piVar1 = CONCAT35(uStack_63,uStack_68);
      param_2[0x27] = uStack_58;
      FUN_10951f294(&uStack_190);
      if (*(int *)(param_1 + 0x24) != 0) goto LAB_10957afa8;
    }
    FUN_10957b024(&uStack_190,param_1,iVar4);
    if (*(int *)(param_2 + 0x24) == 0) {
      if (param_2[7] != 0) {
        piVar2 = (int *)(param_2[7] + 0x14);
        do {
          iVar3 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(param_2);
        }
      }
      param_2[7] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      if (0 < *(int *)((long)param_2 + 4)) {
        lVar9 = 0;
        lVar11 = param_2[8];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 4));
      }
      param_2[1] = CONCAT44(uStack_184,uStack_188);
      *param_2 = CONCAT44(iStack_18c,uStack_190);
      param_2[3] = CONCAT44(uStack_174,uStack_178);
      param_2[2] = CONCAT44(uStack_17c,uStack_180);
      param_2[5] = CONCAT44(uStack_164,uStack_168);
      param_2[4] = CONCAT44(uStack_16c,uStack_170);
      param_2[7] = CONCAT44(uStack_154,uStack_158);
      param_2[6] = CONCAT44(uStack_15c,uStack_160);
      puVar12 = (undefined8 *)param_2[9];
      puVar10 = param_2 + 10;
      if (puVar12 != puVar10) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        param_2[8] = param_2 + 1;
        param_2[9] = puVar10;
        puVar12 = puVar10;
      }
      if (2 < iStack_18c) {
        param_2[8] = uStack_150;
        param_2[9] = puStack_148;
        goto LAB_10957af54;
      }
LAB_10957af00:
      puVar10 = (undefined8 *)((ulong)&uStack_190 | 4);
      *puVar12 = *puStack_148;
      puVar12[1] = puStack_148[1];
      uStack_190 = 0x42ff0000;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      if (puStack_148 != &uStack_140) {
        _free(puStack_148[-1]);
      }
LAB_10957af54:
      *piVar1 = (*piVar1 - iVar4 >> 0x1f & 0x168U) + (*piVar1 - iVar4) % 0x168;
      return;
    }
  }
  FUN_1092612e0();
LAB_10957afd4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10957afd8);
  (*pcVar8)();
}



/* Entry: 10957b5c0; end: 10957b5d3;  */

void FUN_10957b5c0(void)

{
  return;
}



/* Entry: 10957b5d4; end: 10957b5fb;  */

void FUN_10957b5d4(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 auStack_d0 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  if (*param_3 != 0) {
    FUN_109389068(&UNK_10f57394e,0x16c);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x128);
  piVar1 = (int *)(param_2 + 0x128);
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  uVar7 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_2 + 0x130) = uVar8;
  *(undefined8 *)piVar1 = uVar7;
  if (*(uint *)(param_1 + 0x120) < 3) {
    iVar2 = (iVar2 >> 0x1f & 0x168U) + iVar2 % 0x168;
    uVar7 = NEON_scvtf(CONCAT44(*(int *)(param_1 + 8) + -1,
                                *(int *)(param_1 +
                                        *(long *)(&UNK_10dfd4b50 +
                                                 (ulong)*(uint *)(param_1 + 0x120) * 8)) + -1),4);
    uStack_110 = CONCAT44((float)((ulong)uVar7 >> 0x20) * 0.5,(float)uVar7 * 0.5);
    FUN_109b1f55c(auStack_a0,(double)-(float)iVar2,0x3ff0000000000000,&uStack_110);
    if (*(int *)(param_1 + 0x120) == 0) {
      uStack_a8 = 0;
      auStack_b8[0] = 0x1010000;
      lStack_b0 = param_1;
      if (*(int *)(param_2 + 0x120) == 0) {
        auStack_d0[0] = 0x2010000;
        uStack_c0 = 0;
        auStack_e8[0] = 0x1010000;
        puStack_e0 = auStack_a0;
        uStack_d8 = 0;
        uStack_f0 = NEON_rev64(*(undefined8 *)(param_1 + 8),4);
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_c8 = param_2;
        FUN_109b1e030(auStack_b8,auStack_d0,auStack_e8,&uStack_f0,1,0,&uStack_110);
        iVar2 = *piVar1 - iVar2;
        iVar2 = (iVar2 >> 0x1f & 0x168U) + iVar2 % 0x168;
        *piVar1 = iVar2;
        iVar2 = (int)(short)((short)iVar2 + 0x2d) / 0x5a;
        if ((iVar2 - (iVar2 + ((uint)(int)(char)iVar2 >> 0xd & 3) & 0xfc) & 0xfd) == 1) {
          uVar7 = NEON_rev64(*(undefined8 *)(param_2 + 300),4);
          *(undefined8 *)(param_2 + 300) = uVar7;
        }
        if (lStack_68 != 0) {
          piVar1 = (int *)(lStack_68 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(auStack_a0);
          }
        }
        lStack_68 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        if (0 < iStack_9c) {
          lVar6 = 0;
          do {
            *(undefined4 *)(lStack_60 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < iStack_9c);
        }
        if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_58 + -8));
        }
        return;
      }
      FUN_1092612e0();
      goto LAB_10957b560;
    }
  }
  else {
    func_0x000105688514(&UNK_10f574011);
  }
  func_0x000105688514(&UNK_10f5740c1);
LAB_10957b560:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10957b564);
  (*pcVar5)();
}



/* Entry: 10957b5fc; end: 10957b60f;  */

void FUN_10957b5fc(void)

{
  return;
}



/* Entry: 10957b610; end: 10957b70f;  */

void FUN_10957b610(long param_1,long param_2,long *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double adStack_80 [4];
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  if (*param_3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_2 + 0x130) = uVar4;
    *(undefined8 *)(param_2 + 0x128) = uVar3;
    if (2 < *(uint *)(param_1 + 0x120)) goto LAB_10957b704;
    uVar1 = (ulong)*(uint *)(param_4 + 0x10);
    uVar2 = (ulong)*(uint *)(param_4 + 0x14);
    FUN_10955c8ec(uVar1,uVar2,
                  *(undefined4 *)
                   (param_1 + *(long *)(&UNK_10dfd4b50 + (ulong)*(uint *)(param_1 + 0x120) * 8)),
                  *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_4 + 0x1c));
    if (*(int *)(param_1 + 0x120) == 0) {
      uStack_38 = 0;
      auStack_48[0] = 0x1010000;
      lStack_40 = param_1;
      if (*(int *)(param_2 + 0x120) == 0) {
        auStack_60[0] = 0x2010000;
        uStack_50 = 0;
        adStack_80[0] = (double)*(float *)(param_4 + 0x18);
        adStack_80[2] = 0.0;
        adStack_80[3] = 0.0;
        adStack_80[1] = 0.0;
        lStack_58 = param_2;
        FUN_109a4a0a4(auStack_48,auStack_60,uVar2 >> 0x20,uVar1,uVar2,uVar1 >> 0x20,0,adStack_80);
        return;
      }
    }
    FUN_1092612e0();
  }
  FUN_109389068(&UNK_10f57394e,0x1f2);
LAB_10957b704:
  func_0x000105688514(&UNK_10f574011);
  return;
}



/* Entry: 10957b710; end: 10957b72b;  */

void FUN_10957b710(void)

{
  return;
}



/* Entry: 10957b72c; end: 10957bc83;  */

void FUN_10957b72c(long *param_1,long param_2,long *param_3,long param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  long lVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_188;
  undefined4 auStack_180 [2];
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  long lStack_160;
  undefined8 uStack_158;
  undefined4 auStack_150 [2];
  long *plStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  float *pfStack_108;
  float *pfStack_100;
  undefined8 uStack_f8;
  float afStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001056853dc();
  plVar6 = (long *)*param_3;
  if (param_3[1] - (long)plVar6 == 0x38) {
    lVar13 = 1;
    for (piVar14 = (int *)plVar6[1]; piVar14 != (int *)plVar6[2]; piVar14 = piVar14 + 1) {
      lVar13 = (long)*piVar14 * (long)(int)lVar13;
    }
    pfStack_108 = (float *)0x0;
    pfStack_100 = (float *)0x0;
    uStack_f8 = 0;
    FUN_1093c71a0(&pfStack_108,*plVar6,*plVar6 + lVar13 * 4);
    if ((long)pfStack_100 - (long)pfStack_108 != 0x20) goto LAB_10957bb98;
    if (*(float *)(param_4 + 0x14) <= 0.0) {
      uVar17 = 0x234;
    }
    else {
      if (0.0 < *(float *)(param_4 + 0x18)) {
        if (*(uint *)(param_1 + 0x24) < 3) {
          if (*(int *)((long)param_1 +
                      *(long *)(&UNK_10dfd4b50 + (ulong)*(uint *)(param_1 + 0x24) * 8)) < 1) {
            uVar17 = 0x238;
          }
          else {
            if (0 < (int)param_1[1]) {
              uVar17 = NEON_scvtf(CONCAT44((int)param_1[1],
                                           *(int *)((long)param_1 +
                                                   *(long *)(&UNK_10dfd4b50 +
                                                            (ulong)*(uint *)(param_1 + 0x24) * 8))),
                                  4);
              fVar15 = (float)uVar17;
              fVar18 = (float)((ulong)uVar17 >> 0x20);
              uStack_d0 = CONCAT44((float)((ulong)*(undefined8 *)pfStack_108 >> 0x20) * fVar18,
                                   (float)*(undefined8 *)pfStack_108 * fVar15);
              uStack_c8 = CONCAT44((float)((ulong)*(undefined8 *)(pfStack_108 + 2) >> 0x20) * fVar18
                                   ,(float)*(undefined8 *)(pfStack_108 + 2) * fVar15);
              uStack_c0 = CONCAT44((float)((ulong)*(undefined8 *)(pfStack_108 + 4) >> 0x20) * fVar18
                                   ,(float)*(undefined8 *)(pfStack_108 + 4) * fVar15);
              uStack_b8 = CONCAT44((float)((ulong)*(undefined8 *)(pfStack_108 + 6) >> 0x20) * fVar18
                                   ,(float)*(undefined8 *)(pfStack_108 + 6) * fVar15);
              lStack_118 = 0;
              uStack_110 = 0;
              lStack_120 = 0;
              FUN_1094c5b14(&lStack_120,&uStack_d0,&uStack_b0,4);
              fVar16 = *(float *)(param_4 + 0x10);
              uVar17 = NEON_fmov(0xbf800000,4);
              fVar20 = ((float)*(undefined8 *)(param_4 + 0x14) - fVar16) + (float)uVar17;
              fVar21 = ((float)((ulong)*(undefined8 *)(param_4 + 0x14) >> 0x20) - fVar16) +
                       (float)((ulong)uVar17 >> 0x20);
              uStack_c0 = CONCAT44(fVar21,fVar20);
              uStack_d0 = CONCAT44(fVar16,fVar16);
              uStack_c8 = CONCAT44(fVar16,fVar20);
              uStack_b8 = CONCAT44(fVar21,fVar16);
              lStack_130 = 0;
              uStack_128 = 0;
              lStack_138 = 0;
              FUN_1094c5b14(&lStack_138,&uStack_d0,&uStack_b0,4);
              uStack_e0 = 0;
              afStack_f0[0] = -2.4060936e-38;
              uStack_e8 = &lStack_120;
              uStack_140 = 0;
              auStack_150[0] = 0x8103000d;
              plStack_148 = &lStack_138;
              FUN_109b1fb0c(&uStack_d0,afStack_f0,auStack_150);
              if ((int)param_1[0x24] == 0) {
                uStack_140 = 0;
                auStack_150[0] = 0x1010000;
                plStack_148 = param_1;
                if (*(int *)(param_2 + 0x120) == 0) {
                  auStack_168[0] = 0x2010000;
                  uStack_158 = 0;
                  auStack_180[0] = 0x1010000;
                  puStack_178 = &uStack_d0;
                  uStack_170 = 0;
                  uStack_188 = CONCAT44((int)(float)((ulong)*(undefined8 *)(param_4 + 0x14) >> 0x20)
                                        ,(int)(float)*(undefined8 *)(param_4 + 0x14));
                  uStack_e8 = (long *)0x0;
                  afStack_f0[0] = 0.0;
                  afStack_f0[1] = 0.0;
                  uStack_d8 = 0;
                  uStack_e0 = 0;
                  puVar12 = auStack_168;
                  lStack_160 = param_2;
                  FUN_109b1eb58(auStack_150,puVar12,auStack_180,&uStack_188,
                                *(undefined4 *)(param_4 + 0x1c),0,afStack_f0);
                  iVar11 = (int)puVar12;
                  lVar19 = param_1[0x26];
                  lVar13 = param_1[0x25];
                  *(long *)(param_2 + 0x138) = param_1[0x27];
                  *(long *)(param_2 + 0x130) = lVar19;
                  *(long *)(param_2 + 0x128) = lVar13;
                  afStack_f0[0] = *pfStack_108;
                  afStack_f0[1] = pfStack_108[2];
                  uStack_e8 = (long *)CONCAT44(pfStack_108[6],pfStack_108[4]);
                  lVar13 = 4;
                  pfVar10 = afStack_f0;
                  fVar22 = afStack_f0[0];
                  do {
                    fVar24 = *(float *)((long)afStack_f0 + lVar13);
                    pfVar1 = (float *)((long)afStack_f0 + lVar13);
                    if (fVar24 <= fVar22) {
                      pfVar1 = pfVar10;
                      fVar24 = fVar22;
                    }
                    fVar22 = fVar24;
                    lVar13 = lVar13 + 4;
                    pfVar10 = pfVar1;
                  } while (lVar13 != 0x10);
                  lVar13 = 4;
                  uStack_e8 = (long *)CONCAT44(pfStack_108[6],pfStack_108[4]);
                  pfVar10 = afStack_f0;
                  do {
                    fVar22 = *(float *)((long)afStack_f0 + lVar13);
                    pfVar2 = (float *)((long)afStack_f0 + lVar13);
                    if (afStack_f0[0] <= fVar22) {
                      pfVar2 = pfVar10;
                      fVar22 = afStack_f0[0];
                    }
                    afStack_f0[0] = fVar22;
                    lVar13 = lVar13 + 4;
                    pfVar10 = pfVar2;
                  } while (lVar13 != 0x10);
                  fVar24 = pfStack_108[1];
                  afStack_f0[1] = pfStack_108[3];
                  afStack_f0[0] = fVar24;
                  uStack_e8 = (long *)CONCAT44(pfStack_108[7],pfStack_108[5]);
                  lVar13 = 4;
                  pfVar10 = afStack_f0;
                  fVar22 = fVar24;
                  do {
                    fVar25 = *(float *)((long)afStack_f0 + lVar13);
                    pfVar3 = (float *)((long)afStack_f0 + lVar13);
                    if (fVar25 <= fVar22) {
                      pfVar3 = pfVar10;
                      fVar25 = fVar22;
                    }
                    fVar22 = fVar25;
                    lVar13 = lVar13 + 4;
                    pfVar10 = pfVar3;
                  } while (lVar13 != 0x10);
                  lVar13 = 4;
                  uStack_e8 = (long *)CONCAT44(pfStack_108[7],pfStack_108[5]);
                  pfVar10 = afStack_f0;
                  do {
                    fVar22 = *(float *)((long)afStack_f0 + lVar13);
                    pfVar4 = (float *)((long)afStack_f0 + lVar13);
                    if (fVar24 <= fVar22) {
                      pfVar4 = pfVar10;
                      fVar22 = fVar24;
                    }
                    fVar24 = fVar22;
                    lVar13 = lVar13 + 4;
                    pfVar10 = pfVar4;
                  } while (lVar13 != 0x10);
                  uVar17 = NEON_fmov(0x3f800000,4);
                  fVar22 = (float)((ulong)uVar17 >> 0x20);
                  uVar23 = *(undefined8 *)(param_2 + 300);
                  *(undefined8 *)(param_2 + 300) =
                       CONCAT44((((fVar21 - fVar16) + fVar22) * (float)((ulong)uVar23 >> 0x20)) /
                                ((float)(int)((*pfVar3 - *pfVar4) * fVar18) + fVar22),
                                (((fVar20 - fVar16) + (float)uVar17) * (float)uVar23) /
                                ((float)(int)((*pfVar1 - *pfVar2) * fVar15) + (float)uVar17));
                  if (lStack_98 != 0) {
                    piVar14 = (int *)(lStack_98 + 0x14);
                    do {
                      iVar5 = *piVar14;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar8) {
                        *piVar14 = iVar5 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar5 + -1 == 0) {
                      func_0x000109a848d4(&uStack_d0);
                    }
                  }
                  lStack_98 = 0;
                  uStack_b8 = 0;
                  uStack_c0 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  if (0 < uStack_d0._4_4_) {
                    lVar13 = 0;
                    do {
                      *(undefined4 *)(lStack_90 + lVar13 * 4) = 0;
                      lVar13 = lVar13 + 1;
                    } while (lVar13 < uStack_d0._4_4_);
                  }
                  if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
                    _free(*(undefined8 *)(puStack_88 + -8));
                  }
                  if (lStack_138 != 0) {
                    lStack_130 = lStack_138;
                    __ZdlPv();
                  }
                  if (lStack_120 != 0) {
                    lStack_118 = lStack_120;
                    __ZdlPv();
                  }
                  pfVar10 = pfStack_108;
                  if (pfStack_108 != (float *)0x0) {
                    pfStack_100 = pfStack_108;
                    __ZdlPv();
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
                    ___stack_chk_fail();
                    if (iVar11 != 0) {
                      func_0x000104bd46a0(pfVar10);
                      func_0x00010567aa40(&uStack_d0);
                      if (lStack_138 != 0) {
                        lStack_130 = lStack_138;
                        __ZdlPv();
                      }
                      if (lStack_120 != 0) {
                        lStack_118 = lStack_120;
                        __ZdlPv();
                      }
                      if (pfStack_108 != (float *)0x0) {
                        pfStack_100 = pfStack_108;
                        __ZdlPv();
                      }
                    }
                    __Unwind_Resume(pfVar10);
                    return;
                  }
                  return;
                }
                FUN_1092612e0();
              }
              else {
                FUN_1092612e0();
              }
              goto LAB_10957bbf4;
            }
            uVar17 = 0x239;
          }
          FUN_109389068(&UNK_10f57394e,uVar17);
        }
        else {
          func_0x000105688514(&UNK_10f574011);
        }
        goto LAB_10957bbf4;
      }
      uVar17 = 0x235;
    }
  }
  else {
    func_0x000105688514(&UNK_10f5740e5);
LAB_10957bb98:
    uVar17 = 0x233;
  }
  FUN_109389068(&UNK_10f57394e,uVar17);
LAB_10957bbf4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10957bbf8);
  (*pcVar9)();
}



/* Entry: 10957bc84; end: 10957bc9f;  */

void FUN_10957bc84(void)

{
  return;
}



/* Entry: 10957bca0; end: 10957c48f;  */

void FUN_10957bca0(ulong *param_1,undefined8 ****param_2,ulong *param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined4 uStack_430;
  int iStack_42c;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long lStack_3f8;
  ulong uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  ulong uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_2b0;
  undefined8 **ppuStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 **ppuStack_298;
  undefined4 auStack_290 [2];
  undefined4 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  uint uStack_260;
  int iStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  long lStack_228;
  ulong uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  uint uStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  ulong *puStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)param_1[0x24];
  if (uVar2 == 2) {
    uStack_200 = 0x42ff0000;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    iStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_428 = &uStack_200;
    uStack_1c0 = (ulong)uStack_428 | 8;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1d4 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_260 = 0x42ff0000;
    uStack_220 = (ulong)&uStack_260 | 8;
    uStack_254 = 0;
    uStack_250 = 0;
    iStack_25c = 0;
    uStack_258 = 0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_234 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puStack_198 = param_1 + 0xc;
    uStack_190 = 0;
    puStack_1a0._0_4_ = 0x1010000;
    uStack_430 = 0x2010000;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_278 = NEON_rev64(*(undefined8 *)param_1[8],4);
    puStack_218 = &uStack_210;
    puStack_1b8 = &uStack_1b0;
    FUN_109b0f718(0,0,&puStack_1a0,&uStack_430,&uStack_278,1);
    puStack_198 = param_1 + 0x18;
    uStack_190 = 0;
    puStack_1a0 = (undefined8 *)CONCAT44(puStack_1a0._4_4_,0x1010000);
    uStack_430 = 0x2010000;
    uStack_428 = &uStack_260;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_278 = NEON_rev64(*(undefined8 *)param_1[8],4);
    FUN_109b0f718(0,0,&puStack_1a0,&uStack_430,&uStack_278,1);
    uStack_430 = 0x42ff0000;
    uVar9 = (ulong)&uStack_430 | 8;
    uStack_428._4_4_ = 0;
    uStack_420 = 0;
    iStack_42c = 0;
    uStack_428._0_4_ = 0;
    uStack_414 = 0;
    uStack_410 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_404 = 0;
    uStack_40c = 0;
    uStack_408 = 0;
    lStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3fc = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_160 = (ulong)&puStack_1a0 | 8;
    puStack_198 = (ulong *)param_1[1];
    puStack_1a0 = (undefined8 *)*param_1;
    uStack_188 = param_1[3];
    uStack_190 = param_1[2];
    iVar3 = *(int *)((long)param_1 + 4);
    uStack_178 = param_1[5];
    uStack_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    puStack_158 = &uStack_150;
    uStack_148 = 0;
    uStack_150 = 0;
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      iVar3 = *(int *)((long)param_1 + 4);
    }
    uStack_3f0 = uVar9;
    puStack_3e8 = &uStack_3e0;
    if (iVar3 < 3) {
      uStack_150 = *(undefined8 *)param_1[9];
      uStack_148 = ((undefined8 *)param_1[9])[1];
    }
    else {
      puStack_1a0 = (undefined8 *)((ulong)puStack_1a0 & 0xffffffff);
      func_0x000109a84868(&puStack_1a0,param_1);
    }
    uStack_138 = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_140 = CONCAT44(iStack_1fc,uStack_200);
    uStack_128 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_130 = CONCAT44(uStack_1ec,uStack_1f0);
    puStack_100 = &uStack_138;
    uStack_118 = CONCAT44(uStack_1d4,uStack_1d8);
    uStack_120 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_110 = CONCAT44(uStack_1cc,uStack_1d0);
    lStack_108 = lStack_1c8;
    puStack_f8 = &uStack_f0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (lStack_1c8 != 0) {
      piVar1 = (int *)(lStack_1c8 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iStack_1fc < 3) {
      uStack_f0 = *puStack_1b8;
      uStack_e8 = puStack_1b8[1];
    }
    else {
      uStack_140 = (ulong)uStack_200;
      func_0x000109a84868(&uStack_140,&uStack_200);
    }
    uStack_d8 = CONCAT44(uStack_254,uStack_258);
    uStack_e0 = CONCAT44(iStack_25c,uStack_260);
    uStack_c8 = CONCAT44(uStack_244,uStack_248);
    uStack_d0 = CONCAT44(uStack_24c,uStack_250);
    puStack_a0 = &uStack_d8;
    uStack_b8 = CONCAT44(uStack_234,uStack_238);
    uStack_c0 = CONCAT44(uStack_23c,uStack_240);
    uStack_b0 = CONCAT44(uStack_22c,uStack_230);
    lStack_a8 = lStack_228;
    puStack_98 = &uStack_90;
    uStack_88 = 0;
    uStack_90 = 0;
    if (lStack_228 != 0) {
      piVar1 = (int *)(lStack_228 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iStack_25c < 3) {
      uStack_90 = *puStack_218;
      uStack_88 = puStack_218[1];
    }
    else {
      uStack_e0 = (ulong)uStack_260;
      func_0x000109a84868(&uStack_e0,&uStack_260);
    }
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    FUN_10957c490(&uStack_278,&puStack_1a0,&puStack_80,3);
    puVar15 = (undefined8 *)((ulong)&uStack_430 | 4);
    ppuVar14 = &puStack_80;
    do {
      ppuVar13 = ppuVar14 + -0xc;
      if (ppuVar14[-5] != (undefined8 *)0x0) {
        piVar1 = (int *)((long)ppuVar14[-5] + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(ppuVar13);
        }
      }
      ppuVar14[-5] = (undefined8 *)0x0;
      ppuVar14[-9] = (undefined8 *)0x0;
      ppuVar14[-10] = (undefined8 *)0x0;
      ppuVar14[-7] = (undefined8 *)0x0;
      ppuVar14[-8] = (undefined8 *)0x0;
      if (0 < *(int *)((long)ppuVar14 + -0x5c)) {
        lVar10 = 0;
        puVar12 = ppuVar14[-4];
        do {
          *(undefined4 *)((long)puVar12 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((long)ppuVar14 + -0x5c));
      }
      ppuVar11 = (undefined8 **)ppuVar14[-3];
      if (ppuVar11 != ppuVar14 + -2 && ppuVar11 != (undefined8 **)0x0) {
        _free(ppuVar11[-1]);
      }
      ppuVar14 = ppuVar13;
    } while (ppuVar13 != &puStack_1a0);
    uStack_190 = 0;
    puStack_1a0._0_4_ = 0x1050000;
    puStack_198 = &uStack_278;
    auStack_290[0] = 0x2010000;
    uStack_280 = 0;
    puStack_288 = &uStack_430;
    FUN_109a3ecac(&puStack_1a0,auStack_290);
    uStack_190 = 0;
    puStack_1a0._0_4_ = 0x1010000;
    auStack_290[0] = 0x2010000;
    uStack_280 = 0;
    puStack_288 = &uStack_430;
    puStack_198 = (ulong *)&uStack_430;
    FUN_109ac9fc8(&puStack_1a0,auStack_290,0x55,0);
    uStack_190 = 0;
    puStack_1a0 = (undefined8 *)CONCAT44(puStack_1a0._4_4_,0x1010000);
    puStack_288 = &uStack_430;
    auStack_290[0] = 0x2010000;
    uStack_280 = 0;
    param_3 = (ulong *)0x0;
    param_4 = 0;
    puStack_198 = (ulong *)puStack_288;
    FUN_109ac9fc8(&puStack_1a0,auStack_290,0);
    puStack_1a0 = &uStack_278;
    FUN_1093702c4(&puStack_1a0);
    if (lStack_228 != 0) {
      piVar1 = (int *)(lStack_228 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_260);
      }
    }
    lStack_228 = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    if (0 < iStack_25c) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_220 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_25c);
    }
    if (puStack_218 != &uStack_210 && puStack_218 != (undefined8 *)0x0) {
      _free(puStack_218[-1]);
    }
    if (lStack_1c8 != 0) {
      piVar1 = (int *)(lStack_1c8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_200);
      }
    }
    lStack_1c8 = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    if (0 < iStack_1fc) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_1c0 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_1fc);
    }
    if (puStack_1b8 != &uStack_1b0 && puStack_1b8 != (undefined8 *)0x0) {
      _free(puStack_1b8[-1]);
    }
    uStack_3c8 = CONCAT44(uStack_428._4_4_,(undefined4)uStack_428);
    pppuStack_3d0 = (undefined8 ***)CONCAT44(iStack_42c,uStack_430);
    uStack_3b8 = CONCAT44(uStack_414,uStack_418);
    uStack_3c0 = CONCAT44(uStack_41c,uStack_420);
    uStack_390 = (ulong)&pppuStack_3d0 | 8;
    uStack_3a8 = CONCAT44(uStack_404,uStack_408);
    uStack_3b0 = CONCAT44(uStack_40c,uStack_410);
    uStack_3a0 = CONCAT44(uStack_3fc,uStack_400);
    lStack_398 = lStack_3f8;
    puStack_388 = &uStack_380;
    uStack_380 = 0;
    uStack_378 = 0;
    if (iStack_42c < 3) {
      uStack_380 = *puStack_3e8;
      uStack_378 = puStack_3e8[1];
    }
    else {
      uStack_390 = uStack_3f0;
      puStack_388 = puStack_3e8;
      uStack_3f0 = uVar9;
      puStack_3e8 = &uStack_3e0;
    }
    uStack_430 = 0x42ff0000;
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    *(undefined8 *)((long)puVar15 + 0x34) = 0;
    *(undefined8 *)((long)puVar15 + 0x2c) = 0;
    uStack_2b0 = 0;
    ppuStack_2a0 = (undefined8 **)param_1[0x26];
    ppuStack_2a8 = (undefined8 **)param_1[0x25];
    ppuStack_298 = (undefined8 **)param_1[0x27];
    ppppuVar8 = &pppuStack_3d0;
    FUN_1095798c8(param_2);
    param_2[0x26] = (undefined8 ***)ppuStack_2a0;
    param_2[0x25] = (undefined8 ***)ppuStack_2a8;
    param_2[0x27] = (undefined8 ***)ppuStack_298;
    FUN_10951f294(&pppuStack_3d0);
    if (lStack_3f8 != 0) {
      piVar1 = (int *)(lStack_3f8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_430);
      }
    }
    lStack_3f8 = 0;
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_408 = 0;
    uStack_404 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    if (0 < iStack_42c) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_3f0 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_42c);
    }
    if (puStack_3e8 != &uStack_3e0 && puStack_3e8 != (undefined8 *)0x0) {
      _free(puStack_3e8[-1]);
    }
  }
  else {
    ppppuVar8 = param_2;
    if (uVar2 == 1) goto LAB_10957c3b8;
    if ((*(uint *)(param_2 + 0x24) & uVar2) != 0xffffffff) {
      if (uVar2 == 0xffffffff) {
        FUN_10951f294(param_2);
      }
      else {
        param_3 = param_1;
        pppuStack_3d0 = param_2;
        (*(code *)(&PTR_FUN_110afc538)[uVar2])(&pppuStack_3d0,param_2,param_1);
      }
    }
    pppuVar17 = (undefined8 ***)param_1[0x26];
    pppuVar16 = (undefined8 ***)param_1[0x25];
    param_2[0x27] = (undefined8 ***)param_1[0x27];
    param_2[0x26] = pppuVar17;
    param_2[0x25] = pppuVar16;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10957c3b8:
  puVar6 = &UNK_10f5740fc;
  func_0x000105688514();
  if ((int)ppppuVar8 == 0) {
    __Unwind_Resume(puVar6);
  }
  func_0x000104bd46a0();
  if (param_4 != 0) {
    FUN_109370224();
    puVar7 = puVar6;
    FUN_109519e94(puVar6,ppppuVar8,param_3,*(undefined8 *)(puVar6 + 8));
    *(undefined **)(puVar6 + 8) = puVar7;
  }
  return;
}



/* Entry: 10957c490; end: 10957c513;  */

void FUN_10957c490(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109370224(param_1,param_4);
    lVar1 = param_1;
    FUN_109519e94(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10957c514; end: 10957c657;  */

void FUN_10957c514(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x120) != 0) {
    FUN_10951f294(lVar8);
    FUN_10951f564(lVar8,param_3);
    *(undefined4 *)(lVar8 + 0x120) = 0;
    return;
  }
  if (param_2 == param_3) {
    return;
  }
  if (*(long *)(param_3 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  if ((int)param_2[1] < 1) {
    *param_2 = *param_3;
LAB_10957c5f0:
    if ((int)param_3[1] < 3) {
      param_2[1] = param_3[1];
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      puVar5 = *(undefined8 **)(param_3 + 0x12);
      puVar7 = *(undefined8 **)(param_2 + 0x12);
      *puVar7 = *puVar5;
      puVar7[1] = puVar5[1];
      goto LAB_10957c630;
    }
  }
  else {
    lVar8 = 0;
    lVar6 = *(long *)(param_2 + 0x10);
    do {
      *(undefined4 *)(lVar6 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[1]);
    *param_2 = *param_3;
    if ((int)param_2[1] < 3) goto LAB_10957c5f0;
  }
  func_0x000109a84868(param_2,param_3);
LAB_10957c630:
  uVar9 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_2 + 0xc) = uVar9;
  return;
}



/* Entry: 10957c658; end: 10957c6db;  */

void FUN_10957c658(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x120) == 1) {
    uVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar2;
    param_2[2] = param_3[2];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
    uVar3 = *(undefined8 *)((long)param_3 + 0x24);
    uVar2 = *(undefined8 *)((long)param_3 + 0x1c);
    uVar5 = *(undefined8 *)((long)param_3 + 0x34);
    uVar4 = *(undefined8 *)((long)param_3 + 0x2c);
    uVar7 = *(undefined8 *)((long)param_3 + 0x44);
    uVar6 = *(undefined8 *)((long)param_3 + 0x3c);
    uVar8 = *(undefined8 *)((long)param_3 + 0x4c);
    *(undefined8 *)((long)param_2 + 0x54) = *(undefined8 *)((long)param_3 + 0x54);
    *(undefined8 *)((long)param_2 + 0x4c) = uVar8;
    *(undefined8 *)((long)param_2 + 0x44) = uVar7;
    *(undefined8 *)((long)param_2 + 0x3c) = uVar6;
    *(undefined8 *)((long)param_2 + 0x34) = uVar5;
    *(undefined8 *)((long)param_2 + 0x2c) = uVar4;
    *(undefined8 *)((long)param_2 + 0x24) = uVar3;
    *(undefined8 *)((long)param_2 + 0x1c) = uVar2;
  }
  else {
    FUN_10951f294(lVar1);
    func_0x000105687b98(lVar1,param_3);
    *(undefined4 *)(lVar1 + 0x120) = 1;
  }
  return;
}



/* Entry: 10957c6dc; end: 10957c9ff;  */

void FUN_10957c6dc(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x120) != 2) {
    FUN_10951f294(lVar8);
    func_0x000105688a04(lVar8,param_3);
    *(undefined4 *)(lVar8 + 0x120) = 2;
    return;
  }
  if (param_2 == param_3) {
    return;
  }
  if (*(long *)(param_3 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  if ((int)param_2[1] < 1) {
    *param_2 = *param_3;
LAB_10957c7c0:
    if (2 < (int)param_3[1]) goto LAB_10957c7f4;
    param_2[1] = param_3[1];
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    puVar5 = *(undefined8 **)(param_3 + 0x12);
    puVar7 = *(undefined8 **)(param_2 + 0x12);
    *puVar7 = *puVar5;
    puVar7[1] = puVar5[1];
  }
  else {
    lVar8 = 0;
    lVar6 = *(long *)(param_2 + 0x10);
    do {
      *(undefined4 *)(lVar6 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[1]);
    *param_2 = *param_3;
    if ((int)param_2[1] < 3) goto LAB_10957c7c0;
LAB_10957c7f4:
    func_0x000109a84868(param_2,param_3);
  }
  uVar9 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_2 + 0xc) = uVar9;
  if (*(long *)(param_3 + 0x26) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0x26) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_2 + 0x26) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x26) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2 + 0x18);
    }
  }
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if ((int)param_2[0x19] < 1) {
    param_2[0x18] = param_3[0x18];
LAB_10957c8ac:
    if (2 < (int)param_3[0x19]) goto LAB_10957c8e0;
    param_2[0x19] = param_3[0x19];
    *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
    puVar5 = *(undefined8 **)(param_3 + 0x2a);
    puVar7 = *(undefined8 **)(param_2 + 0x2a);
    *puVar7 = *puVar5;
    puVar7[1] = puVar5[1];
  }
  else {
    lVar8 = 0;
    lVar6 = *(long *)(param_2 + 0x28);
    do {
      *(undefined4 *)(lVar6 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[0x19]);
    param_2[0x18] = param_3[0x18];
    if ((int)param_2[0x19] < 3) goto LAB_10957c8ac;
LAB_10957c8e0:
    func_0x000109a84868(param_2 + 0x18,param_3 + 0x18);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x1c);
  *(undefined8 *)(param_2 + 0x1e) = *(undefined8 *)(param_3 + 0x1e);
  *(undefined8 *)(param_2 + 0x1c) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x22) = *(undefined8 *)(param_3 + 0x22);
  *(undefined8 *)(param_2 + 0x20) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0x24);
  *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_3 + 0x26);
  *(undefined8 *)(param_2 + 0x24) = uVar9;
  if (*(long *)(param_3 + 0x3e) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0x3e) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_2 + 0x3e) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x3e) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2 + 0x30);
    }
  }
  *(undefined8 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)(param_2 + 0x36) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x3a) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if ((int)param_2[0x31] < 1) {
    param_2[0x30] = param_3[0x30];
LAB_10957c998:
    if ((int)param_3[0x31] < 3) {
      param_2[0x31] = param_3[0x31];
      *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(param_3 + 0x32);
      puVar5 = *(undefined8 **)(param_3 + 0x42);
      puVar7 = *(undefined8 **)(param_2 + 0x42);
      *puVar7 = *puVar5;
      puVar7[1] = puVar5[1];
      goto LAB_10957c9d8;
    }
  }
  else {
    lVar8 = 0;
    lVar6 = *(long *)(param_2 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[0x31]);
    param_2[0x30] = param_3[0x30];
    if ((int)param_2[0x31] < 3) goto LAB_10957c998;
  }
  func_0x000109a84868(param_2 + 0x30,param_3 + 0x30);
LAB_10957c9d8:
  uVar9 = *(undefined8 *)(param_3 + 0x34);
  *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(param_3 + 0x36);
  *(undefined8 *)(param_2 + 0x34) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_2 + 0x3a) = *(undefined8 *)(param_3 + 0x3a);
  *(undefined8 *)(param_2 + 0x38) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0x3c);
  *(undefined8 *)(param_2 + 0x3e) = *(undefined8 *)(param_3 + 0x3e);
  *(undefined8 *)(param_2 + 0x3c) = uVar9;
  return;
}



/* Entry: 10957ca00; end: 10957ca13;  */

void FUN_10957ca00(void)

{
  return;
}



/* Entry: 10957ca14; end: 10957ce8b;  */

void FUN_10957ca14(long param_1,ulong *param_2,int *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *extraout_x8;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  int *piStack_490;
  long *plStack_488;
  undefined1 **ppuStack_480;
  code *pcStack_478;
  undefined4 uStack_470;
  int iStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_430;
  undefined8 *puStack_428;
  undefined8 auStack_420 [2];
  undefined4 uStack_410;
  int iStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined4 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  undefined4 uStack_3b0;
  int iStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined4 *puStack_370;
  undefined8 *puStack_368;
  undefined8 auStack_360 [2];
  undefined4 uStack_350;
  undefined8 uStack_34c;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long lStack_318;
  long lStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  int *piStack_2c0;
  int *piStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  int iStack_290;
  int iStack_28c;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x120) == 0) {
    FUN_10957ce8c(&plStack_1c8);
    FUN_1095798c8(param_2,&plStack_1c8);
    param_2[0x27] = uStack_90;
    param_2[0x26] = uStack_98;
    param_2[0x25] = uStack_a0;
    FUN_10951f294(&plStack_1c8);
    if ((int)param_2[0x24] == 0) {
      uStack_228 = param_2[1];
      uStack_230 = *param_2;
      uStack_218 = param_2[3];
      uStack_220 = param_2[2];
      puStack_1f0 = (undefined8 *)((ulong)&uStack_230 | 8);
      iVar8 = *(int *)((long)param_2 + 4);
      uStack_208 = param_2[5];
      uStack_210 = param_2[4];
      uStack_1f8 = param_2[7];
      uStack_200 = param_2[6];
      lStack_1e0 = 0;
      lStack_1d8 = 0;
      if (param_2[7] != 0) {
        piVar4 = (int *)(param_2[7] + 0x14);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        iVar8 = *(int *)((long)param_2 + 4);
      }
      plStack_1e8 = &lStack_1e0;
      if (iVar8 < 3) {
        lStack_1e0 = *(long *)param_2[9];
        lStack_1d8 = ((long *)param_2[9])[1];
      }
      else {
        uStack_230 = uStack_230 & 0xffffffff;
        func_0x000109a84868(&uStack_230,param_2);
      }
      if (((uint)uStack_230 & 0xff0) == 0x10) {
        if (((uint)uStack_230 & 0x18) == 0x10) {
          plStack_1c8 = (long *)CONCAT44(plStack_1c8._4_4_,0x1010000);
          puStack_1c0 = &uStack_230;
          uStack_1b8 = 0;
          iStack_290 = 0x2010000;
          uStack_280 = 0;
          uStack_27c = 0;
          uStack_288 = puStack_1c0;
          FUN_109ac9fc8(&plStack_1c8,&iStack_290,0,0);
        }
        uStack_298 = NEON_rev64(*puStack_1f0,4);
        FUN_109a829e8(&plStack_1c8,&uStack_298,0);
        iStack_290 = 0x42ff0000;
        puStack_250 = &uStack_288;
        uStack_288._4_4_ = 0;
        uStack_280 = 0;
        iStack_28c = 0;
        uStack_288._0_4_ = 0;
        lStack_258 = 0;
        uStack_25c = 0;
        uStack_264 = 0;
        uStack_260 = 0;
        uStack_26c = 0;
        uStack_268 = 0;
        uStack_274 = 0;
        uStack_270 = 0;
        uStack_27c = 0;
        uStack_278 = 0;
        uStack_240 = 0;
        uStack_238 = 0;
        puStack_248 = &uStack_240;
        (**(code **)(*plStack_1c8 + 0x18))(plStack_1c8,&plStack_1c8,&iStack_290,0xffffffff);
        FUN_10918eb6c(&plStack_1c8);
        plStack_1c8 = (long *)0x300000000;
        piVar4 = &iStack_290;
        iVar8 = 1;
        FUN_109a3e710(piVar4,1,&uStack_230,1,&plStack_1c8,1);
        if ((*(uint *)(param_1 + 0x13c) & 1) == 0) {
LAB_10957ccb8:
          if (lStack_258 != 0) {
            piVar5 = (int *)(lStack_258 + 0x14);
            do {
              iVar14 = *piVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar2) {
                *piVar5 = iVar14 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar14 + -1 == 0) {
              piVar4 = &iStack_290;
              func_0x000109a848d4();
            }
          }
          lStack_258 = 0;
          uStack_278 = 0;
          uStack_274 = 0;
          uStack_280 = 0;
          uStack_27c = 0;
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_270 = 0;
          uStack_26c = 0;
          if (0 < iStack_28c) {
            lVar11 = 0;
            do {
              *(undefined4 *)((long)puStack_250 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_28c);
          }
          if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
            piVar4 = (int *)puStack_248[-1];
            _free();
          }
          if (uStack_1f8 != 0) {
            piVar5 = (int *)(uStack_1f8 + 0x14);
            do {
              iVar14 = *piVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar2) {
                *piVar5 = iVar14 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar14 + -1 == 0) {
              piVar4 = (int *)&uStack_230;
              func_0x000109a848d4();
            }
          }
          uStack_1f8 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          if (0 < uStack_230._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)((long)puStack_1f0 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_230._4_4_);
          }
          if (plStack_1e8 != &lStack_1e0 && plStack_1e8 != (long *)0x0) {
            piVar4 = (int *)plStack_1e8[-1];
            _free();
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return;
          }
          ___stack_chk_fail();
          if (iVar8 != 0) {
            func_0x000104bd46a0();
            func_0x00010567aa40(&iStack_290);
            func_0x00010567aa40(&uStack_230);
          }
          piVar5 = piVar4;
          __Unwind_Resume();
          puStack_2d0 = &uStack_240;
          lStack_2c8 = param_1;
          piStack_2c0 = param_3;
          piStack_2b8 = piVar4;
          puStack_2b0 = &stack0xfffffffffffffff0;
          pcStack_2a8 = FUN_10957ce8c;
          iVar8 = piVar5[0x48];
          if (iVar8 == 2) {
            FUN_10957d2e4(&uStack_470,piVar5);
            puStack_2e8 = *(undefined4 **)(piVar5 + 0x4c);
            uStack_2f0 = *(undefined8 *)(piVar5 + 0x4a);
            uStack_2e0 = *(undefined8 *)(piVar5 + 0x4e);
            puVar10 = (undefined8 *)((ulong)&uStack_470 | 4);
            extraout_x8[1] = uStack_468;
            *extraout_x8 = CONCAT44(iStack_46c,uStack_470);
            extraout_x8[3] = uStack_458;
            extraout_x8[2] = uStack_460;
            extraout_x8[10] = 0;
            extraout_x8[5] = uStack_448;
            extraout_x8[4] = uStack_450;
            extraout_x8[7] = uStack_438;
            extraout_x8[6] = uStack_440;
            extraout_x8[8] = extraout_x8 + 1;
            extraout_x8[9] = extraout_x8 + 10;
            extraout_x8[0xb] = 0;
            if (iStack_46c < 3) {
              extraout_x8[10] = *puStack_428;
              extraout_x8[0xb] = puStack_428[1];
            }
            else {
              extraout_x8[8] = uStack_430;
              extraout_x8[9] = puStack_428;
              puStack_428 = auStack_420;
              uStack_430 = (ulong)&uStack_470 | 8;
            }
            uStack_470 = 0x42ff0000;
            puVar10[1] = 0;
            *puVar10 = 0;
            puVar10[3] = 0;
            puVar10[2] = 0;
            puVar10[5] = 0;
            puVar10[4] = 0;
            *(undefined8 *)((long)puVar10 + 0x34) = 0;
            *(undefined8 *)((long)puVar10 + 0x2c) = 0;
            extraout_x8[0x16] = 0;
            extraout_x8[0xd] = CONCAT44(uStack_404,uStack_408);
            extraout_x8[0xc] = CONCAT44(iStack_40c,uStack_410);
            extraout_x8[0xf] = CONCAT44(uStack_3f4,uStack_3f8);
            extraout_x8[0xe] = CONCAT44(uStack_3fc,uStack_400);
            extraout_x8[0x11] = CONCAT44(uStack_3e4,uStack_3e8);
            extraout_x8[0x10] = CONCAT44(uStack_3ec,uStack_3f0);
            extraout_x8[0x13] = uStack_3d8;
            extraout_x8[0x12] = CONCAT44(uStack_3dc,uStack_3e0);
            extraout_x8[0x14] = extraout_x8 + 0xd;
            extraout_x8[0x15] = extraout_x8 + 0x16;
            extraout_x8[0x17] = 0;
            if (iStack_40c < 3) {
              extraout_x8[0x16] = *puStack_3c8;
              extraout_x8[0x17] = puStack_3c8[1];
            }
            else {
              extraout_x8[0x14] = puStack_3d0;
              extraout_x8[0x15] = puStack_3c8;
              puStack_3c8 = auStack_3c0;
              puStack_3d0 = &uStack_408;
            }
            uStack_410 = 0x42ff0000;
            uStack_404 = 0;
            uStack_400 = 0;
            iStack_40c = 0;
            uStack_408 = 0;
            uStack_3f4 = 0;
            uStack_3f0 = 0;
            uStack_3fc = 0;
            uStack_3f8 = 0;
            uStack_3e4 = 0;
            uStack_3ec = 0;
            uStack_3e8 = 0;
            uStack_3d8 = 0;
            uStack_3e0 = 0;
            uStack_3dc = 0;
            extraout_x8[0x19] = CONCAT44(uStack_3a4,uStack_3a8);
            extraout_x8[0x18] = CONCAT44(iStack_3ac,uStack_3b0);
            extraout_x8[0x1b] = CONCAT44(uStack_394,uStack_398);
            extraout_x8[0x1a] = CONCAT44(uStack_39c,uStack_3a0);
            extraout_x8[0x1d] = CONCAT44(uStack_384,uStack_388);
            extraout_x8[0x1c] = CONCAT44(uStack_38c,uStack_390);
            extraout_x8[0x1f] = uStack_378;
            extraout_x8[0x1e] = CONCAT44(uStack_37c,uStack_380);
            extraout_x8[0x20] = extraout_x8 + 0x19;
            extraout_x8[0x21] = extraout_x8 + 0x22;
            extraout_x8[0x22] = 0;
            extraout_x8[0x23] = 0;
            if (iStack_3ac < 3) {
              extraout_x8[0x22] = *puStack_368;
              extraout_x8[0x23] = puStack_368[1];
            }
            else {
              extraout_x8[0x20] = puStack_370;
              extraout_x8[0x21] = puStack_368;
              puStack_368 = auStack_360;
              puStack_370 = &uStack_3a8;
            }
            uStack_3b0 = 0x42ff0000;
            uStack_3a4 = 0;
            uStack_3a0 = 0;
            iStack_3ac = 0;
            uStack_3a8 = 0;
            uStack_394 = 0;
            uStack_390 = 0;
            uStack_39c = 0;
            uStack_398 = 0;
            uStack_384 = 0;
            uStack_38c = 0;
            uStack_388 = 0;
            uStack_378 = 0;
            uStack_380 = 0;
            uStack_37c = 0;
            *(undefined4 *)(extraout_x8 + 0x24) = 2;
            extraout_x8[0x27] = uStack_2e0;
            extraout_x8[0x26] = puStack_2e8;
            extraout_x8[0x25] = uStack_2f0;
            func_0x0001056879ec(&uStack_470);
          }
          else if (iVar8 == 1) {
            iVar8 = piVar5[6];
            iVar14 = piVar5[7];
            uVar9 = *(undefined8 *)(piVar5 + 8);
            extraout_x8[5] = *(undefined8 *)(piVar5 + 10);
            extraout_x8[4] = uVar9;
            iVar12 = piVar5[0xc];
            uVar9 = *(undefined8 *)(piVar5 + 0xd);
            *(undefined8 *)((long)extraout_x8 + 0x3c) = *(undefined8 *)(piVar5 + 0xf);
            *(undefined8 *)((long)extraout_x8 + 0x34) = uVar9;
            iVar13 = piVar5[0x11];
            uVar9 = *(undefined8 *)(piVar5 + 0x12);
            extraout_x8[10] = *(undefined8 *)(piVar5 + 0x14);
            extraout_x8[9] = uVar9;
            iVar16 = piVar5[0x16];
            extraout_x8[0x27] = *(undefined8 *)(piVar5 + 0x4e);
            uVar9 = *(undefined8 *)(piVar5 + 0x4a);
            extraout_x8[0x26] = *(undefined8 *)(piVar5 + 0x4c);
            extraout_x8[0x25] = uVar9;
            uVar9 = *(undefined8 *)piVar5;
            extraout_x8[1] = *(undefined8 *)(piVar5 + 2);
            *extraout_x8 = uVar9;
            extraout_x8[2] = *(undefined8 *)(piVar5 + 4);
            *(int *)(extraout_x8 + 3) = iVar8;
            *(int *)((long)extraout_x8 + 0x1c) = iVar14;
            *(int *)(extraout_x8 + 6) = iVar12;
            *(int *)((long)extraout_x8 + 0x44) = iVar13;
            *(int *)(extraout_x8 + 0xb) = iVar16;
            *(undefined4 *)(extraout_x8 + 0x24) = 1;
          }
          else {
            if (iVar8 != 0) {
              plVar6 = (long *)&UNK_10f574011;
              func_0x000105688514();
              func_0x000104bd46a0();
              func_0x00010567aa40(&uStack_350);
              plVar7 = plVar6;
              __Unwind_Resume();
              pcStack_478 = FUN_10957d220;
              puVar10 = (undefined8 *)*plVar7;
              piStack_490 = piVar5;
              plStack_488 = plVar6;
              ppuStack_480 = &puStack_2b0;
              if ((puVar10 != (undefined8 *)0x0) && ((code *)*puVar10 != (code *)0x0)) {
                lVar11 = 3;
                (*(code *)*puVar10)(3,puVar10,0,&PTR_DAT_110afc568,&UNK_10dfd3788);
                if (lVar11 != 0) {
                  return;
                }
              }
              func_0x000107c31940(auStack_4c0,&UNK_10f2e5846);
              lVar11 = *plVar7;
              FUN_10951f6fc();
              FUN_109259240(auStack_4a8,auStack_4c0,*(ulong *)(lVar11 + 8) & 0x7fffffffffffffff);
              func_0x000105687ee0(auStack_4a8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10957d2ac);
              (*pcVar3)();
            }
            uStack_350 = 0x42ff0000;
            uStack_344 = 0;
            uStack_340 = 0;
            uStack_34c = 0;
            puStack_2e8 = &uStack_350;
            lStack_310 = (long)&uStack_34c + 4;
            uStack_334 = 0;
            uStack_330 = 0;
            uStack_33c = 0;
            uStack_338 = 0;
            uStack_324 = 0;
            uStack_32c = 0;
            uStack_328 = 0;
            lStack_318 = 0;
            uStack_320 = 0;
            uStack_31c = 0;
            uStack_300 = 0;
            uStack_2f8 = 0;
            uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x2010000);
            uStack_2e0 = 0;
            puStack_308 = &uStack_300;
            FUN_109a479a0(piVar5,&uStack_2f0);
            puStack_2e8 = (undefined4 *)*(undefined8 *)(piVar5 + 0x4c);
            uStack_2f0 = *(undefined8 *)(piVar5 + 0x4a);
            uStack_2e0 = *(undefined8 *)(piVar5 + 0x4e);
            func_0x00010951f3ac(extraout_x8,&uStack_350);
            *(undefined4 *)(extraout_x8 + 0x24) = 0;
            extraout_x8[0x27] = uStack_2e0;
            extraout_x8[0x26] = puStack_2e8;
            extraout_x8[0x25] = uStack_2f0;
            if (lStack_318 != 0) {
              piVar4 = (int *)(lStack_318 + 0x14);
              do {
                iVar8 = *piVar4;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar2) {
                  *piVar4 = iVar8 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar8 + -1 == 0) {
                func_0x000109a848d4(&uStack_350);
              }
            }
            lStack_318 = 0;
            uStack_338 = 0;
            uStack_334 = 0;
            uStack_340 = 0;
            uStack_33c = 0;
            uStack_328 = 0;
            uStack_324 = 0;
            uStack_330 = 0;
            uStack_32c = 0;
            if (0 < (int)uStack_34c) {
              lVar11 = 0;
              do {
                *(undefined4 *)(lStack_310 + lVar11 * 4) = 0;
                lVar11 = lVar11 + 1;
              } while (lVar11 < (int)uStack_34c);
            }
            if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
              _free(puStack_308[-1]);
            }
          }
          return;
        }
        fVar17 = *(float *)(param_1 + 0x134);
        uVar9 = 0x20d;
        if ((0.0 <= fVar17) && (fVar17 <= 1.0)) {
          fVar18 = *(float *)(param_1 + 0x138);
          uVar9 = 0x20e;
          iVar8 = 0x20e;
          if ((0.0 <= fVar18) && (fVar18 <= 1.0)) {
            piVar4 = param_3;
            FUN_10957d220();
            fVar15 = 1.0;
            if (fVar17 <= 1.0) {
              fVar15 = fVar17;
            }
            if (fVar15 <= 0.0) {
              fVar15 = 0.0;
            }
            iVar12 = (int)(fVar15 * (float)*piVar4);
            iVar14 = *piVar4 + -1;
            if (iVar12 <= iVar14) {
              iVar14 = iVar12;
            }
            fVar17 = 1.0;
            if (fVar18 <= 1.0) {
              fVar17 = fVar18;
            }
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
            iVar13 = (int)(fVar17 * (float)piVar4[1]);
            iVar12 = piVar4[1] + -1;
            if (iVar13 <= iVar12) {
              iVar12 = iVar13;
            }
            *(undefined1 *)(uStack_220 + *plStack_1e8 * (long)iVar12 + (long)iVar14 * 4 + 3) =
                 *(undefined1 *)(param_4 + 0x10);
            goto LAB_10957ccb8;
          }
        }
        FUN_109389068(&UNK_10f57394e,uVar9);
      }
      else {
        FUN_109389068(&UNK_10f57394e,0x1ff);
      }
      goto LAB_10957ce0c;
    }
  }
  else {
    func_0x000105688514(&UNK_10f574132);
  }
  FUN_1092612e0();
LAB_10957ce0c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10957ce10);
  (*pcVar3)();
}



/* Entry: 10957ce8c; end: 10957d21f;  */

void FUN_10957ce8c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 auStack_180 [2];
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 *puStack_130;
  undefined8 *puStack_128;
  undefined8 auStack_120 [2];
  undefined4 uStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 2) {
    FUN_10957d2e4(&uStack_1d0,param_2);
    puStack_48 = (undefined4 *)param_2[0x26];
    uStack_50 = param_2[0x25];
    uStack_40 = param_2[0x27];
    puVar9 = (undefined8 *)((ulong)&uStack_1d0 | 4);
    param_1[1] = uStack_1c8;
    *param_1 = CONCAT44(iStack_1cc,uStack_1d0);
    param_1[3] = uStack_1b8;
    param_1[2] = uStack_1c0;
    param_1[10] = 0;
    param_1[5] = uStack_1a8;
    param_1[4] = uStack_1b0;
    param_1[7] = uStack_198;
    param_1[6] = uStack_1a0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (iStack_1cc < 3) {
      param_1[10] = *puStack_188;
      param_1[0xb] = puStack_188[1];
    }
    else {
      param_1[8] = uStack_190;
      param_1[9] = puStack_188;
      puStack_188 = auStack_180;
      uStack_190 = (ulong)&uStack_1d0 | 8;
    }
    uStack_1d0 = 0x42ff0000;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    *(undefined8 *)((long)puVar9 + 0x34) = 0;
    *(undefined8 *)((long)puVar9 + 0x2c) = 0;
    param_1[0x16] = 0;
    param_1[0xd] = CONCAT44(uStack_164,uStack_168);
    param_1[0xc] = CONCAT44(iStack_16c,uStack_170);
    param_1[0xf] = CONCAT44(uStack_154,uStack_158);
    param_1[0xe] = CONCAT44(uStack_15c,uStack_160);
    param_1[0x11] = CONCAT44(uStack_144,uStack_148);
    param_1[0x10] = CONCAT44(uStack_14c,uStack_150);
    param_1[0x13] = uStack_138;
    param_1[0x12] = CONCAT44(uStack_13c,uStack_140);
    param_1[0x14] = param_1 + 0xd;
    param_1[0x15] = param_1 + 0x16;
    param_1[0x17] = 0;
    if (iStack_16c < 3) {
      param_1[0x16] = *puStack_128;
      param_1[0x17] = puStack_128[1];
    }
    else {
      param_1[0x14] = puStack_130;
      param_1[0x15] = puStack_128;
      puStack_128 = auStack_120;
      puStack_130 = &uStack_168;
    }
    uStack_170 = 0x42ff0000;
    uStack_164 = 0;
    uStack_160 = 0;
    iStack_16c = 0;
    uStack_168 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_144 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    param_1[0x19] = CONCAT44(uStack_104,uStack_108);
    param_1[0x18] = CONCAT44(iStack_10c,uStack_110);
    param_1[0x1b] = CONCAT44(uStack_f4,uStack_f8);
    param_1[0x1a] = CONCAT44(uStack_fc,uStack_100);
    param_1[0x1d] = CONCAT44(uStack_e4,uStack_e8);
    param_1[0x1c] = CONCAT44(uStack_ec,uStack_f0);
    param_1[0x1f] = uStack_d8;
    param_1[0x1e] = CONCAT44(uStack_dc,uStack_e0);
    param_1[0x20] = param_1 + 0x19;
    param_1[0x21] = param_1 + 0x22;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    if (iStack_10c < 3) {
      param_1[0x22] = *puStack_c8;
      param_1[0x23] = puStack_c8[1];
    }
    else {
      param_1[0x20] = puStack_d0;
      param_1[0x21] = puStack_c8;
      puStack_c8 = auStack_c0;
      puStack_d0 = &uStack_108;
    }
    uStack_110 = 0x42ff0000;
    uStack_104 = 0;
    uStack_100 = 0;
    iStack_10c = 0;
    uStack_108 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    *(undefined4 *)(param_1 + 0x24) = 2;
    param_1[0x27] = uStack_40;
    param_1[0x26] = puStack_48;
    param_1[0x25] = uStack_50;
    func_0x0001056879ec(&uStack_1d0);
  }
  else if (iVar2 == 1) {
    uVar3 = *(undefined4 *)(param_2 + 3);
    uVar11 = *(undefined4 *)((long)param_2 + 0x1c);
    uVar13 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar13;
    uVar12 = *(undefined4 *)(param_2 + 6);
    uVar13 = *(undefined8 *)((long)param_2 + 0x34);
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
    *(undefined8 *)((long)param_1 + 0x34) = uVar13;
    uVar14 = *(undefined4 *)((long)param_2 + 0x44);
    uVar13 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar13;
    uVar15 = *(undefined4 *)(param_2 + 0xb);
    param_1[0x27] = param_2[0x27];
    uVar13 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar13;
    uVar13 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar13;
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 6) = uVar12;
    *(undefined4 *)((long)param_1 + 0x44) = uVar14;
    *(undefined4 *)(param_1 + 0xb) = uVar15;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else {
    if (iVar2 != 0) {
      plVar7 = (long *)&UNK_10f574011;
      func_0x000105688514();
      func_0x000104bd46a0();
      func_0x00010567aa40(&uStack_b0);
      plVar8 = plVar7;
      __Unwind_Resume();
      pcStack_1d8 = FUN_10957d220;
      puVar9 = (undefined8 *)*plVar8;
      puStack_1f0 = param_2;
      plStack_1e8 = plVar7;
      puStack_1e0 = &stack0xfffffffffffffff0;
      if ((puVar9 != (undefined8 *)0x0) && ((code *)*puVar9 != (code *)0x0)) {
        lVar10 = 3;
        (*(code *)*puVar9)(3,puVar9,0,&PTR_DAT_110afc568,&UNK_10dfd3788);
        if (lVar10 != 0) {
          return;
        }
      }
      func_0x000107c31940(auStack_220,&UNK_10f2e5846);
      lVar10 = *plVar8;
      FUN_10951f6fc();
      FUN_109259240(auStack_208,auStack_220,*(ulong *)(lVar10 + 8) & 0x7fffffffffffffff);
      func_0x000105687ee0(auStack_208);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10957d2ac);
      (*pcVar6)();
    }
    uStack_b0 = 0x42ff0000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_ac = 0;
    puStack_48 = &uStack_b0;
    lStack_70 = (long)&uStack_ac + 4;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0x2010000);
    uStack_40 = 0;
    puStack_68 = &uStack_60;
    FUN_109a479a0(param_2,&uStack_50);
    puStack_48 = (undefined4 *)param_2[0x26];
    uStack_50 = param_2[0x25];
    uStack_40 = param_2[0x27];
    func_0x00010951f3ac(param_1,&uStack_b0);
    *(undefined4 *)(param_1 + 0x24) = 0;
    param_1[0x27] = uStack_40;
    param_1[0x26] = puStack_48;
    param_1[0x25] = uStack_50;
    if (lStack_78 != 0) {
      piVar1 = (int *)(lStack_78 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_b0);
      }
    }
    lStack_78 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    if (0 < (int)uStack_ac) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_70 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uStack_ac);
    }
    if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
      _free(puStack_68[-1]);
    }
  }
  return;
}



/* Entry: 10957d220; end: 10957d2e3;  */

void FUN_10957d220(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  puVar3 = (undefined8 *)*param_1;
  if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
    lVar2 = 3;
    (*(code *)*puVar3)(3,puVar3,0,&PTR_DAT_110afc568,&UNK_10dfd3788);
    if (lVar2 != 0) {
      return;
    }
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10957d2ac);
  (*pcVar1)();
}



/* Entry: 10957d2e4; end: 10957d5af;  */

void FUN_10957d2e4(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uStack_188;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long lStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  uStack_c8 = 0x42ff0000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  puStack_60 = &uStack_c8;
  lStack_88 = (long)&uStack_c4 + 4;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auStack_68[0] = 0x2010000;
  uStack_58 = 0;
  puStack_80 = &uStack_78;
  FUN_109a479a0(param_2,auStack_68);
  uStack_128 = 0x42ff0000;
  lStack_e8 = (long)&uStack_124 + 4;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_124 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_fc = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  lStack_f0 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  auStack_68[0] = 0x2010000;
  uStack_58 = 0;
  puStack_e0 = &uStack_d8;
  puStack_60 = &uStack_128;
  FUN_109a479a0(param_2 + 0x60,auStack_68);
  uStack_188 = 0x42ff0000;
  puStack_60 = &uStack_188;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_184 = 0;
  lStack_148 = (long)&uStack_184 + 4;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_15c = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  lStack_150 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  auStack_68[0] = 0x2010000;
  uStack_58 = 0;
  puStack_140 = &uStack_138;
  FUN_109a479a0(param_2 + 0xc0,auStack_68);
  FUN_10957d5b0(param_1,&uStack_c8,&uStack_128,&uStack_188);
  if (lStack_150 != 0) {
    piVar1 = (int *)(lStack_150 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_188);
    }
  }
  lStack_150 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  if (0 < (int)uStack_184) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_148 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_184);
  }
  if (puStack_140 != &uStack_138 && puStack_140 != (undefined8 *)0x0) {
    _free(puStack_140[-1]);
  }
  if (lStack_f0 != 0) {
    piVar1 = (int *)(lStack_f0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_128);
    }
  }
  lStack_f0 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  if (0 < (int)uStack_124) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_e8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_124);
  }
  if (puStack_e0 != &uStack_d8 && puStack_e0 != (undefined8 *)0x0) {
    _free(puStack_e0[-1]);
  }
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (0 < (int)uStack_c4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_c4);
  }
  if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
    _free(puStack_80[-1]);
  }
  return;
}



/* Entry: 10957d5b0; end: 10957dc8f;  */

undefined8 *
FUN_10957d5b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  uVar11 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar11;
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  lVar7 = param_2[7];
  uVar11 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar7 != 0) {
    piVar10 = (int *)(lVar7 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar8 = (undefined8 *)param_2[9];
    puVar9 = (undefined8 *)param_1[9];
    *puVar9 = *puVar8;
    puVar9[1] = puVar8[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  uVar12 = param_3[1];
  uVar11 = *param_3;
  uVar13 = param_3[2];
  param_1[0xf] = param_3[3];
  param_1[0xe] = uVar13;
  uVar13 = param_3[4];
  param_1[0x11] = param_3[5];
  param_1[0x10] = uVar13;
  lVar7 = param_3[7];
  uVar14 = param_3[7];
  uVar13 = param_3[6];
  param_1[0x16] = 0;
  piVar10 = (int *)(param_1 + 0xd);
  param_1[0x13] = uVar14;
  param_1[0x12] = uVar13;
  param_1[0x14] = piVar10;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0xd] = uVar12;
  param_1[0xc] = uVar11;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_3 + 4) < 3) {
    puVar8 = (undefined8 *)param_3[9];
    puVar9 = (undefined8 *)param_1[0x15];
    *puVar9 = *puVar8;
    puVar9[1] = puVar8[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868(param_1 + 0xc,param_3);
  }
  uVar11 = *param_4;
  param_1[0x19] = param_4[1];
  param_1[0x18] = uVar11;
  piVar1 = (int *)(param_1 + 0x19);
  uVar11 = param_4[2];
  param_1[0x1b] = param_4[3];
  param_1[0x1a] = uVar11;
  uVar11 = param_4[4];
  param_1[0x1d] = param_4[5];
  param_1[0x1c] = uVar11;
  lVar7 = param_4[7];
  uVar11 = param_4[6];
  param_1[0x1f] = param_4[7];
  param_1[0x1e] = uVar11;
  param_1[0x20] = piVar1;
  param_1[0x21] = param_1 + 0x22;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_4 + 4) < 3) {
    puVar8 = (undefined8 *)param_4[9];
    puVar9 = (undefined8 *)param_1[0x21];
    *puVar9 = *puVar8;
    puVar9[1] = puVar8[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
    func_0x000109a84868(param_1 + 0x18,param_4);
  }
  if (*(int *)((long)param_1 + 0x6c) == *(int *)((long)param_1 + 0xcc)) {
    if (*piVar10 == *piVar1) {
      if (*(int *)((long)param_1 + 0x6c) == *(int *)((long)param_1 + 0xc) / 2) {
        if (*(int *)(param_3 + 1) == *(int *)(param_1 + 1) / 2) {
          return param_1;
        }
        __ZNSt3__19to_stringEi(auStack_c8);
        FUN_10928a5e0(auStack_b0,&UNK_10f5741df,auStack_c8);
        FUN_109259240(auStack_98,auStack_b0,&UNK_10f5741eb);
        __ZNSt3__19to_stringEi(&puStack_e0,*piVar10 << 1);
        ppuVar5 = (undefined1 **)puStack_e0;
        if (-1 < (char)bStack_c9) {
          uStack_d8 = (ulong)bStack_c9;
          ppuVar5 = &puStack_e0;
        }
        puVar8 = auStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar8,ppuVar5,uStack_d8);
        uStack_78 = puVar8[1];
        uStack_80 = *puVar8;
        lStack_70 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        FUN_109259240(auStack_68,&uStack_80,&DAT_10f684600);
        if (lStack_70 < 0) {
          __ZdlPv(uStack_80);
        }
        if ((char)bStack_c9 < '\0') {
          __ZdlPv(puStack_e0);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(auStack_98[0]);
        }
        if (cStack_99 < '\0') {
          __ZdlPv(auStack_b0[0]);
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(auStack_c8[0]);
        }
        func_0x000105687ee0(auStack_68);
      }
      else {
        __ZNSt3__19to_stringEi(auStack_c8,*(int *)((long)param_1 + 0xc));
        FUN_10928a5e0(auStack_b0,&UNK_10f5741b0,auStack_c8);
        FUN_109259240(auStack_98,auStack_b0,&UNK_10f5741bc);
        __ZNSt3__19to_stringEi(&puStack_e0,*(int *)((long)param_1 + 0x6c) << 1);
        ppuVar5 = (undefined1 **)puStack_e0;
        if (-1 < (char)bStack_c9) {
          uStack_d8 = (ulong)bStack_c9;
          ppuVar5 = &puStack_e0;
        }
        puVar8 = auStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar8,ppuVar5,uStack_d8);
        uStack_78 = puVar8[1];
        uStack_80 = *puVar8;
        lStack_70 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        FUN_109259240(auStack_68,&uStack_80,&DAT_10f684600);
        if (lStack_70 < 0) {
          __ZdlPv(uStack_80);
        }
        if ((char)bStack_c9 < '\0') {
          __ZdlPv(puStack_e0);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(auStack_98[0]);
        }
        if (cStack_99 < '\0') {
          __ZdlPv(auStack_b0[0]);
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(auStack_c8[0]);
        }
        func_0x000105687ee0(auStack_68);
      }
    }
    else {
      __ZNSt3__19to_stringEi(auStack_c8,*piVar10);
      FUN_10928a5e0(auStack_b0,&UNK_10f574186,auStack_c8);
      FUN_109259240(auStack_98,auStack_b0,&UNK_10f574192);
      __ZNSt3__19to_stringEi(&puStack_e0,*piVar1);
      ppuVar5 = (undefined1 **)puStack_e0;
      if (-1 < (char)bStack_c9) {
        uStack_d8 = (ulong)bStack_c9;
        ppuVar5 = &puStack_e0;
      }
      puVar8 = auStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,ppuVar5,uStack_d8);
      uStack_78 = puVar8[1];
      uStack_80 = *puVar8;
      lStack_70 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_109259240(auStack_68,&uStack_80,&DAT_10f684600);
      if (lStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      if ((char)bStack_c9 < '\0') {
        __ZdlPv(puStack_e0);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      if (cStack_99 < '\0') {
        __ZdlPv(auStack_b0[0]);
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(auStack_c8[0]);
      }
      func_0x000105687ee0(auStack_68);
    }
  }
  else {
    __ZNSt3__19to_stringEi(auStack_c8);
    FUN_10928a5e0(auStack_b0,&UNK_10f57415c,auStack_c8);
    FUN_109259240(auStack_98,auStack_b0,&UNK_10f574168);
    __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)((long)param_1 + 0xcc));
    ppuVar5 = (undefined1 **)puStack_e0;
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      ppuVar5 = &puStack_e0;
    }
    puVar8 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,ppuVar5,uStack_d8);
    uStack_78 = puVar8[1];
    uStack_80 = *puVar8;
    lStack_70 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_109259240(auStack_68,&uStack_80,&DAT_10f684600);
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    if ((char)bStack_c9 < '\0') {
      __ZdlPv(puStack_e0);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
    if (cStack_99 < '\0') {
      __ZdlPv(auStack_b0[0]);
    }
    if (cStack_b1 < '\0') {
      __ZdlPv(auStack_c8[0]);
    }
    func_0x000105687ee0(auStack_68);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10957db7c);
  (*pcVar6)();
}



/* Entry: 10957dc90; end: 10957dcab;  */

void FUN_10957dc90(void)

{
  return;
}



/* Entry: 10957dcac; end: 10957ea3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10957dcac(uint *param_1,long param_2,long *param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  code *pcVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 in_register_00005008;
  undefined1 auVar14 [16];
  long lVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  undefined8 uStack_680;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  long lStack_618;
  undefined8 *puStack_610;
  uint *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined4 uStack_5f0;
  undefined8 uStack_5ec;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  undefined4 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined8 uStack_58c;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 uStack_558;
  undefined4 *puStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  ulong uStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  ulong uStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  ulong uStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  uint uStack_410;
  int iStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  uint *puStack_3c8;
  uint auStack_3c0 [4];
  undefined4 uStack_3b0;
  undefined8 uStack_3ac;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined4 *puStack_370;
  undefined8 *puStack_368;
  undefined8 auStack_360 [2];
  undefined4 uStack_350;
  undefined8 uStack_34c;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined4 *puStack_310;
  undefined8 *puStack_308;
  undefined8 auStack_300 [2];
  uint uStack_2f0;
  int iStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  uint uStack_290;
  int iStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 *puStack_248;
  undefined8 auStack_240 [2];
  uint uStack_230;
  int iStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  uint *puStack_1e8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  uint *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_118;
  undefined4 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_3 == 0) {
    uVar2 = param_1[0x48];
    if (uVar2 != 0 && uVar2 != 2) {
      if (uVar2 == 1) {
        uVar12 = *(undefined8 *)(param_1 + 1);
        uStack_680 = CONCAT44(((int)((ulong)uVar12 >> 0x20) -
                              (int)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20)) / 2,
                              ((int)uVar12 - (int)*(undefined8 *)(param_4 + 0x10)) / 2);
        uStack_1a4 = param_1[3];
LAB_10957dd50:
        uStack_1b0 = *param_1;
        uStack_198 = *(undefined8 *)(param_1 + 6);
        uStack_188 = *(undefined8 *)(param_1 + 10);
        uStack_190 = *(undefined8 *)(param_1 + 8);
        uStack_180 = param_1[0xc];
        uStack_174 = (undefined4)*(undefined8 *)(param_1 + 0xf);
        uStack_170._0_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 0xf) >> 0x20);
        uStack_17c = (undefined4)*(undefined8 *)(param_1 + 0xd);
        uStack_178 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20);
        uStack_170._4_4_ = param_1[0x11];
        uStack_160 = *(undefined8 *)(param_1 + 0x14);
        puStack_168 = *(uint **)(param_1 + 0x12);
        uStack_80 = *(undefined8 *)(param_1 + 0x4c);
        uStack_88 = *(undefined8 *)(param_1 + 0x4a);
        uStack_78 = *(undefined8 *)(param_1 + 0x4e);
        iStack_1ac = (int)uVar12;
        uStack_1a8 = (undefined4)((ulong)uVar12 >> 0x20);
        uStack_1a0 = *(undefined8 *)(param_1 + 4);
        uStack_158 = CONCAT44(uStack_158._4_4_,param_1[0x16]);
        uStack_90 = 1;
        FUN_1095798c8(param_2,&uStack_1b0);
        *(undefined8 *)(param_2 + 0x130) = uStack_80;
        *(undefined8 *)(param_2 + 0x128) = uStack_88;
        *(undefined8 *)(param_2 + 0x138) = uStack_78;
        FUN_10951f294(&uStack_1b0);
        if (*(int *)(param_2 + 0x120) == 1) {
          *(undefined8 *)(param_2 + 0xc) = uStack_680;
          *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 0x10);
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_4 + 0x14);
          return;
        }
        goto LAB_10957e958;
      }
      goto LAB_10957e95c;
    }
    auVar16._0_8_ = NEON_rev64(*(undefined8 *)(param_1 + 2),4);
    auVar16._8_8_ = in_register_00005008;
    uStack_648 = *(undefined8 *)(param_4 + 0x10);
    iVar18 = (int)auVar16._0_8_ - (int)uStack_648;
    iVar19 = (int)((ulong)auVar16._0_8_ >> 0x20) - (int)((ulong)uStack_648 >> 0x20);
    uStack_680 = CONCAT44(iVar19 / 2,iVar18 / 2);
    if (uVar2 == 0) {
      uStack_650 = uStack_680;
      FUN_109a852c8(&uStack_410,param_1,&uStack_650);
      puVar10 = (undefined8 *)((ulong)&uStack_410 | 4);
      uStack_170._0_4_ = (uint)&uStack_1b0 | 8;
      uStack_1a8 = uStack_408;
      uStack_1a4 = uStack_404;
      uStack_1b0 = uStack_410;
      iStack_1ac = iStack_40c;
      uStack_198 = uStack_3f8;
      uStack_1a0 = uStack_400;
      uStack_188 = uStack_3e8;
      uStack_190 = uStack_3f0;
      uStack_178 = (undefined4)lStack_3d8;
      uStack_174 = (undefined4)((ulong)lStack_3d8 >> 0x20);
      uStack_180 = (uint)uStack_3e0;
      uStack_17c = (undefined4)((ulong)uStack_3e0 >> 0x20);
      puStack_168 = (uint *)&uStack_160;
      uStack_170._4_4_ = (uint)((ulong)&uStack_1b0 >> 0x20);
      uStack_158 = 0;
      uStack_160 = 0;
      if (iStack_40c < 3) {
        uStack_160 = *(undefined8 *)puStack_3c8;
        uStack_158 = *(undefined8 *)(puStack_3c8 + 2);
      }
      else {
        puStack_168 = puStack_3c8;
        uStack_170._0_4_ = (uint)puStack_3d0;
        uStack_170._4_4_ = (uint)((ulong)puStack_3d0 >> 0x20);
        puStack_3c8 = auStack_3c0;
        puStack_3d0 = (undefined8 *)((ulong)&uStack_410 | 8);
      }
      uStack_410 = 0x42ff0000;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      uStack_90 = 0;
      uStack_88 = *(undefined8 *)(param_1 + 0x4a);
      uStack_80 = *(undefined8 *)(param_1 + 0x4c);
      uStack_78 = *(undefined8 *)(param_1 + 0x4e);
      FUN_1095798c8(param_2,&uStack_1b0);
      *(undefined8 *)(param_2 + 0x130) = uStack_80;
      *(undefined8 *)(param_2 + 0x128) = uStack_88;
      *(undefined8 *)(param_2 + 0x138) = uStack_78;
      FUN_10951f294(&uStack_1b0);
      if (lStack_3d8 != 0) {
        piVar1 = (int *)(lStack_3d8 + 0x14);
        do {
          iVar18 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar18 + -1 == 0) {
          func_0x000109a848d4(&uStack_410);
        }
      }
      lStack_3d8 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      if (0 < iStack_40c) {
        lVar13 = 0;
        do {
          *(undefined4 *)((long)puStack_3d0 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iStack_40c);
      }
      puVar8 = &uStack_410;
      puStack_1e8 = puStack_3c8;
LAB_10957e910:
      if (puStack_1e8 != puVar8 + 0x14 && puStack_1e8 != (uint *)0x0) {
        _free(*(undefined8 *)(puStack_1e8 + -2));
      }
                    /* WARNING: Read-only address (ram,0x00010dfd2fb0) is written */
                    /* WARNING: Read-only address (ram,0x00010dfd2fc0) is written */
      return;
    }
    if (uVar2 == 1) {
      uStack_1a4 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
      auVar14._4_12_ = auVar16._4_12_;
      auVar14._0_4_ = param_1[1];
      uVar12 = auVar14._0_8_;
      goto LAB_10957dd50;
    }
    lVar13 = *(long *)(param_4 + 0x10);
    auVar15._0_4_ = -(uint)(iVar18 < 0);
    auVar15._4_4_ = -(uint)(iVar19 < 0);
    auVar15._8_4_ = -(uint)((int)lVar13 < 0);
    auVar15._12_4_ = -(uint)(lVar13 < 0);
    auVar16 = NEON_ushl(auVar15,_UNK_10dfd2fb0,4);
    auVar17._0_4_ = iVar18 + auVar16._0_4_;
    auVar17._4_4_ = iVar19 + auVar16._4_4_;
    auVar17._8_4_ = (int)lVar13 + auVar16._8_4_;
    auVar17._12_4_ = (int)((ulong)lVar13 >> 0x20) + auVar16._12_4_;
    auVar5._12_4_ = 0xffffffff;
    auVar5._0_12_ = _UNK_10dfd2fc0;
    auVar16 = NEON_sshl(auVar17,auVar5,4);
    uStack_1c8 = auVar16._8_8_;
    uStack_1d0 = auVar16._0_8_;
    uStack_1c0 = uStack_680;
    uStack_1b8 = uStack_648;
    FUN_109a852c8(&uStack_230,param_1,&uStack_1c0);
    if (param_1[0x48] == 2) {
      FUN_109a852c8(&uStack_290,param_1 + 0x18,&uStack_1d0);
      if (param_1[0x48] == 2) {
        FUN_109a852c8(&uStack_2f0,param_1 + 0x30,&uStack_1d0);
        uStack_470 = CONCAT44(iStack_22c,uStack_230);
        uStack_430 = (ulong)&uStack_470 | 8;
        uStack_468 = uStack_228;
        uStack_458 = uStack_218;
        uStack_460 = uStack_220;
        uStack_448 = uStack_208;
        uStack_450 = uStack_210;
        lStack_438 = lStack_1f8;
        uStack_440 = uStack_200;
        uStack_418 = 0;
        uStack_420 = 0;
        if (lStack_1f8 != 0) {
          piVar1 = (int *)(lStack_1f8 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puStack_428 = &uStack_420;
        if (iStack_22c < 3) {
          uStack_420 = *(undefined8 *)puStack_1e8;
          uStack_418 = *(undefined8 *)(puStack_1e8 + 2);
        }
        else {
          uStack_470 = (ulong)uStack_230;
          func_0x000109a84868(&uStack_470,&uStack_230);
        }
        uStack_4d0 = CONCAT44(iStack_28c,uStack_290);
        uStack_490 = (ulong)&uStack_4d0 | 8;
        uStack_4c8 = uStack_288;
        uStack_4b8 = uStack_278;
        uStack_4c0 = uStack_280;
        uStack_4a8 = uStack_268;
        uStack_4b0 = uStack_270;
        lStack_498 = lStack_258;
        uStack_4a0 = uStack_260;
        uStack_478 = 0;
        uStack_480 = 0;
        if (lStack_258 != 0) {
          piVar1 = (int *)(lStack_258 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puStack_488 = &uStack_480;
        if (iStack_28c < 3) {
          uStack_480 = *puStack_248;
          uStack_478 = puStack_248[1];
        }
        else {
          uStack_4d0 = (ulong)uStack_290;
          func_0x000109a84868(&uStack_4d0,&uStack_290);
        }
        uStack_530 = CONCAT44(iStack_2ec,uStack_2f0);
        uStack_4f0 = (ulong)&uStack_530 | 8;
        uStack_528 = uStack_2e8;
        uStack_518 = uStack_2d8;
        uStack_520 = uStack_2e0;
        uStack_508 = uStack_2c8;
        uStack_510 = uStack_2d0;
        lStack_4f8 = lStack_2b8;
        uStack_500 = uStack_2c0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        if (lStack_2b8 != 0) {
          piVar1 = (int *)(lStack_2b8 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puStack_4e8 = &uStack_4e0;
        if (iStack_2ec < 3) {
          uStack_4e0 = *puStack_2a8;
          uStack_4d8 = puStack_2a8[1];
        }
        else {
          uStack_530 = (ulong)uStack_2f0;
          func_0x000109a84868(&uStack_530,&uStack_2f0);
        }
        FUN_10957d5b0(&uStack_410,&uStack_470,&uStack_4d0,&uStack_530);
        if (lStack_4f8 != 0) {
          piVar1 = (int *)(lStack_4f8 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_530);
          }
        }
        lStack_4f8 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        if (0 < uStack_530._4_4_) {
          lVar13 = 0;
          do {
            *(undefined4 *)(uStack_4f0 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < uStack_530._4_4_);
        }
        if (puStack_4e8 != &uStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
          _free(puStack_4e8[-1]);
        }
        if (lStack_498 != 0) {
          piVar1 = (int *)(lStack_498 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_4d0);
          }
        }
        lStack_498 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        if (0 < uStack_4d0._4_4_) {
          lVar13 = 0;
          do {
            *(undefined4 *)(uStack_490 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < uStack_4d0._4_4_);
        }
        if (puStack_488 != &uStack_480 && puStack_488 != (undefined8 *)0x0) {
          _free(puStack_488[-1]);
        }
        if (lStack_438 != 0) {
          piVar1 = (int *)(lStack_438 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_470);
          }
        }
        lStack_438 = 0;
        uStack_458 = 0;
        uStack_460 = 0;
        uStack_448 = 0;
        uStack_450 = 0;
        if (0 < uStack_470._4_4_) {
          lVar13 = 0;
          do {
            *(undefined4 *)(uStack_430 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < uStack_470._4_4_);
        }
        if (puStack_428 != &uStack_420 && puStack_428 != (undefined8 *)0x0) {
          _free(puStack_428[-1]);
        }
        puVar11 = puStack_308;
        uStack_b8 = uStack_318;
        uStack_e4 = uStack_344;
        uStack_f0 = uStack_350;
        puVar10 = puStack_368;
        uStack_118 = uStack_378;
        uStack_144 = uStack_3a4;
        uStack_150 = uStack_3b0;
        puVar8 = puStack_3c8;
        uStack_1b0 = uStack_410;
        puVar9 = (undefined8 *)((ulong)&uStack_410 | 4);
        uStack_648 = CONCAT44(uStack_404,uStack_408);
        uStack_640 = uStack_400;
        uStack_638 = uStack_3f8;
        uStack_630 = uStack_3f0;
        uStack_628 = uStack_3e8;
        uStack_620 = uStack_3e0;
        lStack_618 = lStack_3d8;
        puStack_608 = (uint *)&uStack_600;
        uStack_600 = 0;
        uStack_5f8 = 0;
        if (iStack_40c < 3) {
          uStack_600 = *(undefined8 *)puStack_3c8;
          uStack_5f8 = *(undefined8 *)(puStack_3c8 + 2);
          puVar8 = puStack_608;
          puStack_610 = &uStack_648;
        }
        else {
          puStack_610 = puStack_3d0;
          puStack_3c8 = auStack_3c0;
          puStack_3d0 = (undefined8 *)&uStack_408;
        }
        uStack_410 = 0x42ff0000;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        *(undefined8 *)((long)puVar9 + 0x34) = 0;
        *(undefined8 *)((long)puVar9 + 0x2c) = 0;
        iStack_14c = (int)uStack_3ac;
        uStack_5f0 = uStack_3b0;
        uStack_148 = uStack_3ac._4_4_;
        uStack_5e4 = uStack_3a4;
        uStack_5b8 = uStack_378;
        puStack_5b0 = (undefined4 *)((long)&uStack_5ec + 4);
        puStack_5a8 = &uStack_5a0;
        uStack_5a0 = 0;
        uStack_598 = 0;
        if ((int)uStack_3ac < 3) {
          uStack_5a0 = *puStack_368;
          uStack_598 = puStack_368[1];
          puVar10 = &uStack_5a0;
        }
        else {
          puStack_5b0 = puStack_370;
          puStack_5a8 = puStack_368;
          puStack_368 = auStack_360;
          puStack_370 = (undefined4 *)((long)&uStack_3ac + 4);
        }
        uStack_3b0 = 0x42ff0000;
        uStack_3a4 = 0;
        uStack_3a0 = 0;
        uStack_3ac = 0;
        uStack_394 = 0;
        uStack_390 = 0;
        uStack_39c = 0;
        uStack_398 = 0;
        uStack_384 = 0;
        uStack_38c = 0;
        uStack_388 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_37c = 0;
        iStack_ec = (int)uStack_34c;
        uStack_590 = uStack_350;
        uStack_e8 = uStack_34c._4_4_;
        uStack_584 = uStack_344;
        uStack_558 = uStack_318;
        puStack_550 = (undefined4 *)((long)&uStack_58c + 4);
        puStack_548 = &uStack_540;
        uStack_540 = 0;
        uStack_538 = 0;
        if ((int)uStack_34c < 3) {
          uStack_540 = *puStack_308;
          uStack_538 = puStack_308[1];
          puVar11 = &uStack_540;
        }
        else {
          puStack_550 = puStack_310;
          puStack_548 = puStack_308;
          puStack_308 = auStack_300;
          puStack_310 = (undefined4 *)((long)&uStack_34c + 4);
        }
        uStack_350 = 0x42ff0000;
        puVar9 = (undefined8 *)((ulong)&uStack_650 | 4);
        uStack_344 = 0;
        uStack_340 = 0;
        uStack_34c = 0;
        uStack_334 = 0;
        uStack_330 = 0;
        uStack_33c = 0;
        uStack_338 = 0;
        uStack_324 = 0;
        uStack_32c = 0;
        uStack_328 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_31c = 0;
        uStack_88 = *(undefined8 *)(param_1 + 0x4a);
        uStack_80 = *(undefined8 *)(param_1 + 0x4c);
        uStack_78 = *(undefined8 *)(param_1 + 0x4e);
        iStack_1ac = iStack_40c;
        uStack_1a8 = uStack_408;
        uStack_1a4 = uStack_404;
        uStack_1a0 = uStack_400;
        uStack_198 = uStack_3f8;
        uStack_190 = uStack_3f0;
        uStack_188 = uStack_3e8;
        uStack_180 = (uint)uStack_3e0;
        uStack_17c = (undefined4)((ulong)uStack_3e0 >> 0x20);
        uStack_178 = (undefined4)lStack_3d8;
        uStack_174 = (undefined4)((ulong)lStack_3d8 >> 0x20);
        uStack_170._0_4_ = (uint)&uStack_1a8;
        uStack_170._4_4_ = (uint)((ulong)&uStack_1a8 >> 0x20);
        puStack_168 = (uint *)&uStack_160;
        uStack_158 = 0;
        uStack_160 = 0;
        if (iStack_40c < 3) {
          uStack_160 = *(undefined8 *)puVar8;
          uStack_158 = *(undefined8 *)(puVar8 + 2);
          puVar6 = puStack_610;
          puStack_608 = puVar8;
          uStack_170 = (undefined8 *)&uStack_1a8;
        }
        else {
          puStack_168 = puVar8;
          uStack_170._0_4_ = (uint)puStack_610;
          uStack_170._4_4_ = (uint)((ulong)puStack_610 >> 0x20);
          puVar6 = &uStack_648;
          uStack_170 = puStack_610;
        }
        puStack_610 = puVar6;
        uStack_650 = CONCAT44(iStack_40c,0x42ff0000);
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        *(undefined8 *)((long)puVar9 + 0x34) = 0;
        *(undefined8 *)((long)puVar9 + 0x2c) = 0;
        puStack_110 = &uStack_148;
        puStack_108 = &uStack_100;
        uStack_f8 = 0;
        uStack_100 = 0;
        if (iStack_14c < 3) {
          uStack_100 = *puVar10;
          uStack_f8 = puVar10[1];
          puStack_5a8 = puVar10;
        }
        else {
          puStack_108 = puVar10;
          puStack_110 = puStack_5b0;
          puStack_5a8 = &uStack_5a0;
          puStack_5b0 = (undefined4 *)((long)&uStack_5ec + 4);
        }
        uStack_5f0 = 0x42ff0000;
        uStack_5e4 = 0;
        uStack_5e0 = 0;
        uStack_5ec = 0;
        uStack_5d4 = 0;
        uStack_5d0 = 0;
        uStack_5dc = 0;
        uStack_5d8 = 0;
        uStack_5c4 = 0;
        uStack_5cc = 0;
        uStack_5c8 = 0;
        uStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5bc = 0;
        puStack_b0 = &uStack_e8;
        puStack_a8 = &uStack_a0;
        uStack_98 = 0;
        uStack_a0 = 0;
        if (iStack_ec < 3) {
          uStack_a0 = *puVar11;
          uStack_98 = puVar11[1];
          puStack_548 = puVar11;
        }
        else {
          puStack_b0 = puStack_550;
          puStack_550 = (undefined4 *)((long)&uStack_58c + 4);
          puStack_548 = &uStack_540;
          puStack_a8 = puVar11;
        }
        uStack_590 = 0x42ff0000;
        uStack_584 = 0;
        uStack_580 = 0;
        uStack_58c = 0;
        uStack_574 = 0;
        uStack_570 = 0;
        uStack_57c = 0;
        uStack_578 = 0;
        uStack_564 = 0;
        uStack_56c = 0;
        uStack_568 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_55c = 0;
        uStack_90 = 2;
        FUN_1095798c8(param_2,&uStack_1b0);
        *(undefined8 *)(param_2 + 0x130) = uStack_80;
        *(undefined8 *)(param_2 + 0x128) = uStack_88;
        *(undefined8 *)(param_2 + 0x138) = uStack_78;
        FUN_10951f294(&uStack_1b0);
        func_0x0001056879ec(&uStack_650);
        func_0x0001056879ec(&uStack_410);
        if (lStack_2b8 != 0) {
          piVar1 = (int *)(lStack_2b8 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_2f0);
          }
        }
        lStack_2b8 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        if (0 < iStack_2ec) {
          lVar13 = 0;
          do {
            *(undefined4 *)(lStack_2b0 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < iStack_2ec);
        }
        if (puStack_2a8 != auStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
          _free(puStack_2a8[-1]);
        }
        if (lStack_258 != 0) {
          piVar1 = (int *)(lStack_258 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_290);
          }
        }
        lStack_258 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        if (0 < iStack_28c) {
          lVar13 = 0;
          do {
            *(undefined4 *)(lStack_250 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < iStack_28c);
        }
        if (puStack_248 != auStack_240 && puStack_248 != (undefined8 *)0x0) {
          _free(puStack_248[-1]);
        }
        if (lStack_1f8 != 0) {
          piVar1 = (int *)(lStack_1f8 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_230);
          }
        }
        lStack_1f8 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        if (0 < iStack_22c) {
          lVar13 = 0;
          do {
            *(undefined4 *)(lStack_1f0 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < iStack_22c);
        }
        puVar8 = &uStack_230;
        goto LAB_10957e910;
      }
      FUN_1092612e0();
      goto LAB_10957e974;
    }
  }
  else {
    FUN_109389068(&UNK_10f57394e,0x17c);
LAB_10957e958:
    FUN_1092612e0();
LAB_10957e95c:
    func_0x000105688514(&UNK_10f574011);
  }
  FUN_1092612e0();
LAB_10957e974:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10957e978);
  (*pcVar7)();
}



/* Entry: 10957ea3c; end: 10957ea57;  */

void FUN_10957ea3c(void)

{
  return;
}



/* Entry: 10957ea58; end: 10957ea6b;  */

long * FUN_10957ea58(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  piVar6 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105682d44(auStack_78,param_2);
  puVar8 = (undefined8 *)(*(long *)(*(long *)(piVar6 + 2) + 0x78) + (long)*piVar6 * 0x18);
  piVar3 = (int *)puVar8[1];
  for (piVar2 = (int *)*puVar8; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(piVar6 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_78);
    }
  }
  if (plStack_50 == alStack_68) {
    lVar9 = 0x20;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_10957eb24;
    lVar9 = 0x28;
  }
  (**(code **)(*plStack_50 + lVar9))();
LAB_10957eb24:
  plVar7 = plStack_50;
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *plVar7 = (long)&PTR_FUN_110afc5b8;
  func_0x00010957f4f4(plVar7[10]);
  if ((char)plVar7[8] == '\x01') {
    func_0x000107c27bf0(plVar7 + 5,plVar7[6]);
  }
  if ((*(byte *)(plVar7 + 2) & 1) != 0) {
    func_0x0001053936ac();
  }
  return plVar7;
}



/* Entry: 10957ea6c; end: 10957eba7;  */

long * FUN_10957ea6c(int *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105682d44(auStack_68,param_2);
  puVar7 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar3 = (int *)puVar7[1];
  for (piVar2 = (int *)*puVar7; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_68);
    }
  }
  if (plStack_40 == alStack_58) {
    lVar8 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10957eb24;
    lVar8 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar8))();
LAB_10957eb24:
  plVar6 = plStack_40;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_60;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *plVar6 = (long)&PTR_FUN_110afc5b8;
  func_0x00010957f4f4(plVar6[10]);
  if ((char)plVar6[8] == '\x01') {
    func_0x000107c27bf0(plVar6 + 5,plVar6[6]);
  }
  if ((*(byte *)(plVar6 + 2) & 1) != 0) {
    func_0x0001053936ac();
  }
  return plVar6;
}



/* Entry: 10957eba8; end: 10957ec5f;  */

undefined8 * FUN_10957eba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afc5b8;
  func_0x00010957f4f4(param_1[10]);
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27bf0(param_1 + 5,param_1[6]);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10957ec60; end: 10957f477;  */

void FUN_10957ec60(long *param_1,int *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined8 **ppuVar4;
  long lVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long *plStack_160;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  ulong uStack_c0;
  int iStack_b8;
  ulong *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar14 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
  lVar15 = **(long **)(param_2 + 2);
  plVar10 = param_1;
  if (*(long *)(lVar15 + (long)iVar14 * 0x50 + 0x40) != 0) {
    puVar25 = (undefined8 *)((ulong)&puStack_150 | 8);
    plVar19 = param_1 + 10;
    plStack_160 = alStack_f0;
    do {
      FUN_1095659c8(auStack_d0,lVar15 + (long)iVar14 * 0x50);
      uStack_100 = 0;
      plStack_f8 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      func_0x0001095707b8(&uStack_100,auStack_d0);
      func_0x000105687250(plStack_160,&uStack_c0);
      if (puStack_a8 == &uStack_c0) {
        lVar15 = 0x20;
LAB_10957ed4c:
        (**(code **)(*puStack_a8 + lVar15))();
      }
      else if (puStack_a8 != (ulong *)0x0) {
        lVar15 = 0x28;
        goto LAB_10957ed4c;
      }
      plVar10 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar17 = plStack_c8 + 1;
        do {
          lVar15 = *plVar17;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      puVar21 = &uStack_100;
      FUN_10951e820(puVar21);
      FUN_109365338(auStack_d0,0,puVar21);
      ppuStack_130 = &PTR_FUN_110af3f88;
      uStack_128 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      *puVar25 = 0;
      puVar25[1] = 0;
      puVar20 = &uStack_c0;
      if ((uStack_c0 & 1) != 0) {
        puVar20 = (ulong *)(uStack_c0 + 7);
      }
      puStack_150 = puVar25;
      if (iStack_b8 == 0) {
        lStack_140 = 0;
        puStack_148 = (undefined8 *)0x0;
      }
      else {
        puVar2 = puVar20 + iStack_b8;
        do {
          puVar21 = (undefined8 *)*puVar20;
          if (*(int *)(puVar21 + 9) == 4 || *(int *)(puVar21 + 9) == 1) {
            if ((char)param_1[8] == '\x01') {
              ppuVar3 = &PTR_PTR_1132dec90;
              if ((undefined **)puVar21[6] != (undefined **)0x0) {
                ppuVar3 = (undefined **)puVar21[6];
              }
              puVar16 = ppuVar3[2];
              ppuVar22 = ppuVar3 + 2;
              if (((ulong)puVar16 & 1) != 0) {
                ppuVar22 = (undefined **)(puVar16 + 7);
              }
              if (*(int *)(ppuVar3 + 3) != 0) {
                lVar15 = (long)*(int *)(ppuVar3 + 3) << 3;
                do {
                  puVar16 = *ppuVar22;
                  plVar10 = param_1 + 5;
                  func_0x000107c2a680(plVar10,*(ulong *)(puVar16 + 0x18) & 0xfffffffffffffffc);
                  if (param_1 + 6 != plVar10) {
                    *(uint *)(puVar21 + 2) = *(uint *)(puVar21 + 2) | 4;
                    uVar11 = puVar21[5];
                    if (uVar11 == 0) {
                      uVar11 = puVar21[1];
                      if ((uVar11 & 1) != 0) {
                        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                      }
                      FUN_10934a22c();
                      puVar21[5] = uVar11;
                    }
                    uVar13 = *(ulong *)(uVar11 + 8);
                    if ((uVar13 & 1) != 0) {
                      uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
                    }
                    func_0x000107c30248(uVar11 + 0x10,
                                        *(ulong *)(puVar16 + 0x18) & 0xfffffffffffffffc,uVar13);
                    goto LAB_10957ee9c;
                  }
                  lVar15 = lVar15 + -8;
                  ppuVar22 = ppuVar22 + 1;
                } while (lVar15 != 0);
              }
            }
            else {
LAB_10957ee9c:
              iVar14 = *(int *)(puVar21 + 8);
              plVar17 = (long *)*plVar19;
              plVar10 = plVar19;
              if (plVar17 != (long *)0x0) {
                do {
                  lVar15 = 8;
                  if (iVar14 <= (int)plVar17[4]) {
                    lVar15 = 0;
                    plVar10 = plVar17;
                  }
                  plVar17 = *(long **)((long)plVar17 + lVar15);
                } while (plVar17 != (long *)0x0);
                if ((plVar10 != plVar19) && ((int)plVar10[4] <= iVar14)) {
                  ppuVar3 = &PTR_PTR_1132da178;
                  if ((undefined **)plVar10[8] != (undefined **)0x0) {
                    ppuVar3 = (undefined **)plVar10[8];
                  }
                  fVar30 = *(float *)(ppuVar3 + 2) + *(float *)(ppuVar3 + 3) * 0.5;
                  ppuVar23 = (undefined **)puVar21[3];
                  ppuVar22 = &PTR_PTR_1132da178;
                  if (ppuVar23 != (undefined **)0x0) {
                    ppuVar22 = ppuVar23;
                  }
                  if (ABS((*(float *)(ppuVar22 + 2) + *(float *)(ppuVar22 + 3) * 0.5) - fVar30) <
                      *(float *)(param_1 + 3)) {
                    fVar29 = *(float *)((long)ppuVar3 + 0x14) +
                             *(float *)((long)ppuVar3 + 0x1c) * 0.5;
                    if (ABS((*(float *)((long)ppuVar22 + 0x14) +
                            *(float *)((long)ppuVar22 + 0x1c) * 0.5) - fVar29) <
                        *(float *)(param_1 + 3)) {
                      if (*(char *)((long)param_1 + 0x1c) == '\x01') {
                        fVar26 = fVar30 - *(float *)(ppuVar22 + 2);
                        fVar28 = 1.0 - fVar30;
                        if (fVar26 <= 1.0 - fVar30) {
                          fVar28 = fVar26;
                        }
                        fVar27 = fVar29 - *(float *)((long)ppuVar22 + 0x14);
                        fVar26 = 1.0 - fVar29;
                        if (fVar27 <= 1.0 - fVar29) {
                          fVar26 = fVar27;
                        }
                        *(uint *)(puVar21 + 2) = *(uint *)(puVar21 + 2) | 1;
                        if (ppuVar23 == (undefined **)0x0) {
                          ppuVar23 = (undefined **)puVar21[1];
                          if (((ulong)ppuVar23 & 1) != 0) {
                            ppuVar23 = *(undefined ***)((ulong)ppuVar23 & 0xfffffffffffffffe);
                          }
                          FUN_1093492b0();
                          puVar21[3] = ppuVar23;
                        }
                        *(float *)(ppuVar23 + 2) = fVar30 - fVar28;
                        *(uint *)(puVar21 + 2) = *(uint *)(puVar21 + 2) | 1;
                        uVar11 = puVar21[3];
                        if (uVar11 == 0) {
                          uVar11 = puVar21[1];
                          if ((uVar11 & 1) != 0) {
                            uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                          }
                          FUN_1093492b0();
                          puVar21[3] = uVar11;
                        }
                        *(float *)(uVar11 + 0x14) = fVar29 - fVar26;
                        *(uint *)(puVar21 + 2) = *(uint *)(puVar21 + 2) | 1;
                        uVar11 = puVar21[3];
                        if (uVar11 == 0) {
                          uVar11 = puVar21[1];
                          if ((uVar11 & 1) != 0) {
                            uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                          }
                          FUN_1093492b0();
                          puVar21[3] = uVar11;
                        }
                        *(float *)(uVar11 + 0x18) = fVar28 + fVar28;
                        *(uint *)(puVar21 + 2) = *(uint *)(puVar21 + 2) | 1;
                        uVar11 = puVar21[3];
                        if (uVar11 == 0) {
                          uVar11 = puVar21[1];
                          if ((uVar11 & 1) != 0) {
                            uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                          }
                          FUN_1093492b0();
                          puVar21[3] = uVar11;
                        }
                        *(float *)(uVar11 + 0x1c) = fVar26 + fVar26;
                      }
                      else {
                        *(uint *)(puVar21 + 2) = *(uint *)(puVar21 + 2) | 1;
                        if (ppuVar23 == (undefined **)0x0) {
                          ppuVar23 = (undefined **)puVar21[1];
                          if (((ulong)ppuVar23 & 1) != 0) {
                            ppuVar23 = *(undefined ***)((ulong)ppuVar23 & 0xfffffffffffffffe);
                          }
                          FUN_1093492b0();
                          puVar21[3] = ppuVar23;
                        }
                        if (ppuVar3 != ppuVar23) {
                          func_0x000109348f68(ppuVar23);
                          func_0x000109348e48(ppuVar23,ppuVar3);
                        }
                      }
                    }
                  }
                }
              }
              puVar12 = &uStack_120;
              func_0x000107c303b0(puVar12,0x1093657f0);
              if (puVar21 != puVar12) {
                FUN_109364d34(puVar12);
                FUN_1093651c0(puVar12,puVar21);
              }
              puVar12 = (undefined8 *)0x78;
              __Znwm();
              puVar24 = puVar12 + 5;
              *puVar24 = &PTR_FUN_110af3f38;
              *(int *)(puVar12 + 4) = iVar14;
              puVar12[6] = 0;
              puVar12[8] = 0;
              puVar12[7] = 0;
              puVar12[10] = 0;
              puVar12[9] = 0;
              puVar12[0xc] = 0;
              puVar12[0xb] = 0;
              *(undefined8 *)((long)puVar12 + 0x6c) = 0;
              *(undefined8 *)((long)puVar12 + 100) = 0;
              if (puVar24 != puVar21) {
                uVar13 = puVar21[1];
                uVar11 = uVar13;
                if ((uVar13 & 1) != 0) {
                  uVar11 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
                }
                if (uVar11 == 0) {
                  puVar12[6] = uVar13;
                  puVar21[1] = 0;
                  *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(puVar21 + 2);
                  *(undefined4 *)(puVar21 + 2) = 0;
                  lVar15 = 0;
                  do {
                    uVar6 = *(undefined1 *)((long)puVar12 + lVar15 + 0x40);
                    *(undefined1 *)((long)puVar12 + lVar15 + 0x40) =
                         *(undefined1 *)((long)puVar21 + lVar15 + 0x18);
                    *(undefined1 *)((long)puVar21 + lVar15 + 0x18) = uVar6;
                    lVar15 = lVar15 + 1;
                  } while (lVar15 != 0x34);
                }
                else {
                  FUN_109364d34(puVar24);
                  FUN_1093651c0(puVar24,puVar21);
                }
              }
              puVar21 = puVar25;
              puVar18 = puVar25;
              if (puStack_148 != (undefined8 *)0x0) {
                puVar9 = puStack_148;
                do {
                  while (puVar21 = puVar9, *(int *)(puVar12 + 4) < *(int *)(puVar21 + 4)) {
                    puVar18 = puVar21;
                    puVar9 = (undefined8 *)*puVar21;
                    if ((undefined8 *)*puVar21 == (undefined8 *)0x0) goto LAB_10957f1a0;
                  }
                  if (*(int *)(puVar12 + 4) <= *(int *)(puVar21 + 4)) {
                    func_0x000109364c48(puVar24);
                    __ZdlPv(puVar12);
                    goto LAB_10957f1ec;
                  }
                  puVar9 = (undefined8 *)puVar21[1];
                } while ((undefined8 *)puVar21[1] != (undefined8 *)0x0);
                puVar18 = puVar21 + 1;
              }
LAB_10957f1a0:
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = puVar21;
              *puVar18 = puVar12;
              if ((undefined8 *)*puStack_150 != (undefined8 *)0x0) {
                puVar12 = (undefined8 *)*puVar18;
                puStack_150 = (undefined8 *)*puStack_150;
              }
              func_0x000107c27d40(puStack_148,puVar12);
              lStack_140 = lStack_140 + 1;
            }
          }
LAB_10957f1ec:
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar2);
      }
      puVar12 = (undefined8 *)param_1[10];
      puVar21 = (undefined8 *)param_1[9];
      lVar15 = param_1[10];
      lVar5 = param_1[0xb];
      param_1[9] = (long)puStack_150;
      param_1[10] = (long)puStack_148;
      param_1[0xb] = lStack_140;
      plVar10 = param_1 + 9;
      if (lStack_140 != 0) {
        plVar10 = puStack_148 + 2;
      }
      *plVar10 = (long)plVar19;
      ppuVar4 = &puStack_150;
      if (lVar5 != 0) {
        ppuVar4 = (undefined8 **)(lVar15 + 0x10);
      }
      puStack_150 = puVar21;
      puStack_148 = puVar12;
      lStack_140 = lVar5;
      *ppuVar4 = puVar25;
      FUN_109573200(param_2,&ppuStack_130);
      func_0x00010957f4f4(puStack_148);
      FUN_1093653ac(&ppuStack_130);
      FUN_1093653ac(auStack_d0);
      plVar10 = plStack_d8;
      if (plStack_d8 == plStack_160) {
        lVar15 = 0x20;
LAB_10957f2f8:
        (**(code **)(*plStack_d8 + lVar15))();
      }
      else if (plStack_d8 != (long *)0x0) {
        lVar15 = 0x28;
        goto LAB_10957f2f8;
      }
      plVar17 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar1 = plStack_f8 + 1;
        do {
          lVar15 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar10 = plVar17;
        }
      }
      iVar14 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
      lVar15 = **(long **)(param_2 + 2);
    } while (*(long *)(lVar15 + (long)iVar14 * 0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010957f4f4(puStack_148);
  FUN_1093653ac(&ppuStack_130);
  FUN_1093653ac(auStack_d0);
  if (plStack_d8 == plStack_160) {
    lVar15 = 0x20;
  }
  else {
    if (plStack_d8 == (long *)0x0) goto LAB_10957f438;
    lVar15 = 0x28;
  }
  (**(code **)(*plStack_d8 + lVar15))();
LAB_10957f438:
  plVar19 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar17 = plStack_f8 + 1;
    do {
      lVar15 = *plVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar8) {
        *plVar17 = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  __Unwind_Resume();
  plVar19 = plVar10 + 10;
  func_0x00010957f4f4(*plVar19);
  *plVar19 = 0;
  plVar10[0xb] = 0;
  plVar10[9] = (long)plVar19;
  return;
}



/* Entry: 10957f478; end: 10957f57f;  */

void FUN_10957f478(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  func_0x00010957f4f4(*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  return;
}



/* Entry: 10957f580; end: 10957f587;  */

void FUN_10957f580(void)

{
  return;
}



/* Entry: 10957f588; end: 10957f873;  */

undefined ***
FUN_10957f588(undefined ***param_1,undefined ***param_2,undefined8 *param_3,long param_4,
             undefined *param_5)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  undefined **ppuVar16;
  int *piVar17;
  long *plStack_100;
  long *plStack_f8;
  undefined1 auStack_f0 [8];
  undefined ***pppuStack_e8;
  undefined **appuStack_e0 [3];
  undefined ***pppuStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  long alStack_b0 [3];
  long *plStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar14 = param_2;
  if (*(long *)(*param_2[1] +
               (long)*(int *)(param_2[1][0xc] + (long)*(int *)param_2 * 4) * 0x50 + 0x40) != 0) {
    do {
      FUN_109572f9c(auStack_f0,param_2);
      puVar11 = auStack_f0;
      FUN_109570a30();
      if (*(int *)(puVar11 + 0x120) != 0) {
        FUN_1092612e0();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10957f83c);
        (*pcVar8)();
      }
      uVar3 = *(undefined4 *)(puVar11 + 8);
      uVar4 = *(undefined4 *)(puVar11 + 0xc);
      plVar12 = (long *)0x38;
      __Znwm();
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_DAT_1108a6378;
      plStack_100 = plVar12 + 3;
      *plStack_100 = (long)FUN_10957f874;
      plVar12[4] = CONCAT44(uVar3,uVar4);
      ppuStack_90 = &PTR_FUN_110afc658;
      pppuVar14 = &ppuStack_90;
      plStack_f8 = plVar12;
      plStack_88 = plStack_100;
      pppuStack_78 = &ppuStack_90;
      FUN_109567d5c(&ppuStack_c0,&plStack_100);
      if (pppuStack_78 == &ppuStack_90) {
        lVar15 = 0x20;
LAB_10957f690:
        (**(code **)((long)*pppuStack_78 + lVar15))();
      }
      else if (pppuStack_78 != (undefined ***)0x0) {
        lVar15 = 0x28;
        goto LAB_10957f690;
      }
      plVar12 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar1 = plStack_f8 + 1;
        do {
          lVar15 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      piVar5 = *(int **)((long)(param_2[1][0xf] + (long)*(int *)param_2 * 0x18) + 8);
      for (piVar17 = *(int **)(param_2[1][0xf] + (long)*(int *)param_2 * 0x18); piVar17 != piVar5;
          piVar17 = piVar17 + 2) {
        if (*piVar17 == 0) {
          pppuVar14 = &ppuStack_c0;
          func_0x000109566260(*param_2[1] + (long)piVar17[1] * 0x50 + 0x18);
        }
      }
      if (plStack_98 == alStack_b0) {
        lVar15 = 0x20;
LAB_10957f738:
        (**(code **)(*plStack_98 + lVar15))();
      }
      else if (plStack_98 != (long *)0x0) {
        lVar15 = 0x28;
        goto LAB_10957f738;
      }
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar1 = plStack_b8 + 1;
        do {
          lVar15 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      param_1 = pppuStack_c8;
      if (pppuStack_c8 == appuStack_e0) {
        lVar15 = 0x20;
LAB_10957f798:
        (**(code **)((long)*pppuStack_c8 + lVar15))();
      }
      else if (pppuStack_c8 != (undefined ***)0x0) {
        lVar15 = 0x28;
        goto LAB_10957f798;
      }
      pppuVar13 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_e8 + 1;
        do {
          ppuVar16 = *pppuVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar7) {
            *pppuVar2 = (undefined **)((long)ppuVar16 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuVar16 == (undefined **)0x0) {
          (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = pppuVar13;
        }
      }
    } while (*(long *)(*param_2[1] +
                      (long)*(int *)(param_2[1][0xc] + (long)*(int *)param_2 * 4) * 0x50 + 0x40) !=
             0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar9 = (int)param_1;
  __Unwind_Resume();
  if (iVar9 < 2) {
    if (iVar9 != 0) {
      ppuVar16 = pppuVar14[1];
      *param_3 = FUN_10957f874;
      param_3[1] = ppuVar16;
      return (undefined ***)0x0;
    }
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 != 3) {
        return (undefined ***)&PTR_DAT_110afc568;
      }
      if (param_4 == 0) {
        uVar10 = (uint)(param_5 == &UNK_10dfd3788);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110afc568);
        uVar10 = (uint)param_4;
      }
      if (uVar10 != 0) {
        return pppuVar14 + 1;
      }
      return (undefined ***)0x0;
    }
    ppuVar16 = pppuVar14[1];
    *param_3 = FUN_10957f874;
    param_3[1] = ppuVar16;
  }
  *pppuVar14 = (undefined **)0x0;
  return (undefined ***)0x0;
}



/* Entry: 10957f874; end: 10957f927;  */

undefined **
FUN_10957f874(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = param_2[1];
      *param_3 = FUN_10957f874;
      param_3[1] = uVar2;
      return (undefined **)0x0;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_110afc568;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10dfd3788);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110afc568);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)(param_2 + 1);
      }
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    *param_3 = FUN_10957f874;
    param_3[1] = uVar2;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}


