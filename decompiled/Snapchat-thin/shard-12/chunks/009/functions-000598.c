/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109bac15c; end: 109bac187;  */

long FUN_109bac15c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109bac188; end: 109bac19b;  */

undefined1  [16] FUN_109bac188(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_109bac258();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109bac19c; end: 109bac21b;  */

undefined1  [16] FUN_109bac19c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_109bac258();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109bac21c; end: 109bac22b;  */

void FUN_109bac21c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b29f98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109bac22c; end: 109bac24b;  */

void FUN_109bac22c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b29f98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109bac24c; end: 109bac257;  */

void FUN_109bac24c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 109bac258; end: 109bac33b;  */

long FUN_109bac258(long param_1)

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



/* Entry: 109bac33c; end: 109bac36b;  */

void FUN_109bac33c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 109bac36c; end: 109bac3c3;  */

long FUN_109bac36c(long param_1)

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



/* Entry: 109bac3c4; end: 109bac3d3;  */

void FUN_109bac3c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2a018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109bac3d4; end: 109bac3f3;  */

void FUN_109bac3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2a018;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109bac3f4; end: 109bac41b;  */

void FUN_109bac3f4(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1 + 0x20);
  return;
}



/* Entry: 109bac41c; end: 109bac41f;  */

void FUN_109bac41c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109bac420; end: 109bac477;  */

long FUN_109bac420(long param_1)

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



/* Entry: 109bac478; end: 109bac487;  */

void FUN_109bac478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2a068;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109bac488; end: 109bac4a7;  */

void FUN_109bac488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2a068;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109bac4a8; end: 109bac4b3;  */

void FUN_109bac4a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109bac258();
      } while (lVar1 != lVar3);
      lVar2 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109bac4b4; end: 109bac927;  */

void FUN_109bac4b4(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_e8;
  ulong auStack_d0 [2];
  int iStack_c0;
  int aiStack_bc [9];
  int aiStack_98 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = *(int *)(param_2 + 0x5c);
  iVar1 = *(int *)(param_2 + 0x30);
  iVar2 = *(int *)(param_2 + 0x34);
  if (*(char *)((long)param_1 + 0x34) == '\0') {
    lVar17 = (long)iVar3 * (long)iVar2 * (long)iVar1;
    lVar16 = lVar17 + 0x7fff;
    if (-1 < lVar17) {
      lVar16 = lVar17;
    }
    uVar15 = lVar16 >> 0xf;
    if ((long)uVar15 < 2) {
      uVar15 = 1;
    }
    if ((long)(int)param_1[6] <= (long)uVar15) {
      uVar15 = (long)(int)param_1[6];
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x34) != '\x01') goto LAB_109bac87c;
    uVar15 = (ulong)*(uint *)(param_1 + 6);
  }
  piVar14 = (int *)((long)param_1 + 0x4c);
  if (*piVar14 == 0) {
    piVar8 = piVar14;
    func_0x000109ba9b2c();
    *piVar14 = (int)piVar8;
  }
  uVar6 = fpcr;
  uVar7 = fpcr;
  uVar12 = (ulong)((uint)uVar7 | 0x1080000);
  fpcr = uVar12;
  if (((int)uVar15 == 1) &&
     (((iVar2 == 1 || (iVar3 == 1)) ||
      (uVar5 = (iVar3 * (uint)*(byte *)(param_2 + 0x4a) + iVar2 * (uint)*(byte *)(param_2 + 0x22)) *
               iVar1, uVar12 = (ulong)uVar5, (int)uVar5 <= (int)param_1[10])))) {
    FUN_109ba9f10(uVar12,param_1,1);
    puVar11 = *(undefined4 **)param_1[0xb];
    *puVar11 = (int)param_1[1];
    FUN_109baccf8(puVar11,piVar14);
    lVar16 = 0;
    auStack_d0[0] = 0;
    uStack_90 = CONCAT44(*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xbc));
    aiStack_98[0] = 0;
    aiStack_98[1] = 1;
    do {
      iVar1 = *(int *)((long)aiStack_98 + lVar16);
      lVar17 = (long)iVar1;
      if ((*(byte *)(param_2 + 0x108 + lVar17) & 1) == 0) {
        (**(code **)(param_2 + 8 + lVar17 * 8))
                  (puVar11,param_2 + 0x20 + (long)iVar1 * 0x28,param_2 + 0x98 + (long)iVar1 * 0x38,
                   *(undefined4 *)((long)auStack_d0 + lVar17 * 4),
                   *(undefined4 *)((long)&uStack_90 + lVar17 * 4));
      }
      lVar16 = lVar16 + 4;
    } while (lVar16 != 8);
    (**(code **)(param_2 + 0x18))
              (puVar11,param_2 + 0x98,param_2 + 0x110,auStack_d0,&uStack_90,param_2 + 0x70);
    uStack_e8 = uVar6;
  }
  else {
    plVar9 = param_1;
    FUN_109baa054();
    FUN_109ba93a4(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xf4),(long)iVar1,
                  *(undefined1 *)(param_2 + 199),*(undefined1 *)(param_2 + 0xff),
                  *(undefined1 *)(param_2 + 0x9a),*(undefined1 *)(param_2 + 0xd2),uVar15,
                  param_1 + 10,auStack_d0);
    iVar1 = (int)auStack_d0[0];
    uVar15 = auStack_d0[0] & 0xffffffff;
    FUN_109ba9f10(param_1,uVar15);
    if (iVar1 < 1) {
      uStack_90 = 0;
      lStack_88 = 0;
    }
    else {
      lVar16 = param_1[1];
      puVar13 = (undefined8 *)param_1[0xb];
      uVar12 = uVar15;
      do {
        *(int *)*puVar13 = (int)lVar16;
        uVar12 = uVar12 - 1;
        puVar13 = puVar13 + 1;
      } while (uVar12 != 0);
      uStack_90 = 0;
      lStack_88 = 0;
      if (1 < iVar1) {
        lVar16 = 0;
        aiStack_98[0] = 0;
        aiStack_98[1] = 1;
        do {
          lVar17 = (long)*(int *)((long)aiStack_98 + lVar16);
          if ((*(byte *)(param_2 + 0x108 + lVar17) & 1) == 0) {
            uVar5 = aiStack_bc[lVar17] + iStack_c0;
            uVar4 = 1 << (ulong)(uVar5 & 0x1f);
            plVar10 = plVar9;
            FUN_109ba9084(plVar9,(long)(int)uVar4);
            (&uStack_90)[lVar17] = plVar10;
            if (uVar5 != 0x1f) {
              if ((int)uVar4 < 2) {
                uVar4 = 1;
              }
              uVar12 = (ulong)uVar4;
              do {
                *(undefined1 *)plVar10 = 0;
                uVar12 = uVar12 - 1;
                plVar10 = (long *)((long)plVar10 + 1);
              } while (uVar12 != 0);
            }
          }
          lVar16 = lVar16 + 4;
          uStack_e8 = uVar6;
        } while (lVar16 != 8);
      }
    }
    lVar17 = plVar9[1];
    lVar16 = lVar17 + 0x40;
    if (plVar9[2] < lVar16) {
LAB_109bac7a0:
      plVar10 = plVar9;
      FUN_109ba8ff0(plVar9,0x40);
    }
    else {
      plVar9[1] = lVar16;
      if (*plVar9 == 0) goto LAB_109bac7a0;
      plVar10 = (long *)(*plVar9 + lVar17);
    }
    *(int *)plVar10 = iVar1;
    FUN_109ba9084(plVar9,(long)iVar1 * 0x60);
    if (0 < iVar1) {
      uVar12 = 0;
      plVar9 = plVar9 + 6;
      do {
        lVar16 = *(long *)(param_1[0xb] + uVar12 * 8);
        plVar9[-6] = (long)&PTR_FUN_110b2a0b8;
        plVar9[-5] = param_2;
        plVar9[-4] = (long)auStack_d0;
        plVar9[-3] = (long)plVar10;
        *(int *)(plVar9 + -2) = (int)uVar12;
        *(bool *)((long)plVar9 + -0xc) = 1 < iVar1;
        plVar9[-1] = uStack_90;
        *plVar9 = lStack_88;
        plVar9[1] = lVar16;
        plVar9[2] = lVar16 + 0x18;
        plVar9[3] = 0;
        plVar9[4] = 0;
        plVar9[5] = (long)piVar14;
        uVar12 = uVar12 + 1;
        plVar9 = plVar9 + 0xc;
      } while (uVar15 != uVar12);
    }
    FUN_109baba5c(param_1 + 2,uVar15,0x60);
  }
  fpcr = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109bac87c:
  FUN_109bac92c();
  FUN_109bac92c(0,&uStack_90);
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5a31ef);
  _abort();
  fpcr = uStack_e8;
  __Unwind_Resume(uStack_e8);
  return;
}



/* Entry: 109bac928; end: 109bac92b;  */

void FUN_109bac928(void)

{
  return;
}



/* Entry: 109bac92c; end: 109bac95f;  */

void FUN_109bac92c(undefined8 param_1,undefined8 param_2)

{
  _snprintf(param_2,0x20,&UNK_10f5a3240);
  return;
}



/* Entry: 109bac960; end: 109bac963;  */

void FUN_109bac960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109bac964; end: 109bacbef;  */

long FUN_109bac964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int aiStack_a0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar15 = 0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = 0x100000000;
  do {
    lVar20 = (long)*(int *)((long)&uStack_80 + lVar15);
    if ((*(byte *)(*(long *)(param_1 + 8) + lVar20 + 0x108) & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      FUN_109ba9084(uVar10,(long)(1 << (ulong)(*(int *)(*(long *)(param_1 + 0x10) + lVar20 * 4 +
                                                       0x14) +
                                               *(int *)(*(long *)(param_1 + 0x10) + 0x10) & 0x1f)));
      *(undefined8 *)(param_1 + 0x48 + lVar20 * 8) = uVar10;
      _bzero();
    }
    iVar13 = (int)param_3;
    lVar15 = lVar15 + 4;
  } while (lVar15 != 8);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  FUN_109baccf8(uVar10,*(undefined8 *)(param_1 + 0x58));
  lVar15 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar15 + 0x10);
  iVar3 = *(int *)(lVar15 + 0x14);
  iVar4 = *(int *)(lVar15 + 0x18);
  iVar11 = *(int *)(param_1 + 0x20);
  while (iVar11 < 1 << (ulong)(iVar3 + iVar2 * 2 + iVar4 & 0x1f)) {
    piVar14 = *(int **)(param_1 + 0x18);
    do {
      iVar7 = *piVar14;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar9) {
        *piVar14 = iVar7 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    FUN_109ba9198(uVar16,iVar11,aiStack_a0 + 4);
    FUN_109ba970c(uVar16,aiStack_a0 + 4,aiStack_a0 + 2,aiStack_a0);
    uStack_80 = CONCAT44((int)((ulong)uStack_90 >> 0x20) + 1,(int)uStack_90 + 1);
    uVar19 = 0;
    while( true ) {
      uVar18 = uVar19;
      lVar15 = 0;
      uStack_88 = 0x100000000;
      uVar17 = 1;
      do {
        lVar12 = (long)*(int *)((long)aiStack_a0 + lVar15 + 0x18);
        lVar20 = param_1;
        FUN_109bacbf0(param_1,lVar12,aiStack_a0[lVar12 + 4],aiStack_a0[lVar12 + 2],
                      aiStack_a0[lVar12],uVar10);
        uVar17 = uVar17 & (uint)lVar20;
        lVar15 = lVar15 + 4;
      } while (lVar15 != 8);
      if (uVar17 != 0) break;
      iVar13 = *(int *)((long)&uStack_80 + uVar18 * 4);
      uVar19 = (ulong)((uint)uVar18 ^ 1);
      lVar15 = *(long *)(param_1 + 0x10);
      if (iVar13 < 1 << (ulong)(*(int *)(lVar15 + uVar18 * 4 + 0x14) + *(int *)(lVar15 + 0x10) &
                               0x1f)) {
        lVar15 = lVar15 + uVar18 * 4;
        iVar5 = *(int *)(lVar15 + 0x2c);
        iVar11 = iVar5;
        if (iVar13 <= iVar5) {
          iVar11 = iVar13;
        }
        iVar6 = *(int *)(lVar15 + 0x1c);
        iVar11 = *(int *)(lVar15 + 0x24) * iVar13 + iVar11 * iVar6;
        if (iVar5 <= iVar13) {
          iVar6 = 0;
        }
        FUN_109bacbf0(param_1,uVar18,iVar13,iVar11,iVar6 + *(int *)(lVar15 + 0x24) + iVar11,uVar10);
        *(int *)((long)&uStack_80 + uVar18 * 4) = iVar13 + 1;
      }
    }
    lVar20 = *(long *)(param_1 + 8);
    lVar15 = lVar20 + 0x110;
    param_6 = lVar20 + 0x70;
    (**(code **)(lVar20 + 0x18))(uVar10,lVar20 + 0x98,lVar15,aiStack_a0 + 2,aiStack_a0,param_6);
    iVar13 = (int)lVar15;
    iVar11 = iVar7;
  }
  lVar15 = *(long *)(param_1 + 0x40);
  FUN_109ba90c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar15;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar20 = *(long *)(lVar15 + 8);
  if ((*(byte *)(lVar20 + iVar11 + 0x108) & 1) == 0) {
    lVar12 = (long)iVar11;
    if ((*(byte *)(*(long *)(lVar15 + 0x48 + lVar12 * 8) + (long)iVar13) & 1) == 0) {
      if (*(char *)(lVar15 + 0x24) == '\x01') {
        pcVar1 = (char *)(*(long *)(lVar15 + lVar12 * 8 + 0x28) + (long)iVar13);
        do {
          if (*pcVar1 != '\0') {
            ClearExclusiveLocal();
            if (*pcVar1 == '\x01') {
              return 0;
            }
            goto LAB_109baccc0;
          }
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar9) {
            *pcVar1 = '\x01';
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = *(long *)(lVar15 + 8);
        (**(code **)(lVar20 + lVar12 * 8 + 8))
                  (param_6,lVar20 + (long)iVar11 * 0x28 + 0x20,lVar20 + (long)iVar11 * 0x38 + 0x98);
        *pcVar1 = '\x02';
      }
      else {
        (**(code **)(lVar20 + lVar12 * 8 + 8))
                  (param_6,lVar20 + (long)iVar11 * 0x28 + 0x20,lVar20 + (long)iVar11 * 0x38 + 0x98);
      }
LAB_109baccc0:
      *(undefined1 *)(*(long *)(lVar15 + 0x48 + lVar12 * 8) + (long)iVar13) = 1;
      return 1;
    }
  }
  return 1;
}



/* Entry: 109bacbf0; end: 109baccf7;  */

undefined8
FUN_109bacbf0(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar4 + param_2 + 0x108) & 1) == 0) {
    lVar5 = (long)param_2;
    if ((*(byte *)(*(long *)(param_1 + 0x48 + lVar5 * 8) + (long)param_3) & 1) == 0) {
      if (*(char *)(param_1 + 0x24) == '\x01') {
        pcVar1 = (char *)(*(long *)(param_1 + lVar5 * 8 + 0x28) + (long)param_3);
        do {
          if (*pcVar1 != '\0') {
            ClearExclusiveLocal();
            if (*pcVar1 == '\x01') {
              return 0;
            }
            goto LAB_109baccc0;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *pcVar1 = '\x01';
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar4 = *(long *)(param_1 + 8);
        (**(code **)(lVar4 + lVar5 * 8 + 8))
                  (param_6,lVar4 + (long)param_2 * 0x28 + 0x20,lVar4 + (long)param_2 * 0x38 + 0x98);
        *pcVar1 = '\x02';
      }
      else {
        (**(code **)(lVar4 + lVar5 * 8 + 8))
                  (param_6,lVar4 + (long)param_2 * 0x28 + 0x20,lVar4 + (long)param_2 * 0x38 + 0x98);
      }
LAB_109baccc0:
      *(undefined1 *)(*(long *)(param_1 + 0x48 + lVar5 * 8) + (long)param_3) = 1;
      return 1;
    }
  }
  return 1;
}



/* Entry: 109baccf8; end: 109bacd8b;  */

void FUN_109baccf8(int *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lStack_30;
  long lStack_28;
  
  iVar1 = (int)param_2;
  if (*param_1 == 0) {
    _clock_gettime(4,&lStack_30);
    lStack_28 = lStack_28 + lStack_30 * 1000000000;
    if ((param_1[1] == 0) || (*(long *)(param_1 + 4) <= lStack_28 - *(long *)(param_1 + 2))) {
      *(long *)(param_1 + 2) = lStack_28;
      func_0x000109ba9c94();
      if ((param_2 & 1) == 0) {
        func_0x000109ba9d00();
        iVar2 = 3;
        if (iVar1 == 0) {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 2;
      }
      param_1[1] = iVar2;
    }
  }
  return;
}



/* Entry: 109bacd8c; end: 109bad8fb;  */

void FUN_109bacd8c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong *puVar20;
  int *piVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  int *piVar27;
  undefined8 *puVar28;
  ulong uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  int *piVar34;
  ulong uVar35;
  undefined8 *puVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  uint *puVar40;
  undefined8 uVar41;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  
  FUN_109badd6c(&uStack_8c);
  piVar34 = (int *)(ulong)uStack_84;
  piVar6 = piVar34;
  _calloc(piVar34,0x48);
  piVar21 = piVar6;
  if (piVar6 != (int *)0x0) {
    uVar35 = (ulong)uStack_88;
    uVar7 = uVar35;
    _calloc(uVar35,0x38);
    if (uVar7 != 0) {
      puVar36 = (undefined8 *)(ulong)uStack_8c;
      puVar8 = puVar36;
      _calloc(puVar36,0x48);
      uVar32 = uVar7;
      puVar33 = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        uVar35 = 0;
        uVar24 = 0;
        uVar38 = 0;
        uVar17 = 0;
        puVar40 = (uint *)0x0;
        goto LAB_109bad20c;
      }
      iVar30 = 0;
      uVar1 = 0;
      if (uStack_8c != 0) {
        uVar1 = uStack_84 / uStack_8c;
      }
      uVar2 = 0;
      puVar28 = puVar8;
      puVar23 = puVar36;
      if (uStack_8c != 0) {
        uVar2 = uStack_88 / uStack_8c;
      }
      do {
        puVar28[3] = 0;
        puVar28[2] = 0;
        puVar28[5] = 0;
        puVar28[4] = 0;
        puVar28[1] = 0;
        *puVar28 = 0;
        *(uint *)(puVar28 + 6) = uVar1 * iVar30;
        *(uint *)((long)puVar28 + 0x34) = uVar1;
        *(uint *)(puVar28 + 7) = uVar2 * iVar30;
        *(uint *)((long)puVar28 + 0x3c) = uVar2;
        puVar28[8] = 0;
        puVar9 = puVar28;
        FUN_109bad8fc();
        if ((int)puVar9 == 0) {
          func_0x000109bad9dc(puVar28);
        }
        iVar30 = iVar30 + 1;
        puVar23 = (undefined8 *)((long)puVar23 + -1);
        puVar28 = puVar28 + 9;
      } while (puVar23 != (undefined8 *)0x0);
      iVar30 = 0xf5a3250;
      func_0x000109badc30();
      iVar26 = 0xf5a325d;
      func_0x000109badc30();
      if (iVar26 == 0) {
        if (0x1b588bb2 < iVar30) {
          if (iVar30 != 0x462504d2) {
            iVar26 = 0x1b588bb3;
            goto LAB_109bad634;
          }
          goto LAB_109bace7c;
        }
        if (iVar30 == -0x17e1810a) goto LAB_109bace7c;
        iVar26 = 0x7d34b9f;
LAB_109bad634:
        if (iVar30 == iVar26) goto LAB_109bace7c;
      }
      else {
LAB_109bace7c:
        uRam00000001132e8fb8 = 1;
      }
      iVar26 = 0xf5a3276;
      func_0x000109badc30();
      if (iVar26 == 0) {
        if (0x1b588bb2 < iVar30) {
          if (iVar30 != 0x462504d2) {
            iVar26 = 0x1b588bb3;
            goto LAB_109bad658;
          }
          goto LAB_109bace98;
        }
        if (iVar30 == -0x17e1810a) goto LAB_109bace98;
        iVar26 = 0x7d34b9f;
LAB_109bad658:
        if (iVar30 == iVar26) goto LAB_109bace98;
      }
      else {
LAB_109bace98:
        uRam00000001132e8fcc = 1;
      }
      iVar26 = 0xf5a328f;
      func_0x000109badc30();
      if (iVar26 == 0) {
        if (0x1b588bb2 < iVar30) {
          if (iVar30 != 0x462504d2) {
            iVar26 = 0x1b588bb3;
            goto LAB_109bad67c;
          }
          goto LAB_109baceb4;
        }
        if (iVar30 == -0x17e1810a) goto LAB_109baceb4;
        iVar26 = 0x7d34b9f;
LAB_109bad67c:
        if (iVar30 == iVar26) goto LAB_109baceb4;
      }
      else {
LAB_109baceb4:
        uRam00000001132e8fcd = 1;
      }
      iVar26 = 0xf5a32a9;
      func_0x000109badc30();
      if (iVar26 == 0) {
        iVar26 = 0xf5a32c2;
        func_0x000109badc30();
        if (((iVar26 != 0) || (iVar30 == 0x462504d2)) || (iVar30 == 0x1b588bb3)) goto LAB_109bacee0;
      }
      else {
LAB_109bacee0:
        uRam00000001132e8fd1 = 1;
      }
      iVar26 = 0xf5a32da;
      func_0x000109badc30();
      if (iVar26 != 0) {
        uRam00000001132e8fb9 = 1;
      }
      iVar26 = 0xf5a32f4;
      func_0x000109badc30();
      if (((iVar26 != 0) || (iVar30 == 0x462504d2)) || (iVar30 == 0x1b588bb3)) {
        uRam00000001132e8fd0 = 1;
      }
      iVar26 = 0xf5a330e;
      func_0x000109badc30();
      if (((iVar26 != 0) || (iVar30 == 0x462504d2)) || (iVar30 == 0x1b588bb3)) {
        uRam00000001132e8fcf = 1;
      }
      iVar26 = 0xf5a3329;
      func_0x000109badc30();
      if (((iVar26 != 0) || (iVar30 == 0x462504d2)) || (iVar30 == 0x1b588bb3)) {
        uRam00000001132e8fce = 1;
      }
      iVar26 = 0xf5a3346;
      func_0x000109badc30();
      if (iVar26 != 0) {
        uRam00000001132e8fbc = 1;
      }
      iVar26 = 0xf5a3360;
      func_0x000109badc30();
      if (iVar26 != 0) {
        uRam00000001132e8fbd = 1;
      }
      uVar3 = 0;
      if (uStack_88 != 0) {
        uVar3 = uStack_84 / uStack_88;
      }
      iVar26 = 0xf5a3379;
      func_0x000109badc30();
      if (iVar26 != 0) {
        uRam00000001132e8fbe = 1;
      }
      uVar17 = 0;
      puVar23 = (undefined8 *)(uVar7 + 0x10);
      uVar31 = 1;
      do {
        uVar15 = (uint)uVar17;
        if (iVar30 < 0x204526d0) {
          if (iVar30 < -0x17e1810a) {
            if (iVar30 == -0x789a1216) {
              iVar26 = 0x700200;
              iVar14 = 0x700201;
            }
            else {
              if (iVar30 == -0x6d04c838) {
                iVar26 = 0x700103;
                goto LAB_109bad19c;
              }
              if (iVar30 != -0x25cc27c3) goto LAB_109bad1e8;
              iVar26 = 0x70010d;
              iVar14 = 0x70010e;
            }
          }
          else {
            if (iVar30 == -0x17e1810a) {
              iVar26 = 0x700105;
              if (1 < uVar17) {
                iVar26 = 0x700106;
              }
              goto LAB_109bad19c;
            }
            if (iVar30 == 0x7d34b9f) {
              iVar26 = 0x700107;
              iVar14 = 0x700108;
            }
            else {
              if (iVar30 != 0x1b588bb3) goto LAB_109bad1e8;
              iVar26 = 0x70010b;
              iVar14 = 0x70010c;
            }
          }
LAB_109bad194:
          if (uStack_88 <= uVar15 + 4) {
            iVar26 = iVar14;
          }
        }
        else {
          if (iVar30 < 0x37a09642) {
            if (iVar30 == 0x204526d0) {
              iVar26 = 0x700204;
              iVar14 = 0x700205;
            }
            else {
              if (iVar30 != 0x2876f5b5) {
                if (iVar30 != 0x2c91a47e) goto LAB_109bad1e8;
                iVar26 = 0x700102;
                goto LAB_109bad19c;
              }
              iVar26 = 0x700202;
              iVar14 = 0x700203;
            }
            goto LAB_109bad194;
          }
          if (iVar30 < 0x67ceee93) {
            iVar26 = 0x700101;
            if (iVar30 != 0x37a09642) {
              if (iVar30 == 0x462504d2) {
                iVar26 = 0x700109;
                iVar14 = 0x70010a;
                goto LAB_109bad194;
              }
LAB_109bad1e8:
              iVar26 = 0;
            }
          }
          else {
            if (iVar30 != 0x67ceee93) {
              if (iVar30 == 0x75d4acb9) {
                iVar26 = 0x700206;
                iVar14 = 0x700207;
                goto LAB_109bad194;
              }
              goto LAB_109bad1e8;
            }
            iVar26 = 0x700104;
          }
        }
LAB_109bad19c:
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar15 / uVar2;
        }
        *(uint *)(puVar23 + -2) = uVar3 * uVar15;
        *(uint *)((long)puVar23 + -0xc) = uVar3;
        *(uint *)(puVar23 + -1) = uVar15 - uVar4 * uVar2;
        *puVar23 = 0;
        puVar23[1] = puVar8 + (ulong)uVar4 * 9;
        *(undefined4 *)(puVar23 + 2) = 5;
        *(int *)((long)puVar23 + 0x14) = iVar26;
        *(undefined4 *)(puVar23 + 3) = 0;
        puVar23[4] = 0;
        if ((uVar17 != 0) && (iVar26 != *(int *)((long)puVar23 + -0x24))) {
          uVar31 = uVar31 + 1;
        }
        uVar17 = uVar17 + 1;
        puVar23 = puVar23 + 7;
      } while (uVar35 != uVar17);
      if (uStack_84 != 0) {
        piVar18 = (int *)0x0;
        piVar27 = piVar6;
        do {
          uVar2 = 0;
          uVar15 = (uint)piVar18;
          if (uVar3 != 0) {
            uVar2 = uVar15 / uVar3;
          }
          *piVar27 = uVar15 - uVar2 * uVar3;
          *(ulong *)(piVar27 + 2) = uVar7 + (ulong)uVar2 * 0x38;
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = uVar15 / uVar1;
          }
          *(undefined8 **)(piVar27 + 6) = puVar8 + (ulong)uVar2 * 9;
          piVar18 = (int *)((long)piVar18 + 1);
          piVar27 = piVar27 + 0x12;
        } while (piVar34 != piVar18);
      }
      uVar29 = (ulong)uVar31;
      uVar10 = uVar29;
      _calloc(uVar29,0x38);
      uVar38 = uVar10;
      if (uVar10 == 0) {
        uVar29 = 0;
      }
      else {
        _calloc(uVar29,0x10);
        if (uVar29 != 0) {
          uVar17 = 0;
          uVar24 = 0xffffffff;
          piVar18 = (int *)(uVar7 + 0x24);
          do {
            if (uVar17 == 0) {
              iVar30 = *(int *)(uVar7 + 0x24);
LAB_109bad34c:
              uVar1 = (int)uVar24 + 1;
              uVar24 = (ulong)uVar1;
              piVar27 = (int *)(uVar29 + uVar24 * 0x10);
              *piVar27 = iVar30;
              piVar27[1] = 0;
              piVar27[2] = 1;
              piVar27[3] = 1;
              piVar27 = (int *)(uVar10 + uVar24 * 0x38);
              uVar41 = *(undefined8 *)(piVar18 + -3);
              iVar26 = piVar18[-1];
              *piVar27 = uVar3 * (int)uVar17;
              piVar27[1] = 1;
              piVar27[2] = (int)uVar17;
              piVar27[3] = 1;
              piVar27[4] = uVar1;
              *(undefined8 *)(piVar27 + 6) = uVar41;
              piVar27[8] = iVar26;
              piVar27[9] = iVar30;
              piVar27[10] = 0;
              piVar27[0xc] = 0;
              piVar27[0xd] = 0;
            }
            else {
              iVar30 = *piVar18;
              if (iVar30 != piVar18[-0xe]) goto LAB_109bad34c;
              lVar25 = uVar29 + uVar24 * 0x10;
              uVar41 = *(undefined8 *)(lVar25 + 8);
              *(ulong *)(lVar25 + 8) = CONCAT44((int)((ulong)uVar41 >> 0x20) + 1,(int)uVar41 + 1);
              lVar25 = uVar10 + uVar24 * 0x38;
              *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + 1;
              *(int *)(lVar25 + 0xc) = *(int *)(lVar25 + 0xc) + 1;
            }
            *(ulong *)(piVar18 + -5) = uVar10 + uVar24 * 0x38;
            uVar17 = uVar17 + 1;
            piVar18 = piVar18 + 0xe;
          } while (uVar35 != uVar17);
          if (uStack_84 != 0) {
            piVar18 = (int *)0x0;
            piVar27 = piVar6 + 4;
            do {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = (uint)piVar18 / uVar3;
              }
              *(undefined8 *)piVar27 = *(undefined8 *)(uVar7 + (ulong)uVar1 * 0x38 + 0x10);
              piVar18 = (int *)((long)piVar18 + 1);
              piVar27 = piVar27 + 0x12;
            } while (piVar34 != piVar18);
          }
          puVar40 = (uint *)((long)puVar8 + 0x44);
          do {
            puVar40[-1] = 0;
            *puVar40 = uVar31;
            puVar40 = puVar40 + 0x12;
            puVar36 = (undefined8 *)((long)puVar36 + -1);
          } while (puVar36 != (undefined8 *)0x0);
          uVar2 = 0x10;
          FUN_109badcb4();
          uVar3 = 0x12;
          FUN_109badcb4();
          uVar15 = 0x11;
          FUN_109badcb4();
          uVar4 = 0x14;
          FUN_109badcb4();
          uVar5 = 0x16;
          FUN_109badcb4();
          uVar1 = uStack_84;
          if (uVar15 == 0 && uVar3 == 0) {
            uVar1 = 0;
          }
          uVar11 = (ulong)uVar1;
          uVar39 = (uint)(uVar15 != 0 || uVar3 != 0);
          uVar24 = uVar29;
          if (uVar15 == 0) {
            uVar37 = 0;
          }
          else {
            uVar35 = uVar11;
            _calloc(uVar11,0x20);
            if (uVar35 == 0) {
              puVar40 = (uint *)0x0;
              uVar17 = 0;
              goto LAB_109bad20c;
            }
            if (uVar1 != 0) {
              uVar17 = 0;
              puVar40 = (uint *)(uVar35 + 0x10);
              uVar16 = 0;
              if (uVar2 << 2 != 0) {
                uVar16 = uVar15 / (uVar2 << 2);
              }
              do {
                puVar40[-4] = uVar15;
                puVar40[-3] = 4;
                puVar40[-2] = uVar16;
                puVar40[-1] = 1;
                puVar40[1] = 0;
                puVar40[2] = (uint)uVar17;
                uVar17 = uVar17 + 1;
                *puVar40 = uVar2;
                puVar40[3] = uVar39;
                puVar40 = puVar40 + 8;
              } while (uVar11 != uVar17);
            }
            uVar37 = uVar35;
            if (uStack_84 != 0) {
              puVar20 = (ulong *)(piVar6 + 8);
              piVar18 = piVar34;
              do {
                *puVar20 = uVar35;
                uVar35 = uVar35 + 0x20;
                piVar18 = (int *)((long)piVar18 + -1);
                puVar20 = puVar20 + 9;
              } while (piVar18 != (int *)0x0);
            }
          }
          uVar35 = uVar37;
          if (uVar3 == 0) {
            uVar11 = 0;
          }
          else {
            uVar17 = uVar11;
            _calloc(uVar11,0x20);
            if (uVar17 == 0) {
              puVar40 = (uint *)0x0;
              goto LAB_109bad20c;
            }
            if (uVar1 != 0) {
              uVar19 = 0;
              puVar40 = (uint *)(uVar17 + 0x10);
              uVar15 = 0;
              if (uVar2 << 2 != 0) {
                uVar15 = uVar3 / (uVar2 << 2);
              }
              do {
                uVar16 = (uint)uVar19;
                if (uVar39 == 0) {
                  uVar16 = 0;
                }
                puVar40[-4] = uVar3;
                puVar40[-3] = 4;
                puVar40[-2] = uVar15;
                puVar40[-1] = 1;
                *puVar40 = uVar2;
                puVar40[1] = 0;
                uVar19 = uVar19 + 1;
                puVar40[2] = uVar16;
                puVar40[3] = uVar39;
                puVar40 = puVar40 + 8;
              } while (uVar11 != uVar19);
            }
            uVar11 = uVar17;
            if (uStack_84 != 0) {
              puVar20 = (ulong *)(piVar6 + 10);
              piVar18 = piVar34;
              do {
                *puVar20 = uVar17;
                uVar17 = uVar17 + 0x20;
                piVar18 = (int *)((long)piVar18 + -1);
                puVar20 = puVar20 + 9;
              } while (piVar18 != (int *)0x0);
            }
          }
          uVar17 = uVar11;
          if (uVar4 == 0) {
            puVar12 = (uint *)0x0;
          }
          else {
            puVar12 = (uint *)0x1;
            _calloc(1,0x20);
            puVar40 = puVar12;
            if (puVar12 == (uint *)0x0) goto LAB_109bad20c;
            *puVar12 = uVar4;
            puVar12[1] = 8;
            uVar3 = 0;
            if (uVar2 << 3 != 0) {
              uVar3 = uVar4 / (uVar2 << 3);
            }
            puVar12[2] = uVar3;
            puVar12[3] = 1;
            puVar12[4] = uVar2;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = uStack_88;
            if (uStack_84 != 0) {
              piVar27 = piVar6 + 0xc;
              piVar18 = piVar34;
              do {
                *(uint **)piVar27 = puVar12;
                piVar18 = (int *)((long)piVar18 + -1);
                piVar27 = piVar27 + 0x12;
              } while (piVar18 != (int *)0x0);
            }
          }
          if (uVar5 == 0) {
            puVar13 = (uint *)0x0;
          }
          else {
            puVar13 = (uint *)0x1;
            _calloc(1,0x20);
            puVar40 = puVar12;
            if (puVar13 == (uint *)0x0) goto LAB_109bad20c;
            *puVar13 = uVar5;
            puVar13[1] = 0x10;
            uVar3 = 0;
            if (uVar2 << 4 != 0) {
              uVar3 = uVar5 / (uVar2 << 4);
            }
            puVar13[2] = uVar3;
            puVar13[3] = 1;
            puVar13[4] = uVar2;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = uStack_88;
            if (uStack_84 != 0) {
              piVar21 = piVar6 + 0xe;
              do {
                *(uint **)piVar21 = puVar13;
                piVar34 = (int *)((long)piVar34 + -1);
                piVar21 = piVar21 + 0x12;
              } while (piVar34 != (int *)0x0);
            }
          }
          uRam000000011382bf6c = uStack_8c;
          puVar22 = *(undefined4 **)(piVar6 + 0xe);
          if ((puVar22 == (undefined4 *)0x0) &&
             (puVar22 = *(undefined4 **)(piVar6 + 0xc), puVar22 == (undefined4 *)0x0)) {
            puVar22 = *(undefined4 **)(piVar6 + 10);
            uRam000000011382bf84 = 0;
            if (puVar22 != (undefined4 *)0x0) goto LAB_109bad8bc;
          }
          else {
LAB_109bad8bc:
            uRam000000011382bf84 = *puVar22;
          }
          DataMemoryBarrier(2,3);
          uRam000000011382bf10 = 1;
          piVar21 = (int *)0x0;
          uVar32 = 0;
          puVar33 = (undefined8 *)0x0;
          uVar35 = 0;
          uVar24 = 0;
          uVar38 = 0;
          uVar17 = 0;
          puVar40 = (uint *)0x0;
          piRam000000011382bf18 = piVar6;
          uRam000000011382bf20 = uVar7;
          uRam000000011382bf28 = uVar10;
          puRam000000011382bf30 = puVar8;
          uRam000000011382bf38 = uVar37;
          uRam000000011382bf40 = uVar11;
          puRam000000011382bf48 = puVar12;
          puRam000000011382bf50 = puVar13;
          uRam000000011382bf60 = uStack_84;
          uRam000000011382bf64 = uStack_88;
          uRam000000011382bf68 = uVar31;
          uRam000000011382bf70 = uVar1;
          uRam000000011382bf74 = uVar1;
          uRam000000011382bf78 = (uint)(uVar4 != 0);
          uRam000000011382bf7c = (uint)(uVar5 != 0);
          uRam000000011382bf88 = uVar29;
          uRam000000011382bf90 = uVar31;
          goto LAB_109bad20c;
        }
      }
      uVar35 = 0;
      uVar24 = uVar29;
      uVar17 = 0;
      puVar40 = (uint *)0x0;
      goto LAB_109bad20c;
    }
  }
  uVar32 = 0;
  puVar33 = (undefined8 *)0x0;
  uVar35 = 0;
  uVar24 = 0;
  uVar38 = 0;
  uVar17 = 0;
  puVar40 = (uint *)0x0;
LAB_109bad20c:
  _free(piVar21);
  _free(uVar32);
  _free(uVar38);
  _free(puVar33);
  _free(uVar24);
  _free(uVar35);
  _free(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar40);
  return;
}



/* Entry: 109bad8fc; end: 109badcb3;  */

uint * FUN_109bad8fc(undefined8 param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  uint *unaff_x20;
  uint *puVar8;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = (uint *)&uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined4 *)&UNK_10f5a3393;
  _sysctlbyname(&UNK_10f5a3393,0,&uStack_30,0,0);
  if ((int)puVar2 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)(uStack_30);
    puVar1 = (uint *)((long)&uStack_30 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    puVar2 = (undefined4 *)&UNK_10f5a3393;
    _sysctlbyname(&UNK_10f5a3393,puVar1,&uStack_30,0,0);
    unaff_x20 = puVar1;
    if ((int)puVar2 != 0) goto LAB_109bad988;
    _strlcpy(param_1,puVar1,0x30);
    puVar3 = (uint *)0x1;
  }
  else {
LAB_109bad988:
    ___error();
    _strerror(*puVar2);
    puVar3 = (uint *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  *(uint **)(puVar1 + -8) = unaff_x20;
  *(undefined8 *)(puVar1 + -6) = param_1;
  *(undefined1 **)(puVar1 + -4) = &stack0xfffffffffffffff0;
  puVar1[-2] = 0x9bad9dc;
  puVar1[-1] = 1;
  puVar8 = puVar1 + -0x14;
  *(undefined8 *)(puVar1 + -10) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (uint *)&DAT_10f3678c5;
  _sysctlbyname(&DAT_10f3678c5,0,puVar1 + -0x10,0,0);
  if ((int)puVar4 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar1 + -0x10));
    puVar8 = (uint *)((long)puVar1 + (-0x50 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    puVar4 = (uint *)&DAT_10f3678c5;
    _sysctlbyname(&DAT_10f3678c5,puVar8,puVar1 + -0x10,0,0);
    unaff_x20 = puVar8;
    if ((int)puVar4 == 0) {
      puVar1[-0x12] = 0;
      puVar1[-0x11] = 0;
      *(uint **)(puVar8 + -4) = puVar1 + -0x12;
      *(undefined1 **)(puVar8 + -8) = (undefined1 *)((long)puVar1 + -0x32);
      *(uint **)(puVar8 + -6) = puVar1 + -0x11;
      puVar4 = puVar8;
      _sscanf(puVar8,&UNK_10f5a33ac);
      if ((int)puVar4 == 3) {
        if (*(int *)((long)puVar1 + -0x32) == 0x6f685069 &&
            *(int *)((long)puVar1 + -0x2f) == 0x656e6f) {
          uVar5 = puVar1[-0x11] + 1;
          if (puVar1[-0x11] == 0xffffffff) goto LAB_109badb20;
LAB_109badb54:
          uVar6 = (ulong)uVar5;
          uVar7 = 0;
        }
        else if (*(int *)((long)puVar1 + -0x32) == 0x64615069 &&
                 *(char *)((long)puVar1 + -0x2e) == '\0') {
          uVar5 = puVar1[-0x11];
          if ((int)uVar5 < 5) {
            if (uVar5 == 2) {
              uVar7 = 0;
              uVar6 = 5;
            }
            else if (uVar5 == 3) {
              uVar5 = 5;
              if (3 < puVar1[-0x12]) {
                uVar5 = 6;
              }
              uVar6 = (ulong)uVar5;
              uVar7 = 0x58;
            }
            else {
              if (uVar5 != 4) goto LAB_109badb20;
              uVar7 = 0;
              uVar6 = 7;
            }
          }
          else {
            if (uVar5 == 5) {
              uVar5 = 0;
              if (2 < puVar1[-0x12]) {
                uVar5 = 0x58;
              }
              uVar7 = (ulong)uVar5;
              goto LAB_109badbd8;
            }
            if (uVar5 == 6) {
              uVar5 = 0x58;
              if (8 < puVar1[-0x12]) {
                uVar5 = 0;
              }
              uVar7 = (ulong)uVar5;
              uVar6 = 9;
            }
            else {
              if (uVar5 != 7) goto LAB_109badb20;
              uVar5 = 0x58;
              if (4 < puVar1[-0x12]) {
                uVar5 = 0;
              }
              uVar7 = (ulong)uVar5;
              uVar6 = 10;
            }
          }
        }
        else {
          if (*(int *)((long)puVar1 + -0x32) != 0x646f5069 ||
              *(char *)((long)puVar1 + -0x2e) != '\0') goto LAB_109badb20;
          uVar5 = puVar1[-0x11];
          if (uVar5 == 5) goto LAB_109badb54;
          if (uVar5 != 7) goto LAB_109badb20;
          uVar7 = 0;
LAB_109badbd8:
          uVar6 = 8;
        }
        *(ulong *)(puVar8 + -4) = uVar6;
        *(ulong *)(puVar8 + -2) = uVar7;
        puVar4 = puVar3;
        _snprintf(puVar3,0x30,&UNK_10f5a33c7);
        goto LAB_109badb20;
      }
    }
  }
  ___error();
  puVar4 = (uint *)(ulong)*puVar4;
  _strerror();
LAB_109badb20:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -10)) {
    return puVar4;
  }
  ___stack_chk_fail();
  *(uint **)(puVar8 + -8) = unaff_x20;
  *(uint **)(puVar8 + -6) = puVar3;
  *(uint **)(puVar8 + -4) = puVar1 + -4;
  puVar8[-2] = 0x9badc30;
  puVar8[-1] = 1;
  puVar8[-10] = 0;
  puVar8[-9] = 0;
  puVar8[-0xb] = 0;
  puVar1 = puVar4;
  _sysctlbyname();
  if ((int)puVar1 == 0) {
    if (*(long *)(puVar8 + -10) == 4) {
      _sysctlbyname(puVar4,puVar8 + -0xb,puVar8 + -10,0,0);
      return (uint *)(ulong)puVar8[-0xb];
    }
  }
  else {
    ___error();
    _strerror(*puVar1);
  }
  return (uint *)0x0;
}



/* Entry: 109badcb4; end: 109badd6b;  */

void FUN_109badcb4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_x8;
  int iVar3;
  undefined8 uStack_70;
  int iStack_64;
  undefined8 uStack_60;
  int iStack_54;
  undefined4 uStack_2c;
  long lStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_28 = 0;
  uStack_2c = 0;
  uStack_20 = 6;
  puVar2 = &uStack_20;
  uStack_1c = param_1;
  _sysctl(puVar2,2,0,&lStack_28,0,0);
  if ((int)puVar2 == 0) {
    if (lStack_28 == 4) {
      _sysctl(&uStack_20,2,&uStack_2c,&lStack_28,0,0);
      uVar1 = uStack_2c;
      goto LAB_109badd44;
    }
  }
  else {
    ___error();
    _strerror(*puVar2);
  }
  uVar1 = 0;
LAB_109badd44:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail(uVar1);
    iStack_54 = 1;
    uStack_60 = 4;
    puVar2 = (undefined4 *)&UNK_10f5a33d3;
    _sysctlbyname(&UNK_10f5a33d3,&iStack_54,&uStack_60,0,0);
    if ((int)puVar2 == 0) {
      if (iStack_54 < 1) {
        iStack_54 = 1;
      }
    }
    else {
      ___error();
      _strerror(*puVar2);
    }
    iStack_64 = 1;
    uStack_70 = 4;
    puVar2 = (undefined4 *)&UNK_10f5a33e6;
    _sysctlbyname(&UNK_10f5a33e6,&iStack_64,&uStack_70,0,0);
    if ((int)puVar2 == 0) {
      iVar3 = iStack_54;
      if (0 < iStack_64) {
        iVar3 = iStack_64;
      }
    }
    else {
      ___error();
      _strerror(*puVar2);
      iVar3 = iStack_64;
    }
    *extraout_x8 = 1;
    extraout_x8[1] = iStack_54;
    extraout_x8[2] = iVar3;
    *(undefined8 *)(extraout_x8 + 5) = 0;
    *(undefined8 *)(extraout_x8 + 3) = 0;
    *(undefined8 *)(extraout_x8 + 9) = 0;
    *(undefined8 *)(extraout_x8 + 7) = 0;
    return;
  }
  return;
}



/* Entry: 109badd6c; end: 109bade53;  */

void FUN_109badd6c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uStack_40;
  int iStack_34;
  undefined8 uStack_30;
  int iStack_24;
  
  iStack_24 = 1;
  uStack_30 = 4;
  puVar1 = (undefined4 *)&UNK_10f5a33d3;
  _sysctlbyname(&UNK_10f5a33d3,&iStack_24,&uStack_30,0,0);
  if ((int)puVar1 == 0) {
    if (iStack_24 < 1) {
      iStack_24 = 1;
    }
  }
  else {
    ___error();
    _strerror(*puVar1);
  }
  iStack_34 = 1;
  uStack_40 = 4;
  puVar1 = (undefined4 *)&UNK_10f5a33e6;
  _sysctlbyname(&UNK_10f5a33e6,&iStack_34,&uStack_40,0,0);
  if ((int)puVar1 == 0) {
    iVar2 = iStack_24;
    if (0 < iStack_34) {
      iVar2 = iStack_34;
    }
  }
  else {
    ___error();
    _strerror(*puVar1);
    iVar2 = iStack_34;
  }
  *param_1 = 1;
  param_1[1] = iStack_24;
  param_1[2] = iVar2;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 109bade54; end: 109bb0303;  */

void FUN_109bade54(long param_1,long *param_2)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  pcVar11 = *(code **)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0xc0);
  uVar12 = *(ulong *)(param_1 + 0x380);
  uVar13 = -*(long *)(param_1 + 0x348);
  lVar14 = *param_2;
  puVar2 = (ulong *)(param_2 + 0x10);
  do {
    uVar7 = *puVar2 - 1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = uVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while (uVar7 < uVar13) {
    lVar1 = lVar14 + 1;
    (*pcVar11)(uVar9,lVar14);
    do {
      uVar7 = *puVar2 - 1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      lVar14 = lVar1;
    } while (cVar4 != '\0');
  }
  uVar10 = param_2[0x11];
  uVar7 = (ulong)(uVar10 < uVar12);
  if (uVar7 < uVar12) {
    do {
      uVar8 = uVar7 + uVar10;
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar8 / uVar12;
      }
      lVar14 = param_1 + 0x3c0 + (uVar8 - uVar6 * uVar12) * 0x100;
      puVar2 = (ulong *)(lVar14 + 0x80);
      do {
        uVar8 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar8 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar8 - 1 < uVar13) {
        plVar3 = (long *)(lVar14 + 0x40);
        do {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = *plVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          (*pcVar11)(uVar9);
          do {
            uVar8 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        } while (uVar8 - 1 < uVar13);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar12);
  }
  DataMemoryBarrier(2,3);
  return;
}



/* Entry: 109bb0304; end: 109bb0567;  */

void FUN_109bb0304(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  
  pcVar12 = *(code **)(param_1 + 0x80);
  uVar10 = *(undefined8 *)(param_1 + 0xc0);
  plVar1 = param_2 + 0x10;
  lVar7 = *param_2;
  do {
    lVar9 = *plVar1;
    do {
      if (lVar9 == 0) {
        uVar11 = param_2[0x11];
        uVar13 = *(ulong *)(param_1 + 0x380);
        uVar14 = (ulong)(uVar11 < uVar13);
        if (uVar13 <= uVar14) {
LAB_109bb0418:
          DataMemoryBarrier(2,3);
          return;
        }
LAB_109bb03a0:
        uVar3 = uVar14 + uVar11;
        uVar6 = 0;
        if (uVar13 != 0) {
          uVar6 = uVar3 / uVar13;
        }
        lVar7 = param_1 + 0x3c0 + (uVar3 - uVar6 * uVar13) * 0x100;
        plVar1 = (long *)(lVar7 + 0x80);
        plVar2 = (long *)(lVar7 + 0x40);
        do {
          lVar7 = *plVar1;
          do {
            if (lVar7 == 0) {
              uVar14 = uVar14 + 1;
              if (uVar14 == uVar13) goto LAB_109bb0418;
              goto LAB_109bb03a0;
            }
            do {
              lVar9 = *plVar1;
              if (lVar9 != lVar7) {
                bVar5 = false;
                ClearExclusiveLocal();
                goto LAB_109bb03e8;
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar5 = true;
LAB_109bb03e8:
            lVar7 = lVar9;
          } while (!bVar5);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          (*pcVar12)(uVar10);
        } while( true );
      }
      do {
        lVar8 = *plVar1;
        if (lVar8 != lVar9) {
          bVar5 = false;
          ClearExclusiveLocal();
          goto LAB_109bb0364;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar5 = true;
LAB_109bb0364:
      lVar9 = lVar8;
    } while (!bVar5);
    (*pcVar12)(uVar10,lVar7);
    lVar7 = lVar7 + 1;
  } while( true );
}



/* Entry: 109bb0568; end: 109bb0917;  */

void FUN_109bb0568(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  
  pcVar16 = *(code **)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0xc0);
  lVar3 = *(long *)(param_1 + 200);
  uVar4 = *(ulong *)(param_1 + 0xd0);
  lVar14 = uVar4 * *param_2;
  plVar1 = param_2 + 0x10;
  do {
    lVar10 = *plVar1;
    do {
      if (lVar10 == 0) {
        uVar13 = param_2[0x11];
        uVar15 = *(ulong *)(param_1 + 0x380);
        uVar9 = (ulong)(uVar13 < uVar15);
        if (uVar15 <= uVar9) {
LAB_109bb06a4:
          DataMemoryBarrier(2,3);
          return;
        }
LAB_109bb061c:
        uVar11 = uVar9 + uVar13;
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar11 / uVar15;
        }
        lVar14 = param_1 + 0x3c0 + (uVar11 - uVar7 * uVar15) * 0x100;
        plVar1 = (long *)(lVar14 + 0x80);
        plVar2 = (long *)(lVar14 + 0x40);
        do {
          lVar14 = *plVar1;
          do {
            if (lVar14 == 0) {
              uVar9 = uVar9 + 1;
              if (uVar9 == uVar15) goto LAB_109bb06a4;
              goto LAB_109bb061c;
            }
            do {
              lVar10 = *plVar1;
              if (lVar10 != lVar14) {
                bVar6 = false;
                ClearExclusiveLocal();
                goto LAB_109bb0664;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar6 = true;
LAB_109bb0664:
            lVar14 = lVar10;
          } while (!bVar6);
          do {
            lVar14 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar14 = (lVar14 + -1) * uVar4;
          uVar11 = lVar3 - lVar14;
          if (uVar4 <= uVar11) {
            uVar11 = uVar4;
          }
          (*pcVar16)(uVar12,lVar14,uVar11);
        } while( true );
      }
      do {
        lVar8 = *plVar1;
        if (lVar8 != lVar10) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto LAB_109bb05d4;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar6 = true;
LAB_109bb05d4:
      lVar10 = lVar8;
    } while (!bVar6);
    uVar9 = lVar3 - lVar14;
    if (uVar4 <= uVar9) {
      uVar9 = uVar4;
    }
    (*pcVar16)(uVar12,lVar14,uVar9);
    lVar14 = lVar14 + uVar4;
  } while( true );
}



/* Entry: 109bb0918; end: 109bb0adf;  */

void FUN_109bb0918(long param_1,code *param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  char cStack_57;
  
  if (((param_1 == 0) || ((param_5 | param_4) < 2)) || (*(ulong *)(param_1 + 0x380) < 2)) {
    if ((param_6 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = fpcr;
      uVar2 = fpcr;
      fpcr = (ulong)((uint)uVar2 | 0x1080000);
    }
    if (param_4 != 0) {
      uVar4 = 0;
      do {
        if (param_5 != 0) {
          uVar5 = 0;
          do {
            (*param_2)(param_3,uVar4,uVar5);
            uVar5 = uVar5 + 1;
          } while (param_5 != uVar5);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != param_4);
    }
    if ((param_6 & 1) != 0) {
      fpcr = uVar10;
    }
  }
  else {
    if (param_5 - 1 == 0) {
      uStack_58 = 0;
      lStack_60 = 1;
      cStack_57 = '\0';
    }
    else {
      lVar3 = LZCOUNT(param_5 - 1);
      cStack_57 = '?' - (char)lVar3;
      uVar6 = param_5 << (LZCOUNT(param_5) & 0x3fU);
      uVar7 = (2L << ((ulong)~(uint)lVar3 & 0x3f)) - param_5 << (LZCOUNT(param_5) & 0x3fU);
      uVar5 = uVar6 >> 0x20;
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar7 / uVar5;
      }
      uVar8 = uVar7 - uVar4 * uVar5;
      do {
        if ((uVar4 >> 0x20 == 0) &&
           (uVar9 = uVar4 * (uVar6 & 0xffffffff),
           uVar9 < uVar8 << 0x20 || uVar9 - (uVar8 << 0x20) == 0)) break;
        uVar4 = uVar4 - 1;
        uVar8 = uVar8 + uVar5;
      } while (uVar8 >> 0x20 == 0);
      uVar7 = (uVar7 << 0x20) - uVar4 * uVar6;
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar7 / uVar5;
      }
      uVar7 = uVar7 - uVar8 * uVar5;
      do {
        if ((uVar8 >> 0x20 == 0) &&
           (uVar9 = uVar8 * (uVar6 & 0xffffffff),
           uVar9 < uVar7 << 0x20 || uVar9 - (uVar7 << 0x20) == 0)) break;
        uVar8 = uVar8 - 1;
        uVar7 = uVar7 + uVar5;
      } while (uVar7 >> 0x20 == 0);
      lStack_60 = (uVar8 & 0xffffffff | uVar4 << 0x20) + 1;
      uStack_58 = 1;
    }
    pcVar1 = (code *)0x109bae1fc;
    if (-*(ulong *)(param_1 + 0x380) <= param_5 * param_4) {
      pcVar1 = FUN_109bb0ae0;
    }
    uStack_68 = param_5;
    func_0x000109bb7010(param_1,pcVar1,&uStack_68,0x18,param_2,param_3,param_5 * param_4,param_6);
  }
  return;
}



/* Entry: 109bb0ae0; end: 109bb0c6f;  */

void FUN_109bb0ae0(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  
  pcVar19 = *(code **)(param_1 + 0x80);
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  uVar15 = *param_2;
  lVar3 = *(long *)(param_1 + 200);
  uVar4 = *(ulong *)(param_1 + 0xd0);
  bVar5 = *(byte *)(param_1 + 0xd8);
  bVar6 = *(byte *)(param_1 + 0xd9);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar4;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar15;
  lVar20 = SUB168(auVar9 * auVar11,8);
  uVar21 = (uVar15 - lVar20 >> ((ulong)bVar5 & 0x3f)) + lVar20 >> ((ulong)bVar6 & 0x3f);
  puVar2 = param_2 + 0x10;
  lVar20 = uVar15 - uVar21 * lVar3;
  do {
    uVar15 = *puVar2;
    do {
      if (uVar15 == 0) {
        uVar15 = param_2[0x11];
        uVar16 = *(ulong *)(param_1 + 0x380);
        uVar21 = (ulong)(uVar15 < uVar16);
        if (uVar16 <= uVar21) {
LAB_109bb0c4c:
          DataMemoryBarrier(2,3);
          return;
        }
LAB_109bb0bbc:
        uVar18 = uVar21 + uVar15;
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar18 / uVar16;
        }
        lVar20 = param_1 + 0x3c0 + (uVar18 - uVar13 * uVar16) * 0x100;
        plVar1 = (long *)(lVar20 + 0x80);
        puVar2 = (ulong *)(lVar20 + 0x40);
        do {
          lVar20 = *plVar1;
          do {
            if (lVar20 == 0) {
              uVar21 = uVar21 + 1;
              if (uVar21 == uVar16) goto LAB_109bb0c4c;
              goto LAB_109bb0bbc;
            }
            do {
              lVar17 = *plVar1;
              if (lVar17 != lVar20) {
                bVar8 = false;
                ClearExclusiveLocal();
                goto LAB_109bb0c04;
              }
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar20 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar8 = true;
LAB_109bb0c04:
            lVar20 = lVar17;
          } while (!bVar8);
          do {
            uVar18 = *puVar2 - 1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar18;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar18;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar4;
          lVar20 = SUB168(auVar10 * auVar12,8);
          uVar13 = (uVar18 - lVar20 >> ((ulong)bVar5 & 0x3f)) + lVar20 >> ((ulong)bVar6 & 0x3f);
          (*pcVar19)(uVar14,uVar13,uVar18 - uVar13 * lVar3);
        } while( true );
      }
      do {
        uVar16 = *puVar2;
        if (uVar16 != uVar15) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_109bb0b70;
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *puVar2 = uVar15 - 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar8 = true;
LAB_109bb0b70:
      uVar15 = uVar16;
    } while (!bVar8);
    (*pcVar19)(uVar14,uVar21,lVar20);
    if (lVar20 + 1 == lVar3) {
      uVar21 = uVar21 + 1;
      lVar20 = 0;
    }
    else {
      lVar20 = lVar20 + 1;
    }
  } while( true );
}



/* Entry: 109bb0c70; end: 109bb0e3b;  */

void FUN_109bb0c70(long param_1,code *param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  char cStack_57;
  
  if (((param_1 == 0) || ((param_5 | param_4) < 2)) || (*(ulong *)(param_1 + 0x380) < 2)) {
    if ((param_6 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = fpcr;
      uVar1 = fpcr;
      fpcr = (ulong)((uint)uVar1 | 0x1080000);
    }
    if (param_4 != 0) {
      uVar3 = 0;
      do {
        if (param_5 != 0) {
          uVar4 = 0;
          do {
            (*param_2)(param_3,0,uVar3,uVar4);
            uVar4 = uVar4 + 1;
          } while (param_5 != uVar4);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_4);
    }
    if ((param_6 & 1) != 0) {
      fpcr = uVar9;
    }
  }
  else {
    if (param_5 - 1 == 0) {
      uStack_58 = 0;
      lStack_60 = 1;
      cStack_57 = '\0';
    }
    else {
      lVar2 = LZCOUNT(param_5 - 1);
      cStack_57 = '?' - (char)lVar2;
      uVar5 = param_5 << (LZCOUNT(param_5) & 0x3fU);
      uVar6 = (2L << ((ulong)~(uint)lVar2 & 0x3f)) - param_5 << (LZCOUNT(param_5) & 0x3fU);
      uVar4 = uVar5 >> 0x20;
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar6 / uVar4;
      }
      uVar7 = uVar6 - uVar3 * uVar4;
      do {
        if ((uVar3 >> 0x20 == 0) &&
           (uVar8 = uVar3 * (uVar5 & 0xffffffff),
           uVar8 < uVar7 << 0x20 || uVar8 - (uVar7 << 0x20) == 0)) break;
        uVar3 = uVar3 - 1;
        uVar7 = uVar7 + uVar4;
      } while (uVar7 >> 0x20 == 0);
      uVar6 = (uVar6 << 0x20) - uVar3 * uVar5;
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar7 * uVar4;
      do {
        if ((uVar7 >> 0x20 == 0) &&
           (uVar8 = uVar7 * (uVar5 & 0xffffffff),
           uVar8 < uVar6 << 0x20 || uVar8 - (uVar6 << 0x20) == 0)) break;
        uVar7 = uVar7 - 1;
        uVar6 = uVar6 + uVar4;
      } while (uVar6 >> 0x20 == 0);
      lStack_60 = (uVar7 & 0xffffffff | uVar3 << 0x20) + 1;
      uStack_58 = 1;
    }
    uVar9 = 0x109bae394;
    if (-*(ulong *)(param_1 + 0x380) <= param_5 * param_4) {
      uVar9 = 0x109bb0e3c;
    }
    uStack_68 = param_5;
    func_0x000109bb7010(param_1,uVar9,&uStack_68,0x18,param_2,param_3,param_5 * param_4,param_6);
  }
  return;
}



/* Entry: 109bb0e3c; end: 109bb7427;  */

void FUN_109bb0e3c(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  
  pcVar18 = *(code **)(param_1 + 0x80);
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  uVar15 = *param_2;
  lVar3 = *(long *)(param_1 + 200);
  uVar4 = *(ulong *)(param_1 + 0xd0);
  bVar5 = *(byte *)(param_1 + 0xd8);
  bVar6 = *(byte *)(param_1 + 0xd9);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar4;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar15;
  lVar19 = SUB168(auVar9 * auVar11,8);
  uVar21 = (uVar15 - lVar19 >> ((ulong)bVar5 & 0x3f)) + lVar19 >> ((ulong)bVar6 & 0x3f);
  uVar20 = param_2[0x11];
  param_2 = param_2 + 0x10;
  lVar19 = uVar15 - uVar21 * lVar3;
  do {
    uVar15 = *param_2;
    do {
      if (uVar15 == 0) {
        uVar15 = *(ulong *)(param_1 + 0x380);
        uVar21 = (ulong)(uVar20 < uVar15);
        if (uVar15 <= uVar21) {
LAB_109bb0fac:
          DataMemoryBarrier(2,3);
          return;
        }
LAB_109bb0f18:
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = (uVar21 + uVar20) / uVar15;
        }
        lVar19 = param_1 + 0x3c0 + ((uVar21 + uVar20) - uVar16 * uVar15) * 0x100;
        plVar1 = (long *)(lVar19 + 0x80);
        puVar2 = (ulong *)(lVar19 + 0x40);
        do {
          lVar19 = *plVar1;
          do {
            if (lVar19 == 0) {
              uVar21 = uVar21 + 1;
              if (uVar21 == uVar15) goto LAB_109bb0fac;
              goto LAB_109bb0f18;
            }
            do {
              lVar17 = *plVar1;
              if (lVar17 != lVar19) {
                bVar8 = false;
                ClearExclusiveLocal();
                goto LAB_109bb0f60;
              }
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar19 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar8 = true;
LAB_109bb0f60:
            lVar19 = lVar17;
          } while (!bVar8);
          do {
            uVar16 = *puVar2 - 1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *puVar2 = uVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar16;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar4;
          lVar19 = SUB168(auVar10 * auVar12,8);
          uVar13 = (uVar16 - lVar19 >> ((ulong)bVar5 & 0x3f)) + lVar19 >> ((ulong)bVar6 & 0x3f);
          (*pcVar18)(uVar14,uVar20,uVar13,uVar16 - uVar13 * lVar3);
        } while( true );
      }
      do {
        uVar16 = *param_2;
        if (uVar16 != uVar15) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_109bb0ecc;
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar8) {
          *param_2 = uVar15 - 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar8 = true;
LAB_109bb0ecc:
      uVar15 = uVar16;
    } while (!bVar8);
    (*pcVar18)(uVar14,uVar20,uVar21,lVar19);
    if (lVar19 + 1 == lVar3) {
      uVar21 = uVar21 + 1;
      lVar19 = 0;
    }
    else {
      lVar19 = lVar19 + 1;
    }
  } while( true );
}



/* Entry: 109bb7428; end: 109c07557;  */

void FUN_109bb7428(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(param_2);
  return;
}



/* Entry: 109c07558; end: 109c075df;  */

long FUN_109c07558(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x50);
  if (0 < *(int *)(param_1 + 0x3c)) {
    if (*(long *)(*(long *)(param_1 + 0x40) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c075e0; end: 109c075e3;  */

long FUN_109c075e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x50);
  if (0 < *(int *)(param_1 + 0x3c)) {
    if (*(long *)(*(long *)(param_1 + 0x40) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c075e4; end: 109c075f7;  */

void FUN_109c075e4(void)

{
  FUN_109c07558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c075f8; end: 109c07673;  */

undefined ** FUN_109c075f8(void)

{
  return &PTR_DAT_110b2bb18;
}



/* Entry: 109c07674; end: 109c07e4f;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109c07674(long param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar14 = *(uint *)(param_1 + 0x10);
  if ((uVar14 >> 1 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x58),param_2);
    param_2 = pbVar5;
  }
  if ((uVar14 >> 2 & 1) != 0) {
    pbVar5 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x5c),param_2);
    param_2 = pbVar5;
  }
  if ((uVar14 >> 3 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x60),param_2);
    param_2 = pbVar5;
  }
  pbVar5 = param_2;
  if ((uVar14 >> 4 & 1) != 0) {
    pbVar5 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 100),param_2);
  }
  iVar20 = *(int *)(param_1 + 0x18);
  if (0 < iVar20) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar12 + ((int)pbVar5 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar5);
      iVar20 = *(int *)(param_1 + 0x18);
    }
    uVar13 = iVar20 * 4;
    uVar15 = (ulong)uVar13;
    pbVar4 = pbVar5 + 1;
    *pbVar5 = 0x2a;
    uVar22 = uVar15;
    uVar7 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar5 = pbVar4;
        uVar6 = (uint)uVar22;
        pbVar4 = pbVar5 + 1;
        *pbVar5 = (byte)uVar22 | 0x80;
        uVar22 = uVar22 >> 7;
        uVar7 = (uint)uVar22;
      } while (uVar6 >> 0xe != 0);
    }
    pbVar5 = pbVar5 + 2;
    *pbVar4 = (byte)uVar7;
    lVar16 = *(long *)(param_1 + 0x20);
    uVar21 = (ulong)(int)uVar13;
    uVar22 = uVar15;
    if ((*(long *)param_3 - (long)pbVar5 < (long)(int)uVar13) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10), uVar22 = uVar21,
       (int)pbVar4 < (int)uVar13)) {
      pbVar12 = param_3 + 0x10;
      do {
        iVar20 = (int)pbVar4;
        _memcpy(pbVar5,lVar16,(long)iVar20);
        uVar13 = (int)uVar15 - iVar20;
        uVar15 = (ulong)uVar13;
        lVar16 = lVar16 + iVar20;
        pbVar11 = pbVar5 + iVar20;
        pbVar8 = *(byte **)param_3;
        do {
          pbVar5 = pbVar12;
          pbVar4 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c07d00:
            param_3[0x38] = 1;
LAB_109c07ce0:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar23 = *(undefined8 *)pbVar8;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar8 + 8);
              *(undefined8 *)pbVar12 = uVar23;
              *(byte **)(param_3 + 8) = pbVar8;
              goto LAB_109c07ce0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar12,(long)pbVar8 - (long)pbVar12);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109c07d00;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar23 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar12 = uVar23;
              *(byte **)param_3 = pbVar12 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar12 + (int)uStack_64;
            }
            else {
              uVar23 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar23;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar5 = pbStack_70;
            }
          }
          pbVar11 = pbVar5 + ((int)pbVar11 - (int)pbVar8);
          pbVar8 = pbVar4;
          pbVar5 = pbVar11;
        } while (pbVar4 <= pbVar11);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar5);
      } while ((int)pbVar4 < (int)uVar13);
      uVar21 = (ulong)(int)uVar13;
      uVar22 = uVar21;
    }
    _memcpy(pbVar5,lVar16,uVar22);
    pbVar5 = pbVar5 + uVar21;
  }
  if ((uVar14 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c280a0(param_3,6,*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc,pbVar5);
    pbVar5 = pbVar4;
  }
  if ((uVar14 >> 7 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar12 + ((int)pbVar5 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar5);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    *pbVar5 = 0x3d;
    *(undefined4 *)(pbVar5 + 1) = uVar1;
    pbVar5 = pbVar5 + 5;
  }
  pbVar4 = pbVar5;
  if ((uVar14 >> 5 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000108b32050(param_3,*(undefined4 *)(param_1 + 0x68),pbVar5);
  }
  uVar13 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar13) {
    uVar22 = 0;
    pbVar5 = param_3 + 0x10;
    do {
      pbVar12 = pbVar4;
      pbVar11 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar4) {
        do {
          pbVar12 = pbVar5;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c077c8:
            param_3[0x38] = 1;
LAB_109c07868:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar8 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar23 = *(undefined8 *)pbVar11;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar11 + 8);
              *(undefined8 *)pbVar5 = uVar23;
              *(byte **)(param_3 + 8) = pbVar11;
              goto LAB_109c07868;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar5,(long)pbVar11 - (long)pbVar5);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109c077c8;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar23 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar5 = uVar23;
              pbVar8 = pbVar5 + (int)uStack_64;
              *(byte **)param_3 = pbVar8;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar23 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar23;
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar8;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar12 = pbStack_70;
            }
          }
          pbVar4 = pbVar12 + ((int)pbVar4 - (int)pbVar11);
          pbVar12 = pbVar4;
          pbVar11 = pbVar8;
        } while (pbVar8 <= pbVar4);
      }
      uVar7 = *(uint *)(*(long *)(param_1 + 0x30) + uVar22 * 4);
      uVar21 = (ulong)(int)uVar7;
      pbVar11 = pbVar12 + 1;
      *pbVar12 = 0x48;
      uVar15 = uVar21;
      pbVar4 = pbVar11;
      if (0x7f < uVar7) {
        do {
          pbVar11 = pbVar4 + 1;
          *pbVar4 = (byte)uVar15 | 0x80;
          uVar21 = uVar15 >> 7;
          uVar9 = uVar15 >> 0xe;
          uVar15 = uVar21;
          pbVar4 = pbVar11;
        } while (uVar9 != 0);
      }
      pbVar4 = pbVar11 + 1;
      *pbVar11 = (byte)uVar21;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar13);
  }
  uVar13 = *(uint *)(param_1 + 0x48);
  if (0 < (int)uVar13) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar12 + ((int)pbVar4 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar4);
    }
    pbVar5 = pbVar4 + 1;
    *pbVar4 = 0x52;
    if (0x7f < uVar13) {
      do {
        pbVar4 = pbVar5;
        pbVar5 = pbVar4 + 1;
        *pbVar4 = (byte)uVar13 | 0x80;
        uVar7 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar7 != 0);
    }
    pbVar4 = pbVar4 + 2;
    *pbVar5 = (byte)uVar13;
    puVar17 = *(uint **)(param_1 + 0x40);
    iVar20 = *(int *)(param_1 + 0x38);
    pbVar5 = param_3 + 0x10;
    puVar18 = puVar17;
    do {
      pbVar12 = pbVar4;
      pbVar11 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar4) {
        do {
          pbVar12 = pbVar5;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c07928:
            param_3[0x38] = 1;
LAB_109c079c0:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar8 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar23 = *(undefined8 *)pbVar11;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar11 + 8);
              *(undefined8 *)pbVar5 = uVar23;
              *(byte **)(param_3 + 8) = pbVar11;
              goto LAB_109c079c0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar5,(long)pbVar11 - (long)pbVar5);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109c07928;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar23 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar5 = uVar23;
              *(byte **)param_3 = pbVar5 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar8 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar23 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar23;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar12 = pbStack_70;
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar4 = pbVar12 + ((int)pbVar4 - (int)pbVar11);
          pbVar12 = pbVar4;
          pbVar11 = pbVar8;
        } while (pbVar8 <= pbVar4);
      }
      puVar19 = puVar18 + 1;
      uVar15 = (ulong)(int)*puVar18;
      uVar22 = uVar15;
      pbVar4 = pbVar12;
      if (0x7f < *puVar18) {
        do {
          pbVar12 = pbVar4 + 1;
          *pbVar4 = (byte)uVar22 | 0x80;
          uVar15 = uVar22 >> 7;
          uVar21 = uVar22 >> 0xe;
          uVar22 = uVar15;
          pbVar4 = pbVar12;
        } while (uVar21 != 0);
      }
      pbVar4 = pbVar12 + 1;
      *pbVar12 = (byte)uVar15;
      puVar18 = puVar19;
    } while (puVar19 < puVar17 + iVar20);
  }
  if ((uVar14 >> 6 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar12 + ((int)pbVar4 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar4);
    }
    bVar2 = *(byte *)(param_1 + 0x6c);
    *pbVar4 = 0x58;
    pbVar4[1] = bVar2;
    pbVar4 = pbVar4 + 2;
  }
  if ((uVar14 >> 8 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar12 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar12 + ((int)pbVar4 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar4);
    }
    uVar14 = *(uint *)(param_1 + 0x74);
    pbVar12 = pbVar4 + 1;
    *pbVar4 = 0x60;
    pbVar5 = pbVar12;
    uVar13 = uVar14;
    if (0x7f < uVar14) {
      do {
        pbVar12 = pbVar5 + 1;
        *pbVar5 = (byte)uVar13 | 0x80;
        uVar14 = uVar13 >> 7;
        uVar7 = uVar13 >> 0xe;
        pbVar5 = pbVar12;
        uVar13 = uVar14;
      } while (uVar7 != 0);
    }
    pbVar4 = pbVar12 + 1;
    *pbVar12 = (byte)uVar14;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar22 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar15 = (ulong)*(char *)(uVar22 + 0x1f);
    if ((long)uVar15 < 0) {
      lVar16 = *(long *)(uVar22 + 8);
      uVar15 = (ulong)*(uint *)(uVar22 + 0x10);
    }
    else {
      lVar16 = uVar22 + 8;
    }
    uVar14 = (uint)uVar15;
    if (*(long *)param_3 - (long)pbVar4 < (long)(int)uVar14) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar5 < (int)uVar14) {
        do {
          iVar20 = (int)pbVar5;
          _memcpy(pbVar4,lVar16,(long)iVar20);
          uVar14 = (int)uVar15 - iVar20;
          uVar15 = (ulong)uVar14;
          lVar16 = lVar16 + iVar20;
          pbVar5 = *(byte **)param_3;
          pbVar12 = pbVar4 + iVar20;
          do {
            pbVar4 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar4 = param_3;
            func_0x000107c303dc();
            pbVar12 = pbVar4 + ((int)pbVar12 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar4 = pbVar12;
          } while (pbVar5 <= pbVar12);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar4);
        } while ((int)pbVar5 < (int)uVar14);
      }
      _memcpy(pbVar4,lVar16,(long)(int)uVar14);
      pbVar4 = pbVar4 + (int)uVar14;
    }
    else {
      _memcpy(pbVar4,lVar16,uVar15 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar14;
    }
  }
  return pbVar4;
}



/* Entry: 109c07e50; end: 109c0808f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_109c07e50(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar5 = 0;
  if (uVar1 != 0) {
    lVar5 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((int)uVar2 < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    uVar10 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    piVar8 = *(int **)(param_1 + 0x30);
    do {
      lVar6 = (ulong)((int)LZCOUNT((long)*piVar8) * -9 + 0x280U >> 6) + lVar6;
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 1;
    } while (uVar10 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  if ((int)uVar3 < 1) {
    lVar7 = 0;
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    lVar7 = 0;
    uVar10 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    piVar8 = *(int **)(param_1 + 0x40);
    do {
      lVar7 = (ulong)((int)LZCOUNT((long)*piVar8) * -9 + 0x280U >> 6) + lVar7;
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 1;
    } while (uVar10 != 0);
    *(int *)(param_1 + 0x48) = (int)lVar7;
    if (lVar7 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar5 = lVar5 + (ulong)uVar1 * 4 + (ulong)uVar2 + lVar6 + lVar7 + lVar9;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar10 + 0x17);
      uVar10 = *(ulong *)(uVar10 + 8);
      if (-1 < (char)bVar4) {
        uVar10 = (ulong)bVar4;
      }
      lVar5 = lVar5 + uVar10 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x5c)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 100)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    lVar5 = lVar5 + ((ulong)(uVar1 >> 5) & 2);
    if ((uVar1 & 0x80) != 0) {
      lVar5 = lVar5 + 5;
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x74)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar10 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar10 + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 109c08090; end: 109c082bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c08090(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xff) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x50);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x50,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
  }
  if ((uVar8 >> 8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 109c082bc; end: 109c083af;  */

void FUN_109c082bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b2b9e8;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  param_1[0x19] = 0;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_2;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_2;
  param_1[0x1f] = &DAT_11383d918;
  param_1[0x20] = &DAT_11383d918;
  param_1[0x21] = &DAT_11383d918;
  param_1[0x3a] = 0x100000001;
  param_1[0x3b] = 0x53f000000;
  param_1[0x3c] = 0x3f4000003f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x1ec) = 0x101;
  param_1[0x3e] = 0x3727c5ac00000001;
  param_1[0x3f] = 0x100000001;
  param_1[0x40] = 0x83f800000;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  return;
}



/* Entry: 109c083b0; end: 109c0877b;  */

undefined8 * FUN_109c083b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2b9e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  param_1[2] = uVar3;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  if (*(int *)(param_3 + 0x28) != 0) {
    func_0x000107c303c4(param_1 + 4,param_3 + 0x20);
  }
  FUN_109345cec(param_1 + 7,param_2,param_3 + 0x38);
  FUN_109311ab0(param_1 + 9,param_2,param_3 + 0x48);
  FUN_109345cec(param_1 + 0xb,param_2,param_3 + 0x58);
  FUN_109345cec(param_1 + 0xd,param_2,param_3 + 0x68);
  FUN_109345cec(param_1 + 0xf,param_2,param_3 + 0x78);
  FUN_109345cec(param_1 + 0x11,param_2,param_3 + 0x88);
  FUN_109311ab0(param_1 + 0x13,param_2,param_3 + 0x98);
  FUN_109311ab0(param_1 + 0x15,param_2,param_3 + 0xa8);
  FUN_109311ab0(param_1 + 0x17,param_2,param_3 + 0xb8);
  FUN_109311ab0(param_1 + 0x19,param_2,param_3 + 200);
  FUN_109311ab0(param_1 + 0x1b,param_2,param_3 + 0xd8);
  FUN_109311ab0(param_1 + 0x1d,param_2,param_3 + 0xe8);
  puVar4 = (ulong *)(param_3 + 0xf8);
  puVar1 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar1 = puVar4;
  }
  param_1[0x1f] = puVar1;
  uVar2 = *(ulong *)(param_3 + 0x100);
  if ((uVar2 & 3) != 0) {
    uVar2 = param_3 + 0x100;
    func_0x000107c30244(uVar2,param_2);
  }
  param_1[0x20] = uVar2;
  uVar2 = *(ulong *)(param_3 + 0x108);
  if ((uVar2 & 3) != 0) {
    uVar2 = param_3 + 0x108;
    func_0x000107c30244(uVar2,param_2);
  }
  param_1[0x21] = uVar2;
  if ((*(byte *)(param_1 + 2) >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_109c0fcd4(param_2,*(undefined8 *)(param_3 + 0x110));
  }
  param_1[0x22] = param_2;
  uVar5 = *(undefined8 *)(param_3 + 0x120);
  uVar3 = *(undefined8 *)(param_3 + 0x118);
  uVar6 = *(undefined8 *)(param_3 + 0x128);
  uVar8 = *(undefined8 *)(param_3 + 0x140);
  uVar7 = *(undefined8 *)(param_3 + 0x138);
  param_1[0x26] = *(undefined8 *)(param_3 + 0x130);
  param_1[0x25] = uVar6;
  param_1[0x28] = uVar8;
  param_1[0x27] = uVar7;
  param_1[0x24] = uVar5;
  param_1[0x23] = uVar3;
  uVar5 = *(undefined8 *)(param_3 + 0x150);
  uVar3 = *(undefined8 *)(param_3 + 0x148);
  uVar7 = *(undefined8 *)(param_3 + 0x160);
  uVar6 = *(undefined8 *)(param_3 + 0x158);
  uVar8 = *(undefined8 *)(param_3 + 0x168);
  uVar10 = *(undefined8 *)(param_3 + 0x180);
  uVar9 = *(undefined8 *)(param_3 + 0x178);
  param_1[0x2e] = *(undefined8 *)(param_3 + 0x170);
  param_1[0x2d] = uVar8;
  param_1[0x30] = uVar10;
  param_1[0x2f] = uVar9;
  param_1[0x2a] = uVar5;
  param_1[0x29] = uVar3;
  param_1[0x2c] = uVar7;
  param_1[0x2b] = uVar6;
  uVar5 = *(undefined8 *)(param_3 + 400);
  uVar3 = *(undefined8 *)(param_3 + 0x188);
  uVar7 = *(undefined8 *)(param_3 + 0x1a0);
  uVar6 = *(undefined8 *)(param_3 + 0x198);
  uVar8 = *(undefined8 *)(param_3 + 0x1a8);
  uVar10 = *(undefined8 *)(param_3 + 0x1c0);
  uVar9 = *(undefined8 *)(param_3 + 0x1b8);
  param_1[0x36] = *(undefined8 *)(param_3 + 0x1b0);
  param_1[0x35] = uVar8;
  param_1[0x38] = uVar10;
  param_1[0x37] = uVar9;
  param_1[0x32] = uVar5;
  param_1[0x31] = uVar3;
  param_1[0x34] = uVar7;
  param_1[0x33] = uVar6;
  uVar5 = *(undefined8 *)(param_3 + 0x1d0);
  uVar3 = *(undefined8 *)(param_3 + 0x1c8);
  uVar7 = *(undefined8 *)(param_3 + 0x1e0);
  uVar6 = *(undefined8 *)(param_3 + 0x1d8);
  uVar8 = *(undefined8 *)(param_3 + 0x1e8);
  uVar10 = *(undefined8 *)(param_3 + 0x200);
  uVar9 = *(undefined8 *)(param_3 + 0x1f8);
  param_1[0x3e] = *(undefined8 *)(param_3 + 0x1f0);
  param_1[0x3d] = uVar8;
  param_1[0x40] = uVar10;
  param_1[0x3f] = uVar9;
  param_1[0x3a] = uVar5;
  param_1[0x39] = uVar3;
  param_1[0x3c] = uVar7;
  param_1[0x3b] = uVar6;
  return param_1;
}



/* Entry: 109c0877c; end: 109c087d7;  */

long FUN_109c0877c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0xf8);
  func_0x000107c30258(param_1 + 0x100);
  func_0x000107c30258(param_1 + 0x108);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_109c07558();
    __ZdlPv();
  }
  FUN_109c0f854(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c087d8; end: 109c087db;  */

long FUN_109c087d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0xf8);
  func_0x000107c30258(param_1 + 0x100);
  func_0x000107c30258(param_1 + 0x108);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_109c07558();
    __ZdlPv();
  }
  FUN_109c0f854(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c087dc; end: 109c087ef;  */

void FUN_109c087dc(void)

{
  FUN_109c0877c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c087f0; end: 109c087fb;  */

undefined ** FUN_109c087f0(void)

{
  return &PTR_DAT_110b2bb50;
}



/* Entry: 109c087fc; end: 109c08a3b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c087fc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    func_0x0001053936e4(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xf8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x108) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000109c07604(*(undefined8 *)(param_1 + 0x110));
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if ((uVar1 & 0xff0000) != 0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (uVar1 >> 0x18 != 0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 0xff) != 0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x19d) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined8 *)(param_1 + 0x1ad) = 0;
    *(undefined8 *)(param_1 + 0x1a5) = 0;
    *(undefined8 *)(param_1 + 0x1b4) = 0;
  }
  if ((uVar1 & 0xff0000) != 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined8 *)(param_1 + 0x1c4) = 0;
    *(undefined8 *)(param_1 + 0x1bc) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0x100000001;
  }
  if (uVar1 >> 0x18 != 0) {
    *(undefined8 *)(param_1 + 0x1d8) = 0x53f000000;
    *(undefined8 *)(param_1 + 0x1e0) = 0x3f4000003f800000;
    *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
    *(undefined2 *)(param_1 + 0x1ec) = 0x101;
    *(undefined4 *)(param_1 + 0x1f0) = 1;
  }
  if ((*(byte *)(param_1 + 0x18) & 0x1f) != 0) {
    *(undefined4 *)(param_1 + 500) = 0x3727c5ac;
    *(undefined8 *)(param_1 + 0x1f8) = 0x100000001;
    *(undefined8 *)(param_1 + 0x200) = 0x83f800000;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar3 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      *(byte *)puVar3 = 0;
      *(byte *)((long)puVar3 + 0x17) = 0;
      return;
    }
    *(undefined1 *)*puVar3 = 0;
    puVar3[1] = 0;
    return;
  }
  return;
}



/* Entry: 109c08a3c; end: 109c0c66f;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109c08a3c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar19 = *(uint *)(param_1 + 0x10);
  if ((uVar19 & 1) != 0) {
    pbVar9 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0xf8) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar9;
  }
  if ((uVar19 >> 1 & 1) != 0) {
    pbVar9 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar9;
  }
  if ((uVar19 >> 4 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x118);
    pbVar17 = param_2 + 1;
    *param_2 = 0x18;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  if ((*(byte *)(param_1 + 0x17) >> 5 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1ec);
    *param_2 = 0x20;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  uVar19 = *(uint *)(param_1 + 0x10);
  if ((uVar19 >> 5 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x11c);
    pbVar17 = param_2 + 1;
    *param_2 = 0x38;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 6 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x120);
    pbVar17 = param_2 + 1;
    *param_2 = 0x40;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if ((uVar19 >> 0x16 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1d0);
    pbVar17 = param_2 + 1;
    *param_2 = 0x48;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0x17 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x1d4);
    pbVar17 = param_2 + 1;
    *param_2 = 0x50;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  if (*(char *)(param_1 + 0x10) < '\0') {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x124);
    uVar10 = (ulong)(int)uVar19;
    pbVar17 = param_2 + 1;
    *param_2 = 0x58;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if ((uVar19 >> 0x18 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1d8);
    *param_2 = 0x65;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar19 >> 0x19 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1dc);
    pbVar17 = param_2 + 1;
    *param_2 = 0x68;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0x1a & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1e0);
    *param_2 = 0x75;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar19 >> 0x1b & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1e4);
    *param_2 = 0x7d;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x128);
    param_2[0] = 0x85;
    param_2[1] = 1;
    *(undefined4 *)(param_2 + 2) = uVar2;
    param_2 = param_2 + 6;
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if ((uVar19 >> 0x1c & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1e8);
    param_2[0] = 0xb5;
    param_2[1] = 1;
    *(undefined4 *)(param_2 + 2) = uVar2;
    param_2 = param_2 + 6;
  }
  iVar21 = *(int *)(param_1 + 0x28);
  if (iVar21 != 0) {
    iVar20 = 0;
    pbVar9 = param_2;
    do {
      uVar11 = *(ulong *)(param_1 + 0x20);
      puVar1 = (ulong *)(param_1 + 0x20);
      if ((uVar11 & 1) != 0) {
        puVar1 = (ulong *)(uVar11 + (long)iVar20 * 8 + 7);
      }
      param_2 = (byte *)0x32;
      func_0x000107c303cc(0x32,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar9,param_3);
      iVar20 = iVar20 + 1;
      pbVar9 = param_2;
    } while (iVar21 != iVar20);
  }
  if ((int)uVar19 < 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x1f0);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x88;
    param_2[1] = 4;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  uVar19 = *(uint *)(param_1 + 0x10);
  if ((uVar19 >> 9 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 300);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x90;
    param_2[1] = 4;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 10 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x130);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x98;
    param_2[1] = 4;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0xb & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x134);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa0;
    param_2[1] = 4;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0xc & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x138);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa8;
    param_2[1] = 4;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0xd & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x13c);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xb0;
    param_2[1] = 4;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0xe & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x140);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xb8;
    param_2[1] = 4;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0xf & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x144);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xc0;
    param_2[1] = 4;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  uVar7 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c08f34:
            param_3[0x38] = 1;
LAB_109c08fd4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c08fd4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c08f34;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0x40) + uVar11 * 4);
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 200;
      pbVar17[1] = 4;
      pbVar17 = pbVar18;
      uVar6 = uVar8;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar6 | 0x80;
          uVar8 = uVar6 >> 7;
          uVar4 = uVar6 >> 0xe;
          pbVar17 = pbVar18;
          uVar6 = uVar8;
        } while (uVar4 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar8;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  uVar7 = *(uint *)(param_1 + 0x48);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c09078:
            param_3[0x38] = 1;
LAB_109c09118:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c09118;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c09078;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0x50) + uVar11 * 4);
      uVar12 = (ulong)(int)uVar8;
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xd0;
      pbVar17[1] = 4;
      uVar10 = uVar12;
      pbVar17 = pbVar18;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar10 | 0x80;
          uVar12 = uVar10 >> 7;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar12;
          pbVar17 = pbVar18;
        } while (uVar14 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  if ((uVar19 >> 0x10 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x148);
    uVar10 = (ulong)(int)uVar19;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xd8;
    param_2[1] = 4;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 500);
    param_2[0] = 0xe5;
    param_2[1] = 4;
    *(undefined4 *)(param_2 + 2) = uVar2;
    param_2 = param_2 + 6;
  }
  uVar19 = *(uint *)(param_1 + 0x10);
  if ((uVar19 >> 0x11 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x14c);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xe8;
    param_2[1] = 4;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0x12 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x150);
    param_2[0] = 0xfd;
    param_2[1] = 4;
    *(undefined4 *)(param_2 + 2) = uVar2;
    param_2 = param_2 + 6;
  }
  if ((uVar19 >> 0x13 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x154);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0x80;
    param_2[1] = 5;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0x14 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x158);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x88;
    param_2[1] = 5;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x15c);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x90;
    param_2[1] = 5;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0x16 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x160);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x98;
    param_2[1] = 5;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0x17 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x164);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa0;
    param_2[1] = 5;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x1f8);
    uVar10 = (ulong)(int)uVar19;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa8;
    param_2[1] = 5;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  uVar19 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar19) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c09388:
            param_3[0x38] = 1;
LAB_109c09420:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c09420;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c09388;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar13 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar7 = *(uint *)(*(long *)(param_1 + 0x60) + uVar11 * 4);
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xb0;
      pbVar17[1] = 5;
      pbVar17 = pbVar18;
      uVar8 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar6 = uVar8 >> 0xe;
          pbVar17 = pbVar18;
          uVar8 = uVar7;
        } while (uVar6 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar7;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar19);
  }
  uVar19 = *(uint *)(param_1 + 0x68);
  if (0 < (int)uVar19) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c094c0:
            param_3[0x38] = 1;
LAB_109c09558:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c09558;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c094c0;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar13 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar7 = *(uint *)(*(long *)(param_1 + 0x70) + uVar11 * 4);
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xb8;
      pbVar17[1] = 5;
      pbVar17 = pbVar18;
      uVar8 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar6 = uVar8 >> 0xe;
          pbVar17 = pbVar18;
          uVar8 = uVar7;
        } while (uVar6 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar7;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar19);
  }
  uVar19 = *(uint *)(param_1 + 0x78);
  if (0 < (int)uVar19) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c095f8:
            param_3[0x38] = 1;
LAB_109c09690:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c09690;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c095f8;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar13 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar7 = *(uint *)(*(long *)(param_1 + 0x80) + uVar11 * 4);
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xc0;
      pbVar17[1] = 5;
      pbVar17 = pbVar18;
      uVar8 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar6 = uVar8 >> 0xe;
          pbVar17 = pbVar18;
          uVar8 = uVar7;
        } while (uVar6 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar7;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar19);
  }
  uVar19 = *(uint *)(param_1 + 0x88);
  if (0 < (int)uVar19) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c09730:
            param_3[0x38] = 1;
LAB_109c097c8:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c097c8;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c09730;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar13 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar7 = *(uint *)(*(long *)(param_1 + 0x90) + uVar11 * 4);
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 200;
      pbVar17[1] = 5;
      pbVar17 = pbVar18;
      uVar8 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar6 = uVar8 >> 0xe;
          pbVar17 = pbVar18;
          uVar8 = uVar7;
        } while (uVar6 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar7;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar19);
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if ((uVar19 >> 0x1e & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1ed);
    param_2[0] = 0xd0;
    param_2[1] = 5;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if ((uVar19 >> 7 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1a4);
    param_2[0] = 0xa8;
    param_2[1] = 6;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  uVar19 = *(uint *)(param_1 + 0x10);
  if ((uVar19 >> 2 & 1) != 0) {
    pbVar9 = param_3;
    func_0x000107c280a0(param_3,0x66,*(ulong *)(param_1 + 0x108) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar9;
  }
  if ((uVar19 >> 0x18 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x168);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xb8;
    param_2[1] = 6;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 3 & 1) != 0) {
    pbVar9 = (byte *)0x68;
    func_0x000107c303cc(0x68,*(long *)(param_1 + 0x110),
                        *(undefined4 *)(*(long *)(param_1 + 0x110) + 0x14),param_2,param_3);
    param_2 = pbVar9;
  }
  if ((uVar19 >> 0x19 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x16c);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 200;
    param_2[1] = 6;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0x1a & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x170);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xd0;
    param_2[1] = 6;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0x1b & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x174);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xd8;
    param_2[1] = 6;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0x1c & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x178);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xe0;
    param_2[1] = 6;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0x1d & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x17c);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xe8;
    param_2[1] = 6;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0x1e & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x180);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xf0;
    param_2[1] = 6;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((int)uVar19 < 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x184);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xf8;
    param_2[1] = 6;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if ((uVar19 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x188);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x80;
    param_2[1] = 7;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 1 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x18c);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x88;
    param_2[1] = 7;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 2 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 400);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x90;
    param_2[1] = 7;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  if ((*(byte *)(param_1 + 0x18) >> 2 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x1fc);
    pbVar17 = param_2 + 2;
    param_2[0] = 0x98;
    param_2[1] = 7;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if ((uVar19 >> 3 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x194);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa0;
    param_2[1] = 7;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 4 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x198);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa8;
    param_2[1] = 7;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 5 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x19c);
    uVar10 = (ulong)(int)uVar19;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xb0;
    param_2[1] = 7;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((*(byte *)(param_1 + 0x18) >> 3 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x200);
    param_2[0] = 0xbd;
    param_2[1] = 7;
    *(undefined4 *)(param_2 + 2) = uVar2;
    param_2 = param_2 + 6;
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if ((uVar19 >> 6 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1a0);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xc0;
    param_2[1] = 7;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 8 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1a5);
    param_2[0] = 200;
    param_2[1] = 7;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  uVar7 = *(uint *)(param_1 + 0x98);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c09c58:
            param_3[0x38] = 1;
LAB_109c09cf8:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c09cf8;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c09c58;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0xa0) + uVar11 * 4);
      uVar12 = (ulong)(int)uVar8;
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xd0;
      pbVar17[1] = 7;
      uVar10 = uVar12;
      pbVar17 = pbVar18;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar10 | 0x80;
          uVar12 = uVar10 >> 7;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar12;
          pbVar17 = pbVar18;
        } while (uVar14 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  uVar7 = *(uint *)(param_1 + 0xa8);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c09d9c:
            param_3[0x38] = 1;
LAB_109c09e3c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c09e3c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c09d9c;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0xb0) + uVar11 * 4);
      uVar12 = (ulong)(int)uVar8;
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xd8;
      pbVar17[1] = 7;
      uVar10 = uVar12;
      pbVar17 = pbVar18;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar10 | 0x80;
          uVar12 = uVar10 >> 7;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar12;
          pbVar17 = pbVar18;
        } while (uVar14 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  uVar7 = *(uint *)(param_1 + 0xb8);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c09ee0:
            param_3[0x38] = 1;
LAB_109c09f80:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c09f80;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c09ee0;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0xc0) + uVar11 * 4);
      uVar12 = (ulong)(int)uVar8;
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xe0;
      pbVar17[1] = 7;
      uVar10 = uVar12;
      pbVar17 = pbVar18;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar10 | 0x80;
          uVar12 = uVar10 >> 7;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar12;
          pbVar17 = pbVar18;
        } while (uVar14 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  uVar7 = *(uint *)(param_1 + 200);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c0a024:
            param_3[0x38] = 1;
LAB_109c0a0c4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c0a0c4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c0a024;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0xd0) + uVar11 * 4);
      uVar12 = (ulong)(int)uVar8;
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xe8;
      pbVar17[1] = 7;
      uVar10 = uVar12;
      pbVar17 = pbVar18;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar10 | 0x80;
          uVar12 = uVar10 >> 7;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar12;
          pbVar17 = pbVar18;
        } while (uVar14 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  uVar7 = *(uint *)(param_1 + 0xd8);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c0a168:
            param_3[0x38] = 1;
LAB_109c0a208:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c0a208;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c0a168;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0xe0) + uVar11 * 4);
      uVar12 = (ulong)(int)uVar8;
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0xf0;
      pbVar17[1] = 7;
      uVar10 = uVar12;
      pbVar17 = pbVar18;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar10 | 0x80;
          uVar12 = uVar10 >> 7;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar12;
          pbVar17 = pbVar18;
        } while (uVar14 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  if ((uVar19 >> 0xb & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1a8);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xf8;
    param_2[1] = 7;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  uVar7 = *(uint *)(param_1 + 0xe8);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    pbVar9 = param_3 + 0x10;
    do {
      pbVar17 = param_2;
      pbVar18 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar17 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c0a2d8:
            param_3[0x38] = 1;
LAB_109c0a378:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar13 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar18;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar18 + 8);
              *(undefined8 *)pbVar9 = uVar22;
              *(byte **)(param_3 + 8) = pbVar18;
              goto LAB_109c0a378;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar18 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109c0a2d8;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar22;
              pbVar13 = pbVar9 + (int)uStack_64;
              *(byte **)param_3 = pbVar13;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar22 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar22;
              pbVar13 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar13;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar17 = pbStack_70;
            }
          }
          param_2 = pbVar17 + ((int)param_2 - (int)pbVar18);
          pbVar17 = param_2;
          pbVar18 = pbVar13;
        } while (pbVar13 <= param_2);
      }
      uVar8 = *(uint *)(*(long *)(param_1 + 0xf0) + uVar11 * 4);
      uVar12 = (ulong)(int)uVar8;
      pbVar18 = pbVar17 + 2;
      pbVar17[0] = 0x80;
      pbVar17[1] = 8;
      uVar10 = uVar12;
      pbVar17 = pbVar18;
      if (0x7f < uVar8) {
        do {
          pbVar18 = pbVar17 + 1;
          *pbVar17 = (byte)uVar10 | 0x80;
          uVar12 = uVar10 >> 7;
          uVar14 = uVar10 >> 0xe;
          uVar10 = uVar12;
          pbVar17 = pbVar18;
        } while (uVar14 != 0);
      }
      param_2 = pbVar18 + 1;
      *pbVar18 = (byte)uVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  if ((uVar19 >> 9 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1a6);
    param_2[0] = 0x88;
    param_2[1] = 8;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if ((uVar19 >> 10 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1a7);
    param_2[0] = 0x90;
    param_2[1] = 8;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if ((uVar19 >> 0x10 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1bc);
    param_2[0] = 0x98;
    param_2[1] = 8;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if ((uVar19 >> 0xc & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1ac);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa0;
    param_2[1] = 8;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0xd & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1b0);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xa8;
    param_2[1] = 8;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0xe & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1b4);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xb0;
    param_2[1] = 8;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0xf & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1b8);
    uVar10 = (ulong)(int)uVar7;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xb8;
    param_2[1] = 8;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((uVar19 >> 0x12 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c0);
    param_2[0] = 0xc5;
    param_2[1] = 8;
    *(undefined4 *)(param_2 + 2) = uVar2;
    param_2 = param_2 + 6;
  }
  if ((uVar19 >> 0x13 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c4);
    param_2[0] = 0xcd;
    param_2[1] = 8;
    *(undefined4 *)(param_2 + 2) = uVar2;
    param_2 = param_2 + 6;
  }
  if ((uVar19 >> 0x14 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x1c8);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xd0;
    param_2[1] = 8;
    pbVar9 = pbVar17;
    uVar8 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar6 = uVar8 >> 0xe;
        pbVar9 = pbVar17;
        uVar8 = uVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar7;
  }
  if ((uVar19 >> 0x11 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x1bd);
    param_2[0] = 0xd8;
    param_2[1] = 8;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x1cc);
    uVar10 = (ulong)(int)uVar19;
    pbVar17 = param_2 + 2;
    param_2[0] = 0xe0;
    param_2[1] = 8;
    uVar11 = uVar10;
    pbVar9 = pbVar17;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        uVar11 = uVar10;
        pbVar9 = pbVar17;
      } while (uVar12 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar10;
  }
  if ((*(byte *)(param_1 + 0x18) >> 4 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar17 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar17 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    uVar19 = *(uint *)(param_1 + 0x204);
    pbVar17 = param_2 + 2;
    param_2[0] = 0xe8;
    param_2[1] = 8;
    pbVar9 = pbVar17;
    uVar7 = uVar19;
    if (0x7f < uVar19) {
      do {
        pbVar17 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar19 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar17;
        uVar7 = uVar19;
      } while (uVar8 != 0);
    }
    param_2 = pbVar17 + 1;
    *pbVar17 = (byte)uVar19;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar11 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar16 = *(long *)(uVar11 + 8);
      uVar10 = (ulong)*(uint *)(uVar11 + 0x10);
    }
    else {
      lVar16 = uVar11 + 8;
    }
    uVar19 = (uint)uVar10;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar19) {
      pbVar9 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar9 < (int)uVar19) {
        do {
          iVar21 = (int)pbVar9;
          _memcpy(param_2,lVar16,(long)iVar21);
          uVar19 = (int)uVar10 - iVar21;
          uVar10 = (ulong)uVar19;
          lVar16 = lVar16 + iVar21;
          pbVar9 = *(byte **)param_3;
          pbVar17 = param_2 + iVar21;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar18 = param_3;
            func_0x000107c303dc();
            pbVar17 = pbVar18 + ((int)pbVar17 - (int)pbVar9);
            pbVar9 = *(byte **)param_3;
            param_2 = pbVar17;
          } while (pbVar9 <= pbVar17);
          pbVar9 = pbVar9 + (0x10 - (long)param_2);
        } while ((int)pbVar9 < (int)uVar19);
      }
      _memcpy(param_2,lVar16,(long)(int)uVar19);
      param_2 = param_2 + (int)uVar19;
    }
    else {
      _memcpy(param_2,lVar16,uVar10 & 0xffffffff);
      param_2 = param_2 + (int)uVar19;
    }
  }
  return param_2;
}



/* Entry: 109c0c670; end: 109c0c673;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c0c670(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    func_0x000107c303c4(param_1 + 0x20,param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      func_0x000107c29104(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x50);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x50) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar3) {
      func_0x000107c29104(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x58);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x60);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      func_0x000107c29104(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x70);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x78);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x7c) < iVar3) {
      func_0x000107c29104(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x78);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x78) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x80);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x8c) < iVar3) {
      func_0x000107c29104(param_1 + 0x88);
      iVar2 = *(int *)(param_1 + 0x88);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x88) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x90);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x98);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x98);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x98) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xa0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xa0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xa8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xac) < iVar3) {
      func_0x000107c282d8(param_1 + 0xa8);
      iVar2 = *(int *)(param_1 + 0xa8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xa8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xb0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xb8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      func_0x000107c282d8(param_1 + 0xb8);
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xb8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xc0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xcc) < iVar3) {
      func_0x000107c282d8(param_1 + 200);
      iVar2 = *(int *)(param_1 + 200);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 200) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xd0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xd0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xd8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xdc) < iVar3) {
      func_0x000107c282d8(param_1 + 0xd8);
      iVar2 = *(int *)(param_1 + 0xd8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xd8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xe0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xe8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xec) < iVar3) {
      func_0x000107c282d8(param_1 + 0xe8);
      iVar2 = *(int *)(param_1 + 0xe8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xe8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xf0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xff) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0xf8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0xf8,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x100);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x100,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x108);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x108,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x110) == 0) {
        FUN_109c0fcd4(uVar9,*(undefined8 *)(param_2 + 0x110));
        *(ulong *)(param_1 + 0x110) = uVar9;
      }
      else {
        FUN_109c08090();
      }
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    }
  }
  if ((uVar8 & 0xff00) != 0) {
    if ((uVar8 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    }
    if ((uVar8 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    }
    if ((uVar8 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    }
    if ((uVar8 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    }
    if ((uVar8 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    }
    if ((uVar8 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    }
    if ((uVar8 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    }
    if ((uVar8 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    }
  }
  if ((uVar8 & 0xff0000) != 0) {
    if ((uVar8 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    }
    if ((uVar8 >> 0x11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    }
    if ((uVar8 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    }
    if ((uVar8 >> 0x13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    }
    if ((uVar8 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    }
    if ((uVar8 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    }
    if ((uVar8 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    }
    if ((uVar8 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
    }
  }
  if (uVar8 >> 0x18 != 0) {
    if ((uVar8 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    }
    if ((uVar8 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
    }
    if ((uVar8 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    }
    if ((uVar8 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
    }
    if ((uVar8 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
    }
    if ((uVar8 >> 0x1d & 1) != 0) {
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
    }
    if ((uVar8 >> 0x1e & 1) != 0) {
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    }
    if ((int)uVar8 < 0) {
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x14);
  if ((uVar8 & 0xff) != 0) {
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)(param_2 + 0x1a4);
    }
  }
  if ((uVar8 & 0xff00) != 0) {
    if ((uVar8 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a5) = *(undefined1 *)(param_2 + 0x1a5);
    }
    if ((uVar8 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(param_2 + 0x1a6);
    }
    if ((uVar8 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a7) = *(undefined1 *)(param_2 + 0x1a7);
    }
    if ((uVar8 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    }
    if ((uVar8 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
    }
    if ((uVar8 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    }
    if ((uVar8 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
    }
    if ((uVar8 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
    }
  }
  if ((uVar8 & 0xff0000) != 0) {
    if ((uVar8 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1bc) = *(undefined1 *)(param_2 + 0x1bc);
    }
    if ((uVar8 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1bd) = *(undefined1 *)(param_2 + 0x1bd);
    }
    if ((uVar8 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    }
    if ((uVar8 >> 0x13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
    }
    if ((uVar8 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
    }
    if ((uVar8 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
    }
    if ((uVar8 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
    }
    if ((uVar8 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
    }
  }
  if (uVar8 >> 0x18 != 0) {
    if ((uVar8 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
    }
    if ((uVar8 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
    }
    if ((uVar8 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
    }
    if ((uVar8 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
    }
    if ((uVar8 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
    }
    if ((uVar8 >> 0x1d & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1ec) = *(undefined1 *)(param_2 + 0x1ec);
    }
    if ((uVar8 >> 0x1e & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1ed) = *(undefined1 *)(param_2 + 0x1ed);
    }
    if ((int)uVar8 < 0) {
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x18);
  if ((uVar8 & 0x1f) != 0) {
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
    }
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | *(uint *)(param_2 + 0x18);
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



/* Entry: 109c0c674; end: 109c0d09f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c0c674(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    func_0x000107c303c4(param_1 + 0x20,param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      func_0x000107c29104(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x50);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x50) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar3) {
      func_0x000107c29104(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x58);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x60);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      func_0x000107c29104(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x70);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x78);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x7c) < iVar3) {
      func_0x000107c29104(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x78);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x78) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x80);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x8c) < iVar3) {
      func_0x000107c29104(param_1 + 0x88);
      iVar2 = *(int *)(param_1 + 0x88);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x88) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x90);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x98);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x98);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x98) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xa0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xa0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xa8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xac) < iVar3) {
      func_0x000107c282d8(param_1 + 0xa8);
      iVar2 = *(int *)(param_1 + 0xa8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xa8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xb0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xb8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      func_0x000107c282d8(param_1 + 0xb8);
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xb8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xc0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xcc) < iVar3) {
      func_0x000107c282d8(param_1 + 200);
      iVar2 = *(int *)(param_1 + 200);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 200) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xd0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xd0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xd8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xdc) < iVar3) {
      func_0x000107c282d8(param_1 + 0xd8);
      iVar2 = *(int *)(param_1 + 0xd8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xd8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xe0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xe8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xec) < iVar3) {
      func_0x000107c282d8(param_1 + 0xe8);
      iVar2 = *(int *)(param_1 + 0xe8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xe8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xf0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xff) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0xf8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0xf8,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x100);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x100,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x108);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x108,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x110) == 0) {
        FUN_109c0fcd4(uVar9,*(undefined8 *)(param_2 + 0x110));
        *(ulong *)(param_1 + 0x110) = uVar9;
      }
      else {
        FUN_109c08090();
      }
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    }
  }
  if ((uVar8 & 0xff00) != 0) {
    if ((uVar8 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    }
    if ((uVar8 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    }
    if ((uVar8 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    }
    if ((uVar8 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    }
    if ((uVar8 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    }
    if ((uVar8 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    }
    if ((uVar8 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    }
    if ((uVar8 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    }
  }
  if ((uVar8 & 0xff0000) != 0) {
    if ((uVar8 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    }
    if ((uVar8 >> 0x11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    }
    if ((uVar8 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    }
    if ((uVar8 >> 0x13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    }
    if ((uVar8 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    }
    if ((uVar8 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    }
    if ((uVar8 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    }
    if ((uVar8 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
    }
  }
  if (uVar8 >> 0x18 != 0) {
    if ((uVar8 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    }
    if ((uVar8 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
    }
    if ((uVar8 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    }
    if ((uVar8 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
    }
    if ((uVar8 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
    }
    if ((uVar8 >> 0x1d & 1) != 0) {
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
    }
    if ((uVar8 >> 0x1e & 1) != 0) {
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    }
    if ((int)uVar8 < 0) {
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x14);
  if ((uVar8 & 0xff) != 0) {
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)(param_2 + 0x1a4);
    }
  }
  if ((uVar8 & 0xff00) != 0) {
    if ((uVar8 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a5) = *(undefined1 *)(param_2 + 0x1a5);
    }
    if ((uVar8 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(param_2 + 0x1a6);
    }
    if ((uVar8 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a7) = *(undefined1 *)(param_2 + 0x1a7);
    }
    if ((uVar8 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    }
    if ((uVar8 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
    }
    if ((uVar8 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    }
    if ((uVar8 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
    }
    if ((uVar8 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
    }
  }
  if ((uVar8 & 0xff0000) != 0) {
    if ((uVar8 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1bc) = *(undefined1 *)(param_2 + 0x1bc);
    }
    if ((uVar8 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1bd) = *(undefined1 *)(param_2 + 0x1bd);
    }
    if ((uVar8 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    }
    if ((uVar8 >> 0x13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
    }
    if ((uVar8 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
    }
    if ((uVar8 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
    }
    if ((uVar8 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
    }
    if ((uVar8 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
    }
  }
  if (uVar8 >> 0x18 != 0) {
    if ((uVar8 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
    }
    if ((uVar8 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
    }
    if ((uVar8 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
    }
    if ((uVar8 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
    }
    if ((uVar8 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
    }
    if ((uVar8 >> 0x1d & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1ec) = *(undefined1 *)(param_2 + 0x1ec);
    }
    if ((uVar8 >> 0x1e & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1ed) = *(undefined1 *)(param_2 + 0x1ed);
    }
    if ((int)uVar8 < 0) {
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x18);
  if ((uVar8 & 0x1f) != 0) {
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
    }
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | *(uint *)(param_2 + 0x18);
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



/* Entry: 109c0d0a0; end: 109c0d343;  */

void FUN_109c0d0a0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x20 + lVar3);
    *(undefined1 *)(param_1 + 0x20 + lVar3) = *(undefined1 *)(param_2 + 0x20 + lVar3);
    *(undefined1 *)(param_2 + 0x20 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x38 + lVar3);
    *(undefined1 *)(param_1 + 0x38 + lVar3) = *(undefined1 *)(param_2 + 0x38 + lVar3);
    *(undefined1 *)(param_2 + 0x38 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x48 + lVar3);
    *(undefined1 *)(param_1 + 0x48 + lVar3) = *(undefined1 *)(param_2 + 0x48 + lVar3);
    *(undefined1 *)(param_2 + 0x48 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x58 + lVar3);
    *(undefined1 *)(param_1 + 0x58 + lVar3) = *(undefined1 *)(param_2 + 0x58 + lVar3);
    *(undefined1 *)(param_2 + 0x58 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x68 + lVar3);
    *(undefined1 *)(param_1 + 0x68 + lVar3) = *(undefined1 *)(param_2 + 0x68 + lVar3);
    *(undefined1 *)(param_2 + 0x68 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x78 + lVar3);
    *(undefined1 *)(param_1 + 0x78 + lVar3) = *(undefined1 *)(param_2 + 0x78 + lVar3);
    *(undefined1 *)(param_2 + 0x78 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x88 + lVar3);
    *(undefined1 *)(param_1 + 0x88 + lVar3) = *(undefined1 *)(param_2 + 0x88 + lVar3);
    *(undefined1 *)(param_2 + 0x88 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x98 + lVar3);
    *(undefined1 *)(param_1 + 0x98 + lVar3) = *(undefined1 *)(param_2 + 0x98 + lVar3);
    *(undefined1 *)(param_2 + 0x98 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0xa8 + lVar3);
    *(undefined1 *)(param_1 + 0xa8 + lVar3) = *(undefined1 *)(param_2 + 0xa8 + lVar3);
    *(undefined1 *)(param_2 + 0xa8 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0xb8 + lVar3);
    *(undefined1 *)(param_1 + 0xb8 + lVar3) = *(undefined1 *)(param_2 + 0xb8 + lVar3);
    *(undefined1 *)(param_2 + 0xb8 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 200 + lVar3);
    *(undefined1 *)(param_1 + 200 + lVar3) = *(undefined1 *)(param_2 + 200 + lVar3);
    *(undefined1 *)(param_2 + 200 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0xd8 + lVar3);
    *(undefined1 *)(param_1 + 0xd8 + lVar3) = *(undefined1 *)(param_2 + 0xd8 + lVar3);
    *(undefined1 *)(param_2 + 0xd8 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0xe8 + lVar3);
    *(undefined1 *)(param_1 + 0xe8 + lVar3) = *(undefined1 *)(param_2 + 0xe8 + lVar3);
    *(undefined1 *)(param_2 + 0xe8 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x110 + lVar3);
    *(undefined1 *)(param_1 + 0x110 + lVar3) = *(undefined1 *)(param_2 + 0x110 + lVar3);
    *(undefined1 *)(param_2 + 0x110 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xf8);
  return;
}



/* Entry: 109c0d344; end: 109c0d38f;  */

long FUN_109c0d344(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109c0877c();
    __ZdlPv();
  }
  func_0x000107c282b4(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c0d390; end: 109c0d393;  */

long FUN_109c0d390(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109c0877c();
    __ZdlPv();
  }
  func_0x000107c282b4(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c0d394; end: 109c0d3a7;  */

void FUN_109c0d394(void)

{
  FUN_109c0d344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c0d3a8; end: 109c0d3b3;  */

undefined ** FUN_109c0d3a8(void)

{
  return &PTR_DAT_110b2bb90;
}



/* Entry: 109c0d3b4; end: 109c0d423;  */

void FUN_109c0d3b4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x00010598fd84(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x00010598fd84(param_1 + 0x30);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109c087fc(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 109c0d424; end: 109c0d6b7;  */

long * FUN_109c0d424(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar11;
  undefined1 *puVar10;
  
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x1c),param_2,param_3);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar11 = 8;
    plVar5 = plVar2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + lVar11 + -1);
      }
      plVar3 = (long *)*puVar1;
      lVar7 = (long)*(char *)((long)plVar3 + 0x17);
      if (((lVar7 < 0) && (lVar7 = plVar3[1], 0x7f < lVar7)) ||
         ((*param_3 - (long)plVar5) + 0xe < lVar7)) {
        plVar2 = param_3;
        func_0x00010b4d5120(param_3,2,plVar3,plVar5);
      }
      else {
        *(undefined1 *)plVar5 = 0x12;
        *(char *)((long)plVar5 + 1) = (char)lVar7;
        if (*(char *)((long)plVar3 + 0x17) < '\0') {
          plVar3 = (long *)*plVar3;
        }
        _memcpy((undefined1 *)((long)plVar5 + 2),plVar3,lVar7);
        plVar2 = (long *)((undefined1 *)((long)plVar5 + 2) + lVar7);
      }
      lVar11 = lVar11 + 8;
      uVar8 = uVar8 - 1;
      plVar5 = plVar2;
    } while (uVar8 != 0);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    lVar11 = 8;
    plVar5 = plVar2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + lVar11 + -1);
      }
      plVar3 = (long *)*puVar1;
      lVar7 = (long)*(char *)((long)plVar3 + 0x17);
      if (((lVar7 < 0) && (lVar7 = plVar3[1], 0x7f < lVar7)) ||
         ((*param_3 - (long)plVar5) + 0xe < lVar7)) {
        plVar2 = param_3;
        func_0x00010b4d5120(param_3,3,plVar3,plVar5);
      }
      else {
        *(undefined1 *)plVar5 = 0x1a;
        *(char *)((long)plVar5 + 1) = (char)lVar7;
        if (*(char *)((long)plVar3 + 0x17) < '\0') {
          plVar3 = (long *)*plVar3;
        }
        _memcpy((long)plVar5 + 2,plVar3,lVar7);
        plVar2 = (long *)((long)plVar5 + 2 + lVar7);
      }
      lVar11 = lVar11 + 8;
      uVar8 = uVar8 - 1;
      plVar5 = plVar2;
    } while (uVar8 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar8 + 8);
      uVar4 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar11 = uVar8 + 8;
    }
    uVar6 = (uint)uVar4;
    if (*param_3 - (long)plVar2 < (long)(int)uVar6) {
      puVar10 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar10 < (int)uVar6) {
        do {
          iVar9 = (int)puVar10;
          _memcpy(plVar2,lVar11,(long)iVar9);
          uVar6 = (int)uVar4 - iVar9;
          uVar4 = (ulong)uVar6;
          lVar11 = lVar11 + iVar9;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar2 + (long)iVar9);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar2 = plVar5;
          } while (plVar3 <= plVar5);
          puVar10 = (undefined1 *)((long)plVar3 + (0x10 - (long)plVar2));
        } while ((int)puVar10 < (int)uVar6);
      }
      _memcpy(plVar2,lVar11,(long)(int)uVar6);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar6);
    }
    else {
      _memcpy(plVar2,lVar11,uVar4 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar6);
    }
  }
  return plVar2;
}



/* Entry: 109c0d6b8; end: 109c0d7fb;  */

long FUN_109c0d6b8(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x20);
  uVar7 = uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    puVar8 = (ulong *)(uVar6 + 7);
    do {
      puVar2 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar2 = puVar8;
      }
      bVar3 = *(byte *)(*puVar2 + 0x17);
      uVar1 = *(ulong *)(*puVar2 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      uVar7 = uVar1 + uVar7 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x38);
  lVar9 = uVar7 + uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    uVar7 = *(ulong *)(param_1 + 0x30);
    puVar8 = (ulong *)(uVar7 + 7);
    do {
      puVar2 = (ulong *)(param_1 + 0x30);
      if ((uVar7 & 1) != 0) {
        puVar2 = puVar8;
      }
      bVar3 = *(byte *)(*puVar2 + 0x17);
      uVar6 = *(ulong *)(*puVar2 + 8);
      if (-1 < (char)bVar3) {
        uVar6 = (ulong)bVar3;
      }
      lVar9 = uVar6 + lVar9 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    func_0x000109c0b938();
    lVar9 = lVar9 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar7 + 0x10);
    }
    lVar9 = lVar4 + lVar9;
  }
  *(int *)(param_1 + 0x14) = (int)lVar9;
  return lVar9;
}



/* Entry: 109c0d7fc; end: 109c0d7ff;  */

void FUN_109c0d7fc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303bc(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_109c0fe20(uVar2,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar2;
    }
    else {
      FUN_109c0c674();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 109c0d800; end: 109c0d8cb;  */

void FUN_109c0d800(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303bc(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_109c0fe20(uVar2,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar2;
    }
    else {
      FUN_109c0c674();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 109c0d8cc; end: 109c0d9c3;  */

void FUN_109c0d8cc(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x18 + lVar3);
    *(undefined1 *)(param_1 + 0x18 + lVar3) = *(undefined1 *)(param_2 + 0x18 + lVar3);
    *(undefined1 *)(param_2 + 0x18 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x30 + lVar3);
    *(undefined1 *)(param_1 + 0x30 + lVar3) = *(undefined1 *)(param_2 + 0x30 + lVar3);
    *(undefined1 *)(param_2 + 0x30 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = uVar4;
  return;
}



/* Entry: 109c0d9c4; end: 109c0da1b;  */

long FUN_109c0d9c4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c0da1c; end: 109c0da4b;  */

undefined ** FUN_109c0da1c(void)

{
  return &PTR_DAT_110b2bbd0;
}



/* Entry: 109c0da4c; end: 109c0dbe7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109c0da4c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 3 & 1) != 0) {
    plVar1 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109c0dbe8; end: 109c0dcaf;  */

ulong FUN_109c0dbe8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + uVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 109c0dcb0; end: 109c0dd1f;  */

long FUN_109c0dcb0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c0dd20; end: 109c0dd23;  */

long FUN_109c0dd20(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c0dd24; end: 109c0dd37;  */

void FUN_109c0dd24(void)

{
  FUN_109c0dcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c0dd38; end: 109c0dd43;  */

undefined ** FUN_109c0dd38(void)

{
  return &PTR_DAT_110b2bc08;
}



/* Entry: 109c0dd44; end: 109c0ddcf;  */

void FUN_109c0dd44(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c0da28(*(undefined8 *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 109c0ddd0; end: 109c0e0fb;  */

byte * FUN_109c0ddd0(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uVar11 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar4;
  }
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar4 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
    param_2 = pbVar4;
  }
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= param_2);
    }
    uVar11 = *(uint *)(param_1 + 0x38);
    uVar12 = (ulong)(int)uVar11;
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    uVar14 = uVar12;
    pbVar4 = pbVar8;
    if (0x7f < uVar11) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar14 | 0x80;
        uVar12 = uVar14 >> 7;
        uVar3 = uVar14 >> 0xe;
        uVar14 = uVar12;
        pbVar4 = pbVar8;
      } while (uVar3 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar12;
  }
  uVar11 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar11) {
    uVar14 = 0;
    pbVar4 = param_3 + 0x10;
    do {
      pbVar8 = param_2;
      pbVar9 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar8 = pbVar4;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c0deec:
            param_3[0x38] = 1;
LAB_109c0df84:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar5 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar15 = *(undefined8 *)pbVar9;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar9 + 8);
              *(undefined8 *)pbVar4 = uVar15;
              *(byte **)(param_3 + 8) = pbVar9;
              goto LAB_109c0df84;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar4,(long)pbVar9 - (long)pbVar4);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c0deec;
            } while (uStack_64 == 0);
            puVar7 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar15 = *puVar7;
              *(undefined8 *)(param_3 + 0x18) = puVar7[1];
              *(undefined8 *)pbVar4 = uVar15;
              *(byte **)param_3 = pbVar4 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar5 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar15 = *puVar7;
              *(undefined8 *)(pbStack_70 + 8) = puVar7[1];
              *(undefined8 *)pbStack_70 = uVar15;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar8 = pbStack_70;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar8 + ((int)param_2 - (int)pbVar9);
          pbVar8 = param_2;
          pbVar9 = pbVar5;
        } while (pbVar5 <= param_2);
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + uVar14 * 4);
      uVar3 = (ulong)(int)uVar1;
      pbVar9 = pbVar8 + 1;
      *pbVar8 = 0x20;
      uVar12 = uVar3;
      pbVar8 = pbVar9;
      if (0x7f < uVar1) {
        do {
          pbVar9 = pbVar8 + 1;
          *pbVar8 = (byte)uVar12 | 0x80;
          uVar3 = uVar12 >> 7;
          uVar6 = uVar12 >> 0xe;
          uVar12 = uVar3;
          pbVar8 = pbVar9;
        } while (uVar6 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar14 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar10 = *(long *)(uVar14 + 8);
      uVar12 = (ulong)*(uint *)(uVar14 + 0x10);
    }
    else {
      lVar10 = uVar14 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar11) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar11) {
        do {
          iVar13 = (int)pbVar4;
          _memcpy(param_2,lVar10,(long)iVar13);
          uVar11 = (int)uVar12 - iVar13;
          uVar12 = (ulong)uVar11;
          lVar10 = lVar10 + iVar13;
          pbVar4 = *(byte **)param_3;
          pbVar8 = param_2 + iVar13;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar9 + ((int)pbVar8 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar11);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar11);
      param_2 = param_2 + (int)uVar11;
    }
    else {
      _memcpy(param_2,lVar10,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar11;
    }
  }
  return param_2;
}



/* Entry: 109c0e0fc; end: 109c0e237;  */

long FUN_109c0e0fc(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x20);
    do {
      lVar4 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
  }
  lVar4 = lVar4 + (ulong)uVar1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      FUN_109c0dbe8();
      lVar4 = lVar4 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109c0e238; end: 109c0e38f;  */

void FUN_109c0e238(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 7) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x28,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_109c0fe64(uVar9,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar9;
      }
      else {
        func_0x000109c0d950();
      }
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 109c0e390; end: 109c0e3cb;  */

long FUN_109c0e390(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 109c0e3cc; end: 109c0e3cf;  */

long FUN_109c0e3cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 109c0e3d0; end: 109c0e3e3;  */

void FUN_109c0e3d0(void)

{
  FUN_109c0e390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c0e3e4; end: 109c0e46f;  */

undefined ** FUN_109c0e3e4(void)

{
  return &PTR_DAT_110b2bc48;
}



/* Entry: 109c0e470; end: 109c0e64f;  */

byte * FUN_109c0e470(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 2 & 1) != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar5 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar5 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar6 = (ulong)(int)uVar1;
    pbVar5 = param_2 + 1;
    *param_2 = 8;
    uVar4 = uVar6;
    pbVar3 = pbVar5;
    if (0x7f < uVar1) {
      do {
        pbVar5 = pbVar3 + 1;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar3 = pbVar5;
      } while (uVar7 != 0);
    }
    param_2 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  if ((uVar2 & 1) != 0) {
    pbVar3 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar3;
  }
  pbVar3 = param_2;
  if ((uVar2 >> 1 & 1) != 0) {
    pbVar3 = param_3;
    func_0x000107c280a0(param_3,3,*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar9 = *(long *)(uVar6 + 8);
      uVar4 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar9 = uVar6 + 8;
    }
    uVar2 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar2) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar5 < (int)uVar2) {
        do {
          iVar10 = (int)pbVar5;
          _memcpy(pbVar3,lVar9,(long)iVar10);
          uVar2 = (int)uVar4 - iVar10;
          uVar4 = (ulong)uVar2;
          lVar9 = lVar9 + iVar10;
          pbVar5 = *(byte **)param_3;
          pbVar8 = pbVar3 + iVar10;
          do {
            pbVar3 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar3 = pbVar8;
          } while (pbVar5 <= pbVar8);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar3);
        } while ((int)pbVar5 < (int)uVar2);
      }
      _memcpy(pbVar3,lVar9,(long)(int)uVar2);
      pbVar3 = pbVar3 + (int)uVar2;
    }
    else {
      _memcpy(pbVar3,lVar9,uVar4 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar2;
    }
  }
  return pbVar3;
}



/* Entry: 109c0e650; end: 109c0e73f;  */

long FUN_109c0e650(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = lVar3 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c0e740; end: 109c0e823;  */

void FUN_109c0e740(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x20,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
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



/* Entry: 109c0e824; end: 109c0e85b;  */

long FUN_109c0e824(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c0e85c(param_1);
  return param_1;
}



/* Entry: 109c0e85c; end: 109c0e907;  */

void FUN_109c0e85c(long param_1)

{
  func_0x000107c30258(param_1 + 200);
  func_0x000107c30258(param_1 + 0xd0);
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_109c0e390();
    __ZdlPv();
  }
  FUN_109c0f9cc(param_1 + 0xb0);
  FUN_109c0f9cc(param_1 + 0x98);
  func_0x000107c282b4(param_1 + 0x80);
  FUN_109c0fa00(param_1 + 0x68);
  func_0x000107c282b4(param_1 + 0x50);
  if (0 < *(int *)(param_1 + 0x44)) {
    if (*(long *)(*(long *)(param_1 + 0x48) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109c0f820(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109c0e908; end: 109c0e90b;  */

long FUN_109c0e908(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c0e85c(param_1);
  return param_1;
}



/* Entry: 109c0e90c; end: 109c0e91f;  */

void FUN_109c0e90c(void)

{
  FUN_109c0e824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c0e920; end: 109c0e92b;  */

undefined ** FUN_109c0e920(void)

{
  return &PTR_DAT_110b2bc98;
}



/* Entry: 109c0e92c; end: 109c0ea77;  */

void FUN_109c0e92c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    func_0x00010598fd84(param_1 + 0x50);
  }
  if (0 < *(int *)(param_1 + 0x70)) {
    func_0x0001053936e4(param_1 + 0x68);
  }
  if (0 < *(int *)(param_1 + 0x88)) {
    func_0x00010598fd84(param_1 + 0x80);
  }
  if (0 < *(int *)(param_1 + 0xa0)) {
    func_0x0001053936e4(param_1 + 0x98);
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    func_0x0001053936e4(param_1 + 0xb0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109c0e3f0(*(undefined8 *)(param_1 + 0xd8));
    }
  }
  if ((uVar1 & 0x18) != 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 109c0ea78; end: 109c0f1cf;  */

byte * FUN_109c0ea78(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar16 = *(uint *)(param_1 + 0x10);
  pbVar14 = param_2;
  if ((uVar16 & 1) != 0) {
    pbVar14 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 200) & 0xfffffffffffffffc,param_2);
  }
  if ((uVar16 >> 4 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar14) {
      do {
        if (param_3[0x38] == 1) {
          pbVar14 = param_3 + 0x10;
          break;
        }
        pbVar5 = param_3;
        func_0x000107c303dc();
        pbVar14 = pbVar5 + ((int)pbVar14 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar14);
    }
    uVar3 = *(uint *)(param_1 + 0xe8);
    uVar8 = (ulong)(int)uVar3;
    pbVar7 = pbVar14 + 1;
    *pbVar14 = 0x10;
    uVar20 = uVar8;
    pbVar14 = pbVar7;
    if (0x7f < uVar3) {
      do {
        pbVar7 = pbVar14 + 1;
        *pbVar14 = (byte)uVar20 | 0x80;
        uVar8 = uVar20 >> 7;
        uVar9 = uVar20 >> 0xe;
        uVar20 = uVar8;
        pbVar14 = pbVar7;
      } while (uVar9 != 0);
    }
    pbVar14 = pbVar7 + 1;
    *pbVar7 = (byte)uVar8;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar3) {
    uVar20 = 0;
    pbVar7 = param_3 + 0x10;
    do {
      pbVar5 = pbVar14;
      pbVar15 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar14) {
        do {
          pbVar5 = pbVar7;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c0eb6c:
            param_3[0x38] = 1;
LAB_109c0ec0c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar10 = *(undefined8 *)pbVar15;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar15 + 8);
              *(undefined8 *)pbVar7 = uVar10;
              *(byte **)(param_3 + 8) = pbVar15;
              goto LAB_109c0ec0c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar7,(long)pbVar15 - (long)pbVar7);
            do {
              plVar6 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) goto LAB_109c0eb6c;
            } while (uStack_64 == 0);
            puVar13 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar10 = *puVar13;
              *(undefined8 *)(param_3 + 0x18) = puVar13[1];
              *(undefined8 *)pbVar7 = uVar10;
              pbVar11 = pbVar7 + (int)uStack_64;
              *(byte **)param_3 = pbVar11;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar10 = *puVar13;
              *(undefined8 *)(pbStack_70 + 8) = puVar13[1];
              *(undefined8 *)pbStack_70 = uVar10;
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar11;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar5 = pbStack_70;
            }
          }
          pbVar14 = pbVar5 + ((int)pbVar14 - (int)pbVar15);
          pbVar5 = pbVar14;
          pbVar15 = pbVar11;
        } while (pbVar11 <= pbVar14);
      }
      uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + uVar20 * 4);
      uVar9 = (ulong)(int)uVar4;
      pbVar15 = pbVar5 + 1;
      *pbVar5 = 0x20;
      uVar8 = uVar9;
      pbVar14 = pbVar15;
      if (0x7f < uVar4) {
        do {
          pbVar15 = pbVar14 + 1;
          *pbVar14 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar9;
          pbVar14 = pbVar15;
        } while (uVar12 != 0);
      }
      pbVar14 = pbVar15 + 1;
      *pbVar15 = (byte)uVar9;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar3);
  }
  iVar19 = *(int *)(param_1 + 0x30);
  if (iVar19 != 0) {
    iVar18 = 0;
    pbVar7 = pbVar14;
    do {
      uVar20 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar20 & 1) != 0) {
        puVar1 = (ulong *)(uVar20 + (long)iVar18 * 8 + 7);
      }
      pbVar14 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar18 = iVar18 + 1;
      pbVar7 = pbVar14;
    } while (iVar19 != iVar18);
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar3) {
    uVar20 = 0;
    pbVar7 = param_3 + 0x10;
    do {
      pbVar5 = pbVar14;
      pbVar15 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar14) {
        do {
          pbVar5 = pbVar7;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109c0ecd8:
            param_3[0x38] = 1;
LAB_109c0ed78:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar10 = *(undefined8 *)pbVar15;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar15 + 8);
              *(undefined8 *)pbVar7 = uVar10;
              *(byte **)(param_3 + 8) = pbVar15;
              goto LAB_109c0ed78;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar7,(long)pbVar15 - (long)pbVar7);
            do {
              plVar6 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) goto LAB_109c0ecd8;
            } while (uStack_64 == 0);
            puVar13 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar10 = *puVar13;
              *(undefined8 *)(param_3 + 0x18) = puVar13[1];
              *(undefined8 *)pbVar7 = uVar10;
              pbVar11 = pbVar7 + (int)uStack_64;
              *(byte **)param_3 = pbVar11;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar10 = *puVar13;
              *(undefined8 *)(pbStack_70 + 8) = puVar13[1];
              *(undefined8 *)pbStack_70 = uVar10;
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar11;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar5 = pbStack_70;
            }
          }
          pbVar14 = pbVar5 + ((int)pbVar14 - (int)pbVar15);
          pbVar5 = pbVar14;
          pbVar15 = pbVar11;
        } while (pbVar11 <= pbVar14);
      }
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x48) + uVar20 * 4);
      *pbVar5 = 0x35;
      *(undefined4 *)(pbVar5 + 1) = uVar2;
      pbVar14 = pbVar5 + 5;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar3);
  }
  uVar20 = (ulong)*(uint *)(param_1 + 0x58);
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    lVar21 = 8;
    pbVar7 = pbVar14;
    do {
      uVar8 = *(ulong *)(param_1 + 0x50);
      puVar1 = (ulong *)(param_1 + 0x50);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + lVar21 + -1);
      }
      plVar6 = (long *)*puVar1;
      lVar17 = (long)*(char *)((long)plVar6 + 0x17);
      if (((lVar17 < 0) && (lVar17 = plVar6[1], 0x7f < lVar17)) ||
         ((*(long *)param_3 - (long)pbVar7) + 0xe < lVar17)) {
        pbVar14 = param_3;
        func_0x00010b4d5120(param_3,7,plVar6,pbVar7);
      }
      else {
        *pbVar7 = 0x3a;
        pbVar7[1] = (byte)lVar17;
        if (*(char *)((long)plVar6 + 0x17) < '\0') {
          plVar6 = (long *)*plVar6;
        }
        _memcpy(pbVar7 + 2,plVar6,lVar17);
        pbVar14 = pbVar7 + 2 + lVar17;
      }
      lVar21 = lVar21 + 8;
      uVar20 = uVar20 - 1;
      pbVar7 = pbVar14;
    } while (uVar20 != 0);
  }
  iVar19 = *(int *)(param_1 + 0x70);
  if (iVar19 != 0) {
    iVar18 = 0;
    pbVar7 = pbVar14;
    do {
      uVar20 = *(ulong *)(param_1 + 0x68);
      puVar1 = (ulong *)(param_1 + 0x68);
      if ((uVar20 & 1) != 0) {
        puVar1 = (ulong *)(uVar20 + (long)iVar18 * 8 + 7);
      }
      pbVar14 = (byte *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar18 = iVar18 + 1;
      pbVar7 = pbVar14;
    } while (iVar19 != iVar18);
  }
  uVar20 = (ulong)*(uint *)(param_1 + 0x88);
  if (0 < (int)*(uint *)(param_1 + 0x88)) {
    lVar21 = 8;
    pbVar7 = pbVar14;
    do {
      uVar8 = *(ulong *)(param_1 + 0x80);
      puVar1 = (ulong *)(param_1 + 0x80);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + lVar21 + -1);
      }
      plVar6 = (long *)*puVar1;
      lVar17 = (long)*(char *)((long)plVar6 + 0x17);
      if (((lVar17 < 0) && (lVar17 = plVar6[1], 0x7f < lVar17)) ||
         ((*(long *)param_3 - (long)pbVar7) + 0xe < lVar17)) {
        pbVar14 = param_3;
        func_0x00010b4d5120(param_3,0xb,plVar6,pbVar7);
      }
      else {
        *pbVar7 = 0x5a;
        pbVar7[1] = (byte)lVar17;
        if (*(char *)((long)plVar6 + 0x17) < '\0') {
          plVar6 = (long *)*plVar6;
        }
        _memcpy(pbVar7 + 2,plVar6,lVar17);
        pbVar14 = pbVar7 + 2 + lVar17;
      }
      lVar21 = lVar21 + 8;
      uVar20 = uVar20 - 1;
      pbVar7 = pbVar14;
    } while (uVar20 != 0);
  }
  iVar19 = *(int *)(param_1 + 0xa0);
  if (iVar19 != 0) {
    iVar18 = 0;
    pbVar7 = pbVar14;
    do {
      uVar20 = *(ulong *)(param_1 + 0x98);
      puVar1 = (ulong *)(param_1 + 0x98);
      if ((uVar20 & 1) != 0) {
        puVar1 = (ulong *)(uVar20 + (long)iVar18 * 8 + 7);
      }
      pbVar14 = (byte *)0xc;
      func_0x000107c303cc(0xc,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar18 = iVar18 + 1;
      pbVar7 = pbVar14;
    } while (iVar19 != iVar18);
  }
  iVar19 = *(int *)(param_1 + 0xb8);
  if (iVar19 != 0) {
    iVar18 = 0;
    pbVar7 = pbVar14;
    do {
      uVar20 = *(ulong *)(param_1 + 0xb0);
      puVar1 = (ulong *)(param_1 + 0xb0);
      if ((uVar20 & 1) != 0) {
        puVar1 = (ulong *)(uVar20 + (long)iVar18 * 8 + 7);
      }
      pbVar14 = (byte *)0xd;
      func_0x000107c303cc(0xd,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar18 = iVar18 + 1;
      pbVar7 = pbVar14;
    } while (iVar19 != iVar18);
  }
  if ((uVar16 >> 3 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar14) {
      do {
        if (param_3[0x38] == 1) {
          pbVar14 = param_3 + 0x10;
          break;
        }
        pbVar5 = param_3;
        func_0x000107c303dc();
        pbVar14 = pbVar5 + ((int)pbVar14 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar14);
    }
    uVar10 = *(undefined8 *)(param_1 + 0xe0);
    *pbVar14 = 0x71;
    *(undefined8 *)(pbVar14 + 1) = uVar10;
    pbVar14 = pbVar14 + 9;
  }
  if ((uVar16 >> 1 & 1) != 0) {
    pbVar7 = param_3;
    func_0x000107c280a0(param_3,0xf,*(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc,pbVar14);
    pbVar14 = pbVar7;
  }
  pbVar7 = pbVar14;
  if ((uVar16 >> 2 & 1) != 0) {
    pbVar7 = (byte *)0x10;
    func_0x000107c303cc(0x10,*(long *)(param_1 + 0xd8),
                        *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x14),pbVar14,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar20 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar20 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar21 = *(long *)(uVar20 + 8);
      uVar8 = (ulong)*(uint *)(uVar20 + 0x10);
    }
    else {
      lVar21 = uVar20 + 8;
    }
    uVar16 = (uint)uVar8;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar16) {
      pbVar14 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar14 < (int)uVar16) {
        do {
          iVar19 = (int)pbVar14;
          _memcpy(pbVar7,lVar21,(long)iVar19);
          uVar16 = (int)uVar8 - iVar19;
          uVar8 = (ulong)uVar16;
          lVar21 = lVar21 + iVar19;
          pbVar14 = *(byte **)param_3;
          pbVar5 = pbVar7 + iVar19;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar5 = pbVar7 + ((int)pbVar5 - (int)pbVar14);
            pbVar14 = *(byte **)param_3;
            pbVar7 = pbVar5;
          } while (pbVar14 <= pbVar5);
          pbVar14 = pbVar14 + (0x10 - (long)pbVar7);
        } while ((int)pbVar14 < (int)uVar16);
      }
      _memcpy(pbVar7,lVar21,(long)(int)uVar16);
      pbVar7 = pbVar7 + (int)uVar16;
    }
    else {
      _memcpy(pbVar7,lVar21,uVar8 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar16;
    }
  }
  return pbVar7;
}



/* Entry: 109c0f1d0; end: 109c0f7e7;  */

long FUN_109c0f1d0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    uVar10 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x20);
    do {
      lVar6 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar6;
      uVar10 = uVar10 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar10 != 0);
  }
  uVar10 = *(ulong *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x30);
  lVar6 = lVar6 + (ulong)uVar3 + (long)iVar5;
  puVar9 = (ulong *)(param_1 + 0x28);
  if ((uVar10 & 1) != 0) {
    puVar9 = (ulong *)(uVar10 + 7);
  }
  if (iVar5 != 0) {
    lVar11 = (long)iVar5 << 3;
    do {
      uVar10 = *puVar9;
      FUN_109c07e50();
      lVar6 = uVar10 + lVar6 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6);
      lVar11 = lVar11 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  uVar10 = (ulong)*(uint *)(param_1 + 0x58);
  lVar6 = (ulong)*(uint *)(param_1 + 0x40) * 5 + uVar10 + lVar6;
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    uVar8 = *(ulong *)(param_1 + 0x50);
    puVar9 = (ulong *)(uVar8 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x50);
      if ((uVar8 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      lVar6 = uVar2 + lVar6 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = *(ulong *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 0x70);
  lVar6 = lVar6 + iVar5;
  puVar9 = (ulong *)(param_1 + 0x68);
  if ((uVar10 & 1) != 0) {
    puVar9 = (ulong *)(uVar10 + 7);
  }
  if (iVar5 != 0) {
    lVar11 = (long)iVar5 << 3;
    do {
      uVar10 = *puVar9;
      FUN_109c0d6b8();
      lVar6 = uVar10 + lVar6 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6);
      lVar11 = lVar11 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  uVar10 = (ulong)*(uint *)(param_1 + 0x88);
  lVar6 = lVar6 + uVar10;
  if (0 < (int)*(uint *)(param_1 + 0x88)) {
    uVar8 = *(ulong *)(param_1 + 0x80);
    puVar9 = (ulong *)(uVar8 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x80);
      if ((uVar8 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      lVar6 = uVar2 + lVar6 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = *(ulong *)(param_1 + 0x98);
  iVar5 = *(int *)(param_1 + 0xa0);
  lVar6 = lVar6 + iVar5;
  puVar9 = (ulong *)(param_1 + 0x98);
  if ((uVar10 & 1) != 0) {
    puVar9 = (ulong *)(uVar10 + 7);
  }
  if (iVar5 != 0) {
    lVar11 = (long)iVar5 << 3;
    do {
      uVar10 = *puVar9;
      FUN_109c0e0fc();
      lVar6 = uVar10 + lVar6 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6);
      lVar11 = lVar11 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  uVar10 = *(ulong *)(param_1 + 0xb0);
  iVar5 = *(int *)(param_1 + 0xb8);
  lVar6 = lVar6 + iVar5;
  puVar9 = (ulong *)(param_1 + 0xb0);
  if ((uVar10 & 1) != 0) {
    puVar9 = (ulong *)(uVar10 + 7);
  }
  if (iVar5 != 0) {
    lVar11 = (long)iVar5 << 3;
    do {
      uVar10 = *puVar9;
      FUN_109c0e0fc();
      lVar6 = uVar10 + lVar6 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6);
      lVar11 = lVar11 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0x1f) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 200) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar10 + 0x17);
      uVar10 = *(ulong *)(uVar10 + 8);
      if (-1 < (char)bVar4) {
        uVar10 = (ulong)bVar4;
      }
      lVar6 = lVar6 + uVar10 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar10 + 0x17);
      uVar10 = *(ulong *)(uVar10 + 8);
      if (-1 < (char)bVar4) {
        uVar10 = (ulong)bVar4;
      }
      lVar6 = lVar6 + uVar10 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      lVar11 = *(long *)(param_1 + 0xd8);
      FUN_109c0e650();
      lVar6 = lVar6 + lVar11 + (ulong)((int)LZCOUNT((int)lVar11) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar3 & 8) != 0) {
      lVar6 = lVar6 + 9;
    }
    if ((uVar3 >> 4 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xe8)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar11 = (long)*(char *)(uVar10 + 0x1f);
    if (lVar11 < 0) {
      lVar11 = *(long *)(uVar10 + 0x10);
    }
    lVar6 = lVar11 + lVar6;
  }
  *(int *)(param_1 + 0x14) = (int)lVar6;
  return lVar6;
}



/* Entry: 109c0f7e8; end: 109c0f81f;  */

void FUN_109c0f7e8(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b2b8f8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 109c0f820; end: 109c0f853;  */

long * FUN_109c0f820(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c0f854; end: 109c0f9cb;  */

long FUN_109c0f854(long param_1)

{
  if (0 < *(int *)(param_1 + 0xdc)) {
    if (*(long *)(*(long *)(param_1 + 0xe0) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0xcc)) {
    if (*(long *)(*(long *)(param_1 + 0xd0) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0xbc)) {
    if (*(long *)(*(long *)(param_1 + 0xc0) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0xac)) {
    if (*(long *)(*(long *)(param_1 + 0xb0) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x9c)) {
    if (*(long *)(*(long *)(param_1 + 0xa0) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(long *)(*(long *)(param_1 + 0x90) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x7c)) {
    if (*(long *)(*(long *)(param_1 + 0x80) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    if (*(long *)(*(long *)(param_1 + 0x70) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x5c)) {
    if (*(long *)(*(long *)(param_1 + 0x60) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    if (*(long *)(*(long *)(param_1 + 0x50) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    if (*(long *)(*(long *)(param_1 + 0x40) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109c0f820(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c0f9cc; end: 109c0f9ff;  */

long * FUN_109c0f9cc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c0fa00; end: 109c0fa33;  */

long * FUN_109c0fa00(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c0fa34; end: 109c0fcd3;  */

void FUN_109c0fa34(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b2b8f8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 109c0fcd4; end: 109c0fe1f;  */

undefined8 * FUN_109c0fcd4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x78);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b2b998;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  FUN_109311ab0(puVar1 + 5,param_1,param_2 + 0x28);
  FUN_109311ab0(puVar1 + 7,param_1,param_2 + 0x38);
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar3 = (ulong *)(param_2 + 0x50);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[10] = puVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  puVar1[0xe] = *(undefined8 *)(param_2 + 0x70);
  puVar1[0xd] = uVar6;
  puVar1[0xc] = uVar5;
  puVar1[0xb] = uVar4;
  return puVar1;
}



/* Entry: 109c0fe20; end: 109c0fe63;  */

undefined8 * FUN_109c0fe20(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x208;
    __Znwm();
  }
  else {
    puVar3 = param_1;
    func_0x00010b4d80e0(param_1,0x208);
  }
  puVar3[1] = param_1;
  *puVar3 = &PTR_FUN_110b2b9e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar3 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 0x18);
  puVar3[2] = uVar4;
  *(undefined8 *)((long)puVar3 + 0x24) = 0;
  *(undefined8 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)((long)puVar3 + 0x2c) = 0;
  puVar3[6] = param_1;
  if (*(int *)(param_2 + 0x28) != 0) {
    func_0x000107c303c4(puVar3 + 4,param_2 + 0x20);
  }
  FUN_109345cec(puVar3 + 7,param_1,param_2 + 0x38);
  FUN_109311ab0(puVar3 + 9,param_1,param_2 + 0x48);
  FUN_109345cec(puVar3 + 0xb,param_1,param_2 + 0x58);
  FUN_109345cec(puVar3 + 0xd,param_1,param_2 + 0x68);
  FUN_109345cec(puVar3 + 0xf,param_1,param_2 + 0x78);
  FUN_109345cec(puVar3 + 0x11,param_1,param_2 + 0x88);
  FUN_109311ab0(puVar3 + 0x13,param_1,param_2 + 0x98);
  FUN_109311ab0(puVar3 + 0x15,param_1,param_2 + 0xa8);
  FUN_109311ab0(puVar3 + 0x17,param_1,param_2 + 0xb8);
  FUN_109311ab0(puVar3 + 0x19,param_1,param_2 + 200);
  FUN_109311ab0(puVar3 + 0x1b,param_1,param_2 + 0xd8);
  FUN_109311ab0(puVar3 + 0x1d,param_1,param_2 + 0xe8);
  puVar5 = (ulong *)(param_2 + 0xf8);
  puVar1 = (ulong *)*puVar5;
  if ((*puVar5 & 3) != 0) {
    func_0x000107c30244(puVar5,param_1);
    puVar1 = puVar5;
  }
  puVar3[0x1f] = puVar1;
  uVar2 = *(ulong *)(param_2 + 0x100);
  if ((uVar2 & 3) != 0) {
    uVar2 = param_2 + 0x100;
    func_0x000107c30244(uVar2,param_1);
  }
  puVar3[0x20] = uVar2;
  uVar2 = *(ulong *)(param_2 + 0x108);
  if ((uVar2 & 3) != 0) {
    uVar2 = param_2 + 0x108;
    func_0x000107c30244(uVar2,param_1);
  }
  puVar3[0x21] = uVar2;
  if ((*(byte *)(puVar3 + 2) >> 3 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109c0fcd4(param_1,*(undefined8 *)(param_2 + 0x110));
  }
  puVar3[0x22] = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x120);
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  uVar7 = *(undefined8 *)(param_2 + 0x128);
  uVar9 = *(undefined8 *)(param_2 + 0x140);
  uVar8 = *(undefined8 *)(param_2 + 0x138);
  puVar3[0x26] = *(undefined8 *)(param_2 + 0x130);
  puVar3[0x25] = uVar7;
  puVar3[0x28] = uVar9;
  puVar3[0x27] = uVar8;
  puVar3[0x24] = uVar6;
  puVar3[0x23] = uVar4;
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  uVar4 = *(undefined8 *)(param_2 + 0x148);
  uVar8 = *(undefined8 *)(param_2 + 0x160);
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  uVar9 = *(undefined8 *)(param_2 + 0x168);
  uVar11 = *(undefined8 *)(param_2 + 0x180);
  uVar10 = *(undefined8 *)(param_2 + 0x178);
  puVar3[0x2e] = *(undefined8 *)(param_2 + 0x170);
  puVar3[0x2d] = uVar9;
  puVar3[0x30] = uVar11;
  puVar3[0x2f] = uVar10;
  puVar3[0x2a] = uVar6;
  puVar3[0x29] = uVar4;
  puVar3[0x2c] = uVar8;
  puVar3[0x2b] = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 400);
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  uVar8 = *(undefined8 *)(param_2 + 0x1a0);
  uVar7 = *(undefined8 *)(param_2 + 0x198);
  uVar9 = *(undefined8 *)(param_2 + 0x1a8);
  uVar11 = *(undefined8 *)(param_2 + 0x1c0);
  uVar10 = *(undefined8 *)(param_2 + 0x1b8);
  puVar3[0x36] = *(undefined8 *)(param_2 + 0x1b0);
  puVar3[0x35] = uVar9;
  puVar3[0x38] = uVar11;
  puVar3[0x37] = uVar10;
  puVar3[0x32] = uVar6;
  puVar3[0x31] = uVar4;
  puVar3[0x34] = uVar8;
  puVar3[0x33] = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x1d0);
  uVar4 = *(undefined8 *)(param_2 + 0x1c8);
  uVar8 = *(undefined8 *)(param_2 + 0x1e0);
  uVar7 = *(undefined8 *)(param_2 + 0x1d8);
  uVar9 = *(undefined8 *)(param_2 + 0x1e8);
  uVar11 = *(undefined8 *)(param_2 + 0x200);
  uVar10 = *(undefined8 *)(param_2 + 0x1f8);
  puVar3[0x3e] = *(undefined8 *)(param_2 + 0x1f0);
  puVar3[0x3d] = uVar9;
  puVar3[0x40] = uVar11;
  puVar3[0x3f] = uVar10;
  puVar3[0x3a] = uVar6;
  puVar3[0x39] = uVar4;
  puVar3[0x3c] = uVar8;
  puVar3[0x3b] = uVar7;
  return puVar3;
}



/* Entry: 109c0fe64; end: 109c0feef;  */

undefined8 * FUN_109c0fe64(undefined8 *param_1)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b2b8f8;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  func_0x000109c0d950();
  return puVar1;
}


